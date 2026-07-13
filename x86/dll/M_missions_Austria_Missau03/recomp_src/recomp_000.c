#include "recomp.h"

/* FUN_10001000 @ 0x102f1000 (20 bytes, 6 insns) */
void f_102f1000(void) {
  FTRACE(0x102f1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f1005 jne 0x102f100c */
  if (!C.zf) goto L_102f100c;
  /* 102f1007 call 0x102f1020 */
  push32(0x102f100cu); f_102f1020();
L_102f100c:;
  /* 102f100c mov eax, 1 */
  EAX = (0x1u);
  /* 102f1011 ret 0xc */
  ESPCHK(0x102f1000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x102f1020 (938 bytes, 243 insns) */
void f_102f1020(void) {
  FTRACE(0x102f1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f1020 push esi */
  push32((uint32_t)(ESI));
  /* 102f1021 mov esi, dword ptr [0x102f8138] */
  ESI = (r32((uint32_t)(0x102f8138)));
  /* 102f1027 push edi */
  push32((uint32_t)(EDI));
  /* 102f1028 push 0x102f91c8 */
  push32((uint32_t)(0x102f91c8u));
  /* 102f102d push 0x102f9fa0 */
  push32((uint32_t)(0x102f9fa0u));
  /* 102f1032 call esi */
  call_ind((uint32_t)(ESI), 0x102f1034u);
  /* 102f1034 push 0x102f91c4 */
  push32((uint32_t)(0x102f91c4u));
  /* 102f1039 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f103e call esi */
  call_ind((uint32_t)(ESI), 0x102f1040u);
  /* 102f1040 push 0x102f91c0 */
  push32((uint32_t)(0x102f91c0u));
  /* 102f1045 push 0x102f9fb0 */
  push32((uint32_t)(0x102f9fb0u));
  /* 102f104a call esi */
  call_ind((uint32_t)(ESI), 0x102f104cu);
  /* 102f104c push 0x102f91bc */
  push32((uint32_t)(0x102f91bcu));
  /* 102f1051 push 0x102f9fb8 */
  push32((uint32_t)(0x102f9fb8u));
  /* 102f1056 call esi */
  call_ind((uint32_t)(ESI), 0x102f1058u);
  /* 102f1058 push 0x102f91b8 */
  push32((uint32_t)(0x102f91b8u));
  /* 102f105d push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f1062 call esi */
  call_ind((uint32_t)(ESI), 0x102f1064u);
  /* 102f1064 push 0x102f91b4 */
  push32((uint32_t)(0x102f91b4u));
  /* 102f1069 push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f106e call esi */
  call_ind((uint32_t)(ESI), 0x102f1070u);
  /* 102f1070 push 0x102f91b0 */
  push32((uint32_t)(0x102f91b0u));
  /* 102f1075 push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f107a call esi */
  call_ind((uint32_t)(ESI), 0x102f107cu);
  /* 102f107c push 0x102f91ac */
  push32((uint32_t)(0x102f91acu));
  /* 102f1081 push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1086 call esi */
  call_ind((uint32_t)(ESI), 0x102f1088u);
  /* 102f1088 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f108b push 0x102f91a8 */
  push32((uint32_t)(0x102f91a8u));
  /* 102f1090 push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1095 call esi */
  call_ind((uint32_t)(ESI), 0x102f1097u);
  /* 102f1097 push 0x102f91a4 */
  push32((uint32_t)(0x102f91a4u));
  /* 102f109c push 0x102f9ff0 */
  push32((uint32_t)(0x102f9ff0u));
  /* 102f10a1 call esi */
  call_ind((uint32_t)(ESI), 0x102f10a3u);
  /* 102f10a3 push 0x102f91a0 */
  push32((uint32_t)(0x102f91a0u));
  /* 102f10a8 push 0x102f9ff8 */
  push32((uint32_t)(0x102f9ff8u));
  /* 102f10ad call esi */
  call_ind((uint32_t)(ESI), 0x102f10afu);
  /* 102f10af push 0x102f919c */
  push32((uint32_t)(0x102f919cu));
  /* 102f10b4 push 0x102fa000 */
  push32((uint32_t)(0x102fa000u));
  /* 102f10b9 call esi */
  call_ind((uint32_t)(ESI), 0x102f10bbu);
  /* 102f10bb push 0x102f9198 */
  push32((uint32_t)(0x102f9198u));
  /* 102f10c0 push 0x102fa008 */
  push32((uint32_t)(0x102fa008u));
  /* 102f10c5 call esi */
  call_ind((uint32_t)(ESI), 0x102f10c7u);
  /* 102f10c7 push 0x102f9194 */
  push32((uint32_t)(0x102f9194u));
  /* 102f10cc push 0x102fa010 */
  push32((uint32_t)(0x102fa010u));
  /* 102f10d1 call esi */
  call_ind((uint32_t)(ESI), 0x102f10d3u);
  /* 102f10d3 push 0x102f9190 */
  push32((uint32_t)(0x102f9190u));
  /* 102f10d8 push 0x102fa018 */
  push32((uint32_t)(0x102fa018u));
  /* 102f10dd call esi */
  call_ind((uint32_t)(ESI), 0x102f10dfu);
  /* 102f10df push 0x102f9188 */
  push32((uint32_t)(0x102f9188u));
  /* 102f10e4 push 0x102fa118 */
  push32((uint32_t)(0x102fa118u));
  /* 102f10e9 call esi */
  call_ind((uint32_t)(ESI), 0x102f10ebu);
  /* 102f10eb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f10ee push 0x102f9184 */
  push32((uint32_t)(0x102f9184u));
  /* 102f10f3 push 0x102fa098 */
  push32((uint32_t)(0x102fa098u));
  /* 102f10f8 call esi */
  call_ind((uint32_t)(ESI), 0x102f10fau);
  /* 102f10fa push 0x102f9180 */
  push32((uint32_t)(0x102f9180u));
  /* 102f10ff push 0x102fa0a0 */
  push32((uint32_t)(0x102fa0a0u));
  /* 102f1104 call esi */
  call_ind((uint32_t)(ESI), 0x102f1106u);
  /* 102f1106 push 0x102f917c */
  push32((uint32_t)(0x102f917cu));
  /* 102f110b push 0x102fa0a8 */
  push32((uint32_t)(0x102fa0a8u));
  /* 102f1110 call esi */
  call_ind((uint32_t)(ESI), 0x102f1112u);
  /* 102f1112 push 0x102f9178 */
  push32((uint32_t)(0x102f9178u));
  /* 102f1117 push 0x102fa0b0 */
  push32((uint32_t)(0x102fa0b0u));
  /* 102f111c call esi */
  call_ind((uint32_t)(ESI), 0x102f111eu);
  /* 102f111e push 0x102f9174 */
  push32((uint32_t)(0x102f9174u));
  /* 102f1123 push 0x102fa0b8 */
  push32((uint32_t)(0x102fa0b8u));
  /* 102f1128 call esi */
  call_ind((uint32_t)(ESI), 0x102f112au);
  /* 102f112a push 0x102f9170 */
  push32((uint32_t)(0x102f9170u));
  /* 102f112f push 0x102fa0c0 */
  push32((uint32_t)(0x102fa0c0u));
  /* 102f1134 call esi */
  call_ind((uint32_t)(ESI), 0x102f1136u);
  /* 102f1136 push 0x102f916c */
  push32((uint32_t)(0x102f916cu));
  /* 102f113b push 0x102fa0c8 */
  push32((uint32_t)(0x102fa0c8u));
  /* 102f1140 call esi */
  call_ind((uint32_t)(ESI), 0x102f1142u);
  /* 102f1142 push 0x102f9168 */
  push32((uint32_t)(0x102f9168u));
  /* 102f1147 push 0x102fa0d0 */
  push32((uint32_t)(0x102fa0d0u));
  /* 102f114c call esi */
  call_ind((uint32_t)(ESI), 0x102f114eu);
  /* 102f114e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1151 push 0x102f9164 */
  push32((uint32_t)(0x102f9164u));
  /* 102f1156 push 0x102fa0d8 */
  push32((uint32_t)(0x102fa0d8u));
  /* 102f115b call esi */
  call_ind((uint32_t)(ESI), 0x102f115du);
  /* 102f115d push 0x102f915c */
  push32((uint32_t)(0x102f915cu));
  /* 102f1162 push 0x102fa040 */
  push32((uint32_t)(0x102fa040u));
  /* 102f1167 call esi */
  call_ind((uint32_t)(ESI), 0x102f1169u);
  /* 102f1169 push 0x102f9154 */
  push32((uint32_t)(0x102f9154u));
  /* 102f116e push 0x102fa048 */
  push32((uint32_t)(0x102fa048u));
  /* 102f1173 call esi */
  call_ind((uint32_t)(ESI), 0x102f1175u);
  /* 102f1175 push 0x102f914c */
  push32((uint32_t)(0x102f914cu));
  /* 102f117a push 0x102fa050 */
  push32((uint32_t)(0x102fa050u));
  /* 102f117f call esi */
  call_ind((uint32_t)(ESI), 0x102f1181u);
  /* 102f1181 push 0x102f9144 */
  push32((uint32_t)(0x102f9144u));
  /* 102f1186 push 0x102fa058 */
  push32((uint32_t)(0x102fa058u));
  /* 102f118b call esi */
  call_ind((uint32_t)(ESI), 0x102f118du);
  /* 102f118d push 0x102f913c */
  push32((uint32_t)(0x102f913cu));
  /* 102f1192 push 0x102fa060 */
  push32((uint32_t)(0x102fa060u));
  /* 102f1197 call esi */
  call_ind((uint32_t)(ESI), 0x102f1199u);
  /* 102f1199 push 0x102f9134 */
  push32((uint32_t)(0x102f9134u));
  /* 102f119e push 0x102fa068 */
  push32((uint32_t)(0x102fa068u));
  /* 102f11a3 call esi */
  call_ind((uint32_t)(ESI), 0x102f11a5u);
  /* 102f11a5 push 0x102f912c */
  push32((uint32_t)(0x102f912cu));
  /* 102f11aa push 0x102fa070 */
  push32((uint32_t)(0x102fa070u));
  /* 102f11af call esi */
  call_ind((uint32_t)(ESI), 0x102f11b1u);
  /* 102f11b1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f11b4 push 0x102f9124 */
  push32((uint32_t)(0x102f9124u));
  /* 102f11b9 push 0x102fa078 */
  push32((uint32_t)(0x102fa078u));
  /* 102f11be call esi */
  call_ind((uint32_t)(ESI), 0x102f11c0u);
  /* 102f11c0 push 0x102f911c */
  push32((uint32_t)(0x102f911cu));
  /* 102f11c5 push 0x102fa080 */
  push32((uint32_t)(0x102fa080u));
  /* 102f11ca call esi */
  call_ind((uint32_t)(ESI), 0x102f11ccu);
  /* 102f11cc push 0x102f9114 */
  push32((uint32_t)(0x102f9114u));
  /* 102f11d1 push 0x102fa088 */
  push32((uint32_t)(0x102fa088u));
  /* 102f11d6 call esi */
  call_ind((uint32_t)(ESI), 0x102f11d8u);
  /* 102f11d8 push 0x102f910c */
  push32((uint32_t)(0x102f910cu));
  /* 102f11dd push 0x102fa090 */
  push32((uint32_t)(0x102fa090u));
  /* 102f11e2 call esi */
  call_ind((uint32_t)(ESI), 0x102f11e4u);
  /* 102f11e4 push 0x102f9104 */
  push32((uint32_t)(0x102f9104u));
  /* 102f11e9 push 0x102f9f70 */
  push32((uint32_t)(0x102f9f70u));
  /* 102f11ee call esi */
  call_ind((uint32_t)(ESI), 0x102f11f0u);
  /* 102f11f0 push 0x102f90fc */
  push32((uint32_t)(0x102f90fcu));
  /* 102f11f5 push 0x102f9f78 */
  push32((uint32_t)(0x102f9f78u));
  /* 102f11fa call esi */
  call_ind((uint32_t)(ESI), 0x102f11fcu);
  /* 102f11fc push 0x102f90f4 */
  push32((uint32_t)(0x102f90f4u));
  /* 102f1201 push 0x102f9f80 */
  push32((uint32_t)(0x102f9f80u));
  /* 102f1206 call esi */
  call_ind((uint32_t)(ESI), 0x102f1208u);
  /* 102f1208 mov esi, dword ptr [0x102f813c] */
  ESI = (r32((uint32_t)(0x102f813c)));
  /* 102f120e push 0x102f90f0 */
  push32((uint32_t)(0x102f90f0u));
  /* 102f1213 push 0x102fa020 */
  push32((uint32_t)(0x102fa020u));
  /* 102f1218 call esi */
  call_ind((uint32_t)(ESI), 0x102f121au);
  /* 102f121a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f121d push 0x102f90ec */
  push32((uint32_t)(0x102f90ecu));
  /* 102f1222 push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1227 call esi */
  call_ind((uint32_t)(ESI), 0x102f1229u);
  /* 102f1229 push 0x102f90e8 */
  push32((uint32_t)(0x102f90e8u));
  /* 102f122e push 0x102fa028 */
  push32((uint32_t)(0x102fa028u));
  /* 102f1233 call esi */
  call_ind((uint32_t)(ESI), 0x102f1235u);
  /* 102f1235 push 0x102f90e4 */
  push32((uint32_t)(0x102f90e4u));
  /* 102f123a push 0x102fa130 */
  push32((uint32_t)(0x102fa130u));
  /* 102f123f call esi */
  call_ind((uint32_t)(ESI), 0x102f1241u);
  /* 102f1241 push 0x102f90e0 */
  push32((uint32_t)(0x102f90e0u));
  /* 102f1246 push 0x102fa030 */
  push32((uint32_t)(0x102fa030u));
  /* 102f124b call esi */
  call_ind((uint32_t)(ESI), 0x102f124du);
  /* 102f124d push 0x102f90dc */
  push32((uint32_t)(0x102f90dcu));
  /* 102f1252 push 0x102fa038 */
  push32((uint32_t)(0x102fa038u));
  /* 102f1257 call esi */
  call_ind((uint32_t)(ESI), 0x102f1259u);
  /* 102f1259 push 0x102f90d8 */
  push32((uint32_t)(0x102f90d8u));
  /* 102f125e push 0x102fa150 */
  push32((uint32_t)(0x102fa150u));
  /* 102f1263 call esi */
  call_ind((uint32_t)(ESI), 0x102f1265u);
  /* 102f1265 push 0x102f90d4 */
  push32((uint32_t)(0x102f90d4u));
  /* 102f126a push 0x102fa158 */
  push32((uint32_t)(0x102fa158u));
  /* 102f126f call esi */
  call_ind((uint32_t)(ESI), 0x102f1271u);
  /* 102f1271 push 0x102f90d0 */
  push32((uint32_t)(0x102f90d0u));
  /* 102f1276 push 0x102fa160 */
  push32((uint32_t)(0x102fa160u));
  /* 102f127b call esi */
  call_ind((uint32_t)(ESI), 0x102f127du);
  /* 102f127d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1280 push 0x102f90cc */
  push32((uint32_t)(0x102f90ccu));
  /* 102f1285 push 0x102fa168 */
  push32((uint32_t)(0x102fa168u));
  /* 102f128a call esi */
  call_ind((uint32_t)(ESI), 0x102f128cu);
  /* 102f128c push 0x102f90c8 */
  push32((uint32_t)(0x102f90c8u));
  /* 102f1291 push 0x102fa170 */
  push32((uint32_t)(0x102fa170u));
  /* 102f1296 call esi */
  call_ind((uint32_t)(ESI), 0x102f1298u);
  /* 102f1298 push 0x102f90c4 */
  push32((uint32_t)(0x102f90c4u));
  /* 102f129d push 0x102fa178 */
  push32((uint32_t)(0x102fa178u));
  /* 102f12a2 call esi */
  call_ind((uint32_t)(ESI), 0x102f12a4u);
  /* 102f12a4 push 0x102f90c0 */
  push32((uint32_t)(0x102f90c0u));
  /* 102f12a9 push 0x102fa180 */
  push32((uint32_t)(0x102fa180u));
  /* 102f12ae call esi */
  call_ind((uint32_t)(ESI), 0x102f12b0u);
  /* 102f12b0 push 0x102f90bc */
  push32((uint32_t)(0x102f90bcu));
  /* 102f12b5 push 0x102fa188 */
  push32((uint32_t)(0x102fa188u));
  /* 102f12ba call esi */
  call_ind((uint32_t)(ESI), 0x102f12bcu);
  /* 102f12bc push 0x102f90b8 */
  push32((uint32_t)(0x102f90b8u));
  /* 102f12c1 push 0x102fa190 */
  push32((uint32_t)(0x102fa190u));
  /* 102f12c6 call esi */
  call_ind((uint32_t)(ESI), 0x102f12c8u);
  /* 102f12c8 push 0x102f90b0 */
  push32((uint32_t)(0x102f90b0u));
  /* 102f12cd push 0x102fa0e0 */
  push32((uint32_t)(0x102fa0e0u));
  /* 102f12d2 call esi */
  call_ind((uint32_t)(ESI), 0x102f12d4u);
  /* 102f12d4 push 0x102f90a8 */
  push32((uint32_t)(0x102f90a8u));
  /* 102f12d9 push 0x102fa0e8 */
  push32((uint32_t)(0x102fa0e8u));
  /* 102f12de call esi */
  call_ind((uint32_t)(ESI), 0x102f12e0u);
  /* 102f12e0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f12e3 push 0x102f90a0 */
  push32((uint32_t)(0x102f90a0u));
  /* 102f12e8 push 0x102fa0f0 */
  push32((uint32_t)(0x102fa0f0u));
  /* 102f12ed call esi */
  call_ind((uint32_t)(ESI), 0x102f12efu);
  /* 102f12ef push 0x102f9098 */
  push32((uint32_t)(0x102f9098u));
  /* 102f12f4 push 0x102fa0f8 */
  push32((uint32_t)(0x102fa0f8u));
  /* 102f12f9 call esi */
  call_ind((uint32_t)(ESI), 0x102f12fbu);
  /* 102f12fb push 0x102f9090 */
  push32((uint32_t)(0x102f9090u));
  /* 102f1300 push 0x102fa100 */
  push32((uint32_t)(0x102fa100u));
  /* 102f1305 call esi */
  call_ind((uint32_t)(ESI), 0x102f1307u);
  /* 102f1307 push 0x102f9088 */
  push32((uint32_t)(0x102f9088u));
  /* 102f130c push 0x102fa108 */
  push32((uint32_t)(0x102fa108u));
  /* 102f1311 call esi */
  call_ind((uint32_t)(ESI), 0x102f1313u);
  /* 102f1313 push 0x102f9080 */
  push32((uint32_t)(0x102f9080u));
  /* 102f1318 push 0x102fa110 */
  push32((uint32_t)(0x102fa110u));
  /* 102f131d call esi */
  call_ind((uint32_t)(ESI), 0x102f131fu);
  /* 102f131f push 0x102f9078 */
  push32((uint32_t)(0x102f9078u));
  /* 102f1324 push 0x102fa128 */
  push32((uint32_t)(0x102fa128u));
  /* 102f1329 call esi */
  call_ind((uint32_t)(ESI), 0x102f132bu);
  /* 102f132b push 0x102f9070 */
  push32((uint32_t)(0x102f9070u));
  /* 102f1330 push 0x102fa138 */
  push32((uint32_t)(0x102fa138u));
  /* 102f1335 call esi */
  call_ind((uint32_t)(ESI), 0x102f1337u);
  /* 102f1337 push 0x102f9068 */
  push32((uint32_t)(0x102f9068u));
  /* 102f133c push 0x102fa140 */
  push32((uint32_t)(0x102fa140u));
  /* 102f1341 call esi */
  call_ind((uint32_t)(ESI), 0x102f1343u);
  /* 102f1343 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1346 push 0x102f9060 */
  push32((uint32_t)(0x102f9060u));
  /* 102f134b push 0x102fa148 */
  push32((uint32_t)(0x102fa148u));
  /* 102f1350 call esi */
  call_ind((uint32_t)(ESI), 0x102f1352u);
  /* 102f1352 push 0x102f9058 */
  push32((uint32_t)(0x102f9058u));
  /* 102f1357 push 0x102f9f88 */
  push32((uint32_t)(0x102f9f88u));
  /* 102f135c call esi */
  call_ind((uint32_t)(ESI), 0x102f135eu);
  /* 102f135e push 0x102f9050 */
  push32((uint32_t)(0x102f9050u));
  /* 102f1363 push 0x102f9f90 */
  push32((uint32_t)(0x102f9f90u));
  /* 102f1368 call esi */
  call_ind((uint32_t)(ESI), 0x102f136au);
  /* 102f136a push 0x102f9048 */
  push32((uint32_t)(0x102f9048u));
  /* 102f136f push 0x102f9f98 */
  push32((uint32_t)(0x102f9f98u));
  /* 102f1374 call esi */
  call_ind((uint32_t)(ESI), 0x102f1376u);
  /* 102f1376 push 8 */
  push32((uint32_t)(0x8u));
  /* 102f1378 push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f137d call dword ptr [0x102f8134] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8134))), 0x102f1383u);
  /* 102f1383 push 0x102f9fe8 */
  push32((uint32_t)(0x102f9fe8u));
  /* 102f1388 call dword ptr [0x102f8144] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8144))), 0x102f138eu);
  /* 102f138e mov esi, dword ptr [0x102f8148] */
  ESI = (r32((uint32_t)(0x102f8148)));
  /* 102f1394 push 0x102f9040 */
  push32((uint32_t)(0x102f9040u));
  /* 102f1399 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f139b call esi */
  call_ind((uint32_t)(ESI), 0x102f139du);
  /* 102f139d mov edi, dword ptr [0x102f8140] */
  EDI = (r32((uint32_t)(0x102f8140)));
  /* 102f13a3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102f13a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f13a7 call edi */
  call_ind((uint32_t)(EDI), 0x102f13a9u);
  /* 102f13a9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102f13ab push 4 */
  push32((uint32_t)(0x4u));
  /* 102f13ad call edi */
  call_ind((uint32_t)(EDI), 0x102f13afu);
  /* 102f13af add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f13b2 push 0x102f9038 */
  push32((uint32_t)(0x102f9038u));
  /* 102f13b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f13b9 call esi */
  call_ind((uint32_t)(ESI), 0x102f13bbu);
  /* 102f13bb push 0x102f9030 */
  push32((uint32_t)(0x102f9030u));
  /* 102f13c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 102f13c2 call esi */
  call_ind((uint32_t)(ESI), 0x102f13c4u);
  /* 102f13c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f13c7 pop edi */
  EDI = (pop32());
  /* 102f13c8 pop esi */
  ESI = (pop32());
  /* 102f13c9 ret  */
  ESPCHK(0x102f1020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x102f13d0 (5079 bytes, 1554 insns) */
void f_102f13d0(void) {
  FTRACE(0x102f13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f13d0 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f13d3 push ebx */
  push32((uint32_t)(EBX));
  /* 102f13d4 push ebp */
  push32((uint32_t)(EBP));
  /* 102f13d5 push esi */
  push32((uint32_t)(ESI));
  /* 102f13d6 push edi */
  push32((uint32_t)(EDI));
  /* 102f13d7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102f13d9 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f13dfu);
  /* 102f13df mov edi, dword ptr [0x102f80c4] */
  EDI = (r32((uint32_t)(0x102f80c4)));
  /* 102f13e5 mov ebp, dword ptr [0x102f80bc] */
  EBP = (r32((uint32_t)(0x102f80bc)));
  /* 102f13eb mov esi, dword ptr [0x102f80cc] */
  ESI = (r32((uint32_t)(0x102f80cc)));
  /* 102f13f1 mov ebx, dword ptr [0x102f80d0] */
  EBX = (r32((uint32_t)(0x102f80d0)));
  /* 102f13f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f13fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f13fc je 0x102f159d */
  if (C.zf) goto L_102f159d;
  /* 102f1402 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1404 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102f1406 call edi */
  call_ind((uint32_t)(EDI), 0x102f1408u);
  /* 102f1408 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f140a call ebp */
  call_ind((uint32_t)(EBP), 0x102f140cu);
  /* 102f140c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f140f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f1411 jne 0x102f1426 */
  if (!C.zf) goto L_102f1426;
  /* 102f1413 push eax */
  push32((uint32_t)(EAX));
  /* 102f1414 push 0x102fa018 */
  push32((uint32_t)(0x102fa018u));
  /* 102f1419 call esi */
  call_ind((uint32_t)(ESI), 0x102f141bu);
  /* 102f141b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f141d call dword ptr [0x102f80c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c8))), 0x102f1423u);
  /* 102f1423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1426:;
  /* 102f1426 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1428 call ebp */
  call_ind((uint32_t)(EBP), 0x102f142au);
  /* 102f142a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f142d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1430 jne 0x102f1446 */
  if (!C.zf) goto L_102f1446;
  /* 102f1432 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1434 push 0x102fa118 */
  push32((uint32_t)(0x102fa118u));
  /* 102f1439 call esi */
  call_ind((uint32_t)(ESI), 0x102f143bu);
  /* 102f143b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f143d call dword ptr [0x102f80c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c8))), 0x102f1443u);
  /* 102f1443 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1446:;
  /* 102f1446 mov esi, dword ptr [0x102f80d8] */
  ESI = (r32((uint32_t)(0x102f80d8)));
  /* 102f144c push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 102f1451 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f1453 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1455 call esi */
  call_ind((uint32_t)(ESI), 0x102f1457u);
  /* 102f1457 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 102f145c push 1 */
  push32((uint32_t)(0x1u));
  /* 102f145e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1460 call esi */
  call_ind((uint32_t)(ESI), 0x102f1462u);
  /* 102f1462 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1464 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1466 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1468 call esi */
  call_ind((uint32_t)(ESI), 0x102f146au);
  /* 102f146a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f146c push 2 */
  push32((uint32_t)(0x2u));
  /* 102f146e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1470 call esi */
  call_ind((uint32_t)(ESI), 0x102f1472u);
  /* 102f1472 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1474 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1476u);
  /* 102f1476 mov ecx, 0xc */
  ECX = (0xcu);
  /* 102f147b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f147d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102f1480 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102f1483 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102f1486 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102f1489 push eax */
  push32((uint32_t)(EAX));
  /* 102f148a push 5 */
  push32((uint32_t)(0x5u));
  /* 102f148c push 0 */
  push32((uint32_t)(0x0u));
  /* 102f148e call esi */
  call_ind((uint32_t)(ESI), 0x102f1490u);
  /* 102f1490 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1493 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1495 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1497u);
  /* 102f1497 mov ecx, 0xc */
  ECX = (0xcu);
  /* 102f149c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f149e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 102f14a1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102f14a4 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102f14a7 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f14aa push ecx */
  push32((uint32_t)(ECX));
  /* 102f14ab push 4 */
  push32((uint32_t)(0x4u));
  /* 102f14ad push 0 */
  push32((uint32_t)(0x0u));
  /* 102f14af call esi */
  call_ind((uint32_t)(ESI), 0x102f14b1u);
  /* 102f14b1 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 102f14b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f14b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f14ba call esi */
  call_ind((uint32_t)(ESI), 0x102f14bcu);
  /* 102f14bc push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 102f14c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f14c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f14c5 call esi */
  call_ind((uint32_t)(ESI), 0x102f14c7u);
  /* 102f14c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f14c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f14cb push 1 */
  push32((uint32_t)(0x1u));
  /* 102f14cd call esi */
  call_ind((uint32_t)(ESI), 0x102f14cfu);
  /* 102f14cf push 0 */
  push32((uint32_t)(0x0u));
  /* 102f14d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f14d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f14d5 call esi */
  call_ind((uint32_t)(ESI), 0x102f14d7u);
  /* 102f14d7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f14da push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 102f14df push 5 */
  push32((uint32_t)(0x5u));
  /* 102f14e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f14e3 call esi */
  call_ind((uint32_t)(ESI), 0x102f14e5u);
  /* 102f14e5 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 102f14ea push 4 */
  push32((uint32_t)(0x4u));
  /* 102f14ec push 1 */
  push32((uint32_t)(0x1u));
  /* 102f14ee call esi */
  call_ind((uint32_t)(ESI), 0x102f14f0u);
  /* 102f14f0 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 102f14f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f14f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f14f9 call esi */
  call_ind((uint32_t)(ESI), 0x102f14fbu);
  /* 102f14fb push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 102f1500 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1502 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1504 call esi */
  call_ind((uint32_t)(ESI), 0x102f1506u);
  /* 102f1506 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1508 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f150a push 4 */
  push32((uint32_t)(0x4u));
  /* 102f150c call esi */
  call_ind((uint32_t)(ESI), 0x102f150eu);
  /* 102f150e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1510 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f1512 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1514 call esi */
  call_ind((uint32_t)(ESI), 0x102f1516u);
  /* 102f1516 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1519 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 102f151e push 5 */
  push32((uint32_t)(0x5u));
  /* 102f1520 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1522 call esi */
  call_ind((uint32_t)(ESI), 0x102f1524u);
  /* 102f1524 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 102f1529 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f152b push 4 */
  push32((uint32_t)(0x4u));
  /* 102f152d call esi */
  call_ind((uint32_t)(ESI), 0x102f152fu);
  /* 102f152f push 0x102f9274 */
  push32((uint32_t)(0x102f9274u));
  /* 102f1534 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1536u);
  /* 102f1536 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1538 call ebp */
  call_ind((uint32_t)(EBP), 0x102f153au);
  /* 102f153a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f153d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f153f jne 0x102f155b */
  if (!C.zf) goto L_102f155b;
  /* 102f1541 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 102f1546 push 5 */
  push32((uint32_t)(0x5u));
  /* 102f1548 push eax */
  push32((uint32_t)(EAX));
  /* 102f1549 call esi */
  call_ind((uint32_t)(ESI), 0x102f154bu);
  /* 102f154b push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 102f1550 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1552 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1554 call esi */
  call_ind((uint32_t)(ESI), 0x102f1556u);
  /* 102f1556 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1559 jmp 0x102f1565 */
  goto L_102f1565;
L_102f155b:;
  /* 102f155b push 0x102f926c */
  push32((uint32_t)(0x102f926cu));
  /* 102f1560 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1562u);
  /* 102f1562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1565:;
  /* 102f1565 mov esi, dword ptr [0x102f80dc] */
  ESI = (r32((uint32_t)(0x102f80dc)));
  /* 102f156b push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 102f1570 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1572 call esi */
  call_ind((uint32_t)(ESI), 0x102f1574u);
  /* 102f1574 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 102f1579 push 0x102f9fa0 */
  push32((uint32_t)(0x102f9fa0u));
  /* 102f157e push 0x102fa020 */
  push32((uint32_t)(0x102fa020u));
  /* 102f1583 push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f1588 call dword ptr [0x102f80d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80d4))), 0x102f158eu);
  /* 102f158e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102f1590 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f1592 call esi */
  call_ind((uint32_t)(ESI), 0x102f1594u);
  /* 102f1594 mov esi, dword ptr [0x102f80cc] */
  ESI = (r32((uint32_t)(0x102f80cc)));
  /* 102f159a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f159d:;
  /* 102f159d push 1 */
  push32((uint32_t)(0x1u));
  /* 102f159f call dword ptr [0x102f80e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e4))), 0x102f15a5u);
  /* 102f15a5 mov ebp, dword ptr [0x102f80e8] */
  EBP = (r32((uint32_t)(0x102f80e8)));
  /* 102f15ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f15ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f15b0 je 0x102f15fa */
  if (C.zf) goto L_102f15fa;
  /* 102f15b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f15b4 push 0x102f9fb8 */
  push32((uint32_t)(0x102f9fb8u));
  /* 102f15b9 call esi */
  call_ind((uint32_t)(ESI), 0x102f15bbu);
  /* 102f15bb push 0 */
  push32((uint32_t)(0x0u));
  /* 102f15bd push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 102f15c2 push 0x102fa130 */
  push32((uint32_t)(0x102fa130u));
  /* 102f15c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f15c9 call ebp */
  call_ind((uint32_t)(EBP), 0x102f15cbu);
  /* 102f15cb push 2 */
  push32((uint32_t)(0x2u));
  /* 102f15cd push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 102f15d2 push 0x102fa028 */
  push32((uint32_t)(0x102fa028u));
  /* 102f15d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f15d9 call ebp */
  call_ind((uint32_t)(EBP), 0x102f15dbu);
  /* 102f15db push 2 */
  push32((uint32_t)(0x2u));
  /* 102f15dd push 0 */
  push32((uint32_t)(0x0u));
  /* 102f15df push 0x102fa030 */
  push32((uint32_t)(0x102fa030u));
  /* 102f15e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f15e6 call ebp */
  call_ind((uint32_t)(EBP), 0x102f15e8u);
  /* 102f15e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f15ea push 4 */
  push32((uint32_t)(0x4u));
  /* 102f15ec push 0x102fa038 */
  push32((uint32_t)(0x102fa038u));
  /* 102f15f1 call dword ptr [0x102f80e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e0))), 0x102f15f7u);
  /* 102f15f7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f15fa:;
  /* 102f15fa push 0x12 */
  push32((uint32_t)(0x12u));
  /* 102f15fc call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1602u);
  /* 102f1602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1605 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1607 je 0x102f164c */
  if (C.zf) goto L_102f164c;
  /* 102f1609 push 0x102f9fb8 */
  push32((uint32_t)(0x102f9fb8u));
  /* 102f160e push 0x102fa030 */
  push32((uint32_t)(0x102fa030u));
  /* 102f1613 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1619u);
  /* 102f1619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f161c cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f161f jle 0x102f164c */
  if ((C.zf||C.sf!=C.of)) goto L_102f164c;
  /* 102f1621 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1623 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 102f1625 call edi */
  call_ind((uint32_t)(EDI), 0x102f1627u);
  /* 102f1627 push 0x102f9264 */
  push32((uint32_t)(0x102f9264u));
  /* 102f162c call ebx */
  call_ind((uint32_t)(EBX), 0x102f162eu);
  /* 102f162e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1630 push 0x102f9fb8 */
  push32((uint32_t)(0x102f9fb8u));
  /* 102f1635 call esi */
  call_ind((uint32_t)(ESI), 0x102f1637u);
  /* 102f1637 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1639 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f163b call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1641u);
  /* 102f1641 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1643 call dword ptr [0x102f80ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80ec))), 0x102f1649u);
  /* 102f1649 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f164c:;
  /* 102f164c push 1 */
  push32((uint32_t)(0x1u));
  /* 102f164e call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1654u);
  /* 102f1654 mov ebp, dword ptr [0x102f80fc] */
  EBP = (r32((uint32_t)(0x102f80fc)));
  /* 102f165a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f165d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f165f je 0x102f16b6 */
  if (C.zf) goto L_102f16b6;
  /* 102f1661 mov esi, dword ptr [0x102f8100] */
  ESI = (r32((uint32_t)(0x102f8100)));
  /* 102f1667 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1669 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f166b call esi */
  call_ind((uint32_t)(ESI), 0x102f166du);
  /* 102f166d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1670 cmp eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1673 jl 0x102f1683 */
  if ((C.sf!=C.of)) goto L_102f1683;
  /* 102f1675 push 5 */
  push32((uint32_t)(0x5u));
  /* 102f1677 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1679 call esi */
  call_ind((uint32_t)(ESI), 0x102f167bu);
  /* 102f167b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f167e cmp eax, 0x73 */
  { uint32_t _a=(EAX),_b=(0x73u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1681 jge 0x102f16b6 */
  if ((C.sf==C.of)) goto L_102f16b6;
L_102f1683:;
  /* 102f1683 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1685 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1687 call edi */
  call_ind((uint32_t)(EDI), 0x102f1689u);
  /* 102f1689 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f168e call ebp */
  call_ind((uint32_t)(EBP), 0x102f1690u);
  /* 102f1690 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f1695 jle 0x102f16ac */
  if ((C.zf||C.sf!=C.of)) goto L_102f16ac;
  /* 102f1697 push 0x102f9fb0 */
  push32((uint32_t)(0x102f9fb0u));
  /* 102f169c call ebp */
  call_ind((uint32_t)(EBP), 0x102f169eu);
  /* 102f169e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f16a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f16a3 jle 0x102f16ac */
  if ((C.zf||C.sf!=C.of)) goto L_102f16ac;
  /* 102f16a5 push 0x102f925c */
  push32((uint32_t)(0x102f925cu));
  /* 102f16aa jmp 0x102f16b1 */
  goto L_102f16b1;
L_102f16ac:;
  /* 102f16ac push 0x102f9254 */
  push32((uint32_t)(0x102f9254u));
L_102f16b1:;
  /* 102f16b1 call ebx */
  call_ind((uint32_t)(EBX), 0x102f16b3u);
  /* 102f16b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f16b6:;
  /* 102f16b6 mov esi, dword ptr [0x102f80c0] */
  ESI = (r32((uint32_t)(0x102f80c0)));
  /* 102f16bc push 1 */
  push32((uint32_t)(0x1u));
  /* 102f16be call esi */
  call_ind((uint32_t)(ESI), 0x102f16c0u);
  /* 102f16c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f16c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f16c5 jne 0x102f173c */
  if (!C.zf) goto L_102f173c;
  /* 102f16c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f16c9 call esi */
  call_ind((uint32_t)(ESI), 0x102f16cbu);
  /* 102f16cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f16ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f16d0 je 0x102f173c */
  if (C.zf) goto L_102f173c;
  /* 102f16d2 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f16d7 call ebp */
  call_ind((uint32_t)(EBP), 0x102f16d9u);
  /* 102f16d9 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f16de push 0x102fa020 */
  push32((uint32_t)(0x102fa020u));
  /* 102f16e3 mov esi, eax */
  ESI = (EAX);
  /* 102f16e5 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f16ebu);
  /* 102f16eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f16ee cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f16f0 jne 0x102f173c */
  if (!C.zf) goto L_102f173c;
  /* 102f16f2 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f16f7 call ebp */
  call_ind((uint32_t)(EBP), 0x102f16f9u);
  /* 102f16f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f16fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f16fe jle 0x102f173c */
  if ((C.zf||C.sf!=C.of)) goto L_102f173c;
  /* 102f1700 push 0x102f9fb0 */
  push32((uint32_t)(0x102f9fb0u));
  /* 102f1705 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1707u);
  /* 102f1707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f170a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f170c jle 0x102f173c */
  if ((C.zf||C.sf!=C.of)) goto L_102f173c;
  /* 102f170e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1710 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f1712 call edi */
  call_ind((uint32_t)(EDI), 0x102f1714u);
  /* 102f1714 push 0x102f924c */
  push32((uint32_t)(0x102f924cu));
  /* 102f1719 call ebx */
  call_ind((uint32_t)(EBX), 0x102f171bu);
  /* 102f171b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f171d call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f1723u);
  /* 102f1723 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102f1726 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102f1729 lea eax, [edx*8 + 0x1f4] */
  EAX = ((uint32_t)(EDX*8 + 0x1f4));
  /* 102f1730 push eax */
  push32((uint32_t)(EAX));
  /* 102f1731 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f1733 call dword ptr [0x102f80dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80dc))), 0x102f1739u);
  /* 102f1739 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f173c:;
  /* 102f173c push 3 */
  push32((uint32_t)(0x3u));
  /* 102f173e call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1744u);
  /* 102f1744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1747 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1749 je 0x102f1792 */
  if (C.zf) goto L_102f1792;
  /* 102f174b push 2 */
  push32((uint32_t)(0x2u));
  /* 102f174d call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1753u);
  /* 102f1753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1756 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1758 jne 0x102f1792 */
  if (!C.zf) goto L_102f1792;
  /* 102f175a push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f175f call ebp */
  call_ind((uint32_t)(EBP), 0x102f1761u);
  /* 102f1761 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f1766 push 0x102fa020 */
  push32((uint32_t)(0x102fa020u));
  /* 102f176b mov esi, eax */
  ESI = (EAX);
  /* 102f176d call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1773u);
  /* 102f1773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1776 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1778 jge 0x102f1792 */
  if ((C.sf==C.of)) goto L_102f1792;
  /* 102f177a push 1 */
  push32((uint32_t)(0x1u));
  /* 102f177c push 2 */
  push32((uint32_t)(0x2u));
  /* 102f177e call edi */
  call_ind((uint32_t)(EDI), 0x102f1780u);
  /* 102f1780 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f1782 call dword ptr [0x102f80f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f8))), 0x102f1788u);
  /* 102f1788 push 0x102f9244 */
  push32((uint32_t)(0x102f9244u));
  /* 102f178d call ebx */
  call_ind((uint32_t)(EBX), 0x102f178fu);
  /* 102f178f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1792:;
  /* 102f1792 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f1794 call dword ptr [0x102f80e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e4))), 0x102f179au);
  /* 102f179a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f179d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f179f je 0x102f17b9 */
  if (C.zf) goto L_102f17b9;
  /* 102f17a1 push 0x102f923c */
  push32((uint32_t)(0x102f923cu));
  /* 102f17a6 call ebx */
  call_ind((uint32_t)(EBX), 0x102f17a8u);
  /* 102f17a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f17aa call dword ptr [0x102f80f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f8))), 0x102f17b0u);
  /* 102f17b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f17b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f17b4 call edi */
  call_ind((uint32_t)(EDI), 0x102f17b6u);
  /* 102f17b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f17b9:;
  /* 102f17b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f17bb call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f17c1u);
  /* 102f17c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f17c4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f17c6 jne 0x102f1874 */
  if (!C.zf) goto L_102f1874;
  /* 102f17cc push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f17d1 call ebp */
  call_ind((uint32_t)(EBP), 0x102f17d3u);
  /* 102f17d3 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f17d8 push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f17dd mov esi, eax */
  ESI = (EAX);
  /* 102f17df call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f17e5u);
  /* 102f17e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f17e8 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f17ea jne 0x102f1874 */
  if (!C.zf) goto L_102f1874;
  /* 102f17f0 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f17f5 call ebp */
  call_ind((uint32_t)(EBP), 0x102f17f7u);
  /* 102f17f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f17fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f17fc jle 0x102f1874 */
  if ((C.zf||C.sf!=C.of)) goto L_102f1874;
  /* 102f17fe push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1800 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1802 call edi */
  call_ind((uint32_t)(EDI), 0x102f1804u);
  /* 102f1804 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1806 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f1808 call edi */
  call_ind((uint32_t)(EDI), 0x102f180au);
  /* 102f180a push 1 */
  push32((uint32_t)(0x1u));
  /* 102f180c push 3 */
  push32((uint32_t)(0x3u));
  /* 102f180e call edi */
  call_ind((uint32_t)(EDI), 0x102f1810u);
  /* 102f1810 push 0x102f9234 */
  push32((uint32_t)(0x102f9234u));
  /* 102f1815 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1817u);
  /* 102f1817 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1819 call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f181fu);
  /* 102f181f mov esi, 6 */
  ESI = (0x6u);
  /* 102f1824 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f1829 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f182b call ebp */
  call_ind((uint32_t)(EBP), 0x102f182du);
  /* 102f182d imul esi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f1830 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 102f1833 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102f1836 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 102f1839 push ecx */
  push32((uint32_t)(ECX));
  /* 102f183a push 4 */
  push32((uint32_t)(0x4u));
  /* 102f183c push 0 */
  push32((uint32_t)(0x0u));
  /* 102f183e call dword ptr [0x102f8108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8108))), 0x102f1844u);
  /* 102f1844 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1846 call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f184cu);
  /* 102f184c mov esi, 6 */
  ESI = (0x6u);
  /* 102f1851 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f1856 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f1858 call ebp */
  call_ind((uint32_t)(EBP), 0x102f185au);
  /* 102f185a imul esi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f185d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 102f1860 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 102f1863 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 102f1866 push edx */
  push32((uint32_t)(EDX));
  /* 102f1867 push 5 */
  push32((uint32_t)(0x5u));
  /* 102f1869 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f186b call dword ptr [0x102f8108] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8108))), 0x102f1871u);
  /* 102f1871 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1874:;
  /* 102f1874 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f1876 call dword ptr [0x102f810c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f810c))), 0x102f187cu);
  /* 102f187c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f187f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1881 je 0x102f18aa */
  if (C.zf) goto L_102f18aa;
  /* 102f1883 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 102f1888 push 0x102f9fa0 */
  push32((uint32_t)(0x102f9fa0u));
  /* 102f188d push 0x102fa020 */
  push32((uint32_t)(0x102fa020u));
  /* 102f1892 push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f1897 call dword ptr [0x102f80d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80d4))), 0x102f189du);
  /* 102f189d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102f189f push 3 */
  push32((uint32_t)(0x3u));
  /* 102f18a1 call dword ptr [0x102f80dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80dc))), 0x102f18a7u);
  /* 102f18a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f18aa:;
  /* 102f18aa push 0 */
  push32((uint32_t)(0x0u));
  /* 102f18ac call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f18b2u);
  /* 102f18b2 mov esi, dword ptr [0x102f8104] */
  ESI = (r32((uint32_t)(0x102f8104)));
  /* 102f18b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f18bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f18bd jle 0x102f1f3a */
  if ((C.zf||C.sf!=C.of)) goto L_102f1f3a;
  /* 102f18c3 push 0xa */
  push32((uint32_t)(0xau));
  /* 102f18c5 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f18cbu);
  /* 102f18cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f18ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f18d0 je 0x102f195b */
  if (C.zf) goto L_102f195b;
  /* 102f18d6 push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f18db call ebp */
  call_ind((uint32_t)(EBP), 0x102f18ddu);
  /* 102f18dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f18e0 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f18e3 jge 0x102f195b */
  if ((C.sf==C.of)) goto L_102f195b;
  /* 102f18e5 push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f18ea call ebp */
  call_ind((uint32_t)(EBP), 0x102f18ecu);
  /* 102f18ec push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f18f1 push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f18f6 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 102f18fa call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1900u);
  /* 102f1900 mov ecx, eax */
  ECX = (EAX);
  /* 102f1902 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 102f1906 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f1907 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f1909 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f190c sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102f190e cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1910 jge 0x102f195b */
  if ((C.sf==C.of)) goto L_102f195b;
  /* 102f1912 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1914 push 0xa */
  push32((uint32_t)(0xau));
  /* 102f1916 call edi */
  call_ind((uint32_t)(EDI), 0x102f1918u);
  /* 102f1918 push 0x102f922c */
  push32((uint32_t)(0x102f922cu));
  /* 102f191d call ebx */
  call_ind((uint32_t)(EBX), 0x102f191fu);
  /* 102f191f push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1921 call esi */
  call_ind((uint32_t)(ESI), 0x102f1923u);
  /* 102f1923 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1925 push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f192a call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1930u);
  /* 102f1930 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1932 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1934 call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f193au);
  /* 102f193a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f193c push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f1941 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1947u);
  /* 102f1947 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1949 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f194b push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1950 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1952 call dword ptr [0x102f80e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e8))), 0x102f1958u);
  /* 102f1958 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f195b:;
  /* 102f195b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102f195d call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1963u);
  /* 102f1963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1966 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1968 je 0x102f1a0e */
  if (C.zf) goto L_102f1a0e;
  /* 102f196e push 0xa */
  push32((uint32_t)(0xau));
  /* 102f1970 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1976u);
  /* 102f1976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1979 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f197b jne 0x102f1a0e */
  if (!C.zf) goto L_102f1a0e;
  /* 102f1981 push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f1986 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1988u);
  /* 102f1988 push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f198d push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1992 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1996 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f199cu);
  /* 102f199c mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 102f19a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f19a2 fild dword ptr [esp + 0x20] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x20)));
  /* 102f19a6 fstp qword ptr [esp + 0x28] */
  wf64((uint32_t)(ESP + 0x28), FPU_ST(0));
  (void)fpu_pop();
  /* 102f19aa call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f19b0u);
  /* 102f19b0 mov ecx, eax */
  ECX = (EAX);
  /* 102f19b2 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102f19b7 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102f19b9 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102f19bc mov eax, edx */
  EAX = (EDX);
  /* 102f19be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f19c1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102f19c4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f19c6 mov dword ptr [esp + 0x10], edx */
  w32((uint32_t)(ESP + 0x10), (EDX));
  /* 102f19ca fild dword ptr [esp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x10)));
  /* 102f19ce fadd qword ptr [0x102f8150] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x102f8150)));
  /* 102f19d4 fimul dword ptr [esp + 0x14] */
  FPU_ST(0) = FPU_ST(0) * ((double)(int32_t)r32((uint32_t)(ESP + 0x14)));
  /* 102f19d8 fcomp qword ptr [esp + 0x18] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESP + 0x18)));
  (void)fpu_pop();
  /* 102f19dc fnstsw ax */
  AX = fpu_status();
  /* 102f19de test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 102f19e1 je 0x102f1a0e */
  if (C.zf) goto L_102f1a0e;
  /* 102f19e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f19e5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 102f19e7 call edi */
  call_ind((uint32_t)(EDI), 0x102f19e9u);
  /* 102f19e9 push 0x102f9224 */
  push32((uint32_t)(0x102f9224u));
  /* 102f19ee call ebx */
  call_ind((uint32_t)(EBX), 0x102f19f0u);
  /* 102f19f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f19f2 call esi */
  call_ind((uint32_t)(ESI), 0x102f19f4u);
  /* 102f19f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f19f6 push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f19fb call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1a01u);
  /* 102f1a01 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1a03 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1a05 call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1a0bu);
  /* 102f1a0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1a0e:;
  /* 102f1a0e push 0xb */
  push32((uint32_t)(0xbu));
  /* 102f1a10 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1a16u);
  /* 102f1a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1a19 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1a1b je 0x102f1aa6 */
  if (C.zf) goto L_102f1aa6;
  /* 102f1a21 push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f1a26 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1a28u);
  /* 102f1a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1a2b cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1a2e jge 0x102f1aa6 */
  if ((C.sf==C.of)) goto L_102f1aa6;
  /* 102f1a30 push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f1a35 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1a37u);
  /* 102f1a37 push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f1a3c push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f1a41 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1a45 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1a4bu);
  /* 102f1a4b mov ecx, eax */
  ECX = (EAX);
  /* 102f1a4d mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102f1a51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f1a52 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f1a54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1a57 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102f1a59 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1a5b jge 0x102f1aa6 */
  if ((C.sf==C.of)) goto L_102f1aa6;
  /* 102f1a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1a5f push 0xb */
  push32((uint32_t)(0xbu));
  /* 102f1a61 call edi */
  call_ind((uint32_t)(EDI), 0x102f1a63u);
  /* 102f1a63 push 0x102f921c */
  push32((uint32_t)(0x102f921cu));
  /* 102f1a68 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1a6au);
  /* 102f1a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1a6c call esi */
  call_ind((uint32_t)(ESI), 0x102f1a6eu);
  /* 102f1a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1a70 push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f1a75 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1a7bu);
  /* 102f1a7b push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1a7f call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1a85u);
  /* 102f1a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1a87 push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f1a8c call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1a92u);
  /* 102f1a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1a96 push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1a9b push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1a9d call dword ptr [0x102f80e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e8))), 0x102f1aa3u);
  /* 102f1aa3 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1aa6:;
  /* 102f1aa6 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 102f1aa8 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1aaeu);
  /* 102f1aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1ab1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1ab3 je 0x102f1b59 */
  if (C.zf) goto L_102f1b59;
  /* 102f1ab9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 102f1abb call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1ac1u);
  /* 102f1ac1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1ac4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1ac6 jne 0x102f1b59 */
  if (!C.zf) goto L_102f1b59;
  /* 102f1acc push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f1ad1 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1ad3u);
  /* 102f1ad3 push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f1ad8 push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1add mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 102f1ae1 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1ae7u);
  /* 102f1ae7 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1aed fild dword ptr [esp + 0x24] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x24)));
  /* 102f1af1 fstp qword ptr [esp + 0x28] */
  wf64((uint32_t)(ESP + 0x28), FPU_ST(0));
  (void)fpu_pop();
  /* 102f1af5 call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f1afbu);
  /* 102f1afb mov ecx, eax */
  ECX = (EAX);
  /* 102f1afd mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102f1b02 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102f1b04 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102f1b07 mov eax, edx */
  EAX = (EDX);
  /* 102f1b09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1b0c shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102f1b0f add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1b11 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 102f1b15 fild dword ptr [esp + 0x14] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x14)));
  /* 102f1b19 fadd qword ptr [0x102f8150] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x102f8150)));
  /* 102f1b1f fimul dword ptr [esp + 0x10] */
  FPU_ST(0) = FPU_ST(0) * ((double)(int32_t)r32((uint32_t)(ESP + 0x10)));
  /* 102f1b23 fcomp qword ptr [esp + 0x18] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESP + 0x18)));
  (void)fpu_pop();
  /* 102f1b27 fnstsw ax */
  AX = fpu_status();
  /* 102f1b29 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 102f1b2c je 0x102f1b59 */
  if (C.zf) goto L_102f1b59;
  /* 102f1b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1b30 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 102f1b32 call edi */
  call_ind((uint32_t)(EDI), 0x102f1b34u);
  /* 102f1b34 push 0x102f9214 */
  push32((uint32_t)(0x102f9214u));
  /* 102f1b39 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1b3bu);
  /* 102f1b3b push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1b3d call esi */
  call_ind((uint32_t)(ESI), 0x102f1b3fu);
  /* 102f1b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1b41 push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f1b46 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1b4cu);
  /* 102f1b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1b4e push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1b50 call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1b56u);
  /* 102f1b56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1b59:;
  /* 102f1b59 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102f1b5b call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1b61u);
  /* 102f1b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1b64 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1b66 je 0x102f1bf1 */
  if (C.zf) goto L_102f1bf1;
  /* 102f1b6c push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f1b71 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1b73u);
  /* 102f1b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1b76 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1b79 jge 0x102f1bf1 */
  if ((C.sf==C.of)) goto L_102f1bf1;
  /* 102f1b7b push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f1b80 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1b82u);
  /* 102f1b82 push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f1b87 push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f1b8c mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1b90 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1b96u);
  /* 102f1b96 mov ecx, eax */
  ECX = (EAX);
  /* 102f1b98 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102f1b9c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f1b9d sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f1b9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1ba2 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102f1ba4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1ba6 jge 0x102f1bf1 */
  if ((C.sf==C.of)) goto L_102f1bf1;
  /* 102f1ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1baa push 0xc */
  push32((uint32_t)(0xcu));
  /* 102f1bac call edi */
  call_ind((uint32_t)(EDI), 0x102f1baeu);
  /* 102f1bae push 0x102f920c */
  push32((uint32_t)(0x102f920cu));
  /* 102f1bb3 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1bb5u);
  /* 102f1bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1bb7 call esi */
  call_ind((uint32_t)(ESI), 0x102f1bb9u);
  /* 102f1bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1bbb push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f1bc0 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1bc6u);
  /* 102f1bc6 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1bca call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1bd0u);
  /* 102f1bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1bd2 push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f1bd7 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1bddu);
  /* 102f1bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1be1 push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1be6 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1be8 call dword ptr [0x102f80e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e8))), 0x102f1beeu);
  /* 102f1bee add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1bf1:;
  /* 102f1bf1 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 102f1bf3 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1bf9u);
  /* 102f1bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1bfc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1bfe je 0x102f1ca4 */
  if (C.zf) goto L_102f1ca4;
  /* 102f1c04 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102f1c06 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1c0cu);
  /* 102f1c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1c0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1c11 jne 0x102f1ca4 */
  if (!C.zf) goto L_102f1ca4;
  /* 102f1c17 push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f1c1c call ebp */
  call_ind((uint32_t)(EBP), 0x102f1c1eu);
  /* 102f1c1e push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f1c23 push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1c28 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 102f1c2c call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1c32u);
  /* 102f1c32 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1c36 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1c38 fild dword ptr [esp + 0x24] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x24)));
  /* 102f1c3c fstp qword ptr [esp + 0x28] */
  wf64((uint32_t)(ESP + 0x28), FPU_ST(0));
  (void)fpu_pop();
  /* 102f1c40 call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f1c46u);
  /* 102f1c46 mov ecx, eax */
  ECX = (EAX);
  /* 102f1c48 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102f1c4d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102f1c4f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102f1c52 mov eax, edx */
  EAX = (EDX);
  /* 102f1c54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1c57 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102f1c5a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1c5c mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 102f1c60 fild dword ptr [esp + 0x14] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x14)));
  /* 102f1c64 fadd qword ptr [0x102f8150] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x102f8150)));
  /* 102f1c6a fimul dword ptr [esp + 0x10] */
  FPU_ST(0) = FPU_ST(0) * ((double)(int32_t)r32((uint32_t)(ESP + 0x10)));
  /* 102f1c6e fcomp qword ptr [esp + 0x18] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESP + 0x18)));
  (void)fpu_pop();
  /* 102f1c72 fnstsw ax */
  AX = fpu_status();
  /* 102f1c74 test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 102f1c77 je 0x102f1ca4 */
  if (C.zf) goto L_102f1ca4;
  /* 102f1c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1c7b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 102f1c7d call edi */
  call_ind((uint32_t)(EDI), 0x102f1c7fu);
  /* 102f1c7f push 0x102f9204 */
  push32((uint32_t)(0x102f9204u));
  /* 102f1c84 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1c86u);
  /* 102f1c86 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1c88 call esi */
  call_ind((uint32_t)(ESI), 0x102f1c8au);
  /* 102f1c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1c8c push 0x102f9fd0 */
  push32((uint32_t)(0x102f9fd0u));
  /* 102f1c91 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1c97u);
  /* 102f1c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1c99 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1c9b call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1ca1u);
  /* 102f1ca1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1ca4:;
  /* 102f1ca4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102f1ca6 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1cacu);
  /* 102f1cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1caf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1cb1 je 0x102f1d3c */
  if (C.zf) goto L_102f1d3c;
  /* 102f1cb7 push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1cbc call ebp */
  call_ind((uint32_t)(EBP), 0x102f1cbeu);
  /* 102f1cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1cc1 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1cc4 jge 0x102f1d3c */
  if ((C.sf==C.of)) goto L_102f1d3c;
  /* 102f1cc6 push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1ccb call ebp */
  call_ind((uint32_t)(EBP), 0x102f1ccdu);
  /* 102f1ccd push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1cd2 push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f1cd7 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1cdb call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1ce1u);
  /* 102f1ce1 mov ecx, eax */
  ECX = (EAX);
  /* 102f1ce3 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102f1ce7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f1ce8 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f1cea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1ced sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102f1cef cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1cf1 jge 0x102f1d3c */
  if ((C.sf==C.of)) goto L_102f1d3c;
  /* 102f1cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1cf5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102f1cf7 call edi */
  call_ind((uint32_t)(EDI), 0x102f1cf9u);
  /* 102f1cf9 push 0x102f91fc */
  push32((uint32_t)(0x102f91fcu));
  /* 102f1cfe call ebx */
  call_ind((uint32_t)(EBX), 0x102f1d00u);
  /* 102f1d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1d02 call esi */
  call_ind((uint32_t)(ESI), 0x102f1d04u);
  /* 102f1d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1d06 push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1d0b call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1d11u);
  /* 102f1d11 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1d15 call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1d1bu);
  /* 102f1d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1d1d push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1d22 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1d28u);
  /* 102f1d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1d2c push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1d31 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1d33 call dword ptr [0x102f80e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e8))), 0x102f1d39u);
  /* 102f1d39 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1d3c:;
  /* 102f1d3c push 0x17 */
  push32((uint32_t)(0x17u));
  /* 102f1d3e call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1d44u);
  /* 102f1d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1d47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1d49 je 0x102f1def */
  if (C.zf) goto L_102f1def;
  /* 102f1d4f push 0xd */
  push32((uint32_t)(0xdu));
  /* 102f1d51 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1d57u);
  /* 102f1d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1d5a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1d5c jne 0x102f1def */
  if (!C.zf) goto L_102f1def;
  /* 102f1d62 push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1d67 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1d69u);
  /* 102f1d69 push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1d6e push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1d73 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 102f1d77 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1d7du);
  /* 102f1d7d mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1d81 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1d83 fild dword ptr [esp + 0x24] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x24)));
  /* 102f1d87 fstp qword ptr [esp + 0x28] */
  wf64((uint32_t)(ESP + 0x28), FPU_ST(0));
  (void)fpu_pop();
  /* 102f1d8b call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f1d91u);
  /* 102f1d91 mov ecx, eax */
  ECX = (EAX);
  /* 102f1d93 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102f1d98 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102f1d9a sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102f1d9d mov eax, edx */
  EAX = (EDX);
  /* 102f1d9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1da2 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102f1da5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1da7 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 102f1dab fild dword ptr [esp + 0x14] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x14)));
  /* 102f1daf fadd qword ptr [0x102f8150] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x102f8150)));
  /* 102f1db5 fimul dword ptr [esp + 0x10] */
  FPU_ST(0) = FPU_ST(0) * ((double)(int32_t)r32((uint32_t)(ESP + 0x10)));
  /* 102f1db9 fcomp qword ptr [esp + 0x18] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESP + 0x18)));
  (void)fpu_pop();
  /* 102f1dbd fnstsw ax */
  AX = fpu_status();
  /* 102f1dbf test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 102f1dc2 je 0x102f1def */
  if (C.zf) goto L_102f1def;
  /* 102f1dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1dc6 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 102f1dc8 call edi */
  call_ind((uint32_t)(EDI), 0x102f1dcau);
  /* 102f1dca push 0x102f91f4 */
  push32((uint32_t)(0x102f91f4u));
  /* 102f1dcf call ebx */
  call_ind((uint32_t)(EBX), 0x102f1dd1u);
  /* 102f1dd1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1dd3 call esi */
  call_ind((uint32_t)(ESI), 0x102f1dd5u);
  /* 102f1dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1dd7 push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f1ddc call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1de2u);
  /* 102f1de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1de4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1de6 call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1decu);
  /* 102f1dec add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1def:;
  /* 102f1def push 0xe */
  push32((uint32_t)(0xeu));
  /* 102f1df1 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1df7u);
  /* 102f1df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1dfc je 0x102f1e87 */
  if (C.zf) goto L_102f1e87;
  /* 102f1e02 push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1e07 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1e09u);
  /* 102f1e09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1e0c cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1e0f jge 0x102f1e87 */
  if ((C.sf==C.of)) goto L_102f1e87;
  /* 102f1e11 push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1e16 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1e18u);
  /* 102f1e18 push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1e1d push 0x102fa198 */
  push32((uint32_t)(0x102fa198u));
  /* 102f1e22 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1e26 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1e2cu);
  /* 102f1e2c mov ecx, eax */
  ECX = (EAX);
  /* 102f1e2e mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102f1e32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f1e33 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f1e35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1e38 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102f1e3a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1e3c jge 0x102f1e87 */
  if ((C.sf==C.of)) goto L_102f1e87;
  /* 102f1e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1e40 push 0xe */
  push32((uint32_t)(0xeu));
  /* 102f1e42 call edi */
  call_ind((uint32_t)(EDI), 0x102f1e44u);
  /* 102f1e44 push 0x102f91ec */
  push32((uint32_t)(0x102f91ecu));
  /* 102f1e49 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1e4bu);
  /* 102f1e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1e4d call esi */
  call_ind((uint32_t)(ESI), 0x102f1e4fu);
  /* 102f1e4f push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1e51 push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1e56 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1e5cu);
  /* 102f1e5c push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1e5e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1e60 call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1e66u);
  /* 102f1e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1e68 push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1e6d call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1e73u);
  /* 102f1e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1e77 push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1e7c push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1e7e call dword ptr [0x102f80e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e8))), 0x102f1e84u);
  /* 102f1e84 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1e87:;
  /* 102f1e87 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102f1e89 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1e8fu);
  /* 102f1e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1e92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1e94 je 0x102f1f3a */
  if (C.zf) goto L_102f1f3a;
  /* 102f1e9a push 0xe */
  push32((uint32_t)(0xeu));
  /* 102f1e9c call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1ea2u);
  /* 102f1ea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1ea5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1ea7 jne 0x102f1f3a */
  if (!C.zf) goto L_102f1f3a;
  /* 102f1ead push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1eb2 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1eb4u);
  /* 102f1eb4 push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1eb9 push 0x102fa120 */
  push32((uint32_t)(0x102fa120u));
  /* 102f1ebe mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 102f1ec2 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f1ec8u);
  /* 102f1ec8 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 102f1ecc push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1ece fild dword ptr [esp + 0x24] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x24)));
  /* 102f1ed2 fstp qword ptr [esp + 0x28] */
  wf64((uint32_t)(ESP + 0x28), FPU_ST(0));
  (void)fpu_pop();
  /* 102f1ed6 call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f1edcu);
  /* 102f1edc mov ecx, eax */
  ECX = (EAX);
  /* 102f1ede mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 102f1ee3 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 102f1ee5 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 102f1ee8 mov eax, edx */
  EAX = (EDX);
  /* 102f1eea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1eed shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 102f1ef0 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1ef2 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 102f1ef6 fild dword ptr [esp + 0x14] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x14)));
  /* 102f1efa fadd qword ptr [0x102f8150] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(0x102f8150)));
  /* 102f1f00 fimul dword ptr [esp + 0x10] */
  FPU_ST(0) = FPU_ST(0) * ((double)(int32_t)r32((uint32_t)(ESP + 0x10)));
  /* 102f1f04 fcomp qword ptr [esp + 0x18] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(ESP + 0x18)));
  (void)fpu_pop();
  /* 102f1f08 fnstsw ax */
  AX = fpu_status();
  /* 102f1f0a test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 102f1f0d je 0x102f1f3a */
  if (C.zf) goto L_102f1f3a;
  /* 102f1f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1f11 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102f1f13 call edi */
  call_ind((uint32_t)(EDI), 0x102f1f15u);
  /* 102f1f15 push 0x102f91e4 */
  push32((uint32_t)(0x102f91e4u));
  /* 102f1f1a call ebx */
  call_ind((uint32_t)(EBX), 0x102f1f1cu);
  /* 102f1f1c push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1f1e call esi */
  call_ind((uint32_t)(ESI), 0x102f1f20u);
  /* 102f1f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1f22 push 0x102f9fe0 */
  push32((uint32_t)(0x102f9fe0u));
  /* 102f1f27 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1f2du);
  /* 102f1f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1f2f push 4 */
  push32((uint32_t)(0x4u));
  /* 102f1f31 call dword ptr [0x102f80f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f4))), 0x102f1f37u);
  /* 102f1f37 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f1f3a:;
  /* 102f1f3a push 0xf */
  push32((uint32_t)(0xfu));
  /* 102f1f3c call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1f42u);
  /* 102f1f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1f45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1f47 je 0x102f1f8f */
  if (C.zf) goto L_102f1f8f;
  /* 102f1f49 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1f4b call dword ptr [0x102f80bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80bc))), 0x102f1f51u);
  /* 102f1f51 mov ecx, 3 */
  ECX = (0x3u);
  /* 102f1f56 push 0x102f9ff0 */
  push32((uint32_t)(0x102f9ff0u));
  /* 102f1f5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f1f5d lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 102f1f60 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 102f1f62 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 102f1f66 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1f68u);
  /* 102f1f68 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 102f1f6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1f6f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1f71 jge 0x102f1f89 */
  if ((C.sf==C.of)) goto L_102f1f89;
  /* 102f1f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1f75 push 0xf */
  push32((uint32_t)(0xfu));
  /* 102f1f77 call edi */
  call_ind((uint32_t)(EDI), 0x102f1f79u);
  /* 102f1f79 push 0x102f91dc */
  push32((uint32_t)(0x102f91dcu));
  /* 102f1f7e call ebx */
  call_ind((uint32_t)(EBX), 0x102f1f80u);
  /* 102f1f80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1f83 call dword ptr [0x102f8114] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8114))), 0x102f1f89u);
L_102f1f89:;
  /* 102f1f89 mov ebp, dword ptr [0x102f80fc] */
  EBP = (r32((uint32_t)(0x102f80fc)));
L_102f1f8f:;
  /* 102f1f8f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 102f1f91 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1f97u);
  /* 102f1f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1f9a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1f9c je 0x102f1fc1 */
  if (C.zf) goto L_102f1fc1;
  /* 102f1f9e push 0x102f9fa0 */
  push32((uint32_t)(0x102f9fa0u));
  /* 102f1fa3 call ebp */
  call_ind((uint32_t)(EBP), 0x102f1fa5u);
  /* 102f1fa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f1faa jne 0x102f1fc1 */
  if (!C.zf) goto L_102f1fc1;
  /* 102f1fac push eax */
  push32((uint32_t)(EAX));
  /* 102f1fad push 0x10 */
  push32((uint32_t)(0x10u));
  /* 102f1faf call edi */
  call_ind((uint32_t)(EDI), 0x102f1fb1u);
  /* 102f1fb1 push 0x102f91d4 */
  push32((uint32_t)(0x102f91d4u));
  /* 102f1fb6 call ebx */
  call_ind((uint32_t)(EBX), 0x102f1fb8u);
  /* 102f1fb8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1fbb call dword ptr [0x102f8118] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8118))), 0x102f1fc1u);
L_102f1fc1:;
  /* 102f1fc1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102f1fc3 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f1fc9u);
  /* 102f1fc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1fcc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f1fce je 0x102f2006 */
  if (C.zf) goto L_102f2006;
  /* 102f1fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1fd2 push 0x102fa020 */
  push32((uint32_t)(0x102fa020u));
  /* 102f1fd7 call dword ptr [0x102f8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8110))), 0x102f1fddu);
  /* 102f1fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f1fe0 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f1fe3 jge 0x102f2006 */
  if ((C.sf==C.of)) goto L_102f2006;
  /* 102f1fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1fe7 push 0x102f9ff8 */
  push32((uint32_t)(0x102f9ff8u));
  /* 102f1fec call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f1ff2u);
  /* 102f1ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1ff4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f1ff6 push 0x102fa020 */
  push32((uint32_t)(0x102fa020u));
  /* 102f1ffb push 1 */
  push32((uint32_t)(0x1u));
  /* 102f1ffd call dword ptr [0x102f80e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80e8))), 0x102f2003u);
  /* 102f2003 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f2006:;
  /* 102f2006 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2008 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f200d call dword ptr [0x102f8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8120))), 0x102f2013u);
  /* 102f2013 mov ebp, dword ptr [0x102f8124] */
  EBP = (r32((uint32_t)(0x102f8124)));
  /* 102f2019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f201c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f201e jle 0x102f203a */
  if ((C.zf||C.sf!=C.of)) goto L_102f203a;
  /* 102f2020 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2022 call esi */
  call_ind((uint32_t)(ESI), 0x102f2024u);
  /* 102f2024 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2026 push 0x102f9fa8 */
  push32((uint32_t)(0x102f9fa8u));
  /* 102f202b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f202d call dword ptr [0x102f811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f811c))), 0x102f2033u);
  /* 102f2033 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2035 call ebp */
  call_ind((uint32_t)(EBP), 0x102f2037u);
  /* 102f2037 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f203a:;
  /* 102f203a push 1 */
  push32((uint32_t)(0x1u));
  /* 102f203c push 0x102f9fb0 */
  push32((uint32_t)(0x102f9fb0u));
  /* 102f2041 call dword ptr [0x102f8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8120))), 0x102f2047u);
  /* 102f2047 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f204a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f204c jle 0x102f2068 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2068;
  /* 102f204e push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2050 call esi */
  call_ind((uint32_t)(ESI), 0x102f2052u);
  /* 102f2052 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2054 push 0x102f9fb0 */
  push32((uint32_t)(0x102f9fb0u));
  /* 102f2059 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f205b call dword ptr [0x102f811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f811c))), 0x102f2061u);
  /* 102f2061 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2063 call ebp */
  call_ind((uint32_t)(EBP), 0x102f2065u);
  /* 102f2065 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f2068:;
  /* 102f2068 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f206a push 0x102fa008 */
  push32((uint32_t)(0x102fa008u));
  /* 102f206f call dword ptr [0x102f8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8120))), 0x102f2075u);
  /* 102f2075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f207a jle 0x102f2096 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2096;
  /* 102f207c push 1 */
  push32((uint32_t)(0x1u));
  /* 102f207e call esi */
  call_ind((uint32_t)(ESI), 0x102f2080u);
  /* 102f2080 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2082 push 0x102fa008 */
  push32((uint32_t)(0x102fa008u));
  /* 102f2087 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2089 call dword ptr [0x102f811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f811c))), 0x102f208fu);
  /* 102f208f push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2091 call ebp */
  call_ind((uint32_t)(EBP), 0x102f2093u);
  /* 102f2093 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f2096:;
  /* 102f2096 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2098 push 0x102fa000 */
  push32((uint32_t)(0x102fa000u));
  /* 102f209d call dword ptr [0x102f8120] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8120))), 0x102f20a3u);
  /* 102f20a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f20a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f20a8 jle 0x102f20e0 */
  if ((C.zf||C.sf!=C.of)) goto L_102f20e0;
  /* 102f20aa push 0 */
  push32((uint32_t)(0x0u));
  /* 102f20ac push 0x102f9fe8 */
  push32((uint32_t)(0x102f9fe8u));
  /* 102f20b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f20b3 call dword ptr [0x102f812c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f812c))), 0x102f20b9u);
  /* 102f20b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f20bb call esi */
  call_ind((uint32_t)(ESI), 0x102f20bdu);
  /* 102f20bd push 0 */
  push32((uint32_t)(0x0u));
  /* 102f20bf push 0x102fa000 */
  push32((uint32_t)(0x102fa000u));
  /* 102f20c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f20c6 call dword ptr [0x102f811c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f811c))), 0x102f20ccu);
  /* 102f20cc push 0 */
  push32((uint32_t)(0x0u));
  /* 102f20ce call ebp */
  call_ind((uint32_t)(EBP), 0x102f20d0u);
  /* 102f20d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f20d2 push 0x102f9fe8 */
  push32((uint32_t)(0x102f9fe8u));
  /* 102f20d7 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f20ddu);
  /* 102f20dd add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f20e0:;
  /* 102f20e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102f20e2 call dword ptr [0x102f80c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80c0))), 0x102f20e8u);
  /* 102f20e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f20eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f20ed je 0x102f2134 */
  if (C.zf) goto L_102f2134;
  /* 102f20ef mov ebp, dword ptr [0x102f8120] */
  EBP = (r32((uint32_t)(0x102f8120)));
  /* 102f20f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f20f7 push 0x102fa010 */
  push32((uint32_t)(0x102fa010u));
  /* 102f20fc call ebp */
  call_ind((uint32_t)(EBP), 0x102f20feu);
  /* 102f20fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2101 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2104 jne 0x102f213a */
  if (!C.zf) goto L_102f213a;
  /* 102f2106 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2108 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102f210a call edi */
  call_ind((uint32_t)(EDI), 0x102f210cu);
  /* 102f210c push 0x102f91cc */
  push32((uint32_t)(0x102f91ccu));
  /* 102f2111 call ebx */
  call_ind((uint32_t)(EBX), 0x102f2113u);
  /* 102f2113 mov esi, dword ptr [0x102f8108] */
  ESI = (r32((uint32_t)(0x102f8108)));
  /* 102f2119 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 102f211e push 3 */
  push32((uint32_t)(0x3u));
  /* 102f2120 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2122 call esi */
  call_ind((uint32_t)(ESI), 0x102f2124u);
  /* 102f2124 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 102f2129 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f212b push 0 */
  push32((uint32_t)(0x0u));
  /* 102f212d call esi */
  call_ind((uint32_t)(ESI), 0x102f212fu);
  /* 102f212f add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2132 jmp 0x102f213a */
  goto L_102f213a;
L_102f2134:;
  /* 102f2134 mov ebp, dword ptr [0x102f8120] */
  EBP = (r32((uint32_t)(0x102f8120)));
L_102f213a:;
  /* 102f213a push 1 */
  push32((uint32_t)(0x1u));
  /* 102f213c push 0x102fa098 */
  push32((uint32_t)(0x102fa098u));
  /* 102f2141 call ebp */
  call_ind((uint32_t)(EBP), 0x102f2143u);
  /* 102f2143 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f2149 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f214c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f214e jne 0x102f2181 */
  if (!C.zf) goto L_102f2181;
  /* 102f2150 push 0x102fa070 */
  push32((uint32_t)(0x102fa070u));
  /* 102f2155 call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f215bu);
  /* 102f215b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f215e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2160 jle 0x102f21db */
  if ((C.zf||C.sf!=C.of)) goto L_102f21db;
  /* 102f2162 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2164 push 0x102fa070 */
  push32((uint32_t)(0x102fa070u));
  /* 102f2169 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f216fu);
  /* 102f216f push 0x102f9fa0 */
  push32((uint32_t)(0x102f9fa0u));
  /* 102f2174 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2176 call dword ptr [0x102f8128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8128))), 0x102f217cu);
  /* 102f217c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f217f jmp 0x102f21db */
  goto L_102f21db;
L_102f2181:;
  /* 102f2181 push 0x102fa098 */
  push32((uint32_t)(0x102fa098u));
  /* 102f2186 push 0x102fa110 */
  push32((uint32_t)(0x102fa110u));
  /* 102f218b call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f2191u);
  /* 102f2191 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2193 push 0x102fa098 */
  push32((uint32_t)(0x102fa098u));
  /* 102f2198 mov esi, eax */
  ESI = (EAX);
  /* 102f219a call ebp */
  call_ind((uint32_t)(EBP), 0x102f219cu);
  /* 102f219c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f219f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f21a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f21a3 jge 0x102f21cc */
  if ((C.sf==C.of)) goto L_102f21cc;
  /* 102f21a5 mov esi, dword ptr [0x102f811c] */
  ESI = (r32((uint32_t)(0x102f811c)));
  /* 102f21ab push 0x102fa098 */
  push32((uint32_t)(0x102fa098u));
  /* 102f21b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f21b2 call esi */
  call_ind((uint32_t)(ESI), 0x102f21b4u);
  /* 102f21b4 mov edi, dword ptr [0x102f80e8] */
  EDI = (r32((uint32_t)(0x102f80e8)));
  /* 102f21ba push 0 */
  push32((uint32_t)(0x0u));
  /* 102f21bc push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102f21be push 0x102fa110 */
  push32((uint32_t)(0x102fa110u));
  /* 102f21c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f21c5 call edi */
  call_ind((uint32_t)(EDI), 0x102f21c7u);
  /* 102f21c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f21ca jmp 0x102f21e7 */
  goto L_102f21e7;
L_102f21cc:;
  /* 102f21cc push 0x102fa150 */
  push32((uint32_t)(0x102fa150u));
  /* 102f21d1 push 0x102fa098 */
  push32((uint32_t)(0x102fa098u));
  /* 102f21d6 call ebx */
  call_ind((uint32_t)(EBX), 0x102f21d8u);
  /* 102f21d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f21db:;
  /* 102f21db mov edi, dword ptr [0x102f80e8] */
  EDI = (r32((uint32_t)(0x102f80e8)));
  /* 102f21e1 mov esi, dword ptr [0x102f811c] */
  ESI = (r32((uint32_t)(0x102f811c)));
L_102f21e7:;
  /* 102f21e7 push 0x102fa0a0 */
  push32((uint32_t)(0x102fa0a0u));
  /* 102f21ec call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f21f2u);
  /* 102f21f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f21f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f21f7 jle 0x102f221e */
  if ((C.zf||C.sf!=C.of)) goto L_102f221e;
  /* 102f21f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f21fb push 0x102fa158 */
  push32((uint32_t)(0x102fa158u));
  /* 102f2200 call dword ptr [0x102f8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8110))), 0x102f2206u);
  /* 102f2206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f220b jle 0x102f221e */
  if ((C.zf||C.sf!=C.of)) goto L_102f221e;
  /* 102f220d push 0 */
  push32((uint32_t)(0x0u));
  /* 102f220f push 0x102fa158 */
  push32((uint32_t)(0x102fa158u));
  /* 102f2214 push 0x102fa0a0 */
  push32((uint32_t)(0x102fa0a0u));
  /* 102f2219 call ebx */
  call_ind((uint32_t)(EBX), 0x102f221bu);
  /* 102f221b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f221e:;
  /* 102f221e push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2220 push 0x102fa0a8 */
  push32((uint32_t)(0x102fa0a8u));
  /* 102f2225 call ebp */
  call_ind((uint32_t)(EBP), 0x102f2227u);
  /* 102f2227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f222a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f222c jne 0x102f225f */
  if (!C.zf) goto L_102f225f;
  /* 102f222e push 0x102fa078 */
  push32((uint32_t)(0x102fa078u));
  /* 102f2233 call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f2239u);
  /* 102f2239 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f223c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f223e jle 0x102f22b9 */
  if ((C.zf||C.sf!=C.of)) goto L_102f22b9;
  /* 102f2240 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2242 push 0x102fa078 */
  push32((uint32_t)(0x102fa078u));
  /* 102f2247 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f224du);
  /* 102f224d push 0x102f9fb0 */
  push32((uint32_t)(0x102f9fb0u));
  /* 102f2252 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2254 call dword ptr [0x102f8128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8128))), 0x102f225au);
  /* 102f225a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f225d jmp 0x102f22b9 */
  goto L_102f22b9;
L_102f225f:;
  /* 102f225f push 0x102fa0a8 */
  push32((uint32_t)(0x102fa0a8u));
  /* 102f2264 push 0x102fa128 */
  push32((uint32_t)(0x102fa128u));
  /* 102f2269 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f226fu);
  /* 102f226f push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2271 push 0x102fa0a8 */
  push32((uint32_t)(0x102fa0a8u));
  /* 102f2276 mov ebx, eax */
  EBX = (EAX);
  /* 102f2278 call ebp */
  call_ind((uint32_t)(EBP), 0x102f227au);
  /* 102f227a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f227d cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f227f push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2281 jge 0x102f22a4 */
  if ((C.sf==C.of)) goto L_102f22a4;
  /* 102f2283 push 0x102fa0a8 */
  push32((uint32_t)(0x102fa0a8u));
  /* 102f2288 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f228a call esi */
  call_ind((uint32_t)(ESI), 0x102f228cu);
  /* 102f228c push 0 */
  push32((uint32_t)(0x0u));
  /* 102f228e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102f2290 push 0x102fa128 */
  push32((uint32_t)(0x102fa128u));
  /* 102f2295 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2297 call edi */
  call_ind((uint32_t)(EDI), 0x102f2299u);
  /* 102f2299 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f229f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f22a2 jmp 0x102f22b9 */
  goto L_102f22b9;
L_102f22a4:;
  /* 102f22a4 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f22aa push 0x102fa160 */
  push32((uint32_t)(0x102fa160u));
  /* 102f22af push 0x102fa0a8 */
  push32((uint32_t)(0x102fa0a8u));
  /* 102f22b4 call ebx */
  call_ind((uint32_t)(EBX), 0x102f22b6u);
  /* 102f22b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f22b9:;
  /* 102f22b9 push 0x102fa0b0 */
  push32((uint32_t)(0x102fa0b0u));
  /* 102f22be call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f22c4u);
  /* 102f22c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f22c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f22c9 jle 0x102f22f0 */
  if ((C.zf||C.sf!=C.of)) goto L_102f22f0;
  /* 102f22cb push 0 */
  push32((uint32_t)(0x0u));
  /* 102f22cd push 0x102fa168 */
  push32((uint32_t)(0x102fa168u));
  /* 102f22d2 call dword ptr [0x102f8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8110))), 0x102f22d8u);
  /* 102f22d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f22db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f22dd jle 0x102f22f0 */
  if ((C.zf||C.sf!=C.of)) goto L_102f22f0;
  /* 102f22df push 0 */
  push32((uint32_t)(0x0u));
  /* 102f22e1 push 0x102fa168 */
  push32((uint32_t)(0x102fa168u));
  /* 102f22e6 push 0x102fa0b0 */
  push32((uint32_t)(0x102fa0b0u));
  /* 102f22eb call ebx */
  call_ind((uint32_t)(EBX), 0x102f22edu);
  /* 102f22ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f22f0:;
  /* 102f22f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f22f2 push 0x102fa0b8 */
  push32((uint32_t)(0x102fa0b8u));
  /* 102f22f7 call ebp */
  call_ind((uint32_t)(EBP), 0x102f22f9u);
  /* 102f22f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f22fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f22fe jne 0x102f2331 */
  if (!C.zf) goto L_102f2331;
  /* 102f2300 push 0x102fa080 */
  push32((uint32_t)(0x102fa080u));
  /* 102f2305 call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f230bu);
  /* 102f230b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f230e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2310 jle 0x102f238b */
  if ((C.zf||C.sf!=C.of)) goto L_102f238b;
  /* 102f2312 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2314 push 0x102fa080 */
  push32((uint32_t)(0x102fa080u));
  /* 102f2319 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f231fu);
  /* 102f231f push 0x102f9fc0 */
  push32((uint32_t)(0x102f9fc0u));
  /* 102f2324 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2326 call dword ptr [0x102f8128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8128))), 0x102f232cu);
  /* 102f232c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f232f jmp 0x102f238b */
  goto L_102f238b;
L_102f2331:;
  /* 102f2331 push 0x102fa0b8 */
  push32((uint32_t)(0x102fa0b8u));
  /* 102f2336 push 0x102fa138 */
  push32((uint32_t)(0x102fa138u));
  /* 102f233b call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f2341u);
  /* 102f2341 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2343 push 0x102fa0b8 */
  push32((uint32_t)(0x102fa0b8u));
  /* 102f2348 mov ebx, eax */
  EBX = (EAX);
  /* 102f234a call ebp */
  call_ind((uint32_t)(EBP), 0x102f234cu);
  /* 102f234c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f234f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2351 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2353 jge 0x102f2376 */
  if ((C.sf==C.of)) goto L_102f2376;
  /* 102f2355 push 0x102fa0b8 */
  push32((uint32_t)(0x102fa0b8u));
  /* 102f235a push 1 */
  push32((uint32_t)(0x1u));
  /* 102f235c call esi */
  call_ind((uint32_t)(ESI), 0x102f235eu);
  /* 102f235e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2360 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102f2362 push 0x102fa138 */
  push32((uint32_t)(0x102fa138u));
  /* 102f2367 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2369 call edi */
  call_ind((uint32_t)(EDI), 0x102f236bu);
  /* 102f236b mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f2371 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2374 jmp 0x102f238b */
  goto L_102f238b;
L_102f2376:;
  /* 102f2376 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f237c push 0x102fa170 */
  push32((uint32_t)(0x102fa170u));
  /* 102f2381 push 0x102fa0b8 */
  push32((uint32_t)(0x102fa0b8u));
  /* 102f2386 call ebx */
  call_ind((uint32_t)(EBX), 0x102f2388u);
  /* 102f2388 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f238b:;
  /* 102f238b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f238d push 0x102fa0c0 */
  push32((uint32_t)(0x102fa0c0u));
  /* 102f2392 call ebp */
  call_ind((uint32_t)(EBP), 0x102f2394u);
  /* 102f2394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2399 jne 0x102f23cc */
  if (!C.zf) goto L_102f23cc;
  /* 102f239b push 0x102fa088 */
  push32((uint32_t)(0x102fa088u));
  /* 102f23a0 call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f23a6u);
  /* 102f23a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f23a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f23ab jle 0x102f2426 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2426;
  /* 102f23ad push 0 */
  push32((uint32_t)(0x0u));
  /* 102f23af push 0x102fa088 */
  push32((uint32_t)(0x102fa088u));
  /* 102f23b4 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f23bau);
  /* 102f23ba push 0x102f9fc8 */
  push32((uint32_t)(0x102f9fc8u));
  /* 102f23bf push 1 */
  push32((uint32_t)(0x1u));
  /* 102f23c1 call dword ptr [0x102f8128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8128))), 0x102f23c7u);
  /* 102f23c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f23ca jmp 0x102f2426 */
  goto L_102f2426;
L_102f23cc:;
  /* 102f23cc push 0x102fa0c0 */
  push32((uint32_t)(0x102fa0c0u));
  /* 102f23d1 push 0x102fa140 */
  push32((uint32_t)(0x102fa140u));
  /* 102f23d6 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f23dcu);
  /* 102f23dc push 1 */
  push32((uint32_t)(0x1u));
  /* 102f23de push 0x102fa0c0 */
  push32((uint32_t)(0x102fa0c0u));
  /* 102f23e3 mov ebx, eax */
  EBX = (EAX);
  /* 102f23e5 call ebp */
  call_ind((uint32_t)(EBP), 0x102f23e7u);
  /* 102f23e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f23ea cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f23ec push 0 */
  push32((uint32_t)(0x0u));
  /* 102f23ee jge 0x102f2411 */
  if ((C.sf==C.of)) goto L_102f2411;
  /* 102f23f0 push 0x102fa0c0 */
  push32((uint32_t)(0x102fa0c0u));
  /* 102f23f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f23f7 call esi */
  call_ind((uint32_t)(ESI), 0x102f23f9u);
  /* 102f23f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f23fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102f23fd push 0x102fa140 */
  push32((uint32_t)(0x102fa140u));
  /* 102f2402 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2404 call edi */
  call_ind((uint32_t)(EDI), 0x102f2406u);
  /* 102f2406 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f240c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f240f jmp 0x102f2426 */
  goto L_102f2426;
L_102f2411:;
  /* 102f2411 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f2417 push 0x102fa178 */
  push32((uint32_t)(0x102fa178u));
  /* 102f241c push 0x102fa0c0 */
  push32((uint32_t)(0x102fa0c0u));
  /* 102f2421 call ebx */
  call_ind((uint32_t)(EBX), 0x102f2423u);
  /* 102f2423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f2426:;
  /* 102f2426 push 0x102fa0c8 */
  push32((uint32_t)(0x102fa0c8u));
  /* 102f242b call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f2431u);
  /* 102f2431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2436 jle 0x102f245d */
  if ((C.zf||C.sf!=C.of)) goto L_102f245d;
  /* 102f2438 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f243a push 0x102fa180 */
  push32((uint32_t)(0x102fa180u));
  /* 102f243f call dword ptr [0x102f8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8110))), 0x102f2445u);
  /* 102f2445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f244a jle 0x102f245d */
  if ((C.zf||C.sf!=C.of)) goto L_102f245d;
  /* 102f244c push 0 */
  push32((uint32_t)(0x0u));
  /* 102f244e push 0x102fa180 */
  push32((uint32_t)(0x102fa180u));
  /* 102f2453 push 0x102fa0c8 */
  push32((uint32_t)(0x102fa0c8u));
  /* 102f2458 call ebx */
  call_ind((uint32_t)(EBX), 0x102f245au);
  /* 102f245a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f245d:;
  /* 102f245d push 1 */
  push32((uint32_t)(0x1u));
  /* 102f245f push 0x102fa0d0 */
  push32((uint32_t)(0x102fa0d0u));
  /* 102f2464 call ebp */
  call_ind((uint32_t)(EBP), 0x102f2466u);
  /* 102f2466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f246b jne 0x102f249e */
  if (!C.zf) goto L_102f249e;
  /* 102f246d push 0x102fa090 */
  push32((uint32_t)(0x102fa090u));
  /* 102f2472 call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f2478u);
  /* 102f2478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f247b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f247d jle 0x102f24f8 */
  if ((C.zf||C.sf!=C.of)) goto L_102f24f8;
  /* 102f247f push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2481 push 0x102fa090 */
  push32((uint32_t)(0x102fa090u));
  /* 102f2486 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f248cu);
  /* 102f248c push 0x102f9fd8 */
  push32((uint32_t)(0x102f9fd8u));
  /* 102f2491 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2493 call dword ptr [0x102f8128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8128))), 0x102f2499u);
  /* 102f2499 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f249c jmp 0x102f24f8 */
  goto L_102f24f8;
L_102f249e:;
  /* 102f249e push 0x102fa0d0 */
  push32((uint32_t)(0x102fa0d0u));
  /* 102f24a3 push 0x102fa148 */
  push32((uint32_t)(0x102fa148u));
  /* 102f24a8 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f24aeu);
  /* 102f24ae push 1 */
  push32((uint32_t)(0x1u));
  /* 102f24b0 push 0x102fa0d0 */
  push32((uint32_t)(0x102fa0d0u));
  /* 102f24b5 mov ebx, eax */
  EBX = (EAX);
  /* 102f24b7 call ebp */
  call_ind((uint32_t)(EBP), 0x102f24b9u);
  /* 102f24b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f24bc cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f24be push 0 */
  push32((uint32_t)(0x0u));
  /* 102f24c0 jge 0x102f24e3 */
  if ((C.sf==C.of)) goto L_102f24e3;
  /* 102f24c2 push 0x102fa0d0 */
  push32((uint32_t)(0x102fa0d0u));
  /* 102f24c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f24c9 call esi */
  call_ind((uint32_t)(ESI), 0x102f24cbu);
  /* 102f24cb push 0 */
  push32((uint32_t)(0x0u));
  /* 102f24cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102f24cf push 0x102fa148 */
  push32((uint32_t)(0x102fa148u));
  /* 102f24d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f24d6 call edi */
  call_ind((uint32_t)(EDI), 0x102f24d8u);
  /* 102f24d8 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f24de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f24e1 jmp 0x102f24f8 */
  goto L_102f24f8;
L_102f24e3:;
  /* 102f24e3 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f24e9 push 0x102fa188 */
  push32((uint32_t)(0x102fa188u));
  /* 102f24ee push 0x102fa0d0 */
  push32((uint32_t)(0x102fa0d0u));
  /* 102f24f3 call ebx */
  call_ind((uint32_t)(EBX), 0x102f24f5u);
  /* 102f24f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f24f8:;
  /* 102f24f8 push 0x102fa0d8 */
  push32((uint32_t)(0x102fa0d8u));
  /* 102f24fd call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f2503u);
  /* 102f2503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2508 jle 0x102f252f */
  if ((C.zf||C.sf!=C.of)) goto L_102f252f;
  /* 102f250a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f250c push 0x102fa190 */
  push32((uint32_t)(0x102fa190u));
  /* 102f2511 call dword ptr [0x102f8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8110))), 0x102f2517u);
  /* 102f2517 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f251a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f251c jle 0x102f252f */
  if ((C.zf||C.sf!=C.of)) goto L_102f252f;
  /* 102f251e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2520 push 0x102fa190 */
  push32((uint32_t)(0x102fa190u));
  /* 102f2525 push 0x102fa0d8 */
  push32((uint32_t)(0x102fa0d8u));
  /* 102f252a call ebx */
  call_ind((uint32_t)(EBX), 0x102f252cu);
  /* 102f252c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f252f:;
  /* 102f252f push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2531 push 0x102fa040 */
  push32((uint32_t)(0x102fa040u));
  /* 102f2536 call ebp */
  call_ind((uint32_t)(EBP), 0x102f2538u);
  /* 102f2538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f253b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f253d jne 0x102f2570 */
  if (!C.zf) goto L_102f2570;
  /* 102f253f push 0x102f9f70 */
  push32((uint32_t)(0x102f9f70u));
  /* 102f2544 call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f254au);
  /* 102f254a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f254d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f254f jle 0x102f25ca */
  if ((C.zf||C.sf!=C.of)) goto L_102f25ca;
  /* 102f2551 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2553 push 0x102f9f70 */
  push32((uint32_t)(0x102f9f70u));
  /* 102f2558 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f255eu);
  /* 102f255e push 0x102f9ff0 */
  push32((uint32_t)(0x102f9ff0u));
  /* 102f2563 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2565 call dword ptr [0x102f8128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8128))), 0x102f256bu);
  /* 102f256b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f256e jmp 0x102f25ca */
  goto L_102f25ca;
L_102f2570:;
  /* 102f2570 push 0x102fa040 */
  push32((uint32_t)(0x102fa040u));
  /* 102f2575 push 0x102f9f88 */
  push32((uint32_t)(0x102f9f88u));
  /* 102f257a call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f2580u);
  /* 102f2580 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2582 push 0x102fa040 */
  push32((uint32_t)(0x102fa040u));
  /* 102f2587 mov ebx, eax */
  EBX = (EAX);
  /* 102f2589 call ebp */
  call_ind((uint32_t)(EBP), 0x102f258bu);
  /* 102f258b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f258e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2590 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2592 jge 0x102f25b5 */
  if ((C.sf==C.of)) goto L_102f25b5;
  /* 102f2594 push 0x102fa040 */
  push32((uint32_t)(0x102fa040u));
  /* 102f2599 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f259b call esi */
  call_ind((uint32_t)(ESI), 0x102f259du);
  /* 102f259d push 0 */
  push32((uint32_t)(0x0u));
  /* 102f259f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102f25a1 push 0x102f9f88 */
  push32((uint32_t)(0x102f9f88u));
  /* 102f25a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f25a8 call edi */
  call_ind((uint32_t)(EDI), 0x102f25aau);
  /* 102f25aa mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f25b0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f25b3 jmp 0x102f25ca */
  goto L_102f25ca;
L_102f25b5:;
  /* 102f25b5 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f25bb push 0x102fa0e0 */
  push32((uint32_t)(0x102fa0e0u));
  /* 102f25c0 push 0x102fa040 */
  push32((uint32_t)(0x102fa040u));
  /* 102f25c5 call ebx */
  call_ind((uint32_t)(EBX), 0x102f25c7u);
  /* 102f25c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f25ca:;
  /* 102f25ca push 0x102fa048 */
  push32((uint32_t)(0x102fa048u));
  /* 102f25cf call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f25d5u);
  /* 102f25d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f25d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f25da jle 0x102f2601 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2601;
  /* 102f25dc push 0 */
  push32((uint32_t)(0x0u));
  /* 102f25de push 0x102fa0e8 */
  push32((uint32_t)(0x102fa0e8u));
  /* 102f25e3 call dword ptr [0x102f8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8110))), 0x102f25e9u);
  /* 102f25e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f25ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f25ee jle 0x102f2601 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2601;
  /* 102f25f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f25f2 push 0x102fa0e8 */
  push32((uint32_t)(0x102fa0e8u));
  /* 102f25f7 push 0x102fa048 */
  push32((uint32_t)(0x102fa048u));
  /* 102f25fc call ebx */
  call_ind((uint32_t)(EBX), 0x102f25feu);
  /* 102f25fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f2601:;
  /* 102f2601 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2603 push 0x102fa050 */
  push32((uint32_t)(0x102fa050u));
  /* 102f2608 call ebp */
  call_ind((uint32_t)(EBP), 0x102f260au);
  /* 102f260a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f260d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f260f jne 0x102f2642 */
  if (!C.zf) goto L_102f2642;
  /* 102f2611 push 0x102f9f78 */
  push32((uint32_t)(0x102f9f78u));
  /* 102f2616 call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f261cu);
  /* 102f261c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f261f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2621 jle 0x102f269c */
  if ((C.zf||C.sf!=C.of)) goto L_102f269c;
  /* 102f2623 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2625 push 0x102f9f78 */
  push32((uint32_t)(0x102f9f78u));
  /* 102f262a call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f2630u);
  /* 102f2630 push 0x102fa000 */
  push32((uint32_t)(0x102fa000u));
  /* 102f2635 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2637 call dword ptr [0x102f8128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8128))), 0x102f263du);
  /* 102f263d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2640 jmp 0x102f269c */
  goto L_102f269c;
L_102f2642:;
  /* 102f2642 push 0x102fa050 */
  push32((uint32_t)(0x102fa050u));
  /* 102f2647 push 0x102f9f90 */
  push32((uint32_t)(0x102f9f90u));
  /* 102f264c call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f2652u);
  /* 102f2652 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2654 push 0x102fa050 */
  push32((uint32_t)(0x102fa050u));
  /* 102f2659 mov ebx, eax */
  EBX = (EAX);
  /* 102f265b call ebp */
  call_ind((uint32_t)(EBP), 0x102f265du);
  /* 102f265d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2660 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2662 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2664 jge 0x102f2687 */
  if ((C.sf==C.of)) goto L_102f2687;
  /* 102f2666 push 0x102fa050 */
  push32((uint32_t)(0x102fa050u));
  /* 102f266b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f266d call esi */
  call_ind((uint32_t)(ESI), 0x102f266fu);
  /* 102f266f push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2671 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102f2673 push 0x102f9f90 */
  push32((uint32_t)(0x102f9f90u));
  /* 102f2678 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f267a call edi */
  call_ind((uint32_t)(EDI), 0x102f267cu);
  /* 102f267c mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f2682 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2685 jmp 0x102f269c */
  goto L_102f269c;
L_102f2687:;
  /* 102f2687 mov ebx, dword ptr [0x102f8130] */
  EBX = (r32((uint32_t)(0x102f8130)));
  /* 102f268d push 0x102fa0f0 */
  push32((uint32_t)(0x102fa0f0u));
  /* 102f2692 push 0x102fa050 */
  push32((uint32_t)(0x102fa050u));
  /* 102f2697 call ebx */
  call_ind((uint32_t)(EBX), 0x102f2699u);
  /* 102f2699 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f269c:;
  /* 102f269c push 1 */
  push32((uint32_t)(0x1u));
  /* 102f269e push 0x102fa058 */
  push32((uint32_t)(0x102fa058u));
  /* 102f26a3 call ebp */
  call_ind((uint32_t)(EBP), 0x102f26a5u);
  /* 102f26a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f26a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f26aa jne 0x102f26dd */
  if (!C.zf) goto L_102f26dd;
  /* 102f26ac push 0x102f9f80 */
  push32((uint32_t)(0x102f9f80u));
  /* 102f26b1 call dword ptr [0x102f80fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80fc))), 0x102f26b7u);
  /* 102f26b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f26ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f26bc jle 0x102f2733 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2733;
  /* 102f26be push 0 */
  push32((uint32_t)(0x0u));
  /* 102f26c0 push 0x102f9f80 */
  push32((uint32_t)(0x102f9f80u));
  /* 102f26c5 call dword ptr [0x102f80cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80cc))), 0x102f26cbu);
  /* 102f26cb push 0x102fa008 */
  push32((uint32_t)(0x102fa008u));
  /* 102f26d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f26d2 call dword ptr [0x102f8128] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8128))), 0x102f26d8u);
  /* 102f26d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f26db jmp 0x102f2733 */
  goto L_102f2733;
L_102f26dd:;
  /* 102f26dd push 0x102fa058 */
  push32((uint32_t)(0x102fa058u));
  /* 102f26e2 push 0x102f9f98 */
  push32((uint32_t)(0x102f9f98u));
  /* 102f26e7 call dword ptr [0x102f80f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80f0))), 0x102f26edu);
  /* 102f26ed mov edx, eax */
  EDX = (EAX);
  /* 102f26ef push 1 */
  push32((uint32_t)(0x1u));
  /* 102f26f1 push 0x102fa058 */
  push32((uint32_t)(0x102fa058u));
  /* 102f26f6 mov dword ptr [esp + 0x24], edx */
  w32((uint32_t)(ESP + 0x24), (EDX));
  /* 102f26fa call ebp */
  call_ind((uint32_t)(EBP), 0x102f26fcu);
  /* 102f26fc mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 102f2700 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2703 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2705 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2707 jge 0x102f2724 */
  if ((C.sf==C.of)) goto L_102f2724;
  /* 102f2709 push 0x102fa058 */
  push32((uint32_t)(0x102fa058u));
  /* 102f270e push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2710 call esi */
  call_ind((uint32_t)(ESI), 0x102f2712u);
  /* 102f2712 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2714 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 102f2716 push 0x102f9f98 */
  push32((uint32_t)(0x102f9f98u));
  /* 102f271b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f271d call edi */
  call_ind((uint32_t)(EDI), 0x102f271fu);
  /* 102f271f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2722 jmp 0x102f2733 */
  goto L_102f2733;
L_102f2724:;
  /* 102f2724 push 0x102fa0f8 */
  push32((uint32_t)(0x102fa0f8u));
  /* 102f2729 push 0x102fa058 */
  push32((uint32_t)(0x102fa058u));
  /* 102f272e call ebx */
  call_ind((uint32_t)(EBX), 0x102f2730u);
  /* 102f2730 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f2733:;
  /* 102f2733 mov esi, dword ptr [0x102f80fc] */
  ESI = (r32((uint32_t)(0x102f80fc)));
  /* 102f2739 push 0x102fa060 */
  push32((uint32_t)(0x102fa060u));
  /* 102f273e call esi */
  call_ind((uint32_t)(ESI), 0x102f2740u);
  /* 102f2740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2743 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2745 jle 0x102f276c */
  if ((C.zf||C.sf!=C.of)) goto L_102f276c;
  /* 102f2747 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2749 push 0x102fa100 */
  push32((uint32_t)(0x102fa100u));
  /* 102f274e call dword ptr [0x102f8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8110))), 0x102f2754u);
  /* 102f2754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2759 jle 0x102f276c */
  if ((C.zf||C.sf!=C.of)) goto L_102f276c;
  /* 102f275b push 0 */
  push32((uint32_t)(0x0u));
  /* 102f275d push 0x102fa100 */
  push32((uint32_t)(0x102fa100u));
  /* 102f2762 push 0x102fa060 */
  push32((uint32_t)(0x102fa060u));
  /* 102f2767 call ebx */
  call_ind((uint32_t)(EBX), 0x102f2769u);
  /* 102f2769 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f276c:;
  /* 102f276c push 0x102fa068 */
  push32((uint32_t)(0x102fa068u));
  /* 102f2771 call esi */
  call_ind((uint32_t)(ESI), 0x102f2773u);
  /* 102f2773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2778 jle 0x102f279f */
  if ((C.zf||C.sf!=C.of)) goto L_102f279f;
  /* 102f277a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f277c push 0x102fa108 */
  push32((uint32_t)(0x102fa108u));
  /* 102f2781 call dword ptr [0x102f8110] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8110))), 0x102f2787u);
  /* 102f2787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f278a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f278c jle 0x102f279f */
  if ((C.zf||C.sf!=C.of)) goto L_102f279f;
  /* 102f278e push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2790 push 0x102fa108 */
  push32((uint32_t)(0x102fa108u));
  /* 102f2795 push 0x102fa068 */
  push32((uint32_t)(0x102fa068u));
  /* 102f279a call ebx */
  call_ind((uint32_t)(EBX), 0x102f279cu);
  /* 102f279c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f279f:;
  /* 102f279f pop edi */
  EDI = (pop32());
  /* 102f27a0 pop esi */
  ESI = (pop32());
  /* 102f27a1 pop ebp */
  EBP = (pop32());
  /* 102f27a2 pop ebx */
  EBX = (pop32());
  /* 102f27a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f27a6 ret  */
  ESPCHK(0x102f13d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b0 @ 0x102f27b0 (23 bytes, 6 insns) */
void f_102f27b0(void) {
  FTRACE(0x102f27b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f27b0 call 0x102f27c8 */
  push32(0x102f27b5u); f_102f27c8();
  /* 102f27b5 call 0x102f29f9 */
  push32(0x102f27bau); f_102f29f9();
  /* 102f27ba mov dword ptr [0x102fa1a8], eax */
  w32((uint32_t)(0x102fa1a8), (EAX));
  /* 102f27bf call 0x102f29a9 */
  push32(0x102f27c4u); f_102f29a9();
  /* 102f27c4 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 102f27c6 ret  */
  ESPCHK(0x102f27b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c8 @ 0x102f27c8 (56 bytes, 8 insns) */
void f_102f27c8(void) {
  FTRACE(0x102f27c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f27c8 mov eax, 0x102f2dd2 */
  EAX = (0x102f2dd2u);
  /* 102f27cd mov dword ptr [0x102f9298], 0x102f2a7c */
  w32((uint32_t)(0x102f9298), (0x102f2a7cu));
  /* 102f27d7 mov dword ptr [0x102f9294], eax */
  w32((uint32_t)(0x102f9294), (EAX));
  /* 102f27dc mov dword ptr [0x102f929c], 0x102f2ae2 */
  w32((uint32_t)(0x102f929c), (0x102f2ae2u));
  /* 102f27e6 mov dword ptr [0x102f92a0], 0x102f2a22 */
  w32((uint32_t)(0x102f92a0), (0x102f2a22u));
  /* 102f27f0 mov dword ptr [0x102f92a4], 0x102f2aca */
  w32((uint32_t)(0x102f92a4), (0x102f2acau));
  /* 102f27fa mov dword ptr [0x102f92a8], eax */
  w32((uint32_t)(0x102f92a8), (EAX));
  /* 102f27ff ret  */
  ESPCHK(0x102f27c8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002800 @ 0x102f2800 (217 bytes, 57 insns) */
void f_102f2800(void) {
  FTRACE(0x102f2800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2800 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f2804 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2807 jne 0x102f2895 */
  if (!C.zf) goto L_102f2895;
  /* 102f280d call dword ptr [0x102f8050] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8050))), 0x102f2813u);
  /* 102f2813 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2815 mov dword ptr [0x102fa1c4], eax */
  w32((uint32_t)(0x102fa1c4), (EAX));
  /* 102f281a call 0x102f36d3 */
  push32(0x102f281fu); f_102f36d3();
  /* 102f281f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2821 pop ecx */
  ECX = (pop32());
  /* 102f2822 je 0x102f2860 */
  if (C.zf) goto L_102f2860;
  /* 102f2824 mov eax, dword ptr [0x102fa1c4] */
  EAX = (r32((uint32_t)(0x102fa1c4)));
  /* 102f2829 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f282b mov cl, byte ptr [0x102fa1c5] */
  CL = (r8((uint32_t)(0x102fa1c5)));
  /* 102f2831 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f2836 shr dword ptr [0x102fa1c4], 0x10 */
  w32((uint32_t)(0x102fa1c4), (sh_shr((uint32_t)(r32((uint32_t)(0x102fa1c4))), (0x10u)&0x1f, 32)));
  /* 102f283d mov dword ptr [0x102fa1cc], eax */
  w32((uint32_t)(0x102fa1cc), (EAX));
  /* 102f2842 mov dword ptr [0x102fa1d0], ecx */
  w32((uint32_t)(0x102fa1d0), (ECX));
  /* 102f2848 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102f284b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f284d mov dword ptr [0x102fa1c8], eax */
  w32((uint32_t)(0x102fa1c8), (EAX));
  /* 102f2852 call 0x102f2f66 */
  push32(0x102f2857u); f_102f2f66();
  /* 102f2857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2859 jne 0x102f2864 */
  if (!C.zf) goto L_102f2864;
  /* 102f285b call 0x102f370f */
  push32(0x102f2860u); f_102f370f();
L_102f2860:;
  /* 102f2860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f2862 jmp 0x102f28d6 */
  goto L_102f28d6;
L_102f2864:;
  /* 102f2864 call dword ptr [0x102f804c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f804c))), 0x102f286au);
  /* 102f286a mov dword ptr [0x102fa894], eax */
  w32((uint32_t)(0x102fa894), (EAX));
  /* 102f286f call 0x102f35a1 */
  push32(0x102f2874u); f_102f35a1();
  /* 102f2874 mov dword ptr [0x102fa1b0], eax */
  w32((uint32_t)(0x102fa1b0), (EAX));
  /* 102f2879 call 0x102f308b */
  push32(0x102f287eu); f_102f308b();
  /* 102f287e call 0x102f3354 */
  push32(0x102f2883u); f_102f3354();
  /* 102f2883 call 0x102f329b */
  push32(0x102f2888u); f_102f329b();
  /* 102f2888 call 0x102f2e48 */
  push32(0x102f288du); f_102f2e48();
  /* 102f288d inc dword ptr [0x102fa1ac] */
  { uint32_t _r=(r32((uint32_t)(0x102fa1ac)))+1; w32((uint32_t)(0x102fa1ac), (_r)); fl_inc(_r,32); }
  /* 102f2893 jmp 0x102f28d3 */
  goto L_102f28d3;
L_102f2895:;
  /* 102f2895 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f2897 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2899 jne 0x102f28c7 */
  if (!C.zf) goto L_102f28c7;
  /* 102f289b cmp dword ptr [0x102fa1ac], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102fa1ac))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f28a1 jle 0x102f2860 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2860;
  /* 102f28a3 dec dword ptr [0x102fa1ac] */
  { uint32_t _r=(r32((uint32_t)(0x102fa1ac)))-1; w32((uint32_t)(0x102fa1ac), (_r)); fl_dec(_r,32); }
  /* 102f28a9 cmp dword ptr [0x102fa1fc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x102fa1fc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f28af jne 0x102f28b6 */
  if (!C.zf) goto L_102f28b6;
  /* 102f28b1 call 0x102f2e86 */
  push32(0x102f28b6u); f_102f2e86();
L_102f28b6:;
  /* 102f28b6 call 0x102f3247 */
  push32(0x102f28bbu); f_102f3247();
  /* 102f28bb call 0x102f2fba */
  push32(0x102f28c0u); f_102f2fba();
  /* 102f28c0 call 0x102f370f */
  push32(0x102f28c5u); f_102f370f();
  /* 102f28c5 jmp 0x102f28d3 */
  goto L_102f28d3;
L_102f28c7:;
  /* 102f28c7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f28ca jne 0x102f28d3 */
  if (!C.zf) goto L_102f28d3;
  /* 102f28cc push ecx */
  push32((uint32_t)(ECX));
  /* 102f28cd call 0x102f2feb */
  push32(0x102f28d2u); f_102f2feb();
  /* 102f28d2 pop ecx */
  ECX = (pop32());
L_102f28d3:;
  /* 102f28d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f28d5 pop eax */
  EAX = (pop32());
L_102f28d6:;
  /* 102f28d6 ret 0xc */
  ESPCHK(0x102f2800u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x102f28d9 (157 bytes, 73 insns) */
void f_102f28d9(void) {
  FTRACE(0x102f28d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f28d9 push ebp */
  push32((uint32_t)(EBP));
  /* 102f28da mov ebp, esp */
  EBP = (ESP);
  /* 102f28dc push ebx */
  push32((uint32_t)(EBX));
  /* 102f28dd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f28e0 push esi */
  push32((uint32_t)(ESI));
  /* 102f28e1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f28e4 push edi */
  push32((uint32_t)(EDI));
  /* 102f28e5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f28e8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f28ea jne 0x102f28f5 */
  if (!C.zf) goto L_102f28f5;
  /* 102f28ec cmp dword ptr [0x102fa1ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102fa1ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f28f3 jmp 0x102f291b */
  goto L_102f291b;
L_102f28f5:;
  /* 102f28f5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f28f8 je 0x102f28ff */
  if (C.zf) goto L_102f28ff;
  /* 102f28fa cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f28fd jne 0x102f2921 */
  if (!C.zf) goto L_102f2921;
L_102f28ff:;
  /* 102f28ff mov eax, dword ptr [0x102fa898] */
  EAX = (r32((uint32_t)(0x102fa898)));
  /* 102f2904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2906 je 0x102f2911 */
  if (C.zf) goto L_102f2911;
  /* 102f2908 push edi */
  push32((uint32_t)(EDI));
  /* 102f2909 push esi */
  push32((uint32_t)(ESI));
  /* 102f290a push ebx */
  push32((uint32_t)(EBX));
  /* 102f290b call eax */
  call_ind((uint32_t)(EAX), 0x102f290du);
  /* 102f290d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f290f je 0x102f291d */
  if (C.zf) goto L_102f291d;
L_102f2911:;
  /* 102f2911 push edi */
  push32((uint32_t)(EDI));
  /* 102f2912 push esi */
  push32((uint32_t)(ESI));
  /* 102f2913 push ebx */
  push32((uint32_t)(EBX));
  /* 102f2914 call 0x102f2800 */
  push32(0x102f2919u); f_102f2800();
  /* 102f2919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_102f291b:;
  /* 102f291b jne 0x102f2921 */
  if (!C.zf) goto L_102f2921;
L_102f291d:;
  /* 102f291d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f291f jmp 0x102f296f */
  goto L_102f296f;
L_102f2921:;
  /* 102f2921 push edi */
  push32((uint32_t)(EDI));
  /* 102f2922 push esi */
  push32((uint32_t)(ESI));
  /* 102f2923 push ebx */
  push32((uint32_t)(EBX));
  /* 102f2924 call 0x102f1000 */
  push32(0x102f2929u); f_102f1000();
  /* 102f2929 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f292c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102f292f jne 0x102f293d */
  if (!C.zf) goto L_102f293d;
  /* 102f2931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2933 jne 0x102f296c */
  if (!C.zf) goto L_102f296c;
  /* 102f2935 push edi */
  push32((uint32_t)(EDI));
  /* 102f2936 push eax */
  push32((uint32_t)(EAX));
  /* 102f2937 push ebx */
  push32((uint32_t)(EBX));
  /* 102f2938 call 0x102f2800 */
  push32(0x102f293du); f_102f2800();
L_102f293d:;
  /* 102f293d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f293f je 0x102f2946 */
  if (C.zf) goto L_102f2946;
  /* 102f2941 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2944 jne 0x102f296c */
  if (!C.zf) goto L_102f296c;
L_102f2946:;
  /* 102f2946 push edi */
  push32((uint32_t)(EDI));
  /* 102f2947 push esi */
  push32((uint32_t)(ESI));
  /* 102f2948 push ebx */
  push32((uint32_t)(EBX));
  /* 102f2949 call 0x102f2800 */
  push32(0x102f294eu); f_102f2800();
  /* 102f294e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2950 jne 0x102f2955 */
  if (!C.zf) goto L_102f2955;
  /* 102f2952 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_102f2955:;
  /* 102f2955 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2959 je 0x102f296c */
  if (C.zf) goto L_102f296c;
  /* 102f295b mov eax, dword ptr [0x102fa898] */
  EAX = (r32((uint32_t)(0x102fa898)));
  /* 102f2960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2962 je 0x102f296c */
  if (C.zf) goto L_102f296c;
  /* 102f2964 push edi */
  push32((uint32_t)(EDI));
  /* 102f2965 push esi */
  push32((uint32_t)(ESI));
  /* 102f2966 push ebx */
  push32((uint32_t)(EBX));
  /* 102f2967 call eax */
  call_ind((uint32_t)(EAX), 0x102f2969u);
  /* 102f2969 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_102f296c:;
  /* 102f296c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_102f296f:;
  /* 102f296f pop edi */
  EDI = (pop32());
  /* 102f2970 pop esi */
  ESI = (pop32());
  /* 102f2971 pop ebx */
  EBX = (pop32());
  /* 102f2972 pop ebp */
  EBP = (pop32());
  /* 102f2973 ret 0xc */
  ESPCHK(0x102f28d9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x102f2976 (48 bytes, 15 insns) */
void f_102f2976(void) {
  FTRACE(0x102f2976u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2976 mov eax, dword ptr [0x102fa1b8] */
  EAX = (r32((uint32_t)(0x102fa1b8)));
  /* 102f297b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f297e je 0x102f298d */
  if (C.zf) goto L_102f298d;
  /* 102f2980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2982 jne 0x102f2992 */
  if (!C.zf) goto L_102f2992;
  /* 102f2984 cmp dword ptr [0x102fa1bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102fa1bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f298b jne 0x102f2992 */
  if (!C.zf) goto L_102f2992;
L_102f298d:;
  /* 102f298d call 0x102f3784 */
  push32(0x102f2992u); f_102f3784();
L_102f2992:;
  /* 102f2992 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102f2996 call 0x102f37bd */
  push32(0x102f299bu); f_102f37bd();
  /* 102f299b push 0xff */
  push32((uint32_t)(0xffu));
  /* 102f29a0 call dword ptr [0x102f9290] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f9290))), 0x102f29a6u);
  /* 102f29a6 pop ecx */
  ECX = (pop32());
  /* 102f29a7 pop ecx */
  ECX = (pop32());
  /* 102f29a8 ret  */
  ESPCHK(0x102f2976u, _esp0);
  ESP += 4; return;
}

/* FUN_100029a9 @ 0x102f29a9 (18 bytes, 6 insns) */
void f_102f29a9(void) {
  FTRACE(0x102f29a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f29a9 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 102f29ae push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 102f29b3 call 0x102f3945 */
  push32(0x102f29b8u); f_102f3945();
  /* 102f29b8 pop ecx */
  ECX = (pop32());
  /* 102f29b9 pop ecx */
  ECX = (pop32());
  /* 102f29ba ret  */
  ESPCHK(0x102f29a9u, _esp0);
  ESP += 4; return;
}

/* FUN_100029bb @ 0x102f29bb (62 bytes, 24 insns) */
void f_102f29bb(void) {
  FTRACE(0x102f29bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f29bb push ebp */
  push32((uint32_t)(EBP));
  /* 102f29bc mov ebp, esp */
  EBP = (ESP);
  /* 102f29be sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f29c1 fld qword ptr [0x102f8168] */
  fpu_push(rf64((uint32_t)(0x102f8168)));
  /* 102f29c7 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 102f29ca fld qword ptr [0x102f8160] */
  fpu_push(rf64((uint32_t)(0x102f8160)));
  /* 102f29d0 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 102f29d3 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 102f29d6 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 102f29d9 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 102f29dc fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 102f29df fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 102f29e2 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 102f29e5 fcomp qword ptr [0x102f8158] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x102f8158)));
  (void)fpu_pop();
  /* 102f29eb fnstsw ax */
  AX = fpu_status();
  /* 102f29ed sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 102f29ee jbe 0x102f29f5 */
  if ((C.cf||C.zf)) goto L_102f29f5;
  /* 102f29f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f29f2 pop eax */
  EAX = (pop32());
  /* 102f29f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f29f4 ret  */
  ESPCHK(0x102f29bbu, _esp0);
  ESP += 4; return;
L_102f29f5:;
  /* 102f29f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f29f7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f29f8 ret  */
  ESPCHK(0x102f29bbu, _esp0);
  ESP += 4; return;
}

/* FUN_100029f9 @ 0x102f29f9 (41 bytes, 13 insns) */
void f_102f29f9(void) {
  FTRACE(0x102f29f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f29f9 push 0x102f818c */
  push32((uint32_t)(0x102f818cu));
  /* 102f29fe call dword ptr [0x102f8058] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8058))), 0x102f2a04u);
  /* 102f2a04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2a06 je 0x102f2a1d */
  if (C.zf) goto L_102f2a1d;
  /* 102f2a08 push 0x102f8170 */
  push32((uint32_t)(0x102f8170u));
  /* 102f2a0d push eax */
  push32((uint32_t)(EAX));
  /* 102f2a0e call dword ptr [0x102f8054] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8054))), 0x102f2a14u);
  /* 102f2a14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2a16 je 0x102f2a1d */
  if (C.zf) goto L_102f2a1d;
  /* 102f2a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2a1a call eax */
  call_ind((uint32_t)(EAX), 0x102f2a1cu);
  /* 102f2a1c ret  */
  ESPCHK(0x102f29f9u, _esp0);
  ESP += 4; return;
L_102f2a1d:;
  /* 102f2a1d jmp 0x102f29bb */
  f_102f29bb(); return;
}

/* FUN_10002a22 @ 0x102f2a22 (90 bytes, 37 insns) */
void f_102f2a22(void) {
  FTRACE(0x102f2a22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2a22 push esi */
  push32((uint32_t)(ESI));
  /* 102f2a23 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102f2a27 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 102f2a2a push eax */
  push32((uint32_t)(EAX));
  /* 102f2a2b call 0x102f3aeb */
  push32(0x102f2a30u); f_102f3aeb();
  /* 102f2a30 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2a33 pop ecx */
  ECX = (pop32());
  /* 102f2a34 je 0x102f2a62 */
  if (C.zf) goto L_102f2a62;
L_102f2a36:;
  /* 102f2a36 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f2a37 cmp dword ptr [0x102f9368], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102f9368))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2a3e jle 0x102f2a4f */
  if ((C.zf||C.sf!=C.of)) goto L_102f2a4f;
  /* 102f2a40 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 102f2a43 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f2a45 push eax */
  push32((uint32_t)(EAX));
  /* 102f2a46 call 0x102f3a76 */
  push32(0x102f2a4bu); f_102f3a76();
  /* 102f2a4b pop ecx */
  ECX = (pop32());
  /* 102f2a4c pop ecx */
  ECX = (pop32());
  /* 102f2a4d jmp 0x102f2a5e */
  goto L_102f2a5e;
L_102f2a4f:;
  /* 102f2a4f movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 102f2a52 mov ecx, dword ptr [0x102f9374] */
  ECX = (r32((uint32_t)(0x102f9374)));
  /* 102f2a58 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 102f2a5b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_102f2a5e:;
  /* 102f2a5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2a60 jne 0x102f2a36 */
  if (!C.zf) goto L_102f2a36;
L_102f2a62:;
  /* 102f2a62 mov cl, byte ptr [0x102f936c] */
  CL = (r8((uint32_t)(0x102f936c)));
  /* 102f2a68 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f2a6a mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 102f2a6c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102f2a6d:;
  /* 102f2a6d mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 102f2a6f mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 102f2a71 mov al, cl */
  AL = (CL);
  /* 102f2a73 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 102f2a75 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f2a76 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 102f2a78 jne 0x102f2a6d */
  if (!C.zf) goto L_102f2a6d;
  /* 102f2a7a pop esi */
  ESI = (pop32());
  /* 102f2a7b ret  */
  ESPCHK(0x102f2a22u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x102f2ae2 (62 bytes, 29 insns) */
void f_102f2ae2(void) {
  FTRACE(0x102f2ae2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2ae2 push ebp */
  push32((uint32_t)(EBP));
  /* 102f2ae3 mov ebp, esp */
  EBP = (ESP);
  /* 102f2ae5 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2ae6 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2ae7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2aeb push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102f2aee je 0x102f2b0b */
  if (C.zf) goto L_102f2b0b;
  /* 102f2af0 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102f2af3 push eax */
  push32((uint32_t)(EAX));
  /* 102f2af4 call 0x102f3fb7 */
  push32(0x102f2af9u); f_102f3fb7();
  /* 102f2af9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f2afc pop ecx */
  ECX = (pop32());
  /* 102f2afd pop ecx */
  ECX = (pop32());
  /* 102f2afe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f2b01 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102f2b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f2b06 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102f2b09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f2b0a ret  */
  ESPCHK(0x102f2ae2u, _esp0);
  ESP += 4; return;
L_102f2b0b:;
  /* 102f2b0b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 102f2b0e push eax */
  push32((uint32_t)(EAX));
  /* 102f2b0f call 0x102f3fe4 */
  push32(0x102f2b14u); f_102f3fe4();
  /* 102f2b14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f2b17 pop ecx */
  ECX = (pop32());
  /* 102f2b18 pop ecx */
  ECX = (pop32());
  /* 102f2b19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f2b1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102f2b1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f2b1f ret  */
  ESPCHK(0x102f2ae2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x102f2b20 (97 bytes, 42 insns) */
void f_102f2b20(void) {
  FTRACE(0x102f2b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2b20 push ebp */
  push32((uint32_t)(EBP));
  /* 102f2b21 mov ebp, esp */
  EBP = (ESP);
  /* 102f2b23 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f2b26 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 102f2b29 push esi */
  push32((uint32_t)(ESI));
  /* 102f2b2a push eax */
  push32((uint32_t)(EAX));
  /* 102f2b2b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2b2e push eax */
  push32((uint32_t)(EAX));
  /* 102f2b2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f2b32 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2b33 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2b34 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 102f2b36 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 102f2b39 call 0x102f4088 */
  push32(0x102f2b3eu); f_102f4088();
  /* 102f2b3e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f2b41 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2b44 push eax */
  push32((uint32_t)(EAX));
  /* 102f2b45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f2b48 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 102f2b4b push eax */
  push32((uint32_t)(EAX));
  /* 102f2b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f2b4e cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2b52 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102f2b55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f2b57 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f2b59 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 102f2b5c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2b5e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2b60 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2b61 call 0x102f4011 */
  push32(0x102f2b66u); f_102f4011();
  /* 102f2b66 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2b6b push eax */
  push32((uint32_t)(EAX));
  /* 102f2b6c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f2b6f push esi */
  push32((uint32_t)(ESI));
  /* 102f2b70 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2b73 call 0x102f2b81 */
  push32(0x102f2b78u); f_102f2b81();
  /* 102f2b78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f2b7b add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2b7e pop esi */
  ESI = (pop32());
  /* 102f2b7f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f2b80 ret  */
  ESPCHK(0x102f2b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b81 @ 0x102f2b81 (194 bytes, 91 insns) */
void f_102f2b81(void) {
  FTRACE(0x102f2b81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2b81 push ebp */
  push32((uint32_t)(EBP));
  /* 102f2b82 mov ebp, esp */
  EBP = (ESP);
  /* 102f2b84 push ebx */
  push32((uint32_t)(EBX));
  /* 102f2b85 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f2b87 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f2b8a push esi */
  push32((uint32_t)(ESI));
  /* 102f2b8b mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 102f2b8e push edi */
  push32((uint32_t)(EDI));
  /* 102f2b8f mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f2b92 je 0x102f2baf */
  if (C.zf) goto L_102f2baf;
  /* 102f2b94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f2b96 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2b99 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 102f2b9c push eax */
  push32((uint32_t)(EAX));
  /* 102f2b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f2b9f cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2ba2 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102f2ba5 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2ba7 push eax */
  push32((uint32_t)(EAX));
  /* 102f2ba8 call 0x102f2e23 */
  push32(0x102f2badu); f_102f2e23();
  /* 102f2bad pop ecx */
  ECX = (pop32());
  /* 102f2bae pop ecx */
  ECX = (pop32());
L_102f2baf:;
  /* 102f2baf cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2bb2 mov eax, edi */
  EAX = (EDI);
  /* 102f2bb4 jne 0x102f2bbc */
  if (!C.zf) goto L_102f2bbc;
  /* 102f2bb6 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 102f2bb9 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_102f2bbc:;
  /* 102f2bbc cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2bbf jle 0x102f2bd3 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2bd3;
  /* 102f2bc1 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 102f2bc4 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 102f2bc7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 102f2bc9 mov eax, ecx */
  EAX = (ECX);
  /* 102f2bcb mov cl, byte ptr [0x102f936c] */
  CL = (r8((uint32_t)(0x102f936c)));
  /* 102f2bd1 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_102f2bd3:;
  /* 102f2bd3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f2bd5 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f2bd8 push 0x102f81a0 */
  push32((uint32_t)(0x102f81a0u));
  /* 102f2bdd sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 102f2be0 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2be2 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2be5 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2be6 call 0x102f41a0 */
  push32(0x102f2bebu); f_102f41a0();
  /* 102f2beb cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2bee pop ecx */
  ECX = (pop32());
  /* 102f2bef pop ecx */
  ECX = (pop32());
  /* 102f2bf0 mov ecx, eax */
  ECX = (EAX);
  /* 102f2bf2 je 0x102f2bf7 */
  if (C.zf) goto L_102f2bf7;
  /* 102f2bf4 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_102f2bf7:;
  /* 102f2bf7 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 102f2bfa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f2bfb cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f2bfe je 0x102f2c3c */
  if (C.zf) goto L_102f2c3c;
  /* 102f2c00 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 102f2c03 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102f2c04 jns 0x102f2c0b */
  if (!C.sf) goto L_102f2c0b;
  /* 102f2c06 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f2c08 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_102f2c0b:;
  /* 102f2c0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f2c0c cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2c0f jl 0x102f2c22 */
  if ((C.sf!=C.of)) goto L_102f2c22;
  /* 102f2c11 mov eax, ebx */
  EAX = (EBX);
  /* 102f2c13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 102f2c15 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f2c16 pop esi */
  ESI = (pop32());
  /* 102f2c17 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f2c19 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 102f2c1b mov eax, ebx */
  EAX = (EBX);
  /* 102f2c1d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f2c1e idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f2c20 mov ebx, edx */
  EBX = (EDX);
L_102f2c22:;
  /* 102f2c22 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f2c23 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2c26 jl 0x102f2c39 */
  if ((C.sf!=C.of)) goto L_102f2c39;
  /* 102f2c28 mov eax, ebx */
  EAX = (EBX);
  /* 102f2c2a push 0xa */
  push32((uint32_t)(0xau));
  /* 102f2c2c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f2c2d pop esi */
  ESI = (pop32());
  /* 102f2c2e idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f2c30 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 102f2c32 mov eax, ebx */
  EAX = (EBX);
  /* 102f2c34 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f2c35 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f2c37 mov ebx, edx */
  EBX = (EDX);
L_102f2c39:;
  /* 102f2c39 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_102f2c3c:;
  /* 102f2c3c mov eax, edi */
  EAX = (EDI);
  /* 102f2c3e pop edi */
  EDI = (pop32());
  /* 102f2c3f pop esi */
  ESI = (pop32());
  /* 102f2c40 pop ebx */
  EBX = (pop32());
  /* 102f2c41 pop ebp */
  EBP = (pop32());
  /* 102f2c42 ret  */
  ESPCHK(0x102f2b81u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c43 @ 0x102f2c43 (85 bytes, 37 insns) */
void f_102f2c43(void) {
  FTRACE(0x102f2c43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2c43 push ebp */
  push32((uint32_t)(EBP));
  /* 102f2c44 mov ebp, esp */
  EBP = (ESP);
  /* 102f2c46 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f2c49 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 102f2c4c push esi */
  push32((uint32_t)(ESI));
  /* 102f2c4d push eax */
  push32((uint32_t)(EAX));
  /* 102f2c4e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2c51 push eax */
  push32((uint32_t)(EAX));
  /* 102f2c52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f2c55 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2c56 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2c57 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 102f2c59 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 102f2c5c call 0x102f4088 */
  push32(0x102f2c61u); f_102f4088();
  /* 102f2c61 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f2c64 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2c67 push eax */
  push32((uint32_t)(EAX));
  /* 102f2c68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f2c6b add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2c6d push eax */
  push32((uint32_t)(EAX));
  /* 102f2c6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f2c70 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2c74 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102f2c77 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2c7a push eax */
  push32((uint32_t)(EAX));
  /* 102f2c7b call 0x102f4011 */
  push32(0x102f2c80u); f_102f4011();
  /* 102f2c80 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2c85 push eax */
  push32((uint32_t)(EAX));
  /* 102f2c86 push esi */
  push32((uint32_t)(ESI));
  /* 102f2c87 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2c8a call 0x102f2c98 */
  push32(0x102f2c8fu); f_102f2c98();
  /* 102f2c8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f2c92 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2c95 pop esi */
  ESI = (pop32());
  /* 102f2c96 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f2c97 ret  */
  ESPCHK(0x102f2c43u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c98 @ 0x102f2c98 (167 bytes, 73 insns) */
void f_102f2c98(void) {
  FTRACE(0x102f2c98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2c98 push ebp */
  push32((uint32_t)(EBP));
  /* 102f2c99 mov ebp, esp */
  EBP = (ESP);
  /* 102f2c9b push ebx */
  push32((uint32_t)(EBX));
  /* 102f2c9c push esi */
  push32((uint32_t)(ESI));
  /* 102f2c9d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f2ca0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f2ca3 push edi */
  push32((uint32_t)(EDI));
  /* 102f2ca4 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 102f2ca7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f2ca8 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f2cac je 0x102f2cc8 */
  if (C.zf) goto L_102f2cc8;
  /* 102f2cae cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2cb1 jne 0x102f2cc8 */
  if (!C.zf) goto L_102f2cc8;
  /* 102f2cb3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f2cb5 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2cb8 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 102f2cbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2cbd add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2cbf mov eax, ecx */
  EAX = (ECX);
  /* 102f2cc1 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 102f2cc4 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_102f2cc8:;
  /* 102f2cc8 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2ccb mov edi, ebx */
  EDI = (EBX);
  /* 102f2ccd jne 0x102f2cd5 */
  if (!C.zf) goto L_102f2cd5;
  /* 102f2ccf mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 102f2cd2 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_102f2cd5:;
  /* 102f2cd5 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 102f2cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2cda jg 0x102f2cec */
  if ((!C.zf&&C.sf==C.of)) goto L_102f2cec;
  /* 102f2cdc push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2cde push edi */
  push32((uint32_t)(EDI));
  /* 102f2cdf call 0x102f2e23 */
  push32(0x102f2ce4u); f_102f2e23();
  /* 102f2ce4 pop ecx */
  ECX = (pop32());
  /* 102f2ce5 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 102f2ce8 pop ecx */
  ECX = (pop32());
  /* 102f2ce9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f2cea jmp 0x102f2cee */
  goto L_102f2cee;
L_102f2cec:;
  /* 102f2cec add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102f2cee:;
  /* 102f2cee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2cf2 jle 0x102f2d38 */
  if ((C.zf||C.sf!=C.of)) goto L_102f2d38;
  /* 102f2cf4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2cf6 push edi */
  push32((uint32_t)(EDI));
  /* 102f2cf7 call 0x102f2e23 */
  push32(0x102f2cfcu); f_102f2e23();
  /* 102f2cfc mov al, byte ptr [0x102f936c] */
  AL = (r8((uint32_t)(0x102f936c)));
  /* 102f2d01 pop ecx */
  ECX = (pop32());
  /* 102f2d02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f2d04 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 102f2d07 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f2d08 pop ecx */
  ECX = (pop32());
  /* 102f2d09 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f2d0b jge 0x102f2d38 */
  if ((C.sf==C.of)) goto L_102f2d38;
  /* 102f2d0d cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f2d11 je 0x102f2d17 */
  if (C.zf) goto L_102f2d17;
  /* 102f2d13 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 102f2d15 jmp 0x102f2d1e */
  goto L_102f2d1e;
L_102f2d17:;
  /* 102f2d17 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 102f2d19 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2d1c jl 0x102f2d21 */
  if ((C.sf!=C.of)) goto L_102f2d21;
L_102f2d1e:;
  /* 102f2d1e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_102f2d21:;
  /* 102f2d21 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2d24 push edi */
  push32((uint32_t)(EDI));
  /* 102f2d25 call 0x102f2e23 */
  push32(0x102f2d2au); f_102f2e23();
  /* 102f2d2a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2d2d push 0x30 */
  push32((uint32_t)(0x30u));
  /* 102f2d2f push edi */
  push32((uint32_t)(EDI));
  /* 102f2d30 call 0x102f4290 */
  push32(0x102f2d35u); f_102f4290();
  /* 102f2d35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f2d38:;
  /* 102f2d38 pop edi */
  EDI = (pop32());
  /* 102f2d39 mov eax, ebx */
  EAX = (EBX);
  /* 102f2d3b pop esi */
  ESI = (pop32());
  /* 102f2d3c pop ebx */
  EBX = (pop32());
  /* 102f2d3d pop ebp */
  EBP = (pop32());
  /* 102f2d3e ret  */
  ESPCHK(0x102f2c98u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d3f @ 0x102f2d3f (147 bytes, 66 insns) */
void f_102f2d3f(void) {
  FTRACE(0x102f2d3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2d3f push ebp */
  push32((uint32_t)(EBP));
  /* 102f2d40 mov ebp, esp */
  EBP = (ESP);
  /* 102f2d42 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f2d45 push ebx */
  push32((uint32_t)(EBX));
  /* 102f2d46 push esi */
  push32((uint32_t)(ESI));
  /* 102f2d47 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 102f2d4a push edi */
  push32((uint32_t)(EDI));
  /* 102f2d4b push eax */
  push32((uint32_t)(EAX));
  /* 102f2d4c lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2d4f push eax */
  push32((uint32_t)(EAX));
  /* 102f2d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f2d53 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2d54 push ecx */
  push32((uint32_t)(ECX));
  /* 102f2d55 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 102f2d57 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 102f2d5a call 0x102f4088 */
  push32(0x102f2d5fu); f_102f4088();
  /* 102f2d5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f2d62 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f2d65 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 102f2d68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f2d6a cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2d6e sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102f2d71 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2d74 mov edi, eax */
  EDI = (EAX);
  /* 102f2d76 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2d79 push eax */
  push32((uint32_t)(EAX));
  /* 102f2d7a push ebx */
  push32((uint32_t)(EBX));
  /* 102f2d7b push edi */
  push32((uint32_t)(EDI));
  /* 102f2d7c call 0x102f4011 */
  push32(0x102f2d81u); f_102f4011();
  /* 102f2d81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f2d84 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2d87 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f2d88 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2d8a setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 102f2d8d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2d90 jl 0x102f2db8 */
  if ((C.sf!=C.of)) goto L_102f2db8;
  /* 102f2d92 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2d94 jge 0x102f2db8 */
  if ((C.sf==C.of)) goto L_102f2db8;
  /* 102f2d96 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 102f2d98 je 0x102f2da4 */
  if (C.zf) goto L_102f2da4;
L_102f2d9a:;
  /* 102f2d9a mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 102f2d9c inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f2d9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f2d9f jne 0x102f2d9a */
  if (!C.zf) goto L_102f2d9a;
  /* 102f2da1 and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_102f2da4:;
  /* 102f2da4 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2da7 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2da9 push eax */
  push32((uint32_t)(EAX));
  /* 102f2daa push ebx */
  push32((uint32_t)(EBX));
  /* 102f2dab push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2dae call 0x102f2c98 */
  push32(0x102f2db3u); f_102f2c98();
  /* 102f2db3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2db6 jmp 0x102f2dcd */
  goto L_102f2dcd;
L_102f2db8:;
  /* 102f2db8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f2dbb push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2dbd push eax */
  push32((uint32_t)(EAX));
  /* 102f2dbe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f2dc1 push ebx */
  push32((uint32_t)(EBX));
  /* 102f2dc2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2dc5 call 0x102f2b81 */
  push32(0x102f2dcau); f_102f2b81();
  /* 102f2dca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f2dcd:;
  /* 102f2dcd pop edi */
  EDI = (pop32());
  /* 102f2dce pop esi */
  ESI = (pop32());
  /* 102f2dcf pop ebx */
  EBX = (pop32());
  /* 102f2dd0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f2dd1 ret  */
  ESPCHK(0x102f2d3fu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x102f2dd2 (81 bytes, 29 insns) */
void f_102f2dd2(void) {
  FTRACE(0x102f2dd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2dd2 push ebp */
  push32((uint32_t)(EBP));
  /* 102f2dd3 mov ebp, esp */
  EBP = (ESP);
  /* 102f2dd5 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2dd9 je 0x102f2e0d */
  if (C.zf) goto L_102f2e0d;
  /* 102f2ddb cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2ddf je 0x102f2e0d */
  if (C.zf) goto L_102f2e0d;
  /* 102f2de1 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2de5 jne 0x102f2dfa */
  if (!C.zf) goto L_102f2dfa;
  /* 102f2de7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f2dea push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2ded push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f2df0 call 0x102f2c43 */
  push32(0x102f2df5u); f_102f2c43();
  /* 102f2df5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2df8 pop ebp */
  EBP = (pop32());
  /* 102f2df9 ret  */
  ESPCHK(0x102f2dd2u, _esp0);
  ESP += 4; return;
L_102f2dfa:;
  /* 102f2dfa push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102f2dfd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f2e00 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2e03 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f2e06 call 0x102f2d3f */
  push32(0x102f2e0bu); f_102f2d3f();
  /* 102f2e0b jmp 0x102f2e1e */
  goto L_102f2e1e;
L_102f2e0d:;
  /* 102f2e0d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102f2e10 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f2e13 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f2e16 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f2e19 call 0x102f2b20 */
  push32(0x102f2e1eu); f_102f2b20();
L_102f2e1e:;
  /* 102f2e1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2e21 pop ebp */
  EBP = (pop32());
  /* 102f2e22 ret  */
  ESPCHK(0x102f2dd2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e23 @ 0x102f2e23 (37 bytes, 18 insns) */
void f_102f2e23(void) {
  FTRACE(0x102f2e23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2e23 push edi */
  push32((uint32_t)(EDI));
  /* 102f2e24 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 102f2e28 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f2e2a je 0x102f2e46 */
  if (C.zf) goto L_102f2e46;
  /* 102f2e2c push esi */
  push32((uint32_t)(ESI));
  /* 102f2e2d mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 102f2e31 push esi */
  push32((uint32_t)(ESI));
  /* 102f2e32 call 0x102f4630 */
  push32(0x102f2e37u); f_102f4630();
  /* 102f2e37 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f2e38 push eax */
  push32((uint32_t)(EAX));
  /* 102f2e39 push esi */
  push32((uint32_t)(ESI));
  /* 102f2e3a add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2e3c push esi */
  push32((uint32_t)(ESI));
  /* 102f2e3d call 0x102f42f0 */
  push32(0x102f2e42u); f_102f42f0();
  /* 102f2e42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2e45 pop esi */
  ESI = (pop32());
L_102f2e46:;
  /* 102f2e46 pop edi */
  EDI = (pop32());
  /* 102f2e47 ret  */
  ESPCHK(0x102f2e23u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e48 @ 0x102f2e48 (45 bytes, 12 insns) */
void f_102f2e48(void) {
  FTRACE(0x102f2e48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2e48 mov eax, dword ptr [0x102f9284] */
  EAX = (r32((uint32_t)(0x102f9284)));
  /* 102f2e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2e4f je 0x102f2e53 */
  if (C.zf) goto L_102f2e53;
  /* 102f2e51 call eax */
  call_ind((uint32_t)(EAX), 0x102f2e53u);
L_102f2e53:;
  /* 102f2e53 push 0x102f9010 */
  push32((uint32_t)(0x102f9010u));
  /* 102f2e58 push 0x102f9008 */
  push32((uint32_t)(0x102f9008u));
  /* 102f2e5d call 0x102f2f4c */
  push32(0x102f2e62u); f_102f2f4c();
  /* 102f2e62 push 0x102f9004 */
  push32((uint32_t)(0x102f9004u));
  /* 102f2e67 push 0x102f9000 */
  push32((uint32_t)(0x102f9000u));
  /* 102f2e6c call 0x102f2f4c */
  push32(0x102f2e71u); f_102f2f4c();
  /* 102f2e71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2e74 ret  */
  ESPCHK(0x102f2e48u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x102f2e75 (17 bytes, 6 insns) */
void f_102f2e75(void) {
  FTRACE(0x102f2e75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2e79 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102f2e7d call 0x102f2e95 */
  push32(0x102f2e82u); f_102f2e95();
  /* 102f2e82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2e85 ret  */
  ESPCHK(0x102f2e75u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e86 @ 0x102f2e86 (15 bytes, 6 insns) */
void f_102f2e86(void) {
  FTRACE(0x102f2e86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2e86 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2e88 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f2e8c call 0x102f2e95 */
  push32(0x102f2e91u); f_102f2e95();
  /* 102f2e91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2e94 ret  */
  ESPCHK(0x102f2e86u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e95 @ 0x102f2e95 (163 bytes, 53 insns) */
void f_102f2e95(void) {
  FTRACE(0x102f2e95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2e95 push edi */
  push32((uint32_t)(EDI));
  /* 102f2e96 call 0x102f2f3a */
  push32(0x102f2e9bu); f_102f2f3a();
  /* 102f2e9b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2e9d pop edi */
  EDI = (pop32());
  /* 102f2e9e cmp dword ptr [0x102fa200], edi */
  { uint32_t _a=(r32((uint32_t)(0x102fa200))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2ea4 jne 0x102f2eb7 */
  if (!C.zf) goto L_102f2eb7;
  /* 102f2ea6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102f2eaa call dword ptr [0x102f8064] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8064))), 0x102f2eb0u);
  /* 102f2eb0 push eax */
  push32((uint32_t)(EAX));
  /* 102f2eb1 call dword ptr [0x102f8060] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8060))), 0x102f2eb7u);
L_102f2eb7:;
  /* 102f2eb7 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2ebc push ebx */
  push32((uint32_t)(EBX));
  /* 102f2ebd mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102f2ec1 mov dword ptr [0x102fa1fc], edi */
  w32((uint32_t)(0x102fa1fc), (EDI));
  /* 102f2ec7 mov byte ptr [0x102fa1f8], bl */
  w8((uint32_t)(0x102fa1f8), (BL));
  /* 102f2ecd jne 0x102f2f0b */
  if (!C.zf) goto L_102f2f0b;
  /* 102f2ecf mov eax, dword ptr [0x102fa890] */
  EAX = (r32((uint32_t)(0x102fa890)));
  /* 102f2ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2ed6 je 0x102f2efa */
  if (C.zf) goto L_102f2efa;
  /* 102f2ed8 mov ecx, dword ptr [0x102fa88c] */
  ECX = (r32((uint32_t)(0x102fa88c)));
  /* 102f2ede push esi */
  push32((uint32_t)(ESI));
  /* 102f2edf lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 102f2ee2 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2ee4 jb 0x102f2ef9 */
  if (C.cf) goto L_102f2ef9;
L_102f2ee6:;
  /* 102f2ee6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102f2ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2eea je 0x102f2eee */
  if (C.zf) goto L_102f2eee;
  /* 102f2eec call eax */
  call_ind((uint32_t)(EAX), 0x102f2eeeu);
L_102f2eee:;
  /* 102f2eee sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f2ef1 cmp esi, dword ptr [0x102fa890] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102fa890))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2ef7 jae 0x102f2ee6 */
  if (!C.cf) goto L_102f2ee6;
L_102f2ef9:;
  /* 102f2ef9 pop esi */
  ESI = (pop32());
L_102f2efa:;
  /* 102f2efa push 0x102f9018 */
  push32((uint32_t)(0x102f9018u));
  /* 102f2eff push 0x102f9014 */
  push32((uint32_t)(0x102f9014u));
  /* 102f2f04 call 0x102f2f4c */
  push32(0x102f2f09u); f_102f2f4c();
  /* 102f2f09 pop ecx */
  ECX = (pop32());
  /* 102f2f0a pop ecx */
  ECX = (pop32());
L_102f2f0b:;
  /* 102f2f0b push 0x102f9020 */
  push32((uint32_t)(0x102f9020u));
  /* 102f2f10 push 0x102f901c */
  push32((uint32_t)(0x102f901cu));
  /* 102f2f15 call 0x102f2f4c */
  push32(0x102f2f1au); f_102f2f4c();
  /* 102f2f1a pop ecx */
  ECX = (pop32());
  /* 102f2f1b pop ecx */
  ECX = (pop32());
  /* 102f2f1c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f2f1e pop ebx */
  EBX = (pop32());
  /* 102f2f1f je 0x102f2f28 */
  if (C.zf) goto L_102f2f28;
  /* 102f2f21 call 0x102f2f43 */
  push32(0x102f2f26u); f_102f2f43();
  /* 102f2f26 pop edi */
  EDI = (pop32());
  /* 102f2f27 ret  */
  ESPCHK(0x102f2e95u, _esp0);
  ESP += 4; return;
L_102f2f28:;
  /* 102f2f28 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102f2f2c mov dword ptr [0x102fa200], edi */
  w32((uint32_t)(0x102fa200), (EDI));
  /* 102f2f32 call dword ptr [0x102f805c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f805c))), 0x102f2f38u);
  /* 102f2f38 pop edi */
  EDI = (pop32());
  /* 102f2f39 ret  */
  ESPCHK(0x102f2e95u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f3a @ 0x102f2f3a (9 bytes, 4 insns) */
void f_102f2f3a(void) {
  FTRACE(0x102f2f3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2f3a push 0xd */
  push32((uint32_t)(0xdu));
  /* 102f2f3c call 0x102f4749 */
  push32(0x102f2f41u); f_102f4749();
  /* 102f2f41 pop ecx */
  ECX = (pop32());
  /* 102f2f42 ret  */
  ESPCHK(0x102f2f3au, _esp0);
  ESP += 4; return;
}

/* FUN_10002f43 @ 0x102f2f43 (9 bytes, 4 insns) */
void f_102f2f43(void) {
  FTRACE(0x102f2f43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2f43 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102f2f45 call 0x102f47aa */
  push32(0x102f2f4au); f_102f47aa();
  /* 102f2f4a pop ecx */
  ECX = (pop32());
  /* 102f2f4b ret  */
  ESPCHK(0x102f2f43u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f4c @ 0x102f2f4c (26 bytes, 12 insns) */
void f_102f2f4c(void) {
  FTRACE(0x102f2f4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2f4c push esi */
  push32((uint32_t)(ESI));
  /* 102f2f4d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_102f2f51:;
  /* 102f2f51 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2f55 jae 0x102f2f64 */
  if (!C.cf) goto L_102f2f64;
  /* 102f2f57 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102f2f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2f5b je 0x102f2f5f */
  if (C.zf) goto L_102f2f5f;
  /* 102f2f5d call eax */
  call_ind((uint32_t)(EAX), 0x102f2f5fu);
L_102f2f5f:;
  /* 102f2f5f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f2f62 jmp 0x102f2f51 */
  goto L_102f2f51;
L_102f2f64:;
  /* 102f2f64 pop esi */
  ESI = (pop32());
  /* 102f2f65 ret  */
  ESPCHK(0x102f2f4cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f66 @ 0x102f2f66 (84 bytes, 32 insns) */
void f_102f2f66(void) {
  FTRACE(0x102f2f66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2f66 push esi */
  push32((uint32_t)(ESI));
  /* 102f2f67 call 0x102f46b4 */
  push32(0x102f2f6cu); f_102f46b4();
  /* 102f2f6c call dword ptr [0x102f8070] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8070))), 0x102f2f72u);
  /* 102f2f72 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2f75 mov dword ptr [0x102f92ac], eax */
  w32((uint32_t)(0x102f92ac), (EAX));
  /* 102f2f7a je 0x102f2fb6 */
  if (C.zf) goto L_102f2fb6;
  /* 102f2f7c push 0x74 */
  push32((uint32_t)(0x74u));
  /* 102f2f7e push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2f80 call 0x102f47bf */
  push32(0x102f2f85u); f_102f47bf();
  /* 102f2f85 mov esi, eax */
  ESI = (EAX);
  /* 102f2f87 pop ecx */
  ECX = (pop32());
  /* 102f2f88 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f2f8a pop ecx */
  ECX = (pop32());
  /* 102f2f8b je 0x102f2fb6 */
  if (C.zf) goto L_102f2fb6;
  /* 102f2f8d push esi */
  push32((uint32_t)(ESI));
  /* 102f2f8e push dword ptr [0x102f92ac] */
  push32((uint32_t)(r32((uint32_t)(0x102f92ac))));
  /* 102f2f94 call dword ptr [0x102f806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f806c))), 0x102f2f9au);
  /* 102f2f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f2f9c je 0x102f2fb6 */
  if (C.zf) goto L_102f2fb6;
  /* 102f2f9e push esi */
  push32((uint32_t)(ESI));
  /* 102f2f9f call 0x102f2fd8 */
  push32(0x102f2fa4u); f_102f2fd8();
  /* 102f2fa4 pop ecx */
  ECX = (pop32());
  /* 102f2fa5 call dword ptr [0x102f8068] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8068))), 0x102f2fabu);
  /* 102f2fab or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102f2faf push 1 */
  push32((uint32_t)(0x1u));
  /* 102f2fb1 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102f2fb3 pop eax */
  EAX = (pop32());
  /* 102f2fb4 pop esi */
  ESI = (pop32());
  /* 102f2fb5 ret  */
  ESPCHK(0x102f2f66u, _esp0);
  ESP += 4; return;
L_102f2fb6:;
  /* 102f2fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f2fb8 pop esi */
  ESI = (pop32());
  /* 102f2fb9 ret  */
  ESPCHK(0x102f2f66u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fba @ 0x102f2fba (30 bytes, 8 insns) */
void f_102f2fba(void) {
  FTRACE(0x102f2fbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2fba call 0x102f46dd */
  push32(0x102f2fbfu); f_102f46dd();
  /* 102f2fbf mov eax, dword ptr [0x102f92ac] */
  EAX = (r32((uint32_t)(0x102f92ac)));
  /* 102f2fc4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2fc7 je 0x102f2fd7 */
  if (C.zf) goto L_102f2fd7;
  /* 102f2fc9 push eax */
  push32((uint32_t)(EAX));
  /* 102f2fca call dword ptr [0x102f8074] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8074))), 0x102f2fd0u);
  /* 102f2fd0 or dword ptr [0x102f92ac], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x102f92ac)))|(0xffffffffu); w32((uint32_t)(0x102f92ac), (_r)); fl_logic(_r,32); }
L_102f2fd7:;
  /* 102f2fd7 ret  */
  ESPCHK(0x102f2fbau, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd8 @ 0x102f2fd8 (19 bytes, 4 insns) */
void f_102f2fd8(void) {
  FTRACE(0x102f2fd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2fd8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f2fdc mov dword ptr [eax + 0x50], 0x102f9670 */
  w32((uint32_t)(EAX + 0x50), (0x102f9670u));
  /* 102f2fe3 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 102f2fea ret  */
  ESPCHK(0x102f2fd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002feb @ 0x102f2feb (160 bytes, 62 insns) */
void f_102f2feb(void) {
  FTRACE(0x102f2febu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f2feb mov eax, dword ptr [0x102f92ac] */
  EAX = (r32((uint32_t)(0x102f92ac)));
  /* 102f2ff0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f2ff3 je 0x102f308a */
  if (C.zf) goto L_102f308a;
  /* 102f2ff9 push esi */
  push32((uint32_t)(ESI));
  /* 102f2ffa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102f2ffe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f3000 jne 0x102f300f */
  if (!C.zf) goto L_102f300f;
  /* 102f3002 push eax */
  push32((uint32_t)(EAX));
  /* 102f3003 call dword ptr [0x102f8078] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8078))), 0x102f3009u);
  /* 102f3009 mov esi, eax */
  ESI = (EAX);
  /* 102f300b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f300d je 0x102f307b */
  if (C.zf) goto L_102f307b;
L_102f300f:;
  /* 102f300f mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 102f3012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3014 je 0x102f301d */
  if (C.zf) goto L_102f301d;
  /* 102f3016 push eax */
  push32((uint32_t)(EAX));
  /* 102f3017 call 0x102f484c */
  push32(0x102f301cu); f_102f484c();
  /* 102f301c pop ecx */
  ECX = (pop32());
L_102f301d:;
  /* 102f301d mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 102f3020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3022 je 0x102f302b */
  if (C.zf) goto L_102f302b;
  /* 102f3024 push eax */
  push32((uint32_t)(EAX));
  /* 102f3025 call 0x102f484c */
  push32(0x102f302au); f_102f484c();
  /* 102f302a pop ecx */
  ECX = (pop32());
L_102f302b:;
  /* 102f302b mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 102f302e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3030 je 0x102f3039 */
  if (C.zf) goto L_102f3039;
  /* 102f3032 push eax */
  push32((uint32_t)(EAX));
  /* 102f3033 call 0x102f484c */
  push32(0x102f3038u); f_102f484c();
  /* 102f3038 pop ecx */
  ECX = (pop32());
L_102f3039:;
  /* 102f3039 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 102f303c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f303e je 0x102f3047 */
  if (C.zf) goto L_102f3047;
  /* 102f3040 push eax */
  push32((uint32_t)(EAX));
  /* 102f3041 call 0x102f484c */
  push32(0x102f3046u); f_102f484c();
  /* 102f3046 pop ecx */
  ECX = (pop32());
L_102f3047:;
  /* 102f3047 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 102f304a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f304c je 0x102f3055 */
  if (C.zf) goto L_102f3055;
  /* 102f304e push eax */
  push32((uint32_t)(EAX));
  /* 102f304f call 0x102f484c */
  push32(0x102f3054u); f_102f484c();
  /* 102f3054 pop ecx */
  ECX = (pop32());
L_102f3055:;
  /* 102f3055 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 102f3058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f305a je 0x102f3063 */
  if (C.zf) goto L_102f3063;
  /* 102f305c push eax */
  push32((uint32_t)(EAX));
  /* 102f305d call 0x102f484c */
  push32(0x102f3062u); f_102f484c();
  /* 102f3062 pop ecx */
  ECX = (pop32());
L_102f3063:;
  /* 102f3063 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 102f3066 cmp eax, 0x102f9670 */
  { uint32_t _a=(EAX),_b=(0x102f9670u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f306b je 0x102f3074 */
  if (C.zf) goto L_102f3074;
  /* 102f306d push eax */
  push32((uint32_t)(EAX));
  /* 102f306e call 0x102f484c */
  push32(0x102f3073u); f_102f484c();
  /* 102f3073 pop ecx */
  ECX = (pop32());
L_102f3074:;
  /* 102f3074 push esi */
  push32((uint32_t)(ESI));
  /* 102f3075 call 0x102f484c */
  push32(0x102f307au); f_102f484c();
  /* 102f307a pop ecx */
  ECX = (pop32());
L_102f307b:;
  /* 102f307b push 0 */
  push32((uint32_t)(0x0u));
  /* 102f307d push dword ptr [0x102f92ac] */
  push32((uint32_t)(r32((uint32_t)(0x102f92ac))));
  /* 102f3083 call dword ptr [0x102f806c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f806c))), 0x102f3089u);
  /* 102f3089 pop esi */
  ESI = (pop32());
L_102f308a:;
  /* 102f308a ret  */
  ESPCHK(0x102f2febu, _esp0);
  ESP += 4; return;
}

/* FUN_1000308b @ 0x102f308b (444 bytes, 150 insns) */
void f_102f308b(void) {
  FTRACE(0x102f308bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f308b push ebp */
  push32((uint32_t)(EBP));
  /* 102f308c mov ebp, esp */
  EBP = (ESP);
  /* 102f308e sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3091 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3092 push esi */
  push32((uint32_t)(ESI));
  /* 102f3093 push edi */
  push32((uint32_t)(EDI));
  /* 102f3094 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102f3099 call 0x102f4894 */
  push32(0x102f309eu); f_102f4894();
  /* 102f309e mov esi, eax */
  ESI = (EAX);
  /* 102f30a0 pop ecx */
  ECX = (pop32());
  /* 102f30a1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f30a3 jne 0x102f30ad */
  if (!C.zf) goto L_102f30ad;
  /* 102f30a5 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 102f30a7 call 0x102f2976 */
  push32(0x102f30acu); f_102f2976();
  /* 102f30ac pop ecx */
  ECX = (pop32());
L_102f30ad:;
  /* 102f30ad mov dword ptr [0x102fa780], esi */
  w32((uint32_t)(0x102fa780), (ESI));
  /* 102f30b3 mov dword ptr [0x102fa880], 0x20 */
  w32((uint32_t)(0x102fa880), (0x20u));
  /* 102f30bd lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_102f30c3:;
  /* 102f30c3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f30c5 jae 0x102f30e5 */
  if (!C.cf) goto L_102f30e5;
  /* 102f30c7 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102f30cb or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102f30ce and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102f30d2 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 102f30d6 mov eax, dword ptr [0x102fa780] */
  EAX = (r32((uint32_t)(0x102fa780)));
  /* 102f30db add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f30de add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f30e3 jmp 0x102f30c3 */
  goto L_102f30c3;
L_102f30e5:;
  /* 102f30e5 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 102f30e8 push eax */
  push32((uint32_t)(EAX));
  /* 102f30e9 call dword ptr [0x102f808c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f808c))), 0x102f30efu);
  /* 102f30ef cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f30f4 je 0x102f31cb */
  if (C.zf) goto L_102f31cb;
  /* 102f30fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102f30fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f30ff je 0x102f31cb */
  if (C.zf) goto L_102f31cb;
  /* 102f3105 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 102f3107 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 102f310a lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 102f310d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102f3110 mov eax, 0x800 */
  EAX = (0x800u);
  /* 102f3115 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3117 jl 0x102f311b */
  if ((C.sf!=C.of)) goto L_102f311b;
  /* 102f3119 mov edi, eax */
  EDI = (EAX);
L_102f311b:;
  /* 102f311b cmp dword ptr [0x102fa880], edi */
  { uint32_t _a=(r32((uint32_t)(0x102fa880))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3121 jge 0x102f3179 */
  if ((C.sf==C.of)) goto L_102f3179;
  /* 102f3123 mov esi, 0x102fa784 */
  ESI = (0x102fa784u);
L_102f3128:;
  /* 102f3128 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 102f312d call 0x102f4894 */
  push32(0x102f3132u); f_102f4894();
  /* 102f3132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3134 pop ecx */
  ECX = (pop32());
  /* 102f3135 je 0x102f3173 */
  if (C.zf) goto L_102f3173;
  /* 102f3137 add dword ptr [0x102fa880], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x102fa880))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x102fa880), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f313e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102f3140 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_102f3146:;
  /* 102f3146 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3148 jae 0x102f3166 */
  if (!C.cf) goto L_102f3166;
  /* 102f314a and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 102f314e or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102f3151 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102f3155 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 102f3159 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102f315b add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f315e add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3164 jmp 0x102f3146 */
  goto L_102f3146;
L_102f3166:;
  /* 102f3166 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3169 cmp dword ptr [0x102fa880], edi */
  { uint32_t _a=(r32((uint32_t)(0x102fa880))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f316f jl 0x102f3128 */
  if ((C.sf!=C.of)) goto L_102f3128;
  /* 102f3171 jmp 0x102f3179 */
  goto L_102f3179;
L_102f3173:;
  /* 102f3173 mov edi, dword ptr [0x102fa880] */
  EDI = (r32((uint32_t)(0x102fa880)));
L_102f3179:;
  /* 102f3179 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f317b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f317d jle 0x102f31cb */
  if ((C.zf||C.sf!=C.of)) goto L_102f31cb;
L_102f317f:;
  /* 102f317f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f3182 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102f3184 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3187 je 0x102f31c1 */
  if (C.zf) goto L_102f31c1;
  /* 102f3189 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 102f318b test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 102f318d je 0x102f31c1 */
  if (C.zf) goto L_102f31c1;
  /* 102f318f test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 102f3191 jne 0x102f319e */
  if (!C.zf) goto L_102f319e;
  /* 102f3193 push ecx */
  push32((uint32_t)(ECX));
  /* 102f3194 call dword ptr [0x102f8088] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8088))), 0x102f319au);
  /* 102f319a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f319c je 0x102f31c1 */
  if (C.zf) goto L_102f31c1;
L_102f319e:;
  /* 102f319e mov ecx, esi */
  ECX = (ESI);
  /* 102f31a0 mov eax, esi */
  EAX = (ESI);
  /* 102f31a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 102f31a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 102f31a8 mov ecx, dword ptr [ecx*4 + 0x102fa780] */
  ECX = (r32((uint32_t)(ECX*4 + 0x102fa780)));
  /* 102f31af lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 102f31b2 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 102f31b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f31b8 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 102f31ba mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102f31bc mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 102f31be mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_102f31c1:;
  /* 102f31c1 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f31c5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f31c6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102f31c7 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f31c9 jl 0x102f317f */
  if ((C.sf!=C.of)) goto L_102f317f;
L_102f31cb:;
  /* 102f31cb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102f31cd:;
  /* 102f31cd mov ecx, dword ptr [0x102fa780] */
  ECX = (r32((uint32_t)(0x102fa780)));
  /* 102f31d3 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 102f31d6 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f31da lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102f31dd jne 0x102f322c */
  if (!C.zf) goto L_102f322c;
  /* 102f31df test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f31e1 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 102f31e5 jne 0x102f31ec */
  if (!C.zf) goto L_102f31ec;
  /* 102f31e7 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 102f31e9 pop eax */
  EAX = (pop32());
  /* 102f31ea jmp 0x102f31f6 */
  goto L_102f31f6;
L_102f31ec:;
  /* 102f31ec mov eax, ebx */
  EAX = (EBX);
  /* 102f31ee dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f31ef neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f31f1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f31f3 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102f31f6:;
  /* 102f31f6 push eax */
  push32((uint32_t)(EAX));
  /* 102f31f7 call dword ptr [0x102f8084] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8084))), 0x102f31fdu);
  /* 102f31fd mov edi, eax */
  EDI = (EAX);
  /* 102f31ff cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3202 je 0x102f321b */
  if (C.zf) goto L_102f321b;
  /* 102f3204 push edi */
  push32((uint32_t)(EDI));
  /* 102f3205 call dword ptr [0x102f8088] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8088))), 0x102f320bu);
  /* 102f320b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f320d je 0x102f321b */
  if (C.zf) goto L_102f321b;
  /* 102f320f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f3214 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102f3216 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3219 jne 0x102f3221 */
  if (!C.zf) goto L_102f3221;
L_102f321b:;
  /* 102f321b or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102f321f jmp 0x102f3230 */
  goto L_102f3230;
L_102f3221:;
  /* 102f3221 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3224 jne 0x102f3230 */
  if (!C.zf) goto L_102f3230;
  /* 102f3226 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 102f322a jmp 0x102f3230 */
  goto L_102f3230;
L_102f322c:;
  /* 102f322c or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_102f3230:;
  /* 102f3230 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102f3231 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3234 jl 0x102f31cd */
  if ((C.sf!=C.of)) goto L_102f31cd;
  /* 102f3236 push dword ptr [0x102fa880] */
  push32((uint32_t)(r32((uint32_t)(0x102fa880))));
  /* 102f323c call dword ptr [0x102f8000] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8000))), 0x102f3242u);
  /* 102f3242 pop edi */
  EDI = (pop32());
  /* 102f3243 pop esi */
  ESI = (pop32());
  /* 102f3244 pop ebx */
  EBX = (pop32());
  /* 102f3245 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3246 ret  */
  ESPCHK(0x102f308bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003247 @ 0x102f3247 (84 bytes, 33 insns) */
void f_102f3247(void) {
  FTRACE(0x102f3247u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3247 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3248 push esi */
  push32((uint32_t)(ESI));
  /* 102f3249 push edi */
  push32((uint32_t)(EDI));
  /* 102f324a mov esi, 0x102fa780 */
  ESI = (0x102fa780u);
L_102f324f:;
  /* 102f324f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102f3251 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3253 je 0x102f328c */
  if (C.zf) goto L_102f328c;
  /* 102f3255 mov edi, eax */
  EDI = (EAX);
  /* 102f3257 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f325c cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f325e jae 0x102f3281 */
  if (!C.cf) goto L_102f3281;
  /* 102f3260 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_102f3263:;
  /* 102f3263 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3267 je 0x102f3270 */
  if (C.zf) goto L_102f3270;
  /* 102f3269 push ebx */
  push32((uint32_t)(EBX));
  /* 102f326a call dword ptr [0x102f8090] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8090))), 0x102f3270u);
L_102f3270:;
  /* 102f3270 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102f3272 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3275 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f327a add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f327d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f327f jb 0x102f3263 */
  if (C.cf) goto L_102f3263;
L_102f3281:;
  /* 102f3281 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f3283 call 0x102f484c */
  push32(0x102f3288u); f_102f484c();
  /* 102f3288 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102f328b pop ecx */
  ECX = (pop32());
L_102f328c:;
  /* 102f328c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f328f cmp esi, 0x102fa880 */
  { uint32_t _a=(ESI),_b=(0x102fa880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3295 jl 0x102f324f */
  if ((C.sf!=C.of)) goto L_102f324f;
  /* 102f3297 pop edi */
  EDI = (pop32());
  /* 102f3298 pop esi */
  ESI = (pop32());
  /* 102f3299 pop ebx */
  EBX = (pop32());
  /* 102f329a ret  */
  ESPCHK(0x102f3247u, _esp0);
  ESP += 4; return;
}

/* FUN_1000329b @ 0x102f329b (185 bytes, 71 insns) */
void f_102f329b(void) {
  FTRACE(0x102f329bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f329b push ebx */
  push32((uint32_t)(EBX));
  /* 102f329c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f329e cmp dword ptr [0x102fa888], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102fa888))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f32a4 push esi */
  push32((uint32_t)(ESI));
  /* 102f32a5 push edi */
  push32((uint32_t)(EDI));
  /* 102f32a6 jne 0x102f32ad */
  if (!C.zf) goto L_102f32ad;
  /* 102f32a8 call 0x102f4cf8 */
  push32(0x102f32adu); f_102f4cf8();
L_102f32ad:;
  /* 102f32ad mov esi, dword ptr [0x102fa1b0] */
  ESI = (r32((uint32_t)(0x102fa1b0)));
  /* 102f32b3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_102f32b5:;
  /* 102f32b5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f32b7 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f32b9 je 0x102f32cd */
  if (C.zf) goto L_102f32cd;
  /* 102f32bb cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f32bd je 0x102f32c0 */
  if (C.zf) goto L_102f32c0;
  /* 102f32bf inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102f32c0:;
  /* 102f32c0 push esi */
  push32((uint32_t)(ESI));
  /* 102f32c1 call 0x102f4630 */
  push32(0x102f32c6u); f_102f4630();
  /* 102f32c6 pop ecx */
  ECX = (pop32());
  /* 102f32c7 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 102f32cb jmp 0x102f32b5 */
  goto L_102f32b5;
L_102f32cd:;
  /* 102f32cd lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 102f32d4 push eax */
  push32((uint32_t)(EAX));
  /* 102f32d5 call 0x102f4894 */
  push32(0x102f32dau); f_102f4894();
  /* 102f32da mov esi, eax */
  ESI = (EAX);
  /* 102f32dc pop ecx */
  ECX = (pop32());
  /* 102f32dd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f32df mov dword ptr [0x102fa1e0], esi */
  w32((uint32_t)(0x102fa1e0), (ESI));
  /* 102f32e5 jne 0x102f32ef */
  if (!C.zf) goto L_102f32ef;
  /* 102f32e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 102f32e9 call 0x102f2976 */
  push32(0x102f32eeu); f_102f2976();
  /* 102f32ee pop ecx */
  ECX = (pop32());
L_102f32ef:;
  /* 102f32ef mov edi, dword ptr [0x102fa1b0] */
  EDI = (r32((uint32_t)(0x102fa1b0)));
  /* 102f32f5 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f32f7 je 0x102f3332 */
  if (C.zf) goto L_102f3332;
  /* 102f32f9 push ebp */
  push32((uint32_t)(EBP));
L_102f32fa:;
  /* 102f32fa push edi */
  push32((uint32_t)(EDI));
  /* 102f32fb call 0x102f4630 */
  push32(0x102f3300u); f_102f4630();
  /* 102f3300 mov ebp, eax */
  EBP = (EAX);
  /* 102f3302 pop ecx */
  ECX = (pop32());
  /* 102f3303 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 102f3304 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3307 je 0x102f332b */
  if (C.zf) goto L_102f332b;
  /* 102f3309 push ebp */
  push32((uint32_t)(EBP));
  /* 102f330a call 0x102f4894 */
  push32(0x102f330fu); f_102f4894();
  /* 102f330f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3311 pop ecx */
  ECX = (pop32());
  /* 102f3312 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102f3314 jne 0x102f331e */
  if (!C.zf) goto L_102f331e;
  /* 102f3316 push 9 */
  push32((uint32_t)(0x9u));
  /* 102f3318 call 0x102f2976 */
  push32(0x102f331du); f_102f2976();
  /* 102f331d pop ecx */
  ECX = (pop32());
L_102f331e:;
  /* 102f331e push edi */
  push32((uint32_t)(EDI));
  /* 102f331f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f3321 call 0x102f41a0 */
  push32(0x102f3326u); f_102f41a0();
  /* 102f3326 pop ecx */
  ECX = (pop32());
  /* 102f3327 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f332a pop ecx */
  ECX = (pop32());
L_102f332b:;
  /* 102f332b add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f332d cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f332f jne 0x102f32fa */
  if (!C.zf) goto L_102f32fa;
  /* 102f3331 pop ebp */
  EBP = (pop32());
L_102f3332:;
  /* 102f3332 push dword ptr [0x102fa1b0] */
  push32((uint32_t)(r32((uint32_t)(0x102fa1b0))));
  /* 102f3338 call 0x102f484c */
  push32(0x102f333du); f_102f484c();
  /* 102f333d pop ecx */
  ECX = (pop32());
  /* 102f333e mov dword ptr [0x102fa1b0], ebx */
  w32((uint32_t)(0x102fa1b0), (EBX));
  /* 102f3344 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 102f3346 pop edi */
  EDI = (pop32());
  /* 102f3347 pop esi */
  ESI = (pop32());
  /* 102f3348 mov dword ptr [0x102fa884], 1 */
  w32((uint32_t)(0x102fa884), (0x1u));
  /* 102f3352 pop ebx */
  EBX = (pop32());
  /* 102f3353 ret  */
  ESPCHK(0x102f329bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003354 @ 0x102f3354 (153 bytes, 62 insns) */
void f_102f3354(void) {
  FTRACE(0x102f3354u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3354 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3355 mov ebp, esp */
  EBP = (ESP);
  /* 102f3357 push ecx */
  push32((uint32_t)(ECX));
  /* 102f3358 push ecx */
  push32((uint32_t)(ECX));
  /* 102f3359 push ebx */
  push32((uint32_t)(EBX));
  /* 102f335a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f335c cmp dword ptr [0x102fa888], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102fa888))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3362 push esi */
  push32((uint32_t)(ESI));
  /* 102f3363 push edi */
  push32((uint32_t)(EDI));
  /* 102f3364 jne 0x102f336b */
  if (!C.zf) goto L_102f336b;
  /* 102f3366 call 0x102f4cf8 */
  push32(0x102f336bu); f_102f4cf8();
L_102f336b:;
  /* 102f336b mov esi, 0x102fa204 */
  ESI = (0x102fa204u);
  /* 102f3370 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102f3375 push esi */
  push32((uint32_t)(ESI));
  /* 102f3376 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3377 call dword ptr [0x102f8094] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8094))), 0x102f337du);
  /* 102f337d mov eax, dword ptr [0x102fa894] */
  EAX = (r32((uint32_t)(0x102fa894)));
  /* 102f3382 mov dword ptr [0x102fa1f0], esi */
  w32((uint32_t)(0x102fa1f0), (ESI));
  /* 102f3388 mov edi, esi */
  EDI = (ESI);
  /* 102f338a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f338c je 0x102f3390 */
  if (C.zf) goto L_102f3390;
  /* 102f338e mov edi, eax */
  EDI = (EAX);
L_102f3390:;
  /* 102f3390 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102f3393 push eax */
  push32((uint32_t)(EAX));
  /* 102f3394 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102f3397 push eax */
  push32((uint32_t)(EAX));
  /* 102f3398 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3399 push ebx */
  push32((uint32_t)(EBX));
  /* 102f339a push edi */
  push32((uint32_t)(EDI));
  /* 102f339b call 0x102f33ed */
  push32(0x102f33a0u); f_102f33ed();
  /* 102f33a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f33a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f33a6 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 102f33a9 push eax */
  push32((uint32_t)(EAX));
  /* 102f33aa call 0x102f4894 */
  push32(0x102f33afu); f_102f4894();
  /* 102f33af mov esi, eax */
  ESI = (EAX);
  /* 102f33b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f33b4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f33b6 jne 0x102f33c0 */
  if (!C.zf) goto L_102f33c0;
  /* 102f33b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 102f33ba call 0x102f2976 */
  push32(0x102f33bfu); f_102f2976();
  /* 102f33bf pop ecx */
  ECX = (pop32());
L_102f33c0:;
  /* 102f33c0 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 102f33c3 push eax */
  push32((uint32_t)(EAX));
  /* 102f33c4 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102f33c7 push eax */
  push32((uint32_t)(EAX));
  /* 102f33c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f33cb lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 102f33ce push eax */
  push32((uint32_t)(EAX));
  /* 102f33cf push esi */
  push32((uint32_t)(ESI));
  /* 102f33d0 push edi */
  push32((uint32_t)(EDI));
  /* 102f33d1 call 0x102f33ed */
  push32(0x102f33d6u); f_102f33ed();
  /* 102f33d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f33d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f33dc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f33dd mov dword ptr [0x102fa1d8], esi */
  w32((uint32_t)(0x102fa1d8), (ESI));
  /* 102f33e3 pop edi */
  EDI = (pop32());
  /* 102f33e4 pop esi */
  ESI = (pop32());
  /* 102f33e5 mov dword ptr [0x102fa1d4], eax */
  w32((uint32_t)(0x102fa1d4), (EAX));
  /* 102f33ea pop ebx */
  EBX = (pop32());
  /* 102f33eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f33ec ret  */
  ESPCHK(0x102f3354u, _esp0);
  ESP += 4; return;
}

/* FUN_100033ed @ 0x102f33ed (436 bytes, 187 insns) */
void f_102f33ed(void) {
  FTRACE(0x102f33edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f33ed push ebp */
  push32((uint32_t)(EBP));
  /* 102f33ee mov ebp, esp */
  EBP = (ESP);
  /* 102f33f0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102f33f3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102f33f6 push ebx */
  push32((uint32_t)(EBX));
  /* 102f33f7 push esi */
  push32((uint32_t)(ESI));
  /* 102f33f8 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102f33fb mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f33fe push edi */
  push32((uint32_t)(EDI));
  /* 102f33ff mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f3402 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 102f3408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f340b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f340d je 0x102f3417 */
  if (C.zf) goto L_102f3417;
  /* 102f340f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102f3411 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3414 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102f3417:;
  /* 102f3417 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f341a jne 0x102f3460 */
  if (!C.zf) goto L_102f3460;
L_102f341c:;
  /* 102f341c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 102f341f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3420 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3423 je 0x102f344e */
  if (C.zf) goto L_102f344e;
  /* 102f3425 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f3427 je 0x102f344e */
  if (C.zf) goto L_102f344e;
  /* 102f3429 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102f342c test byte ptr [edx + 0x102fa661], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102fa661)))&(0x4u); fl_logic(_r,8); }
  /* 102f3433 je 0x102f3441 */
  if (C.zf) goto L_102f3441;
  /* 102f3435 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102f3437 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f3439 je 0x102f3441 */
  if (C.zf) goto L_102f3441;
  /* 102f343b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102f343d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102f343f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f3440 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102f3441:;
  /* 102f3441 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102f3443 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f3445 je 0x102f341c */
  if (C.zf) goto L_102f341c;
  /* 102f3447 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102f3449 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102f344b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f344c jmp 0x102f341c */
  goto L_102f341c;
L_102f344e:;
  /* 102f344e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102f3450 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f3452 je 0x102f3458 */
  if (C.zf) goto L_102f3458;
  /* 102f3454 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102f3457 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102f3458:;
  /* 102f3458 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f345b jne 0x102f34a3 */
  if (!C.zf) goto L_102f34a3;
  /* 102f345d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f345e jmp 0x102f34a3 */
  goto L_102f34a3;
L_102f3460:;
  /* 102f3460 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102f3462 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f3464 je 0x102f346b */
  if (C.zf) goto L_102f346b;
  /* 102f3466 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102f3468 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102f346a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102f346b:;
  /* 102f346b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102f346d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f346e movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102f3471 test byte ptr [ebx + 0x102fa661], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102fa661)))&(0x4u); fl_logic(_r,8); }
  /* 102f3478 je 0x102f3486 */
  if (C.zf) goto L_102f3486;
  /* 102f347a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102f347c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f347e je 0x102f3485 */
  if (C.zf) goto L_102f3485;
  /* 102f3480 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 102f3482 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 102f3484 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102f3485:;
  /* 102f3485 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_102f3486:;
  /* 102f3486 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3489 je 0x102f3494 */
  if (C.zf) goto L_102f3494;
  /* 102f348b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f348d je 0x102f3498 */
  if (C.zf) goto L_102f3498;
  /* 102f348f cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3492 jne 0x102f3460 */
  if (!C.zf) goto L_102f3460;
L_102f3494:;
  /* 102f3494 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f3496 jne 0x102f349b */
  if (!C.zf) goto L_102f349b;
L_102f3498:;
  /* 102f3498 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f3499 jmp 0x102f34a3 */
  goto L_102f34a3;
L_102f349b:;
  /* 102f349b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f349d je 0x102f34a3 */
  if (C.zf) goto L_102f34a3;
  /* 102f349f and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_102f34a3:;
  /* 102f34a3 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_102f34a7:;
  /* 102f34a7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f34aa je 0x102f3590 */
  if (C.zf) goto L_102f3590;
L_102f34b0:;
  /* 102f34b0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102f34b2 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f34b5 je 0x102f34bc */
  if (C.zf) goto L_102f34bc;
  /* 102f34b7 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f34ba jne 0x102f34bf */
  if (!C.zf) goto L_102f34bf;
L_102f34bc:;
  /* 102f34bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f34bd jmp 0x102f34b0 */
  goto L_102f34b0;
L_102f34bf:;
  /* 102f34bf cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f34c2 je 0x102f3590 */
  if (C.zf) goto L_102f3590;
  /* 102f34c8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f34ca je 0x102f34d4 */
  if (C.zf) goto L_102f34d4;
  /* 102f34cc mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 102f34ce add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f34d1 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102f34d4:;
  /* 102f34d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102f34d7 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_102f34d9:;
  /* 102f34d9 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 102f34e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102f34e2:;
  /* 102f34e2 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f34e5 jne 0x102f34eb */
  if (!C.zf) goto L_102f34eb;
  /* 102f34e7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f34e8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102f34e9 jmp 0x102f34e2 */
  goto L_102f34e2;
L_102f34eb:;
  /* 102f34eb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f34ee jne 0x102f351c */
  if (!C.zf) goto L_102f351c;
  /* 102f34f0 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102f34f3 jne 0x102f351a */
  if (!C.zf) goto L_102f351a;
  /* 102f34f5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102f34f7 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f34fa je 0x102f3509 */
  if (C.zf) goto L_102f3509;
  /* 102f34fc cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3500 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 102f3503 jne 0x102f3509 */
  if (!C.zf) goto L_102f3509;
  /* 102f3505 mov eax, edx */
  EAX = (EDX);
  /* 102f3507 jmp 0x102f350c */
  goto L_102f350c;
L_102f3509:;
  /* 102f3509 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_102f350c:;
  /* 102f350c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f350f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f3511 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3514 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 102f3517 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_102f351a:;
  /* 102f351a shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_102f351c:;
  /* 102f351c mov edx, ebx */
  EDX = (EBX);
  /* 102f351e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102f351f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102f3521 je 0x102f3531 */
  if (C.zf) goto L_102f3531;
  /* 102f3523 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102f3524:;
  /* 102f3524 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f3526 je 0x102f352c */
  if (C.zf) goto L_102f352c;
  /* 102f3528 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 102f352b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102f352c:;
  /* 102f352c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102f352e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102f352f jne 0x102f3524 */
  if (!C.zf) goto L_102f3524;
L_102f3531:;
  /* 102f3531 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102f3533 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f3535 je 0x102f3581 */
  if (C.zf) goto L_102f3581;
  /* 102f3537 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f353b jne 0x102f3547 */
  if (!C.zf) goto L_102f3547;
  /* 102f353d cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3540 je 0x102f3581 */
  if (C.zf) goto L_102f3581;
  /* 102f3542 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3545 je 0x102f3581 */
  if (C.zf) goto L_102f3581;
L_102f3547:;
  /* 102f3547 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f354b je 0x102f357b */
  if (C.zf) goto L_102f357b;
  /* 102f354d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f354f je 0x102f356a */
  if (C.zf) goto L_102f356a;
  /* 102f3551 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 102f3554 test byte ptr [ebx + 0x102fa661], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x102fa661)))&(0x4u); fl_logic(_r,8); }
  /* 102f355b je 0x102f3563 */
  if (C.zf) goto L_102f3563;
  /* 102f355d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102f355f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f3560 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3561 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102f3563:;
  /* 102f3563 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 102f3565 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 102f3567 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f3568 jmp 0x102f3579 */
  goto L_102f3579;
L_102f356a:;
  /* 102f356a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 102f356d test byte ptr [edx + 0x102fa661], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x102fa661)))&(0x4u); fl_logic(_r,8); }
  /* 102f3574 je 0x102f3579 */
  if (C.zf) goto L_102f3579;
  /* 102f3576 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3577 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102f3579:;
  /* 102f3579 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_102f357b:;
  /* 102f357b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f357c jmp 0x102f34d9 */
  goto L_102f34d9;
L_102f3581:;
  /* 102f3581 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f3583 je 0x102f3589 */
  if (C.zf) goto L_102f3589;
  /* 102f3585 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 102f3588 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_102f3589:;
  /* 102f3589 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 102f358b jmp 0x102f34a7 */
  goto L_102f34a7;
L_102f3590:;
  /* 102f3590 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f3592 je 0x102f3597 */
  if (C.zf) goto L_102f3597;
  /* 102f3594 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102f3597:;
  /* 102f3597 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102f359a pop edi */
  EDI = (pop32());
  /* 102f359b pop esi */
  ESI = (pop32());
  /* 102f359c pop ebx */
  EBX = (pop32());
  /* 102f359d inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 102f359f pop ebp */
  EBP = (pop32());
  /* 102f35a0 ret  */
  ESPCHK(0x102f33edu, _esp0);
  ESP += 4; return;
}

/* FUN_100035a1 @ 0x102f35a1 (306 bytes, 132 insns) */
void f_102f35a1(void) {
  FTRACE(0x102f35a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f35a1 push ecx */
  push32((uint32_t)(ECX));
  /* 102f35a2 push ecx */
  push32((uint32_t)(ECX));
  /* 102f35a3 mov eax, dword ptr [0x102fa308] */
  EAX = (r32((uint32_t)(0x102fa308)));
  /* 102f35a8 push ebx */
  push32((uint32_t)(EBX));
  /* 102f35a9 push ebp */
  push32((uint32_t)(EBP));
  /* 102f35aa mov ebp, dword ptr [0x102f80a4] */
  EBP = (r32((uint32_t)(0x102f80a4)));
  /* 102f35b0 push esi */
  push32((uint32_t)(ESI));
  /* 102f35b1 push edi */
  push32((uint32_t)(EDI));
  /* 102f35b2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f35b4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f35b6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102f35b8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f35ba jne 0x102f35ef */
  if (!C.zf) goto L_102f35ef;
  /* 102f35bc call ebp */
  call_ind((uint32_t)(EBP), 0x102f35beu);
  /* 102f35be mov esi, eax */
  ESI = (EAX);
  /* 102f35c0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f35c2 je 0x102f35d0 */
  if (C.zf) goto L_102f35d0;
  /* 102f35c4 mov dword ptr [0x102fa308], 1 */
  w32((uint32_t)(0x102fa308), (0x1u));
  /* 102f35ce jmp 0x102f35f8 */
  goto L_102f35f8;
L_102f35d0:;
  /* 102f35d0 call dword ptr [0x102f80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80a0))), 0x102f35d6u);
  /* 102f35d6 mov edi, eax */
  EDI = (EAX);
  /* 102f35d8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f35da je 0x102f36ca */
  if (C.zf) goto L_102f36ca;
  /* 102f35e0 mov dword ptr [0x102fa308], 2 */
  w32((uint32_t)(0x102fa308), (0x2u));
  /* 102f35ea jmp 0x102f367e */
  goto L_102f367e;
L_102f35ef:;
  /* 102f35ef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f35f2 jne 0x102f3679 */
  if (!C.zf) goto L_102f3679;
L_102f35f8:;
  /* 102f35f8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f35fa jne 0x102f3608 */
  if (!C.zf) goto L_102f3608;
  /* 102f35fc call ebp */
  call_ind((uint32_t)(EBP), 0x102f35feu);
  /* 102f35fe mov esi, eax */
  ESI = (EAX);
  /* 102f3600 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3602 je 0x102f36ca */
  if (C.zf) goto L_102f36ca;
L_102f3608:;
  /* 102f3608 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f360b mov eax, esi */
  EAX = (ESI);
  /* 102f360d je 0x102f361d */
  if (C.zf) goto L_102f361d;
L_102f360f:;
  /* 102f360f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3610 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3611 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f3614 jne 0x102f360f */
  if (!C.zf) goto L_102f360f;
  /* 102f3616 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3617 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3618 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f361b jne 0x102f360f */
  if (!C.zf) goto L_102f360f;
L_102f361d:;
  /* 102f361d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f361f mov edi, dword ptr [0x102f809c] */
  EDI = (r32((uint32_t)(0x102f809c)));
  /* 102f3625 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102f3627 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3628 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3629 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f362a push ebx */
  push32((uint32_t)(EBX));
  /* 102f362b push ebx */
  push32((uint32_t)(EBX));
  /* 102f362c push eax */
  push32((uint32_t)(EAX));
  /* 102f362d push esi */
  push32((uint32_t)(ESI));
  /* 102f362e push ebx */
  push32((uint32_t)(EBX));
  /* 102f362f push ebx */
  push32((uint32_t)(EBX));
  /* 102f3630 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 102f3634 call edi */
  call_ind((uint32_t)(EDI), 0x102f3636u);
  /* 102f3636 mov ebp, eax */
  EBP = (EAX);
  /* 102f3638 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f363a je 0x102f366e */
  if (C.zf) goto L_102f366e;
  /* 102f363c push ebp */
  push32((uint32_t)(EBP));
  /* 102f363d call 0x102f4894 */
  push32(0x102f3642u); f_102f4894();
  /* 102f3642 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3644 pop ecx */
  ECX = (pop32());
  /* 102f3645 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 102f3649 je 0x102f366e */
  if (C.zf) goto L_102f366e;
  /* 102f364b push ebx */
  push32((uint32_t)(EBX));
  /* 102f364c push ebx */
  push32((uint32_t)(EBX));
  /* 102f364d push ebp */
  push32((uint32_t)(EBP));
  /* 102f364e push eax */
  push32((uint32_t)(EAX));
  /* 102f364f push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 102f3653 push esi */
  push32((uint32_t)(ESI));
  /* 102f3654 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3655 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3656 call edi */
  call_ind((uint32_t)(EDI), 0x102f3658u);
  /* 102f3658 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f365a jne 0x102f366a */
  if (!C.zf) goto L_102f366a;
  /* 102f365c push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 102f3660 call 0x102f484c */
  push32(0x102f3665u); f_102f484c();
  /* 102f3665 pop ecx */
  ECX = (pop32());
  /* 102f3666 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_102f366a:;
  /* 102f366a mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_102f366e:;
  /* 102f366e push esi */
  push32((uint32_t)(ESI));
  /* 102f366f call dword ptr [0x102f807c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f807c))), 0x102f3675u);
  /* 102f3675 mov eax, ebx */
  EAX = (EBX);
  /* 102f3677 jmp 0x102f36cc */
  goto L_102f36cc;
L_102f3679:;
  /* 102f3679 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f367c jne 0x102f36ca */
  if (!C.zf) goto L_102f36ca;
L_102f367e:;
  /* 102f367e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3680 jne 0x102f368e */
  if (!C.zf) goto L_102f368e;
  /* 102f3682 call dword ptr [0x102f80a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80a0))), 0x102f3688u);
  /* 102f3688 mov edi, eax */
  EDI = (EAX);
  /* 102f368a cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f368c je 0x102f36ca */
  if (C.zf) goto L_102f36ca;
L_102f368e:;
  /* 102f368e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3690 mov eax, edi */
  EAX = (EDI);
  /* 102f3692 je 0x102f369e */
  if (C.zf) goto L_102f369e;
L_102f3694:;
  /* 102f3694 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3695 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f3697 jne 0x102f3694 */
  if (!C.zf) goto L_102f3694;
  /* 102f3699 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f369a cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f369c jne 0x102f3694 */
  if (!C.zf) goto L_102f3694;
L_102f369e:;
  /* 102f369e sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f36a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f36a1 mov ebp, eax */
  EBP = (EAX);
  /* 102f36a3 push ebp */
  push32((uint32_t)(EBP));
  /* 102f36a4 call 0x102f4894 */
  push32(0x102f36a9u); f_102f4894();
  /* 102f36a9 mov esi, eax */
  ESI = (EAX);
  /* 102f36ab pop ecx */
  ECX = (pop32());
  /* 102f36ac cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f36ae jne 0x102f36b4 */
  if (!C.zf) goto L_102f36b4;
  /* 102f36b0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f36b2 jmp 0x102f36bf */
  goto L_102f36bf;
L_102f36b4:;
  /* 102f36b4 push ebp */
  push32((uint32_t)(EBP));
  /* 102f36b5 push edi */
  push32((uint32_t)(EDI));
  /* 102f36b6 push esi */
  push32((uint32_t)(ESI));
  /* 102f36b7 call 0x102f4d20 */
  push32(0x102f36bcu); f_102f4d20();
  /* 102f36bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f36bf:;
  /* 102f36bf push edi */
  push32((uint32_t)(EDI));
  /* 102f36c0 call dword ptr [0x102f8098] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8098))), 0x102f36c6u);
  /* 102f36c6 mov eax, esi */
  EAX = (ESI);
  /* 102f36c8 jmp 0x102f36cc */
  goto L_102f36cc;
L_102f36ca:;
  /* 102f36ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102f36cc:;
  /* 102f36cc pop edi */
  EDI = (pop32());
  /* 102f36cd pop esi */
  ESI = (pop32());
  /* 102f36ce pop ebp */
  EBP = (pop32());
  /* 102f36cf pop ebx */
  EBX = (pop32());
  /* 102f36d0 pop ecx */
  ECX = (pop32());
  /* 102f36d1 pop ecx */
  ECX = (pop32());
  /* 102f36d2 ret  */
  ESPCHK(0x102f35a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d3 @ 0x102f36d3 (60 bytes, 20 insns) */
void f_102f36d3(void) {
  FTRACE(0x102f36d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f36d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f36d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f36d7 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f36db push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102f36e0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 102f36e3 push eax */
  push32((uint32_t)(EAX));
  /* 102f36e4 call dword ptr [0x102f80ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80ac))), 0x102f36eau);
  /* 102f36ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f36ec mov dword ptr [0x102fa768], eax */
  w32((uint32_t)(0x102fa768), (EAX));
  /* 102f36f1 je 0x102f3708 */
  if (C.zf) goto L_102f3708;
  /* 102f36f3 call 0x102f5055 */
  push32(0x102f36f8u); f_102f5055();
  /* 102f36f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f36fa jne 0x102f370b */
  if (!C.zf) goto L_102f370b;
  /* 102f36fc push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f3702 call dword ptr [0x102f80a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80a8))), 0x102f3708u);
L_102f3708:;
  /* 102f3708 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f370a ret  */
  ESPCHK(0x102f36d3u, _esp0);
  ESP += 4; return;
L_102f370b:;
  /* 102f370b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f370d pop eax */
  EAX = (pop32());
  /* 102f370e ret  */
  ESPCHK(0x102f36d3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000370f @ 0x102f370f (117 bytes, 38 insns) */
void f_102f370f(void) {
  FTRACE(0x102f370fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f370f push ebx */
  push32((uint32_t)(EBX));
  /* 102f3710 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f3712 cmp dword ptr [0x102fa528], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102fa528))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3718 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3719 mov ebp, dword ptr [0x102f80b4] */
  EBP = (r32((uint32_t)(0x102f80b4)));
  /* 102f371f jle 0x102f3765 */
  if ((C.zf||C.sf!=C.of)) goto L_102f3765;
  /* 102f3721 mov eax, dword ptr [0x102fa52c] */
  EAX = (r32((uint32_t)(0x102fa52c)));
  /* 102f3726 push esi */
  push32((uint32_t)(ESI));
  /* 102f3727 push edi */
  push32((uint32_t)(EDI));
  /* 102f3728 mov edi, dword ptr [0x102f80b0] */
  EDI = (r32((uint32_t)(0x102f80b0)));
  /* 102f372e lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_102f3731:;
  /* 102f3731 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102f3736 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102f373b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f373d call edi */
  call_ind((uint32_t)(EDI), 0x102f373fu);
  /* 102f373f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102f3744 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f3746 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f3748 call edi */
  call_ind((uint32_t)(EDI), 0x102f374au);
  /* 102f374a push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 102f374d push 0 */
  push32((uint32_t)(0x0u));
  /* 102f374f push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f3755 call ebp */
  call_ind((uint32_t)(EBP), 0x102f3757u);
  /* 102f3757 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f375a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102f375b cmp ebx, dword ptr [0x102fa528] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102fa528))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3761 jl 0x102f3731 */
  if ((C.sf!=C.of)) goto L_102f3731;
  /* 102f3763 pop edi */
  EDI = (pop32());
  /* 102f3764 pop esi */
  ESI = (pop32());
L_102f3765:;
  /* 102f3765 push dword ptr [0x102fa52c] */
  push32((uint32_t)(r32((uint32_t)(0x102fa52c))));
  /* 102f376b push 0 */
  push32((uint32_t)(0x0u));
  /* 102f376d push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f3773 call ebp */
  call_ind((uint32_t)(EBP), 0x102f3775u);
  /* 102f3775 push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f377b call dword ptr [0x102f80a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80a8))), 0x102f3781u);
  /* 102f3781 pop ebp */
  EBP = (pop32());
  /* 102f3782 pop ebx */
  EBX = (pop32());
  /* 102f3783 ret  */
  ESPCHK(0x102f370fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003784 @ 0x102f3784 (57 bytes, 18 insns) */
void f_102f3784(void) {
  FTRACE(0x102f3784u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3784 mov eax, dword ptr [0x102fa1b8] */
  EAX = (r32((uint32_t)(0x102fa1b8)));
  /* 102f3789 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f378c je 0x102f379b */
  if (C.zf) goto L_102f379b;
  /* 102f378e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3790 jne 0x102f37bc */
  if (!C.zf) goto L_102f37bc;
  /* 102f3792 cmp dword ptr [0x102fa1bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102fa1bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3799 jne 0x102f37bc */
  if (!C.zf) goto L_102f37bc;
L_102f379b:;
  /* 102f379b push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 102f37a0 call 0x102f37bd */
  push32(0x102f37a5u); f_102f37bd();
  /* 102f37a5 mov eax, dword ptr [0x102fa30c] */
  EAX = (r32((uint32_t)(0x102fa30c)));
  /* 102f37aa pop ecx */
  ECX = (pop32());
  /* 102f37ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f37ad je 0x102f37b1 */
  if (C.zf) goto L_102f37b1;
  /* 102f37af call eax */
  call_ind((uint32_t)(EAX), 0x102f37b1u);
L_102f37b1:;
  /* 102f37b1 push 0xff */
  push32((uint32_t)(0xffu));
  /* 102f37b6 call 0x102f37bd */
  push32(0x102f37bbu); f_102f37bd();
  /* 102f37bb pop ecx */
  ECX = (pop32());
L_102f37bc:;
  /* 102f37bc ret  */
  ESPCHK(0x102f3784u, _esp0);
  ESP += 4; return;
}

/* FUN_100037bd @ 0x102f37bd (339 bytes, 100 insns) */
void f_102f37bd(void) {
  FTRACE(0x102f37bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f37bd push ebp */
  push32((uint32_t)(EBP));
  /* 102f37be mov ebp, esp */
  EBP = (ESP);
  /* 102f37c0 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f37c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f37c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f37cb mov eax, 0x102f92d8 */
  EAX = (0x102f92d8u);
L_102f37d0:;
  /* 102f37d0 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f37d2 je 0x102f37df */
  if (C.zf) goto L_102f37df;
  /* 102f37d4 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f37d7 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f37d8 cmp eax, 0x102f9368 */
  { uint32_t _a=(EAX),_b=(0x102f9368u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f37dd jl 0x102f37d0 */
  if ((C.sf!=C.of)) goto L_102f37d0;
L_102f37df:;
  /* 102f37df push esi */
  push32((uint32_t)(ESI));
  /* 102f37e0 mov esi, ecx */
  ESI = (ECX);
  /* 102f37e2 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 102f37e5 cmp edx, dword ptr [esi + 0x102f92d8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x102f92d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f37eb jne 0x102f390d */
  if (!C.zf) goto L_102f390d;
  /* 102f37f1 mov eax, dword ptr [0x102fa1b8] */
  EAX = (r32((uint32_t)(0x102fa1b8)));
  /* 102f37f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f37f9 je 0x102f38e7 */
  if (C.zf) goto L_102f38e7;
  /* 102f37ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3801 jne 0x102f3810 */
  if (!C.zf) goto L_102f3810;
  /* 102f3803 cmp dword ptr [0x102fa1bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102fa1bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f380a je 0x102f38e7 */
  if (C.zf) goto L_102f38e7;
L_102f3810:;
  /* 102f3810 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3816 je 0x102f390d */
  if (C.zf) goto L_102f390d;
  /* 102f381c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102f3822 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 102f3827 push eax */
  push32((uint32_t)(EAX));
  /* 102f3828 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f382a call dword ptr [0x102f8094] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8094))), 0x102f3830u);
  /* 102f3830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3832 jne 0x102f3847 */
  if (!C.zf) goto L_102f3847;
  /* 102f3834 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102f383a push 0x102f8480 */
  push32((uint32_t)(0x102f8480u));
  /* 102f383f push eax */
  push32((uint32_t)(EAX));
  /* 102f3840 call 0x102f41a0 */
  push32(0x102f3845u); f_102f41a0();
  /* 102f3845 pop ecx */
  ECX = (pop32());
  /* 102f3846 pop ecx */
  ECX = (pop32());
L_102f3847:;
  /* 102f3847 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102f384d push edi */
  push32((uint32_t)(EDI));
  /* 102f384e push eax */
  push32((uint32_t)(EAX));
  /* 102f384f lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 102f3855 call 0x102f4630 */
  push32(0x102f385au); f_102f4630();
  /* 102f385a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f385b pop ecx */
  ECX = (pop32());
  /* 102f385c cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f385f jbe 0x102f388a */
  if ((C.cf||C.zf)) goto L_102f388a;
  /* 102f3861 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102f3867 push eax */
  push32((uint32_t)(EAX));
  /* 102f3868 call 0x102f4630 */
  push32(0x102f386du); f_102f4630();
  /* 102f386d mov edi, eax */
  EDI = (EAX);
  /* 102f386f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 102f3875 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3878 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f387a add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f387c push 0x102f847c */
  push32((uint32_t)(0x102f847cu));
  /* 102f3881 push edi */
  push32((uint32_t)(EDI));
  /* 102f3882 call 0x102f5930 */
  push32(0x102f3887u); f_102f5930();
  /* 102f3887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f388a:;
  /* 102f388a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102f3890 push 0x102f8460 */
  push32((uint32_t)(0x102f8460u));
  /* 102f3895 push eax */
  push32((uint32_t)(EAX));
  /* 102f3896 call 0x102f41a0 */
  push32(0x102f389bu); f_102f41a0();
  /* 102f389b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102f38a1 push edi */
  push32((uint32_t)(EDI));
  /* 102f38a2 push eax */
  push32((uint32_t)(EAX));
  /* 102f38a3 call 0x102f41b0 */
  push32(0x102f38a8u); f_102f41b0();
  /* 102f38a8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102f38ae push 0x102f845c */
  push32((uint32_t)(0x102f845cu));
  /* 102f38b3 push eax */
  push32((uint32_t)(EAX));
  /* 102f38b4 call 0x102f41b0 */
  push32(0x102f38b9u); f_102f41b0();
  /* 102f38b9 push dword ptr [esi + 0x102f92dc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x102f92dc))));
  /* 102f38bf lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102f38c5 push eax */
  push32((uint32_t)(EAX));
  /* 102f38c6 call 0x102f41b0 */
  push32(0x102f38cbu); f_102f41b0();
  /* 102f38cb push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 102f38d0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 102f38d6 push 0x102f8434 */
  push32((uint32_t)(0x102f8434u));
  /* 102f38db push eax */
  push32((uint32_t)(EAX));
  /* 102f38dc call 0x102f589e */
  push32(0x102f38e1u); f_102f589e();
  /* 102f38e1 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f38e4 pop edi */
  EDI = (pop32());
  /* 102f38e5 jmp 0x102f390d */
  goto L_102f390d;
L_102f38e7:;
  /* 102f38e7 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102f38ea lea esi, [esi + 0x102f92dc] */
  ESI = ((uint32_t)(ESI + 0x102f92dc));
  /* 102f38f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f38f2 push eax */
  push32((uint32_t)(EAX));
  /* 102f38f3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f38f5 call 0x102f4630 */
  push32(0x102f38fau); f_102f4630();
  /* 102f38fa pop ecx */
  ECX = (pop32());
  /* 102f38fb push eax */
  push32((uint32_t)(EAX));
  /* 102f38fc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f38fe push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 102f3900 call dword ptr [0x102f8084] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8084))), 0x102f3906u);
  /* 102f3906 push eax */
  push32((uint32_t)(EAX));
  /* 102f3907 call dword ptr [0x102f8048] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8048))), 0x102f390du);
L_102f390d:;
  /* 102f390d pop esi */
  ESI = (pop32());
  /* 102f390e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f390f ret  */
  ESPCHK(0x102f37bdu, _esp0);
  ESP += 4; return;
}

/* FUN_10003910 @ 0x102f3910 (53 bytes, 25 insns) */
void f_102f3910(void) {
  FTRACE(0x102f3910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3910 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3911 mov ebp, esp */
  EBP = (ESP);
  /* 102f3913 push ecx */
  push32((uint32_t)(ECX));
  /* 102f3914 push esi */
  push32((uint32_t)(ESI));
  /* 102f3915 wait  */
  /* wait (no observable integer/reg state) */
  /* 102f3916 fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 102f3919 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 102f391c call 0x102f395b */
  push32(0x102f3921u); f_102f395b();
  /* 102f3921 mov esi, eax */
  ESI = (EAX);
  /* 102f3923 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f3926 not eax */
  EAX = (~(EAX));
  /* 102f3928 and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 102f392a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f392d and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 102f3930 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 102f3932 push esi */
  push32((uint32_t)(ESI));
  /* 102f3933 call 0x102f39ed */
  push32(0x102f3938u); f_102f39ed();
  /* 102f3938 pop ecx */
  ECX = (pop32());
  /* 102f3939 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102f393c pop ecx */
  ECX = (pop32());
  /* 102f393d fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 102f3940 mov eax, esi */
  EAX = (ESI);
  /* 102f3942 pop esi */
  ESI = (pop32());
  /* 102f3943 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3944 ret  */
  ESPCHK(0x102f3910u, _esp0);
  ESP += 4; return;
}

/* FUN_10003945 @ 0x102f3945 (22 bytes, 8 insns) */
void f_102f3945(void) {
  FTRACE(0x102f3945u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3945 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f3949 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f394e push eax */
  push32((uint32_t)(EAX));
  /* 102f394f push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102f3953 call 0x102f3910 */
  push32(0x102f3958u); f_102f3910();
  /* 102f3958 pop ecx */
  ECX = (pop32());
  /* 102f3959 pop ecx */
  ECX = (pop32());
  /* 102f395a ret  */
  ESPCHK(0x102f3945u, _esp0);
  ESP += 4; return;
}

/* FUN_1000395b @ 0x102f395b (146 bytes, 58 insns) */
void f_102f395b(void) {
  FTRACE(0x102f395bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f395b push ebx */
  push32((uint32_t)(EBX));
  /* 102f395c mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f3960 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f3962 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3963 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102f3966 push edi */
  push32((uint32_t)(EDI));
  /* 102f3967 je 0x102f396c */
  if (C.zf) goto L_102f396c;
  /* 102f3969 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 102f396b pop eax */
  EAX = (pop32());
L_102f396c:;
  /* 102f396c test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 102f396f je 0x102f3973 */
  if (C.zf) goto L_102f3973;
  /* 102f3971 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_102f3973:;
  /* 102f3973 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 102f3976 je 0x102f397a */
  if (C.zf) goto L_102f397a;
  /* 102f3978 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_102f397a:;
  /* 102f397a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 102f397d je 0x102f3981 */
  if (C.zf) goto L_102f3981;
  /* 102f397f or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_102f3981:;
  /* 102f3981 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 102f3984 je 0x102f3988 */
  if (C.zf) goto L_102f3988;
  /* 102f3986 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_102f3988:;
  /* 102f3988 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 102f398b je 0x102f3992 */
  if (C.zf) goto L_102f3992;
  /* 102f398d or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_102f3992:;
  /* 102f3992 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 102f3995 push esi */
  push32((uint32_t)(ESI));
  /* 102f3996 mov edx, ecx */
  EDX = (ECX);
  /* 102f3998 mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 102f399d mov edi, 0x300 */
  EDI = (0x300u);
  /* 102f39a2 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 102f39a4 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 102f39a9 je 0x102f39ca */
  if (C.zf) goto L_102f39ca;
  /* 102f39ab cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f39b1 je 0x102f39c7 */
  if (C.zf) goto L_102f39c7;
  /* 102f39b3 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f39b9 je 0x102f39c3 */
  if (C.zf) goto L_102f39c3;
  /* 102f39bb cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f39bd jne 0x102f39ca */
  if (!C.zf) goto L_102f39ca;
  /* 102f39bf or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 102f39c1 jmp 0x102f39ca */
  goto L_102f39ca;
L_102f39c3:;
  /* 102f39c3 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 102f39c5 jmp 0x102f39ca */
  goto L_102f39ca;
L_102f39c7:;
  /* 102f39c7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_102f39ca:;
  /* 102f39ca and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102f39cc pop esi */
  ESI = (pop32());
  /* 102f39cd je 0x102f39da */
  if (C.zf) goto L_102f39da;
  /* 102f39cf cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f39d1 jne 0x102f39df */
  if (!C.zf) goto L_102f39df;
  /* 102f39d3 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 102f39d8 jmp 0x102f39df */
  goto L_102f39df;
L_102f39da:;
  /* 102f39da or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_102f39df:;
  /* 102f39df pop edi */
  EDI = (pop32());
  /* 102f39e0 pop ebp */
  EBP = (pop32());
  /* 102f39e1 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 102f39e4 pop ebx */
  EBX = (pop32());
  /* 102f39e5 je 0x102f39ec */
  if (C.zf) goto L_102f39ec;
  /* 102f39e7 or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_102f39ec:;
  /* 102f39ec ret  */
  ESPCHK(0x102f395bu, _esp0);
  ESP += 4; return;
}

/* FUN_100039ed @ 0x102f39ed (137 bytes, 53 insns) */
void f_102f39ed(void) {
  FTRACE(0x102f39edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f39ed push ebx */
  push32((uint32_t)(EBX));
  /* 102f39ee mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f39f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f39f4 push esi */
  push32((uint32_t)(ESI));
  /* 102f39f5 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 102f39f8 je 0x102f39fd */
  if (C.zf) goto L_102f39fd;
  /* 102f39fa push 1 */
  push32((uint32_t)(0x1u));
  /* 102f39fc pop eax */
  EAX = (pop32());
L_102f39fd:;
  /* 102f39fd test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 102f3a00 je 0x102f3a04 */
  if (C.zf) goto L_102f3a04;
  /* 102f3a02 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_102f3a04:;
  /* 102f3a04 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 102f3a07 je 0x102f3a0b */
  if (C.zf) goto L_102f3a0b;
  /* 102f3a09 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_102f3a0b:;
  /* 102f3a0b test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 102f3a0e je 0x102f3a12 */
  if (C.zf) goto L_102f3a12;
  /* 102f3a10 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_102f3a12:;
  /* 102f3a12 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 102f3a15 je 0x102f3a19 */
  if (C.zf) goto L_102f3a19;
  /* 102f3a17 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_102f3a19:;
  /* 102f3a19 test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 102f3a1f je 0x102f3a23 */
  if (C.zf) goto L_102f3a23;
  /* 102f3a21 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_102f3a23:;
  /* 102f3a23 mov ecx, ebx */
  ECX = (EBX);
  /* 102f3a25 mov edx, 0x300 */
  EDX = (0x300u);
  /* 102f3a2a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 102f3a2c mov esi, 0x200 */
  ESI = (0x200u);
  /* 102f3a31 je 0x102f3a50 */
  if (C.zf) goto L_102f3a50;
  /* 102f3a33 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3a39 je 0x102f3a4d */
  if (C.zf) goto L_102f3a4d;
  /* 102f3a3b cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3a3d je 0x102f3a48 */
  if (C.zf) goto L_102f3a48;
  /* 102f3a3f cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3a41 jne 0x102f3a50 */
  if (!C.zf) goto L_102f3a50;
  /* 102f3a43 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 102f3a46 jmp 0x102f3a50 */
  goto L_102f3a50;
L_102f3a48:;
  /* 102f3a48 or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 102f3a4b jmp 0x102f3a50 */
  goto L_102f3a50;
L_102f3a4d:;
  /* 102f3a4d or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_102f3a50:;
  /* 102f3a50 mov ecx, ebx */
  ECX = (EBX);
  /* 102f3a52 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 102f3a58 je 0x102f3a66 */
  if (C.zf) goto L_102f3a66;
  /* 102f3a5a cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3a60 jne 0x102f3a68 */
  if (!C.zf) goto L_102f3a68;
  /* 102f3a62 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 102f3a64 jmp 0x102f3a68 */
  goto L_102f3a68;
L_102f3a66:;
  /* 102f3a66 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_102f3a68:;
  /* 102f3a68 pop esi */
  ESI = (pop32());
  /* 102f3a69 test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 102f3a6f pop ebx */
  EBX = (pop32());
  /* 102f3a70 je 0x102f3a75 */
  if (C.zf) goto L_102f3a75;
  /* 102f3a72 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_102f3a75:;
  /* 102f3a75 ret  */
  ESPCHK(0x102f39edu, _esp0);
  ESP += 4; return;
}

/* FUN_10003a76 @ 0x102f3a76 (117 bytes, 46 insns) */
void f_102f3a76(void) {
  FTRACE(0x102f3a76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3a76 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3a77 mov ebp, esp */
  EBP = (ESP);
  /* 102f3a79 push ecx */
  push32((uint32_t)(ECX));
  /* 102f3a7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3a7d lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 102f3a80 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3a86 ja 0x102f3a94 */
  if ((!C.cf&&!C.zf)) goto L_102f3a94;
  /* 102f3a88 mov ecx, dword ptr [0x102f9374] */
  ECX = (r32((uint32_t)(0x102f9374)));
  /* 102f3a8e movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 102f3a92 jmp 0x102f3ae6 */
  goto L_102f3ae6;
L_102f3a94:;
  /* 102f3a94 mov ecx, eax */
  ECX = (EAX);
  /* 102f3a96 push esi */
  push32((uint32_t)(ESI));
  /* 102f3a97 mov esi, dword ptr [0x102f9374] */
  ESI = (r32((uint32_t)(0x102f9374)));
  /* 102f3a9d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 102f3aa0 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 102f3aa3 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 102f3aa8 pop esi */
  ESI = (pop32());
  /* 102f3aa9 je 0x102f3ab9 */
  if (C.zf) goto L_102f3ab9;
  /* 102f3aab and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 102f3aaf mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 102f3ab2 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 102f3ab5 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f3ab7 jmp 0x102f3ac2 */
  goto L_102f3ac2;
L_102f3ab9:;
  /* 102f3ab9 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 102f3abd mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 102f3ac0 push 1 */
  push32((uint32_t)(0x1u));
L_102f3ac2:;
  /* 102f3ac2 pop eax */
  EAX = (pop32());
  /* 102f3ac3 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 102f3ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f3aca push 0 */
  push32((uint32_t)(0x0u));
  /* 102f3acc push ecx */
  push32((uint32_t)(ECX));
  /* 102f3acd push eax */
  push32((uint32_t)(EAX));
  /* 102f3ace lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 102f3ad1 push eax */
  push32((uint32_t)(EAX));
  /* 102f3ad2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3ad4 call 0x102f5a2e */
  push32(0x102f3ad9u); f_102f5a2e();
  /* 102f3ad9 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3ade jne 0x102f3ae2 */
  if (!C.zf) goto L_102f3ae2;
  /* 102f3ae0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3ae1 ret  */
  ESPCHK(0x102f3a76u, _esp0);
  ESP += 4; return;
L_102f3ae2:;
  /* 102f3ae2 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_102f3ae6:;
  /* 102f3ae6 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 102f3ae9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3aea ret  */
  ESPCHK(0x102f3a76u, _esp0);
  ESP += 4; return;
}

/* FUN_10003aeb @ 0x102f3aeb (111 bytes, 44 insns) */
void f_102f3aeb(void) {
  FTRACE(0x102f3aebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3aeb push ebx */
  push32((uint32_t)(EBX));
  /* 102f3aec xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f3aee cmp dword ptr [0x102fa3ac], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102fa3ac))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3af4 jne 0x102f3b09 */
  if (!C.zf) goto L_102f3b09;
  /* 102f3af6 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f3afa cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3afd jl 0x102f3b58 */
  if ((C.sf!=C.of)) goto L_102f3b58;
  /* 102f3aff cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3b02 jg 0x102f3b58 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f3b58;
  /* 102f3b04 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3b07 pop ebx */
  EBX = (pop32());
  /* 102f3b08 ret  */
  ESPCHK(0x102f3aebu, _esp0);
  ESP += 4; return;
L_102f3b09:;
  /* 102f3b09 push esi */
  push32((uint32_t)(ESI));
  /* 102f3b0a mov esi, 0x102fa514 */
  ESI = (0x102fa514u);
  /* 102f3b0f push edi */
  push32((uint32_t)(EDI));
  /* 102f3b10 push esi */
  push32((uint32_t)(ESI));
  /* 102f3b11 call dword ptr [0x102f8080] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8080))), 0x102f3b17u);
  /* 102f3b17 cmp dword ptr [0x102fa510], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102fa510))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3b1d mov edi, dword ptr [0x102f8044] */
  EDI = (r32((uint32_t)(0x102f8044)));
  /* 102f3b23 je 0x102f3b33 */
  if (C.zf) goto L_102f3b33;
  /* 102f3b25 push esi */
  push32((uint32_t)(ESI));
  /* 102f3b26 call edi */
  call_ind((uint32_t)(EDI), 0x102f3b28u);
  /* 102f3b28 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102f3b2a call 0x102f4749 */
  push32(0x102f3b2fu); f_102f4749();
  /* 102f3b2f pop ecx */
  ECX = (pop32());
  /* 102f3b30 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3b32 pop ebx */
  EBX = (pop32());
L_102f3b33:;
  /* 102f3b33 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 102f3b37 call 0x102f3b5a */
  push32(0x102f3b3cu); f_102f3b5a();
  /* 102f3b3c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f3b3e pop ecx */
  ECX = (pop32());
  /* 102f3b3f mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 102f3b43 je 0x102f3b4f */
  if (C.zf) goto L_102f3b4f;
  /* 102f3b45 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102f3b47 call 0x102f47aa */
  push32(0x102f3b4cu); f_102f47aa();
  /* 102f3b4c pop ecx */
  ECX = (pop32());
  /* 102f3b4d jmp 0x102f3b52 */
  goto L_102f3b52;
L_102f3b4f:;
  /* 102f3b4f push esi */
  push32((uint32_t)(ESI));
  /* 102f3b50 call edi */
  call_ind((uint32_t)(EDI), 0x102f3b52u);
L_102f3b52:;
  /* 102f3b52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102f3b56 pop edi */
  EDI = (pop32());
  /* 102f3b57 pop esi */
  ESI = (pop32());
L_102f3b58:;
  /* 102f3b58 pop ebx */
  EBX = (pop32());
  /* 102f3b59 ret  */
  ESPCHK(0x102f3aebu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b5a @ 0x102f3b5a (203 bytes, 78 insns) */
void f_102f3b5a(void) {
  FTRACE(0x102f3b5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3b5a push ebp */
  push32((uint32_t)(EBP));
  /* 102f3b5b mov ebp, esp */
  EBP = (ESP);
  /* 102f3b5d push ecx */
  push32((uint32_t)(ECX));
  /* 102f3b5e cmp dword ptr [0x102fa3ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102fa3ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3b65 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3b66 push esi */
  push32((uint32_t)(ESI));
  /* 102f3b67 push edi */
  push32((uint32_t)(EDI));
  /* 102f3b68 jne 0x102f3b87 */
  if (!C.zf) goto L_102f3b87;
  /* 102f3b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3b6d cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3b70 jl 0x102f3c20 */
  if ((C.sf!=C.of)) goto L_102f3c20;
  /* 102f3b76 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3b79 jg 0x102f3c20 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f3c20;
  /* 102f3b7f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3b82 jmp 0x102f3c20 */
  goto L_102f3c20;
L_102f3b87:;
  /* 102f3b87 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3b8a mov edi, 0x100 */
  EDI = (0x100u);
  /* 102f3b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3b91 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3b93 pop esi */
  ESI = (pop32());
  /* 102f3b94 jge 0x102f3bbb */
  if ((C.sf==C.of)) goto L_102f3bbb;
  /* 102f3b96 cmp dword ptr [0x102f9368], esi */
  { uint32_t _a=(r32((uint32_t)(0x102f9368))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3b9c jle 0x102f3ba9 */
  if ((C.zf||C.sf!=C.of)) goto L_102f3ba9;
  /* 102f3b9e push esi */
  push32((uint32_t)(ESI));
  /* 102f3b9f push ebx */
  push32((uint32_t)(EBX));
  /* 102f3ba0 call 0x102f3a76 */
  push32(0x102f3ba5u); f_102f3a76();
  /* 102f3ba5 pop ecx */
  ECX = (pop32());
  /* 102f3ba6 pop ecx */
  ECX = (pop32());
  /* 102f3ba7 jmp 0x102f3bb3 */
  goto L_102f3bb3;
L_102f3ba9:;
  /* 102f3ba9 mov eax, dword ptr [0x102f9374] */
  EAX = (r32((uint32_t)(0x102f9374)));
  /* 102f3bae mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 102f3bb1 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_102f3bb3:;
  /* 102f3bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3bb5 jne 0x102f3bbb */
  if (!C.zf) goto L_102f3bbb;
L_102f3bb7:;
  /* 102f3bb7 mov eax, ebx */
  EAX = (EBX);
  /* 102f3bb9 jmp 0x102f3c20 */
  goto L_102f3c20;
L_102f3bbb:;
  /* 102f3bbb mov edx, dword ptr [0x102f9374] */
  EDX = (r32((uint32_t)(0x102f9374)));
  /* 102f3bc1 mov eax, ebx */
  EAX = (EBX);
  /* 102f3bc3 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102f3bc6 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 102f3bc9 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 102f3bce je 0x102f3bdf */
  if (C.zf) goto L_102f3bdf;
  /* 102f3bd0 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 102f3bd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f3bd6 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 102f3bd9 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 102f3bdc pop eax */
  EAX = (pop32());
  /* 102f3bdd jmp 0x102f3be8 */
  goto L_102f3be8;
L_102f3bdf:;
  /* 102f3bdf and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 102f3be3 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 102f3be6 mov eax, esi */
  EAX = (ESI);
L_102f3be8:;
  /* 102f3be8 push esi */
  push32((uint32_t)(ESI));
  /* 102f3be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f3beb lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 102f3bee push 3 */
  push32((uint32_t)(0x3u));
  /* 102f3bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 102f3bf1 push eax */
  push32((uint32_t)(EAX));
  /* 102f3bf2 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102f3bf5 push eax */
  push32((uint32_t)(EAX));
  /* 102f3bf6 push edi */
  push32((uint32_t)(EDI));
  /* 102f3bf7 push dword ptr [0x102fa3ac] */
  push32((uint32_t)(r32((uint32_t)(0x102fa3ac))));
  /* 102f3bfd call 0x102f5b77 */
  push32(0x102f3c02u); f_102f5b77();
  /* 102f3c02 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3c05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3c07 je 0x102f3bb7 */
  if (C.zf) goto L_102f3bb7;
  /* 102f3c09 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3c0b jne 0x102f3c13 */
  if (!C.zf) goto L_102f3c13;
  /* 102f3c0d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 102f3c11 jmp 0x102f3c20 */
  goto L_102f3c20;
L_102f3c13:;
  /* 102f3c13 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 102f3c17 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 102f3c1b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102f3c1e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_102f3c20:;
  /* 102f3c20 pop edi */
  EDI = (pop32());
  /* 102f3c21 pop esi */
  ESI = (pop32());
  /* 102f3c22 pop ebx */
  EBX = (pop32());
  /* 102f3c23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3c24 ret  */
  ESPCHK(0x102f3b5au, _esp0);
  ESP += 4; return;
}

/* FUN_10003c25 @ 0x102f3c25 (73 bytes, 36 insns) */
void f_102f3c25(void) {
  FTRACE(0x102f3c25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3c25 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f3c29 push esi */
  push32((uint32_t)(ESI));
  /* 102f3c2a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102f3c2c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f3c2d pop ecx */
  ECX = (pop32());
  /* 102f3c2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f3c30 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 102f3c32 mov esi, eax */
  ESI = (EAX);
  /* 102f3c34 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102f3c38 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f3c39 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f3c3b pop ecx */
  ECX = (pop32());
  /* 102f3c3c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f3c40 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3c42 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102f3c45 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102f3c47 not edx */
  EDX = (~(EDX));
  /* 102f3c49 test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 102f3c4c jne 0x102f3c6a */
  if (!C.zf) goto L_102f3c6a;
  /* 102f3c4e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f3c4f cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3c52 jge 0x102f3c65 */
  if ((C.sf==C.of)) goto L_102f3c65;
  /* 102f3c54 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_102f3c57:;
  /* 102f3c57 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3c5a jne 0x102f3c6a */
  if (!C.zf) goto L_102f3c6a;
  /* 102f3c5c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f3c5d add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3c60 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3c63 jl 0x102f3c57 */
  if ((C.sf!=C.of)) goto L_102f3c57;
L_102f3c65:;
  /* 102f3c65 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3c67 pop eax */
  EAX = (pop32());
  /* 102f3c68 pop esi */
  ESI = (pop32());
  /* 102f3c69 ret  */
  ESPCHK(0x102f3c25u, _esp0);
  ESP += 4; return;
L_102f3c6a:;
  /* 102f3c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f3c6c pop esi */
  ESI = (pop32());
  /* 102f3c6d ret  */
  ESPCHK(0x102f3c25u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c6e @ 0x102f3c6e (86 bytes, 43 insns) */
void f_102f3c6e(void) {
  FTRACE(0x102f3c6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3c6e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f3c72 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3c73 push esi */
  push32((uint32_t)(ESI));
  /* 102f3c74 push edi */
  push32((uint32_t)(EDI));
  /* 102f3c75 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102f3c77 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 102f3c7b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f3c7c pop ecx */
  ECX = (pop32());
  /* 102f3c7d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f3c7f mov esi, eax */
  ESI = (EAX);
  /* 102f3c81 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 102f3c85 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f3c86 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f3c88 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 102f3c8b push edi */
  push32((uint32_t)(EDI));
  /* 102f3c8c push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 102f3c8e pop ecx */
  ECX = (pop32());
  /* 102f3c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3c91 pop eax */
  EAX = (pop32());
  /* 102f3c92 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3c94 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102f3c96 push eax */
  push32((uint32_t)(EAX));
  /* 102f3c97 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 102f3c99 call 0x102f5dc6 */
  push32(0x102f3c9eu); f_102f5dc6();
  /* 102f3c9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3ca1 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102f3ca2 js 0x102f3cc0 */
  if (C.sf) goto L_102f3cc0;
  /* 102f3ca4 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_102f3ca7:;
  /* 102f3ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3ca9 je 0x102f3cc0 */
  if (C.zf) goto L_102f3cc0;
  /* 102f3cab push edi */
  push32((uint32_t)(EDI));
  /* 102f3cac push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3cae push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 102f3cb0 call 0x102f5dc6 */
  push32(0x102f3cb5u); f_102f5dc6();
  /* 102f3cb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3cb8 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102f3cb9 sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3cbc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f3cbe jge 0x102f3ca7 */
  if ((C.sf==C.of)) goto L_102f3ca7;
L_102f3cc0:;
  /* 102f3cc0 pop edi */
  EDI = (pop32());
  /* 102f3cc1 pop esi */
  ESI = (pop32());
  /* 102f3cc2 pop ebx */
  EBX = (pop32());
  /* 102f3cc3 ret  */
  ESPCHK(0x102f3c6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003cc4 @ 0x102f3cc4 (140 bytes, 71 insns) */
void f_102f3cc4(void) {
  FTRACE(0x102f3cc4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3cc4 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3cc5 mov ebp, esp */
  EBP = (ESP);
  /* 102f3cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 102f3cc8 push ecx */
  push32((uint32_t)(ECX));
  /* 102f3cc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f3ccc push ebx */
  push32((uint32_t)(EBX));
  /* 102f3ccd push esi */
  push32((uint32_t)(ESI));
  /* 102f3cce push edi */
  push32((uint32_t)(EDI));
  /* 102f3ccf lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 102f3cd2 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102f3cd4 pop ecx */
  ECX = (pop32());
  /* 102f3cd5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f3cd9 lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 102f3cdc push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102f3cde mov eax, ebx */
  EAX = (EBX);
  /* 102f3ce0 pop esi */
  ESI = (pop32());
  /* 102f3ce1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f3ce2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f3ce4 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 102f3ce6 mov ecx, eax */
  ECX = (EAX);
  /* 102f3ce8 mov eax, ebx */
  EAX = (EBX);
  /* 102f3cea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f3ceb idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f3ced mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3cf0 pop esi */
  ESI = (pop32());
  /* 102f3cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3cf3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102f3cf6 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 102f3cf9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102f3cfc sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3cfe pop edx */
  EDX = (pop32());
  /* 102f3cff mov ecx, esi */
  ECX = (ESI);
  /* 102f3d01 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102f3d03 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 102f3d05 je 0x102f3d28 */
  if (C.zf) goto L_102f3d28;
  /* 102f3d07 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102f3d08 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3d09 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f3d0c call 0x102f3c25 */
  push32(0x102f3d11u); f_102f3c25();
  /* 102f3d11 pop ecx */
  ECX = (pop32());
  /* 102f3d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3d14 pop ecx */
  ECX = (pop32());
  /* 102f3d15 jne 0x102f3d25 */
  if (!C.zf) goto L_102f3d25;
  /* 102f3d17 push edi */
  push32((uint32_t)(EDI));
  /* 102f3d18 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f3d1b call 0x102f3c6e */
  push32(0x102f3d20u); f_102f3c6e();
  /* 102f3d20 pop ecx */
  ECX = (pop32());
  /* 102f3d21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102f3d24 pop ecx */
  ECX = (pop32());
L_102f3d25:;
  /* 102f3d25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_102f3d28:;
  /* 102f3d28 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102f3d2b mov ecx, esi */
  ECX = (ESI);
  /* 102f3d2d shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102f3d2f push 3 */
  push32((uint32_t)(0x3u));
  /* 102f3d31 pop ecx */
  ECX = (pop32());
  /* 102f3d32 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102f3d34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f3d37 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3d38 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3d3a jge 0x102f3d48 */
  if ((C.sf==C.of)) goto L_102f3d48;
  /* 102f3d3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3d3f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3d41 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 102f3d44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f3d46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_102f3d48:;
  /* 102f3d48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f3d4b pop edi */
  EDI = (pop32());
  /* 102f3d4c pop esi */
  ESI = (pop32());
  /* 102f3d4d pop ebx */
  EBX = (pop32());
  /* 102f3d4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3d4f ret  */
  ESPCHK(0x102f3cc4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d50 @ 0x102f3d50 (27 bytes, 13 insns) */
void f_102f3d50(void) {
  FTRACE(0x102f3d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3d50 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f3d54 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f3d58 push esi */
  push32((uint32_t)(ESI));
  /* 102f3d59 push 3 */
  push32((uint32_t)(0x3u));
  /* 102f3d5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3d5d pop edx */
  EDX = (pop32());
L_102f3d5e:;
  /* 102f3d5e mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 102f3d60 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 102f3d63 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3d66 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102f3d67 jne 0x102f3d5e */
  if (!C.zf) goto L_102f3d5e;
  /* 102f3d69 pop esi */
  ESI = (pop32());
  /* 102f3d6a ret  */
  ESPCHK(0x102f3d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d6b @ 0x102f3d6b (12 bytes, 8 insns) */
void f_102f3d6b(void) {
  FTRACE(0x102f3d6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3d6b push edi */
  push32((uint32_t)(EDI));
  /* 102f3d6c mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102f3d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f3d72 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f3d73 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f3d74 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f3d75 pop edi */
  EDI = (pop32());
  /* 102f3d76 ret  */
  ESPCHK(0x102f3d6bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d77 @ 0x102f3d77 (27 bytes, 13 insns) */
void f_102f3d77(void) {
  FTRACE(0x102f3d77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3d77 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f3d7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_102f3d7d:;
  /* 102f3d7d cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3d80 jne 0x102f3d8f */
  if (!C.zf) goto L_102f3d8f;
  /* 102f3d82 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f3d83 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3d86 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3d89 jl 0x102f3d7d */
  if ((C.sf!=C.of)) goto L_102f3d7d;
  /* 102f3d8b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3d8d pop eax */
  EAX = (pop32());
  /* 102f3d8e ret  */
  ESPCHK(0x102f3d77u, _esp0);
  ESP += 4; return;
L_102f3d8f:;
  /* 102f3d8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f3d91 ret  */
  ESPCHK(0x102f3d77u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d92 @ 0x102f3d92 (141 bytes, 64 insns) */
void f_102f3d92(void) {
  FTRACE(0x102f3d92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3d92 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3d93 mov ebp, esp */
  EBP = (ESP);
  /* 102f3d95 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3d98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f3d9b push ebx */
  push32((uint32_t)(EBX));
  /* 102f3d9c push esi */
  push32((uint32_t)(ESI));
  /* 102f3d9d push edi */
  push32((uint32_t)(EDI));
  /* 102f3d9e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102f3da0 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3da3 pop ebx */
  EBX = (pop32());
  /* 102f3da4 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 102f3da7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f3da8 mov ecx, ebx */
  ECX = (EBX);
  /* 102f3daa mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 102f3db1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f3db3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102f3db6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f3db9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 102f3dba idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 102f3dbc and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 102f3dc0 mov ecx, edx */
  ECX = (EDX);
  /* 102f3dc2 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102f3dc4 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3dc6 not esi */
  ESI = (~(ESI));
L_102f3dc8:;
  /* 102f3dc8 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 102f3dca mov ecx, eax */
  ECX = (EAX);
  /* 102f3dcc and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 102f3dce mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102f3dd1 mov ecx, edx */
  ECX = (EDX);
  /* 102f3dd3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102f3dd5 or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 102f3dd8 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 102f3dda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f3ddd mov ecx, ebx */
  ECX = (EBX);
  /* 102f3ddf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3de2 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102f3de4 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 102f3de7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102f3dea jne 0x102f3dc8 */
  if (!C.zf) goto L_102f3dc8;
  /* 102f3dec mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 102f3def push 2 */
  push32((uint32_t)(0x2u));
  /* 102f3df1 pop ebx */
  EBX = (pop32());
  /* 102f3df2 mov esi, edi */
  ESI = (EDI);
  /* 102f3df4 push 8 */
  push32((uint32_t)(0x8u));
  /* 102f3df6 pop ecx */
  ECX = (pop32());
  /* 102f3df7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_102f3dfa:;
  /* 102f3dfa cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3dfc jl 0x102f3e0d */
  if ((C.sf!=C.of)) goto L_102f3e0d;
  /* 102f3dfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3e01 mov eax, ecx */
  EAX = (ECX);
  /* 102f3e03 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3e05 mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 102f3e08 mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 102f3e0b jmp 0x102f3e14 */
  goto L_102f3e14;
L_102f3e0d:;
  /* 102f3e0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3e10 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_102f3e14:;
  /* 102f3e14 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102f3e15 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3e18 jns 0x102f3dfa */
  if (!C.sf) goto L_102f3dfa;
  /* 102f3e1a pop edi */
  EDI = (pop32());
  /* 102f3e1b pop esi */
  ESI = (pop32());
  /* 102f3e1c pop ebx */
  EBX = (pop32());
  /* 102f3e1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3e1e ret  */
  ESPCHK(0x102f3d92u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e1f @ 0x102f3e1f (364 bytes, 138 insns) */
void f_102f3e1f(void) {
  FTRACE(0x102f3e1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3e1f push ebp */
  push32((uint32_t)(EBP));
  /* 102f3e20 mov ebp, esp */
  EBP = (ESP);
  /* 102f3e22 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3e25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3e28 push ebx */
  push32((uint32_t)(EBX));
  /* 102f3e29 push esi */
  push32((uint32_t)(ESI));
  /* 102f3e2a push edi */
  push32((uint32_t)(EDI));
  /* 102f3e2b movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 102f3e2f mov ebx, ecx */
  EBX = (ECX);
  /* 102f3e31 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 102f3e37 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 102f3e3a mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 102f3e3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 102f3e40 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 102f3e43 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 102f3e46 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f3e49 and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 102f3e4f sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3e55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102f3e58 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102f3e5b cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3e61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102f3e64 jne 0x102f3e8c */
  if (!C.zf) goto L_102f3e8c;
  /* 102f3e66 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3e69 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f3e6b push eax */
  push32((uint32_t)(EAX));
  /* 102f3e6c call 0x102f3d77 */
  push32(0x102f3e71u); f_102f3d77();
  /* 102f3e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3e73 pop ecx */
  ECX = (pop32());
  /* 102f3e74 jne 0x102f3f4b */
  if (!C.zf) goto L_102f3f4b;
  /* 102f3e7a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3e7d push eax */
  push32((uint32_t)(EAX));
  /* 102f3e7e call 0x102f3d6b */
  push32(0x102f3e83u); f_102f3d6b();
  /* 102f3e83 pop ecx */
  ECX = (pop32());
L_102f3e84:;
  /* 102f3e84 push 2 */
  push32((uint32_t)(0x2u));
L_102f3e86:;
  /* 102f3e86 pop eax */
  EAX = (pop32());
  /* 102f3e87 jmp 0x102f3f4d */
  goto L_102f3f4d;
L_102f3e8c:;
  /* 102f3e8c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3e8f push eax */
  push32((uint32_t)(EAX));
  /* 102f3e90 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102f3e93 push eax */
  push32((uint32_t)(EAX));
  /* 102f3e94 call 0x102f3d50 */
  push32(0x102f3e99u); f_102f3d50();
  /* 102f3e99 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 102f3e9c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3e9f push eax */
  push32((uint32_t)(EAX));
  /* 102f3ea0 call 0x102f3cc4 */
  push32(0x102f3ea5u); f_102f3cc4();
  /* 102f3ea5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f3eaa je 0x102f3ead */
  if (C.zf) goto L_102f3ead;
  /* 102f3eac inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_102f3ead:;
  /* 102f3ead mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 102f3eb0 mov ecx, eax */
  ECX = (EAX);
  /* 102f3eb2 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3eb5 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3eb7 jge 0x102f3ec5 */
  if ((C.sf==C.of)) goto L_102f3ec5;
  /* 102f3eb9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3ebc push eax */
  push32((uint32_t)(EAX));
  /* 102f3ebd call 0x102f3d6b */
  push32(0x102f3ec2u); f_102f3d6b();
  /* 102f3ec2 pop ecx */
  ECX = (pop32());
  /* 102f3ec3 jmp 0x102f3f01 */
  goto L_102f3f01;
L_102f3ec5:;
  /* 102f3ec5 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3ec7 jg 0x102f3f08 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f3f08;
  /* 102f3ec9 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3ecb mov esi, eax */
  ESI = (EAX);
  /* 102f3ecd lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102f3ed0 push eax */
  push32((uint32_t)(EAX));
  /* 102f3ed1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3ed4 push eax */
  push32((uint32_t)(EAX));
  /* 102f3ed5 call 0x102f3d50 */
  push32(0x102f3edau); f_102f3d50();
  /* 102f3eda lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3edd push esi */
  push32((uint32_t)(ESI));
  /* 102f3ede push eax */
  push32((uint32_t)(EAX));
  /* 102f3edf call 0x102f3d92 */
  push32(0x102f3ee4u); f_102f3d92();
  /* 102f3ee4 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 102f3ee7 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3eea push eax */
  push32((uint32_t)(EAX));
  /* 102f3eeb call 0x102f3cc4 */
  push32(0x102f3ef0u); f_102f3cc4();
  /* 102f3ef0 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 102f3ef3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f3ef4 push eax */
  push32((uint32_t)(EAX));
  /* 102f3ef5 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3ef8 push eax */
  push32((uint32_t)(EAX));
  /* 102f3ef9 call 0x102f3d92 */
  push32(0x102f3efeu); f_102f3d92();
  /* 102f3efe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f3f01:;
  /* 102f3f01 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f3f03 jmp 0x102f3e84 */
  goto L_102f3e84;
L_102f3f08:;
  /* 102f3f08 cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3f0a jl 0x102f3f34 */
  if ((C.sf!=C.of)) goto L_102f3f34;
  /* 102f3f0c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3f0f push eax */
  push32((uint32_t)(EAX));
  /* 102f3f10 call 0x102f3d6b */
  push32(0x102f3f15u); f_102f3d6b();
  /* 102f3f15 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 102f3f18 or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 102f3f1c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3f1f push eax */
  push32((uint32_t)(EAX));
  /* 102f3f20 call 0x102f3d92 */
  push32(0x102f3f25u); f_102f3d92();
  /* 102f3f25 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 102f3f28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3f2b add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 102f3f2f jmp 0x102f3e86 */
  goto L_102f3e86;
L_102f3f34:;
  /* 102f3f34 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 102f3f37 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 102f3f3a and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 102f3f3e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3f41 push eax */
  push32((uint32_t)(EAX));
  /* 102f3f42 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3f44 call 0x102f3d92 */
  push32(0x102f3f49u); f_102f3d92();
  /* 102f3f49 pop ecx */
  ECX = (pop32());
  /* 102f3f4a pop ecx */
  ECX = (pop32());
L_102f3f4b:;
  /* 102f3f4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102f3f4d:;
  /* 102f3f4d push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 102f3f4f pop ecx */
  ECX = (pop32());
  /* 102f3f50 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3f53 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 102f3f56 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102f3f58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f3f5b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f3f5d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3f5f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 102f3f65 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 102f3f67 or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 102f3f6a cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3f6d jne 0x102f3f7c */
  if (!C.zf) goto L_102f3f7c;
  /* 102f3f6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f3f72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f3f75 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 102f3f78 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 102f3f7a jmp 0x102f3f86 */
  goto L_102f3f86;
L_102f3f7c:;
  /* 102f3f7c cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f3f7f jne 0x102f3f86 */
  if (!C.zf) goto L_102f3f86;
  /* 102f3f81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f3f84 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_102f3f86:;
  /* 102f3f86 pop edi */
  EDI = (pop32());
  /* 102f3f87 pop esi */
  ESI = (pop32());
  /* 102f3f88 pop ebx */
  EBX = (pop32());
  /* 102f3f89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3f8a ret  */
  ESPCHK(0x102f3e1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f8b @ 0x102f3f8b (22 bytes, 6 insns) */
void f_102f3f8b(void) {
  FTRACE(0x102f3f8bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3f8b push 0x102f9580 */
  push32((uint32_t)(0x102f9580u));
  /* 102f3f90 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102f3f94 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102f3f98 call 0x102f3e1f */
  push32(0x102f3f9du); f_102f3e1f();
  /* 102f3f9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3fa0 ret  */
  ESPCHK(0x102f3f8bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa1 @ 0x102f3fa1 (22 bytes, 6 insns) */
void f_102f3fa1(void) {
  FTRACE(0x102f3fa1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3fa1 push 0x102f9598 */
  push32((uint32_t)(0x102f9598u));
  /* 102f3fa6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102f3faa push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 102f3fae call 0x102f3e1f */
  push32(0x102f3fb3u); f_102f3e1f();
  /* 102f3fb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3fb6 ret  */
  ESPCHK(0x102f3fa1u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb7 @ 0x102f3fb7 (45 bytes, 21 insns) */
void f_102f3fb7(void) {
  FTRACE(0x102f3fb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3fb7 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3fb8 mov ebp, esp */
  EBP = (ESP);
  /* 102f3fba sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3fbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f3fbf push eax */
  push32((uint32_t)(EAX));
  /* 102f3fc0 push eax */
  push32((uint32_t)(EAX));
  /* 102f3fc1 push eax */
  push32((uint32_t)(EAX));
  /* 102f3fc2 push eax */
  push32((uint32_t)(EAX));
  /* 102f3fc3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f3fc6 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 102f3fc9 push eax */
  push32((uint32_t)(EAX));
  /* 102f3fca lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3fcd push eax */
  push32((uint32_t)(EAX));
  /* 102f3fce call 0x102f5f67 */
  push32(0x102f3fd3u); f_102f5f67();
  /* 102f3fd3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f3fd6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3fd9 push eax */
  push32((uint32_t)(EAX));
  /* 102f3fda call 0x102f3f8b */
  push32(0x102f3fdfu); f_102f3f8b();
  /* 102f3fdf add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f3fe2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f3fe3 ret  */
  ESPCHK(0x102f3fb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe4 @ 0x102f3fe4 (45 bytes, 21 insns) */
void f_102f3fe4(void) {
  FTRACE(0x102f3fe4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f3fe4 push ebp */
  push32((uint32_t)(EBP));
  /* 102f3fe5 mov ebp, esp */
  EBP = (ESP);
  /* 102f3fe7 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f3fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f3fec push eax */
  push32((uint32_t)(EAX));
  /* 102f3fed push eax */
  push32((uint32_t)(EAX));
  /* 102f3fee push eax */
  push32((uint32_t)(EAX));
  /* 102f3fef push eax */
  push32((uint32_t)(EAX));
  /* 102f3ff0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f3ff3 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 102f3ff6 push eax */
  push32((uint32_t)(EAX));
  /* 102f3ff7 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f3ffa push eax */
  push32((uint32_t)(EAX));
  /* 102f3ffb call 0x102f5f67 */
  push32(0x102f4000u); f_102f5f67();
  /* 102f4000 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f4003 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f4006 push eax */
  push32((uint32_t)(EAX));
  /* 102f4007 call 0x102f3fa1 */
  push32(0x102f400cu); f_102f3fa1();
  /* 102f400c add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f400f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4010 ret  */
  ESPCHK(0x102f3fe4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004011 @ 0x102f4011 (119 bytes, 57 insns) */
void f_102f4011(void) {
  FTRACE(0x102f4011u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4011 push ebp */
  push32((uint32_t)(EBP));
  /* 102f4012 mov ebp, esp */
  EBP = (ESP);
  /* 102f4014 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f4017 push ebx */
  push32((uint32_t)(EBX));
  /* 102f4018 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f401b push esi */
  push32((uint32_t)(ESI));
  /* 102f401c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f401f mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 102f4022 push edi */
  push32((uint32_t)(EDI));
  /* 102f4023 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 102f4026 mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 102f4029 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f402b mov eax, edi */
  EAX = (EDI);
  /* 102f402d jle 0x102f404e */
  if ((C.zf||C.sf!=C.of)) goto L_102f404e;
  /* 102f402f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102f4032 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102f4034:;
  /* 102f4034 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102f4036 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f4038 je 0x102f4040 */
  if (C.zf) goto L_102f4040;
  /* 102f403a movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 102f403d inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f403e jmp 0x102f4043 */
  goto L_102f4043;
L_102f4040:;
  /* 102f4040 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 102f4042 pop edx */
  EDX = (pop32());
L_102f4043:;
  /* 102f4043 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 102f4045 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f4046 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 102f4049 jne 0x102f4034 */
  if (!C.zf) goto L_102f4034;
  /* 102f404b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_102f404e:;
  /* 102f404e and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 102f4051 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f4053 jl 0x102f4067 */
  if ((C.sf!=C.of)) goto L_102f4067;
  /* 102f4055 cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f4058 jl 0x102f4067 */
  if ((C.sf!=C.of)) goto L_102f4067;
L_102f405a:;
  /* 102f405a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f405b cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f405e jne 0x102f4065 */
  if (!C.zf) goto L_102f4065;
  /* 102f4060 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 102f4063 jmp 0x102f405a */
  goto L_102f405a;
L_102f4065:;
  /* 102f4065 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_102f4067:;
  /* 102f4067 cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f406a jne 0x102f4071 */
  if (!C.zf) goto L_102f4071;
  /* 102f406c inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 102f406f jmp 0x102f4083 */
  goto L_102f4083;
L_102f4071:;
  /* 102f4071 push edi */
  push32((uint32_t)(EDI));
  /* 102f4072 call 0x102f4630 */
  push32(0x102f4077u); f_102f4630();
  /* 102f4077 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f4078 push eax */
  push32((uint32_t)(EAX));
  /* 102f4079 push edi */
  push32((uint32_t)(EDI));
  /* 102f407a push esi */
  push32((uint32_t)(ESI));
  /* 102f407b call 0x102f42f0 */
  push32(0x102f4080u); f_102f42f0();
  /* 102f4080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f4083:;
  /* 102f4083 pop edi */
  EDI = (pop32());
  /* 102f4084 pop esi */
  ESI = (pop32());
  /* 102f4085 pop ebx */
  EBX = (pop32());
  /* 102f4086 pop ebp */
  EBP = (pop32());
  /* 102f4087 ret  */
  ESPCHK(0x102f4011u, _esp0);
  ESP += 4; return;
}

/* FUN_10004088 @ 0x102f4088 (92 bytes, 41 insns) */
void f_102f4088(void) {
  FTRACE(0x102f4088u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4088 push ebp */
  push32((uint32_t)(EBP));
  /* 102f4089 mov ebp, esp */
  EBP = (ESP);
  /* 102f408b sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f408e push esi */
  push32((uint32_t)(ESI));
  /* 102f408f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102f4092 push edi */
  push32((uint32_t)(EDI));
  /* 102f4093 push eax */
  push32((uint32_t)(EAX));
  /* 102f4094 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 102f4097 push eax */
  push32((uint32_t)(EAX));
  /* 102f4098 call 0x102f40e4 */
  push32(0x102f409du); f_102f40e4();
  /* 102f409d pop ecx */
  ECX = (pop32());
  /* 102f409e lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 102f40a1 pop ecx */
  ECX = (pop32());
  /* 102f40a2 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 102f40a5 push eax */
  push32((uint32_t)(EAX));
  /* 102f40a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f40a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102f40aa sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f40ad mov edi, esp */
  EDI = (ESP);
  /* 102f40af movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f40b0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f40b1 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 102f40b3 call 0x102f6438 */
  push32(0x102f40b8u); f_102f6438();
  /* 102f40b8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f40bb mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 102f40be mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 102f40c1 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 102f40c5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102f40c7 movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 102f40cb mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 102f40ce lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 102f40d1 push eax */
  push32((uint32_t)(EAX));
  /* 102f40d2 push edi */
  push32((uint32_t)(EDI));
  /* 102f40d3 call 0x102f41a0 */
  push32(0x102f40d8u); f_102f41a0();
  /* 102f40d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f40db mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 102f40de mov eax, esi */
  EAX = (ESI);
  /* 102f40e0 pop edi */
  EDI = (pop32());
  /* 102f40e1 pop esi */
  ESI = (pop32());
  /* 102f40e2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f40e3 ret  */
  ESPCHK(0x102f4088u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e4 @ 0x102f40e4 (182 bytes, 70 insns) */
void f_102f40e4(void) {
  FTRACE(0x102f40e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f40e4 push ebp */
  push32((uint32_t)(EBP));
  /* 102f40e5 mov ebp, esp */
  EBP = (ESP);
  /* 102f40e7 push ecx */
  push32((uint32_t)(ECX));
  /* 102f40e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f40eb push ebx */
  push32((uint32_t)(EBX));
  /* 102f40ec push esi */
  push32((uint32_t)(ESI));
  /* 102f40ed push edi */
  push32((uint32_t)(EDI));
  /* 102f40ee mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 102f40f2 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 102f40f7 mov ecx, eax */
  ECX = (EAX);
  /* 102f40f9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 102f40fe shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102f4101 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102f4103 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102f4106 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 102f4109 mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 102f410b movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 102f410e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 102f4113 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f4118 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f411a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 102f411d je 0x102f4132 */
  if (C.zf) goto L_102f4132;
  /* 102f411f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4121 je 0x102f412b */
  if (C.zf) goto L_102f412b;
  /* 102f4123 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 102f4129 jmp 0x102f4153 */
  goto L_102f4153;
L_102f412b:;
  /* 102f412b mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 102f4130 jmp 0x102f4153 */
  goto L_102f4153;
L_102f4132:;
  /* 102f4132 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f4134 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4136 jne 0x102f414a */
  if (!C.zf) goto L_102f414a;
  /* 102f4138 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f413a jne 0x102f414a */
  if (!C.zf) goto L_102f414a;
  /* 102f413c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f413f mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 102f4142 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 102f4144 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 102f4148 jmp 0x102f4195 */
  goto L_102f4195;
L_102f414a:;
  /* 102f414a lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 102f4150 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_102f4153:;
  /* 102f4153 mov ecx, edx */
  ECX = (EDX);
  /* 102f4155 shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 102f4158 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 102f415b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 102f415d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4160 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 102f4163 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 102f4166 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102f4169 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_102f416b:;
  /* 102f416b test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 102f416d jne 0x102f418c */
  if (!C.zf) goto L_102f418c;
  /* 102f416f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 102f4171 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4173 mov ebx, edx */
  EBX = (EDX);
  /* 102f4175 shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 102f4178 or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 102f417a lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 102f417d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102f417f mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 102f4182 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4188 mov ecx, ebx */
  ECX = (EBX);
  /* 102f418a jmp 0x102f416b */
  goto L_102f416b;
L_102f418c:;
  /* 102f418c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f418f or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102f4191 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_102f4195:;
  /* 102f4195 pop edi */
  EDI = (pop32());
  /* 102f4196 pop esi */
  ESI = (pop32());
  /* 102f4197 pop ebx */
  EBX = (pop32());
  /* 102f4198 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4199 ret  */
  ESPCHK(0x102f40e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x102f41a0 (7 bytes, 3 insns) */
void f_102f41a0(void) {
  FTRACE(0x102f41a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f41a0 push edi */
  push32((uint32_t)(EDI));
  /* 102f41a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 102f41a5 jmp 0x102f4211 */
  jmp_ind(0x102f4211u); return;
}

/* FUN_100041b0 @ 0x102f41b0 (224 bytes, 84 insns) */
void f_102f41b0(void) {
  FTRACE(0x102f41b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f41b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f41b4 push edi */
  push32((uint32_t)(EDI));
  /* 102f41b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102f41bb je 0x102f41cc */
  if (C.zf) goto L_102f41cc;
L_102f41bd:;
  /* 102f41bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102f41bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f41c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f41c2 je 0x102f41ff */
  if (C.zf) goto L_102f41ff;
  /* 102f41c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102f41ca jne 0x102f41bd */
  if (!C.zf) goto L_102f41bd;
L_102f41cc:;
  /* 102f41cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102f41ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102f41d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f41d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f41d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102f41da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f41dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102f41e2 je 0x102f41cc */
  if (C.zf) goto L_102f41cc;
  /* 102f41e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102f41e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f41e9 je 0x102f420e */
  if (C.zf) goto L_102f420e;
  /* 102f41eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102f41ed je 0x102f4209 */
  if (C.zf) goto L_102f4209;
  /* 102f41ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102f41f4 je 0x102f4204 */
  if (C.zf) goto L_102f4204;
  /* 102f41f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102f41fb je 0x102f41ff */
  if (C.zf) goto L_102f41ff;
  /* 102f41fd jmp 0x102f41cc */
  goto L_102f41cc;
L_102f41ff:;
  /* 102f41ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 102f4202 jmp 0x102f4211 */
  goto L_102f4211;
L_102f4204:;
  /* 102f4204 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 102f4207 jmp 0x102f4211 */
  goto L_102f4211;
L_102f4209:;
  /* 102f4209 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 102f420c jmp 0x102f4211 */
  goto L_102f4211;
L_102f420e:;
  /* 102f420e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_102f4211:;
  /* 102f4211 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102f4215 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102f421b je 0x102f4236 */
  if (C.zf) goto L_102f4236;
L_102f421d:;
  /* 102f421d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102f421f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f4220 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f4222 je 0x102f4288 */
  if (C.zf) goto L_102f4288;
  /* 102f4224 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102f4226 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f4227 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102f422d jne 0x102f421d */
  if (!C.zf) goto L_102f421d;
  /* 102f422f jmp 0x102f4236 */
  goto L_102f4236;
L_102f4231:;
  /* 102f4231 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102f4233 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102f4236:;
  /* 102f4236 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102f423b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102f423d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f423f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f4242 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102f4244 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102f4246 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4249 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102f424e je 0x102f4231 */
  if (C.zf) goto L_102f4231;
  /* 102f4250 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f4252 je 0x102f4288 */
  if (C.zf) goto L_102f4288;
  /* 102f4254 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102f4256 je 0x102f427f */
  if (C.zf) goto L_102f427f;
  /* 102f4258 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102f425e je 0x102f4272 */
  if (C.zf) goto L_102f4272;
  /* 102f4260 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102f4266 je 0x102f426a */
  if (C.zf) goto L_102f426a;
  /* 102f4268 jmp 0x102f4231 */
  goto L_102f4231;
L_102f426a:;
  /* 102f426a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102f426c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f4270 pop edi */
  EDI = (pop32());
  /* 102f4271 ret  */
  ESPCHK(0x102f41b0u, _esp0);
  ESP += 4; return;
L_102f4272:;
  /* 102f4272 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102f4275 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f4279 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 102f427d pop edi */
  EDI = (pop32());
  /* 102f427e ret  */
  ESPCHK(0x102f41b0u, _esp0);
  ESP += 4; return;
L_102f427f:;
  /* 102f427f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 102f4282 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f4286 pop edi */
  EDI = (pop32());
  /* 102f4287 ret  */
  ESPCHK(0x102f41b0u, _esp0);
  ESP += 4; return;
L_102f4288:;
  /* 102f4288 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 102f428a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f428e pop edi */
  EDI = (pop32());
  /* 102f428f ret  */
  ESPCHK(0x102f41b0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x102f4290 (88 bytes, 40 insns) */
void f_102f4290(void) {
  FTRACE(0x102f4290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4290 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 102f4294 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f4298 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102f429a je 0x102f42e3 */
  if (C.zf) goto L_102f42e3;
  /* 102f429c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f429e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 102f42a2 push edi */
  push32((uint32_t)(EDI));
  /* 102f42a3 mov edi, ecx */
  EDI = (ECX);
  /* 102f42a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f42a8 jb 0x102f42d7 */
  if (C.cf) goto L_102f42d7;
  /* 102f42aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f42ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102f42af je 0x102f42b9 */
  if (C.zf) goto L_102f42b9;
  /* 102f42b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_102f42b3:;
  /* 102f42b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f42b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f42b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f42b7 jne 0x102f42b3 */
  if (!C.zf) goto L_102f42b3;
L_102f42b9:;
  /* 102f42b9 mov ecx, eax */
  ECX = (EAX);
  /* 102f42bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102f42be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f42c0 mov ecx, eax */
  ECX = (EAX);
  /* 102f42c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102f42c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f42c7 mov ecx, edx */
  ECX = (EDX);
  /* 102f42c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102f42cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f42cf je 0x102f42d7 */
  if (C.zf) goto L_102f42d7;
  /* 102f42d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102f42d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102f42d5 je 0x102f42dd */
  if (C.zf) goto L_102f42dd;
L_102f42d7:;
  /* 102f42d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f42d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f42da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102f42db jne 0x102f42d7 */
  if (!C.zf) goto L_102f42d7;
L_102f42dd:;
  /* 102f42dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f42e1 pop edi */
  EDI = (pop32());
  /* 102f42e2 ret  */
  ESPCHK(0x102f4290u, _esp0);
  ESP += 4; return;
L_102f42e3:;
  /* 102f42e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f42e7 ret  */
  ESPCHK(0x102f4290u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x102f42f0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_102f42f0(void) {
  FTRACE(0x102f42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f42f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102f42f1 mov ebp, esp */
  EBP = (ESP);
  /* 102f42f3 push edi */
  push32((uint32_t)(EDI));
  /* 102f42f4 push esi */
  push32((uint32_t)(ESI));
  /* 102f42f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f42f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f42fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f42fe mov eax, ecx */
  EAX = (ECX);
  /* 102f4300 mov edx, ecx */
  EDX = (ECX);
  /* 102f4302 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4304 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4306 jbe 0x102f4310 */
  if ((C.cf||C.zf)) goto L_102f4310;
  /* 102f4308 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f430a jb 0x102f4488 */
  if (C.cf) goto L_102f4488;
L_102f4310:;
  /* 102f4310 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102f4316 jne 0x102f432c */
  if (!C.zf) goto L_102f432c;
  /* 102f4318 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f431b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102f431e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4321 jb 0x102f434c */
  if (C.cf) goto L_102f434c;
  /* 102f4323 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4325 jmp dword ptr [edx*4 + 0x102f4438] */
  switch (EDX) {
    case 0: goto L_102f4448;
    case 1: goto L_102f4450;
    case 2: goto L_102f445c;
    case 3: goto L_102f4470;
    default: x86_unimpl("switch@0x102f4325 out of table"); return;
  }
L_102f432c:;
  /* 102f432c mov eax, edi */
  EAX = (EDI);
  /* 102f432e mov edx, 3 */
  EDX = (0x3u);
  /* 102f4333 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4336 jb 0x102f4344 */
  if (C.cf) goto L_102f4344;
  /* 102f4338 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102f433b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f433d jmp dword ptr [eax*4 + 0x102f4350] */
  switch (EAX) {
    case 1: goto L_102f4360;
    case 2: goto L_102f438c;
    case 3: goto L_102f43b0;
    default: x86_unimpl("switch@0x102f433d out of table"); return;
  }
L_102f4344:;
  /* 102f4344 jmp dword ptr [ecx*4 + 0x102f4448] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102f4448)))); return;
  /* 102f434b nop  */
  /* nop */
L_102f434c:;
  /* 102f434c jmp dword ptr [ecx*4 + 0x102f43cc] */
  switch (ECX) {
    case 0: goto L_102f442f;
    case 1: goto L_102f441c;
    case 2: goto L_102f4414;
    case 3: goto L_102f440c;
    case 4: goto L_102f4404;
    case 5: goto L_102f43fc;
    case 6: goto L_102f43f4;
    case 7: goto L_102f43ec;
    default: x86_unimpl("switch@0x102f434c out of table"); return;
  }
  /* 102f4353 nop  */
  /* nop */
L_102f4360:;
  /* 102f4360 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4362 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4364 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4366 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4369 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f436c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f436f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4372 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4375 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4378 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f437b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f437e jb 0x102f434c */
  if (C.cf) goto L_102f434c;
  /* 102f4380 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4382 jmp dword ptr [edx*4 + 0x102f4438] */
  switch (EDX) {
    case 0: goto L_102f4448;
    case 1: goto L_102f4450;
    case 2: goto L_102f445c;
    case 3: goto L_102f4470;
    default: x86_unimpl("switch@0x102f4382 out of table"); return;
  }
  /* 102f4389 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f438c:;
  /* 102f438c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f438e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4390 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4392 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4395 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4398 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f439b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f439e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f43a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f43a4 jb 0x102f434c */
  if (C.cf) goto L_102f434c;
  /* 102f43a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f43a8 jmp dword ptr [edx*4 + 0x102f4438] */
  switch (EDX) {
    case 0: goto L_102f4448;
    case 1: goto L_102f4450;
    case 2: goto L_102f445c;
    case 3: goto L_102f4470;
    default: x86_unimpl("switch@0x102f43a8 out of table"); return;
  }
  /* 102f43af nop  */
  /* nop */
L_102f43b0:;
  /* 102f43b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f43b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f43b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f43b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f43b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f43ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f43bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f43be jb 0x102f434c */
  if (C.cf) goto L_102f434c;
  /* 102f43c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f43c2 jmp dword ptr [edx*4 + 0x102f4438] */
  switch (EDX) {
    case 0: goto L_102f4448;
    case 1: goto L_102f4450;
    case 2: goto L_102f445c;
    case 3: goto L_102f4470;
    default: x86_unimpl("switch@0x102f43c2 out of table"); return;
  }
  /* 102f43c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f43ec:;
  /* 102f43ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102f43f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102f43f4:;
  /* 102f43f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102f43f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102f43fc:;
  /* 102f43fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102f4400 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102f4404:;
  /* 102f4404 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102f4408 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102f440c:;
  /* 102f440c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102f4410 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102f4414:;
  /* 102f4414 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102f4418 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102f441c:;
  /* 102f441c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102f4420 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102f4424 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102f442b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f442d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102f442f:;
  /* 102f442f jmp dword ptr [edx*4 + 0x102f4438] */
  switch (EDX) {
    case 0: goto L_102f4448;
    case 1: goto L_102f4450;
    case 2: goto L_102f445c;
    case 3: goto L_102f4470;
    default: x86_unimpl("switch@0x102f442f out of table"); return;
  }
  /* 102f4436 mov edi, edi */
  EDI = (EDI);
L_102f4448:;
  /* 102f4448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f444b pop esi */
  ESI = (pop32());
  /* 102f444c pop edi */
  EDI = (pop32());
  /* 102f444d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f444e ret  */
  ESPCHK(0x102f42f0u, _esp0);
  ESP += 4; return;
  /* 102f444f nop  */
  /* nop */
L_102f4450:;
  /* 102f4450 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4452 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4457 pop esi */
  ESI = (pop32());
  /* 102f4458 pop edi */
  EDI = (pop32());
  /* 102f4459 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f445a ret  */
  ESPCHK(0x102f42f0u, _esp0);
  ESP += 4; return;
  /* 102f445b nop  */
  /* nop */
L_102f445c:;
  /* 102f445c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f445e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4460 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4463 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f4466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4469 pop esi */
  ESI = (pop32());
  /* 102f446a pop edi */
  EDI = (pop32());
  /* 102f446b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f446c ret  */
  ESPCHK(0x102f42f0u, _esp0);
  ESP += 4; return;
  /* 102f446d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f4470:;
  /* 102f4470 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4472 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4474 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4477 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f447a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f447d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4483 pop esi */
  ESI = (pop32());
  /* 102f4484 pop edi */
  EDI = (pop32());
  /* 102f4485 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4486 ret  */
  ESPCHK(0x102f42f0u, _esp0);
  ESP += 4; return;
  /* 102f4487 nop  */
  /* nop */
L_102f4488:;
  /* 102f4488 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102f448c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102f4490 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102f4496 jne 0x102f44bc */
  if (!C.zf) goto L_102f44bc;
  /* 102f4498 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f449b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102f449e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f44a1 jb 0x102f44b0 */
  if (C.cf) goto L_102f44b0;
  /* 102f44a3 std  */
  C.df=1;
  /* 102f44a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f44a6 cld  */
  C.df=0;
  /* 102f44a7 jmp dword ptr [edx*4 + 0x102f45d0] */
  switch (EDX) {
    case 0: goto L_102f45e0;
    case 1: goto L_102f45e8;
    case 2: goto L_102f45f8;
    case 3: goto L_102f460c;
    default: x86_unimpl("switch@0x102f44a7 out of table"); return;
  }
  /* 102f44ae mov edi, edi */
  EDI = (EDI);
L_102f44b0:;
  /* 102f44b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f44b2 jmp dword ptr [ecx*4 + 0x102f4580] */
  switch (ECX) {
    case 0: goto L_102f45c7;
    default: x86_unimpl("switch@0x102f44b2 out of table"); return;
  }
  /* 102f44b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f44bc:;
  /* 102f44bc mov eax, edi */
  EAX = (EDI);
  /* 102f44be mov edx, 3 */
  EDX = (0x3u);
  /* 102f44c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f44c6 jb 0x102f44d4 */
  if (C.cf) goto L_102f44d4;
  /* 102f44c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102f44cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f44cd jmp dword ptr [eax*4 + 0x102f44d8] */
  switch (EAX) {
    case 1: goto L_102f44e8;
    case 2: goto L_102f4508;
    case 3: goto L_102f4530;
    default: x86_unimpl("switch@0x102f44cd out of table"); return;
  }
L_102f44d4:;
  /* 102f44d4 jmp dword ptr [ecx*4 + 0x102f45d0] */
  switch (ECX) {
    case 0: goto L_102f45e0;
    case 1: goto L_102f45e8;
    case 2: goto L_102f45f8;
    case 3: goto L_102f460c;
    default: x86_unimpl("switch@0x102f44d4 out of table"); return;
  }
  /* 102f44db nop  */
  /* nop */
L_102f44e8:;
  /* 102f44e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f44eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f44ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f44f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102f44f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f44f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f44f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f44f8 jb 0x102f44b0 */
  if (C.cf) goto L_102f44b0;
  /* 102f44fa std  */
  C.df=1;
  /* 102f44fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f44fd cld  */
  C.df=0;
  /* 102f44fe jmp dword ptr [edx*4 + 0x102f45d0] */
  switch (EDX) {
    case 0: goto L_102f45e0;
    case 1: goto L_102f45e8;
    case 2: goto L_102f45f8;
    case 3: goto L_102f460c;
    default: x86_unimpl("switch@0x102f44fe out of table"); return;
  }
  /* 102f4505 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f4508:;
  /* 102f4508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f450b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f450d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f4510 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f4513 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4516 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4519 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f451c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f451f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4522 jb 0x102f44b0 */
  if (C.cf) goto L_102f44b0;
  /* 102f4524 std  */
  C.df=1;
  /* 102f4525 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4527 cld  */
  C.df=0;
  /* 102f4528 jmp dword ptr [edx*4 + 0x102f45d0] */
  switch (EDX) {
    case 0: goto L_102f45e0;
    case 1: goto L_102f45e8;
    case 2: goto L_102f45f8;
    case 3: goto L_102f460c;
    default: x86_unimpl("switch@0x102f4528 out of table"); return;
  }
  /* 102f452f nop  */
  /* nop */
L_102f4530:;
  /* 102f4530 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f4533 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4535 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f4538 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f453b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f453e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4541 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4544 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f4547 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f454a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f454d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4550 jb 0x102f44b0 */
  if (C.cf) goto L_102f44b0;
  /* 102f4556 std  */
  C.df=1;
  /* 102f4557 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4559 cld  */
  C.df=0;
  /* 102f455a jmp dword ptr [edx*4 + 0x102f45d0] */
  switch (EDX) {
    case 0: goto L_102f45e0;
    case 1: goto L_102f45e8;
    case 2: goto L_102f45f8;
    case 3: goto L_102f460c;
    default: x86_unimpl("switch@0x102f455a out of table"); return;
  }
  /* 102f4561 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102f4564 test byte ptr [ebp + 0x2f], al */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x2f)))&(AL); fl_logic(_r,8); }
  /* 102f4567 adc byte ptr [ebp + eax*2 + 0x4594102f], cl */
  { uint32_t _a=(r8((uint32_t)(EBP + EAX*2 + 0x4594102f))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EAX*2 + 0x4594102f), (_r)); fl_add(_a,_b,_r,8); }
  /* 102f456e das  */
  x86_unimpl("das @ 0x102f456e");
  /* 102f456f adc byte ptr [ebp + eax*2 + 0x45a4102f], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + EAX*2 + 0x45a4102f))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EAX*2 + 0x45a4102f), (_r)); fl_add(_a,_b,_r,8); }
  /* 102f4576 das  */
  x86_unimpl("das @ 0x102f4576");
  /* 102f4577 adc byte ptr [ebp + eax*2 + 0x45b4102f], ch */
  { uint32_t _a=(r8((uint32_t)(EBP + EAX*2 + 0x45b4102f))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EAX*2 + 0x45b4102f), (_r)); fl_add(_a,_b,_r,8); }
  /* 102f457e das  */
  x86_unimpl("das @ 0x102f457e");
  /* 102f4584 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102f4588 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102f458c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102f4590 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102f4594 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102f4598 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102f459c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102f45a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102f45a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102f45a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102f45ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102f45b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102f45b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102f45b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102f45bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102f45c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f45c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102f45c7:;
  /* 102f45c7 jmp dword ptr [edx*4 + 0x102f45d0] */
  switch (EDX) {
    case 0: goto L_102f45e0;
    case 1: goto L_102f45e8;
    case 2: goto L_102f45f8;
    case 3: goto L_102f460c;
    default: x86_unimpl("switch@0x102f45c7 out of table"); return;
  }
  /* 102f45ce mov edi, edi */
  EDI = (EDI);
L_102f45e0:;
  /* 102f45e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f45e3 pop esi */
  ESI = (pop32());
  /* 102f45e4 pop edi */
  EDI = (pop32());
  /* 102f45e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f45e6 ret  */
  ESPCHK(0x102f42f0u, _esp0);
  ESP += 4; return;
  /* 102f45e7 nop  */
  /* nop */
L_102f45e8:;
  /* 102f45e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f45eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f45ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f45f1 pop esi */
  ESI = (pop32());
  /* 102f45f2 pop edi */
  EDI = (pop32());
  /* 102f45f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f45f4 ret  */
  ESPCHK(0x102f42f0u, _esp0);
  ESP += 4; return;
  /* 102f45f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f45f8:;
  /* 102f45f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f45fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f45fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f4601 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4607 pop esi */
  ESI = (pop32());
  /* 102f4608 pop edi */
  EDI = (pop32());
  /* 102f4609 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f460a ret  */
  ESPCHK(0x102f42f0u, _esp0);
  ESP += 4; return;
  /* 102f460b nop  */
  /* nop */
L_102f460c:;
  /* 102f460c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f460f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f4612 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f4615 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4618 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f461b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f461e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4621 pop esi */
  ESI = (pop32());
  /* 102f4622 pop edi */
  EDI = (pop32());
  /* 102f4623 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4624 ret  */
  ESPCHK(0x102f42f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x102f4630 (123 bytes, 44 insns) */
void f_102f4630(void) {
  FTRACE(0x102f4630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4630 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f4634 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102f463a je 0x102f4650 */
  if (C.zf) goto L_102f4650;
L_102f463c:;
  /* 102f463c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 102f463e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f463f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f4641 je 0x102f4683 */
  if (C.zf) goto L_102f4683;
  /* 102f4643 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 102f4649 jne 0x102f463c */
  if (!C.zf) goto L_102f463c;
  /* 102f464b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102f4650:;
  /* 102f4650 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102f4652 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102f4657 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4659 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f465c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102f465e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4661 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102f4666 je 0x102f4650 */
  if (C.zf) goto L_102f4650;
  /* 102f4668 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102f466b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f466d je 0x102f46a1 */
  if (C.zf) goto L_102f46a1;
  /* 102f466f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102f4671 je 0x102f4697 */
  if (C.zf) goto L_102f4697;
  /* 102f4673 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102f4678 je 0x102f468d */
  if (C.zf) goto L_102f468d;
  /* 102f467a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102f467f je 0x102f4683 */
  if (C.zf) goto L_102f4683;
  /* 102f4681 jmp 0x102f4650 */
  goto L_102f4650;
L_102f4683:;
  /* 102f4683 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 102f4686 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f468a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f468c ret  */
  ESPCHK(0x102f4630u, _esp0);
  ESP += 4; return;
L_102f468d:;
  /* 102f468d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 102f4690 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f4694 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4696 ret  */
  ESPCHK(0x102f4630u, _esp0);
  ESP += 4; return;
L_102f4697:;
  /* 102f4697 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 102f469a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f469e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f46a0 ret  */
  ESPCHK(0x102f4630u, _esp0);
  ESP += 4; return;
L_102f46a1:;
  /* 102f46a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 102f46a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f46a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f46aa ret  */
  ESPCHK(0x102f4630u, _esp0);
  ESP += 4; return;
}

/* FUN_100046b4 @ 0x102f46b4 (41 bytes, 12 insns) */
void f_102f46b4(void) {
  FTRACE(0x102f46b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f46b4 push esi */
  push32((uint32_t)(ESI));
  /* 102f46b5 mov esi, dword ptr [0x102f803c] */
  ESI = (r32((uint32_t)(0x102f803c)));
  /* 102f46bb push dword ptr [0x102f95f4] */
  push32((uint32_t)(r32((uint32_t)(0x102f95f4))));
  /* 102f46c1 call esi */
  call_ind((uint32_t)(ESI), 0x102f46c3u);
  /* 102f46c3 push dword ptr [0x102f95e4] */
  push32((uint32_t)(r32((uint32_t)(0x102f95e4))));
  /* 102f46c9 call esi */
  call_ind((uint32_t)(ESI), 0x102f46cbu);
  /* 102f46cb push dword ptr [0x102f95d4] */
  push32((uint32_t)(r32((uint32_t)(0x102f95d4))));
  /* 102f46d1 call esi */
  call_ind((uint32_t)(ESI), 0x102f46d3u);
  /* 102f46d3 push dword ptr [0x102f95b4] */
  push32((uint32_t)(r32((uint32_t)(0x102f95b4))));
  /* 102f46d9 call esi */
  call_ind((uint32_t)(ESI), 0x102f46dbu);
  /* 102f46db pop esi */
  ESI = (pop32());
  /* 102f46dc ret  */
  ESPCHK(0x102f46b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100046dd @ 0x102f46dd (108 bytes, 34 insns) */
void f_102f46dd(void) {
  FTRACE(0x102f46ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f46dd push esi */
  push32((uint32_t)(ESI));
  /* 102f46de push edi */
  push32((uint32_t)(EDI));
  /* 102f46df mov edi, dword ptr [0x102f8090] */
  EDI = (r32((uint32_t)(0x102f8090)));
  /* 102f46e5 mov esi, 0x102f95b0 */
  ESI = (0x102f95b0u);
L_102f46ea:;
  /* 102f46ea mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102f46ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f46ee je 0x102f471b */
  if (C.zf) goto L_102f471b;
  /* 102f46f0 cmp esi, 0x102f95f4 */
  { uint32_t _a=(ESI),_b=(0x102f95f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f46f6 je 0x102f471b */
  if (C.zf) goto L_102f471b;
  /* 102f46f8 cmp esi, 0x102f95e4 */
  { uint32_t _a=(ESI),_b=(0x102f95e4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f46fe je 0x102f471b */
  if (C.zf) goto L_102f471b;
  /* 102f4700 cmp esi, 0x102f95d4 */
  { uint32_t _a=(ESI),_b=(0x102f95d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4706 je 0x102f471b */
  if (C.zf) goto L_102f471b;
  /* 102f4708 cmp esi, 0x102f95b4 */
  { uint32_t _a=(ESI),_b=(0x102f95b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f470e je 0x102f471b */
  if (C.zf) goto L_102f471b;
  /* 102f4710 push eax */
  push32((uint32_t)(EAX));
  /* 102f4711 call edi */
  call_ind((uint32_t)(EDI), 0x102f4713u);
  /* 102f4713 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f4715 call 0x102f484c */
  push32(0x102f471au); f_102f484c();
  /* 102f471a pop ecx */
  ECX = (pop32());
L_102f471b:;
  /* 102f471b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f471e cmp esi, 0x102f9670 */
  { uint32_t _a=(ESI),_b=(0x102f9670u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4724 jl 0x102f46ea */
  if ((C.sf!=C.of)) goto L_102f46ea;
  /* 102f4726 push dword ptr [0x102f95d4] */
  push32((uint32_t)(r32((uint32_t)(0x102f95d4))));
  /* 102f472c call edi */
  call_ind((uint32_t)(EDI), 0x102f472eu);
  /* 102f472e push dword ptr [0x102f95e4] */
  push32((uint32_t)(r32((uint32_t)(0x102f95e4))));
  /* 102f4734 call edi */
  call_ind((uint32_t)(EDI), 0x102f4736u);
  /* 102f4736 push dword ptr [0x102f95f4] */
  push32((uint32_t)(r32((uint32_t)(0x102f95f4))));
  /* 102f473c call edi */
  call_ind((uint32_t)(EDI), 0x102f473eu);
  /* 102f473e push dword ptr [0x102f95b4] */
  push32((uint32_t)(r32((uint32_t)(0x102f95b4))));
  /* 102f4744 call edi */
  call_ind((uint32_t)(EDI), 0x102f4746u);
  /* 102f4746 pop edi */
  EDI = (pop32());
  /* 102f4747 pop esi */
  ESI = (pop32());
  /* 102f4748 ret  */
  ESPCHK(0x102f46ddu, _esp0);
  ESP += 4; return;
}

/* FUN_10004749 @ 0x102f4749 (97 bytes, 37 insns) */
void f_102f4749(void) {
  FTRACE(0x102f4749u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4749 push ebp */
  push32((uint32_t)(EBP));
  /* 102f474a mov ebp, esp */
  EBP = (ESP);
  /* 102f474c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f474f push esi */
  push32((uint32_t)(ESI));
  /* 102f4750 cmp dword ptr [eax*4 + 0x102f95b0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x102f95b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4758 lea esi, [eax*4 + 0x102f95b0] */
  ESI = ((uint32_t)(EAX*4 + 0x102f95b0));
  /* 102f475f jne 0x102f479f */
  if (!C.zf) goto L_102f479f;
  /* 102f4761 push edi */
  push32((uint32_t)(EDI));
  /* 102f4762 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102f4764 call 0x102f4894 */
  push32(0x102f4769u); f_102f4894();
  /* 102f4769 mov edi, eax */
  EDI = (EAX);
  /* 102f476b pop ecx */
  ECX = (pop32());
  /* 102f476c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f476e jne 0x102f4778 */
  if (!C.zf) goto L_102f4778;
  /* 102f4770 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102f4772 call 0x102f2976 */
  push32(0x102f4777u); f_102f2976();
  /* 102f4777 pop ecx */
  ECX = (pop32());
L_102f4778:;
  /* 102f4778 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102f477a call 0x102f4749 */
  push32(0x102f477fu); f_102f4749();
  /* 102f477f cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4782 pop ecx */
  ECX = (pop32());
  /* 102f4783 push edi */
  push32((uint32_t)(EDI));
  /* 102f4784 jne 0x102f4790 */
  if (!C.zf) goto L_102f4790;
  /* 102f4786 call dword ptr [0x102f803c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f803c))), 0x102f478cu);
  /* 102f478c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102f478e jmp 0x102f4796 */
  goto L_102f4796;
L_102f4790:;
  /* 102f4790 call 0x102f484c */
  push32(0x102f4795u); f_102f484c();
  /* 102f4795 pop ecx */
  ECX = (pop32());
L_102f4796:;
  /* 102f4796 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102f4798 call 0x102f47aa */
  push32(0x102f479du); f_102f47aa();
  /* 102f479d pop ecx */
  ECX = (pop32());
  /* 102f479e pop edi */
  EDI = (pop32());
L_102f479f:;
  /* 102f479f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f47a1 call dword ptr [0x102f8038] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8038))), 0x102f47a7u);
  /* 102f47a7 pop esi */
  ESI = (pop32());
  /* 102f47a8 pop ebp */
  EBP = (pop32());
  /* 102f47a9 ret  */
  ESPCHK(0x102f4749u, _esp0);
  ESP += 4; return;
}

/* FUN_100047aa @ 0x102f47aa (21 bytes, 7 insns) */
void f_102f47aa(void) {
  FTRACE(0x102f47aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f47aa push ebp */
  push32((uint32_t)(EBP));
  /* 102f47ab mov ebp, esp */
  EBP = (ESP);
  /* 102f47ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f47b0 push dword ptr [eax*4 + 0x102f95b0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x102f95b0))));
  /* 102f47b7 call dword ptr [0x102f8040] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8040))), 0x102f47bdu);
  /* 102f47bd pop ebp */
  EBP = (pop32());
  /* 102f47be ret  */
  ESPCHK(0x102f47aau, _esp0);
  ESP += 4; return;
}

/* FUN_100047bf @ 0x102f47bf (141 bytes, 56 insns) */
void f_102f47bf(void) {
  FTRACE(0x102f47bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f47bf push ebx */
  push32((uint32_t)(EBX));
  /* 102f47c0 push esi */
  push32((uint32_t)(ESI));
  /* 102f47c1 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 102f47c5 push edi */
  push32((uint32_t)(EDI));
  /* 102f47c6 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f47cb cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f47ce mov ebx, esi */
  EBX = (ESI);
  /* 102f47d0 ja 0x102f47df */
  if ((!C.cf&&!C.zf)) goto L_102f47df;
  /* 102f47d2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f47d4 jne 0x102f47d9 */
  if (!C.zf) goto L_102f47d9;
  /* 102f47d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f47d8 pop esi */
  ESI = (pop32());
L_102f47d9:;
  /* 102f47d9 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f47dc and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_102f47df:;
  /* 102f47df xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102f47e1 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f47e4 ja 0x102f4820 */
  if ((!C.cf&&!C.zf)) goto L_102f4820;
  /* 102f47e6 cmp ebx, dword ptr [0x102f97f0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102f97f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f47ec ja 0x102f480b */
  if ((!C.cf&&!C.zf)) goto L_102f480b;
  /* 102f47ee push 9 */
  push32((uint32_t)(0x9u));
  /* 102f47f0 call 0x102f4749 */
  push32(0x102f47f5u); f_102f4749();
  /* 102f47f5 push ebx */
  push32((uint32_t)(EBX));
  /* 102f47f6 call 0x102f53e9 */
  push32(0x102f47fbu); f_102f53e9();
  /* 102f47fb push 9 */
  push32((uint32_t)(0x9u));
  /* 102f47fd mov edi, eax */
  EDI = (EAX);
  /* 102f47ff call 0x102f47aa */
  push32(0x102f4804u); f_102f47aa();
  /* 102f4804 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4807 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f4809 jne 0x102f4836 */
  if (!C.zf) goto L_102f4836;
L_102f480b:;
  /* 102f480b push esi */
  push32((uint32_t)(ESI));
  /* 102f480c push 8 */
  push32((uint32_t)(0x8u));
  /* 102f480e push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f4814 call dword ptr [0x102f8034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8034))), 0x102f481au);
  /* 102f481a mov edi, eax */
  EDI = (EAX);
  /* 102f481c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f481e jne 0x102f4842 */
  if (!C.zf) goto L_102f4842;
L_102f4820:;
  /* 102f4820 cmp dword ptr [0x102fa3cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102fa3cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4827 je 0x102f4842 */
  if (C.zf) goto L_102f4842;
  /* 102f4829 push esi */
  push32((uint32_t)(ESI));
  /* 102f482a call 0x102f66cb */
  push32(0x102f482fu); f_102f66cb();
  /* 102f482f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f4831 pop ecx */
  ECX = (pop32());
  /* 102f4832 je 0x102f4848 */
  if (C.zf) goto L_102f4848;
  /* 102f4834 jmp 0x102f47df */
  goto L_102f47df;
L_102f4836:;
  /* 102f4836 push ebx */
  push32((uint32_t)(EBX));
  /* 102f4837 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f4839 push edi */
  push32((uint32_t)(EDI));
  /* 102f483a call 0x102f4290 */
  push32(0x102f483fu); f_102f4290();
  /* 102f483f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f4842:;
  /* 102f4842 mov eax, edi */
  EAX = (EDI);
L_102f4844:;
  /* 102f4844 pop edi */
  EDI = (pop32());
  /* 102f4845 pop esi */
  ESI = (pop32());
  /* 102f4846 pop ebx */
  EBX = (pop32());
  /* 102f4847 ret  */
  ESPCHK(0x102f47bfu, _esp0);
  ESP += 4; return;
L_102f4848:;
  /* 102f4848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f484a jmp 0x102f4844 */
  goto L_102f4844;
}

/* FUN_1000484c @ 0x102f484c (72 bytes, 29 insns) */
void f_102f484c(void) {
  FTRACE(0x102f484cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f484c push esi */
  push32((uint32_t)(ESI));
  /* 102f484d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102f4851 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f4853 je 0x102f4892 */
  if (C.zf) goto L_102f4892;
  /* 102f4855 push 9 */
  push32((uint32_t)(0x9u));
  /* 102f4857 call 0x102f4749 */
  push32(0x102f485cu); f_102f4749();
  /* 102f485c push esi */
  push32((uint32_t)(ESI));
  /* 102f485d call 0x102f5093 */
  push32(0x102f4862u); f_102f5093();
  /* 102f4862 pop ecx */
  ECX = (pop32());
  /* 102f4863 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f4865 pop ecx */
  ECX = (pop32());
  /* 102f4866 je 0x102f487b */
  if (C.zf) goto L_102f487b;
  /* 102f4868 push esi */
  push32((uint32_t)(ESI));
  /* 102f4869 push eax */
  push32((uint32_t)(EAX));
  /* 102f486a call 0x102f50be */
  push32(0x102f486fu); f_102f50be();
  /* 102f486f push 9 */
  push32((uint32_t)(0x9u));
  /* 102f4871 call 0x102f47aa */
  push32(0x102f4876u); f_102f47aa();
  /* 102f4876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4879 pop esi */
  ESI = (pop32());
  /* 102f487a ret  */
  ESPCHK(0x102f484cu, _esp0);
  ESP += 4; return;
L_102f487b:;
  /* 102f487b push 9 */
  push32((uint32_t)(0x9u));
  /* 102f487d call 0x102f47aa */
  push32(0x102f4882u); f_102f47aa();
  /* 102f4882 pop ecx */
  ECX = (pop32());
  /* 102f4883 push esi */
  push32((uint32_t)(ESI));
  /* 102f4884 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f4886 push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f488c call dword ptr [0x102f80b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80b4))), 0x102f4892u);
L_102f4892:;
  /* 102f4892 pop esi */
  ESI = (pop32());
  /* 102f4893 ret  */
  ESPCHK(0x102f484cu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x102f4894 (18 bytes, 6 insns) */
void f_102f4894(void) {
  FTRACE(0x102f4894u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4894 push dword ptr [0x102fa3cc] */
  push32((uint32_t)(r32((uint32_t)(0x102fa3cc))));
  /* 102f489a push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 102f489e call 0x102f48a6 */
  push32(0x102f48a3u); f_102f48a6();
  /* 102f48a3 pop ecx */
  ECX = (pop32());
  /* 102f48a4 pop ecx */
  ECX = (pop32());
  /* 102f48a5 ret  */
  ESPCHK(0x102f4894u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x102f48a6 (44 bytes, 16 insns) */
void f_102f48a6(void) {
  FTRACE(0x102f48a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f48a6 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f48ab ja 0x102f48cf */
  if ((!C.cf&&!C.zf)) goto L_102f48cf;
L_102f48ad:;
  /* 102f48ad push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102f48b1 call 0x102f48d2 */
  push32(0x102f48b6u); f_102f48d2();
  /* 102f48b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f48b8 pop ecx */
  ECX = (pop32());
  /* 102f48b9 jne 0x102f48d1 */
  if (!C.zf) goto L_102f48d1;
  /* 102f48bb cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f48bf je 0x102f48d1 */
  if (C.zf) goto L_102f48d1;
  /* 102f48c1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102f48c5 call 0x102f66cb */
  push32(0x102f48cau); f_102f66cb();
  /* 102f48ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f48cc pop ecx */
  ECX = (pop32());
  /* 102f48cd jne 0x102f48ad */
  if (!C.zf) goto L_102f48ad;
L_102f48cf:;
  /* 102f48cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102f48d1:;
  /* 102f48d1 ret  */
  ESPCHK(0x102f48a6u, _esp0);
  ESP += 4; return;
}

/* FUN_100048d2 @ 0x102f48d2 (78 bytes, 30 insns) */
void f_102f48d2(void) {
  FTRACE(0x102f48d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f48d2 push esi */
  push32((uint32_t)(ESI));
  /* 102f48d3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102f48d7 cmp esi, dword ptr [0x102f97f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x102f97f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f48dd push edi */
  push32((uint32_t)(EDI));
  /* 102f48de ja 0x102f4901 */
  if ((!C.cf&&!C.zf)) goto L_102f4901;
  /* 102f48e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 102f48e2 call 0x102f4749 */
  push32(0x102f48e7u); f_102f4749();
  /* 102f48e7 push esi */
  push32((uint32_t)(ESI));
  /* 102f48e8 call 0x102f53e9 */
  push32(0x102f48edu); f_102f53e9();
  /* 102f48ed push 9 */
  push32((uint32_t)(0x9u));
  /* 102f48ef mov edi, eax */
  EDI = (EAX);
  /* 102f48f1 call 0x102f47aa */
  push32(0x102f48f6u); f_102f47aa();
  /* 102f48f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f48f9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f48fb je 0x102f4901 */
  if (C.zf) goto L_102f4901;
  /* 102f48fd mov eax, edi */
  EAX = (EDI);
  /* 102f48ff jmp 0x102f491d */
  goto L_102f491d;
L_102f4901:;
  /* 102f4901 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f4903 jne 0x102f4908 */
  if (!C.zf) goto L_102f4908;
  /* 102f4905 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f4907 pop esi */
  ESI = (pop32());
L_102f4908:;
  /* 102f4908 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f490b and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 102f490e push esi */
  push32((uint32_t)(ESI));
  /* 102f490f push 0 */
  push32((uint32_t)(0x0u));
  /* 102f4911 push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f4917 call dword ptr [0x102f8034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8034))), 0x102f491du);
L_102f491d:;
  /* 102f491d pop edi */
  EDI = (pop32());
  /* 102f491e pop esi */
  ESI = (pop32());
  /* 102f491f ret  */
  ESPCHK(0x102f48d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004920 @ 0x102f4920 (429 bytes, 143 insns) */
void f_102f4920(void) {
  FTRACE(0x102f4920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4920 push ebp */
  push32((uint32_t)(EBP));
  /* 102f4921 mov ebp, esp */
  EBP = (ESP);
  /* 102f4923 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4926 push ebx */
  push32((uint32_t)(EBX));
  /* 102f4927 push esi */
  push32((uint32_t)(ESI));
  /* 102f4928 push edi */
  push32((uint32_t)(EDI));
  /* 102f4929 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102f492b call 0x102f4749 */
  push32(0x102f4930u); f_102f4749();
  /* 102f4930 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f4933 call 0x102f4acd */
  push32(0x102f4938u); f_102f4acd();
  /* 102f4938 mov ebx, eax */
  EBX = (EAX);
  /* 102f493a pop ecx */
  ECX = (pop32());
  /* 102f493b cmp ebx, dword ptr [0x102fa530] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102fa530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4941 pop ecx */
  ECX = (pop32());
  /* 102f4942 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102f4945 jne 0x102f494e */
  if (!C.zf) goto L_102f494e;
L_102f4947:;
  /* 102f4947 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f4949 jmp 0x102f4abe */
  goto L_102f4abe;
L_102f494e:;
  /* 102f494e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f4950 je 0x102f4aac */
  if (C.zf) goto L_102f4aac;
  /* 102f4956 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4958 mov eax, 0x102f9700 */
  EAX = (0x102f9700u);
L_102f495d:;
  /* 102f495d cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f495f je 0x102f49d5 */
  if (C.zf) goto L_102f49d5;
  /* 102f4961 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4964 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102f4965 cmp eax, 0x102f97f0 */
  { uint32_t _a=(EAX),_b=(0x102f97f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f496a jl 0x102f495d */
  if ((C.sf!=C.of)) goto L_102f495d;
  /* 102f496c lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 102f496f push eax */
  push32((uint32_t)(EAX));
  /* 102f4970 push ebx */
  push32((uint32_t)(EBX));
  /* 102f4971 call dword ptr [0x102f802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f802c))), 0x102f4977u);
  /* 102f4977 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f4979 pop esi */
  ESI = (pop32());
  /* 102f497a cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f497c jne 0x102f4aa3 */
  if (!C.zf) goto L_102f4aa3;
  /* 102f4982 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102f4984 and dword ptr [0x102fa764], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102fa764)))&(0x0u); w32((uint32_t)(0x102fa764), (_r)); fl_logic(_r,32); }
  /* 102f498b pop ecx */
  ECX = (pop32());
  /* 102f498c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f498e mov edi, 0x102fa660 */
  EDI = (0x102fa660u);
  /* 102f4993 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4996 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102f4998 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102f4999 mov dword ptr [0x102fa530], ebx */
  w32((uint32_t)(0x102fa530), (EBX));
  /* 102f499f jbe 0x102f4a90 */
  if ((C.cf||C.zf)) goto L_102f4a90;
  /* 102f49a5 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f49a9 je 0x102f4a6b */
  if (C.zf) goto L_102f4a6b;
  /* 102f49af lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_102f49b2:;
  /* 102f49b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 102f49b4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f49b6 je 0x102f4a6b */
  if (C.zf) goto L_102f4a6b;
  /* 102f49bc movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 102f49c0 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_102f49c3:;
  /* 102f49c3 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f49c5 ja 0x102f4a5f */
  if ((!C.cf&&!C.zf)) goto L_102f4a5f;
  /* 102f49cb or byte ptr [eax + 0x102fa661], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa661)))|(0x4u); w8((uint32_t)(EAX + 0x102fa661), (_r)); fl_logic(_r,8); }
  /* 102f49d2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f49d3 jmp 0x102f49c3 */
  goto L_102f49c3;
L_102f49d5:;
  /* 102f49d5 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f49d9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102f49db pop ecx */
  ECX = (pop32());
  /* 102f49dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f49de mov edi, 0x102fa660 */
  EDI = (0x102fa660u);
  /* 102f49e3 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 102f49e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102f49e8 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102f49eb stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102f49ec lea ebx, [esi + 0x102f9710] */
  EBX = ((uint32_t)(ESI + 0x102f9710));
L_102f49f2:;
  /* 102f49f2 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f49f5 mov ecx, ebx */
  ECX = (EBX);
  /* 102f49f7 je 0x102f4a25 */
  if (C.zf) goto L_102f4a25;
L_102f49f9:;
  /* 102f49f9 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 102f49fc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f49fe je 0x102f4a25 */
  if (C.zf) goto L_102f4a25;
  /* 102f4a00 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 102f4a03 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 102f4a06 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4a08 ja 0x102f4a1e */
  if ((!C.cf&&!C.zf)) goto L_102f4a1e;
  /* 102f4a0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f4a0d mov dl, byte ptr [edx + 0x102f96f8] */
  DL = (r8((uint32_t)(EDX + 0x102f96f8)));
L_102f4a13:;
  /* 102f4a13 or byte ptr [eax + 0x102fa661], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa661)))|(DL); w8((uint32_t)(EAX + 0x102fa661), (_r)); fl_logic(_r,8); }
  /* 102f4a19 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f4a1a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4a1c jbe 0x102f4a13 */
  if ((C.cf||C.zf)) goto L_102f4a13;
L_102f4a1e:;
  /* 102f4a1e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f4a1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f4a20 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f4a23 jne 0x102f49f9 */
  if (!C.zf) goto L_102f49f9;
L_102f4a25:;
  /* 102f4a25 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102f4a28 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4a2b cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4a2f jb 0x102f49f2 */
  if (C.cf) goto L_102f49f2;
  /* 102f4a31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4a34 mov dword ptr [0x102fa54c], 1 */
  w32((uint32_t)(0x102fa54c), (0x1u));
  /* 102f4a3e push eax */
  push32((uint32_t)(EAX));
  /* 102f4a3f mov dword ptr [0x102fa530], eax */
  w32((uint32_t)(0x102fa530), (EAX));
  /* 102f4a44 call 0x102f4b17 */
  push32(0x102f4a49u); f_102f4b17();
  /* 102f4a49 lea esi, [esi + 0x102f9704] */
  ESI = ((uint32_t)(ESI + 0x102f9704));
  /* 102f4a4f mov edi, 0x102fa540 */
  EDI = (0x102fa540u);
  /* 102f4a54 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f4a55 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f4a56 pop ecx */
  ECX = (pop32());
  /* 102f4a57 mov dword ptr [0x102fa764], eax */
  w32((uint32_t)(0x102fa764), (EAX));
  /* 102f4a5c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f4a5d jmp 0x102f4ab1 */
  goto L_102f4ab1;
L_102f4a5f:;
  /* 102f4a5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f4a60 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f4a61 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f4a65 jne 0x102f49b2 */
  if (!C.zf) goto L_102f49b2;
L_102f4a6b:;
  /* 102f4a6b mov eax, esi */
  EAX = (ESI);
L_102f4a6d:;
  /* 102f4a6d or byte ptr [eax + 0x102fa661], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa661)))|(0x8u); w8((uint32_t)(EAX + 0x102fa661), (_r)); fl_logic(_r,8); }
  /* 102f4a74 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f4a75 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4a7a jb 0x102f4a6d */
  if (C.cf) goto L_102f4a6d;
  /* 102f4a7c push ebx */
  push32((uint32_t)(EBX));
  /* 102f4a7d call 0x102f4b17 */
  push32(0x102f4a82u); f_102f4b17();
  /* 102f4a82 pop ecx */
  ECX = (pop32());
  /* 102f4a83 mov dword ptr [0x102fa764], eax */
  w32((uint32_t)(0x102fa764), (EAX));
  /* 102f4a88 mov dword ptr [0x102fa54c], esi */
  w32((uint32_t)(0x102fa54c), (ESI));
  /* 102f4a8e jmp 0x102f4a97 */
  goto L_102f4a97;
L_102f4a90:;
  /* 102f4a90 and dword ptr [0x102fa54c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102fa54c)))&(0x0u); w32((uint32_t)(0x102fa54c), (_r)); fl_logic(_r,32); }
L_102f4a97:;
  /* 102f4a97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f4a99 mov edi, 0x102fa540 */
  EDI = (0x102fa540u);
  /* 102f4a9e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f4a9f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f4aa0 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f4aa1 jmp 0x102f4ab1 */
  goto L_102f4ab1;
L_102f4aa3:;
  /* 102f4aa3 cmp dword ptr [0x102fa370], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102fa370))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4aaa je 0x102f4abb */
  if (C.zf) goto L_102f4abb;
L_102f4aac:;
  /* 102f4aac call 0x102f4b4a */
  push32(0x102f4ab1u); f_102f4b4a();
L_102f4ab1:;
  /* 102f4ab1 call 0x102f4b73 */
  push32(0x102f4ab6u); f_102f4b73();
  /* 102f4ab6 jmp 0x102f4947 */
  goto L_102f4947;
L_102f4abb:;
  /* 102f4abb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_102f4abe:;
  /* 102f4abe push 0x19 */
  push32((uint32_t)(0x19u));
  /* 102f4ac0 call 0x102f47aa */
  push32(0x102f4ac5u); f_102f47aa();
  /* 102f4ac5 pop ecx */
  ECX = (pop32());
  /* 102f4ac6 mov eax, esi */
  EAX = (ESI);
  /* 102f4ac8 pop edi */
  EDI = (pop32());
  /* 102f4ac9 pop esi */
  ESI = (pop32());
  /* 102f4aca pop ebx */
  EBX = (pop32());
  /* 102f4acb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4acc ret  */
  ESPCHK(0x102f4920u, _esp0);
  ESP += 4; return;
}

/* FUN_10004acd @ 0x102f4acd (74 bytes, 15 insns) */
void f_102f4acd(void) {
  FTRACE(0x102f4acdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4acd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f4ad1 and dword ptr [0x102fa370], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102fa370)))&(0x0u); w32((uint32_t)(0x102fa370), (_r)); fl_logic(_r,32); }
  /* 102f4ad8 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4adb jne 0x102f4aed */
  if (!C.zf) goto L_102f4aed;
  /* 102f4add mov dword ptr [0x102fa370], 1 */
  w32((uint32_t)(0x102fa370), (0x1u));
  /* 102f4ae7 jmp dword ptr [0x102f8030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102f8030)))); return;
L_102f4aed:;
  /* 102f4aed cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4af0 jne 0x102f4b02 */
  if (!C.zf) goto L_102f4b02;
  /* 102f4af2 mov dword ptr [0x102fa370], 1 */
  w32((uint32_t)(0x102fa370), (0x1u));
  /* 102f4afc jmp dword ptr [0x102f8028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102f8028)))); return;
L_102f4b02:;
  /* 102f4b02 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4b05 jne 0x102f4b16 */
  if (!C.zf) goto L_102f4b16;
  /* 102f4b07 mov eax, dword ptr [0x102fa3bc] */
  EAX = (r32((uint32_t)(0x102fa3bc)));
  /* 102f4b0c mov dword ptr [0x102fa370], 1 */
  w32((uint32_t)(0x102fa370), (0x1u));
L_102f4b16:;
  /* 102f4b16 ret  */
  ESPCHK(0x102f4acdu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b17 @ 0x102f4b17 (51 bytes, 19 insns) */
void f_102f4b17(void) {
  FTRACE(0x102f4b17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4b17 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f4b1b sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4b20 je 0x102f4b44 */
  if (C.zf) goto L_102f4b44;
  /* 102f4b22 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4b25 je 0x102f4b3e */
  if (C.zf) goto L_102f4b3e;
  /* 102f4b27 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4b2a je 0x102f4b38 */
  if (C.zf) goto L_102f4b38;
  /* 102f4b2c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f4b2d je 0x102f4b32 */
  if (C.zf) goto L_102f4b32;
  /* 102f4b2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f4b31 ret  */
  ESPCHK(0x102f4b17u, _esp0);
  ESP += 4; return;
L_102f4b32:;
  /* 102f4b32 mov eax, 0x404 */
  EAX = (0x404u);
  /* 102f4b37 ret  */
  ESPCHK(0x102f4b17u, _esp0);
  ESP += 4; return;
L_102f4b38:;
  /* 102f4b38 mov eax, 0x412 */
  EAX = (0x412u);
  /* 102f4b3d ret  */
  ESPCHK(0x102f4b17u, _esp0);
  ESP += 4; return;
L_102f4b3e:;
  /* 102f4b3e mov eax, 0x804 */
  EAX = (0x804u);
  /* 102f4b43 ret  */
  ESPCHK(0x102f4b17u, _esp0);
  ESP += 4; return;
L_102f4b44:;
  /* 102f4b44 mov eax, 0x411 */
  EAX = (0x411u);
  /* 102f4b49 ret  */
  ESPCHK(0x102f4b17u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b4a @ 0x102f4b4a (41 bytes, 17 insns) */
void f_102f4b4a(void) {
  FTRACE(0x102f4b4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4b4a push edi */
  push32((uint32_t)(EDI));
  /* 102f4b4b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 102f4b4d pop ecx */
  ECX = (pop32());
  /* 102f4b4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f4b50 mov edi, 0x102fa660 */
  EDI = (0x102fa660u);
  /* 102f4b55 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102f4b57 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 102f4b58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f4b5a mov edi, 0x102fa540 */
  EDI = (0x102fa540u);
  /* 102f4b5f mov dword ptr [0x102fa530], eax */
  w32((uint32_t)(0x102fa530), (EAX));
  /* 102f4b64 mov dword ptr [0x102fa54c], eax */
  w32((uint32_t)(0x102fa54c), (EAX));
  /* 102f4b69 mov dword ptr [0x102fa764], eax */
  w32((uint32_t)(0x102fa764), (EAX));
  /* 102f4b6e stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f4b6f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f4b70 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 102f4b71 pop edi */
  EDI = (pop32());
  /* 102f4b72 ret  */
  ESPCHK(0x102f4b4au, _esp0);
  ESP += 4; return;
}

/* FUN_10004b73 @ 0x102f4b73 (389 bytes, 124 insns) */
void f_102f4b73(void) {
  FTRACE(0x102f4b73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4b73 push ebp */
  push32((uint32_t)(EBP));
  /* 102f4b74 mov ebp, esp */
  EBP = (ESP);
  /* 102f4b76 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4b7c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 102f4b7f push esi */
  push32((uint32_t)(ESI));
  /* 102f4b80 push eax */
  push32((uint32_t)(EAX));
  /* 102f4b81 push dword ptr [0x102fa530] */
  push32((uint32_t)(r32((uint32_t)(0x102fa530))));
  /* 102f4b87 call dword ptr [0x102f802c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f802c))), 0x102f4b8du);
  /* 102f4b8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4b90 jne 0x102f4cac */
  if (!C.zf) goto L_102f4cac;
  /* 102f4b96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f4b98 mov esi, 0x100 */
  ESI = (0x100u);
L_102f4b9d:;
  /* 102f4b9d mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 102f4ba4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f4ba5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4ba7 jb 0x102f4b9d */
  if (C.cf) goto L_102f4b9d;
  /* 102f4ba9 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 102f4bac mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 102f4bb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f4bb5 je 0x102f4bee */
  if (C.zf) goto L_102f4bee;
  /* 102f4bb7 push ebx */
  push32((uint32_t)(EBX));
  /* 102f4bb8 push edi */
  push32((uint32_t)(EDI));
  /* 102f4bb9 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_102f4bbc:;
  /* 102f4bbc movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 102f4bbf movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 102f4bc2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4bc4 ja 0x102f4be3 */
  if ((!C.cf&&!C.zf)) goto L_102f4be3;
  /* 102f4bc6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4bc8 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 102f4bcf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f4bd0 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 102f4bd5 mov ebx, ecx */
  EBX = (ECX);
  /* 102f4bd7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4bda rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102f4bdc mov ecx, ebx */
  ECX = (EBX);
  /* 102f4bde and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102f4be1 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_102f4be3:;
  /* 102f4be3 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102f4be4 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102f4be5 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 102f4be8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f4bea jne 0x102f4bbc */
  if (!C.zf) goto L_102f4bbc;
  /* 102f4bec pop edi */
  EDI = (pop32());
  /* 102f4bed pop ebx */
  EBX = (pop32());
L_102f4bee:;
  /* 102f4bee push 0 */
  push32((uint32_t)(0x0u));
  /* 102f4bf0 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 102f4bf6 push dword ptr [0x102fa764] */
  push32((uint32_t)(r32((uint32_t)(0x102fa764))));
  /* 102f4bfc push dword ptr [0x102fa530] */
  push32((uint32_t)(r32((uint32_t)(0x102fa530))));
  /* 102f4c02 push eax */
  push32((uint32_t)(EAX));
  /* 102f4c03 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102f4c09 push esi */
  push32((uint32_t)(ESI));
  /* 102f4c0a push eax */
  push32((uint32_t)(EAX));
  /* 102f4c0b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f4c0d call 0x102f5a2e */
  push32(0x102f4c12u); f_102f5a2e();
  /* 102f4c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f4c14 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 102f4c1a push dword ptr [0x102fa530] */
  push32((uint32_t)(r32((uint32_t)(0x102fa530))));
  /* 102f4c20 push esi */
  push32((uint32_t)(ESI));
  /* 102f4c21 push eax */
  push32((uint32_t)(EAX));
  /* 102f4c22 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102f4c28 push esi */
  push32((uint32_t)(ESI));
  /* 102f4c29 push eax */
  push32((uint32_t)(EAX));
  /* 102f4c2a push esi */
  push32((uint32_t)(ESI));
  /* 102f4c2b push dword ptr [0x102fa764] */
  push32((uint32_t)(r32((uint32_t)(0x102fa764))));
  /* 102f4c31 call 0x102f5b77 */
  push32(0x102f4c36u); f_102f5b77();
  /* 102f4c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f4c38 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 102f4c3e push dword ptr [0x102fa530] */
  push32((uint32_t)(r32((uint32_t)(0x102fa530))));
  /* 102f4c44 push esi */
  push32((uint32_t)(ESI));
  /* 102f4c45 push eax */
  push32((uint32_t)(EAX));
  /* 102f4c46 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 102f4c4c push esi */
  push32((uint32_t)(ESI));
  /* 102f4c4d push eax */
  push32((uint32_t)(EAX));
  /* 102f4c4e push 0x200 */
  push32((uint32_t)(0x200u));
  /* 102f4c53 push dword ptr [0x102fa764] */
  push32((uint32_t)(r32((uint32_t)(0x102fa764))));
  /* 102f4c59 call 0x102f5b77 */
  push32(0x102f4c5eu); f_102f5b77();
  /* 102f4c5e add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4c61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f4c63 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_102f4c69:;
  /* 102f4c69 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 102f4c6c test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 102f4c6f je 0x102f4c87 */
  if (C.zf) goto L_102f4c87;
  /* 102f4c71 or byte ptr [eax + 0x102fa661], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa661)))|(0x10u); w8((uint32_t)(EAX + 0x102fa661), (_r)); fl_logic(_r,8); }
  /* 102f4c78 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_102f4c7f:;
  /* 102f4c7f mov byte ptr [eax + 0x102fa560], dl */
  w8((uint32_t)(EAX + 0x102fa560), (DL));
  /* 102f4c85 jmp 0x102f4ca3 */
  goto L_102f4ca3;
L_102f4c87:;
  /* 102f4c87 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 102f4c8a je 0x102f4c9c */
  if (C.zf) goto L_102f4c9c;
  /* 102f4c8c or byte ptr [eax + 0x102fa661], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa661)))|(0x20u); w8((uint32_t)(EAX + 0x102fa661), (_r)); fl_logic(_r,8); }
  /* 102f4c93 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 102f4c9a jmp 0x102f4c7f */
  goto L_102f4c7f;
L_102f4c9c:;
  /* 102f4c9c and byte ptr [eax + 0x102fa560], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa560)))&(0x0u); w8((uint32_t)(EAX + 0x102fa560), (_r)); fl_logic(_r,8); }
L_102f4ca3:;
  /* 102f4ca3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f4ca4 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f4ca5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f4ca6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4ca8 jb 0x102f4c69 */
  if (C.cf) goto L_102f4c69;
  /* 102f4caa jmp 0x102f4cf5 */
  goto L_102f4cf5;
L_102f4cac:;
  /* 102f4cac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f4cae mov esi, 0x100 */
  ESI = (0x100u);
L_102f4cb3:;
  /* 102f4cb3 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4cb6 jb 0x102f4cd1 */
  if (C.cf) goto L_102f4cd1;
  /* 102f4cb8 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4cbb ja 0x102f4cd1 */
  if ((!C.cf&&!C.zf)) goto L_102f4cd1;
  /* 102f4cbd or byte ptr [eax + 0x102fa661], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa661)))|(0x10u); w8((uint32_t)(EAX + 0x102fa661), (_r)); fl_logic(_r,8); }
  /* 102f4cc4 mov cl, al */
  CL = (AL);
  /* 102f4cc6 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_102f4cc9:;
  /* 102f4cc9 mov byte ptr [eax + 0x102fa560], cl */
  w8((uint32_t)(EAX + 0x102fa560), (CL));
  /* 102f4ccf jmp 0x102f4cf0 */
  goto L_102f4cf0;
L_102f4cd1:;
  /* 102f4cd1 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4cd4 jb 0x102f4ce9 */
  if (C.cf) goto L_102f4ce9;
  /* 102f4cd6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4cd9 ja 0x102f4ce9 */
  if ((!C.cf&&!C.zf)) goto L_102f4ce9;
  /* 102f4cdb or byte ptr [eax + 0x102fa661], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa661)))|(0x20u); w8((uint32_t)(EAX + 0x102fa661), (_r)); fl_logic(_r,8); }
  /* 102f4ce2 mov cl, al */
  CL = (AL);
  /* 102f4ce4 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f4ce7 jmp 0x102f4cc9 */
  goto L_102f4cc9;
L_102f4ce9:;
  /* 102f4ce9 and byte ptr [eax + 0x102fa560], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x102fa560)))&(0x0u); w8((uint32_t)(EAX + 0x102fa560), (_r)); fl_logic(_r,8); }
L_102f4cf0:;
  /* 102f4cf0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f4cf1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4cf3 jb 0x102f4cb3 */
  if (C.cf) goto L_102f4cb3;
L_102f4cf5:;
  /* 102f4cf5 pop esi */
  ESI = (pop32());
  /* 102f4cf6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4cf7 ret  */
  ESPCHK(0x102f4b73u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cf8 @ 0x102f4cf8 (28 bytes, 7 insns) */
void f_102f4cf8(void) {
  FTRACE(0x102f4cf8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4cf8 cmp dword ptr [0x102fa888], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102fa888))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4cff jne 0x102f4d13 */
  if (!C.zf) goto L_102f4d13;
  /* 102f4d01 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 102f4d03 call 0x102f4920 */
  push32(0x102f4d08u); f_102f4920();
  /* 102f4d08 pop ecx */
  ECX = (pop32());
  /* 102f4d09 mov dword ptr [0x102fa888], 1 */
  w32((uint32_t)(0x102fa888), (0x1u));
L_102f4d13:;
  /* 102f4d13 ret  */
  ESPCHK(0x102f4cf8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x102f4d20 (664 bytes, 267 insns) [15 switch table(s)] */
void f_102f4d20(void) {
  FTRACE(0x102f4d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f4d20 push ebp */
  push32((uint32_t)(EBP));
  /* 102f4d21 mov ebp, esp */
  EBP = (ESP);
  /* 102f4d23 push edi */
  push32((uint32_t)(EDI));
  /* 102f4d24 push esi */
  push32((uint32_t)(ESI));
  /* 102f4d25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f4d28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f4d2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4d2e mov eax, ecx */
  EAX = (ECX);
  /* 102f4d30 mov edx, ecx */
  EDX = (ECX);
  /* 102f4d32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4d34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4d36 jbe 0x102f4d40 */
  if ((C.cf||C.zf)) goto L_102f4d40;
  /* 102f4d38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4d3a jb 0x102f4eb8 */
  if (C.cf) goto L_102f4eb8;
L_102f4d40:;
  /* 102f4d40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102f4d46 jne 0x102f4d5c */
  if (!C.zf) goto L_102f4d5c;
  /* 102f4d48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4d4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102f4d4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4d51 jb 0x102f4d7c */
  if (C.cf) goto L_102f4d7c;
  /* 102f4d53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4d55 jmp dword ptr [edx*4 + 0x102f4e68] */
  switch (EDX) {
    case 0: goto L_102f4e78;
    case 1: goto L_102f4e80;
    case 2: goto L_102f4e8c;
    case 3: goto L_102f4ea0;
    default: x86_unimpl("switch@0x102f4d55 out of table"); return;
  }
L_102f4d5c:;
  /* 102f4d5c mov eax, edi */
  EAX = (EDI);
  /* 102f4d5e mov edx, 3 */
  EDX = (0x3u);
  /* 102f4d63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4d66 jb 0x102f4d74 */
  if (C.cf) goto L_102f4d74;
  /* 102f4d68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102f4d6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4d6d jmp dword ptr [eax*4 + 0x102f4d80] */
  switch (EAX) {
    case 1: goto L_102f4d90;
    case 2: goto L_102f4dbc;
    case 3: goto L_102f4de0;
    default: x86_unimpl("switch@0x102f4d6d out of table"); return;
  }
L_102f4d74:;
  /* 102f4d74 jmp dword ptr [ecx*4 + 0x102f4e78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x102f4e78)))); return;
  /* 102f4d7b nop  */
  /* nop */
L_102f4d7c:;
  /* 102f4d7c jmp dword ptr [ecx*4 + 0x102f4dfc] */
  switch (ECX) {
    case 0: goto L_102f4e5f;
    case 1: goto L_102f4e4c;
    case 2: goto L_102f4e44;
    case 3: goto L_102f4e3c;
    case 4: goto L_102f4e34;
    case 5: goto L_102f4e2c;
    case 6: goto L_102f4e24;
    case 7: goto L_102f4e1c;
    default: x86_unimpl("switch@0x102f4d7c out of table"); return;
  }
  /* 102f4d83 nop  */
  /* nop */
L_102f4d90:;
  /* 102f4d90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4d92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4d94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4d96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4d99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f4d9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f4d9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4da2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4da5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4da8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4dab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4dae jb 0x102f4d7c */
  if (C.cf) goto L_102f4d7c;
  /* 102f4db0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4db2 jmp dword ptr [edx*4 + 0x102f4e68] */
  switch (EDX) {
    case 0: goto L_102f4e78;
    case 1: goto L_102f4e80;
    case 2: goto L_102f4e8c;
    case 3: goto L_102f4ea0;
    default: x86_unimpl("switch@0x102f4db2 out of table"); return;
  }
  /* 102f4db9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f4dbc:;
  /* 102f4dbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4dbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4dc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4dc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4dc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4dc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f4dcb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4dce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4dd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4dd4 jb 0x102f4d7c */
  if (C.cf) goto L_102f4d7c;
  /* 102f4dd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4dd8 jmp dword ptr [edx*4 + 0x102f4e68] */
  switch (EDX) {
    case 0: goto L_102f4e78;
    case 1: goto L_102f4e80;
    case 2: goto L_102f4e8c;
    case 3: goto L_102f4ea0;
    default: x86_unimpl("switch@0x102f4dd8 out of table"); return;
  }
  /* 102f4ddf nop  */
  /* nop */
L_102f4de0:;
  /* 102f4de0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4de2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4de4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4de6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f4de7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4dea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f4deb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4dee jb 0x102f4d7c */
  if (C.cf) goto L_102f4d7c;
  /* 102f4df0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4df2 jmp dword ptr [edx*4 + 0x102f4e68] */
  switch (EDX) {
    case 0: goto L_102f4e78;
    case 1: goto L_102f4e80;
    case 2: goto L_102f4e8c;
    case 3: goto L_102f4ea0;
    default: x86_unimpl("switch@0x102f4df2 out of table"); return;
  }
  /* 102f4df9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f4e1c:;
  /* 102f4e1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 102f4e20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_102f4e24:;
  /* 102f4e24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 102f4e28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_102f4e2c:;
  /* 102f4e2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 102f4e30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_102f4e34:;
  /* 102f4e34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 102f4e38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_102f4e3c:;
  /* 102f4e3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 102f4e40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_102f4e44:;
  /* 102f4e44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 102f4e48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_102f4e4c:;
  /* 102f4e4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 102f4e50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 102f4e54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102f4e5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4e5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102f4e5f:;
  /* 102f4e5f jmp dword ptr [edx*4 + 0x102f4e68] */
  switch (EDX) {
    case 0: goto L_102f4e78;
    case 1: goto L_102f4e80;
    case 2: goto L_102f4e8c;
    case 3: goto L_102f4ea0;
    default: x86_unimpl("switch@0x102f4e5f out of table"); return;
  }
  /* 102f4e66 mov edi, edi */
  EDI = (EDI);
L_102f4e78:;
  /* 102f4e78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4e7b pop esi */
  ESI = (pop32());
  /* 102f4e7c pop edi */
  EDI = (pop32());
  /* 102f4e7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4e7e ret  */
  ESPCHK(0x102f4d20u, _esp0);
  ESP += 4; return;
  /* 102f4e7f nop  */
  /* nop */
L_102f4e80:;
  /* 102f4e80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4e82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4e84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4e87 pop esi */
  ESI = (pop32());
  /* 102f4e88 pop edi */
  EDI = (pop32());
  /* 102f4e89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4e8a ret  */
  ESPCHK(0x102f4d20u, _esp0);
  ESP += 4; return;
  /* 102f4e8b nop  */
  /* nop */
L_102f4e8c:;
  /* 102f4e8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4e8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4e90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4e93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f4e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4e99 pop esi */
  ESI = (pop32());
  /* 102f4e9a pop edi */
  EDI = (pop32());
  /* 102f4e9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4e9c ret  */
  ESPCHK(0x102f4d20u, _esp0);
  ESP += 4; return;
  /* 102f4e9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f4ea0:;
  /* 102f4ea0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f4ea2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f4ea4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4ea7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f4eaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f4ead mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4eb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f4eb3 pop esi */
  ESI = (pop32());
  /* 102f4eb4 pop edi */
  EDI = (pop32());
  /* 102f4eb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f4eb6 ret  */
  ESPCHK(0x102f4d20u, _esp0);
  ESP += 4; return;
  /* 102f4eb7 nop  */
  /* nop */
L_102f4eb8:;
  /* 102f4eb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 102f4ebc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 102f4ec0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102f4ec6 jne 0x102f4eec */
  if (!C.zf) goto L_102f4eec;
  /* 102f4ec8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4ecb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102f4ece cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4ed1 jb 0x102f4ee0 */
  if (C.cf) goto L_102f4ee0;
  /* 102f4ed3 std  */
  C.df=1;
  /* 102f4ed4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4ed6 cld  */
  C.df=0;
  /* 102f4ed7 jmp dword ptr [edx*4 + 0x102f5000] */
  switch (EDX) {
    case 0: goto L_102f5010;
    case 1: goto L_102f5018;
    case 2: goto L_102f5028;
    case 3: goto L_102f503c;
    default: x86_unimpl("switch@0x102f4ed7 out of table"); return;
  }
  /* 102f4ede mov edi, edi */
  EDI = (EDI);
L_102f4ee0:;
  /* 102f4ee0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f4ee2 jmp dword ptr [ecx*4 + 0x102f4fb0] */
  switch (ECX) {
    case 0: goto L_102f4ff7;
    default: x86_unimpl("switch@0x102f4ee2 out of table"); return;
  }
  /* 102f4ee9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f4eec:;
  /* 102f4eec mov eax, edi */
  EAX = (EDI);
  /* 102f4eee mov edx, 3 */
  EDX = (0x3u);
  /* 102f4ef3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4ef6 jb 0x102f4f04 */
  if (C.cf) goto L_102f4f04;
  /* 102f4ef8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 102f4efb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4efd jmp dword ptr [eax*4 + 0x102f4f08] */
  switch (EAX) {
    case 1: goto L_102f4f18;
    case 2: goto L_102f4f38;
    case 3: goto L_102f4f60;
    default: x86_unimpl("switch@0x102f4efd out of table"); return;
  }
L_102f4f04:;
  /* 102f4f04 jmp dword ptr [ecx*4 + 0x102f5000] */
  switch (ECX) {
    case 0: goto L_102f5010;
    case 1: goto L_102f5018;
    case 2: goto L_102f5028;
    case 3: goto L_102f503c;
    default: x86_unimpl("switch@0x102f4f04 out of table"); return;
  }
  /* 102f4f0b nop  */
  /* nop */
L_102f4f18:;
  /* 102f4f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f4f1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4f1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f4f20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102f4f21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4f24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f4f25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4f28 jb 0x102f4ee0 */
  if (C.cf) goto L_102f4ee0;
  /* 102f4f2a std  */
  C.df=1;
  /* 102f4f2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4f2d cld  */
  C.df=0;
  /* 102f4f2e jmp dword ptr [edx*4 + 0x102f5000] */
  switch (EDX) {
    case 0: goto L_102f5010;
    case 1: goto L_102f5018;
    case 2: goto L_102f5028;
    case 3: goto L_102f503c;
    default: x86_unimpl("switch@0x102f4f2e out of table"); return;
  }
  /* 102f4f35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f4f38:;
  /* 102f4f38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f4f3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4f3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f4f40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f4f43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4f46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4f49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4f4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4f4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4f52 jb 0x102f4ee0 */
  if (C.cf) goto L_102f4ee0;
  /* 102f4f54 std  */
  C.df=1;
  /* 102f4f55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4f57 cld  */
  C.df=0;
  /* 102f4f58 jmp dword ptr [edx*4 + 0x102f5000] */
  switch (EDX) {
    case 0: goto L_102f5010;
    case 1: goto L_102f5018;
    case 2: goto L_102f5028;
    case 3: goto L_102f503c;
    default: x86_unimpl("switch@0x102f4f58 out of table"); return;
  }
  /* 102f4f5f nop  */
  /* nop */
L_102f4f60:;
  /* 102f4f60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f4f63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 102f4f65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f4f68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f4f6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f4f6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f4f71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f4f74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f4f77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4f7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f4f7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f4f80 jb 0x102f4ee0 */
  if (C.cf) goto L_102f4ee0;
  /* 102f4f86 std  */
  C.df=1;
  /* 102f4f87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 102f4f89 cld  */
  C.df=0;
  /* 102f4f8a jmp dword ptr [edx*4 + 0x102f5000] */
  switch (EDX) {
    case 0: goto L_102f5010;
    case 1: goto L_102f5018;
    case 2: goto L_102f5028;
    case 3: goto L_102f503c;
    default: x86_unimpl("switch@0x102f4f8a out of table"); return;
  }
  /* 102f4f91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 102f4f94 mov ah, 0x4f */
  AH = (0x4fu);
  /* 102f4f96 das  */
  x86_unimpl("das @ 0x102f4f96");
  /* 102f4f97 adc byte ptr [edi + ecx*2 + 0x4fc4102f], bh */
  { uint32_t _a=(r8((uint32_t)(EDI + ECX*2 + 0x4fc4102f))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + ECX*2 + 0x4fc4102f), (_r)); fl_add(_a,_b,_r,8); }
  /* 102f4f9e das  */
  x86_unimpl("das @ 0x102f4f9e");
  /* 102f4f9f adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 102f4fa1 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f4fa2 das  */
  x86_unimpl("das @ 0x102f4fa2");
  /* 102f4fa3 adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 102f4fa5 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f4fa6 das  */
  x86_unimpl("das @ 0x102f4fa6");
  /* 102f4fa7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 102f4fa9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f4faa das  */
  x86_unimpl("das @ 0x102f4faa");
  /* 102f4fab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 102f4fad dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f4fae das  */
  x86_unimpl("das @ 0x102f4fae");
  /* 102f4fb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 102f4fb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 102f4fbc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 102f4fc0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 102f4fc4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 102f4fc8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 102f4fcc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 102f4fd0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 102f4fd4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 102f4fd8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 102f4fdc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 102f4fe0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 102f4fe4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 102f4fe8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 102f4fec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 102f4ff3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f4ff5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_102f4ff7:;
  /* 102f4ff7 jmp dword ptr [edx*4 + 0x102f5000] */
  switch (EDX) {
    case 0: goto L_102f5010;
    case 1: goto L_102f5018;
    case 2: goto L_102f5028;
    case 3: goto L_102f503c;
    default: x86_unimpl("switch@0x102f4ff7 out of table"); return;
  }
  /* 102f4ffe mov edi, edi */
  EDI = (EDI);
L_102f5010:;
  /* 102f5010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5013 pop esi */
  ESI = (pop32());
  /* 102f5014 pop edi */
  EDI = (pop32());
  /* 102f5015 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f5016 ret  */
  ESPCHK(0x102f4d20u, _esp0);
  ESP += 4; return;
  /* 102f5017 nop  */
  /* nop */
L_102f5018:;
  /* 102f5018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f501b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f501e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5021 pop esi */
  ESI = (pop32());
  /* 102f5022 pop edi */
  EDI = (pop32());
  /* 102f5023 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f5024 ret  */
  ESPCHK(0x102f4d20u, _esp0);
  ESP += 4; return;
  /* 102f5025 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f5028:;
  /* 102f5028 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f502b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f502e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f5031 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f5034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5037 pop esi */
  ESI = (pop32());
  /* 102f5038 pop edi */
  EDI = (pop32());
  /* 102f5039 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f503a ret  */
  ESPCHK(0x102f4d20u, _esp0);
  ESP += 4; return;
  /* 102f503b nop  */
  /* nop */
L_102f503c:;
  /* 102f503c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 102f503f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 102f5042 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 102f5045 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 102f5048 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 102f504b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 102f504e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5051 pop esi */
  ESI = (pop32());
  /* 102f5052 pop edi */
  EDI = (pop32());
  /* 102f5053 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f5054 ret  */
  ESPCHK(0x102f4d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005055 @ 0x102f5055 (62 bytes, 15 insns) */
void f_102f5055(void) {
  FTRACE(0x102f5055u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5055 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 102f505a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f505c push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f5062 call dword ptr [0x102f8034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8034))), 0x102f5068u);
  /* 102f5068 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f506a mov dword ptr [0x102fa52c], eax */
  w32((uint32_t)(0x102fa52c), (EAX));
  /* 102f506f jne 0x102f5072 */
  if (!C.zf) goto L_102f5072;
  /* 102f5071 ret  */
  ESPCHK(0x102f5055u, _esp0);
  ESP += 4; return;
L_102f5072:;
  /* 102f5072 and dword ptr [0x102fa524], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102fa524)))&(0x0u); w32((uint32_t)(0x102fa524), (_r)); fl_logic(_r,32); }
  /* 102f5079 and dword ptr [0x102fa528], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102fa528)))&(0x0u); w32((uint32_t)(0x102fa528), (_r)); fl_logic(_r,32); }
  /* 102f5080 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5082 mov dword ptr [0x102fa520], eax */
  w32((uint32_t)(0x102fa520), (EAX));
  /* 102f5087 mov dword ptr [0x102fa518], 0x10 */
  w32((uint32_t)(0x102fa518), (0x10u));
  /* 102f5091 pop eax */
  EAX = (pop32());
  /* 102f5092 ret  */
  ESPCHK(0x102f5055u, _esp0);
  ESP += 4; return;
}

/* FUN_10005093 @ 0x102f5093 (43 bytes, 14 insns) */
void f_102f5093(void) {
  FTRACE(0x102f5093u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5093 mov eax, dword ptr [0x102fa528] */
  EAX = (r32((uint32_t)(0x102fa528)));
  /* 102f5098 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 102f509b mov eax, dword ptr [0x102fa52c] */
  EAX = (r32((uint32_t)(0x102fa52c)));
  /* 102f50a0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_102f50a3:;
  /* 102f50a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f50a5 jae 0x102f50bb */
  if (!C.cf) goto L_102f50bb;
  /* 102f50a7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f50ab sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f50ae cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f50b4 jb 0x102f50bd */
  if (C.cf) goto L_102f50bd;
  /* 102f50b6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f50b9 jmp 0x102f50a3 */
  goto L_102f50a3;
L_102f50bb:;
  /* 102f50bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102f50bd:;
  /* 102f50bd ret  */
  ESPCHK(0x102f5093u, _esp0);
  ESP += 4; return;
}

/* FUN_100050be @ 0x102f50be (811 bytes, 264 insns) */
void f_102f50be(void) {
  FTRACE(0x102f50beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f50be push ebp */
  push32((uint32_t)(EBP));
  /* 102f50bf mov ebp, esp */
  EBP = (ESP);
  /* 102f50c1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f50c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f50c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f50ca push ebx */
  push32((uint32_t)(EBX));
  /* 102f50cb push esi */
  push32((uint32_t)(ESI));
  /* 102f50cc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 102f50cf mov esi, edx */
  ESI = (EDX);
  /* 102f50d1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f50d4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 102f50d7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f50da push edi */
  push32((uint32_t)(EDI));
  /* 102f50db shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 102f50de mov ecx, esi */
  ECX = (ESI);
  /* 102f50e0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 102f50e3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f50e9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102f50ea mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102f50ed lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102f50f4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102f50f7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102f50fa mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 102f50fd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 102f5100 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102f5103 jne 0x102f5184 */
  if (!C.zf) goto L_102f5184;
  /* 102f5105 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102f5108 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102f510a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f510b pop edi */
  EDI = (pop32());
  /* 102f510c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102f510f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5111 jbe 0x102f5116 */
  if ((C.cf||C.zf)) goto L_102f5116;
  /* 102f5113 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_102f5116:;
  /* 102f5116 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102f511a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f511e jne 0x102f5168 */
  if (!C.zf) goto L_102f5168;
  /* 102f5120 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f5123 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5126 jae 0x102f5144 */
  if (!C.cf) goto L_102f5144;
  /* 102f5128 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102f512d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102f512f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102f5133 not edi */
  EDI = (~(EDI));
  /* 102f5135 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102f5139 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102f513b jne 0x102f5168 */
  if (!C.zf) goto L_102f5168;
  /* 102f513d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5140 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102f5142 jmp 0x102f5168 */
  goto L_102f5168;
L_102f5144:;
  /* 102f5144 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5147 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102f514c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102f514e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f5151 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102f5155 not edi */
  EDI = (~(EDI));
  /* 102f5157 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102f515e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102f5160 jne 0x102f5168 */
  if (!C.zf) goto L_102f5168;
  /* 102f5162 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5165 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102f5168:;
  /* 102f5168 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102f516c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102f5170 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102f5173 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 102f5177 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 102f517b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f517e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102f5181 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_102f5184:;
  /* 102f5184 mov edi, ebx */
  EDI = (EBX);
  /* 102f5186 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102f5189 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f518a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f518d jbe 0x102f5192 */
  if ((C.cf||C.zf)) goto L_102f5192;
  /* 102f518f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102f5191 pop edi */
  EDI = (pop32());
L_102f5192:;
  /* 102f5192 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f5195 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 102f5198 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 102f519b jne 0x102f5241 */
  if (!C.zf) goto L_102f5241;
  /* 102f51a1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f51a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f51a7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102f51aa push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102f51ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 102f51af dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f51b0 pop edx */
  EDX = (pop32());
  /* 102f51b1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f51b3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 102f51b6 jbe 0x102f51bd */
  if ((C.cf||C.zf)) goto L_102f51bd;
  /* 102f51b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 102f51bb mov ecx, edx */
  ECX = (EDX);
L_102f51bd:;
  /* 102f51bd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f51c0 mov edi, ebx */
  EDI = (EBX);
  /* 102f51c2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 102f51c5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 102f51c8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f51c9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f51cb jbe 0x102f51cf */
  if ((C.cf||C.zf)) goto L_102f51cf;
  /* 102f51cd mov edi, edx */
  EDI = (EDX);
L_102f51cf:;
  /* 102f51cf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f51d1 je 0x102f523e */
  if (C.zf) goto L_102f523e;
  /* 102f51d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f51d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102f51d9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f51dc jne 0x102f5226 */
  if (!C.zf) goto L_102f5226;
  /* 102f51de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f51e1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f51e4 jae 0x102f5202 */
  if (!C.cf) goto L_102f5202;
  /* 102f51e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102f51eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102f51ed lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102f51f1 not edx */
  EDX = (~(EDX));
  /* 102f51f3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102f51f7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102f51f9 jne 0x102f5226 */
  if (!C.zf) goto L_102f5226;
  /* 102f51fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f51fe and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102f5200 jmp 0x102f5226 */
  goto L_102f5226;
L_102f5202:;
  /* 102f5202 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5205 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102f520a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102f520c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f520f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 102f5213 not edx */
  EDX = (~(EDX));
  /* 102f5215 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102f521c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 102f521e jne 0x102f5226 */
  if (!C.zf) goto L_102f5226;
  /* 102f5220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5223 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102f5226:;
  /* 102f5226 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f5229 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 102f522c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102f522f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102f5232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f5235 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 102f5238 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 102f523b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_102f523e:;
  /* 102f523e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_102f5241:;
  /* 102f5241 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5245 jne 0x102f5250 */
  if (!C.zf) goto L_102f5250;
  /* 102f5247 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f524a je 0x102f52d9 */
  if (C.zf) goto L_102f52d9;
L_102f5250:;
  /* 102f5250 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102f5253 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102f5256 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 102f5259 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 102f525c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102f525f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 102f5262 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102f5265 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102f5268 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102f526b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102f526e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102f5271 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5274 jne 0x102f52d9 */
  if (!C.zf) goto L_102f52d9;
  /* 102f5276 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 102f527a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f527d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 102f5280 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102f5282 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 102f5286 jae 0x102f52ad */
  if (!C.cf) goto L_102f52ad;
  /* 102f5288 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f528c jne 0x102f529c */
  if (!C.zf) goto L_102f529c;
  /* 102f528e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102f5293 mov ecx, edi */
  ECX = (EDI);
  /* 102f5295 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102f5297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f529a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_102f529c:;
  /* 102f529c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102f52a1 mov ecx, edi */
  ECX = (EDI);
  /* 102f52a3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102f52a5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 102f52a9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102f52ab jmp 0x102f52d6 */
  goto L_102f52d6;
L_102f52ad:;
  /* 102f52ad cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f52b1 jne 0x102f52c3 */
  if (!C.zf) goto L_102f52c3;
  /* 102f52b3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102f52b6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102f52bb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102f52bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f52c0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_102f52c3:;
  /* 102f52c3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102f52c6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102f52cb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102f52cd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 102f52d4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_102f52d6:;
  /* 102f52d6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_102f52d9:;
  /* 102f52d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102f52dc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 102f52de mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 102f52e2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 102f52e4 jne 0x102f53e4 */
  if (!C.zf) goto L_102f53e4;
  /* 102f52ea mov eax, dword ptr [0x102fa524] */
  EAX = (r32((uint32_t)(0x102fa524)));
  /* 102f52ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f52f1 je 0x102f53d6 */
  if (C.zf) goto L_102f53d6;
  /* 102f52f7 mov ecx, dword ptr [0x102fa51c] */
  ECX = (r32((uint32_t)(0x102fa51c)));
  /* 102f52fd mov edi, dword ptr [0x102f80b0] */
  EDI = (r32((uint32_t)(0x102f80b0)));
  /* 102f5303 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 102f5306 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5309 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 102f530e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102f5313 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5314 push ecx */
  push32((uint32_t)(ECX));
  /* 102f5315 call edi */
  call_ind((uint32_t)(EDI), 0x102f5317u);
  /* 102f5317 mov ecx, dword ptr [0x102fa51c] */
  ECX = (r32((uint32_t)(0x102fa51c)));
  /* 102f531d mov eax, dword ptr [0x102fa524] */
  EAX = (r32((uint32_t)(0x102fa524)));
  /* 102f5322 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102f5327 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102f5329 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102f532c mov eax, dword ptr [0x102fa524] */
  EAX = (r32((uint32_t)(0x102fa524)));
  /* 102f5331 mov ecx, dword ptr [0x102fa51c] */
  ECX = (r32((uint32_t)(0x102fa51c)));
  /* 102f5337 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102f533a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 102f5342 mov eax, dword ptr [0x102fa524] */
  EAX = (r32((uint32_t)(0x102fa524)));
  /* 102f5347 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 102f534a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 102f534d mov eax, dword ptr [0x102fa524] */
  EAX = (r32((uint32_t)(0x102fa524)));
  /* 102f5352 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102f5355 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5359 jne 0x102f5364 */
  if (!C.zf) goto L_102f5364;
  /* 102f535b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102f535f mov eax, dword ptr [0x102fa524] */
  EAX = (r32((uint32_t)(0x102fa524)));
L_102f5364:;
  /* 102f5364 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5368 jne 0x102f53d6 */
  if (!C.zf) goto L_102f53d6;
  /* 102f536a push ebx */
  push32((uint32_t)(EBX));
  /* 102f536b push 0 */
  push32((uint32_t)(0x0u));
  /* 102f536d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 102f5370 call edi */
  call_ind((uint32_t)(EDI), 0x102f5372u);
  /* 102f5372 mov eax, dword ptr [0x102fa524] */
  EAX = (r32((uint32_t)(0x102fa524)));
  /* 102f5377 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 102f537a push 0 */
  push32((uint32_t)(0x0u));
  /* 102f537c push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f5382 call dword ptr [0x102f80b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80b4))), 0x102f5388u);
  /* 102f5388 mov eax, dword ptr [0x102fa528] */
  EAX = (r32((uint32_t)(0x102fa528)));
  /* 102f538d mov edx, dword ptr [0x102fa52c] */
  EDX = (r32((uint32_t)(0x102fa52c)));
  /* 102f5393 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102f5396 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102f5399 mov ecx, eax */
  ECX = (EAX);
  /* 102f539b mov eax, dword ptr [0x102fa524] */
  EAX = (r32((uint32_t)(0x102fa524)));
  /* 102f53a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f53a2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 102f53a6 push ecx */
  push32((uint32_t)(ECX));
  /* 102f53a7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 102f53aa push ecx */
  push32((uint32_t)(ECX));
  /* 102f53ab push eax */
  push32((uint32_t)(EAX));
  /* 102f53ac call 0x102f42f0 */
  push32(0x102f53b1u); f_102f42f0();
  /* 102f53b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f53b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f53b7 dec dword ptr [0x102fa528] */
  { uint32_t _r=(r32((uint32_t)(0x102fa528)))-1; w32((uint32_t)(0x102fa528), (_r)); fl_dec(_r,32); }
  /* 102f53bd cmp eax, dword ptr [0x102fa524] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x102fa524))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f53c3 jbe 0x102f53c8 */
  if ((C.cf||C.zf)) goto L_102f53c8;
  /* 102f53c5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102f53c8:;
  /* 102f53c8 mov ecx, dword ptr [0x102fa52c] */
  ECX = (r32((uint32_t)(0x102fa52c)));
  /* 102f53ce mov dword ptr [0x102fa520], ecx */
  w32((uint32_t)(0x102fa520), (ECX));
  /* 102f53d4 jmp 0x102f53d9 */
  goto L_102f53d9;
L_102f53d6:;
  /* 102f53d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_102f53d9:;
  /* 102f53d9 mov dword ptr [0x102fa524], eax */
  w32((uint32_t)(0x102fa524), (EAX));
  /* 102f53de mov dword ptr [0x102fa51c], esi */
  w32((uint32_t)(0x102fa51c), (ESI));
L_102f53e4:;
  /* 102f53e4 pop edi */
  EDI = (pop32());
  /* 102f53e5 pop esi */
  ESI = (pop32());
  /* 102f53e6 pop ebx */
  EBX = (pop32());
  /* 102f53e7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f53e8 ret  */
  ESPCHK(0x102f50beu, _esp0);
  ESP += 4; return;
}

/* FUN_100053e9 @ 0x102f53e9 (777 bytes, 275 insns) */
void f_102f53e9(void) {
  FTRACE(0x102f53e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f53e9 push ebp */
  push32((uint32_t)(EBP));
  /* 102f53ea mov ebp, esp */
  EBP = (ESP);
  /* 102f53ec sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f53ef mov eax, dword ptr [0x102fa528] */
  EAX = (r32((uint32_t)(0x102fa528)));
  /* 102f53f4 mov edx, dword ptr [0x102fa52c] */
  EDX = (r32((uint32_t)(0x102fa52c)));
  /* 102f53fa push ebx */
  push32((uint32_t)(EBX));
  /* 102f53fb push esi */
  push32((uint32_t)(ESI));
  /* 102f53fc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102f53ff push edi */
  push32((uint32_t)(EDI));
  /* 102f5400 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 102f5403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5406 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102f5409 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 102f540c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 102f540f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102f5412 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 102f5415 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f5416 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5419 jge 0x102f5429 */
  if ((C.sf==C.of)) goto L_102f5429;
  /* 102f541b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 102f541e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102f5420 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 102f5424 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102f5427 jmp 0x102f5439 */
  goto L_102f5439;
L_102f5429:;
  /* 102f5429 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f542c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f542f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f5431 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 102f5433 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 102f5436 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_102f5439:;
  /* 102f5439 mov eax, dword ptr [0x102fa520] */
  EAX = (r32((uint32_t)(0x102fa520)));
  /* 102f543e mov ebx, eax */
  EBX = (EAX);
  /* 102f5440 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5442 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102f5445 jae 0x102f5460 */
  if (!C.cf) goto L_102f5460;
L_102f5447:;
  /* 102f5447 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102f544a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102f544c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102f544f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102f5451 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102f5453 jne 0x102f5460 */
  if (!C.zf) goto L_102f5460;
  /* 102f5455 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5458 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f545b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102f545e jb 0x102f5447 */
  if (C.cf) goto L_102f5447;
L_102f5460:;
  /* 102f5460 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5463 jne 0x102f54de */
  if (!C.zf) goto L_102f54de;
  /* 102f5465 mov ebx, edx */
  EBX = (EDX);
L_102f5467:;
  /* 102f5467 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5469 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102f546c jae 0x102f5483 */
  if (!C.cf) goto L_102f5483;
  /* 102f546e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102f5471 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 102f5473 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102f5476 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102f5478 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102f547a jne 0x102f5481 */
  if (!C.zf) goto L_102f5481;
  /* 102f547c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f547f jmp 0x102f5467 */
  goto L_102f5467;
L_102f5481:;
  /* 102f5481 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102f5483:;
  /* 102f5483 jne 0x102f54de */
  if (!C.zf) goto L_102f54de;
L_102f5485:;
  /* 102f5485 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5488 jae 0x102f549b */
  if (!C.cf) goto L_102f549b;
  /* 102f548a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f548e jne 0x102f5498 */
  if (!C.zf) goto L_102f5498;
  /* 102f5490 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5493 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102f5496 jmp 0x102f5485 */
  goto L_102f5485;
L_102f5498:;
  /* 102f5498 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102f549b:;
  /* 102f549b jne 0x102f54c3 */
  if (!C.zf) goto L_102f54c3;
  /* 102f549d mov ebx, edx */
  EBX = (EDX);
L_102f549f:;
  /* 102f549f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f54a1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102f54a4 jae 0x102f54b3 */
  if (!C.cf) goto L_102f54b3;
  /* 102f54a6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f54aa jne 0x102f54b1 */
  if (!C.zf) goto L_102f54b1;
  /* 102f54ac add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f54af jmp 0x102f549f */
  goto L_102f549f;
L_102f54b1:;
  /* 102f54b1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_102f54b3:;
  /* 102f54b3 jne 0x102f54c3 */
  if (!C.zf) goto L_102f54c3;
  /* 102f54b5 call 0x102f56f2 */
  push32(0x102f54bau); f_102f56f2();
  /* 102f54ba mov ebx, eax */
  EBX = (EAX);
  /* 102f54bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f54be mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 102f54c1 je 0x102f54d7 */
  if (C.zf) goto L_102f54d7;
L_102f54c3:;
  /* 102f54c3 push ebx */
  push32((uint32_t)(EBX));
  /* 102f54c4 call 0x102f57a3 */
  push32(0x102f54c9u); f_102f57a3();
  /* 102f54c9 pop ecx */
  ECX = (pop32());
  /* 102f54ca mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 102f54cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 102f54cf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102f54d2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f54d5 jne 0x102f54de */
  if (!C.zf) goto L_102f54de;
L_102f54d7:;
  /* 102f54d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f54d9 jmp 0x102f56ed */
  goto L_102f56ed;
L_102f54de:;
  /* 102f54de mov dword ptr [0x102fa520], ebx */
  w32((uint32_t)(0x102fa520), (EBX));
  /* 102f54e4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 102f54e7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 102f54e9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f54ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 102f54ef je 0x102f5505 */
  if (C.zf) goto L_102f5505;
  /* 102f54f1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102f54f8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102f54fc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102f54ff and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 102f5501 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102f5503 jne 0x102f553c */
  if (!C.zf) goto L_102f553c;
L_102f5505:;
  /* 102f5505 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 102f550b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 102f550e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102f5511 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 102f5514 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f5518 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 102f551b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 102f551d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102f5520 jne 0x102f5539 */
  if (!C.zf) goto L_102f5539;
L_102f5522:;
  /* 102f5522 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 102f5528 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102f552b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 102f552e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5531 mov edi, esi */
  EDI = (ESI);
  /* 102f5533 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 102f5535 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 102f5537 je 0x102f5522 */
  if (C.zf) goto L_102f5522;
L_102f5539:;
  /* 102f5539 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_102f553c:;
  /* 102f553c mov ecx, edx */
  ECX = (EDX);
  /* 102f553e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102f5540 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f5546 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 102f554d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 102f5550 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 102f5554 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 102f5556 jne 0x102f5565 */
  if (!C.zf) goto L_102f5565;
  /* 102f5558 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 102f555f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 102f5561 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 102f5564 pop edi */
  EDI = (pop32());
L_102f5565:;
  /* 102f5565 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102f5567 jl 0x102f556e */
  if ((C.sf!=C.of)) goto L_102f556e;
  /* 102f5569 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102f556b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f556c jmp 0x102f5565 */
  goto L_102f5565;
L_102f556e:;
  /* 102f556e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f5571 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 102f5575 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 102f5577 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f557a mov esi, ecx */
  ESI = (ECX);
  /* 102f557c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 102f557f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 102f5582 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102f5583 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5586 jle 0x102f558b */
  if ((C.zf||C.sf!=C.of)) goto L_102f558b;
  /* 102f5588 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102f558a pop esi */
  ESI = (pop32());
L_102f558b:;
  /* 102f558b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f558d je 0x102f56a0 */
  if (C.zf) goto L_102f56a0;
  /* 102f5593 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102f5596 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5599 jne 0x102f55fc */
  if (!C.zf) goto L_102f55fc;
  /* 102f559b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f559e jge 0x102f55cb */
  if ((C.sf==C.of)) goto L_102f55cb;
  /* 102f55a0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102f55a5 mov ecx, edi */
  ECX = (EDI);
  /* 102f55a7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102f55a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f55ac lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102f55b0 not ebx */
  EBX = (~(EBX));
  /* 102f55b2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102f55b5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 102f55b9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 102f55bd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102f55bf jne 0x102f55f9 */
  if (!C.zf) goto L_102f55f9;
  /* 102f55c1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f55c4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102f55c7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 102f55c9 jmp 0x102f55fc */
  goto L_102f55fc;
L_102f55cb:;
  /* 102f55cb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 102f55ce mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 102f55d3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 102f55d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f55d8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 102f55dc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102f55e3 not ebx */
  EBX = (~(EBX));
  /* 102f55e5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 102f55e7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 102f55e9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 102f55ec jne 0x102f55f9 */
  if (!C.zf) goto L_102f55f9;
  /* 102f55ee mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f55f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102f55f4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 102f55f7 jmp 0x102f55fc */
  goto L_102f55fc;
L_102f55f9:;
  /* 102f55f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_102f55fc:;
  /* 102f55fc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 102f55ff mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 102f5602 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5606 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 102f5609 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102f560c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 102f560f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 102f5612 je 0x102f56ac */
  if (C.zf) goto L_102f56ac;
  /* 102f5618 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f561b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 102f561f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 102f5622 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 102f5625 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 102f5628 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102f562b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102f562e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 102f5631 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 102f5634 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5637 jne 0x102f569d */
  if (!C.zf) goto L_102f569d;
  /* 102f5639 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 102f563d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5640 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 102f5643 jge 0x102f566e */
  if ((C.sf==C.of)) goto L_102f566e;
  /* 102f5645 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102f5647 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f564b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102f564f jne 0x102f565c */
  if (!C.zf) goto L_102f565c;
  /* 102f5651 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102f5656 mov ecx, esi */
  ECX = (ESI);
  /* 102f5658 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102f565a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_102f565c:;
  /* 102f565c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102f5661 mov ecx, esi */
  ECX = (ESI);
  /* 102f5663 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102f5665 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f5668 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102f566c jmp 0x102f569d */
  goto L_102f569d;
L_102f566e:;
  /* 102f566e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102f5670 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5674 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 102f5678 jne 0x102f5687 */
  if (!C.zf) goto L_102f5687;
  /* 102f567a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102f567d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 102f5682 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 102f5684 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_102f5687:;
  /* 102f5687 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f568a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 102f5691 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 102f5694 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 102f5699 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 102f569b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_102f569d:;
  /* 102f569d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102f56a0:;
  /* 102f56a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102f56a2 je 0x102f56af */
  if (C.zf) goto L_102f56af;
  /* 102f56a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102f56a6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 102f56aa jmp 0x102f56af */
  goto L_102f56af;
L_102f56ac:;
  /* 102f56ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_102f56af:;
  /* 102f56af mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 102f56b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f56b4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 102f56b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102f56b9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 102f56bd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 102f56c0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 102f56c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102f56c4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 102f56c7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102f56c9 jne 0x102f56e5 */
  if (!C.zf) goto L_102f56e5;
  /* 102f56cb cmp ebx, dword ptr [0x102fa524] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x102fa524))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f56d1 jne 0x102f56e5 */
  if (!C.zf) goto L_102f56e5;
  /* 102f56d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f56d6 cmp ecx, dword ptr [0x102fa51c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102fa51c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f56dc jne 0x102f56e5 */
  if (!C.zf) goto L_102f56e5;
  /* 102f56de and dword ptr [0x102fa524], 0 */
  { uint32_t _r=(r32((uint32_t)(0x102fa524)))&(0x0u); w32((uint32_t)(0x102fa524), (_r)); fl_logic(_r,32); }
L_102f56e5:;
  /* 102f56e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f56e8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102f56ea lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_102f56ed:;
  /* 102f56ed pop edi */
  EDI = (pop32());
  /* 102f56ee pop esi */
  ESI = (pop32());
  /* 102f56ef pop ebx */
  EBX = (pop32());
  /* 102f56f0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f56f1 ret  */
  ESPCHK(0x102f53e9u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f2 @ 0x102f56f2 (177 bytes, 53 insns) */
void f_102f56f2(void) {
  FTRACE(0x102f56f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f56f2 mov eax, dword ptr [0x102fa528] */
  EAX = (r32((uint32_t)(0x102fa528)));
  /* 102f56f7 mov ecx, dword ptr [0x102fa518] */
  ECX = (r32((uint32_t)(0x102fa518)));
  /* 102f56fd push esi */
  push32((uint32_t)(ESI));
  /* 102f56fe push edi */
  push32((uint32_t)(EDI));
  /* 102f56ff xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102f5701 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5703 jne 0x102f5735 */
  if (!C.zf) goto L_102f5735;
  /* 102f5705 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 102f5709 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 102f570c push eax */
  push32((uint32_t)(EAX));
  /* 102f570d push dword ptr [0x102fa52c] */
  push32((uint32_t)(r32((uint32_t)(0x102fa52c))));
  /* 102f5713 push edi */
  push32((uint32_t)(EDI));
  /* 102f5714 push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f571a call dword ptr [0x102f8020] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8020))), 0x102f5720u);
  /* 102f5720 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5722 je 0x102f5785 */
  if (C.zf) goto L_102f5785;
  /* 102f5724 add dword ptr [0x102fa518], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x102fa518))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x102fa518), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f572b mov dword ptr [0x102fa52c], eax */
  w32((uint32_t)(0x102fa52c), (EAX));
  /* 102f5730 mov eax, dword ptr [0x102fa528] */
  EAX = (r32((uint32_t)(0x102fa528)));
L_102f5735:;
  /* 102f5735 mov ecx, dword ptr [0x102fa52c] */
  ECX = (r32((uint32_t)(0x102fa52c)));
  /* 102f573b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 102f5740 push 8 */
  push32((uint32_t)(0x8u));
  /* 102f5742 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 102f5745 push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f574b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 102f574e call dword ptr [0x102f8034] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8034))), 0x102f5754u);
  /* 102f5754 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5756 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 102f5759 je 0x102f5785 */
  if (C.zf) goto L_102f5785;
  /* 102f575b push 4 */
  push32((uint32_t)(0x4u));
  /* 102f575d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 102f5762 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102f5767 push edi */
  push32((uint32_t)(EDI));
  /* 102f5768 call dword ptr [0x102f8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8024))), 0x102f576eu);
  /* 102f576e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5770 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 102f5773 jne 0x102f5789 */
  if (!C.zf) goto L_102f5789;
  /* 102f5775 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 102f5778 push edi */
  push32((uint32_t)(EDI));
  /* 102f5779 push dword ptr [0x102fa768] */
  push32((uint32_t)(r32((uint32_t)(0x102fa768))));
  /* 102f577f call dword ptr [0x102f80b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f80b4))), 0x102f5785u);
L_102f5785:;
  /* 102f5785 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f5787 jmp 0x102f57a0 */
  goto L_102f57a0;
L_102f5789:;
  /* 102f5789 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 102f578d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 102f578f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 102f5792 inc dword ptr [0x102fa528] */
  { uint32_t _r=(r32((uint32_t)(0x102fa528)))+1; w32((uint32_t)(0x102fa528), (_r)); fl_inc(_r,32); }
  /* 102f5798 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 102f579b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 102f579e mov eax, esi */
  EAX = (ESI);
L_102f57a0:;
  /* 102f57a0 pop edi */
  EDI = (pop32());
  /* 102f57a1 pop esi */
  ESI = (pop32());
  /* 102f57a2 ret  */
  ESPCHK(0x102f56f2u, _esp0);
  ESP += 4; return;
}

/* FUN_100057a3 @ 0x102f57a3 (251 bytes, 85 insns) */
void f_102f57a3(void) {
  FTRACE(0x102f57a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f57a3 push ebp */
  push32((uint32_t)(EBP));
  /* 102f57a4 mov ebp, esp */
  EBP = (ESP);
  /* 102f57a6 push ecx */
  push32((uint32_t)(ECX));
  /* 102f57a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f57aa push ebx */
  push32((uint32_t)(EBX));
  /* 102f57ab push esi */
  push32((uint32_t)(ESI));
  /* 102f57ac push edi */
  push32((uint32_t)(EDI));
  /* 102f57ad mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 102f57b0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 102f57b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_102f57b5:;
  /* 102f57b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f57b7 jl 0x102f57be */
  if ((C.sf!=C.of)) goto L_102f57be;
  /* 102f57b9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 102f57bb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 102f57bc jmp 0x102f57b5 */
  goto L_102f57b5;
L_102f57be:;
  /* 102f57be mov eax, ebx */
  EAX = (EBX);
  /* 102f57c0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 102f57c2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f57c8 pop edx */
  EDX = (pop32());
  /* 102f57c9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 102f57d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102f57d3:;
  /* 102f57d3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 102f57d6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 102f57d9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f57dc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 102f57dd jne 0x102f57d3 */
  if (!C.zf) goto L_102f57d3;
  /* 102f57df mov edi, ebx */
  EDI = (EBX);
  /* 102f57e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f57e3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 102f57e6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f57e9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 102f57ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102f57f3 push edi */
  push32((uint32_t)(EDI));
  /* 102f57f4 call dword ptr [0x102f8024] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8024))), 0x102f57fau);
  /* 102f57fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f57fc jne 0x102f5806 */
  if (!C.zf) goto L_102f5806;
  /* 102f57fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f5801 jmp 0x102f5899 */
  goto L_102f5899;
L_102f5806:;
  /* 102f5806 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 102f580c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f580e ja 0x102f584c */
  if ((!C.cf&&!C.zf)) goto L_102f584c;
  /* 102f5810 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_102f5813:;
  /* 102f5813 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 102f5817 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 102f581e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 102f5824 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 102f582b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102f582d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 102f5833 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102f5836 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 102f5840 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5845 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 102f5848 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f584a jbe 0x102f5813 */
  if ((C.cf||C.zf)) goto L_102f5813;
L_102f584c:;
  /* 102f584c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f584f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 102f5852 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5857 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5859 pop edi */
  EDI = (pop32());
  /* 102f585a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102f585d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 102f5860 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 102f5863 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 102f5866 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 102f5869 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 102f586e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 102f5875 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 102f5878 mov cl, al */
  CL = (AL);
  /* 102f587a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 102f587c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f587e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5881 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 102f5884 jne 0x102f5889 */
  if (!C.zf) goto L_102f5889;
  /* 102f5886 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_102f5889:;
  /* 102f5889 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 102f588e mov ecx, ebx */
  ECX = (EBX);
  /* 102f5890 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 102f5892 not edx */
  EDX = (~(EDX));
  /* 102f5894 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 102f5897 mov eax, ebx */
  EAX = (EBX);
L_102f5899:;
  /* 102f5899 pop edi */
  EDI = (pop32());
  /* 102f589a pop esi */
  ESI = (pop32());
  /* 102f589b pop ebx */
  EBX = (pop32());
  /* 102f589c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f589d ret  */
  ESPCHK(0x102f57a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000589e @ 0x102f589e (137 bytes, 50 insns) */
void f_102f589e(void) {
  FTRACE(0x102f589eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f589e push ebx */
  push32((uint32_t)(EBX));
  /* 102f589f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f58a1 cmp dword ptr [0x102fa374], ebx */
  { uint32_t _a=(r32((uint32_t)(0x102fa374))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f58a7 push esi */
  push32((uint32_t)(ESI));
  /* 102f58a8 push edi */
  push32((uint32_t)(EDI));
  /* 102f58a9 jne 0x102f58ed */
  if (!C.zf) goto L_102f58ed;
  /* 102f58ab push 0x102f84c8 */
  push32((uint32_t)(0x102f84c8u));
  /* 102f58b0 call dword ptr [0x102f8018] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8018))), 0x102f58b6u);
  /* 102f58b6 mov edi, eax */
  EDI = (EAX);
  /* 102f58b8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f58ba je 0x102f5923 */
  if (C.zf) goto L_102f5923;
  /* 102f58bc mov esi, dword ptr [0x102f8054] */
  ESI = (r32((uint32_t)(0x102f8054)));
  /* 102f58c2 push 0x102f84bc */
  push32((uint32_t)(0x102f84bcu));
  /* 102f58c7 push edi */
  push32((uint32_t)(EDI));
  /* 102f58c8 call esi */
  call_ind((uint32_t)(ESI), 0x102f58cau);
  /* 102f58ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f58cc mov dword ptr [0x102fa374], eax */
  w32((uint32_t)(0x102fa374), (EAX));
  /* 102f58d1 je 0x102f5923 */
  if (C.zf) goto L_102f5923;
  /* 102f58d3 push 0x102f84ac */
  push32((uint32_t)(0x102f84acu));
  /* 102f58d8 push edi */
  push32((uint32_t)(EDI));
  /* 102f58d9 call esi */
  call_ind((uint32_t)(ESI), 0x102f58dbu);
  /* 102f58db push 0x102f8498 */
  push32((uint32_t)(0x102f8498u));
  /* 102f58e0 push edi */
  push32((uint32_t)(EDI));
  /* 102f58e1 mov dword ptr [0x102fa378], eax */
  w32((uint32_t)(0x102fa378), (EAX));
  /* 102f58e6 call esi */
  call_ind((uint32_t)(ESI), 0x102f58e8u);
  /* 102f58e8 mov dword ptr [0x102fa37c], eax */
  w32((uint32_t)(0x102fa37c), (EAX));
L_102f58ed:;
  /* 102f58ed mov eax, dword ptr [0x102fa378] */
  EAX = (r32((uint32_t)(0x102fa378)));
  /* 102f58f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f58f4 je 0x102f590c */
  if (C.zf) goto L_102f590c;
  /* 102f58f6 call eax */
  call_ind((uint32_t)(EAX), 0x102f58f8u);
  /* 102f58f8 mov ebx, eax */
  EBX = (EAX);
  /* 102f58fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 102f58fc je 0x102f590c */
  if (C.zf) goto L_102f590c;
  /* 102f58fe mov eax, dword ptr [0x102fa37c] */
  EAX = (r32((uint32_t)(0x102fa37c)));
  /* 102f5903 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5905 je 0x102f590c */
  if (C.zf) goto L_102f590c;
  /* 102f5907 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5908 call eax */
  call_ind((uint32_t)(EAX), 0x102f590au);
  /* 102f590a mov ebx, eax */
  EBX = (EAX);
L_102f590c:;
  /* 102f590c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102f5910 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102f5914 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 102f5918 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5919 call dword ptr [0x102fa374] */
  call_ind((uint32_t)(r32((uint32_t)(0x102fa374))), 0x102f591fu);
L_102f591f:;
  /* 102f591f pop edi */
  EDI = (pop32());
  /* 102f5920 pop esi */
  ESI = (pop32());
  /* 102f5921 pop ebx */
  EBX = (pop32());
  /* 102f5922 ret  */
  ESPCHK(0x102f589eu, _esp0);
  ESP += 4; return;
L_102f5923:;
  /* 102f5923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f5925 jmp 0x102f591f */
  goto L_102f591f;
}

/* _strncpy @ 0x102f5930 (254 bytes, 109 insns) */
void f_102f5930(void) {
  FTRACE(0x102f5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5930 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 102f5934 push edi */
  push32((uint32_t)(EDI));
  /* 102f5935 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102f5937 je 0x102f59b3 */
  if (C.zf) goto L_102f59b3;
  /* 102f5939 push esi */
  push32((uint32_t)(ESI));
  /* 102f593a push ebx */
  push32((uint32_t)(EBX));
  /* 102f593b mov ebx, ecx */
  EBX = (ECX);
  /* 102f593d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 102f5941 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102f5947 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 102f594b jne 0x102f5954 */
  if (!C.zf) goto L_102f5954;
  /* 102f594d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f5950 jne 0x102f59c1 */
  if (!C.zf) goto L_102f59c1;
  /* 102f5952 jmp 0x102f5975 */
  goto L_102f5975;
L_102f5954:;
  /* 102f5954 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f5956 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f5957 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f5959 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f595a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f595b je 0x102f5982 */
  if (C.zf) goto L_102f5982;
  /* 102f595d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f595f je 0x102f598a */
  if (C.zf) goto L_102f598a;
  /* 102f5961 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102f5967 jne 0x102f5954 */
  if (!C.zf) goto L_102f5954;
  /* 102f5969 mov ebx, ecx */
  EBX = (ECX);
  /* 102f596b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f596e jne 0x102f59c1 */
  if (!C.zf) goto L_102f59c1;
L_102f5970:;
  /* 102f5970 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102f5973 je 0x102f5982 */
  if (C.zf) goto L_102f5982;
L_102f5975:;
  /* 102f5975 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f5977 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f5978 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f597a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f597b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102f597d je 0x102f59ae */
  if (C.zf) goto L_102f59ae;
  /* 102f597f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102f5980 jne 0x102f5975 */
  if (!C.zf) goto L_102f5975;
L_102f5982:;
  /* 102f5982 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102f5986 pop ebx */
  EBX = (pop32());
  /* 102f5987 pop esi */
  ESI = (pop32());
  /* 102f5988 pop edi */
  EDI = (pop32());
  /* 102f5989 ret  */
  ESPCHK(0x102f5930u, _esp0);
  ESP += 4; return;
L_102f598a:;
  /* 102f598a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102f5990 je 0x102f59a4 */
  if (C.zf) goto L_102f59a4;
L_102f5992:;
  /* 102f5992 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f5994 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f5995 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f5996 je 0x102f5a26 */
  if (C.zf) goto L_102f5a26;
  /* 102f599c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102f59a2 jne 0x102f5992 */
  if (!C.zf) goto L_102f5992;
L_102f59a4:;
  /* 102f59a4 mov ebx, ecx */
  EBX = (ECX);
  /* 102f59a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102f59a9 jne 0x102f5a17 */
  if (!C.zf) goto L_102f5a17;
L_102f59ab:;
  /* 102f59ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102f59ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102f59ae:;
  /* 102f59ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102f59af jne 0x102f59ab */
  if (!C.zf) goto L_102f59ab;
  /* 102f59b1 pop ebx */
  EBX = (pop32());
  /* 102f59b2 pop esi */
  ESI = (pop32());
L_102f59b3:;
  /* 102f59b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f59b7 pop edi */
  EDI = (pop32());
  /* 102f59b8 ret  */
  ESPCHK(0x102f5930u, _esp0);
  ESP += 4; return;
L_102f59b9:;
  /* 102f59b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102f59bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f59be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f59bf je 0x102f5970 */
  if (C.zf) goto L_102f5970;
L_102f59c1:;
  /* 102f59c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102f59c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 102f59c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f59ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f59cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102f59cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 102f59d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f59d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102f59d9 je 0x102f59b9 */
  if (C.zf) goto L_102f59b9;
  /* 102f59db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 102f59dd je 0x102f5a0b */
  if (C.zf) goto L_102f5a0b;
  /* 102f59df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 102f59e1 je 0x102f5a01 */
  if (C.zf) goto L_102f5a01;
  /* 102f59e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 102f59e9 je 0x102f59f7 */
  if (C.zf) goto L_102f59f7;
  /* 102f59eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 102f59f1 jne 0x102f59b9 */
  if (!C.zf) goto L_102f59b9;
  /* 102f59f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102f59f5 jmp 0x102f5a0f */
  goto L_102f5a0f;
L_102f59f7:;
  /* 102f59f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102f59fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102f59ff jmp 0x102f5a0f */
  goto L_102f5a0f;
L_102f5a01:;
  /* 102f5a01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102f5a07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102f5a09 jmp 0x102f5a0f */
  goto L_102f5a0f;
L_102f5a0b:;
  /* 102f5a0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f5a0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_102f5a0f:;
  /* 102f5a0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5a12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f5a14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f5a15 je 0x102f5a21 */
  if (C.zf) goto L_102f5a21;
L_102f5a17:;
  /* 102f5a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102f5a19:;
  /* 102f5a19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 102f5a1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5a1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f5a1f jne 0x102f5a19 */
  if (!C.zf) goto L_102f5a19;
L_102f5a21:;
  /* 102f5a21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102f5a24 jne 0x102f59ab */
  if (!C.zf) goto L_102f59ab;
L_102f5a26:;
  /* 102f5a26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102f5a2a pop ebx */
  EBX = (pop32());
  /* 102f5a2b pop esi */
  ESI = (pop32());
  /* 102f5a2c pop edi */
  EDI = (pop32());
  /* 102f5a2d ret  */
  ESPCHK(0x102f5930u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a2e @ 0x102f5a2e (318 bytes, 123 insns) */
void f_102f5a2e(void) {
  FTRACE(0x102f5a2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5a2e push ebp */
  push32((uint32_t)(EBP));
  /* 102f5a2f mov ebp, esp */
  EBP = (ESP);
  /* 102f5a31 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102f5a33 push 0x102f84e0 */
  push32((uint32_t)(0x102f84e0u));
  /* 102f5a38 push 0x102f67e0 */
  push32((uint32_t)(0x102f67e0u));
  /* 102f5a3d mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102f5a43 push eax */
  push32((uint32_t)(EAX));
  /* 102f5a44 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102f5a4b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f5a4e push ebx */
  push32((uint32_t)(EBX));
  /* 102f5a4f push esi */
  push32((uint32_t)(ESI));
  /* 102f5a50 push edi */
  push32((uint32_t)(EDI));
  /* 102f5a51 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102f5a54 mov eax, dword ptr [0x102fa394] */
  EAX = (r32((uint32_t)(0x102fa394)));
  /* 102f5a59 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f5a5b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5a5d jne 0x102f5a9d */
  if (!C.zf) goto L_102f5a9d;
  /* 102f5a5f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102f5a62 push eax */
  push32((uint32_t)(EAX));
  /* 102f5a63 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5a65 pop esi */
  ESI = (pop32());
  /* 102f5a66 push esi */
  push32((uint32_t)(ESI));
  /* 102f5a67 push 0x102f84d8 */
  push32((uint32_t)(0x102f84d8u));
  /* 102f5a6c push esi */
  push32((uint32_t)(ESI));
  /* 102f5a6d call dword ptr [0x102f8010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8010))), 0x102f5a73u);
  /* 102f5a73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5a75 je 0x102f5a7b */
  if (C.zf) goto L_102f5a7b;
  /* 102f5a77 mov eax, esi */
  EAX = (ESI);
  /* 102f5a79 jmp 0x102f5a98 */
  goto L_102f5a98;
L_102f5a7b:;
  /* 102f5a7b lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102f5a7e push eax */
  push32((uint32_t)(EAX));
  /* 102f5a7f push esi */
  push32((uint32_t)(ESI));
  /* 102f5a80 push 0x102f84d4 */
  push32((uint32_t)(0x102f84d4u));
  /* 102f5a85 push esi */
  push32((uint32_t)(ESI));
  /* 102f5a86 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5a87 call dword ptr [0x102f8014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8014))), 0x102f5a8du);
  /* 102f5a8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5a8f je 0x102f5b63 */
  if (C.zf) goto L_102f5b63;
  /* 102f5a95 push 2 */
  push32((uint32_t)(0x2u));
  /* 102f5a97 pop eax */
  EAX = (pop32());
L_102f5a98:;
  /* 102f5a98 mov dword ptr [0x102fa394], eax */
  w32((uint32_t)(0x102fa394), (EAX));
L_102f5a9d:;
  /* 102f5a9d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5aa0 jne 0x102f5ac6 */
  if (!C.zf) goto L_102f5ac6;
  /* 102f5aa2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102f5aa5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5aa7 jne 0x102f5aae */
  if (!C.zf) goto L_102f5aae;
  /* 102f5aa9 mov eax, dword ptr [0x102fa3ac] */
  EAX = (r32((uint32_t)(0x102fa3ac)));
L_102f5aae:;
  /* 102f5aae push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f5ab1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102f5ab4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f5ab7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f5aba push eax */
  push32((uint32_t)(EAX));
  /* 102f5abb call dword ptr [0x102f8014] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8014))), 0x102f5ac1u);
  /* 102f5ac1 jmp 0x102f5b65 */
  goto L_102f5b65;
L_102f5ac6:;
  /* 102f5ac6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5ac9 jne 0x102f5b63 */
  if (!C.zf) goto L_102f5b63;
  /* 102f5acf cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5ad2 jne 0x102f5adc */
  if (!C.zf) goto L_102f5adc;
  /* 102f5ad4 mov eax, dword ptr [0x102fa3bc] */
  EAX = (r32((uint32_t)(0x102fa3bc)));
  /* 102f5ad9 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_102f5adc:;
  /* 102f5adc push ebx */
  push32((uint32_t)(EBX));
  /* 102f5add push ebx */
  push32((uint32_t)(EBX));
  /* 102f5ade push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102f5ae1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f5ae4 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 102f5ae7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f5ae9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f5aeb and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102f5aee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f5aef push eax */
  push32((uint32_t)(EAX));
  /* 102f5af0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102f5af3 call dword ptr [0x102f801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f801c))), 0x102f5af9u);
  /* 102f5af9 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102f5afc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5afe je 0x102f5b63 */
  if (C.zf) goto L_102f5b63;
  /* 102f5b00 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 102f5b03 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 102f5b06 mov eax, edi */
  EAX = (EDI);
  /* 102f5b08 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5b0b and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102f5b0d call 0x102f68c0 */
  push32(0x102f5b12u); f_102f68c0();
  /* 102f5b12 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102f5b15 mov esi, esp */
  ESI = (ESP);
  /* 102f5b17 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 102f5b1a push edi */
  push32((uint32_t)(EDI));
  /* 102f5b1b push ebx */
  push32((uint32_t)(EBX));
  /* 102f5b1c push esi */
  push32((uint32_t)(ESI));
  /* 102f5b1d call 0x102f4290 */
  push32(0x102f5b22u); f_102f4290();
  /* 102f5b22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5b25 jmp 0x102f5b32 */
  goto L_102f5b32;
  /* 102f5b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5b29 pop eax */
  EAX = (pop32());
  /* 102f5b2a ret  */
  ESPCHK(0x102f5a2eu, _esp0);
  ESP += 4; return;
  /* 102f5b2b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102f5b2e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f5b30 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102f5b32:;
  /* 102f5b32 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f5b36 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5b38 je 0x102f5b63 */
  if (C.zf) goto L_102f5b63;
  /* 102f5b3a push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 102f5b3d push esi */
  push32((uint32_t)(ESI));
  /* 102f5b3e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102f5b41 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f5b44 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5b46 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102f5b49 call dword ptr [0x102f801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f801c))), 0x102f5b4fu);
  /* 102f5b4f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5b51 je 0x102f5b63 */
  if (C.zf) goto L_102f5b63;
  /* 102f5b53 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f5b56 push eax */
  push32((uint32_t)(EAX));
  /* 102f5b57 push esi */
  push32((uint32_t)(ESI));
  /* 102f5b58 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f5b5b call dword ptr [0x102f8010] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8010))), 0x102f5b61u);
  /* 102f5b61 jmp 0x102f5b65 */
  goto L_102f5b65;
L_102f5b63:;
  /* 102f5b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102f5b65:;
  /* 102f5b65 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 102f5b68 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102f5b6b mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102f5b72 pop edi */
  EDI = (pop32());
  /* 102f5b73 pop esi */
  ESI = (pop32());
  /* 102f5b74 pop ebx */
  EBX = (pop32());
  /* 102f5b75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f5b76 ret  */
  ESPCHK(0x102f5a2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005b77 @ 0x102f5b77 (511 bytes, 193 insns) */
void f_102f5b77(void) {
  FTRACE(0x102f5b77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5b77 push ebp */
  push32((uint32_t)(EBP));
  /* 102f5b78 mov ebp, esp */
  EBP = (ESP);
  /* 102f5b7a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 102f5b7c push 0x102f84f0 */
  push32((uint32_t)(0x102f84f0u));
  /* 102f5b81 push 0x102f67e0 */
  push32((uint32_t)(0x102f67e0u));
  /* 102f5b86 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 102f5b8c push eax */
  push32((uint32_t)(EAX));
  /* 102f5b8d mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 102f5b94 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f5b97 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5b98 push esi */
  push32((uint32_t)(ESI));
  /* 102f5b99 push edi */
  push32((uint32_t)(EDI));
  /* 102f5b9a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102f5b9d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102f5b9f cmp dword ptr [0x102fa3c4], edi */
  { uint32_t _a=(r32((uint32_t)(0x102fa3c4))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5ba5 jne 0x102f5bed */
  if (!C.zf) goto L_102f5bed;
  /* 102f5ba7 push edi */
  push32((uint32_t)(EDI));
  /* 102f5ba8 push edi */
  push32((uint32_t)(EDI));
  /* 102f5ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5bab pop ebx */
  EBX = (pop32());
  /* 102f5bac push ebx */
  push32((uint32_t)(EBX));
  /* 102f5bad push 0x102f84d8 */
  push32((uint32_t)(0x102f84d8u));
  /* 102f5bb2 mov esi, 0x100 */
  ESI = (0x100u);
  /* 102f5bb7 push esi */
  push32((uint32_t)(ESI));
  /* 102f5bb8 push edi */
  push32((uint32_t)(EDI));
  /* 102f5bb9 call dword ptr [0x102f8004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8004))), 0x102f5bbfu);
  /* 102f5bbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5bc1 je 0x102f5bcb */
  if (C.zf) goto L_102f5bcb;
  /* 102f5bc3 mov dword ptr [0x102fa3c4], ebx */
  w32((uint32_t)(0x102fa3c4), (EBX));
  /* 102f5bc9 jmp 0x102f5bed */
  goto L_102f5bed;
L_102f5bcb:;
  /* 102f5bcb push edi */
  push32((uint32_t)(EDI));
  /* 102f5bcc push edi */
  push32((uint32_t)(EDI));
  /* 102f5bcd push ebx */
  push32((uint32_t)(EBX));
  /* 102f5bce push 0x102f84d4 */
  push32((uint32_t)(0x102f84d4u));
  /* 102f5bd3 push esi */
  push32((uint32_t)(ESI));
  /* 102f5bd4 push edi */
  push32((uint32_t)(EDI));
  /* 102f5bd5 call dword ptr [0x102f8008] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8008))), 0x102f5bdbu);
  /* 102f5bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5bdd je 0x102f5d05 */
  if (C.zf) goto L_102f5d05;
  /* 102f5be3 mov dword ptr [0x102fa3c4], 2 */
  w32((uint32_t)(0x102fa3c4), (0x2u));
L_102f5bed:;
  /* 102f5bed cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5bf0 jle 0x102f5c02 */
  if ((C.zf||C.sf!=C.of)) goto L_102f5c02;
  /* 102f5bf2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f5bf5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102f5bf8 call 0x102f5d9b */
  push32(0x102f5bfdu); f_102f5d9b();
  /* 102f5bfd pop ecx */
  ECX = (pop32());
  /* 102f5bfe pop ecx */
  ECX = (pop32());
  /* 102f5bff mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_102f5c02:;
  /* 102f5c02 mov eax, dword ptr [0x102fa3c4] */
  EAX = (r32((uint32_t)(0x102fa3c4)));
  /* 102f5c07 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5c0a jne 0x102f5c29 */
  if (!C.zf) goto L_102f5c29;
  /* 102f5c0c push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102f5c0f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102f5c12 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f5c15 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102f5c18 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f5c1b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f5c1e call dword ptr [0x102f8008] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8008))), 0x102f5c24u);
  /* 102f5c24 jmp 0x102f5d07 */
  goto L_102f5d07;
L_102f5c29:;
  /* 102f5c29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5c2c jne 0x102f5d05 */
  if (!C.zf) goto L_102f5d05;
  /* 102f5c32 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5c35 jne 0x102f5c3f */
  if (!C.zf) goto L_102f5c3f;
  /* 102f5c37 mov eax, dword ptr [0x102fa3bc] */
  EAX = (r32((uint32_t)(0x102fa3bc)));
  /* 102f5c3c mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_102f5c3f:;
  /* 102f5c3f push edi */
  push32((uint32_t)(EDI));
  /* 102f5c40 push edi */
  push32((uint32_t)(EDI));
  /* 102f5c41 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f5c44 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102f5c47 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 102f5c4a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f5c4c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f5c4e and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 102f5c51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f5c52 push eax */
  push32((uint32_t)(EAX));
  /* 102f5c53 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102f5c56 call dword ptr [0x102f801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f801c))), 0x102f5c5cu);
  /* 102f5c5c mov ebx, eax */
  EBX = (EAX);
  /* 102f5c5e mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 102f5c61 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5c63 je 0x102f5d05 */
  if (C.zf) goto L_102f5d05;
  /* 102f5c69 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 102f5c6c lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 102f5c6f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5c72 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102f5c74 call 0x102f68c0 */
  push32(0x102f5c79u); f_102f68c0();
  /* 102f5c79 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102f5c7c mov eax, esp */
  EAX = (ESP);
  /* 102f5c7e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 102f5c81 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f5c85 jmp 0x102f5c9a */
  goto L_102f5c9a;
  /* 102f5c87 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5c89 pop eax */
  EAX = (pop32());
  /* 102f5c8a ret  */
  ESPCHK(0x102f5b77u, _esp0);
  ESP += 4; return;
  /* 102f5c8b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102f5c8e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102f5c90 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 102f5c93 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f5c97 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_102f5c9a:;
  /* 102f5c9a cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5c9d je 0x102f5d05 */
  if (C.zf) goto L_102f5d05;
  /* 102f5c9f push ebx */
  push32((uint32_t)(EBX));
  /* 102f5ca0 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102f5ca3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f5ca6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 102f5ca9 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5cab push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102f5cae call dword ptr [0x102f801c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f801c))), 0x102f5cb4u);
  /* 102f5cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5cb6 je 0x102f5d05 */
  if (C.zf) goto L_102f5d05;
  /* 102f5cb8 push edi */
  push32((uint32_t)(EDI));
  /* 102f5cb9 push edi */
  push32((uint32_t)(EDI));
  /* 102f5cba push ebx */
  push32((uint32_t)(EBX));
  /* 102f5cbb push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102f5cbe push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f5cc1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f5cc4 call dword ptr [0x102f8004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8004))), 0x102f5ccau);
  /* 102f5cca mov esi, eax */
  ESI = (EAX);
  /* 102f5ccc mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 102f5ccf cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5cd1 je 0x102f5d05 */
  if (C.zf) goto L_102f5d05;
  /* 102f5cd3 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 102f5cd7 je 0x102f5d19 */
  if (C.zf) goto L_102f5d19;
  /* 102f5cd9 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5cdc je 0x102f5d94 */
  if (C.zf) goto L_102f5d94;
  /* 102f5ce2 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5ce5 jg 0x102f5d05 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f5d05;
  /* 102f5ce7 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102f5cea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 102f5ced push ebx */
  push32((uint32_t)(EBX));
  /* 102f5cee push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102f5cf1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f5cf4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f5cf7 call dword ptr [0x102f8004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8004))), 0x102f5cfdu);
  /* 102f5cfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5cff jne 0x102f5d94 */
  if (!C.zf) goto L_102f5d94;
L_102f5d05:;
  /* 102f5d05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102f5d07:;
  /* 102f5d07 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 102f5d0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102f5d0d mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 102f5d14 pop edi */
  EDI = (pop32());
  /* 102f5d15 pop esi */
  ESI = (pop32());
  /* 102f5d16 pop ebx */
  EBX = (pop32());
  /* 102f5d17 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f5d18 ret  */
  ESPCHK(0x102f5b77u, _esp0);
  ESP += 4; return;
L_102f5d19:;
  /* 102f5d19 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102f5d20 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 102f5d23 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5d26 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 102f5d28 call 0x102f68c0 */
  push32(0x102f5d2du); f_102f68c0();
  /* 102f5d2d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 102f5d30 mov ebx, esp */
  EBX = (ESP);
  /* 102f5d32 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 102f5d35 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f5d39 jmp 0x102f5d4d */
  goto L_102f5d4d;
  /* 102f5d3b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5d3d pop eax */
  EAX = (pop32());
  /* 102f5d3e ret  */
  ESPCHK(0x102f5b77u, _esp0);
  ESP += 4; return;
  /* 102f5d3f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 102f5d42 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 102f5d44 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f5d46 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f5d4a mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_102f5d4d:;
  /* 102f5d4d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5d4f je 0x102f5d05 */
  if (C.zf) goto L_102f5d05;
  /* 102f5d51 push esi */
  push32((uint32_t)(ESI));
  /* 102f5d52 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5d53 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 102f5d56 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 102f5d59 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 102f5d5c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f5d5f call dword ptr [0x102f8004] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f8004))), 0x102f5d65u);
  /* 102f5d65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5d67 je 0x102f5d05 */
  if (C.zf) goto L_102f5d05;
  /* 102f5d69 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5d6c push edi */
  push32((uint32_t)(EDI));
  /* 102f5d6d push edi */
  push32((uint32_t)(EDI));
  /* 102f5d6e jne 0x102f5d74 */
  if (!C.zf) goto L_102f5d74;
  /* 102f5d70 push edi */
  push32((uint32_t)(EDI));
  /* 102f5d71 push edi */
  push32((uint32_t)(EDI));
  /* 102f5d72 jmp 0x102f5d7a */
  goto L_102f5d7a;
L_102f5d74:;
  /* 102f5d74 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 102f5d77 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_102f5d7a:;
  /* 102f5d7a push esi */
  push32((uint32_t)(ESI));
  /* 102f5d7b push ebx */
  push32((uint32_t)(EBX));
  /* 102f5d7c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 102f5d81 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 102f5d84 call dword ptr [0x102f809c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102f809c))), 0x102f5d8au);
  /* 102f5d8a mov esi, eax */
  ESI = (EAX);
  /* 102f5d8c cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5d8e je 0x102f5d05 */
  if (C.zf) goto L_102f5d05;
L_102f5d94:;
  /* 102f5d94 mov eax, esi */
  EAX = (ESI);
  /* 102f5d96 jmp 0x102f5d07 */
  goto L_102f5d07;
}

/* FUN_10005d9b @ 0x102f5d9b (43 bytes, 20 insns) */
void f_102f5d9b(void) {
  FTRACE(0x102f5d9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5d9b mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f5d9f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f5da3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102f5da5 push esi */
  push32((uint32_t)(ESI));
  /* 102f5da6 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 102f5da9 je 0x102f5db8 */
  if (C.zf) goto L_102f5db8;
L_102f5dab:;
  /* 102f5dab cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5dae je 0x102f5db8 */
  if (C.zf) goto L_102f5db8;
  /* 102f5db0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f5db1 mov esi, ecx */
  ESI = (ECX);
  /* 102f5db3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f5db4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f5db6 jne 0x102f5dab */
  if (!C.zf) goto L_102f5dab;
L_102f5db8:;
  /* 102f5db8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5dbb pop esi */
  ESI = (pop32());
  /* 102f5dbc jne 0x102f5dc3 */
  if (!C.zf) goto L_102f5dc3;
  /* 102f5dbe sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f5dc2 ret  */
  ESPCHK(0x102f5d9bu, _esp0);
  ESP += 4; return;
L_102f5dc3:;
  /* 102f5dc3 mov eax, edx */
  EAX = (EDX);
  /* 102f5dc5 ret  */
  ESPCHK(0x102f5d9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005dc6 @ 0x102f5dc6 (33 bytes, 15 insns) */
void f_102f5dc6(void) {
  FTRACE(0x102f5dc6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5dc6 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f5dca push esi */
  push32((uint32_t)(ESI));
  /* 102f5dcb mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 102f5dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f5dd1 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 102f5dd4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5dd6 jb 0x102f5ddc */
  if (C.cf) goto L_102f5ddc;
  /* 102f5dd8 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5dda jae 0x102f5ddf */
  if (!C.cf) goto L_102f5ddf;
L_102f5ddc:;
  /* 102f5ddc push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5dde pop eax */
  EAX = (pop32());
L_102f5ddf:;
  /* 102f5ddf mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 102f5de3 pop esi */
  ESI = (pop32());
  /* 102f5de4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102f5de6 ret  */
  ESPCHK(0x102f5dc6u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x102f5de7 (94 bytes, 38 insns) */
void f_102f5de7(void) {
  FTRACE(0x102f5de7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5de7 push esi */
  push32((uint32_t)(ESI));
  /* 102f5de8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 102f5dec push edi */
  push32((uint32_t)(EDI));
  /* 102f5ded mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 102f5df1 push esi */
  push32((uint32_t)(ESI));
  /* 102f5df2 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 102f5df4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 102f5df6 call 0x102f5dc6 */
  push32(0x102f5dfbu); f_102f5dc6();
  /* 102f5dfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5dfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5e00 je 0x102f5e19 */
  if (C.zf) goto L_102f5e19;
  /* 102f5e02 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 102f5e05 push eax */
  push32((uint32_t)(EAX));
  /* 102f5e06 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5e08 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 102f5e0a call 0x102f5dc6 */
  push32(0x102f5e0fu); f_102f5dc6();
  /* 102f5e0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5e12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5e14 je 0x102f5e19 */
  if (C.zf) goto L_102f5e19;
  /* 102f5e16 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_102f5e19:;
  /* 102f5e19 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 102f5e1c push eax */
  push32((uint32_t)(EAX));
  /* 102f5e1d push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 102f5e20 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 102f5e22 call 0x102f5dc6 */
  push32(0x102f5e27u); f_102f5dc6();
  /* 102f5e27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f5e2c je 0x102f5e31 */
  if (C.zf) goto L_102f5e31;
  /* 102f5e2e inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_102f5e31:;
  /* 102f5e31 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 102f5e34 push eax */
  push32((uint32_t)(EAX));
  /* 102f5e35 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 102f5e38 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 102f5e3a call 0x102f5dc6 */
  push32(0x102f5e3fu); f_102f5dc6();
  /* 102f5e3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5e42 pop edi */
  EDI = (pop32());
  /* 102f5e43 pop esi */
  ESI = (pop32());
  /* 102f5e44 ret  */
  ESPCHK(0x102f5de7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e45 @ 0x102f5e45 (46 bytes, 21 insns) */
void f_102f5e45(void) {
  FTRACE(0x102f5e45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5e45 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f5e49 push esi */
  push32((uint32_t)(ESI));
  /* 102f5e4a push edi */
  push32((uint32_t)(EDI));
  /* 102f5e4b mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 102f5e4d mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 102f5e50 mov ecx, esi */
  ECX = (ESI);
  /* 102f5e52 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5e54 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 102f5e56 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 102f5e59 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 102f5e5c or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 102f5e5e mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 102f5e61 mov edx, edi */
  EDX = (EDI);
  /* 102f5e63 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 102f5e66 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 102f5e69 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102f5e6b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 102f5e6d pop edi */
  EDI = (pop32());
  /* 102f5e6e mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 102f5e71 pop esi */
  ESI = (pop32());
  /* 102f5e72 ret  */
  ESPCHK(0x102f5e45u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e73 @ 0x102f5e73 (45 bytes, 21 insns) */
void f_102f5e73(void) {
  FTRACE(0x102f5e73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5e73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 102f5e77 push esi */
  push32((uint32_t)(ESI));
  /* 102f5e78 push edi */
  push32((uint32_t)(EDI));
  /* 102f5e79 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 102f5e7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 102f5e7f mov esi, edx */
  ESI = (EDX);
  /* 102f5e81 mov edi, ecx */
  EDI = (ECX);
  /* 102f5e83 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 102f5e86 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102f5e88 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 102f5e8a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 102f5e8d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102f5e8f shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 102f5e92 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102f5e94 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 102f5e96 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 102f5e98 pop edi */
  EDI = (pop32());
  /* 102f5e99 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 102f5e9c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 102f5e9e pop esi */
  ESI = (pop32());
  /* 102f5e9f ret  */
  ESPCHK(0x102f5e73u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ea0 @ 0x102f5ea0 (199 bytes, 76 insns) */
void f_102f5ea0(void) {
  FTRACE(0x102f5ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 102f5ea1 mov ebp, esp */
  EBP = (ESP);
  /* 102f5ea3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f5ea6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f5ea9 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5eaa mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f5ead xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f5eaf cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5eb1 push esi */
  push32((uint32_t)(ESI));
  /* 102f5eb2 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 102f5eb9 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 102f5ebb mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 102f5ebe mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 102f5ec1 jbe 0x102f5f14 */
  if ((C.cf||C.zf)) goto L_102f5f14;
  /* 102f5ec3 push edi */
  push32((uint32_t)(EDI));
  /* 102f5ec4 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_102f5ec7:;
  /* 102f5ec7 mov esi, ebx */
  ESI = (EBX);
  /* 102f5ec9 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 102f5ecc movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f5ecd movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f5ece push ebx */
  push32((uint32_t)(EBX));
  /* 102f5ecf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f5ed0 call 0x102f5e45 */
  push32(0x102f5ed5u); f_102f5e45();
  /* 102f5ed5 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5ed6 call 0x102f5e45 */
  push32(0x102f5edbu); f_102f5e45();
  /* 102f5edb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f5ede push eax */
  push32((uint32_t)(EAX));
  /* 102f5edf push ebx */
  push32((uint32_t)(EBX));
  /* 102f5ee0 call 0x102f5de7 */
  push32(0x102f5ee5u); f_102f5de7();
  /* 102f5ee5 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5ee6 call 0x102f5e45 */
  push32(0x102f5eebu); f_102f5e45();
  /* 102f5eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f5eee and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 102f5ef2 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 102f5ef6 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 102f5ef9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 102f5efc lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f5eff push eax */
  push32((uint32_t)(EAX));
  /* 102f5f00 push ebx */
  push32((uint32_t)(EBX));
  /* 102f5f01 call 0x102f5de7 */
  push32(0x102f5f06u); f_102f5de7();
  /* 102f5f06 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f5f09 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 102f5f0c dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 102f5f0f jne 0x102f5ec7 */
  if (!C.zf) goto L_102f5ec7;
  /* 102f5f11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f5f13 pop edi */
  EDI = (pop32());
L_102f5f14:;
  /* 102f5f14 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5f17 jne 0x102f5f41 */
  if (!C.zf) goto L_102f5f41;
  /* 102f5f19 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 102f5f1c mov eax, ecx */
  EAX = (ECX);
  /* 102f5f1e shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102f5f21 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 102f5f24 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 102f5f26 mov esi, eax */
  ESI = (EAX);
  /* 102f5f28 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 102f5f2b shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 102f5f2e or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 102f5f30 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102f5f33 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f5f3a mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 102f5f3d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 102f5f3f jmp 0x102f5f14 */
  goto L_102f5f14;
L_102f5f41:;
  /* 102f5f41 mov esi, 0x8000 */
  ESI = (0x8000u);
L_102f5f46:;
  /* 102f5f46 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 102f5f49 jne 0x102f5f5b */
  if (!C.zf) goto L_102f5f5b;
  /* 102f5f4b push ebx */
  push32((uint32_t)(EBX));
  /* 102f5f4c call 0x102f5e45 */
  push32(0x102f5f51u); f_102f5e45();
  /* 102f5f51 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f5f58 pop ecx */
  ECX = (pop32());
  /* 102f5f59 jmp 0x102f5f46 */
  goto L_102f5f46;
L_102f5f5b:;
  /* 102f5f5b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 102f5f5f pop esi */
  ESI = (pop32());
  /* 102f5f60 mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 102f5f64 pop ebx */
  EBX = (pop32());
  /* 102f5f65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f5f66 ret  */
  ESPCHK(0x102f5ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f67 @ 0x102f5f67 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_102f5f67(void) {
  FTRACE(0x102f5f67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f5f67 push ebp */
  push32((uint32_t)(EBP));
  /* 102f5f68 mov ebp, esp */
  EBP = (ESP);
  /* 102f5f6a sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f5f6d push ebx */
  push32((uint32_t)(EBX));
  /* 102f5f6e push esi */
  push32((uint32_t)(ESI));
  /* 102f5f6f push edi */
  push32((uint32_t)(EDI));
  /* 102f5f70 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f5f73 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 102f5f76 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f5f78 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102f5f7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f5f7d pop edx */
  EDX = (pop32());
  /* 102f5f7e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 102f5f81 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 102f5f84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102f5f87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 102f5f8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 102f5f8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102f5f90 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 102f5f93 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 102f5f96 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 102f5f99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 102f5f9c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 102f5f9f mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_102f5fa2:;
  /* 102f5fa2 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 102f5fa4 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5fa7 je 0x102f5fb8 */
  if (C.zf) goto L_102f5fb8;
  /* 102f5fa9 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5fac je 0x102f5fb8 */
  if (C.zf) goto L_102f5fb8;
  /* 102f5fae cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5fb1 je 0x102f5fb8 */
  if (C.zf) goto L_102f5fb8;
  /* 102f5fb3 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5fb6 jne 0x102f5fbb */
  if (!C.zf) goto L_102f5fbb;
L_102f5fb8:;
  /* 102f5fb8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f5fb9 jmp 0x102f5fa2 */
  goto L_102f5fa2;
L_102f5fbb:;
  /* 102f5fbb push 4 */
  push32((uint32_t)(0x4u));
  /* 102f5fbd pop esi */
  ESI = (pop32());
L_102f5fbe:;
  /* 102f5fbe mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f5fc0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f5fc1 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f5fc4 ja 0x102f6241 */
  if ((!C.cf&&!C.zf)) goto L_102f6241;
  /* 102f5fca jmp dword ptr [eax*4 + 0x102f6408] */
  switch (EAX) {
    case 0: goto L_102f5fd1;
    case 1: goto L_102f6020;
    case 2: goto L_102f6077;
    case 3: goto L_102f60a1;
    case 4: goto L_102f60fc;
    case 5: goto L_102f6173;
    case 6: goto L_102f61a9;
    case 7: goto L_102f61f3;
    case 8: goto L_102f61d2;
    case 9: goto L_102f6257;
    case 10: goto L_102f6241;
    case 11: goto L_102f620d;
    default: x86_unimpl("switch@0x102f5fca out of table"); return;
  }
L_102f5fd1:;
  /* 102f5fd1 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5fd4 jl 0x102f5fe2 */
  if ((C.sf!=C.of)) goto L_102f5fe2;
  /* 102f5fd6 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5fd9 jg 0x102f5fe2 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f5fe2;
L_102f5fdb:;
  /* 102f5fdb push 3 */
  push32((uint32_t)(0x3u));
  /* 102f5fdd jmp 0x102f61ff */
  goto L_102f61ff;
L_102f5fe2:;
  /* 102f5fe2 cmp bl, byte ptr [0x102f936c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x102f936c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f5fe8 jne 0x102f5ff1 */
  if (!C.zf) goto L_102f5ff1;
L_102f5fea:;
  /* 102f5fea push 5 */
  push32((uint32_t)(0x5u));
  /* 102f5fec jmp 0x102f6237 */
  goto L_102f6237;
L_102f5ff1:;
  /* 102f5ff1 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102f5ff4 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f5ff7 je 0x102f6017 */
  if (C.zf) goto L_102f6017;
  /* 102f5ff9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f5ffa dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f5ffb je 0x102f600b */
  if (C.zf) goto L_102f600b;
  /* 102f5ffd sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f6000 jne 0x102f62da */
  if (!C.zf) goto L_102f62da;
  /* 102f6006 jmp 0x102f609a */
  goto L_102f609a;
L_102f600b:;
  /* 102f600b push 2 */
  push32((uint32_t)(0x2u));
  /* 102f600d mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 102f6014 pop eax */
  EAX = (pop32());
  /* 102f6015 jmp 0x102f5fbe */
  goto L_102f5fbe;
L_102f6017:;
  /* 102f6017 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 102f601b push 2 */
  push32((uint32_t)(0x2u));
  /* 102f601d pop eax */
  EAX = (pop32());
  /* 102f601e jmp 0x102f5fbe */
  goto L_102f5fbe;
L_102f6020:;
  /* 102f6020 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6023 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 102f6026 jl 0x102f602d */
  if ((C.sf!=C.of)) goto L_102f602d;
  /* 102f6028 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f602b jle 0x102f5fdb */
  if ((C.zf||C.sf!=C.of)) goto L_102f5fdb;
L_102f602d:;
  /* 102f602d cmp bl, byte ptr [0x102f936c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x102f936c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6033 je 0x102f60f5 */
  if (C.zf) goto L_102f60f5;
  /* 102f6039 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f603c je 0x102f606f */
  if (C.zf) goto L_102f606f;
  /* 102f603e cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6041 je 0x102f606f */
  if (C.zf) goto L_102f606f;
  /* 102f6043 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6046 je 0x102f609a */
  if (C.zf) goto L_102f609a;
L_102f6048:;
  /* 102f6048 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f604b jle 0x102f62da */
  if ((C.zf||C.sf!=C.of)) goto L_102f62da;
  /* 102f6051 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6054 jle 0x102f6068 */
  if ((C.zf||C.sf!=C.of)) goto L_102f6068;
  /* 102f6056 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6059 jle 0x102f62da */
  if ((C.zf||C.sf!=C.of)) goto L_102f62da;
  /* 102f605f cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6062 jg 0x102f62da */
  if ((!C.zf&&C.sf==C.of)) goto L_102f62da;
L_102f6068:;
  /* 102f6068 push 6 */
  push32((uint32_t)(0x6u));
  /* 102f606a jmp 0x102f6237 */
  goto L_102f6237;
L_102f606f:;
  /* 102f606f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f6070 push 0xb */
  push32((uint32_t)(0xbu));
  /* 102f6072 jmp 0x102f6237 */
  goto L_102f6237;
L_102f6077:;
  /* 102f6077 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f607a jl 0x102f6085 */
  if ((C.sf!=C.of)) goto L_102f6085;
  /* 102f607c cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f607f jle 0x102f5fdb */
  if ((C.zf||C.sf!=C.of)) goto L_102f5fdb;
L_102f6085:;
  /* 102f6085 cmp bl, byte ptr [0x102f936c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x102f936c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f608b je 0x102f5fea */
  if (C.zf) goto L_102f5fea;
  /* 102f6091 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6094 jne 0x102f624f */
  if (!C.zf) goto L_102f624f;
L_102f609a:;
  /* 102f609a mov eax, edx */
  EAX = (EDX);
  /* 102f609c jmp 0x102f5fbe */
  goto L_102f5fbe;
L_102f60a1:;
  /* 102f60a1 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_102f60a4:;
  /* 102f60a4 cmp dword ptr [0x102f9368], edx */
  { uint32_t _a=(r32((uint32_t)(0x102f9368))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f60aa jle 0x102f60bd */
  if ((C.zf||C.sf!=C.of)) goto L_102f60bd;
  /* 102f60ac movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f60af push esi */
  push32((uint32_t)(ESI));
  /* 102f60b0 push eax */
  push32((uint32_t)(EAX));
  /* 102f60b1 call 0x102f3a76 */
  push32(0x102f60b6u); f_102f3a76();
  /* 102f60b6 pop ecx */
  ECX = (pop32());
  /* 102f60b7 pop ecx */
  ECX = (pop32());
  /* 102f60b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f60ba pop edx */
  EDX = (pop32());
  /* 102f60bb jmp 0x102f60cb */
  goto L_102f60cb;
L_102f60bd:;
  /* 102f60bd mov ecx, dword ptr [0x102f9374] */
  ECX = (r32((uint32_t)(0x102f9374)));
  /* 102f60c3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f60c6 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 102f60c9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_102f60cb:;
  /* 102f60cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f60cd je 0x102f60ed */
  if (C.zf) goto L_102f60ed;
  /* 102f60cf cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f60d3 jae 0x102f60e5 */
  if (!C.cf) goto L_102f60e5;
  /* 102f60d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f60d8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102f60db sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f60de inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 102f60e1 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 102f60e3 jmp 0x102f60e8 */
  goto L_102f60e8;
L_102f60e5:;
  /* 102f60e5 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_102f60e8:;
  /* 102f60e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f60ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f60eb jmp 0x102f60a4 */
  goto L_102f60a4;
L_102f60ed:;
  /* 102f60ed cmp bl, byte ptr [0x102f936c] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x102f936c))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f60f3 jne 0x102f615c */
  if (!C.zf) goto L_102f615c;
L_102f60f5:;
  /* 102f60f5 mov eax, esi */
  EAX = (ESI);
  /* 102f60f7 jmp 0x102f5fbe */
  goto L_102f5fbe;
L_102f60fc:;
  /* 102f60fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6100 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 102f6103 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 102f6106 jne 0x102f6115 */
  if (!C.zf) goto L_102f6115;
L_102f6108:;
  /* 102f6108 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f610b jne 0x102f6115 */
  if (!C.zf) goto L_102f6115;
  /* 102f610d dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 102f6110 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f6112 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f6113 jmp 0x102f6108 */
  goto L_102f6108;
L_102f6115:;
  /* 102f6115 cmp dword ptr [0x102f9368], edx */
  { uint32_t _a=(r32((uint32_t)(0x102f9368))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f611b jle 0x102f612e */
  if ((C.zf||C.sf!=C.of)) goto L_102f612e;
  /* 102f611d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f6120 push esi */
  push32((uint32_t)(ESI));
  /* 102f6121 push eax */
  push32((uint32_t)(EAX));
  /* 102f6122 call 0x102f3a76 */
  push32(0x102f6127u); f_102f3a76();
  /* 102f6127 pop ecx */
  ECX = (pop32());
  /* 102f6128 pop ecx */
  ECX = (pop32());
  /* 102f6129 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f612b pop edx */
  EDX = (pop32());
  /* 102f612c jmp 0x102f613c */
  goto L_102f613c;
L_102f612e:;
  /* 102f612e mov ecx, dword ptr [0x102f9374] */
  ECX = (r32((uint32_t)(0x102f9374)));
  /* 102f6134 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f6137 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 102f613a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_102f613c:;
  /* 102f613c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f613e je 0x102f615c */
  if (C.zf) goto L_102f615c;
  /* 102f6140 cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6144 jae 0x102f6157 */
  if (!C.cf) goto L_102f6157;
  /* 102f6146 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f6149 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 102f614c sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f614f inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 102f6152 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 102f6155 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_102f6157:;
  /* 102f6157 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f6159 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f615a jmp 0x102f6115 */
  goto L_102f6115;
L_102f615c:;
  /* 102f615c cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f615f je 0x102f606f */
  if (C.zf) goto L_102f606f;
  /* 102f6165 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6168 je 0x102f606f */
  if (C.zf) goto L_102f606f;
  /* 102f616e jmp 0x102f6048 */
  goto L_102f6048;
L_102f6173:;
  /* 102f6173 cmp dword ptr [0x102f9368], edx */
  { uint32_t _a=(r32((uint32_t)(0x102f9368))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6179 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 102f617c jle 0x102f618f */
  if ((C.zf||C.sf!=C.of)) goto L_102f618f;
  /* 102f617e movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f6181 push esi */
  push32((uint32_t)(ESI));
  /* 102f6182 push eax */
  push32((uint32_t)(EAX));
  /* 102f6183 call 0x102f3a76 */
  push32(0x102f6188u); f_102f3a76();
  /* 102f6188 pop ecx */
  ECX = (pop32());
  /* 102f6189 pop ecx */
  ECX = (pop32());
  /* 102f618a push 1 */
  push32((uint32_t)(0x1u));
  /* 102f618c pop edx */
  EDX = (pop32());
  /* 102f618d jmp 0x102f619d */
  goto L_102f619d;
L_102f618f:;
  /* 102f618f mov ecx, dword ptr [0x102f9374] */
  ECX = (r32((uint32_t)(0x102f9374)));
  /* 102f6195 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f6198 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 102f619b and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_102f619d:;
  /* 102f619d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f619f je 0x102f624f */
  if (C.zf) goto L_102f624f;
  /* 102f61a5 mov eax, esi */
  EAX = (ESI);
  /* 102f61a7 jmp 0x102f6200 */
  goto L_102f6200;
L_102f61a9:;
  /* 102f61a9 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 102f61ac cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f61af mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 102f61b2 jl 0x102f61b9 */
  if ((C.sf!=C.of)) goto L_102f61b9;
  /* 102f61b4 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f61b7 jle 0x102f61fd */
  if ((C.zf||C.sf!=C.of)) goto L_102f61fd;
L_102f61b9:;
  /* 102f61b9 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102f61bc sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f61bf je 0x102f6235 */
  if (C.zf) goto L_102f6235;
  /* 102f61c1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f61c2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f61c3 je 0x102f6229 */
  if (C.zf) goto L_102f6229;
  /* 102f61c5 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f61c8 jne 0x102f62dd */
  if (!C.zf) goto L_102f62dd;
L_102f61ce:;
  /* 102f61ce push 8 */
  push32((uint32_t)(0x8u));
  /* 102f61d0 jmp 0x102f6237 */
  goto L_102f6237;
L_102f61d2:;
  /* 102f61d2 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_102f61d5:;
  /* 102f61d5 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f61d8 jne 0x102f61df */
  if (!C.zf) goto L_102f61df;
  /* 102f61da mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f61dc inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f61dd jmp 0x102f61d5 */
  goto L_102f61d5;
L_102f61df:;
  /* 102f61df cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f61e2 jl 0x102f62da */
  if ((C.sf!=C.of)) goto L_102f62da;
  /* 102f61e8 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f61eb jg 0x102f62da */
  if ((!C.zf&&C.sf==C.of)) goto L_102f62da;
  /* 102f61f1 jmp 0x102f61fd */
  goto L_102f61fd;
L_102f61f3:;
  /* 102f61f3 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f61f6 jl 0x102f6206 */
  if ((C.sf!=C.of)) goto L_102f6206;
  /* 102f61f8 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f61fb jg 0x102f6206 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f6206;
L_102f61fd:;
  /* 102f61fd push 9 */
  push32((uint32_t)(0x9u));
L_102f61ff:;
  /* 102f61ff pop eax */
  EAX = (pop32());
L_102f6200:;
  /* 102f6200 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f6201 jmp 0x102f5fbe */
  goto L_102f5fbe;
L_102f6206:;
  /* 102f6206 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6209 jne 0x102f624f */
  if (!C.zf) goto L_102f624f;
  /* 102f620b jmp 0x102f61ce */
  goto L_102f61ce;
L_102f620d:;
  /* 102f620d cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6211 je 0x102f623d */
  if (C.zf) goto L_102f623d;
  /* 102f6213 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102f6216 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 102f6219 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f621c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 102f621f je 0x102f6235 */
  if (C.zf) goto L_102f6235;
  /* 102f6221 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f6222 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f6223 jne 0x102f62dd */
  if (!C.zf) goto L_102f62dd;
L_102f6229:;
  /* 102f6229 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 102f622d push 7 */
  push32((uint32_t)(0x7u));
  /* 102f622f pop eax */
  EAX = (pop32());
  /* 102f6230 jmp 0x102f5fbe */
  goto L_102f5fbe;
L_102f6235:;
  /* 102f6235 push 7 */
  push32((uint32_t)(0x7u));
L_102f6237:;
  /* 102f6237 pop eax */
  EAX = (pop32());
  /* 102f6238 jmp 0x102f5fbe */
  goto L_102f5fbe;
L_102f623d:;
  /* 102f623d push 0xa */
  push32((uint32_t)(0xau));
  /* 102f623f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f6240 pop eax */
  EAX = (pop32());
L_102f6241:;
  /* 102f6241 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6244 je 0x102f62df */
  if (C.zf) goto L_102f62df;
  /* 102f624a jmp 0x102f5fbe */
  goto L_102f5fbe;
L_102f624f:;
  /* 102f624f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f6252 jmp 0x102f62df */
  goto L_102f62df;
L_102f6257:;
  /* 102f6257 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 102f625e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_102f6260:;
  /* 102f6260 cmp dword ptr [0x102f9368], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102f9368))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6267 jle 0x102f6278 */
  if ((C.zf||C.sf!=C.of)) goto L_102f6278;
  /* 102f6269 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f626c push 4 */
  push32((uint32_t)(0x4u));
  /* 102f626e push eax */
  push32((uint32_t)(EAX));
  /* 102f626f call 0x102f3a76 */
  push32(0x102f6274u); f_102f3a76();
  /* 102f6274 pop ecx */
  ECX = (pop32());
  /* 102f6275 pop ecx */
  ECX = (pop32());
  /* 102f6276 jmp 0x102f6287 */
  goto L_102f6287;
L_102f6278:;
  /* 102f6278 mov ecx, dword ptr [0x102f9374] */
  ECX = (r32((uint32_t)(0x102f9374)));
  /* 102f627e movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f6281 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 102f6284 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_102f6287:;
  /* 102f6287 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f6289 je 0x102f62a7 */
  if (C.zf) goto L_102f62a7;
  /* 102f628b movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 102f628e lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 102f6291 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 102f6295 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f629b jg 0x102f62a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f62a2;
  /* 102f629d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f629f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f62a0 jmp 0x102f6260 */
  goto L_102f6260;
L_102f62a2:;
  /* 102f62a2 mov esi, 0x1451 */
  ESI = (0x1451u);
L_102f62a7:;
  /* 102f62a7 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_102f62aa:;
  /* 102f62aa cmp dword ptr [0x102f9368], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102f9368))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f62b1 jle 0x102f62c2 */
  if ((C.zf||C.sf!=C.of)) goto L_102f62c2;
  /* 102f62b3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f62b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 102f62b8 push eax */
  push32((uint32_t)(EAX));
  /* 102f62b9 call 0x102f3a76 */
  push32(0x102f62beu); f_102f3a76();
  /* 102f62be pop ecx */
  ECX = (pop32());
  /* 102f62bf pop ecx */
  ECX = (pop32());
  /* 102f62c0 jmp 0x102f62d1 */
  goto L_102f62d1;
L_102f62c2:;
  /* 102f62c2 mov ecx, dword ptr [0x102f9374] */
  ECX = (r32((uint32_t)(0x102f9374)));
  /* 102f62c8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 102f62cb mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 102f62ce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_102f62d1:;
  /* 102f62d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f62d3 je 0x102f62da */
  if (C.zf) goto L_102f62da;
  /* 102f62d5 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f62d7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f62d8 jmp 0x102f62aa */
  goto L_102f62aa;
L_102f62da:;
  /* 102f62da dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 102f62db jmp 0x102f62df */
  goto L_102f62df;
L_102f62dd:;
  /* 102f62dd mov edi, ecx */
  EDI = (ECX);
L_102f62df:;
  /* 102f62df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f62e2 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f62e6 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 102f62e8 je 0x102f63c7 */
  if (C.zf) goto L_102f63c7;
  /* 102f62ee push 0x18 */
  push32((uint32_t)(0x18u));
  /* 102f62f0 pop eax */
  EAX = (pop32());
  /* 102f62f1 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f62f4 jbe 0x102f630b */
  if ((C.cf||C.zf)) goto L_102f630b;
  /* 102f62f6 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f62fa jl 0x102f62ff */
  if ((C.sf!=C.of)) goto L_102f62ff;
  /* 102f62fc inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_102f62ff:;
  /* 102f62ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102f6302 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f6305 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f6306 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 102f6309 jmp 0x102f630e */
  goto L_102f630e;
L_102f630b:;
  /* 102f630b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_102f630e:;
  /* 102f630e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6312 jbe 0x102f63bd */
  if ((C.cf||C.zf)) goto L_102f63bd;
L_102f6318:;
  /* 102f6318 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f6319 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f631c jne 0x102f6326 */
  if (!C.zf) goto L_102f6326;
  /* 102f631e dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 102f6321 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 102f6324 jmp 0x102f6318 */
  goto L_102f6318;
L_102f6326:;
  /* 102f6326 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 102f6329 push eax */
  push32((uint32_t)(EAX));
  /* 102f632a lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 102f632d push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 102f6330 push eax */
  push32((uint32_t)(EAX));
  /* 102f6331 call 0x102f5ea0 */
  push32(0x102f6336u); f_102f5ea0();
  /* 102f6336 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 102f6339 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f633b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f633e cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6341 jge 0x102f6345 */
  if ((C.sf==C.of)) goto L_102f6345;
  /* 102f6343 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_102f6345:;
  /* 102f6345 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6348 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f634b jne 0x102f6350 */
  if (!C.zf) goto L_102f6350;
  /* 102f634d add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102f6350:;
  /* 102f6350 cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6353 jne 0x102f6358 */
  if (!C.zf) goto L_102f6358;
  /* 102f6355 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102f6358:;
  /* 102f6358 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f635d jle 0x102f638f */
  if ((C.zf||C.sf!=C.of)) goto L_102f638f;
  /* 102f635f mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_102f6366:;
  /* 102f6366 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f6369 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 102f636c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f636f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_102f6372:;
  /* 102f6372 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6376 je 0x102f63d8 */
  if (C.zf) goto L_102f63d8;
  /* 102f6378 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f637a mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 102f637f mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 102f6384 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f6386 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 102f638d jmp 0x102f63ed */
  goto L_102f63ed;
L_102f638f:;
  /* 102f638f cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6394 jge 0x102f639f */
  if ((C.sf==C.of)) goto L_102f639f;
  /* 102f6396 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 102f639d jmp 0x102f6366 */
  goto L_102f6366;
L_102f639f:;
  /* 102f639f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 102f63a2 push eax */
  push32((uint32_t)(EAX));
  /* 102f63a3 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 102f63a6 push eax */
  push32((uint32_t)(EAX));
  /* 102f63a7 call 0x102f6c5a */
  push32(0x102f63acu); f_102f6c5a();
  /* 102f63ac mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 102f63af mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 102f63b2 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 102f63b5 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 102f63b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f63bb jmp 0x102f6372 */
  goto L_102f6372;
L_102f63bd:;
  /* 102f63bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f63bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f63c1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f63c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f63c5 jmp 0x102f6372 */
  goto L_102f6372;
L_102f63c7:;
  /* 102f63c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f63c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f63cb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f63cd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f63cf mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 102f63d6 jmp 0x102f63ed */
  goto L_102f63ed;
L_102f63d8:;
  /* 102f63d8 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f63dc je 0x102f63ed */
  if (C.zf) goto L_102f63ed;
  /* 102f63de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102f63e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f63e2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 102f63e4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f63e6 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_102f63ed:;
  /* 102f63ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f63f0 or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 102f63f3 pop edi */
  EDI = (pop32());
  /* 102f63f4 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 102f63f7 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 102f63fa mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 102f63fe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102f6401 pop esi */
  ESI = (pop32());
  /* 102f6402 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 102f6405 pop ebx */
  EBX = (pop32());
  /* 102f6406 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f6407 ret  */
  ESPCHK(0x102f5f67u, _esp0);
  ESP += 4; return;
}

/* FUN_10006438 @ 0x102f6438 (659 bytes, 232 insns) */
void f_102f6438(void) {
  FTRACE(0x102f6438u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f6438 push ebp */
  push32((uint32_t)(EBP));
  /* 102f6439 mov ebp, esp */
  EBP = (ESP);
  /* 102f643b sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f643e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f6441 push ebx */
  push32((uint32_t)(EBX));
  /* 102f6442 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102f6445 push esi */
  push32((uint32_t)(ESI));
  /* 102f6446 mov ecx, eax */
  ECX = (EAX);
  /* 102f6448 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 102f644d and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 102f6453 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 102f6455 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 102f6458 push edi */
  push32((uint32_t)(EDI));
  /* 102f6459 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 102f645d mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 102f6461 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 102f6465 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 102f6469 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 102f646d mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 102f6471 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 102f6475 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 102f6479 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 102f647d mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 102f6481 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 102f6485 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 102f6489 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102f6490 mov edx, eax */
  EDX = (EAX);
  /* 102f6492 je 0x102f649a */
  if (C.zf) goto L_102f649a;
  /* 102f6494 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 102f6498 jmp 0x102f649e */
  goto L_102f649e;
L_102f649a:;
  /* 102f649a mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_102f649e:;
  /* 102f649e mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f64a1 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 102f64a4 jne 0x102f64c4 */
  if (!C.zf) goto L_102f64c4;
  /* 102f64a6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f64a8 jne 0x102f64c4 */
  if (!C.zf) goto L_102f64c4;
  /* 102f64aa cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f64ad jne 0x102f64c4 */
  if (!C.zf) goto L_102f64c4;
L_102f64af:;
  /* 102f64af and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 102f64b3 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 102f64b7 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 102f64bb mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 102f64bf jmp 0x102f66c2 */
  goto L_102f66c2;
L_102f64c4:;
  /* 102f64c4 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f64c7 jne 0x102f6543 */
  if (!C.zf) goto L_102f6543;
  /* 102f64c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 102f64ce mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 102f64d3 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f64d5 jne 0x102f64dd */
  if (!C.zf) goto L_102f64dd;
  /* 102f64d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f64db je 0x102f64ec */
  if (C.zf) goto L_102f64ec;
L_102f64dd:;
  /* 102f64dd test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 102f64e3 jne 0x102f64ec */
  if (!C.zf) goto L_102f64ec;
  /* 102f64e5 push 0x102f8520 */
  push32((uint32_t)(0x102f8520u));
  /* 102f64ea jmp 0x102f6532 */
  goto L_102f6532;
L_102f64ec:;
  /* 102f64ec test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 102f64ef je 0x102f6506 */
  if (C.zf) goto L_102f6506;
  /* 102f64f1 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f64f7 jne 0x102f6506 */
  if (!C.zf) goto L_102f6506;
  /* 102f64f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f64fd jne 0x102f652d */
  if (!C.zf) goto L_102f652d;
  /* 102f64ff push 0x102f8518 */
  push32((uint32_t)(0x102f8518u));
  /* 102f6504 jmp 0x102f6515 */
  goto L_102f6515;
L_102f6506:;
  /* 102f6506 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6508 jne 0x102f652d */
  if (!C.zf) goto L_102f652d;
  /* 102f650a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f650e jne 0x102f652d */
  if (!C.zf) goto L_102f652d;
  /* 102f6510 push 0x102f8510 */
  push32((uint32_t)(0x102f8510u));
L_102f6515:;
  /* 102f6515 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 102f6518 push eax */
  push32((uint32_t)(EAX));
  /* 102f6519 call 0x102f41a0 */
  push32(0x102f651eu); f_102f41a0();
  /* 102f651e pop ecx */
  ECX = (pop32());
  /* 102f651f mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 102f6523 pop ecx */
  ECX = (pop32());
L_102f6524:;
  /* 102f6524 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 102f6528 jmp 0x102f669b */
  goto L_102f669b;
L_102f652d:;
  /* 102f652d push 0x102f8508 */
  push32((uint32_t)(0x102f8508u));
L_102f6532:;
  /* 102f6532 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 102f6535 push eax */
  push32((uint32_t)(EAX));
  /* 102f6536 call 0x102f41a0 */
  push32(0x102f653bu); f_102f41a0();
  /* 102f653b pop ecx */
  ECX = (pop32());
  /* 102f653c mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 102f6540 pop ecx */
  ECX = (pop32());
  /* 102f6541 jmp 0x102f6524 */
  goto L_102f6524;
L_102f6543:;
  /* 102f6543 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 102f6546 mov ecx, edi */
  ECX = (EDI);
  /* 102f6548 mov esi, eax */
  ESI = (EAX);
  /* 102f654a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 102f654d imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f6553 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 102f6556 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 102f655b push 1 */
  push32((uint32_t)(0x1u));
  /* 102f655d lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 102f6560 mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 102f6564 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f6567 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 102f656a lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 102f6571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f6574 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 102f6577 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 102f657a movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 102f657d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f657f push eax */
  push32((uint32_t)(EAX));
  /* 102f6580 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f6583 push eax */
  push32((uint32_t)(EAX));
  /* 102f6584 call 0x102f6c5a */
  push32(0x102f6589u); f_102f6c5a();
  /* 102f6589 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f658c cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6592 jb 0x102f65a4 */
  if (C.cf) goto L_102f65a4;
  /* 102f6594 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 102f6597 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f6598 push eax */
  push32((uint32_t)(EAX));
  /* 102f6599 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f659c push eax */
  push32((uint32_t)(EAX));
  /* 102f659d call 0x102f6a3a */
  push32(0x102f65a2u); f_102f6a3a();
  /* 102f65a2 pop ecx */
  ECX = (pop32());
  /* 102f65a3 pop ecx */
  ECX = (pop32());
L_102f65a4:;
  /* 102f65a4 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 102f65a8 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 102f65ab je 0x102f65be */
  if (C.zf) goto L_102f65be;
  /* 102f65ad mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 102f65b0 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 102f65b3 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f65b5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 102f65b7 jg 0x102f65c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f65c1;
  /* 102f65b9 jmp 0x102f64af */
  goto L_102f64af;
L_102f65be:;
  /* 102f65be mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_102f65c1:;
  /* 102f65c1 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f65c4 jle 0x102f65c9 */
  if ((C.zf||C.sf!=C.of)) goto L_102f65c9;
  /* 102f65c6 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 102f65c8 pop edi */
  EDI = (pop32());
L_102f65c9:;
  /* 102f65c9 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 102f65cd sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f65d3 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 102f65d8 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_102f65df:;
  /* 102f65df lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f65e2 push eax */
  push32((uint32_t)(EAX));
  /* 102f65e3 call 0x102f5e45 */
  push32(0x102f65e8u); f_102f5e45();
  /* 102f65e8 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 102f65eb pop ecx */
  ECX = (pop32());
  /* 102f65ec jne 0x102f65df */
  if (!C.zf) goto L_102f65df;
  /* 102f65ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 102f65f0 jge 0x102f6609 */
  if ((C.sf==C.of)) goto L_102f6609;
  /* 102f65f2 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 102f65f4 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 102f65fa jle 0x102f6609 */
  if ((C.zf||C.sf!=C.of)) goto L_102f6609;
L_102f65fc:;
  /* 102f65fc lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f65ff push eax */
  push32((uint32_t)(EAX));
  /* 102f6600 call 0x102f5e73 */
  push32(0x102f6605u); f_102f5e73();
  /* 102f6605 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 102f6606 pop ecx */
  ECX = (pop32());
  /* 102f6607 jne 0x102f65fc */
  if (!C.zf) goto L_102f65fc;
L_102f6609:;
  /* 102f6609 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 102f660c lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 102f660f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102f6611 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 102f6614 jle 0x102f6666 */
  if ((C.zf||C.sf!=C.of)) goto L_102f6666;
  /* 102f6616 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_102f6619:;
  /* 102f6619 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 102f661c lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 102f661f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f6620 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f6621 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f6624 push eax */
  push32((uint32_t)(EAX));
  /* 102f6625 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f6626 call 0x102f5e45 */
  push32(0x102f662bu); f_102f5e45();
  /* 102f662b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f662e push eax */
  push32((uint32_t)(EAX));
  /* 102f662f call 0x102f5e45 */
  push32(0x102f6634u); f_102f5e45();
  /* 102f6634 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 102f6637 push eax */
  push32((uint32_t)(EAX));
  /* 102f6638 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f663b push eax */
  push32((uint32_t)(EAX));
  /* 102f663c call 0x102f5de7 */
  push32(0x102f6641u); f_102f5de7();
  /* 102f6641 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 102f6644 push eax */
  push32((uint32_t)(EAX));
  /* 102f6645 call 0x102f5e45 */
  push32(0x102f664au); f_102f5e45();
  /* 102f664a mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 102f664d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 102f6650 and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 102f6654 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6657 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102f6659 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 102f665c dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 102f665f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 102f6661 jne 0x102f6619 */
  if (!C.zf) goto L_102f6619;
  /* 102f6663 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_102f6666:;
  /* 102f6666 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 102f6669 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f666a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f666b cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f666e lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 102f6671 jl 0x102f66a3 */
  if ((C.sf!=C.of)) goto L_102f66a3;
L_102f6673:;
  /* 102f6673 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6675 jb 0x102f6686 */
  if (C.cf) goto L_102f6686;
  /* 102f6677 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f667a jne 0x102f6682 */
  if (!C.zf) goto L_102f6682;
  /* 102f667c mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 102f667f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f6680 jmp 0x102f6673 */
  goto L_102f6673;
L_102f6682:;
  /* 102f6682 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6684 jae 0x102f668a */
  if (!C.cf) goto L_102f668a;
L_102f6686:;
  /* 102f6686 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 102f6687 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_102f668a:;
  /* 102f668a inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_102f668c:;
  /* 102f668c sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f668e sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f6690 mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 102f6693 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 102f6696 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_102f669b:;
  /* 102f669b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_102f669e:;
  /* 102f669e pop edi */
  EDI = (pop32());
  /* 102f669f pop esi */
  ESI = (pop32());
  /* 102f66a0 pop ebx */
  EBX = (pop32());
  /* 102f66a1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f66a2 ret  */
  ESPCHK(0x102f6438u, _esp0);
  ESP += 4; return;
L_102f66a3:;
  /* 102f66a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f66a5 jb 0x102f66b3 */
  if (C.cf) goto L_102f66b3;
  /* 102f66a7 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f66aa jne 0x102f66af */
  if (!C.zf) goto L_102f66af;
  /* 102f66ac dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 102f66ad jmp 0x102f66a3 */
  goto L_102f66a3;
L_102f66af:;
  /* 102f66af cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f66b1 jae 0x102f668c */
  if (!C.cf) goto L_102f668c;
L_102f66b3:;
  /* 102f66b3 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 102f66b7 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 102f66bb mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 102f66bf mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_102f66c2:;
  /* 102f66c2 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 102f66c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102f66c8 pop eax */
  EAX = (pop32());
  /* 102f66c9 jmp 0x102f669e */
  goto L_102f669e;
}

/* FUN_100066cb @ 0x102f66cb (27 bytes, 13 insns) */
void f_102f66cb(void) {
  FTRACE(0x102f66cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f66cb mov eax, dword ptr [0x102fa3c8] */
  EAX = (r32((uint32_t)(0x102fa3c8)));
  /* 102f66d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f66d2 je 0x102f66e3 */
  if (C.zf) goto L_102f66e3;
  /* 102f66d4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 102f66d8 call eax */
  call_ind((uint32_t)(EAX), 0x102f66dau);
  /* 102f66da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f66dc pop ecx */
  ECX = (pop32());
  /* 102f66dd je 0x102f66e3 */
  if (C.zf) goto L_102f66e3;
  /* 102f66df push 1 */
  push32((uint32_t)(0x1u));
  /* 102f66e1 pop eax */
  EAX = (pop32());
  /* 102f66e2 ret  */
  ESPCHK(0x102f66cbu, _esp0);
  ESP += 4; return;
L_102f66e3:;
  /* 102f66e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f66e5 ret  */
  ESPCHK(0x102f66cbu, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x102f66e8 (32 bytes, 18 insns) */
void f_102f66e8(void) {
  FTRACE(0x102f66e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f66e8 push ebp */
  push32((uint32_t)(EBP));
  /* 102f66e9 mov ebp, esp */
  EBP = (ESP);
  /* 102f66eb push ebx */
  push32((uint32_t)(EBX));
  /* 102f66ec push esi */
  push32((uint32_t)(ESI));
  /* 102f66ed push edi */
  push32((uint32_t)(EDI));
  /* 102f66ee push ebp */
  push32((uint32_t)(EBP));
  /* 102f66ef push 0 */
  push32((uint32_t)(0x0u));
  /* 102f66f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f66f3 push 0x102f6700 */
  push32((uint32_t)(0x102f6700u));
  /* 102f66f8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f66fb call 0x102f70bc */
  push32(0x102f6700u); f_102f70bc();
  /* 102f6700 pop ebp */
  EBP = (pop32());
  /* 102f6701 pop edi */
  EDI = (pop32());
  /* 102f6702 pop esi */
  ESI = (pop32());
  /* 102f6703 pop ebx */
  EBX = (pop32());
  /* 102f6704 mov esp, ebp */
  ESP = (EBP);
  /* 102f6706 pop ebp */
  EBP = (pop32());
  /* 102f6707 ret  */
  ESPCHK(0x102f66e8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x102f672a (104 bytes, 33 insns) */
void f_102f672a(void) {
  FTRACE(0x102f672au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f672a push ebx */
  push32((uint32_t)(EBX));
  /* 102f672b push esi */
  push32((uint32_t)(ESI));
  /* 102f672c push edi */
  push32((uint32_t)(EDI));
  /* 102f672d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102f6731 push eax */
  push32((uint32_t)(EAX));
  /* 102f6732 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 102f6734 push 0x102f6708 */
  push32((uint32_t)(0x102f6708u));
  /* 102f6739 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 102f6740 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_102f6747:;
  /* 102f6747 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 102f674b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 102f674e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 102f6751 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6754 je 0x102f6784 */
  if (C.zf) goto L_102f6784;
  /* 102f6756 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f675a je 0x102f6784 */
  if (C.zf) goto L_102f6784;
  /* 102f675c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 102f675f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 102f6762 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 102f6766 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 102f6769 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f676e jne 0x102f6782 */
  if (!C.zf) goto L_102f6782;
  /* 102f6770 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 102f6775 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 102f6779 call 0x102f67be */
  push32(0x102f677eu); f_102f67be();
  /* 102f677e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x102f6782u);
L_102f6782:;
  /* 102f6782 jmp 0x102f6747 */
  goto L_102f6747;
L_102f6784:;
  /* 102f6784 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 102f678b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f678e pop edi */
  EDI = (pop32());
  /* 102f678f pop esi */
  ESI = (pop32());
  /* 102f6790 pop ebx */
  EBX = (pop32());
  /* 102f6791 ret  */
  ESPCHK(0x102f672au, _esp0);
  ESP += 4; return;
}

/* FUN_100067be @ 0x102f67be (24 bytes, 10 insns) */
void f_102f67be(void) {
  FTRACE(0x102f67beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f67be push ebx */
  push32((uint32_t)(EBX));
  /* 102f67bf push ecx */
  push32((uint32_t)(ECX));
  /* 102f67c0 mov ebx, 0x102f9a78 */
  EBX = (0x102f9a78u);
  /* 102f67c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f67c8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 102f67cb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 102f67ce mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 102f67d1 pop ecx */
  ECX = (pop32());
  /* 102f67d2 pop ebx */
  EBX = (pop32());
  /* 102f67d3 ret 4 */
  ESPCHK(0x102f67beu, _esp0);
  ESP += 8; return;
}

/* FUN_1000689d @ 0x102f689d (27 bytes, 11 insns) */
void f_102f689d(void) {
  FTRACE(0x102f689du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f689d push ebp */
  push32((uint32_t)(EBP));
  /* 102f689e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 102f68a2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 102f68a4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 102f68a7 push eax */
  push32((uint32_t)(EAX));
  /* 102f68a8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 102f68ab push eax */
  push32((uint32_t)(EAX));
  /* 102f68ac call 0x102f672a */
  push32(0x102f68b1u); f_102f672a();
  /* 102f68b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f68b4 pop ebp */
  EBP = (pop32());
  /* 102f68b5 ret 4 */
  ESPCHK(0x102f689du, _esp0);
  ESP += 8; return;
}

/* FUN_100068c0 @ 0x102f68c0 (47 bytes, 17 insns) */
void f_102f68c0(void) {
  FTRACE(0x102f68c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f68c0 push ecx */
  push32((uint32_t)(ECX));
  /* 102f68c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f68c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 102f68ca jb 0x102f68e0 */
  if (C.cf) goto L_102f68e0;
L_102f68cc:;
  /* 102f68cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f68d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f68d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102f68d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f68de jae 0x102f68cc */
  if (!C.cf) goto L_102f68cc;
L_102f68e0:;
  /* 102f68e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f68e2 mov eax, esp */
  EAX = (ESP);
  /* 102f68e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 102f68e6 mov esp, ecx */
  ESP = (ECX);
  /* 102f68e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102f68ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 102f68ed push eax */
  push32((uint32_t)(EAX));
  /* 102f68ee ret  */
  ESPCHK(0x102f68c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x102f6980 (62 bytes, 35 insns) */
void f_102f6980(void) {
  FTRACE(0x102f6980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f6980 push ebp */
  push32((uint32_t)(EBP));
  /* 102f6981 mov ebp, esp */
  EBP = (ESP);
  /* 102f6983 push esi */
  push32((uint32_t)(ESI));
  /* 102f6984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6986 push eax */
  push32((uint32_t)(EAX));
  /* 102f6987 push eax */
  push32((uint32_t)(EAX));
  /* 102f6988 push eax */
  push32((uint32_t)(EAX));
  /* 102f6989 push eax */
  push32((uint32_t)(EAX));
  /* 102f698a push eax */
  push32((uint32_t)(EAX));
  /* 102f698b push eax */
  push32((uint32_t)(EAX));
  /* 102f698c push eax */
  push32((uint32_t)(EAX));
  /* 102f698d push eax */
  push32((uint32_t)(EAX));
  /* 102f698e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f6991 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f6994:;
  /* 102f6994 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 102f6996 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102f6998 je 0x102f69a1 */
  if (C.zf) goto L_102f69a1;
  /* 102f699a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102f699b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x102f699b");
  /* 102f699f jmp 0x102f6994 */
  goto L_102f6994;
L_102f69a1:;
  /* 102f69a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f69a4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 102f69a7 nop  */
  /* nop */
L_102f69a8:;
  /* 102f69a8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 102f69a9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f69ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102f69ad je 0x102f69b6 */
  if (C.zf) goto L_102f69b6;
  /* 102f69af inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f69b0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x102f69b0");
  /* 102f69b4 jae 0x102f69a8 */
  if (!C.cf) goto L_102f69a8;
L_102f69b6:;
  /* 102f69b6 mov eax, ecx */
  EAX = (ECX);
  /* 102f69b8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f69bb pop esi */
  ESI = (pop32());
  /* 102f69bc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f69bd ret  */
  ESPCHK(0x102f6980u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x102f69c0 (56 bytes, 31 insns) */
void f_102f69c0(void) {
  FTRACE(0x102f69c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f69c0 push ebp */
  push32((uint32_t)(EBP));
  /* 102f69c1 mov ebp, esp */
  EBP = (ESP);
  /* 102f69c3 push edi */
  push32((uint32_t)(EDI));
  /* 102f69c4 push esi */
  push32((uint32_t)(ESI));
  /* 102f69c5 push ebx */
  push32((uint32_t)(EBX));
  /* 102f69c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f69c9 jecxz 0x102f69f1 */
  x86_unimpl("jecxz @ 0x102f69c9");
  /* 102f69cb mov ebx, ecx */
  EBX = (ECX);
  /* 102f69cd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f69d0 mov esi, edi */
  ESI = (EDI);
  /* 102f69d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f69d4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 102f69d6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f69d8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f69da mov edi, esi */
  EDI = (ESI);
  /* 102f69dc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f69df repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 102f69e1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 102f69e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f69e6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f69e9 ja 0x102f69ef */
  if ((!C.cf&&!C.zf)) goto L_102f69ef;
  /* 102f69eb je 0x102f69f1 */
  if (C.zf) goto L_102f69f1;
  /* 102f69ed dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f69ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_102f69ef:;
  /* 102f69ef not ecx */
  ECX = (~(ECX));
L_102f69f1:;
  /* 102f69f1 mov eax, ecx */
  EAX = (ECX);
  /* 102f69f3 pop ebx */
  EBX = (pop32());
  /* 102f69f4 pop esi */
  ESI = (pop32());
  /* 102f69f5 pop edi */
  EDI = (pop32());
  /* 102f69f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f69f7 ret  */
  ESPCHK(0x102f69c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x102f6a00 (58 bytes, 32 insns) */
void f_102f6a00(void) {
  FTRACE(0x102f6a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f6a00 push ebp */
  push32((uint32_t)(EBP));
  /* 102f6a01 mov ebp, esp */
  EBP = (ESP);
  /* 102f6a03 push esi */
  push32((uint32_t)(ESI));
  /* 102f6a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6a06 push eax */
  push32((uint32_t)(EAX));
  /* 102f6a07 push eax */
  push32((uint32_t)(EAX));
  /* 102f6a08 push eax */
  push32((uint32_t)(EAX));
  /* 102f6a09 push eax */
  push32((uint32_t)(EAX));
  /* 102f6a0a push eax */
  push32((uint32_t)(EAX));
  /* 102f6a0b push eax */
  push32((uint32_t)(EAX));
  /* 102f6a0c push eax */
  push32((uint32_t)(EAX));
  /* 102f6a0d push eax */
  push32((uint32_t)(EAX));
  /* 102f6a0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f6a11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f6a14:;
  /* 102f6a14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 102f6a16 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102f6a18 je 0x102f6a21 */
  if (C.zf) goto L_102f6a21;
  /* 102f6a1a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 102f6a1b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x102f6a1b");
  /* 102f6a1f jmp 0x102f6a14 */
  goto L_102f6a14;
L_102f6a21:;
  /* 102f6a21 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_102f6a24:;
  /* 102f6a24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f6a26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102f6a28 je 0x102f6a34 */
  if (C.zf) goto L_102f6a34;
  /* 102f6a2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f6a2b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x102f6a2b");
  /* 102f6a2f jae 0x102f6a24 */
  if (!C.cf) goto L_102f6a24;
  /* 102f6a31 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_102f6a34:;
  /* 102f6a34 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6a37 pop esi */
  ESI = (pop32());
  /* 102f6a38 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f6a39 ret  */
  ESPCHK(0x102f6a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a3a @ 0x102f6a3a (544 bytes, 177 insns) */
void f_102f6a3a(void) {
  FTRACE(0x102f6a3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f6a3a push ebp */
  push32((uint32_t)(EBP));
  /* 102f6a3b mov ebp, esp */
  EBP = (ESP);
  /* 102f6a3d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f6a40 push ebx */
  push32((uint32_t)(EBX));
  /* 102f6a41 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f6a44 push esi */
  push32((uint32_t)(ESI));
  /* 102f6a45 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f6a48 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 102f6a4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6a4e push edi */
  push32((uint32_t)(EDI));
  /* 102f6a4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 102f6a52 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 102f6a55 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 102f6a58 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 102f6a5b mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 102f6a5f mov edi, ecx */
  EDI = (ECX);
  /* 102f6a61 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 102f6a66 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 102f6a68 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6a6a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 102f6a6c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 102f6a72 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6a76 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 102f6a79 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 102f6a7c jae 0x102f6c3a */
  if (!C.cf) goto L_102f6c3a;
  /* 102f6a82 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6a87 jae 0x102f6c3a */
  if (!C.cf) goto L_102f6c3a;
  /* 102f6a8d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6a92 ja 0x102f6c3a */
  if ((!C.cf&&!C.zf)) goto L_102f6c3a;
  /* 102f6a98 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6a9d ja 0x102f6aa3 */
  if ((!C.cf&&!C.zf)) goto L_102f6aa3;
  /* 102f6a9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6aa1 jmp 0x102f6add */
  goto L_102f6add;
L_102f6aa3:;
  /* 102f6aa3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 102f6aa6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 102f6aab jne 0x102f6ac5 */
  if (!C.zf) goto L_102f6ac5;
  /* 102f6aad inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 102f6ab0 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 102f6ab3 jne 0x102f6ac5 */
  if (!C.zf) goto L_102f6ac5;
  /* 102f6ab5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6ab7 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6aba jne 0x102f6ac7 */
  if (!C.zf) goto L_102f6ac7;
  /* 102f6abc cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6abe jne 0x102f6ac7 */
  if (!C.zf) goto L_102f6ac7;
  /* 102f6ac0 jmp 0x102f6c34 */
  goto L_102f6c34;
L_102f6ac5:;
  /* 102f6ac5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102f6ac7:;
  /* 102f6ac7 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6aca jne 0x102f6aea */
  if (!C.zf) goto L_102f6aea;
  /* 102f6acc inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 102f6acf test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 102f6ad2 jne 0x102f6aea */
  if (!C.zf) goto L_102f6aea;
  /* 102f6ad4 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6ad7 jne 0x102f6aea */
  if (!C.zf) goto L_102f6aea;
  /* 102f6ad9 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6adb jne 0x102f6aea */
  if (!C.zf) goto L_102f6aea;
L_102f6add:;
  /* 102f6add mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 102f6ae0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 102f6ae3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 102f6ae5 jmp 0x102f6c55 */
  goto L_102f6c55;
L_102f6aea:;
  /* 102f6aea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 102f6aed lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 102f6af0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102f6af3 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_102f6afa:;
  /* 102f6afa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102f6afd add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6aff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6b03 jle 0x102f6b4e */
  if ((C.zf||C.sf!=C.of)) goto L_102f6b4e;
  /* 102f6b05 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6b07 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 102f6b0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 102f6b0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f6b10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 102f6b13 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_102f6b16:;
  /* 102f6b16 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102f6b19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102f6b1c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 102f6b1f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 102f6b22 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102f6b25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f6b28 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6b2b push ecx */
  push32((uint32_t)(ECX));
  /* 102f6b2c push eax */
  push32((uint32_t)(EAX));
  /* 102f6b2d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 102f6b2f call 0x102f5dc6 */
  push32(0x102f6b34u); f_102f5dc6();
  /* 102f6b34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102f6b39 je 0x102f6b41 */
  if (C.zf) goto L_102f6b41;
  /* 102f6b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102f6b3e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_102f6b41:;
  /* 102f6b41 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f6b45 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 102f6b49 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 102f6b4c jne 0x102f6b16 */
  if (!C.zf) goto L_102f6b16;
L_102f6b4e:;
  /* 102f6b4e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f6b52 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 102f6b55 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 102f6b58 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6b5c jg 0x102f6afa */
  if ((!C.zf&&C.sf==C.of)) goto L_102f6afa;
  /* 102f6b5e add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f6b65 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6b6a jle 0x102f6b91 */
  if ((C.zf||C.sf!=C.of)) goto L_102f6b91;
L_102f6b6c:;
  /* 102f6b6c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 102f6b70 jne 0x102f6b8a */
  if (!C.zf) goto L_102f6b8a;
  /* 102f6b72 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 102f6b75 push eax */
  push32((uint32_t)(EAX));
  /* 102f6b76 call 0x102f5e45 */
  push32(0x102f6b7bu); f_102f5e45();
  /* 102f6b7b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f6b82 pop ecx */
  ECX = (pop32());
  /* 102f6b83 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6b88 jg 0x102f6b6c */
  if ((!C.zf&&C.sf==C.of)) goto L_102f6b6c;
L_102f6b8a:;
  /* 102f6b8a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6b8f jg 0x102f6bca */
  if ((!C.zf&&C.sf==C.of)) goto L_102f6bca;
L_102f6b91:;
  /* 102f6b91 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f6b98 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6b9d jge 0x102f6bca */
  if ((C.sf==C.of)) goto L_102f6bca;
  /* 102f6b9f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 102f6ba3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f6ba5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 102f6ba8 mov ebx, eax */
  EBX = (EAX);
L_102f6baa:;
  /* 102f6baa test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 102f6bae je 0x102f6bb3 */
  if (C.zf) goto L_102f6bb3;
  /* 102f6bb0 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_102f6bb3:;
  /* 102f6bb3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 102f6bb6 push eax */
  push32((uint32_t)(EAX));
  /* 102f6bb7 call 0x102f5e73 */
  push32(0x102f6bbcu); f_102f5e73();
  /* 102f6bbc dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102f6bbd pop ecx */
  ECX = (pop32());
  /* 102f6bbe jne 0x102f6baa */
  if (!C.zf) goto L_102f6baa;
  /* 102f6bc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6bc4 je 0x102f6bca */
  if (C.zf) goto L_102f6bca;
  /* 102f6bc6 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_102f6bca:;
  /* 102f6bca cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6bd0 ja 0x102f6be1 */
  if ((!C.cf&&!C.zf)) goto L_102f6be1;
  /* 102f6bd2 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 102f6bd5 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102f6bda cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6bdf jne 0x102f6c16 */
  if (!C.zf) goto L_102f6c16;
L_102f6be1:;
  /* 102f6be1 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6be5 jne 0x102f6c13 */
  if (!C.zf) goto L_102f6c13;
  /* 102f6be7 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 102f6beb cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6bef jne 0x102f6c0e */
  if (!C.zf) goto L_102f6c0e;
  /* 102f6bf1 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 102f6bf5 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6bfb jne 0x102f6c08 */
  if (!C.zf) goto L_102f6c08;
  /* 102f6bfd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 102f6c00 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 102f6c06 jmp 0x102f6c16 */
  goto L_102f6c16;
L_102f6c08:;
  /* 102f6c08 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 102f6c0c jmp 0x102f6c16 */
  goto L_102f6c16;
L_102f6c0e:;
  /* 102f6c0e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 102f6c11 jmp 0x102f6c16 */
  goto L_102f6c16;
L_102f6c13:;
  /* 102f6c13 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_102f6c16:;
  /* 102f6c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f6c19 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6c1d jae 0x102f6c3a */
  if (!C.cf) goto L_102f6c3a;
  /* 102f6c1f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 102f6c23 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 102f6c25 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 102f6c28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 102f6c2b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 102f6c2e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 102f6c31 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_102f6c34:;
  /* 102f6c34 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 102f6c38 jmp 0x102f6c55 */
  goto L_102f6c55;
L_102f6c3a:;
  /* 102f6c3a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 102f6c3d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f6c3f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 102f6c43 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 102f6c49 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6c4f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 102f6c52 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_102f6c55:;
  /* 102f6c55 pop edi */
  EDI = (pop32());
  /* 102f6c56 pop esi */
  ESI = (pop32());
  /* 102f6c57 pop ebx */
  EBX = (pop32());
  /* 102f6c58 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f6c59 ret  */
  ESPCHK(0x102f6a3au, _esp0);
  ESP += 4; return;
}

/* FUN_10006c5a @ 0x102f6c5a (124 bytes, 52 insns) */
void f_102f6c5a(void) {
  FTRACE(0x102f6c5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f6c5a push ebp */
  push32((uint32_t)(EBP));
  /* 102f6c5b mov ebp, esp */
  EBP = (ESP);
  /* 102f6c5d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f6c60 push ebx */
  push32((uint32_t)(EBX));
  /* 102f6c61 mov ebx, 0x102f9b90 */
  EBX = (0x102f9b90u);
  /* 102f6c66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f6c68 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f6c6b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6c6e je 0x102f6cd3 */
  if (C.zf) goto L_102f6cd3;
  /* 102f6c70 jge 0x102f6c82 */
  if ((C.sf==C.of)) goto L_102f6c82;
  /* 102f6c72 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f6c75 mov ebx, 0x102f9cf0 */
  EBX = (0x102f9cf0u);
  /* 102f6c7a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f6c7c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 102f6c7f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_102f6c82:;
  /* 102f6c82 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6c85 jne 0x102f6c8d */
  if (!C.zf) goto L_102f6c8d;
  /* 102f6c87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102f6c8a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_102f6c8d:;
  /* 102f6c8d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6c90 je 0x102f6cd3 */
  if (C.zf) goto L_102f6cd3;
  /* 102f6c92 push esi */
  push32((uint32_t)(ESI));
  /* 102f6c93 push edi */
  push32((uint32_t)(EDI));
L_102f6c94:;
  /* 102f6c94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102f6c97 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6c9a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 102f6c9e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 102f6ca1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6ca3 je 0x102f6ccc */
  if (C.zf) goto L_102f6ccc;
  /* 102f6ca5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 102f6ca8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 102f6cae lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 102f6cb1 jb 0x102f6cbf */
  if (C.cf) goto L_102f6cbf;
  /* 102f6cb3 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 102f6cb6 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f6cb7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f6cb8 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 102f6cb9 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 102f6cbc lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_102f6cbf:;
  /* 102f6cbf push esi */
  push32((uint32_t)(ESI));
  /* 102f6cc0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 102f6cc3 call 0x102f6a3a */
  push32(0x102f6cc8u); f_102f6a3a();
  /* 102f6cc8 pop ecx */
  ECX = (pop32());
  /* 102f6cc9 pop ecx */
  ECX = (pop32());
  /* 102f6cca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_102f6ccc:;
  /* 102f6ccc cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6ccf jne 0x102f6c94 */
  if (!C.zf) goto L_102f6c94;
  /* 102f6cd1 pop edi */
  EDI = (pop32());
  /* 102f6cd2 pop esi */
  ESI = (pop32());
L_102f6cd3:;
  /* 102f6cd3 pop ebx */
  EBX = (pop32());
  /* 102f6cd4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f6cd5 ret  */
  ESPCHK(0x102f6c5au, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x102f6ce0 (208 bytes, 85 insns) */
void f_102f6ce0(void) {
  FTRACE(0x102f6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f6ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 102f6ce1 mov ebp, esp */
  EBP = (ESP);
  /* 102f6ce3 push edi */
  push32((uint32_t)(EDI));
  /* 102f6ce4 push esi */
  push32((uint32_t)(ESI));
  /* 102f6ce5 push ebx */
  push32((uint32_t)(EBX));
  /* 102f6ce6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f6ce9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f6cec lea eax, [0x102fa3a4] */
  EAX = ((uint32_t)(0x102fa3a4));
  /* 102f6cf2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6cf6 jne 0x102f6d33 */
  if (!C.zf) goto L_102f6d33;
  /* 102f6cf8 mov al, 0xff */
  AL = (0xffu);
  /* 102f6cfa mov edi, edi */
  EDI = (EDI);
L_102f6cfc:;
  /* 102f6cfc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102f6cfe je 0x102f6d2e */
  if (C.zf) goto L_102f6d2e;
  /* 102f6d00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f6d02 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f6d03 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 102f6d05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f6d06 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6d08 je 0x102f6cfc */
  if (C.zf) goto L_102f6cfc;
  /* 102f6d0a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f6d0c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6d0e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f6d10 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 102f6d13 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102f6d15 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102f6d17 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 102f6d19 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f6d1b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6d1d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f6d1f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 102f6d22 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102f6d24 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 102f6d26 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6d28 je 0x102f6cfc */
  if (C.zf) goto L_102f6cfc;
  /* 102f6d2a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 102f6d2c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_102f6d2e:;
  /* 102f6d2e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 102f6d31 jmp 0x102f6dab */
  goto L_102f6dab;
L_102f6d33:;
  /* 102f6d33 lock inc dword ptr [0x102fa514] */
  x86_unimpl("lock inc @ 0x102f6d33");
  /* 102f6d3a cmp dword ptr [0x102fa510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102fa510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6d41 jg 0x102f6d47 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f6d47;
  /* 102f6d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f6d45 jmp 0x102f6d5c */
  goto L_102f6d5c;
L_102f6d47:;
  /* 102f6d47 lock dec dword ptr [0x102fa514] */
  x86_unimpl("lock dec @ 0x102f6d47");
  /* 102f6d4e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102f6d50 call 0x102f4749 */
  push32(0x102f6d55u); f_102f4749();
  /* 102f6d55 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_102f6d5c:;
  /* 102f6d5c mov eax, 0xff */
  EAX = (0xffu);
  /* 102f6d61 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f6d63 nop  */
  /* nop */
L_102f6d64:;
  /* 102f6d64 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102f6d66 je 0x102f6d8f */
  if (C.zf) goto L_102f6d8f;
  /* 102f6d68 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f6d6a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f6d6b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f6d6d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f6d6e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6d70 je 0x102f6d64 */
  if (C.zf) goto L_102f6d64;
  /* 102f6d72 push eax */
  push32((uint32_t)(EAX));
  /* 102f6d73 push ebx */
  push32((uint32_t)(EBX));
  /* 102f6d74 call 0x102f3b5a */
  push32(0x102f6d79u); f_102f3b5a();
  /* 102f6d79 mov ebx, eax */
  EBX = (EAX);
  /* 102f6d7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6d7e call 0x102f3b5a */
  push32(0x102f6d83u); f_102f3b5a();
  /* 102f6d83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6d86 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6d88 je 0x102f6d64 */
  if (C.zf) goto L_102f6d64;
  /* 102f6d8a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102f6d8c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_102f6d8f:;
  /* 102f6d8f mov ebx, eax */
  EBX = (EAX);
  /* 102f6d91 pop eax */
  EAX = (pop32());
  /* 102f6d92 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6d94 jne 0x102f6d9f */
  if (!C.zf) goto L_102f6d9f;
  /* 102f6d96 lock dec dword ptr [0x102fa514] */
  x86_unimpl("lock dec @ 0x102f6d96");
  /* 102f6d9d jmp 0x102f6da9 */
  goto L_102f6da9;
L_102f6d9f:;
  /* 102f6d9f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102f6da1 call 0x102f47aa */
  push32(0x102f6da6u); f_102f47aa();
  /* 102f6da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102f6da9:;
  /* 102f6da9 mov eax, ebx */
  EAX = (EBX);
L_102f6dab:;
  /* 102f6dab pop ebx */
  EBX = (pop32());
  /* 102f6dac pop esi */
  ESI = (pop32());
  /* 102f6dad pop edi */
  EDI = (pop32());
  /* 102f6dae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f6daf ret  */
  ESPCHK(0x102f6ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006db0 @ 0x102f6db0 (257 bytes, 103 insns) */
void f_102f6db0(void) {
  FTRACE(0x102f6db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f6db0 push ebp */
  push32((uint32_t)(EBP));
  /* 102f6db1 mov ebp, esp */
  EBP = (ESP);
  /* 102f6db3 push edi */
  push32((uint32_t)(EDI));
  /* 102f6db4 push esi */
  push32((uint32_t)(ESI));
  /* 102f6db5 push ebx */
  push32((uint32_t)(EBX));
  /* 102f6db6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102f6db9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f6dbb je 0x102f6eaa */
  if (C.zf) goto L_102f6eaa;
  /* 102f6dc1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 102f6dc4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 102f6dc7 lea eax, [0x102fa3a4] */
  EAX = ((uint32_t)(0x102fa3a4));
  /* 102f6dcd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6dd1 jne 0x102f6e21 */
  if (!C.zf) goto L_102f6e21;
  /* 102f6dd3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 102f6dd5 mov bl, 0x5a */
  BL = (0x5au);
  /* 102f6dd7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 102f6dd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_102f6ddc:;
  /* 102f6ddc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 102f6dde or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 102f6de0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 102f6de2 je 0x102f6e05 */
  if (C.zf) goto L_102f6e05;
  /* 102f6de4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 102f6de6 je 0x102f6e05 */
  if (C.zf) goto L_102f6e05;
  /* 102f6de8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f6de9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f6dea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6dec jb 0x102f6df4 */
  if (C.cf) goto L_102f6df4;
  /* 102f6dee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6df0 ja 0x102f6df4 */
  if ((!C.cf&&!C.zf)) goto L_102f6df4;
  /* 102f6df2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_102f6df4:;
  /* 102f6df4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6df6 jb 0x102f6dfe */
  if (C.cf) goto L_102f6dfe;
  /* 102f6df8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6dfa ja 0x102f6dfe */
  if ((!C.cf&&!C.zf)) goto L_102f6dfe;
  /* 102f6dfc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_102f6dfe:;
  /* 102f6dfe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6e00 jne 0x102f6e0f */
  if (!C.zf) goto L_102f6e0f;
  /* 102f6e02 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f6e03 jne 0x102f6ddc */
  if (!C.zf) goto L_102f6ddc;
L_102f6e05:;
  /* 102f6e05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f6e07 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 102f6e09 je 0x102f6eaa */
  if (C.zf) goto L_102f6eaa;
L_102f6e0f:;
  /* 102f6e0f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 102f6e14 jb 0x102f6eaa */
  if (C.cf) goto L_102f6eaa;
  /* 102f6e1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102f6e1c jmp 0x102f6eaa */
  goto L_102f6eaa;
L_102f6e21:;
  /* 102f6e21 lock inc dword ptr [0x102fa514] */
  x86_unimpl("lock inc @ 0x102f6e21");
  /* 102f6e28 cmp dword ptr [0x102fa510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102fa510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6e2f jg 0x102f6e35 */
  if ((!C.zf&&C.sf==C.of)) goto L_102f6e35;
  /* 102f6e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 102f6e33 jmp 0x102f6e4e */
  goto L_102f6e4e;
L_102f6e35:;
  /* 102f6e35 lock dec dword ptr [0x102fa514] */
  x86_unimpl("lock dec @ 0x102f6e35");
  /* 102f6e3c mov ebx, ecx */
  EBX = (ECX);
  /* 102f6e3e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102f6e40 call 0x102f4749 */
  push32(0x102f6e45u); f_102f4749();
  /* 102f6e45 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 102f6e4c mov ecx, ebx */
  ECX = (EBX);
L_102f6e4e:;
  /* 102f6e4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6e50 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f6e52 mov edi, edi */
  EDI = (EDI);
L_102f6e54:;
  /* 102f6e54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102f6e56 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6e58 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 102f6e5a je 0x102f6e7f */
  if (C.zf) goto L_102f6e7f;
  /* 102f6e5c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 102f6e5e je 0x102f6e7f */
  if (C.zf) goto L_102f6e7f;
  /* 102f6e60 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102f6e61 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102f6e62 push ecx */
  push32((uint32_t)(ECX));
  /* 102f6e63 push eax */
  push32((uint32_t)(EAX));
  /* 102f6e64 push ebx */
  push32((uint32_t)(EBX));
  /* 102f6e65 call 0x102f3b5a */
  push32(0x102f6e6au); f_102f3b5a();
  /* 102f6e6a mov ebx, eax */
  EBX = (EAX);
  /* 102f6e6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6e6f call 0x102f3b5a */
  push32(0x102f6e74u); f_102f3b5a();
  /* 102f6e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6e77 pop ecx */
  ECX = (pop32());
  /* 102f6e78 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6e7a jne 0x102f6e85 */
  if (!C.zf) goto L_102f6e85;
  /* 102f6e7c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102f6e7d jne 0x102f6e54 */
  if (!C.zf) goto L_102f6e54;
L_102f6e7f:;
  /* 102f6e7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102f6e81 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102f6e83 je 0x102f6e8e */
  if (C.zf) goto L_102f6e8e;
L_102f6e85:;
  /* 102f6e85 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 102f6e8a jb 0x102f6e8e */
  if (C.cf) goto L_102f6e8e;
  /* 102f6e8c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_102f6e8e:;
  /* 102f6e8e pop eax */
  EAX = (pop32());
  /* 102f6e8f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102f6e91 jne 0x102f6e9c */
  if (!C.zf) goto L_102f6e9c;
  /* 102f6e93 lock dec dword ptr [0x102fa514] */
  x86_unimpl("lock dec @ 0x102f6e93");
  /* 102f6e9a jmp 0x102f6eaa */
  goto L_102f6eaa;
L_102f6e9c:;
  /* 102f6e9c mov ebx, ecx */
  EBX = (ECX);
  /* 102f6e9e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 102f6ea0 call 0x102f47aa */
  push32(0x102f6ea5u); f_102f47aa();
  /* 102f6ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102f6ea8 mov ecx, ebx */
  ECX = (EBX);
L_102f6eaa:;
  /* 102f6eaa mov eax, ecx */
  EAX = (ECX);
  /* 102f6eac pop ebx */
  EBX = (pop32());
  /* 102f6ead pop esi */
  ESI = (pop32());
  /* 102f6eae pop edi */
  EDI = (pop32());
  /* 102f6eaf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 102f6eb0 ret  */
  ESPCHK(0x102f6db0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x102f70bc (6 bytes, 1 insns) */
void f_102f70bc(void) {
  FTRACE(0x102f70bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102f70bc jmp dword ptr [0x102f800c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x102f800c)))); return;
}

