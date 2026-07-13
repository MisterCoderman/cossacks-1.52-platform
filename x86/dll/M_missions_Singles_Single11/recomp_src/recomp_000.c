#include "recomp.h"

/* OnInit @ 0x110d1000 (556 bytes, 142 insns) */
void f_110d1000(void) {
  FTRACE(0x110d1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1000 push esi */
  push32((uint32_t)(ESI));
  /* 110d1001 mov esi, dword ptr [0x110d50f8] */
  ESI = (r32((uint32_t)(0x110d50f8)));
  /* 110d1007 push 0x110d6284 */
  push32((uint32_t)(0x110d6284u));
  /* 110d100c push 0x110d6638 */
  push32((uint32_t)(0x110d6638u));
  /* 110d1011 call esi */
  call_ind((uint32_t)(ESI), 0x110d1013u);
  /* 110d1013 push 0x110d6274 */
  push32((uint32_t)(0x110d6274u));
  /* 110d1018 push 0x110d6640 */
  push32((uint32_t)(0x110d6640u));
  /* 110d101d call esi */
  call_ind((uint32_t)(ESI), 0x110d101fu);
  /* 110d101f push 0x110d6264 */
  push32((uint32_t)(0x110d6264u));
  /* 110d1024 push 0x110d6648 */
  push32((uint32_t)(0x110d6648u));
  /* 110d1029 call esi */
  call_ind((uint32_t)(ESI), 0x110d102bu);
  /* 110d102b push 0x110d6254 */
  push32((uint32_t)(0x110d6254u));
  /* 110d1030 push 0x110d6650 */
  push32((uint32_t)(0x110d6650u));
  /* 110d1035 call esi */
  call_ind((uint32_t)(ESI), 0x110d1037u);
  /* 110d1037 push 0x110d6248 */
  push32((uint32_t)(0x110d6248u));
  /* 110d103c push 0x110d6658 */
  push32((uint32_t)(0x110d6658u));
  /* 110d1041 call esi */
  call_ind((uint32_t)(ESI), 0x110d1043u);
  /* 110d1043 push 0x110d6230 */
  push32((uint32_t)(0x110d6230u));
  /* 110d1048 push 0x110d6660 */
  push32((uint32_t)(0x110d6660u));
  /* 110d104d call esi */
  call_ind((uint32_t)(ESI), 0x110d104fu);
  /* 110d104f push 0x110d621c */
  push32((uint32_t)(0x110d621cu));
  /* 110d1054 push 0x110d6668 */
  push32((uint32_t)(0x110d6668u));
  /* 110d1059 call esi */
  call_ind((uint32_t)(ESI), 0x110d105bu);
  /* 110d105b push 0x110d6208 */
  push32((uint32_t)(0x110d6208u));
  /* 110d1060 push 0x110d6670 */
  push32((uint32_t)(0x110d6670u));
  /* 110d1065 call esi */
  call_ind((uint32_t)(ESI), 0x110d1067u);
  /* 110d1067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d106a push 0x110d61f8 */
  push32((uint32_t)(0x110d61f8u));
  /* 110d106f push 0x110d6678 */
  push32((uint32_t)(0x110d6678u));
  /* 110d1074 call esi */
  call_ind((uint32_t)(ESI), 0x110d1076u);
  /* 110d1076 push 0x110d61ec */
  push32((uint32_t)(0x110d61ecu));
  /* 110d107b push 0x110d6680 */
  push32((uint32_t)(0x110d6680u));
  /* 110d1080 call esi */
  call_ind((uint32_t)(ESI), 0x110d1082u);
  /* 110d1082 push 0x110d61d8 */
  push32((uint32_t)(0x110d61d8u));
  /* 110d1087 push 0x110d6688 */
  push32((uint32_t)(0x110d6688u));
  /* 110d108c call esi */
  call_ind((uint32_t)(ESI), 0x110d108eu);
  /* 110d108e push 0x110d61c4 */
  push32((uint32_t)(0x110d61c4u));
  /* 110d1093 push 0x110d6690 */
  push32((uint32_t)(0x110d6690u));
  /* 110d1098 call esi */
  call_ind((uint32_t)(ESI), 0x110d109au);
  /* 110d109a push 0x110d61b8 */
  push32((uint32_t)(0x110d61b8u));
  /* 110d109f push 0x110d6698 */
  push32((uint32_t)(0x110d6698u));
  /* 110d10a4 call esi */
  call_ind((uint32_t)(ESI), 0x110d10a6u);
  /* 110d10a6 push 0x110d61a8 */
  push32((uint32_t)(0x110d61a8u));
  /* 110d10ab push 0x110d66a8 */
  push32((uint32_t)(0x110d66a8u));
  /* 110d10b0 call esi */
  call_ind((uint32_t)(ESI), 0x110d10b2u);
  /* 110d10b2 push 0x110d6194 */
  push32((uint32_t)(0x110d6194u));
  /* 110d10b7 push 0x110d66b8 */
  push32((uint32_t)(0x110d66b8u));
  /* 110d10bc call esi */
  call_ind((uint32_t)(ESI), 0x110d10beu);
  /* 110d10be push 0x110d6188 */
  push32((uint32_t)(0x110d6188u));
  /* 110d10c3 push 0x110d66c8 */
  push32((uint32_t)(0x110d66c8u));
  /* 110d10c8 call esi */
  call_ind((uint32_t)(ESI), 0x110d10cau);
  /* 110d10ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d10cd push 0x110d617c */
  push32((uint32_t)(0x110d617cu));
  /* 110d10d2 push 0x110d66d8 */
  push32((uint32_t)(0x110d66d8u));
  /* 110d10d7 call esi */
  call_ind((uint32_t)(ESI), 0x110d10d9u);
  /* 110d10d9 push 0x110d6168 */
  push32((uint32_t)(0x110d6168u));
  /* 110d10de push 0x110d66f0 */
  push32((uint32_t)(0x110d66f0u));
  /* 110d10e3 call esi */
  call_ind((uint32_t)(ESI), 0x110d10e5u);
  /* 110d10e5 push 0x110d615c */
  push32((uint32_t)(0x110d615cu));
  /* 110d10ea push 0x110d6708 */
  push32((uint32_t)(0x110d6708u));
  /* 110d10ef call esi */
  call_ind((uint32_t)(ESI), 0x110d10f1u);
  /* 110d10f1 push 0x110d614c */
  push32((uint32_t)(0x110d614cu));
  /* 110d10f6 push 0x110d66a0 */
  push32((uint32_t)(0x110d66a0u));
  /* 110d10fb call esi */
  call_ind((uint32_t)(ESI), 0x110d10fdu);
  /* 110d10fd push 0x110d6140 */
  push32((uint32_t)(0x110d6140u));
  /* 110d1102 push 0x110d66b0 */
  push32((uint32_t)(0x110d66b0u));
  /* 110d1107 call esi */
  call_ind((uint32_t)(ESI), 0x110d1109u);
  /* 110d1109 push 0x110d6134 */
  push32((uint32_t)(0x110d6134u));
  /* 110d110e push 0x110d66c0 */
  push32((uint32_t)(0x110d66c0u));
  /* 110d1113 call esi */
  call_ind((uint32_t)(ESI), 0x110d1115u);
  /* 110d1115 push 0x110d611c */
  push32((uint32_t)(0x110d611cu));
  /* 110d111a push 0x110d66d0 */
  push32((uint32_t)(0x110d66d0u));
  /* 110d111f call esi */
  call_ind((uint32_t)(ESI), 0x110d1121u);
  /* 110d1121 push 0x110d6108 */
  push32((uint32_t)(0x110d6108u));
  /* 110d1126 push 0x110d66e8 */
  push32((uint32_t)(0x110d66e8u));
  /* 110d112b call esi */
  call_ind((uint32_t)(ESI), 0x110d112du);
  /* 110d112d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1130 push 0x110d60f8 */
  push32((uint32_t)(0x110d60f8u));
  /* 110d1135 push 0x110d6700 */
  push32((uint32_t)(0x110d6700u));
  /* 110d113a call esi */
  call_ind((uint32_t)(ESI), 0x110d113cu);
  /* 110d113c push 0x110d60e8 */
  push32((uint32_t)(0x110d60e8u));
  /* 110d1141 push 0x110d6718 */
  push32((uint32_t)(0x110d6718u));
  /* 110d1146 call esi */
  call_ind((uint32_t)(ESI), 0x110d1148u);
  /* 110d1148 push 0x110d60d4 */
  push32((uint32_t)(0x110d60d4u));
  /* 110d114d push 0x110d6720 */
  push32((uint32_t)(0x110d6720u));
  /* 110d1152 call esi */
  call_ind((uint32_t)(ESI), 0x110d1154u);
  /* 110d1154 push 0x110d60c8 */
  push32((uint32_t)(0x110d60c8u));
  /* 110d1159 push 0x110d6728 */
  push32((uint32_t)(0x110d6728u));
  /* 110d115e call esi */
  call_ind((uint32_t)(ESI), 0x110d1160u);
  /* 110d1160 push 0x110d60b4 */
  push32((uint32_t)(0x110d60b4u));
  /* 110d1165 push 0x110d6730 */
  push32((uint32_t)(0x110d6730u));
  /* 110d116a call esi */
  call_ind((uint32_t)(ESI), 0x110d116cu);
  /* 110d116c push 0x110d60a4 */
  push32((uint32_t)(0x110d60a4u));
  /* 110d1171 push 0x110d66e0 */
  push32((uint32_t)(0x110d66e0u));
  /* 110d1176 call esi */
  call_ind((uint32_t)(ESI), 0x110d1178u);
  /* 110d1178 push 0x110d6098 */
  push32((uint32_t)(0x110d6098u));
  /* 110d117d push 0x110d66f8 */
  push32((uint32_t)(0x110d66f8u));
  /* 110d1182 call esi */
  call_ind((uint32_t)(ESI), 0x110d1184u);
  /* 110d1184 push 0x110d608c */
  push32((uint32_t)(0x110d608cu));
  /* 110d1189 push 0x110d6710 */
  push32((uint32_t)(0x110d6710u));
  /* 110d118e call esi */
  call_ind((uint32_t)(ESI), 0x110d1190u);
  /* 110d1190 mov esi, dword ptr [0x110d50fc] */
  ESI = (r32((uint32_t)(0x110d50fc)));
  /* 110d1196 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1199 push 0x110d6084 */
  push32((uint32_t)(0x110d6084u));
  /* 110d119e push 0x110d6610 */
  push32((uint32_t)(0x110d6610u));
  /* 110d11a3 call esi */
  call_ind((uint32_t)(ESI), 0x110d11a5u);
  /* 110d11a5 push 0x110d607c */
  push32((uint32_t)(0x110d607cu));
  /* 110d11aa push 0x110d6740 */
  push32((uint32_t)(0x110d6740u));
  /* 110d11af call esi */
  call_ind((uint32_t)(ESI), 0x110d11b1u);
  /* 110d11b1 push 0x110d6074 */
  push32((uint32_t)(0x110d6074u));
  /* 110d11b6 push 0x110d6618 */
  push32((uint32_t)(0x110d6618u));
  /* 110d11bb call dword ptr [0x110d5100] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5100))), 0x110d11c1u);
  /* 110d11c1 mov esi, dword ptr [0x110d5104] */
  ESI = (r32((uint32_t)(0x110d5104)));
  /* 110d11c7 push 0x110d606c */
  push32((uint32_t)(0x110d606cu));
  /* 110d11cc push 0x110d6630 */
  push32((uint32_t)(0x110d6630u));
  /* 110d11d1 call esi */
  call_ind((uint32_t)(ESI), 0x110d11d3u);
  /* 110d11d3 push 0x110d6064 */
  push32((uint32_t)(0x110d6064u));
  /* 110d11d8 push 0x110d6620 */
  push32((uint32_t)(0x110d6620u));
  /* 110d11dd call esi */
  call_ind((uint32_t)(ESI), 0x110d11dfu);
  /* 110d11df push 0x110d605c */
  push32((uint32_t)(0x110d605cu));
  /* 110d11e4 push 0x110d6738 */
  push32((uint32_t)(0x110d6738u));
  /* 110d11e9 call esi */
  call_ind((uint32_t)(ESI), 0x110d11ebu);
  /* 110d11eb push 0x110d6054 */
  push32((uint32_t)(0x110d6054u));
  /* 110d11f0 push 0x110d6748 */
  push32((uint32_t)(0x110d6748u));
  /* 110d11f5 call esi */
  call_ind((uint32_t)(ESI), 0x110d11f7u);
  /* 110d11f7 push 0x110d604c */
  push32((uint32_t)(0x110d604cu));
  /* 110d11fc push 0x110d6628 */
  push32((uint32_t)(0x110d6628u));
  /* 110d1201 call esi */
  call_ind((uint32_t)(ESI), 0x110d1203u);
  /* 110d1203 mov esi, dword ptr [0x110d5108] */
  ESI = (r32((uint32_t)(0x110d5108)));
  /* 110d1209 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d120c push 0x110d6044 */
  push32((uint32_t)(0x110d6044u));
  /* 110d1211 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1213 call esi */
  call_ind((uint32_t)(ESI), 0x110d1215u);
  /* 110d1215 push 0x110d6038 */
  push32((uint32_t)(0x110d6038u));
  /* 110d121a push 2 */
  push32((uint32_t)(0x2u));
  /* 110d121c call esi */
  call_ind((uint32_t)(ESI), 0x110d121eu);
  /* 110d121e push 0x110d6030 */
  push32((uint32_t)(0x110d6030u));
  /* 110d1223 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1225 call esi */
  call_ind((uint32_t)(ESI), 0x110d1227u);
  /* 110d1227 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d122a pop esi */
  ESI = (pop32());
  /* 110d122b ret  */
  ESPCHK(0x110d1000u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x110d1230 (1637 bytes, 584 insns) */
void f_110d1230(void) {
  FTRACE(0x110d1230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1230 push ebx */
  push32((uint32_t)(EBX));
  /* 110d1231 push ebp */
  push32((uint32_t)(EBP));
  /* 110d1232 push esi */
  push32((uint32_t)(ESI));
  /* 110d1233 push edi */
  push32((uint32_t)(EDI));
  /* 110d1234 mov edi, dword ptr [0x110d50b0] */
  EDI = (r32((uint32_t)(0x110d50b0)));
  /* 110d123a push 1 */
  push32((uint32_t)(0x1u));
  /* 110d123c call edi */
  call_ind((uint32_t)(EDI), 0x110d123eu);
  /* 110d123e mov ebx, dword ptr [0x110d50b4] */
  EBX = (r32((uint32_t)(0x110d50b4)));
  /* 110d1244 mov ebp, dword ptr [0x110d50b8] */
  EBP = (r32((uint32_t)(0x110d50b8)));
  /* 110d124a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d124d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d124f je 0x110d1548 */
  if (C.zf) goto L_110d1548;
  /* 110d1255 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1257 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1259 call ebx */
  call_ind((uint32_t)(EBX), 0x110d125bu);
  /* 110d125b push 0x110d62e0 */
  push32((uint32_t)(0x110d62e0u));
  /* 110d1260 call ebp */
  call_ind((uint32_t)(EBP), 0x110d1262u);
  /* 110d1262 push 0x110d62d8 */
  push32((uint32_t)(0x110d62d8u));
  /* 110d1267 call ebp */
  call_ind((uint32_t)(EBP), 0x110d1269u);
  /* 110d1269 mov esi, dword ptr [0x110d50bc] */
  ESI = (r32((uint32_t)(0x110d50bc)));
  /* 110d126f push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 110d1274 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1276 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1278 call esi */
  call_ind((uint32_t)(ESI), 0x110d127au);
  /* 110d127a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d127f push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1281 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1283 call esi */
  call_ind((uint32_t)(ESI), 0x110d1285u);
  /* 110d1285 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d128a push 4 */
  push32((uint32_t)(0x4u));
  /* 110d128c push 1 */
  push32((uint32_t)(0x1u));
  /* 110d128e call esi */
  call_ind((uint32_t)(ESI), 0x110d1290u);
  /* 110d1290 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d1295 push 5 */
  push32((uint32_t)(0x5u));
  /* 110d1297 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1299 call esi */
  call_ind((uint32_t)(ESI), 0x110d129bu);
  /* 110d129b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d129e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d12a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d12a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d12a7 call esi */
  call_ind((uint32_t)(ESI), 0x110d12a9u);
  /* 110d12a9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d12ae push 2 */
  push32((uint32_t)(0x2u));
  /* 110d12b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d12b2 call esi */
  call_ind((uint32_t)(ESI), 0x110d12b4u);
  /* 110d12b4 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 110d12b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d12bb push 2 */
  push32((uint32_t)(0x2u));
  /* 110d12bd call esi */
  call_ind((uint32_t)(ESI), 0x110d12bfu);
  /* 110d12bf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d12c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d12c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d12c8 call esi */
  call_ind((uint32_t)(ESI), 0x110d12cau);
  /* 110d12ca push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d12cf push 4 */
  push32((uint32_t)(0x4u));
  /* 110d12d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d12d3 call esi */
  call_ind((uint32_t)(ESI), 0x110d12d5u);
  /* 110d12d5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d12da push 5 */
  push32((uint32_t)(0x5u));
  /* 110d12dc push 2 */
  push32((uint32_t)(0x2u));
  /* 110d12de call esi */
  call_ind((uint32_t)(ESI), 0x110d12e0u);
  /* 110d12e0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d12e3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d12e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d12ea push 2 */
  push32((uint32_t)(0x2u));
  /* 110d12ec call esi */
  call_ind((uint32_t)(ESI), 0x110d12eeu);
  /* 110d12ee push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d12f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d12f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d12f7 call esi */
  call_ind((uint32_t)(ESI), 0x110d12f9u);
  /* 110d12f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d12fb push 0x110d6610 */
  push32((uint32_t)(0x110d6610u));
  /* 110d1300 call dword ptr [0x110d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50c0))), 0x110d1306u);
  /* 110d1306 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1308 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 110d130d push 0x110d6630 */
  push32((uint32_t)(0x110d6630u));
  /* 110d1312 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1314 call dword ptr [0x110d50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50c4))), 0x110d131au);
  /* 110d131a mov edi, dword ptr [0x110d50c8] */
  EDI = (r32((uint32_t)(0x110d50c8)));
  /* 110d1320 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1322 push 0x110d6628 */
  push32((uint32_t)(0x110d6628u));
  /* 110d1327 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1329 call edi */
  call_ind((uint32_t)(EDI), 0x110d132bu);
  /* 110d132b push 0 */
  push32((uint32_t)(0x0u));
  /* 110d132d push 0x110d6740 */
  push32((uint32_t)(0x110d6740u));
  /* 110d1332 call dword ptr [0x110d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50c0))), 0x110d1338u);
  /* 110d1338 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d133b push 0xd6 */
  push32((uint32_t)(0xd6u));
  /* 110d1340 push 0x110d6748 */
  push32((uint32_t)(0x110d6748u));
  /* 110d1345 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1347 call edi */
  call_ind((uint32_t)(EDI), 0x110d1349u);
  /* 110d1349 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d134b call dword ptr [0x110d50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50cc))), 0x110d1351u);
  /* 110d1351 mov edi, dword ptr [0x110d50d0] */
  EDI = (r32((uint32_t)(0x110d50d0)));
  /* 110d1357 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d135a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d135c jne 0x110d13c8 */
  if (!C.zf) goto L_110d13c8;
  /* 110d135e push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 110d1363 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1365 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1367 call esi */
  call_ind((uint32_t)(ESI), 0x110d1369u);
  /* 110d1369 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 110d136e push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1370 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1372 call esi */
  call_ind((uint32_t)(ESI), 0x110d1374u);
  /* 110d1374 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 110d1379 push 4 */
  push32((uint32_t)(0x4u));
  /* 110d137b push 0 */
  push32((uint32_t)(0x0u));
  /* 110d137d call esi */
  call_ind((uint32_t)(ESI), 0x110d137fu);
  /* 110d137f push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 110d1384 push 5 */
  push32((uint32_t)(0x5u));
  /* 110d1386 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1388 call esi */
  call_ind((uint32_t)(ESI), 0x110d138au);
  /* 110d138a push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 110d138f push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1391 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1393 call esi */
  call_ind((uint32_t)(ESI), 0x110d1395u);
  /* 110d1395 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 110d139a push 2 */
  push32((uint32_t)(0x2u));
  /* 110d139c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d139e call esi */
  call_ind((uint32_t)(ESI), 0x110d13a0u);
  /* 110d13a0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d13a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d13ab push 0x110d62cc */
  push32((uint32_t)(0x110d62ccu));
  /* 110d13b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d13b2 call edi */
  call_ind((uint32_t)(EDI), 0x110d13b4u);
  /* 110d13b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13ba push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13bc push 0x110d62c0 */
  push32((uint32_t)(0x110d62c0u));
  /* 110d13c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13c3 call edi */
  call_ind((uint32_t)(EDI), 0x110d13c5u);
  /* 110d13c5 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d13c8:;
  /* 110d13c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d13ca call dword ptr [0x110d50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50cc))), 0x110d13d0u);
  /* 110d13d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d13d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d13d6 jne 0x110d1442 */
  if (!C.zf) goto L_110d1442;
  /* 110d13d8 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 110d13dd push 3 */
  push32((uint32_t)(0x3u));
  /* 110d13df push 0 */
  push32((uint32_t)(0x0u));
  /* 110d13e1 call esi */
  call_ind((uint32_t)(ESI), 0x110d13e3u);
  /* 110d13e3 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 110d13e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d13ea push 0 */
  push32((uint32_t)(0x0u));
  /* 110d13ec call esi */
  call_ind((uint32_t)(ESI), 0x110d13eeu);
  /* 110d13ee push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 110d13f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 110d13f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d13f7 call esi */
  call_ind((uint32_t)(ESI), 0x110d13f9u);
  /* 110d13f9 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 110d13fe push 5 */
  push32((uint32_t)(0x5u));
  /* 110d1400 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1402 call esi */
  call_ind((uint32_t)(ESI), 0x110d1404u);
  /* 110d1404 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 110d1409 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d140b push 0 */
  push32((uint32_t)(0x0u));
  /* 110d140d call esi */
  call_ind((uint32_t)(ESI), 0x110d140fu);
  /* 110d140f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 110d1414 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d1416 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1418 call esi */
  call_ind((uint32_t)(ESI), 0x110d141au);
  /* 110d141a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d141d push 2 */
  push32((uint32_t)(0x2u));
  /* 110d141f push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1421 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1423 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1425 push 0x110d62cc */
  push32((uint32_t)(0x110d62ccu));
  /* 110d142a push 2 */
  push32((uint32_t)(0x2u));
  /* 110d142c call edi */
  call_ind((uint32_t)(EDI), 0x110d142eu);
  /* 110d142e push 2 */
  push32((uint32_t)(0x2u));
  /* 110d1430 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1432 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1434 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1436 push 0x110d62c0 */
  push32((uint32_t)(0x110d62c0u));
  /* 110d143b push 1 */
  push32((uint32_t)(0x1u));
  /* 110d143d call edi */
  call_ind((uint32_t)(EDI), 0x110d143fu);
  /* 110d143f add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d1442:;
  /* 110d1442 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1444 call dword ptr [0x110d50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50cc))), 0x110d144au);
  /* 110d144a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d144d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1450 jne 0x110d14bc */
  if (!C.zf) goto L_110d14bc;
  /* 110d1452 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d1457 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1459 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d145b call esi */
  call_ind((uint32_t)(ESI), 0x110d145du);
  /* 110d145d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d1462 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1464 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1466 call esi */
  call_ind((uint32_t)(ESI), 0x110d1468u);
  /* 110d1468 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d146d push 4 */
  push32((uint32_t)(0x4u));
  /* 110d146f push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1471 call esi */
  call_ind((uint32_t)(ESI), 0x110d1473u);
  /* 110d1473 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d1478 push 5 */
  push32((uint32_t)(0x5u));
  /* 110d147a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d147c call esi */
  call_ind((uint32_t)(ESI), 0x110d147eu);
  /* 110d147e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d1483 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1485 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1487 call esi */
  call_ind((uint32_t)(ESI), 0x110d1489u);
  /* 110d1489 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110d148e push 2 */
  push32((uint32_t)(0x2u));
  /* 110d1490 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1492 call esi */
  call_ind((uint32_t)(ESI), 0x110d1494u);
  /* 110d1494 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1497 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1499 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d149b push 1 */
  push32((uint32_t)(0x1u));
  /* 110d149d push 0 */
  push32((uint32_t)(0x0u));
  /* 110d149f push 0x110d62cc */
  push32((uint32_t)(0x110d62ccu));
  /* 110d14a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d14a6 call edi */
  call_ind((uint32_t)(EDI), 0x110d14a8u);
  /* 110d14a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d14aa push 1 */
  push32((uint32_t)(0x1u));
  /* 110d14ac push 1 */
  push32((uint32_t)(0x1u));
  /* 110d14ae push 1 */
  push32((uint32_t)(0x1u));
  /* 110d14b0 push 0x110d62c0 */
  push32((uint32_t)(0x110d62c0u));
  /* 110d14b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d14b7 call edi */
  call_ind((uint32_t)(EDI), 0x110d14b9u);
  /* 110d14b9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d14bc:;
  /* 110d14bc push 0 */
  push32((uint32_t)(0x0u));
  /* 110d14be call dword ptr [0x110d50cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50cc))), 0x110d14c4u);
  /* 110d14c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d14c7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d14ca jne 0x110d1542 */
  if (!C.zf) goto L_110d1542;
  /* 110d14cc push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 110d14d1 push eax */
  push32((uint32_t)(EAX));
  /* 110d14d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d14d4 call esi */
  call_ind((uint32_t)(ESI), 0x110d14d6u);
  /* 110d14d6 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 110d14db push 1 */
  push32((uint32_t)(0x1u));
  /* 110d14dd push 0 */
  push32((uint32_t)(0x0u));
  /* 110d14df call esi */
  call_ind((uint32_t)(ESI), 0x110d14e1u);
  /* 110d14e1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 110d14e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 110d14e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d14ea call esi */
  call_ind((uint32_t)(ESI), 0x110d14ecu);
  /* 110d14ec push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 110d14f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 110d14f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d14f5 call esi */
  call_ind((uint32_t)(ESI), 0x110d14f7u);
  /* 110d14f7 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 110d14fc push 0 */
  push32((uint32_t)(0x0u));
  /* 110d14fe push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1500 call esi */
  call_ind((uint32_t)(ESI), 0x110d1502u);
  /* 110d1502 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 110d1507 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d1509 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d150b call esi */
  call_ind((uint32_t)(ESI), 0x110d150du);
  /* 110d150d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1510 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1512 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1514 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1516 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1518 push 0x110d62cc */
  push32((uint32_t)(0x110d62ccu));
  /* 110d151d push 2 */
  push32((uint32_t)(0x2u));
  /* 110d151f call edi */
  call_ind((uint32_t)(EDI), 0x110d1521u);
  /* 110d1521 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1523 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1525 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1527 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1529 push 0x110d62c0 */
  push32((uint32_t)(0x110d62c0u));
  /* 110d152e push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1530 call edi */
  call_ind((uint32_t)(EDI), 0x110d1532u);
  /* 110d1532 push 0x110d6618 */
  push32((uint32_t)(0x110d6618u));
  /* 110d1537 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1539 call dword ptr [0x110d50d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50d4))), 0x110d153fu);
  /* 110d153f add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d1542:;
  /* 110d1542 mov edi, dword ptr [0x110d50b0] */
  EDI = (r32((uint32_t)(0x110d50b0)));
L_110d1548:;
  /* 110d1548 mov esi, dword ptr [0x110d50d8] */
  ESI = (r32((uint32_t)(0x110d50d8)));
  /* 110d154e push 6 */
  push32((uint32_t)(0x6u));
  /* 110d1550 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1552 call esi */
  call_ind((uint32_t)(ESI), 0x110d1554u);
  /* 110d1554 push 9 */
  push32((uint32_t)(0x9u));
  /* 110d1556 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1558 call esi */
  call_ind((uint32_t)(ESI), 0x110d155au);
  /* 110d155a push 2 */
  push32((uint32_t)(0x2u));
  /* 110d155c call edi */
  call_ind((uint32_t)(EDI), 0x110d155eu);
  /* 110d155e mov esi, dword ptr [0x110d50dc] */
  ESI = (r32((uint32_t)(0x110d50dc)));
  /* 110d1564 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1567 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d1569 je 0x110d1586 */
  if (C.zf) goto L_110d1586;
  /* 110d156b push 2 */
  push32((uint32_t)(0x2u));
  /* 110d156d call esi */
  call_ind((uint32_t)(ESI), 0x110d156fu);
  /* 110d156f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1572 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d1574 je 0x110d1586 */
  if (C.zf) goto L_110d1586;
  /* 110d1576 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1578 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d157a call ebx */
  call_ind((uint32_t)(EBX), 0x110d157cu);
  /* 110d157c push 0x110d62b8 */
  push32((uint32_t)(0x110d62b8u));
  /* 110d1581 call ebp */
  call_ind((uint32_t)(EBP), 0x110d1583u);
  /* 110d1583 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d1586:;
  /* 110d1586 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1588 call edi */
  call_ind((uint32_t)(EDI), 0x110d158au);
  /* 110d158a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d158d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d158f je 0x110d15ac */
  if (C.zf) goto L_110d15ac;
  /* 110d1591 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1593 call esi */
  call_ind((uint32_t)(ESI), 0x110d1595u);
  /* 110d1595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1598 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d159a je 0x110d15ac */
  if (C.zf) goto L_110d15ac;
  /* 110d159c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d159e push 3 */
  push32((uint32_t)(0x3u));
  /* 110d15a0 call ebx */
  call_ind((uint32_t)(EBX), 0x110d15a2u);
  /* 110d15a2 push 0x110d62b0 */
  push32((uint32_t)(0x110d62b0u));
  /* 110d15a7 call ebp */
  call_ind((uint32_t)(EBP), 0x110d15a9u);
  /* 110d15a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d15ac:;
  /* 110d15ac push 4 */
  push32((uint32_t)(0x4u));
  /* 110d15ae call edi */
  call_ind((uint32_t)(EDI), 0x110d15b0u);
  /* 110d15b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d15b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d15b5 je 0x110d15e3 */
  if (C.zf) goto L_110d15e3;
  /* 110d15b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d15b9 call edi */
  call_ind((uint32_t)(EDI), 0x110d15bbu);
  /* 110d15bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d15be test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d15c0 jne 0x110d15e3 */
  if (!C.zf) goto L_110d15e3;
  /* 110d15c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d15c4 call edi */
  call_ind((uint32_t)(EDI), 0x110d15c6u);
  /* 110d15c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d15c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d15cb jne 0x110d15e3 */
  if (!C.zf) goto L_110d15e3;
  /* 110d15cd push 0 */
  push32((uint32_t)(0x0u));
  /* 110d15cf push 4 */
  push32((uint32_t)(0x4u));
  /* 110d15d1 call ebx */
  call_ind((uint32_t)(EBX), 0x110d15d3u);
  /* 110d15d3 push 0x110d62a8 */
  push32((uint32_t)(0x110d62a8u));
  /* 110d15d8 call ebp */
  call_ind((uint32_t)(EBP), 0x110d15dau);
  /* 110d15da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d15dd call dword ptr [0x110d50e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50e0))), 0x110d15e3u);
L_110d15e3:;
  /* 110d15e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 110d15e5 call edi */
  call_ind((uint32_t)(EDI), 0x110d15e7u);
  /* 110d15e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d15ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d15ec je 0x110d1609 */
  if (C.zf) goto L_110d1609;
  /* 110d15ee push 0 */
  push32((uint32_t)(0x0u));
  /* 110d15f0 call esi */
  call_ind((uint32_t)(ESI), 0x110d15f2u);
  /* 110d15f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d15f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d15f7 je 0x110d1609 */
  if (C.zf) goto L_110d1609;
  /* 110d15f9 push 0x110d62a0 */
  push32((uint32_t)(0x110d62a0u));
  /* 110d15fe call ebp */
  call_ind((uint32_t)(EBP), 0x110d1600u);
  /* 110d1600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1603 call dword ptr [0x110d50e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50e4))), 0x110d1609u);
L_110d1609:;
  /* 110d1609 mov esi, dword ptr [0x110d50e8] */
  ESI = (r32((uint32_t)(0x110d50e8)));
  /* 110d160f push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1611 push 0x110d6638 */
  push32((uint32_t)(0x110d6638u));
  /* 110d1616 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1618 call esi */
  call_ind((uint32_t)(ESI), 0x110d161au);
  /* 110d161a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d161c push 0x110d6640 */
  push32((uint32_t)(0x110d6640u));
  /* 110d1621 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1623 call esi */
  call_ind((uint32_t)(ESI), 0x110d1625u);
  /* 110d1625 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1627 push 0x110d6648 */
  push32((uint32_t)(0x110d6648u));
  /* 110d162c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d162e call esi */
  call_ind((uint32_t)(ESI), 0x110d1630u);
  /* 110d1630 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1632 push 0x110d6650 */
  push32((uint32_t)(0x110d6650u));
  /* 110d1637 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1639 call esi */
  call_ind((uint32_t)(ESI), 0x110d163bu);
  /* 110d163b push 0 */
  push32((uint32_t)(0x0u));
  /* 110d163d push 0x110d6658 */
  push32((uint32_t)(0x110d6658u));
  /* 110d1642 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1644 call esi */
  call_ind((uint32_t)(ESI), 0x110d1646u);
  /* 110d1646 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1648 push 0x110d6660 */
  push32((uint32_t)(0x110d6660u));
  /* 110d164d push 0 */
  push32((uint32_t)(0x0u));
  /* 110d164f call esi */
  call_ind((uint32_t)(ESI), 0x110d1651u);
  /* 110d1651 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1654 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1656 push 0x110d6668 */
  push32((uint32_t)(0x110d6668u));
  /* 110d165b push 0 */
  push32((uint32_t)(0x0u));
  /* 110d165d call esi */
  call_ind((uint32_t)(ESI), 0x110d165fu);
  /* 110d165f push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1661 push 0x110d6670 */
  push32((uint32_t)(0x110d6670u));
  /* 110d1666 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1668 call esi */
  call_ind((uint32_t)(ESI), 0x110d166au);
  /* 110d166a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d166c push 0x110d6678 */
  push32((uint32_t)(0x110d6678u));
  /* 110d1671 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1673 call esi */
  call_ind((uint32_t)(ESI), 0x110d1675u);
  /* 110d1675 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1677 push 0x110d6680 */
  push32((uint32_t)(0x110d6680u));
  /* 110d167c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d167e call esi */
  call_ind((uint32_t)(ESI), 0x110d1680u);
  /* 110d1680 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1682 push 0x110d6688 */
  push32((uint32_t)(0x110d6688u));
  /* 110d1687 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1689 call esi */
  call_ind((uint32_t)(ESI), 0x110d168bu);
  /* 110d168b push 0 */
  push32((uint32_t)(0x0u));
  /* 110d168d push 0x110d6690 */
  push32((uint32_t)(0x110d6690u));
  /* 110d1692 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1694 call esi */
  call_ind((uint32_t)(ESI), 0x110d1696u);
  /* 110d1696 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1699 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d169b push 0x110d6698 */
  push32((uint32_t)(0x110d6698u));
  /* 110d16a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16a2 call esi */
  call_ind((uint32_t)(ESI), 0x110d16a4u);
  /* 110d16a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16a6 push 0x110d66a8 */
  push32((uint32_t)(0x110d66a8u));
  /* 110d16ab push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16ad call esi */
  call_ind((uint32_t)(ESI), 0x110d16afu);
  /* 110d16af push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16b1 push 0x110d66b8 */
  push32((uint32_t)(0x110d66b8u));
  /* 110d16b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16b8 call esi */
  call_ind((uint32_t)(ESI), 0x110d16bau);
  /* 110d16ba push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16bc push 0x110d66c8 */
  push32((uint32_t)(0x110d66c8u));
  /* 110d16c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16c3 call esi */
  call_ind((uint32_t)(ESI), 0x110d16c5u);
  /* 110d16c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16c7 push 0x110d66d8 */
  push32((uint32_t)(0x110d66d8u));
  /* 110d16cc push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16ce call esi */
  call_ind((uint32_t)(ESI), 0x110d16d0u);
  /* 110d16d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16d2 push 0x110d66f0 */
  push32((uint32_t)(0x110d66f0u));
  /* 110d16d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16d9 call esi */
  call_ind((uint32_t)(ESI), 0x110d16dbu);
  /* 110d16db add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d16de push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16e0 push 0x110d6708 */
  push32((uint32_t)(0x110d6708u));
  /* 110d16e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16e7 call esi */
  call_ind((uint32_t)(ESI), 0x110d16e9u);
  /* 110d16e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16eb push 0x110d66a0 */
  push32((uint32_t)(0x110d66a0u));
  /* 110d16f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16f2 call esi */
  call_ind((uint32_t)(ESI), 0x110d16f4u);
  /* 110d16f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16f6 push 0x110d66b0 */
  push32((uint32_t)(0x110d66b0u));
  /* 110d16fb push 0 */
  push32((uint32_t)(0x0u));
  /* 110d16fd call esi */
  call_ind((uint32_t)(ESI), 0x110d16ffu);
  /* 110d16ff push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1701 push 0x110d66c0 */
  push32((uint32_t)(0x110d66c0u));
  /* 110d1706 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1708 call esi */
  call_ind((uint32_t)(ESI), 0x110d170au);
  /* 110d170a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d170c push 0x110d66d0 */
  push32((uint32_t)(0x110d66d0u));
  /* 110d1711 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1713 call esi */
  call_ind((uint32_t)(ESI), 0x110d1715u);
  /* 110d1715 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1717 push 0x110d66e8 */
  push32((uint32_t)(0x110d66e8u));
  /* 110d171c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d171e call esi */
  call_ind((uint32_t)(ESI), 0x110d1720u);
  /* 110d1720 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1723 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1725 push 0x110d6700 */
  push32((uint32_t)(0x110d6700u));
  /* 110d172a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d172c call esi */
  call_ind((uint32_t)(ESI), 0x110d172eu);
  /* 110d172e push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1730 push 0x110d6718 */
  push32((uint32_t)(0x110d6718u));
  /* 110d1735 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1737 call esi */
  call_ind((uint32_t)(ESI), 0x110d1739u);
  /* 110d1739 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d173b push 0x110d6720 */
  push32((uint32_t)(0x110d6720u));
  /* 110d1740 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1742 call esi */
  call_ind((uint32_t)(ESI), 0x110d1744u);
  /* 110d1744 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1746 push 0x110d6728 */
  push32((uint32_t)(0x110d6728u));
  /* 110d174b push 0 */
  push32((uint32_t)(0x0u));
  /* 110d174d call esi */
  call_ind((uint32_t)(ESI), 0x110d174fu);
  /* 110d174f push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1751 push 0x110d6730 */
  push32((uint32_t)(0x110d6730u));
  /* 110d1756 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1758 call esi */
  call_ind((uint32_t)(ESI), 0x110d175au);
  /* 110d175a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d175c push 0x110d66e0 */
  push32((uint32_t)(0x110d66e0u));
  /* 110d1761 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1763 call esi */
  call_ind((uint32_t)(ESI), 0x110d1765u);
  /* 110d1765 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1768 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d176a push 0x110d66f8 */
  push32((uint32_t)(0x110d66f8u));
  /* 110d176f push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1771 call esi */
  call_ind((uint32_t)(ESI), 0x110d1773u);
  /* 110d1773 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1775 push 0x110d6710 */
  push32((uint32_t)(0x110d6710u));
  /* 110d177a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d177c call esi */
  call_ind((uint32_t)(ESI), 0x110d177eu);
  /* 110d177e push 6 */
  push32((uint32_t)(0x6u));
  /* 110d1780 call edi */
  call_ind((uint32_t)(EDI), 0x110d1782u);
  /* 110d1782 mov esi, dword ptr [0x110d50ec] */
  ESI = (r32((uint32_t)(0x110d50ec)));
  /* 110d1788 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d178b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d178d je 0x110d17c1 */
  if (C.zf) goto L_110d17c1;
  /* 110d178f push 0x110d6610 */
  push32((uint32_t)(0x110d6610u));
  /* 110d1794 push 0x110d6630 */
  push32((uint32_t)(0x110d6630u));
  /* 110d1799 call esi */
  call_ind((uint32_t)(ESI), 0x110d179bu);
  /* 110d179b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d179e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d17a0 jle 0x110d17c1 */
  if ((C.zf||C.sf!=C.of)) goto L_110d17c1;
  /* 110d17a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d17a4 push 6 */
  push32((uint32_t)(0x6u));
  /* 110d17a6 call ebx */
  call_ind((uint32_t)(EBX), 0x110d17a8u);
  /* 110d17a8 push 0x110d6298 */
  push32((uint32_t)(0x110d6298u));
  /* 110d17ad call ebp */
  call_ind((uint32_t)(EBP), 0x110d17afu);
  /* 110d17af push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 110d17b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d17b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d17b8 call dword ptr [0x110d50f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50f0))), 0x110d17beu);
  /* 110d17be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d17c1:;
  /* 110d17c1 push 7 */
  push32((uint32_t)(0x7u));
  /* 110d17c3 call edi */
  call_ind((uint32_t)(EDI), 0x110d17c5u);
  /* 110d17c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d17c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d17ca je 0x110d17e8 */
  if (C.zf) goto L_110d17e8;
  /* 110d17cc push 0x110d6610 */
  push32((uint32_t)(0x110d6610u));
  /* 110d17d1 push 0x110d6630 */
  push32((uint32_t)(0x110d6630u));
  /* 110d17d6 call esi */
  call_ind((uint32_t)(ESI), 0x110d17d8u);
  /* 110d17d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d17db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d17dd jne 0x110d17e8 */
  if (!C.zf) goto L_110d17e8;
  /* 110d17df push 1 */
  push32((uint32_t)(0x1u));
  /* 110d17e1 push 6 */
  push32((uint32_t)(0x6u));
  /* 110d17e3 call ebx */
  call_ind((uint32_t)(EBX), 0x110d17e5u);
  /* 110d17e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d17e8:;
  /* 110d17e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d17ea push 2 */
  push32((uint32_t)(0x2u));
  /* 110d17ec push 0x110d6738 */
  push32((uint32_t)(0x110d6738u));
  /* 110d17f1 call dword ptr [0x110d50f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50f4))), 0x110d17f7u);
  /* 110d17f7 push 8 */
  push32((uint32_t)(0x8u));
  /* 110d17f9 call edi */
  call_ind((uint32_t)(EDI), 0x110d17fbu);
  /* 110d17fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d17fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d1800 je 0x110d1842 */
  if (C.zf) goto L_110d1842;
  /* 110d1802 push 0x110d6610 */
  push32((uint32_t)(0x110d6610u));
  /* 110d1807 push 0x110d6630 */
  push32((uint32_t)(0x110d6630u));
  /* 110d180c call esi */
  call_ind((uint32_t)(ESI), 0x110d180eu);
  /* 110d180e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1813 je 0x110d1842 */
  if (C.zf) goto L_110d1842;
  /* 110d1815 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1817 push 8 */
  push32((uint32_t)(0x8u));
  /* 110d1819 call ebx */
  call_ind((uint32_t)(EBX), 0x110d181bu);
  /* 110d181b push 1 */
  push32((uint32_t)(0x1u));
  /* 110d181d push 9 */
  push32((uint32_t)(0x9u));
  /* 110d181f call ebx */
  call_ind((uint32_t)(EBX), 0x110d1821u);
  /* 110d1821 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1823 push 0x110d6610 */
  push32((uint32_t)(0x110d6610u));
  /* 110d1828 call dword ptr [0x110d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50c0))), 0x110d182eu);
  /* 110d182e push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1830 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1832 push 0x110d6620 */
  push32((uint32_t)(0x110d6620u));
  /* 110d1837 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1839 call dword ptr [0x110d50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50c4))), 0x110d183fu);
  /* 110d183f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d1842:;
  /* 110d1842 push 9 */
  push32((uint32_t)(0x9u));
  /* 110d1844 call edi */
  call_ind((uint32_t)(EDI), 0x110d1846u);
  /* 110d1846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1849 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d184b je 0x110d1890 */
  if (C.zf) goto L_110d1890;
  /* 110d184d push 0x110d6610 */
  push32((uint32_t)(0x110d6610u));
  /* 110d1852 push 0x110d6620 */
  push32((uint32_t)(0x110d6620u));
  /* 110d1857 call esi */
  call_ind((uint32_t)(ESI), 0x110d1859u);
  /* 110d1859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d185c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d185e je 0x110d1890 */
  if (C.zf) goto L_110d1890;
  /* 110d1860 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1862 push 9 */
  push32((uint32_t)(0x9u));
  /* 110d1864 call ebx */
  call_ind((uint32_t)(EBX), 0x110d1866u);
  /* 110d1866 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1868 push 8 */
  push32((uint32_t)(0x8u));
  /* 110d186a call ebx */
  call_ind((uint32_t)(EBX), 0x110d186cu);
  /* 110d186c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d186e push 0x110d6610 */
  push32((uint32_t)(0x110d6610u));
  /* 110d1873 call dword ptr [0x110d50c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50c0))), 0x110d1879u);
  /* 110d1879 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d187b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 110d1880 push 0x110d6630 */
  push32((uint32_t)(0x110d6630u));
  /* 110d1885 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d1887 call dword ptr [0x110d50c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50c4))), 0x110d188du);
  /* 110d188d add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d1890:;
  /* 110d1890 pop edi */
  EDI = (pop32());
  /* 110d1891 pop esi */
  ESI = (pop32());
  /* 110d1892 pop ebp */
  EBP = (pop32());
  /* 110d1893 pop ebx */
  EBX = (pop32());
  /* 110d1894 ret  */
  ESPCHK(0x110d1230u, _esp0);
  ESP += 4; return;
}

/* FUN_100018a0 @ 0x110d18a0 (20 bytes, 6 insns) */
void f_110d18a0(void) {
  FTRACE(0x110d18a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d18a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d18a4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110d18a5 jne 0x110d18ac */
  if (!C.zf) goto L_110d18ac;
  /* 110d18a7 call 0x110d1000 */
  push32(0x110d18acu); f_110d1000();
L_110d18ac:;
  /* 110d18ac mov eax, 1 */
  EAX = (0x1u);
  /* 110d18b1 ret 0xc */
  ESPCHK(0x110d18a0u, _esp0);
  ESP += 16; return;
}

/* FUN_100018c0 @ 0x110d18c0 (217 bytes, 57 insns) */
void f_110d18c0(void) {
  FTRACE(0x110d18c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d18c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d18c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d18c7 jne 0x110d1955 */
  if (!C.zf) goto L_110d1955;
  /* 110d18cd call dword ptr [0x110d5050] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5050))), 0x110d18d3u);
  /* 110d18d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d18d5 mov dword ptr [0x110d676c], eax */
  w32((uint32_t)(0x110d676c), (EAX));
  /* 110d18da call 0x110d22f4 */
  push32(0x110d18dfu); f_110d22f4();
  /* 110d18df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d18e1 pop ecx */
  ECX = (pop32());
  /* 110d18e2 je 0x110d1920 */
  if (C.zf) goto L_110d1920;
  /* 110d18e4 mov eax, dword ptr [0x110d676c] */
  EAX = (r32((uint32_t)(0x110d676c)));
  /* 110d18e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110d18eb mov cl, byte ptr [0x110d676d] */
  CL = (r8((uint32_t)(0x110d676d)));
  /* 110d18f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110d18f6 shr dword ptr [0x110d676c], 0x10 */
  w32((uint32_t)(0x110d676c), (sh_shr((uint32_t)(r32((uint32_t)(0x110d676c))), (0x10u)&0x1f, 32)));
  /* 110d18fd mov dword ptr [0x110d6774], eax */
  w32((uint32_t)(0x110d6774), (EAX));
  /* 110d1902 mov dword ptr [0x110d6778], ecx */
  w32((uint32_t)(0x110d6778), (ECX));
  /* 110d1908 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110d190b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d190d mov dword ptr [0x110d6770], eax */
  w32((uint32_t)(0x110d6770), (EAX));
  /* 110d1912 call 0x110d1b87 */
  push32(0x110d1917u); f_110d1b87();
  /* 110d1917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1919 jne 0x110d1924 */
  if (!C.zf) goto L_110d1924;
  /* 110d191b call 0x110d2330 */
  push32(0x110d1920u); f_110d2330();
L_110d1920:;
  /* 110d1920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d1922 jmp 0x110d1996 */
  goto L_110d1996;
L_110d1924:;
  /* 110d1924 call dword ptr [0x110d504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d504c))), 0x110d192au);
  /* 110d192a mov dword ptr [0x110d6cd8], eax */
  w32((uint32_t)(0x110d6cd8), (EAX));
  /* 110d192f call 0x110d21c2 */
  push32(0x110d1934u); f_110d21c2();
  /* 110d1934 mov dword ptr [0x110d6758], eax */
  w32((uint32_t)(0x110d6758), (EAX));
  /* 110d1939 call 0x110d1cac */
  push32(0x110d193eu); f_110d1cac();
  /* 110d193e call 0x110d1f75 */
  push32(0x110d1943u); f_110d1f75();
  /* 110d1943 call 0x110d1ebc */
  push32(0x110d1948u); f_110d1ebc();
  /* 110d1948 call 0x110d1a69 */
  push32(0x110d194du); f_110d1a69();
  /* 110d194d inc dword ptr [0x110d6754] */
  { uint32_t _r=(r32((uint32_t)(0x110d6754)))+1; w32((uint32_t)(0x110d6754), (_r)); fl_inc(_r,32); }
  /* 110d1953 jmp 0x110d1993 */
  goto L_110d1993;
L_110d1955:;
  /* 110d1955 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110d1957 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1959 jne 0x110d1987 */
  if (!C.zf) goto L_110d1987;
  /* 110d195b cmp dword ptr [0x110d6754], ecx */
  { uint32_t _a=(r32((uint32_t)(0x110d6754))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1961 jle 0x110d1920 */
  if ((C.zf||C.sf!=C.of)) goto L_110d1920;
  /* 110d1963 dec dword ptr [0x110d6754] */
  { uint32_t _r=(r32((uint32_t)(0x110d6754)))-1; w32((uint32_t)(0x110d6754), (_r)); fl_dec(_r,32); }
  /* 110d1969 cmp dword ptr [0x110d67a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x110d67a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d196f jne 0x110d1976 */
  if (!C.zf) goto L_110d1976;
  /* 110d1971 call 0x110d1aa7 */
  push32(0x110d1976u); f_110d1aa7();
L_110d1976:;
  /* 110d1976 call 0x110d1e68 */
  push32(0x110d197bu); f_110d1e68();
  /* 110d197b call 0x110d1bdb */
  push32(0x110d1980u); f_110d1bdb();
  /* 110d1980 call 0x110d2330 */
  push32(0x110d1985u); f_110d2330();
  /* 110d1985 jmp 0x110d1993 */
  goto L_110d1993;
L_110d1987:;
  /* 110d1987 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d198a jne 0x110d1993 */
  if (!C.zf) goto L_110d1993;
  /* 110d198c push ecx */
  push32((uint32_t)(ECX));
  /* 110d198d call 0x110d1c0c */
  push32(0x110d1992u); f_110d1c0c();
  /* 110d1992 pop ecx */
  ECX = (pop32());
L_110d1993:;
  /* 110d1993 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1995 pop eax */
  EAX = (pop32());
L_110d1996:;
  /* 110d1996 ret 0xc */
  ESPCHK(0x110d18c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x110d1999 (157 bytes, 73 insns) */
void f_110d1999(void) {
  FTRACE(0x110d1999u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1999 push ebp */
  push32((uint32_t)(EBP));
  /* 110d199a mov ebp, esp */
  EBP = (ESP);
  /* 110d199c push ebx */
  push32((uint32_t)(EBX));
  /* 110d199d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d19a0 push esi */
  push32((uint32_t)(ESI));
  /* 110d19a1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110d19a4 push edi */
  push32((uint32_t)(EDI));
  /* 110d19a5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 110d19a8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d19aa jne 0x110d19b5 */
  if (!C.zf) goto L_110d19b5;
  /* 110d19ac cmp dword ptr [0x110d6754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110d6754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d19b3 jmp 0x110d19db */
  goto L_110d19db;
L_110d19b5:;
  /* 110d19b5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d19b8 je 0x110d19bf */
  if (C.zf) goto L_110d19bf;
  /* 110d19ba cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d19bd jne 0x110d19e1 */
  if (!C.zf) goto L_110d19e1;
L_110d19bf:;
  /* 110d19bf mov eax, dword ptr [0x110d6cdc] */
  EAX = (r32((uint32_t)(0x110d6cdc)));
  /* 110d19c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d19c6 je 0x110d19d1 */
  if (C.zf) goto L_110d19d1;
  /* 110d19c8 push edi */
  push32((uint32_t)(EDI));
  /* 110d19c9 push esi */
  push32((uint32_t)(ESI));
  /* 110d19ca push ebx */
  push32((uint32_t)(EBX));
  /* 110d19cb call eax */
  call_ind((uint32_t)(EAX), 0x110d19cdu);
  /* 110d19cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d19cf je 0x110d19dd */
  if (C.zf) goto L_110d19dd;
L_110d19d1:;
  /* 110d19d1 push edi */
  push32((uint32_t)(EDI));
  /* 110d19d2 push esi */
  push32((uint32_t)(ESI));
  /* 110d19d3 push ebx */
  push32((uint32_t)(EBX));
  /* 110d19d4 call 0x110d18c0 */
  push32(0x110d19d9u); f_110d18c0();
  /* 110d19d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_110d19db:;
  /* 110d19db jne 0x110d19e1 */
  if (!C.zf) goto L_110d19e1;
L_110d19dd:;
  /* 110d19dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d19df jmp 0x110d1a2f */
  goto L_110d1a2f;
L_110d19e1:;
  /* 110d19e1 push edi */
  push32((uint32_t)(EDI));
  /* 110d19e2 push esi */
  push32((uint32_t)(ESI));
  /* 110d19e3 push ebx */
  push32((uint32_t)(EBX));
  /* 110d19e4 call 0x110d18a0 */
  push32(0x110d19e9u); f_110d18a0();
  /* 110d19e9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d19ec mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 110d19ef jne 0x110d19fd */
  if (!C.zf) goto L_110d19fd;
  /* 110d19f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d19f3 jne 0x110d1a2c */
  if (!C.zf) goto L_110d1a2c;
  /* 110d19f5 push edi */
  push32((uint32_t)(EDI));
  /* 110d19f6 push eax */
  push32((uint32_t)(EAX));
  /* 110d19f7 push ebx */
  push32((uint32_t)(EBX));
  /* 110d19f8 call 0x110d18c0 */
  push32(0x110d19fdu); f_110d18c0();
L_110d19fd:;
  /* 110d19fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d19ff je 0x110d1a06 */
  if (C.zf) goto L_110d1a06;
  /* 110d1a01 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1a04 jne 0x110d1a2c */
  if (!C.zf) goto L_110d1a2c;
L_110d1a06:;
  /* 110d1a06 push edi */
  push32((uint32_t)(EDI));
  /* 110d1a07 push esi */
  push32((uint32_t)(ESI));
  /* 110d1a08 push ebx */
  push32((uint32_t)(EBX));
  /* 110d1a09 call 0x110d18c0 */
  push32(0x110d1a0eu); f_110d18c0();
  /* 110d1a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1a10 jne 0x110d1a15 */
  if (!C.zf) goto L_110d1a15;
  /* 110d1a12 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_110d1a15:;
  /* 110d1a15 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1a19 je 0x110d1a2c */
  if (C.zf) goto L_110d1a2c;
  /* 110d1a1b mov eax, dword ptr [0x110d6cdc] */
  EAX = (r32((uint32_t)(0x110d6cdc)));
  /* 110d1a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1a22 je 0x110d1a2c */
  if (C.zf) goto L_110d1a2c;
  /* 110d1a24 push edi */
  push32((uint32_t)(EDI));
  /* 110d1a25 push esi */
  push32((uint32_t)(ESI));
  /* 110d1a26 push ebx */
  push32((uint32_t)(EBX));
  /* 110d1a27 call eax */
  call_ind((uint32_t)(EAX), 0x110d1a29u);
  /* 110d1a29 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_110d1a2c:;
  /* 110d1a2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_110d1a2f:;
  /* 110d1a2f pop edi */
  EDI = (pop32());
  /* 110d1a30 pop esi */
  ESI = (pop32());
  /* 110d1a31 pop ebx */
  EBX = (pop32());
  /* 110d1a32 pop ebp */
  EBP = (pop32());
  /* 110d1a33 ret 0xc */
  ESPCHK(0x110d1999u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x110d1a36 (48 bytes, 15 insns) */
void f_110d1a36(void) {
  FTRACE(0x110d1a36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1a36 mov eax, dword ptr [0x110d6760] */
  EAX = (r32((uint32_t)(0x110d6760)));
  /* 110d1a3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1a3e je 0x110d1a4d */
  if (C.zf) goto L_110d1a4d;
  /* 110d1a40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1a42 jne 0x110d1a52 */
  if (!C.zf) goto L_110d1a52;
  /* 110d1a44 cmp dword ptr [0x110d6764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110d6764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1a4b jne 0x110d1a52 */
  if (!C.zf) goto L_110d1a52;
L_110d1a4d:;
  /* 110d1a4d call 0x110d23a5 */
  push32(0x110d1a52u); f_110d23a5();
L_110d1a52:;
  /* 110d1a52 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110d1a56 call 0x110d23de */
  push32(0x110d1a5bu); f_110d23de();
  /* 110d1a5b push 0xff */
  push32((uint32_t)(0xffu));
  /* 110d1a60 call dword ptr [0x110d62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d62e8))), 0x110d1a66u);
  /* 110d1a66 pop ecx */
  ECX = (pop32());
  /* 110d1a67 pop ecx */
  ECX = (pop32());
  /* 110d1a68 ret  */
  ESPCHK(0x110d1a36u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a69 @ 0x110d1a69 (45 bytes, 12 insns) */
void f_110d1a69(void) {
  FTRACE(0x110d1a69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1a69 mov eax, dword ptr [0x110d6cd4] */
  EAX = (r32((uint32_t)(0x110d6cd4)));
  /* 110d1a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1a70 je 0x110d1a74 */
  if (C.zf) goto L_110d1a74;
  /* 110d1a72 call eax */
  call_ind((uint32_t)(EAX), 0x110d1a74u);
L_110d1a74:;
  /* 110d1a74 push 0x110d6010 */
  push32((uint32_t)(0x110d6010u));
  /* 110d1a79 push 0x110d6008 */
  push32((uint32_t)(0x110d6008u));
  /* 110d1a7e call 0x110d1b6d */
  push32(0x110d1a83u); f_110d1b6d();
  /* 110d1a83 push 0x110d6004 */
  push32((uint32_t)(0x110d6004u));
  /* 110d1a88 push 0x110d6000 */
  push32((uint32_t)(0x110d6000u));
  /* 110d1a8d call 0x110d1b6d */
  push32(0x110d1a92u); f_110d1b6d();
  /* 110d1a92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1a95 ret  */
  ESPCHK(0x110d1a69u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x110d1a96 (17 bytes, 6 insns) */
void f_110d1a96(void) {
  FTRACE(0x110d1a96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1a98 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1a9a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 110d1a9e call 0x110d1ab6 */
  push32(0x110d1aa3u); f_110d1ab6();
  /* 110d1aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1aa6 ret  */
  ESPCHK(0x110d1a96u, _esp0);
  ESP += 4; return;
}

/* FUN_10001aa7 @ 0x110d1aa7 (15 bytes, 6 insns) */
void f_110d1aa7(void) {
  FTRACE(0x110d1aa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1aab push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1aad call 0x110d1ab6 */
  push32(0x110d1ab2u); f_110d1ab6();
  /* 110d1ab2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1ab5 ret  */
  ESPCHK(0x110d1aa7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ab6 @ 0x110d1ab6 (163 bytes, 53 insns) */
void f_110d1ab6(void) {
  FTRACE(0x110d1ab6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1ab6 push edi */
  push32((uint32_t)(EDI));
  /* 110d1ab7 call 0x110d1b5b */
  push32(0x110d1abcu); f_110d1b5b();
  /* 110d1abc push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1abe pop edi */
  EDI = (pop32());
  /* 110d1abf cmp dword ptr [0x110d67a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x110d67a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1ac5 jne 0x110d1ad8 */
  if (!C.zf) goto L_110d1ad8;
  /* 110d1ac7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 110d1acb call dword ptr [0x110d505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d505c))), 0x110d1ad1u);
  /* 110d1ad1 push eax */
  push32((uint32_t)(EAX));
  /* 110d1ad2 call dword ptr [0x110d5058] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5058))), 0x110d1ad8u);
L_110d1ad8:;
  /* 110d1ad8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1add push ebx */
  push32((uint32_t)(EBX));
  /* 110d1ade mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 110d1ae2 mov dword ptr [0x110d67a4], edi */
  w32((uint32_t)(0x110d67a4), (EDI));
  /* 110d1ae8 mov byte ptr [0x110d67a0], bl */
  w8((uint32_t)(0x110d67a0), (BL));
  /* 110d1aee jne 0x110d1b2c */
  if (!C.zf) goto L_110d1b2c;
  /* 110d1af0 mov eax, dword ptr [0x110d6cd0] */
  EAX = (r32((uint32_t)(0x110d6cd0)));
  /* 110d1af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1af7 je 0x110d1b1b */
  if (C.zf) goto L_110d1b1b;
  /* 110d1af9 mov ecx, dword ptr [0x110d6ccc] */
  ECX = (r32((uint32_t)(0x110d6ccc)));
  /* 110d1aff push esi */
  push32((uint32_t)(ESI));
  /* 110d1b00 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 110d1b03 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1b05 jb 0x110d1b1a */
  if (C.cf) goto L_110d1b1a;
L_110d1b07:;
  /* 110d1b07 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110d1b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1b0b je 0x110d1b0f */
  if (C.zf) goto L_110d1b0f;
  /* 110d1b0d call eax */
  call_ind((uint32_t)(EAX), 0x110d1b0fu);
L_110d1b0f:;
  /* 110d1b0f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d1b12 cmp esi, dword ptr [0x110d6cd0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110d6cd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1b18 jae 0x110d1b07 */
  if (!C.cf) goto L_110d1b07;
L_110d1b1a:;
  /* 110d1b1a pop esi */
  ESI = (pop32());
L_110d1b1b:;
  /* 110d1b1b push 0x110d6018 */
  push32((uint32_t)(0x110d6018u));
  /* 110d1b20 push 0x110d6014 */
  push32((uint32_t)(0x110d6014u));
  /* 110d1b25 call 0x110d1b6d */
  push32(0x110d1b2au); f_110d1b6d();
  /* 110d1b2a pop ecx */
  ECX = (pop32());
  /* 110d1b2b pop ecx */
  ECX = (pop32());
L_110d1b2c:;
  /* 110d1b2c push 0x110d6020 */
  push32((uint32_t)(0x110d6020u));
  /* 110d1b31 push 0x110d601c */
  push32((uint32_t)(0x110d601cu));
  /* 110d1b36 call 0x110d1b6d */
  push32(0x110d1b3bu); f_110d1b6d();
  /* 110d1b3b pop ecx */
  ECX = (pop32());
  /* 110d1b3c pop ecx */
  ECX = (pop32());
  /* 110d1b3d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110d1b3f pop ebx */
  EBX = (pop32());
  /* 110d1b40 je 0x110d1b49 */
  if (C.zf) goto L_110d1b49;
  /* 110d1b42 call 0x110d1b64 */
  push32(0x110d1b47u); f_110d1b64();
  /* 110d1b47 pop edi */
  EDI = (pop32());
  /* 110d1b48 ret  */
  ESPCHK(0x110d1ab6u, _esp0);
  ESP += 4; return;
L_110d1b49:;
  /* 110d1b49 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 110d1b4d mov dword ptr [0x110d67a8], edi */
  w32((uint32_t)(0x110d67a8), (EDI));
  /* 110d1b53 call dword ptr [0x110d5054] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5054))), 0x110d1b59u);
  /* 110d1b59 pop edi */
  EDI = (pop32());
  /* 110d1b5a ret  */
  ESPCHK(0x110d1ab6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b5b @ 0x110d1b5b (9 bytes, 4 insns) */
void f_110d1b5b(void) {
  FTRACE(0x110d1b5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1b5b push 0xd */
  push32((uint32_t)(0xdu));
  /* 110d1b5d call 0x110d25c6 */
  push32(0x110d1b62u); f_110d25c6();
  /* 110d1b62 pop ecx */
  ECX = (pop32());
  /* 110d1b63 ret  */
  ESPCHK(0x110d1b5bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001b64 @ 0x110d1b64 (9 bytes, 4 insns) */
void f_110d1b64(void) {
  FTRACE(0x110d1b64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1b64 push 0xd */
  push32((uint32_t)(0xdu));
  /* 110d1b66 call 0x110d2627 */
  push32(0x110d1b6bu); f_110d2627();
  /* 110d1b6b pop ecx */
  ECX = (pop32());
  /* 110d1b6c ret  */
  ESPCHK(0x110d1b64u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b6d @ 0x110d1b6d (26 bytes, 12 insns) */
void f_110d1b6d(void) {
  FTRACE(0x110d1b6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1b6d push esi */
  push32((uint32_t)(ESI));
  /* 110d1b6e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_110d1b72:;
  /* 110d1b72 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1b76 jae 0x110d1b85 */
  if (!C.cf) goto L_110d1b85;
  /* 110d1b78 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110d1b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1b7c je 0x110d1b80 */
  if (C.zf) goto L_110d1b80;
  /* 110d1b7e call eax */
  call_ind((uint32_t)(EAX), 0x110d1b80u);
L_110d1b80:;
  /* 110d1b80 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1b83 jmp 0x110d1b72 */
  goto L_110d1b72;
L_110d1b85:;
  /* 110d1b85 pop esi */
  ESI = (pop32());
  /* 110d1b86 ret  */
  ESPCHK(0x110d1b6du, _esp0);
  ESP += 4; return;
}

/* FUN_10001b87 @ 0x110d1b87 (84 bytes, 32 insns) */
void f_110d1b87(void) {
  FTRACE(0x110d1b87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1b87 push esi */
  push32((uint32_t)(ESI));
  /* 110d1b88 call 0x110d2531 */
  push32(0x110d1b8du); f_110d2531();
  /* 110d1b8d call dword ptr [0x110d5068] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5068))), 0x110d1b93u);
  /* 110d1b93 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1b96 mov dword ptr [0x110d62ec], eax */
  w32((uint32_t)(0x110d62ec), (EAX));
  /* 110d1b9b je 0x110d1bd7 */
  if (C.zf) goto L_110d1bd7;
  /* 110d1b9d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 110d1b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1ba1 call 0x110d263c */
  push32(0x110d1ba6u); f_110d263c();
  /* 110d1ba6 mov esi, eax */
  ESI = (EAX);
  /* 110d1ba8 pop ecx */
  ECX = (pop32());
  /* 110d1ba9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d1bab pop ecx */
  ECX = (pop32());
  /* 110d1bac je 0x110d1bd7 */
  if (C.zf) goto L_110d1bd7;
  /* 110d1bae push esi */
  push32((uint32_t)(ESI));
  /* 110d1baf push dword ptr [0x110d62ec] */
  push32((uint32_t)(r32((uint32_t)(0x110d62ec))));
  /* 110d1bb5 call dword ptr [0x110d5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5064))), 0x110d1bbbu);
  /* 110d1bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1bbd je 0x110d1bd7 */
  if (C.zf) goto L_110d1bd7;
  /* 110d1bbf push esi */
  push32((uint32_t)(ESI));
  /* 110d1bc0 call 0x110d1bf9 */
  push32(0x110d1bc5u); f_110d1bf9();
  /* 110d1bc5 pop ecx */
  ECX = (pop32());
  /* 110d1bc6 call dword ptr [0x110d5060] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5060))), 0x110d1bccu);
  /* 110d1bcc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 110d1bd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d1bd2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110d1bd4 pop eax */
  EAX = (pop32());
  /* 110d1bd5 pop esi */
  ESI = (pop32());
  /* 110d1bd6 ret  */
  ESPCHK(0x110d1b87u, _esp0);
  ESP += 4; return;
L_110d1bd7:;
  /* 110d1bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d1bd9 pop esi */
  ESI = (pop32());
  /* 110d1bda ret  */
  ESPCHK(0x110d1b87u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bdb @ 0x110d1bdb (30 bytes, 8 insns) */
void f_110d1bdb(void) {
  FTRACE(0x110d1bdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1bdb call 0x110d255a */
  push32(0x110d1be0u); f_110d255a();
  /* 110d1be0 mov eax, dword ptr [0x110d62ec] */
  EAX = (r32((uint32_t)(0x110d62ec)));
  /* 110d1be5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1be8 je 0x110d1bf8 */
  if (C.zf) goto L_110d1bf8;
  /* 110d1bea push eax */
  push32((uint32_t)(EAX));
  /* 110d1beb call dword ptr [0x110d506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d506c))), 0x110d1bf1u);
  /* 110d1bf1 or dword ptr [0x110d62ec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x110d62ec)))|(0xffffffffu); w32((uint32_t)(0x110d62ec), (_r)); fl_logic(_r,32); }
L_110d1bf8:;
  /* 110d1bf8 ret  */
  ESPCHK(0x110d1bdbu, _esp0);
  ESP += 4; return;
}

/* FUN_10001bf9 @ 0x110d1bf9 (19 bytes, 4 insns) */
void f_110d1bf9(void) {
  FTRACE(0x110d1bf9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1bf9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d1bfd mov dword ptr [eax + 0x50], 0x110d6468 */
  w32((uint32_t)(EAX + 0x50), (0x110d6468u));
  /* 110d1c04 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 110d1c0b ret  */
  ESPCHK(0x110d1bf9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c0c @ 0x110d1c0c (160 bytes, 62 insns) */
void f_110d1c0c(void) {
  FTRACE(0x110d1c0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1c0c mov eax, dword ptr [0x110d62ec] */
  EAX = (r32((uint32_t)(0x110d62ec)));
  /* 110d1c11 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1c14 je 0x110d1cab */
  if (C.zf) goto L_110d1cab;
  /* 110d1c1a push esi */
  push32((uint32_t)(ESI));
  /* 110d1c1b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110d1c1f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d1c21 jne 0x110d1c30 */
  if (!C.zf) goto L_110d1c30;
  /* 110d1c23 push eax */
  push32((uint32_t)(EAX));
  /* 110d1c24 call dword ptr [0x110d5070] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5070))), 0x110d1c2au);
  /* 110d1c2a mov esi, eax */
  ESI = (EAX);
  /* 110d1c2c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d1c2e je 0x110d1c9c */
  if (C.zf) goto L_110d1c9c;
L_110d1c30:;
  /* 110d1c30 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 110d1c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1c35 je 0x110d1c3e */
  if (C.zf) goto L_110d1c3e;
  /* 110d1c37 push eax */
  push32((uint32_t)(EAX));
  /* 110d1c38 call 0x110d26c9 */
  push32(0x110d1c3du); f_110d26c9();
  /* 110d1c3d pop ecx */
  ECX = (pop32());
L_110d1c3e:;
  /* 110d1c3e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 110d1c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1c43 je 0x110d1c4c */
  if (C.zf) goto L_110d1c4c;
  /* 110d1c45 push eax */
  push32((uint32_t)(EAX));
  /* 110d1c46 call 0x110d26c9 */
  push32(0x110d1c4bu); f_110d26c9();
  /* 110d1c4b pop ecx */
  ECX = (pop32());
L_110d1c4c:;
  /* 110d1c4c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 110d1c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1c51 je 0x110d1c5a */
  if (C.zf) goto L_110d1c5a;
  /* 110d1c53 push eax */
  push32((uint32_t)(EAX));
  /* 110d1c54 call 0x110d26c9 */
  push32(0x110d1c59u); f_110d26c9();
  /* 110d1c59 pop ecx */
  ECX = (pop32());
L_110d1c5a:;
  /* 110d1c5a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 110d1c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1c5f je 0x110d1c68 */
  if (C.zf) goto L_110d1c68;
  /* 110d1c61 push eax */
  push32((uint32_t)(EAX));
  /* 110d1c62 call 0x110d26c9 */
  push32(0x110d1c67u); f_110d26c9();
  /* 110d1c67 pop ecx */
  ECX = (pop32());
L_110d1c68:;
  /* 110d1c68 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 110d1c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1c6d je 0x110d1c76 */
  if (C.zf) goto L_110d1c76;
  /* 110d1c6f push eax */
  push32((uint32_t)(EAX));
  /* 110d1c70 call 0x110d26c9 */
  push32(0x110d1c75u); f_110d26c9();
  /* 110d1c75 pop ecx */
  ECX = (pop32());
L_110d1c76:;
  /* 110d1c76 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 110d1c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1c7b je 0x110d1c84 */
  if (C.zf) goto L_110d1c84;
  /* 110d1c7d push eax */
  push32((uint32_t)(EAX));
  /* 110d1c7e call 0x110d26c9 */
  push32(0x110d1c83u); f_110d26c9();
  /* 110d1c83 pop ecx */
  ECX = (pop32());
L_110d1c84:;
  /* 110d1c84 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 110d1c87 cmp eax, 0x110d6468 */
  { uint32_t _a=(EAX),_b=(0x110d6468u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1c8c je 0x110d1c95 */
  if (C.zf) goto L_110d1c95;
  /* 110d1c8e push eax */
  push32((uint32_t)(EAX));
  /* 110d1c8f call 0x110d26c9 */
  push32(0x110d1c94u); f_110d26c9();
  /* 110d1c94 pop ecx */
  ECX = (pop32());
L_110d1c95:;
  /* 110d1c95 push esi */
  push32((uint32_t)(ESI));
  /* 110d1c96 call 0x110d26c9 */
  push32(0x110d1c9bu); f_110d26c9();
  /* 110d1c9b pop ecx */
  ECX = (pop32());
L_110d1c9c:;
  /* 110d1c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d1c9e push dword ptr [0x110d62ec] */
  push32((uint32_t)(r32((uint32_t)(0x110d62ec))));
  /* 110d1ca4 call dword ptr [0x110d5064] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5064))), 0x110d1caau);
  /* 110d1caa pop esi */
  ESI = (pop32());
L_110d1cab:;
  /* 110d1cab ret  */
  ESPCHK(0x110d1c0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001cac @ 0x110d1cac (444 bytes, 150 insns) */
void f_110d1cac(void) {
  FTRACE(0x110d1cacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1cac push ebp */
  push32((uint32_t)(EBP));
  /* 110d1cad mov ebp, esp */
  EBP = (ESP);
  /* 110d1caf sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d1cb2 push ebx */
  push32((uint32_t)(EBX));
  /* 110d1cb3 push esi */
  push32((uint32_t)(ESI));
  /* 110d1cb4 push edi */
  push32((uint32_t)(EDI));
  /* 110d1cb5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 110d1cba call 0x110d2711 */
  push32(0x110d1cbfu); f_110d2711();
  /* 110d1cbf mov esi, eax */
  ESI = (EAX);
  /* 110d1cc1 pop ecx */
  ECX = (pop32());
  /* 110d1cc2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d1cc4 jne 0x110d1cce */
  if (!C.zf) goto L_110d1cce;
  /* 110d1cc6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 110d1cc8 call 0x110d1a36 */
  push32(0x110d1ccdu); f_110d1a36();
  /* 110d1ccd pop ecx */
  ECX = (pop32());
L_110d1cce:;
  /* 110d1cce mov dword ptr [0x110d6bc0], esi */
  w32((uint32_t)(0x110d6bc0), (ESI));
  /* 110d1cd4 mov dword ptr [0x110d6cc0], 0x20 */
  w32((uint32_t)(0x110d6cc0), (0x20u));
  /* 110d1cde lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_110d1ce4:;
  /* 110d1ce4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1ce6 jae 0x110d1d06 */
  if (!C.cf) goto L_110d1d06;
  /* 110d1ce8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 110d1cec or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 110d1cef and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 110d1cf3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 110d1cf7 mov eax, dword ptr [0x110d6bc0] */
  EAX = (r32((uint32_t)(0x110d6bc0)));
  /* 110d1cfc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1cff add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1d04 jmp 0x110d1ce4 */
  goto L_110d1ce4;
L_110d1d06:;
  /* 110d1d06 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 110d1d09 push eax */
  push32((uint32_t)(EAX));
  /* 110d1d0a call dword ptr [0x110d5084] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5084))), 0x110d1d10u);
  /* 110d1d10 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110d1d15 je 0x110d1dec */
  if (C.zf) goto L_110d1dec;
  /* 110d1d1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110d1d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1d20 je 0x110d1dec */
  if (C.zf) goto L_110d1dec;
  /* 110d1d26 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 110d1d28 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 110d1d2b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 110d1d2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110d1d31 mov eax, 0x800 */
  EAX = (0x800u);
  /* 110d1d36 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1d38 jl 0x110d1d3c */
  if ((C.sf!=C.of)) goto L_110d1d3c;
  /* 110d1d3a mov edi, eax */
  EDI = (EAX);
L_110d1d3c:;
  /* 110d1d3c cmp dword ptr [0x110d6cc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x110d6cc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1d42 jge 0x110d1d9a */
  if ((C.sf==C.of)) goto L_110d1d9a;
  /* 110d1d44 mov esi, 0x110d6bc4 */
  ESI = (0x110d6bc4u);
L_110d1d49:;
  /* 110d1d49 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 110d1d4e call 0x110d2711 */
  push32(0x110d1d53u); f_110d2711();
  /* 110d1d53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1d55 pop ecx */
  ECX = (pop32());
  /* 110d1d56 je 0x110d1d94 */
  if (C.zf) goto L_110d1d94;
  /* 110d1d58 add dword ptr [0x110d6cc0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x110d6cc0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x110d6cc0), (_r)); fl_add(_a,_b,_r,32); }
  /* 110d1d5f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110d1d61 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_110d1d67:;
  /* 110d1d67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1d69 jae 0x110d1d87 */
  if (!C.cf) goto L_110d1d87;
  /* 110d1d6b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 110d1d6f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110d1d72 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 110d1d76 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 110d1d7a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 110d1d7c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1d7f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1d85 jmp 0x110d1d67 */
  goto L_110d1d67;
L_110d1d87:;
  /* 110d1d87 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1d8a cmp dword ptr [0x110d6cc0], edi */
  { uint32_t _a=(r32((uint32_t)(0x110d6cc0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1d90 jl 0x110d1d49 */
  if ((C.sf!=C.of)) goto L_110d1d49;
  /* 110d1d92 jmp 0x110d1d9a */
  goto L_110d1d9a;
L_110d1d94:;
  /* 110d1d94 mov edi, dword ptr [0x110d6cc0] */
  EDI = (r32((uint32_t)(0x110d6cc0)));
L_110d1d9a:;
  /* 110d1d9a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110d1d9c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110d1d9e jle 0x110d1dec */
  if ((C.zf||C.sf!=C.of)) goto L_110d1dec;
L_110d1da0:;
  /* 110d1da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d1da3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110d1da5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1da8 je 0x110d1de2 */
  if (C.zf) goto L_110d1de2;
  /* 110d1daa mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 110d1dac test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 110d1dae je 0x110d1de2 */
  if (C.zf) goto L_110d1de2;
  /* 110d1db0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 110d1db2 jne 0x110d1dbf */
  if (!C.zf) goto L_110d1dbf;
  /* 110d1db4 push ecx */
  push32((uint32_t)(ECX));
  /* 110d1db5 call dword ptr [0x110d5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5080))), 0x110d1dbbu);
  /* 110d1dbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1dbd je 0x110d1de2 */
  if (C.zf) goto L_110d1de2;
L_110d1dbf:;
  /* 110d1dbf mov ecx, esi */
  ECX = (ESI);
  /* 110d1dc1 mov eax, esi */
  EAX = (ESI);
  /* 110d1dc3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110d1dc6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110d1dc9 mov ecx, dword ptr [ecx*4 + 0x110d6bc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110d6bc0)));
  /* 110d1dd0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110d1dd3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 110d1dd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d1dd9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 110d1ddb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110d1ddd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 110d1ddf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_110d1de2:;
  /* 110d1de2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 110d1de6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d1de7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110d1de8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1dea jl 0x110d1da0 */
  if ((C.sf!=C.of)) goto L_110d1da0;
L_110d1dec:;
  /* 110d1dec xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_110d1dee:;
  /* 110d1dee mov ecx, dword ptr [0x110d6bc0] */
  ECX = (r32((uint32_t)(0x110d6bc0)));
  /* 110d1df4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 110d1df7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1dfb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 110d1dfe jne 0x110d1e4d */
  if (!C.zf) goto L_110d1e4d;
  /* 110d1e00 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110d1e02 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 110d1e06 jne 0x110d1e0d */
  if (!C.zf) goto L_110d1e0d;
  /* 110d1e08 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 110d1e0a pop eax */
  EAX = (pop32());
  /* 110d1e0b jmp 0x110d1e17 */
  goto L_110d1e17;
L_110d1e0d:;
  /* 110d1e0d mov eax, ebx */
  EAX = (EBX);
  /* 110d1e0f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110d1e10 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110d1e12 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d1e14 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_110d1e17:;
  /* 110d1e17 push eax */
  push32((uint32_t)(EAX));
  /* 110d1e18 call dword ptr [0x110d507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d507c))), 0x110d1e1eu);
  /* 110d1e1e mov edi, eax */
  EDI = (EAX);
  /* 110d1e20 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1e23 je 0x110d1e3c */
  if (C.zf) goto L_110d1e3c;
  /* 110d1e25 push edi */
  push32((uint32_t)(EDI));
  /* 110d1e26 call dword ptr [0x110d5080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5080))), 0x110d1e2cu);
  /* 110d1e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1e2e je 0x110d1e3c */
  if (C.zf) goto L_110d1e3c;
  /* 110d1e30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110d1e35 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 110d1e37 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1e3a jne 0x110d1e42 */
  if (!C.zf) goto L_110d1e42;
L_110d1e3c:;
  /* 110d1e3c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 110d1e40 jmp 0x110d1e51 */
  goto L_110d1e51;
L_110d1e42:;
  /* 110d1e42 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1e45 jne 0x110d1e51 */
  if (!C.zf) goto L_110d1e51;
  /* 110d1e47 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 110d1e4b jmp 0x110d1e51 */
  goto L_110d1e51;
L_110d1e4d:;
  /* 110d1e4d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_110d1e51:;
  /* 110d1e51 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110d1e52 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1e55 jl 0x110d1dee */
  if ((C.sf!=C.of)) goto L_110d1dee;
  /* 110d1e57 push dword ptr [0x110d6cc0] */
  push32((uint32_t)(r32((uint32_t)(0x110d6cc0))));
  /* 110d1e5d call dword ptr [0x110d5000] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5000))), 0x110d1e63u);
  /* 110d1e63 pop edi */
  EDI = (pop32());
  /* 110d1e64 pop esi */
  ESI = (pop32());
  /* 110d1e65 pop ebx */
  EBX = (pop32());
  /* 110d1e66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d1e67 ret  */
  ESPCHK(0x110d1cacu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e68 @ 0x110d1e68 (84 bytes, 33 insns) */
void f_110d1e68(void) {
  FTRACE(0x110d1e68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1e68 push ebx */
  push32((uint32_t)(EBX));
  /* 110d1e69 push esi */
  push32((uint32_t)(ESI));
  /* 110d1e6a push edi */
  push32((uint32_t)(EDI));
  /* 110d1e6b mov esi, 0x110d6bc0 */
  ESI = (0x110d6bc0u);
L_110d1e70:;
  /* 110d1e70 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110d1e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d1e74 je 0x110d1ead */
  if (C.zf) goto L_110d1ead;
  /* 110d1e76 mov edi, eax */
  EDI = (EAX);
  /* 110d1e78 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1e7d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1e7f jae 0x110d1ea2 */
  if (!C.cf) goto L_110d1ea2;
  /* 110d1e81 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_110d1e84:;
  /* 110d1e84 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1e88 je 0x110d1e91 */
  if (C.zf) goto L_110d1e91;
  /* 110d1e8a push ebx */
  push32((uint32_t)(EBX));
  /* 110d1e8b call dword ptr [0x110d5088] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5088))), 0x110d1e91u);
L_110d1e91:;
  /* 110d1e91 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110d1e93 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1e96 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1e9b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1e9e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1ea0 jb 0x110d1e84 */
  if (C.cf) goto L_110d1e84;
L_110d1ea2:;
  /* 110d1ea2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110d1ea4 call 0x110d26c9 */
  push32(0x110d1ea9u); f_110d26c9();
  /* 110d1ea9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 110d1eac pop ecx */
  ECX = (pop32());
L_110d1ead:;
  /* 110d1ead add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1eb0 cmp esi, 0x110d6cc0 */
  { uint32_t _a=(ESI),_b=(0x110d6cc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1eb6 jl 0x110d1e70 */
  if ((C.sf!=C.of)) goto L_110d1e70;
  /* 110d1eb8 pop edi */
  EDI = (pop32());
  /* 110d1eb9 pop esi */
  ESI = (pop32());
  /* 110d1eba pop ebx */
  EBX = (pop32());
  /* 110d1ebb ret  */
  ESPCHK(0x110d1e68u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ebc @ 0x110d1ebc (185 bytes, 71 insns) */
void f_110d1ebc(void) {
  FTRACE(0x110d1ebcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1ebc push ebx */
  push32((uint32_t)(EBX));
  /* 110d1ebd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110d1ebf cmp dword ptr [0x110d6cc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110d6cc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1ec5 push esi */
  push32((uint32_t)(ESI));
  /* 110d1ec6 push edi */
  push32((uint32_t)(EDI));
  /* 110d1ec7 jne 0x110d1ece */
  if (!C.zf) goto L_110d1ece;
  /* 110d1ec9 call 0x110d2ce3 */
  push32(0x110d1eceu); f_110d2ce3();
L_110d1ece:;
  /* 110d1ece mov esi, dword ptr [0x110d6758] */
  ESI = (r32((uint32_t)(0x110d6758)));
  /* 110d1ed4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_110d1ed6:;
  /* 110d1ed6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d1ed8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d1eda je 0x110d1eee */
  if (C.zf) goto L_110d1eee;
  /* 110d1edc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d1ede je 0x110d1ee1 */
  if (C.zf) goto L_110d1ee1;
  /* 110d1ee0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_110d1ee1:;
  /* 110d1ee1 push esi */
  push32((uint32_t)(ESI));
  /* 110d1ee2 call 0x110d2890 */
  push32(0x110d1ee7u); f_110d2890();
  /* 110d1ee7 pop ecx */
  ECX = (pop32());
  /* 110d1ee8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 110d1eec jmp 0x110d1ed6 */
  goto L_110d1ed6;
L_110d1eee:;
  /* 110d1eee lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 110d1ef5 push eax */
  push32((uint32_t)(EAX));
  /* 110d1ef6 call 0x110d2711 */
  push32(0x110d1efbu); f_110d2711();
  /* 110d1efb mov esi, eax */
  ESI = (EAX);
  /* 110d1efd pop ecx */
  ECX = (pop32());
  /* 110d1efe cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1f00 mov dword ptr [0x110d6788], esi */
  w32((uint32_t)(0x110d6788), (ESI));
  /* 110d1f06 jne 0x110d1f10 */
  if (!C.zf) goto L_110d1f10;
  /* 110d1f08 push 9 */
  push32((uint32_t)(0x9u));
  /* 110d1f0a call 0x110d1a36 */
  push32(0x110d1f0fu); f_110d1a36();
  /* 110d1f0f pop ecx */
  ECX = (pop32());
L_110d1f10:;
  /* 110d1f10 mov edi, dword ptr [0x110d6758] */
  EDI = (r32((uint32_t)(0x110d6758)));
  /* 110d1f16 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d1f18 je 0x110d1f53 */
  if (C.zf) goto L_110d1f53;
  /* 110d1f1a push ebp */
  push32((uint32_t)(EBP));
L_110d1f1b:;
  /* 110d1f1b push edi */
  push32((uint32_t)(EDI));
  /* 110d1f1c call 0x110d2890 */
  push32(0x110d1f21u); f_110d2890();
  /* 110d1f21 mov ebp, eax */
  EBP = (EAX);
  /* 110d1f23 pop ecx */
  ECX = (pop32());
  /* 110d1f24 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 110d1f25 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d1f28 je 0x110d1f4c */
  if (C.zf) goto L_110d1f4c;
  /* 110d1f2a push ebp */
  push32((uint32_t)(EBP));
  /* 110d1f2b call 0x110d2711 */
  push32(0x110d1f30u); f_110d2711();
  /* 110d1f30 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1f32 pop ecx */
  ECX = (pop32());
  /* 110d1f33 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110d1f35 jne 0x110d1f3f */
  if (!C.zf) goto L_110d1f3f;
  /* 110d1f37 push 9 */
  push32((uint32_t)(0x9u));
  /* 110d1f39 call 0x110d1a36 */
  push32(0x110d1f3eu); f_110d1a36();
  /* 110d1f3e pop ecx */
  ECX = (pop32());
L_110d1f3f:;
  /* 110d1f3f push edi */
  push32((uint32_t)(EDI));
  /* 110d1f40 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110d1f42 call 0x110d27a0 */
  push32(0x110d1f47u); f_110d27a0();
  /* 110d1f47 pop ecx */
  ECX = (pop32());
  /* 110d1f48 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1f4b pop ecx */
  ECX = (pop32());
L_110d1f4c:;
  /* 110d1f4c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1f4e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d1f50 jne 0x110d1f1b */
  if (!C.zf) goto L_110d1f1b;
  /* 110d1f52 pop ebp */
  EBP = (pop32());
L_110d1f53:;
  /* 110d1f53 push dword ptr [0x110d6758] */
  push32((uint32_t)(r32((uint32_t)(0x110d6758))));
  /* 110d1f59 call 0x110d26c9 */
  push32(0x110d1f5eu); f_110d26c9();
  /* 110d1f5e pop ecx */
  ECX = (pop32());
  /* 110d1f5f mov dword ptr [0x110d6758], ebx */
  w32((uint32_t)(0x110d6758), (EBX));
  /* 110d1f65 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 110d1f67 pop edi */
  EDI = (pop32());
  /* 110d1f68 pop esi */
  ESI = (pop32());
  /* 110d1f69 mov dword ptr [0x110d6cc4], 1 */
  w32((uint32_t)(0x110d6cc4), (0x1u));
  /* 110d1f73 pop ebx */
  EBX = (pop32());
  /* 110d1f74 ret  */
  ESPCHK(0x110d1ebcu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f75 @ 0x110d1f75 (153 bytes, 62 insns) */
void f_110d1f75(void) {
  FTRACE(0x110d1f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d1f75 push ebp */
  push32((uint32_t)(EBP));
  /* 110d1f76 mov ebp, esp */
  EBP = (ESP);
  /* 110d1f78 push ecx */
  push32((uint32_t)(ECX));
  /* 110d1f79 push ecx */
  push32((uint32_t)(ECX));
  /* 110d1f7a push ebx */
  push32((uint32_t)(EBX));
  /* 110d1f7b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110d1f7d cmp dword ptr [0x110d6cc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110d6cc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1f83 push esi */
  push32((uint32_t)(ESI));
  /* 110d1f84 push edi */
  push32((uint32_t)(EDI));
  /* 110d1f85 jne 0x110d1f8c */
  if (!C.zf) goto L_110d1f8c;
  /* 110d1f87 call 0x110d2ce3 */
  push32(0x110d1f8cu); f_110d2ce3();
L_110d1f8c:;
  /* 110d1f8c mov esi, 0x110d67ac */
  ESI = (0x110d67acu);
  /* 110d1f91 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 110d1f96 push esi */
  push32((uint32_t)(ESI));
  /* 110d1f97 push ebx */
  push32((uint32_t)(EBX));
  /* 110d1f98 call dword ptr [0x110d508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d508c))), 0x110d1f9eu);
  /* 110d1f9e mov eax, dword ptr [0x110d6cd8] */
  EAX = (r32((uint32_t)(0x110d6cd8)));
  /* 110d1fa3 mov dword ptr [0x110d6798], esi */
  w32((uint32_t)(0x110d6798), (ESI));
  /* 110d1fa9 mov edi, esi */
  EDI = (ESI);
  /* 110d1fab cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d1fad je 0x110d1fb1 */
  if (C.zf) goto L_110d1fb1;
  /* 110d1faf mov edi, eax */
  EDI = (EAX);
L_110d1fb1:;
  /* 110d1fb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110d1fb4 push eax */
  push32((uint32_t)(EAX));
  /* 110d1fb5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 110d1fb8 push eax */
  push32((uint32_t)(EAX));
  /* 110d1fb9 push ebx */
  push32((uint32_t)(EBX));
  /* 110d1fba push ebx */
  push32((uint32_t)(EBX));
  /* 110d1fbb push edi */
  push32((uint32_t)(EDI));
  /* 110d1fbc call 0x110d200e */
  push32(0x110d1fc1u); f_110d200e();
  /* 110d1fc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110d1fc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d1fc7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 110d1fca push eax */
  push32((uint32_t)(EAX));
  /* 110d1fcb call 0x110d2711 */
  push32(0x110d1fd0u); f_110d2711();
  /* 110d1fd0 mov esi, eax */
  ESI = (EAX);
  /* 110d1fd2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1fd5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d1fd7 jne 0x110d1fe1 */
  if (!C.zf) goto L_110d1fe1;
  /* 110d1fd9 push 8 */
  push32((uint32_t)(0x8u));
  /* 110d1fdb call 0x110d1a36 */
  push32(0x110d1fe0u); f_110d1a36();
  /* 110d1fe0 pop ecx */
  ECX = (pop32());
L_110d1fe1:;
  /* 110d1fe1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110d1fe4 push eax */
  push32((uint32_t)(EAX));
  /* 110d1fe5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 110d1fe8 push eax */
  push32((uint32_t)(EAX));
  /* 110d1fe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d1fec lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 110d1fef push eax */
  push32((uint32_t)(EAX));
  /* 110d1ff0 push esi */
  push32((uint32_t)(ESI));
  /* 110d1ff1 push edi */
  push32((uint32_t)(EDI));
  /* 110d1ff2 call 0x110d200e */
  push32(0x110d1ff7u); f_110d200e();
  /* 110d1ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d1ffa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d1ffd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110d1ffe mov dword ptr [0x110d6780], esi */
  w32((uint32_t)(0x110d6780), (ESI));
  /* 110d2004 pop edi */
  EDI = (pop32());
  /* 110d2005 pop esi */
  ESI = (pop32());
  /* 110d2006 mov dword ptr [0x110d677c], eax */
  w32((uint32_t)(0x110d677c), (EAX));
  /* 110d200b pop ebx */
  EBX = (pop32());
  /* 110d200c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d200d ret  */
  ESPCHK(0x110d1f75u, _esp0);
  ESP += 4; return;
}

/* FUN_1000200e @ 0x110d200e (436 bytes, 187 insns) */
void f_110d200e(void) {
  FTRACE(0x110d200eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d200e push ebp */
  push32((uint32_t)(EBP));
  /* 110d200f mov ebp, esp */
  EBP = (ESP);
  /* 110d2011 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110d2014 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110d2017 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2018 push esi */
  push32((uint32_t)(ESI));
  /* 110d2019 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 110d201c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 110d201f push edi */
  push32((uint32_t)(EDI));
  /* 110d2020 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110d2023 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 110d2029 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d202c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110d202e je 0x110d2038 */
  if (C.zf) goto L_110d2038;
  /* 110d2030 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 110d2032 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2035 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_110d2038:;
  /* 110d2038 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d203b jne 0x110d2081 */
  if (!C.zf) goto L_110d2081;
L_110d203d:;
  /* 110d203d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 110d2040 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2041 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d2044 je 0x110d206f */
  if (C.zf) goto L_110d206f;
  /* 110d2046 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d2048 je 0x110d206f */
  if (C.zf) goto L_110d206f;
  /* 110d204a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 110d204d test byte ptr [edx + 0x110d6aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x110d6aa1)))&(0x4u); fl_logic(_r,8); }
  /* 110d2054 je 0x110d2062 */
  if (C.zf) goto L_110d2062;
  /* 110d2056 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110d2058 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d205a je 0x110d2062 */
  if (C.zf) goto L_110d2062;
  /* 110d205c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110d205e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110d2060 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d2061 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_110d2062:;
  /* 110d2062 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110d2064 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d2066 je 0x110d203d */
  if (C.zf) goto L_110d203d;
  /* 110d2068 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110d206a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110d206c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d206d jmp 0x110d203d */
  goto L_110d203d;
L_110d206f:;
  /* 110d206f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110d2071 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d2073 je 0x110d2079 */
  if (C.zf) goto L_110d2079;
  /* 110d2075 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 110d2078 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110d2079:;
  /* 110d2079 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d207c jne 0x110d20c4 */
  if (!C.zf) goto L_110d20c4;
  /* 110d207e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d207f jmp 0x110d20c4 */
  goto L_110d20c4;
L_110d2081:;
  /* 110d2081 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110d2083 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d2085 je 0x110d208c */
  if (C.zf) goto L_110d208c;
  /* 110d2087 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110d2089 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110d208b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110d208c:;
  /* 110d208c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110d208e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d208f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 110d2092 test byte ptr [ebx + 0x110d6aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x110d6aa1)))&(0x4u); fl_logic(_r,8); }
  /* 110d2099 je 0x110d20a7 */
  if (C.zf) goto L_110d20a7;
  /* 110d209b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110d209d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d209f je 0x110d20a6 */
  if (C.zf) goto L_110d20a6;
  /* 110d20a1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 110d20a3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 110d20a5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110d20a6:;
  /* 110d20a6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_110d20a7:;
  /* 110d20a7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d20aa je 0x110d20b5 */
  if (C.zf) goto L_110d20b5;
  /* 110d20ac test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d20ae je 0x110d20b9 */
  if (C.zf) goto L_110d20b9;
  /* 110d20b0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d20b3 jne 0x110d2081 */
  if (!C.zf) goto L_110d2081;
L_110d20b5:;
  /* 110d20b5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d20b7 jne 0x110d20bc */
  if (!C.zf) goto L_110d20bc;
L_110d20b9:;
  /* 110d20b9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110d20ba jmp 0x110d20c4 */
  goto L_110d20c4;
L_110d20bc:;
  /* 110d20bc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d20be je 0x110d20c4 */
  if (C.zf) goto L_110d20c4;
  /* 110d20c0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_110d20c4:;
  /* 110d20c4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_110d20c8:;
  /* 110d20c8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d20cb je 0x110d21b1 */
  if (C.zf) goto L_110d21b1;
L_110d20d1:;
  /* 110d20d1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110d20d3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d20d6 je 0x110d20dd */
  if (C.zf) goto L_110d20dd;
  /* 110d20d8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d20db jne 0x110d20e0 */
  if (!C.zf) goto L_110d20e0;
L_110d20dd:;
  /* 110d20dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d20de jmp 0x110d20d1 */
  goto L_110d20d1;
L_110d20e0:;
  /* 110d20e0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d20e3 je 0x110d21b1 */
  if (C.zf) goto L_110d21b1;
  /* 110d20e9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110d20eb je 0x110d20f5 */
  if (C.zf) goto L_110d20f5;
  /* 110d20ed mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 110d20ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d20f2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_110d20f5:;
  /* 110d20f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110d20f8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_110d20fa:;
  /* 110d20fa mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 110d2101 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_110d2103:;
  /* 110d2103 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d2106 jne 0x110d210c */
  if (!C.zf) goto L_110d210c;
  /* 110d2108 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2109 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110d210a jmp 0x110d2103 */
  goto L_110d2103;
L_110d210c:;
  /* 110d210c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d210f jne 0x110d213d */
  if (!C.zf) goto L_110d213d;
  /* 110d2111 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 110d2114 jne 0x110d213b */
  if (!C.zf) goto L_110d213b;
  /* 110d2116 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110d2118 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d211b je 0x110d212a */
  if (C.zf) goto L_110d212a;
  /* 110d211d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d2121 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 110d2124 jne 0x110d212a */
  if (!C.zf) goto L_110d212a;
  /* 110d2126 mov eax, edx */
  EAX = (EDX);
  /* 110d2128 jmp 0x110d212d */
  goto L_110d212d;
L_110d212a:;
  /* 110d212a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_110d212d:;
  /* 110d212d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110d2130 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110d2132 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2135 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 110d2138 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_110d213b:;
  /* 110d213b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_110d213d:;
  /* 110d213d mov edx, ebx */
  EDX = (EBX);
  /* 110d213f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110d2140 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110d2142 je 0x110d2152 */
  if (C.zf) goto L_110d2152;
  /* 110d2144 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_110d2145:;
  /* 110d2145 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d2147 je 0x110d214d */
  if (C.zf) goto L_110d214d;
  /* 110d2149 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 110d214c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110d214d:;
  /* 110d214d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110d214f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110d2150 jne 0x110d2145 */
  if (!C.zf) goto L_110d2145;
L_110d2152:;
  /* 110d2152 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110d2154 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d2156 je 0x110d21a2 */
  if (C.zf) goto L_110d21a2;
  /* 110d2158 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d215c jne 0x110d2168 */
  if (!C.zf) goto L_110d2168;
  /* 110d215e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d2161 je 0x110d21a2 */
  if (C.zf) goto L_110d21a2;
  /* 110d2163 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d2166 je 0x110d21a2 */
  if (C.zf) goto L_110d21a2;
L_110d2168:;
  /* 110d2168 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d216c je 0x110d219c */
  if (C.zf) goto L_110d219c;
  /* 110d216e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d2170 je 0x110d218b */
  if (C.zf) goto L_110d218b;
  /* 110d2172 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 110d2175 test byte ptr [ebx + 0x110d6aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x110d6aa1)))&(0x4u); fl_logic(_r,8); }
  /* 110d217c je 0x110d2184 */
  if (C.zf) goto L_110d2184;
  /* 110d217e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110d2180 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d2181 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2182 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_110d2184:;
  /* 110d2184 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110d2186 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110d2188 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d2189 jmp 0x110d219a */
  goto L_110d219a;
L_110d218b:;
  /* 110d218b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 110d218e test byte ptr [edx + 0x110d6aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x110d6aa1)))&(0x4u); fl_logic(_r,8); }
  /* 110d2195 je 0x110d219a */
  if (C.zf) goto L_110d219a;
  /* 110d2197 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2198 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_110d219a:;
  /* 110d219a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_110d219c:;
  /* 110d219c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d219d jmp 0x110d20fa */
  goto L_110d20fa;
L_110d21a2:;
  /* 110d21a2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d21a4 je 0x110d21aa */
  if (C.zf) goto L_110d21aa;
  /* 110d21a6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 110d21a9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110d21aa:;
  /* 110d21aa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110d21ac jmp 0x110d20c8 */
  goto L_110d20c8;
L_110d21b1:;
  /* 110d21b1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110d21b3 je 0x110d21b8 */
  if (C.zf) goto L_110d21b8;
  /* 110d21b5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_110d21b8:;
  /* 110d21b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110d21bb pop edi */
  EDI = (pop32());
  /* 110d21bc pop esi */
  ESI = (pop32());
  /* 110d21bd pop ebx */
  EBX = (pop32());
  /* 110d21be inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 110d21c0 pop ebp */
  EBP = (pop32());
  /* 110d21c1 ret  */
  ESPCHK(0x110d200eu, _esp0);
  ESP += 4; return;
}

/* FUN_100021c2 @ 0x110d21c2 (306 bytes, 132 insns) */
void f_110d21c2(void) {
  FTRACE(0x110d21c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d21c2 push ecx */
  push32((uint32_t)(ECX));
  /* 110d21c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110d21c4 mov eax, dword ptr [0x110d68b0] */
  EAX = (r32((uint32_t)(0x110d68b0)));
  /* 110d21c9 push ebx */
  push32((uint32_t)(EBX));
  /* 110d21ca push ebp */
  push32((uint32_t)(EBP));
  /* 110d21cb mov ebp, dword ptr [0x110d50a0] */
  EBP = (r32((uint32_t)(0x110d50a0)));
  /* 110d21d1 push esi */
  push32((uint32_t)(ESI));
  /* 110d21d2 push edi */
  push32((uint32_t)(EDI));
  /* 110d21d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110d21d5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110d21d7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110d21d9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d21db jne 0x110d2210 */
  if (!C.zf) goto L_110d2210;
  /* 110d21dd call ebp */
  call_ind((uint32_t)(EBP), 0x110d21dfu);
  /* 110d21df mov esi, eax */
  ESI = (EAX);
  /* 110d21e1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d21e3 je 0x110d21f1 */
  if (C.zf) goto L_110d21f1;
  /* 110d21e5 mov dword ptr [0x110d68b0], 1 */
  w32((uint32_t)(0x110d68b0), (0x1u));
  /* 110d21ef jmp 0x110d2219 */
  goto L_110d2219;
L_110d21f1:;
  /* 110d21f1 call dword ptr [0x110d509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d509c))), 0x110d21f7u);
  /* 110d21f7 mov edi, eax */
  EDI = (EAX);
  /* 110d21f9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d21fb je 0x110d22eb */
  if (C.zf) goto L_110d22eb;
  /* 110d2201 mov dword ptr [0x110d68b0], 2 */
  w32((uint32_t)(0x110d68b0), (0x2u));
  /* 110d220b jmp 0x110d229f */
  goto L_110d229f;
L_110d2210:;
  /* 110d2210 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2213 jne 0x110d229a */
  if (!C.zf) goto L_110d229a;
L_110d2219:;
  /* 110d2219 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d221b jne 0x110d2229 */
  if (!C.zf) goto L_110d2229;
  /* 110d221d call ebp */
  call_ind((uint32_t)(EBP), 0x110d221fu);
  /* 110d221f mov esi, eax */
  ESI = (EAX);
  /* 110d2221 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2223 je 0x110d22eb */
  if (C.zf) goto L_110d22eb;
L_110d2229:;
  /* 110d2229 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110d222c mov eax, esi */
  EAX = (ESI);
  /* 110d222e je 0x110d223e */
  if (C.zf) goto L_110d223e;
L_110d2230:;
  /* 110d2230 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2231 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2232 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110d2235 jne 0x110d2230 */
  if (!C.zf) goto L_110d2230;
  /* 110d2237 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2238 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2239 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110d223c jne 0x110d2230 */
  if (!C.zf) goto L_110d2230;
L_110d223e:;
  /* 110d223e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2240 mov edi, dword ptr [0x110d5098] */
  EDI = (r32((uint32_t)(0x110d5098)));
  /* 110d2246 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110d2248 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2249 push ebx */
  push32((uint32_t)(EBX));
  /* 110d224a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d224b push ebx */
  push32((uint32_t)(EBX));
  /* 110d224c push ebx */
  push32((uint32_t)(EBX));
  /* 110d224d push eax */
  push32((uint32_t)(EAX));
  /* 110d224e push esi */
  push32((uint32_t)(ESI));
  /* 110d224f push ebx */
  push32((uint32_t)(EBX));
  /* 110d2250 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2251 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 110d2255 call edi */
  call_ind((uint32_t)(EDI), 0x110d2257u);
  /* 110d2257 mov ebp, eax */
  EBP = (EAX);
  /* 110d2259 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d225b je 0x110d228f */
  if (C.zf) goto L_110d228f;
  /* 110d225d push ebp */
  push32((uint32_t)(EBP));
  /* 110d225e call 0x110d2711 */
  push32(0x110d2263u); f_110d2711();
  /* 110d2263 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2265 pop ecx */
  ECX = (pop32());
  /* 110d2266 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 110d226a je 0x110d228f */
  if (C.zf) goto L_110d228f;
  /* 110d226c push ebx */
  push32((uint32_t)(EBX));
  /* 110d226d push ebx */
  push32((uint32_t)(EBX));
  /* 110d226e push ebp */
  push32((uint32_t)(EBP));
  /* 110d226f push eax */
  push32((uint32_t)(EAX));
  /* 110d2270 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 110d2274 push esi */
  push32((uint32_t)(ESI));
  /* 110d2275 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2276 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2277 call edi */
  call_ind((uint32_t)(EDI), 0x110d2279u);
  /* 110d2279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d227b jne 0x110d228b */
  if (!C.zf) goto L_110d228b;
  /* 110d227d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 110d2281 call 0x110d26c9 */
  push32(0x110d2286u); f_110d26c9();
  /* 110d2286 pop ecx */
  ECX = (pop32());
  /* 110d2287 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_110d228b:;
  /* 110d228b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_110d228f:;
  /* 110d228f push esi */
  push32((uint32_t)(ESI));
  /* 110d2290 call dword ptr [0x110d5094] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5094))), 0x110d2296u);
  /* 110d2296 mov eax, ebx */
  EAX = (EBX);
  /* 110d2298 jmp 0x110d22ed */
  goto L_110d22ed;
L_110d229a:;
  /* 110d229a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d229d jne 0x110d22eb */
  if (!C.zf) goto L_110d22eb;
L_110d229f:;
  /* 110d229f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d22a1 jne 0x110d22af */
  if (!C.zf) goto L_110d22af;
  /* 110d22a3 call dword ptr [0x110d509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d509c))), 0x110d22a9u);
  /* 110d22a9 mov edi, eax */
  EDI = (EAX);
  /* 110d22ab cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d22ad je 0x110d22eb */
  if (C.zf) goto L_110d22eb;
L_110d22af:;
  /* 110d22af cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d22b1 mov eax, edi */
  EAX = (EDI);
  /* 110d22b3 je 0x110d22bf */
  if (C.zf) goto L_110d22bf;
L_110d22b5:;
  /* 110d22b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d22b6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d22b8 jne 0x110d22b5 */
  if (!C.zf) goto L_110d22b5;
  /* 110d22ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d22bb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d22bd jne 0x110d22b5 */
  if (!C.zf) goto L_110d22b5;
L_110d22bf:;
  /* 110d22bf sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d22c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d22c2 mov ebp, eax */
  EBP = (EAX);
  /* 110d22c4 push ebp */
  push32((uint32_t)(EBP));
  /* 110d22c5 call 0x110d2711 */
  push32(0x110d22cau); f_110d2711();
  /* 110d22ca mov esi, eax */
  ESI = (EAX);
  /* 110d22cc pop ecx */
  ECX = (pop32());
  /* 110d22cd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d22cf jne 0x110d22d5 */
  if (!C.zf) goto L_110d22d5;
  /* 110d22d1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110d22d3 jmp 0x110d22e0 */
  goto L_110d22e0;
L_110d22d5:;
  /* 110d22d5 push ebp */
  push32((uint32_t)(EBP));
  /* 110d22d6 push edi */
  push32((uint32_t)(EDI));
  /* 110d22d7 push esi */
  push32((uint32_t)(ESI));
  /* 110d22d8 call 0x110d2d00 */
  push32(0x110d22ddu); f_110d2d00();
  /* 110d22dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d22e0:;
  /* 110d22e0 push edi */
  push32((uint32_t)(EDI));
  /* 110d22e1 call dword ptr [0x110d5090] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5090))), 0x110d22e7u);
  /* 110d22e7 mov eax, esi */
  EAX = (ESI);
  /* 110d22e9 jmp 0x110d22ed */
  goto L_110d22ed;
L_110d22eb:;
  /* 110d22eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110d22ed:;
  /* 110d22ed pop edi */
  EDI = (pop32());
  /* 110d22ee pop esi */
  ESI = (pop32());
  /* 110d22ef pop ebp */
  EBP = (pop32());
  /* 110d22f0 pop ebx */
  EBX = (pop32());
  /* 110d22f1 pop ecx */
  ECX = (pop32());
  /* 110d22f2 pop ecx */
  ECX = (pop32());
  /* 110d22f3 ret  */
  ESPCHK(0x110d21c2u, _esp0);
  ESP += 4; return;
}

/* FUN_100022f4 @ 0x110d22f4 (60 bytes, 20 insns) */
void f_110d22f4(void) {
  FTRACE(0x110d22f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d22f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d22f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d22f8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d22fc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110d2301 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 110d2304 push eax */
  push32((uint32_t)(EAX));
  /* 110d2305 call dword ptr [0x110d50a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50a8))), 0x110d230bu);
  /* 110d230b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d230d mov dword ptr [0x110d6ba8], eax */
  w32((uint32_t)(0x110d6ba8), (EAX));
  /* 110d2312 je 0x110d2329 */
  if (C.zf) goto L_110d2329;
  /* 110d2314 call 0x110d3035 */
  push32(0x110d2319u); f_110d3035();
  /* 110d2319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d231b jne 0x110d232c */
  if (!C.zf) goto L_110d232c;
  /* 110d231d push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d2323 call dword ptr [0x110d50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50a4))), 0x110d2329u);
L_110d2329:;
  /* 110d2329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d232b ret  */
  ESPCHK(0x110d22f4u, _esp0);
  ESP += 4; return;
L_110d232c:;
  /* 110d232c push 1 */
  push32((uint32_t)(0x1u));
  /* 110d232e pop eax */
  EAX = (pop32());
  /* 110d232f ret  */
  ESPCHK(0x110d22f4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002330 @ 0x110d2330 (117 bytes, 38 insns) */
void f_110d2330(void) {
  FTRACE(0x110d2330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2330 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2331 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110d2333 cmp dword ptr [0x110d6968], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110d6968))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2339 push ebp */
  push32((uint32_t)(EBP));
  /* 110d233a mov ebp, dword ptr [0x110d5078] */
  EBP = (r32((uint32_t)(0x110d5078)));
  /* 110d2340 jle 0x110d2386 */
  if ((C.zf||C.sf!=C.of)) goto L_110d2386;
  /* 110d2342 mov eax, dword ptr [0x110d696c] */
  EAX = (r32((uint32_t)(0x110d696c)));
  /* 110d2347 push esi */
  push32((uint32_t)(ESI));
  /* 110d2348 push edi */
  push32((uint32_t)(EDI));
  /* 110d2349 mov edi, dword ptr [0x110d5074] */
  EDI = (r32((uint32_t)(0x110d5074)));
  /* 110d234f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_110d2352:;
  /* 110d2352 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 110d2357 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 110d235c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110d235e call edi */
  call_ind((uint32_t)(EDI), 0x110d2360u);
  /* 110d2360 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110d2365 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d2367 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110d2369 call edi */
  call_ind((uint32_t)(EDI), 0x110d236bu);
  /* 110d236b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 110d236e push 0 */
  push32((uint32_t)(0x0u));
  /* 110d2370 push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d2376 call ebp */
  call_ind((uint32_t)(EBP), 0x110d2378u);
  /* 110d2378 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d237b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110d237c cmp ebx, dword ptr [0x110d6968] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x110d6968))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2382 jl 0x110d2352 */
  if ((C.sf!=C.of)) goto L_110d2352;
  /* 110d2384 pop edi */
  EDI = (pop32());
  /* 110d2385 pop esi */
  ESI = (pop32());
L_110d2386:;
  /* 110d2386 push dword ptr [0x110d696c] */
  push32((uint32_t)(r32((uint32_t)(0x110d696c))));
  /* 110d238c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d238e push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d2394 call ebp */
  call_ind((uint32_t)(EBP), 0x110d2396u);
  /* 110d2396 push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d239c call dword ptr [0x110d50a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d50a4))), 0x110d23a2u);
  /* 110d23a2 pop ebp */
  EBP = (pop32());
  /* 110d23a3 pop ebx */
  EBX = (pop32());
  /* 110d23a4 ret  */
  ESPCHK(0x110d2330u, _esp0);
  ESP += 4; return;
}

/* FUN_100023a5 @ 0x110d23a5 (57 bytes, 18 insns) */
void f_110d23a5(void) {
  FTRACE(0x110d23a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d23a5 mov eax, dword ptr [0x110d6760] */
  EAX = (r32((uint32_t)(0x110d6760)));
  /* 110d23aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d23ad je 0x110d23bc */
  if (C.zf) goto L_110d23bc;
  /* 110d23af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d23b1 jne 0x110d23dd */
  if (!C.zf) goto L_110d23dd;
  /* 110d23b3 cmp dword ptr [0x110d6764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110d6764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d23ba jne 0x110d23dd */
  if (!C.zf) goto L_110d23dd;
L_110d23bc:;
  /* 110d23bc push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 110d23c1 call 0x110d23de */
  push32(0x110d23c6u); f_110d23de();
  /* 110d23c6 mov eax, dword ptr [0x110d68b4] */
  EAX = (r32((uint32_t)(0x110d68b4)));
  /* 110d23cb pop ecx */
  ECX = (pop32());
  /* 110d23cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d23ce je 0x110d23d2 */
  if (C.zf) goto L_110d23d2;
  /* 110d23d0 call eax */
  call_ind((uint32_t)(EAX), 0x110d23d2u);
L_110d23d2:;
  /* 110d23d2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 110d23d7 call 0x110d23de */
  push32(0x110d23dcu); f_110d23de();
  /* 110d23dc pop ecx */
  ECX = (pop32());
L_110d23dd:;
  /* 110d23dd ret  */
  ESPCHK(0x110d23a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100023de @ 0x110d23de (339 bytes, 100 insns) */
void f_110d23de(void) {
  FTRACE(0x110d23deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d23de push ebp */
  push32((uint32_t)(EBP));
  /* 110d23df mov ebp, esp */
  EBP = (ESP);
  /* 110d23e1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d23e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d23ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110d23ec mov eax, 0x110d6318 */
  EAX = (0x110d6318u);
L_110d23f1:;
  /* 110d23f1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d23f3 je 0x110d2400 */
  if (C.zf) goto L_110d2400;
  /* 110d23f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d23f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d23f9 cmp eax, 0x110d63a8 */
  { uint32_t _a=(EAX),_b=(0x110d63a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d23fe jl 0x110d23f1 */
  if ((C.sf!=C.of)) goto L_110d23f1;
L_110d2400:;
  /* 110d2400 push esi */
  push32((uint32_t)(ESI));
  /* 110d2401 mov esi, ecx */
  ESI = (ECX);
  /* 110d2403 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 110d2406 cmp edx, dword ptr [esi + 0x110d6318] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x110d6318))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d240c jne 0x110d252e */
  if (!C.zf) goto L_110d252e;
  /* 110d2412 mov eax, dword ptr [0x110d6760] */
  EAX = (r32((uint32_t)(0x110d6760)));
  /* 110d2417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d241a je 0x110d2508 */
  if (C.zf) goto L_110d2508;
  /* 110d2420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d2422 jne 0x110d2431 */
  if (!C.zf) goto L_110d2431;
  /* 110d2424 cmp dword ptr [0x110d6764], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110d6764))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d242b je 0x110d2508 */
  if (C.zf) goto L_110d2508;
L_110d2431:;
  /* 110d2431 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2437 je 0x110d252e */
  if (C.zf) goto L_110d252e;
  /* 110d243d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110d2443 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 110d2448 push eax */
  push32((uint32_t)(EAX));
  /* 110d2449 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d244b call dword ptr [0x110d508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d508c))), 0x110d2451u);
  /* 110d2451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d2453 jne 0x110d2468 */
  if (!C.zf) goto L_110d2468;
  /* 110d2455 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110d245b push 0x110d53e8 */
  push32((uint32_t)(0x110d53e8u));
  /* 110d2460 push eax */
  push32((uint32_t)(EAX));
  /* 110d2461 call 0x110d27a0 */
  push32(0x110d2466u); f_110d27a0();
  /* 110d2466 pop ecx */
  ECX = (pop32());
  /* 110d2467 pop ecx */
  ECX = (pop32());
L_110d2468:;
  /* 110d2468 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110d246e push edi */
  push32((uint32_t)(EDI));
  /* 110d246f push eax */
  push32((uint32_t)(EAX));
  /* 110d2470 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 110d2476 call 0x110d2890 */
  push32(0x110d247bu); f_110d2890();
  /* 110d247b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d247c pop ecx */
  ECX = (pop32());
  /* 110d247d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2480 jbe 0x110d24ab */
  if ((C.cf||C.zf)) goto L_110d24ab;
  /* 110d2482 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110d2488 push eax */
  push32((uint32_t)(EAX));
  /* 110d2489 call 0x110d2890 */
  push32(0x110d248eu); f_110d2890();
  /* 110d248e mov edi, eax */
  EDI = (EAX);
  /* 110d2490 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110d2496 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2499 push 3 */
  push32((uint32_t)(0x3u));
  /* 110d249b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d249d push 0x110d53e4 */
  push32((uint32_t)(0x110d53e4u));
  /* 110d24a2 push edi */
  push32((uint32_t)(EDI));
  /* 110d24a3 call 0x110d3910 */
  push32(0x110d24a8u); f_110d3910();
  /* 110d24a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d24ab:;
  /* 110d24ab lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110d24b1 push 0x110d53c8 */
  push32((uint32_t)(0x110d53c8u));
  /* 110d24b6 push eax */
  push32((uint32_t)(EAX));
  /* 110d24b7 call 0x110d27a0 */
  push32(0x110d24bcu); f_110d27a0();
  /* 110d24bc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110d24c2 push edi */
  push32((uint32_t)(EDI));
  /* 110d24c3 push eax */
  push32((uint32_t)(EAX));
  /* 110d24c4 call 0x110d27b0 */
  push32(0x110d24c9u); f_110d27b0();
  /* 110d24c9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110d24cf push 0x110d53c4 */
  push32((uint32_t)(0x110d53c4u));
  /* 110d24d4 push eax */
  push32((uint32_t)(EAX));
  /* 110d24d5 call 0x110d27b0 */
  push32(0x110d24dau); f_110d27b0();
  /* 110d24da push dword ptr [esi + 0x110d631c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x110d631c))));
  /* 110d24e0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110d24e6 push eax */
  push32((uint32_t)(EAX));
  /* 110d24e7 call 0x110d27b0 */
  push32(0x110d24ecu); f_110d27b0();
  /* 110d24ec push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 110d24f1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110d24f7 push 0x110d539c */
  push32((uint32_t)(0x110d539cu));
  /* 110d24fc push eax */
  push32((uint32_t)(EAX));
  /* 110d24fd call 0x110d387e */
  push32(0x110d2502u); f_110d387e();
  /* 110d2502 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2505 pop edi */
  EDI = (pop32());
  /* 110d2506 jmp 0x110d252e */
  goto L_110d252e;
L_110d2508:;
  /* 110d2508 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 110d250b lea esi, [esi + 0x110d631c] */
  ESI = ((uint32_t)(ESI + 0x110d631c));
  /* 110d2511 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d2513 push eax */
  push32((uint32_t)(EAX));
  /* 110d2514 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110d2516 call 0x110d2890 */
  push32(0x110d251bu); f_110d2890();
  /* 110d251b pop ecx */
  ECX = (pop32());
  /* 110d251c push eax */
  push32((uint32_t)(EAX));
  /* 110d251d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110d251f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 110d2521 call dword ptr [0x110d507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d507c))), 0x110d2527u);
  /* 110d2527 push eax */
  push32((uint32_t)(EAX));
  /* 110d2528 call dword ptr [0x110d5048] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5048))), 0x110d252eu);
L_110d252e:;
  /* 110d252e pop esi */
  ESI = (pop32());
  /* 110d252f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d2530 ret  */
  ESPCHK(0x110d23deu, _esp0);
  ESP += 4; return;
}

/* FUN_10002531 @ 0x110d2531 (41 bytes, 12 insns) */
void f_110d2531(void) {
  FTRACE(0x110d2531u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2531 push esi */
  push32((uint32_t)(ESI));
  /* 110d2532 mov esi, dword ptr [0x110d5044] */
  ESI = (r32((uint32_t)(0x110d5044)));
  /* 110d2538 push dword ptr [0x110d63ec] */
  push32((uint32_t)(r32((uint32_t)(0x110d63ec))));
  /* 110d253e call esi */
  call_ind((uint32_t)(ESI), 0x110d2540u);
  /* 110d2540 push dword ptr [0x110d63dc] */
  push32((uint32_t)(r32((uint32_t)(0x110d63dc))));
  /* 110d2546 call esi */
  call_ind((uint32_t)(ESI), 0x110d2548u);
  /* 110d2548 push dword ptr [0x110d63cc] */
  push32((uint32_t)(r32((uint32_t)(0x110d63cc))));
  /* 110d254e call esi */
  call_ind((uint32_t)(ESI), 0x110d2550u);
  /* 110d2550 push dword ptr [0x110d63ac] */
  push32((uint32_t)(r32((uint32_t)(0x110d63ac))));
  /* 110d2556 call esi */
  call_ind((uint32_t)(ESI), 0x110d2558u);
  /* 110d2558 pop esi */
  ESI = (pop32());
  /* 110d2559 ret  */
  ESPCHK(0x110d2531u, _esp0);
  ESP += 4; return;
}

/* FUN_1000255a @ 0x110d255a (108 bytes, 34 insns) */
void f_110d255a(void) {
  FTRACE(0x110d255au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d255a push esi */
  push32((uint32_t)(ESI));
  /* 110d255b push edi */
  push32((uint32_t)(EDI));
  /* 110d255c mov edi, dword ptr [0x110d5088] */
  EDI = (r32((uint32_t)(0x110d5088)));
  /* 110d2562 mov esi, 0x110d63a8 */
  ESI = (0x110d63a8u);
L_110d2567:;
  /* 110d2567 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110d2569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d256b je 0x110d2598 */
  if (C.zf) goto L_110d2598;
  /* 110d256d cmp esi, 0x110d63ec */
  { uint32_t _a=(ESI),_b=(0x110d63ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2573 je 0x110d2598 */
  if (C.zf) goto L_110d2598;
  /* 110d2575 cmp esi, 0x110d63dc */
  { uint32_t _a=(ESI),_b=(0x110d63dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d257b je 0x110d2598 */
  if (C.zf) goto L_110d2598;
  /* 110d257d cmp esi, 0x110d63cc */
  { uint32_t _a=(ESI),_b=(0x110d63ccu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2583 je 0x110d2598 */
  if (C.zf) goto L_110d2598;
  /* 110d2585 cmp esi, 0x110d63ac */
  { uint32_t _a=(ESI),_b=(0x110d63acu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d258b je 0x110d2598 */
  if (C.zf) goto L_110d2598;
  /* 110d258d push eax */
  push32((uint32_t)(EAX));
  /* 110d258e call edi */
  call_ind((uint32_t)(EDI), 0x110d2590u);
  /* 110d2590 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110d2592 call 0x110d26c9 */
  push32(0x110d2597u); f_110d26c9();
  /* 110d2597 pop ecx */
  ECX = (pop32());
L_110d2598:;
  /* 110d2598 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d259b cmp esi, 0x110d6468 */
  { uint32_t _a=(ESI),_b=(0x110d6468u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d25a1 jl 0x110d2567 */
  if ((C.sf!=C.of)) goto L_110d2567;
  /* 110d25a3 push dword ptr [0x110d63cc] */
  push32((uint32_t)(r32((uint32_t)(0x110d63cc))));
  /* 110d25a9 call edi */
  call_ind((uint32_t)(EDI), 0x110d25abu);
  /* 110d25ab push dword ptr [0x110d63dc] */
  push32((uint32_t)(r32((uint32_t)(0x110d63dc))));
  /* 110d25b1 call edi */
  call_ind((uint32_t)(EDI), 0x110d25b3u);
  /* 110d25b3 push dword ptr [0x110d63ec] */
  push32((uint32_t)(r32((uint32_t)(0x110d63ec))));
  /* 110d25b9 call edi */
  call_ind((uint32_t)(EDI), 0x110d25bbu);
  /* 110d25bb push dword ptr [0x110d63ac] */
  push32((uint32_t)(r32((uint32_t)(0x110d63ac))));
  /* 110d25c1 call edi */
  call_ind((uint32_t)(EDI), 0x110d25c3u);
  /* 110d25c3 pop edi */
  EDI = (pop32());
  /* 110d25c4 pop esi */
  ESI = (pop32());
  /* 110d25c5 ret  */
  ESPCHK(0x110d255au, _esp0);
  ESP += 4; return;
}

/* FUN_100025c6 @ 0x110d25c6 (97 bytes, 37 insns) */
void f_110d25c6(void) {
  FTRACE(0x110d25c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d25c6 push ebp */
  push32((uint32_t)(EBP));
  /* 110d25c7 mov ebp, esp */
  EBP = (ESP);
  /* 110d25c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d25cc push esi */
  push32((uint32_t)(ESI));
  /* 110d25cd cmp dword ptr [eax*4 + 0x110d63a8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x110d63a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d25d5 lea esi, [eax*4 + 0x110d63a8] */
  ESI = ((uint32_t)(EAX*4 + 0x110d63a8));
  /* 110d25dc jne 0x110d261c */
  if (!C.zf) goto L_110d261c;
  /* 110d25de push edi */
  push32((uint32_t)(EDI));
  /* 110d25df push 0x18 */
  push32((uint32_t)(0x18u));
  /* 110d25e1 call 0x110d2711 */
  push32(0x110d25e6u); f_110d2711();
  /* 110d25e6 mov edi, eax */
  EDI = (EAX);
  /* 110d25e8 pop ecx */
  ECX = (pop32());
  /* 110d25e9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110d25eb jne 0x110d25f5 */
  if (!C.zf) goto L_110d25f5;
  /* 110d25ed push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110d25ef call 0x110d1a36 */
  push32(0x110d25f4u); f_110d1a36();
  /* 110d25f4 pop ecx */
  ECX = (pop32());
L_110d25f5:;
  /* 110d25f5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110d25f7 call 0x110d25c6 */
  push32(0x110d25fcu); f_110d25c6();
  /* 110d25fc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d25ff pop ecx */
  ECX = (pop32());
  /* 110d2600 push edi */
  push32((uint32_t)(EDI));
  /* 110d2601 jne 0x110d260d */
  if (!C.zf) goto L_110d260d;
  /* 110d2603 call dword ptr [0x110d5044] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5044))), 0x110d2609u);
  /* 110d2609 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 110d260b jmp 0x110d2613 */
  goto L_110d2613;
L_110d260d:;
  /* 110d260d call 0x110d26c9 */
  push32(0x110d2612u); f_110d26c9();
  /* 110d2612 pop ecx */
  ECX = (pop32());
L_110d2613:;
  /* 110d2613 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110d2615 call 0x110d2627 */
  push32(0x110d261au); f_110d2627();
  /* 110d261a pop ecx */
  ECX = (pop32());
  /* 110d261b pop edi */
  EDI = (pop32());
L_110d261c:;
  /* 110d261c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110d261e call dword ptr [0x110d5040] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5040))), 0x110d2624u);
  /* 110d2624 pop esi */
  ESI = (pop32());
  /* 110d2625 pop ebp */
  EBP = (pop32());
  /* 110d2626 ret  */
  ESPCHK(0x110d25c6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002627 @ 0x110d2627 (21 bytes, 7 insns) */
void f_110d2627(void) {
  FTRACE(0x110d2627u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2627 push ebp */
  push32((uint32_t)(EBP));
  /* 110d2628 mov ebp, esp */
  EBP = (ESP);
  /* 110d262a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d262d push dword ptr [eax*4 + 0x110d63a8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x110d63a8))));
  /* 110d2634 call dword ptr [0x110d503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d503c))), 0x110d263au);
  /* 110d263a pop ebp */
  EBP = (pop32());
  /* 110d263b ret  */
  ESPCHK(0x110d2627u, _esp0);
  ESP += 4; return;
}

/* FUN_1000263c @ 0x110d263c (141 bytes, 56 insns) */
void f_110d263c(void) {
  FTRACE(0x110d263cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d263c push ebx */
  push32((uint32_t)(EBX));
  /* 110d263d push esi */
  push32((uint32_t)(ESI));
  /* 110d263e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 110d2642 push edi */
  push32((uint32_t)(EDI));
  /* 110d2643 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110d2648 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d264b mov ebx, esi */
  EBX = (ESI);
  /* 110d264d ja 0x110d265c */
  if ((!C.cf&&!C.zf)) goto L_110d265c;
  /* 110d264f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d2651 jne 0x110d2656 */
  if (!C.zf) goto L_110d2656;
  /* 110d2653 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d2655 pop esi */
  ESI = (pop32());
L_110d2656:;
  /* 110d2656 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2659 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_110d265c:;
  /* 110d265c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110d265e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2661 ja 0x110d269d */
  if ((!C.cf&&!C.zf)) goto L_110d269d;
  /* 110d2663 cmp ebx, dword ptr [0x110d65f0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x110d65f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2669 ja 0x110d2688 */
  if ((!C.cf&&!C.zf)) goto L_110d2688;
  /* 110d266b push 9 */
  push32((uint32_t)(0x9u));
  /* 110d266d call 0x110d25c6 */
  push32(0x110d2672u); f_110d25c6();
  /* 110d2672 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2673 call 0x110d33c9 */
  push32(0x110d2678u); f_110d33c9();
  /* 110d2678 push 9 */
  push32((uint32_t)(0x9u));
  /* 110d267a mov edi, eax */
  EDI = (EAX);
  /* 110d267c call 0x110d2627 */
  push32(0x110d2681u); f_110d2627();
  /* 110d2681 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2684 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110d2686 jne 0x110d26b3 */
  if (!C.zf) goto L_110d26b3;
L_110d2688:;
  /* 110d2688 push esi */
  push32((uint32_t)(ESI));
  /* 110d2689 push 8 */
  push32((uint32_t)(0x8u));
  /* 110d268b push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d2691 call dword ptr [0x110d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5038))), 0x110d2697u);
  /* 110d2697 mov edi, eax */
  EDI = (EAX);
  /* 110d2699 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110d269b jne 0x110d26bf */
  if (!C.zf) goto L_110d26bf;
L_110d269d:;
  /* 110d269d cmp dword ptr [0x110d692c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110d692c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d26a4 je 0x110d26bf */
  if (C.zf) goto L_110d26bf;
  /* 110d26a6 push esi */
  push32((uint32_t)(ESI));
  /* 110d26a7 call 0x110d3a68 */
  push32(0x110d26acu); f_110d3a68();
  /* 110d26ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d26ae pop ecx */
  ECX = (pop32());
  /* 110d26af je 0x110d26c5 */
  if (C.zf) goto L_110d26c5;
  /* 110d26b1 jmp 0x110d265c */
  goto L_110d265c;
L_110d26b3:;
  /* 110d26b3 push ebx */
  push32((uint32_t)(EBX));
  /* 110d26b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d26b6 push edi */
  push32((uint32_t)(EDI));
  /* 110d26b7 call 0x110d3a10 */
  push32(0x110d26bcu); f_110d3a10();
  /* 110d26bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110d26bf:;
  /* 110d26bf mov eax, edi */
  EAX = (EDI);
L_110d26c1:;
  /* 110d26c1 pop edi */
  EDI = (pop32());
  /* 110d26c2 pop esi */
  ESI = (pop32());
  /* 110d26c3 pop ebx */
  EBX = (pop32());
  /* 110d26c4 ret  */
  ESPCHK(0x110d263cu, _esp0);
  ESP += 4; return;
L_110d26c5:;
  /* 110d26c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d26c7 jmp 0x110d26c1 */
  goto L_110d26c1;
}

/* FUN_100026c9 @ 0x110d26c9 (72 bytes, 29 insns) */
void f_110d26c9(void) {
  FTRACE(0x110d26c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d26c9 push esi */
  push32((uint32_t)(ESI));
  /* 110d26ca mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110d26ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d26d0 je 0x110d270f */
  if (C.zf) goto L_110d270f;
  /* 110d26d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 110d26d4 call 0x110d25c6 */
  push32(0x110d26d9u); f_110d25c6();
  /* 110d26d9 push esi */
  push32((uint32_t)(ESI));
  /* 110d26da call 0x110d3073 */
  push32(0x110d26dfu); f_110d3073();
  /* 110d26df pop ecx */
  ECX = (pop32());
  /* 110d26e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d26e2 pop ecx */
  ECX = (pop32());
  /* 110d26e3 je 0x110d26f8 */
  if (C.zf) goto L_110d26f8;
  /* 110d26e5 push esi */
  push32((uint32_t)(ESI));
  /* 110d26e6 push eax */
  push32((uint32_t)(EAX));
  /* 110d26e7 call 0x110d309e */
  push32(0x110d26ecu); f_110d309e();
  /* 110d26ec push 9 */
  push32((uint32_t)(0x9u));
  /* 110d26ee call 0x110d2627 */
  push32(0x110d26f3u); f_110d2627();
  /* 110d26f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d26f6 pop esi */
  ESI = (pop32());
  /* 110d26f7 ret  */
  ESPCHK(0x110d26c9u, _esp0);
  ESP += 4; return;
L_110d26f8:;
  /* 110d26f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 110d26fa call 0x110d2627 */
  push32(0x110d26ffu); f_110d2627();
  /* 110d26ff pop ecx */
  ECX = (pop32());
  /* 110d2700 push esi */
  push32((uint32_t)(ESI));
  /* 110d2701 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d2703 push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d2709 call dword ptr [0x110d5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5078))), 0x110d270fu);
L_110d270f:;
  /* 110d270f pop esi */
  ESI = (pop32());
  /* 110d2710 ret  */
  ESPCHK(0x110d26c9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x110d2711 (18 bytes, 6 insns) */
void f_110d2711(void) {
  FTRACE(0x110d2711u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2711 push dword ptr [0x110d692c] */
  push32((uint32_t)(r32((uint32_t)(0x110d692c))));
  /* 110d2717 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 110d271b call 0x110d2723 */
  push32(0x110d2720u); f_110d2723();
  /* 110d2720 pop ecx */
  ECX = (pop32());
  /* 110d2721 pop ecx */
  ECX = (pop32());
  /* 110d2722 ret  */
  ESPCHK(0x110d2711u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x110d2723 (44 bytes, 16 insns) */
void f_110d2723(void) {
  FTRACE(0x110d2723u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2723 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2728 ja 0x110d274c */
  if ((!C.cf&&!C.zf)) goto L_110d274c;
L_110d272a:;
  /* 110d272a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110d272e call 0x110d274f */
  push32(0x110d2733u); f_110d274f();
  /* 110d2733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d2735 pop ecx */
  ECX = (pop32());
  /* 110d2736 jne 0x110d274e */
  if (!C.zf) goto L_110d274e;
  /* 110d2738 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d273c je 0x110d274e */
  if (C.zf) goto L_110d274e;
  /* 110d273e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110d2742 call 0x110d3a68 */
  push32(0x110d2747u); f_110d3a68();
  /* 110d2747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d2749 pop ecx */
  ECX = (pop32());
  /* 110d274a jne 0x110d272a */
  if (!C.zf) goto L_110d272a;
L_110d274c:;
  /* 110d274c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110d274e:;
  /* 110d274e ret  */
  ESPCHK(0x110d2723u, _esp0);
  ESP += 4; return;
}

/* FUN_1000274f @ 0x110d274f (78 bytes, 30 insns) */
void f_110d274f(void) {
  FTRACE(0x110d274fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d274f push esi */
  push32((uint32_t)(ESI));
  /* 110d2750 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110d2754 cmp esi, dword ptr [0x110d65f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110d65f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d275a push edi */
  push32((uint32_t)(EDI));
  /* 110d275b ja 0x110d277e */
  if ((!C.cf&&!C.zf)) goto L_110d277e;
  /* 110d275d push 9 */
  push32((uint32_t)(0x9u));
  /* 110d275f call 0x110d25c6 */
  push32(0x110d2764u); f_110d25c6();
  /* 110d2764 push esi */
  push32((uint32_t)(ESI));
  /* 110d2765 call 0x110d33c9 */
  push32(0x110d276au); f_110d33c9();
  /* 110d276a push 9 */
  push32((uint32_t)(0x9u));
  /* 110d276c mov edi, eax */
  EDI = (EAX);
  /* 110d276e call 0x110d2627 */
  push32(0x110d2773u); f_110d2627();
  /* 110d2773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2776 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110d2778 je 0x110d277e */
  if (C.zf) goto L_110d277e;
  /* 110d277a mov eax, edi */
  EAX = (EDI);
  /* 110d277c jmp 0x110d279a */
  goto L_110d279a;
L_110d277e:;
  /* 110d277e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d2780 jne 0x110d2785 */
  if (!C.zf) goto L_110d2785;
  /* 110d2782 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d2784 pop esi */
  ESI = (pop32());
L_110d2785:;
  /* 110d2785 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2788 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 110d278b push esi */
  push32((uint32_t)(ESI));
  /* 110d278c push 0 */
  push32((uint32_t)(0x0u));
  /* 110d278e push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d2794 call dword ptr [0x110d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5038))), 0x110d279au);
L_110d279a:;
  /* 110d279a pop edi */
  EDI = (pop32());
  /* 110d279b pop esi */
  ESI = (pop32());
  /* 110d279c ret  */
  ESPCHK(0x110d274fu, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x110d27a0 (7 bytes, 3 insns) */
void f_110d27a0(void) {
  FTRACE(0x110d27a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d27a0 push edi */
  push32((uint32_t)(EDI));
  /* 110d27a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 110d27a5 jmp 0x110d2811 */
  jmp_ind(0x110d2811u); return;
}

/* FUN_100027b0 @ 0x110d27b0 (224 bytes, 84 insns) */
void f_110d27b0(void) {
  FTRACE(0x110d27b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d27b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d27b4 push edi */
  push32((uint32_t)(EDI));
  /* 110d27b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110d27bb je 0x110d27cc */
  if (C.zf) goto L_110d27cc;
L_110d27bd:;
  /* 110d27bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 110d27bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d27c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d27c2 je 0x110d27ff */
  if (C.zf) goto L_110d27ff;
  /* 110d27c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110d27ca jne 0x110d27bd */
  if (!C.zf) goto L_110d27bd;
L_110d27cc:;
  /* 110d27cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 110d27ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110d27d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d27d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110d27d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110d27da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d27dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110d27e2 je 0x110d27cc */
  if (C.zf) goto L_110d27cc;
  /* 110d27e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 110d27e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d27e9 je 0x110d280e */
  if (C.zf) goto L_110d280e;
  /* 110d27eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110d27ed je 0x110d2809 */
  if (C.zf) goto L_110d2809;
  /* 110d27ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 110d27f4 je 0x110d2804 */
  if (C.zf) goto L_110d2804;
  /* 110d27f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 110d27fb je 0x110d27ff */
  if (C.zf) goto L_110d27ff;
  /* 110d27fd jmp 0x110d27cc */
  goto L_110d27cc;
L_110d27ff:;
  /* 110d27ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 110d2802 jmp 0x110d2811 */
  goto L_110d2811;
L_110d2804:;
  /* 110d2804 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 110d2807 jmp 0x110d2811 */
  goto L_110d2811;
L_110d2809:;
  /* 110d2809 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 110d280c jmp 0x110d2811 */
  goto L_110d2811;
L_110d280e:;
  /* 110d280e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_110d2811:;
  /* 110d2811 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 110d2815 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110d281b je 0x110d2836 */
  if (C.zf) goto L_110d2836;
L_110d281d:;
  /* 110d281d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110d281f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d2820 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d2822 je 0x110d2888 */
  if (C.zf) goto L_110d2888;
  /* 110d2824 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 110d2826 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d2827 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110d282d jne 0x110d281d */
  if (!C.zf) goto L_110d281d;
  /* 110d282f jmp 0x110d2836 */
  goto L_110d2836;
L_110d2831:;
  /* 110d2831 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110d2833 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110d2836:;
  /* 110d2836 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110d283b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 110d283d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d283f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110d2842 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2844 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110d2846 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2849 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110d284e je 0x110d2831 */
  if (C.zf) goto L_110d2831;
  /* 110d2850 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d2852 je 0x110d2888 */
  if (C.zf) goto L_110d2888;
  /* 110d2854 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 110d2856 je 0x110d287f */
  if (C.zf) goto L_110d287f;
  /* 110d2858 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 110d285e je 0x110d2872 */
  if (C.zf) goto L_110d2872;
  /* 110d2860 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 110d2866 je 0x110d286a */
  if (C.zf) goto L_110d286a;
  /* 110d2868 jmp 0x110d2831 */
  goto L_110d2831;
L_110d286a:;
  /* 110d286a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110d286c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d2870 pop edi */
  EDI = (pop32());
  /* 110d2871 ret  */
  ESPCHK(0x110d27b0u, _esp0);
  ESP += 4; return;
L_110d2872:;
  /* 110d2872 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 110d2875 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d2879 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 110d287d pop edi */
  EDI = (pop32());
  /* 110d287e ret  */
  ESPCHK(0x110d27b0u, _esp0);
  ESP += 4; return;
L_110d287f:;
  /* 110d287f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 110d2882 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d2886 pop edi */
  EDI = (pop32());
  /* 110d2887 ret  */
  ESPCHK(0x110d27b0u, _esp0);
  ESP += 4; return;
L_110d2888:;
  /* 110d2888 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 110d288a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d288e pop edi */
  EDI = (pop32());
  /* 110d288f ret  */
  ESPCHK(0x110d27b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x110d2890 (123 bytes, 44 insns) */
void f_110d2890(void) {
  FTRACE(0x110d2890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2890 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d2894 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110d289a je 0x110d28b0 */
  if (C.zf) goto L_110d28b0;
L_110d289c:;
  /* 110d289c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 110d289e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d289f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d28a1 je 0x110d28e3 */
  if (C.zf) goto L_110d28e3;
  /* 110d28a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110d28a9 jne 0x110d289c */
  if (!C.zf) goto L_110d289c;
  /* 110d28ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_110d28b0:;
  /* 110d28b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 110d28b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110d28b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d28b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110d28bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110d28be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d28c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110d28c6 je 0x110d28b0 */
  if (C.zf) goto L_110d28b0;
  /* 110d28c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 110d28cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d28cd je 0x110d2901 */
  if (C.zf) goto L_110d2901;
  /* 110d28cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110d28d1 je 0x110d28f7 */
  if (C.zf) goto L_110d28f7;
  /* 110d28d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 110d28d8 je 0x110d28ed */
  if (C.zf) goto L_110d28ed;
  /* 110d28da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 110d28df je 0x110d28e3 */
  if (C.zf) goto L_110d28e3;
  /* 110d28e1 jmp 0x110d28b0 */
  goto L_110d28b0;
L_110d28e3:;
  /* 110d28e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 110d28e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d28ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d28ec ret  */
  ESPCHK(0x110d2890u, _esp0);
  ESP += 4; return;
L_110d28ed:;
  /* 110d28ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 110d28f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d28f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d28f6 ret  */
  ESPCHK(0x110d2890u, _esp0);
  ESP += 4; return;
L_110d28f7:;
  /* 110d28f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 110d28fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d28fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2900 ret  */
  ESPCHK(0x110d2890u, _esp0);
  ESP += 4; return;
L_110d2901:;
  /* 110d2901 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 110d2904 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d2908 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d290a ret  */
  ESPCHK(0x110d2890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000290b @ 0x110d290b (429 bytes, 143 insns) */
void f_110d290b(void) {
  FTRACE(0x110d290bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d290b push ebp */
  push32((uint32_t)(EBP));
  /* 110d290c mov ebp, esp */
  EBP = (ESP);
  /* 110d290e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2911 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2912 push esi */
  push32((uint32_t)(ESI));
  /* 110d2913 push edi */
  push32((uint32_t)(EDI));
  /* 110d2914 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110d2916 call 0x110d25c6 */
  push32(0x110d291bu); f_110d25c6();
  /* 110d291b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110d291e call 0x110d2ab8 */
  push32(0x110d2923u); f_110d2ab8();
  /* 110d2923 mov ebx, eax */
  EBX = (EAX);
  /* 110d2925 pop ecx */
  ECX = (pop32());
  /* 110d2926 cmp ebx, dword ptr [0x110d6970] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x110d6970))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d292c pop ecx */
  ECX = (pop32());
  /* 110d292d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110d2930 jne 0x110d2939 */
  if (!C.zf) goto L_110d2939;
L_110d2932:;
  /* 110d2932 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110d2934 jmp 0x110d2aa9 */
  goto L_110d2aa9;
L_110d2939:;
  /* 110d2939 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110d293b je 0x110d2a97 */
  if (C.zf) goto L_110d2a97;
  /* 110d2941 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110d2943 mov eax, 0x110d64f8 */
  EAX = (0x110d64f8u);
L_110d2948:;
  /* 110d2948 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d294a je 0x110d29c0 */
  if (C.zf) goto L_110d29c0;
  /* 110d294c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d294f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110d2950 cmp eax, 0x110d65e8 */
  { uint32_t _a=(EAX),_b=(0x110d65e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2955 jl 0x110d2948 */
  if ((C.sf!=C.of)) goto L_110d2948;
  /* 110d2957 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 110d295a push eax */
  push32((uint32_t)(EAX));
  /* 110d295b push ebx */
  push32((uint32_t)(EBX));
  /* 110d295c call dword ptr [0x110d5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5034))), 0x110d2962u);
  /* 110d2962 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d2964 pop esi */
  ESI = (pop32());
  /* 110d2965 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2967 jne 0x110d2a8e */
  if (!C.zf) goto L_110d2a8e;
  /* 110d296d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110d296f and dword ptr [0x110d6ba4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110d6ba4)))&(0x0u); w32((uint32_t)(0x110d6ba4), (_r)); fl_logic(_r,32); }
  /* 110d2976 pop ecx */
  ECX = (pop32());
  /* 110d2977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2979 mov edi, 0x110d6aa0 */
  EDI = (0x110d6aa0u);
  /* 110d297e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2981 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110d2983 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 110d2984 mov dword ptr [0x110d6970], ebx */
  w32((uint32_t)(0x110d6970), (EBX));
  /* 110d298a jbe 0x110d2a7b */
  if ((C.cf||C.zf)) goto L_110d2a7b;
  /* 110d2990 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d2994 je 0x110d2a56 */
  if (C.zf) goto L_110d2a56;
  /* 110d299a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_110d299d:;
  /* 110d299d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110d299f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d29a1 je 0x110d2a56 */
  if (C.zf) goto L_110d2a56;
  /* 110d29a7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 110d29ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_110d29ae:;
  /* 110d29ae cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d29b0 ja 0x110d2a4a */
  if ((!C.cf&&!C.zf)) goto L_110d2a4a;
  /* 110d29b6 or byte ptr [eax + 0x110d6aa1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d6aa1)))|(0x4u); w8((uint32_t)(EAX + 0x110d6aa1), (_r)); fl_logic(_r,8); }
  /* 110d29bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d29be jmp 0x110d29ae */
  goto L_110d29ae;
L_110d29c0:;
  /* 110d29c0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110d29c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110d29c6 pop ecx */
  ECX = (pop32());
  /* 110d29c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d29c9 mov edi, 0x110d6aa0 */
  EDI = (0x110d6aa0u);
  /* 110d29ce lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 110d29d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110d29d3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 110d29d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 110d29d7 lea ebx, [esi + 0x110d6508] */
  EBX = ((uint32_t)(ESI + 0x110d6508));
L_110d29dd:;
  /* 110d29dd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d29e0 mov ecx, ebx */
  ECX = (EBX);
  /* 110d29e2 je 0x110d2a10 */
  if (C.zf) goto L_110d2a10;
L_110d29e4:;
  /* 110d29e4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 110d29e7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d29e9 je 0x110d2a10 */
  if (C.zf) goto L_110d2a10;
  /* 110d29eb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 110d29ee movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 110d29f1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d29f3 ja 0x110d2a09 */
  if ((!C.cf&&!C.zf)) goto L_110d2a09;
  /* 110d29f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d29f8 mov dl, byte ptr [edx + 0x110d64f0] */
  DL = (r8((uint32_t)(EDX + 0x110d64f0)));
L_110d29fe:;
  /* 110d29fe or byte ptr [eax + 0x110d6aa1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d6aa1)))|(DL); w8((uint32_t)(EAX + 0x110d6aa1), (_r)); fl_logic(_r,8); }
  /* 110d2a04 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2a05 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2a07 jbe 0x110d29fe */
  if ((C.cf||C.zf)) goto L_110d29fe;
L_110d2a09:;
  /* 110d2a09 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d2a0a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d2a0b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d2a0e jne 0x110d29e4 */
  if (!C.zf) goto L_110d29e4;
L_110d2a10:;
  /* 110d2a10 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 110d2a13 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2a16 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2a1a jb 0x110d29dd */
  if (C.cf) goto L_110d29dd;
  /* 110d2a1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d2a1f mov dword ptr [0x110d698c], 1 */
  w32((uint32_t)(0x110d698c), (0x1u));
  /* 110d2a29 push eax */
  push32((uint32_t)(EAX));
  /* 110d2a2a mov dword ptr [0x110d6970], eax */
  w32((uint32_t)(0x110d6970), (EAX));
  /* 110d2a2f call 0x110d2b02 */
  push32(0x110d2a34u); f_110d2b02();
  /* 110d2a34 lea esi, [esi + 0x110d64fc] */
  ESI = ((uint32_t)(ESI + 0x110d64fc));
  /* 110d2a3a mov edi, 0x110d6980 */
  EDI = (0x110d6980u);
  /* 110d2a3f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 110d2a40 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 110d2a41 pop ecx */
  ECX = (pop32());
  /* 110d2a42 mov dword ptr [0x110d6ba4], eax */
  w32((uint32_t)(0x110d6ba4), (EAX));
  /* 110d2a47 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 110d2a48 jmp 0x110d2a9c */
  goto L_110d2a9c;
L_110d2a4a:;
  /* 110d2a4a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d2a4b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d2a4c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d2a50 jne 0x110d299d */
  if (!C.zf) goto L_110d299d;
L_110d2a56:;
  /* 110d2a56 mov eax, esi */
  EAX = (ESI);
L_110d2a58:;
  /* 110d2a58 or byte ptr [eax + 0x110d6aa1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d6aa1)))|(0x8u); w8((uint32_t)(EAX + 0x110d6aa1), (_r)); fl_logic(_r,8); }
  /* 110d2a5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2a60 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2a65 jb 0x110d2a58 */
  if (C.cf) goto L_110d2a58;
  /* 110d2a67 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2a68 call 0x110d2b02 */
  push32(0x110d2a6du); f_110d2b02();
  /* 110d2a6d pop ecx */
  ECX = (pop32());
  /* 110d2a6e mov dword ptr [0x110d6ba4], eax */
  w32((uint32_t)(0x110d6ba4), (EAX));
  /* 110d2a73 mov dword ptr [0x110d698c], esi */
  w32((uint32_t)(0x110d698c), (ESI));
  /* 110d2a79 jmp 0x110d2a82 */
  goto L_110d2a82;
L_110d2a7b:;
  /* 110d2a7b and dword ptr [0x110d698c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110d698c)))&(0x0u); w32((uint32_t)(0x110d698c), (_r)); fl_logic(_r,32); }
L_110d2a82:;
  /* 110d2a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2a84 mov edi, 0x110d6980 */
  EDI = (0x110d6980u);
  /* 110d2a89 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110d2a8a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110d2a8b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110d2a8c jmp 0x110d2a9c */
  goto L_110d2a9c;
L_110d2a8e:;
  /* 110d2a8e cmp dword ptr [0x110d6918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110d6918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2a95 je 0x110d2aa6 */
  if (C.zf) goto L_110d2aa6;
L_110d2a97:;
  /* 110d2a97 call 0x110d2b35 */
  push32(0x110d2a9cu); f_110d2b35();
L_110d2a9c:;
  /* 110d2a9c call 0x110d2b5e */
  push32(0x110d2aa1u); f_110d2b5e();
  /* 110d2aa1 jmp 0x110d2932 */
  goto L_110d2932;
L_110d2aa6:;
  /* 110d2aa6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_110d2aa9:;
  /* 110d2aa9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 110d2aab call 0x110d2627 */
  push32(0x110d2ab0u); f_110d2627();
  /* 110d2ab0 pop ecx */
  ECX = (pop32());
  /* 110d2ab1 mov eax, esi */
  EAX = (ESI);
  /* 110d2ab3 pop edi */
  EDI = (pop32());
  /* 110d2ab4 pop esi */
  ESI = (pop32());
  /* 110d2ab5 pop ebx */
  EBX = (pop32());
  /* 110d2ab6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d2ab7 ret  */
  ESPCHK(0x110d290bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab8 @ 0x110d2ab8 (74 bytes, 15 insns) */
void f_110d2ab8(void) {
  FTRACE(0x110d2ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2ab8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d2abc and dword ptr [0x110d6918], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110d6918)))&(0x0u); w32((uint32_t)(0x110d6918), (_r)); fl_logic(_r,32); }
  /* 110d2ac3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2ac6 jne 0x110d2ad8 */
  if (!C.zf) goto L_110d2ad8;
  /* 110d2ac8 mov dword ptr [0x110d6918], 1 */
  w32((uint32_t)(0x110d6918), (0x1u));
  /* 110d2ad2 jmp dword ptr [0x110d502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110d502c)))); return;
L_110d2ad8:;
  /* 110d2ad8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2adb jne 0x110d2aed */
  if (!C.zf) goto L_110d2aed;
  /* 110d2add mov dword ptr [0x110d6918], 1 */
  w32((uint32_t)(0x110d6918), (0x1u));
  /* 110d2ae7 jmp dword ptr [0x110d5030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110d5030)))); return;
L_110d2aed:;
  /* 110d2aed cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2af0 jne 0x110d2b01 */
  if (!C.zf) goto L_110d2b01;
  /* 110d2af2 mov eax, dword ptr [0x110d6948] */
  EAX = (r32((uint32_t)(0x110d6948)));
  /* 110d2af7 mov dword ptr [0x110d6918], 1 */
  w32((uint32_t)(0x110d6918), (0x1u));
L_110d2b01:;
  /* 110d2b01 ret  */
  ESPCHK(0x110d2ab8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b02 @ 0x110d2b02 (51 bytes, 19 insns) */
void f_110d2b02(void) {
  FTRACE(0x110d2b02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2b02 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d2b06 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2b0b je 0x110d2b2f */
  if (C.zf) goto L_110d2b2f;
  /* 110d2b0d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2b10 je 0x110d2b29 */
  if (C.zf) goto L_110d2b29;
  /* 110d2b12 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2b15 je 0x110d2b23 */
  if (C.zf) goto L_110d2b23;
  /* 110d2b17 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110d2b18 je 0x110d2b1d */
  if (C.zf) goto L_110d2b1d;
  /* 110d2b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2b1c ret  */
  ESPCHK(0x110d2b02u, _esp0);
  ESP += 4; return;
L_110d2b1d:;
  /* 110d2b1d mov eax, 0x404 */
  EAX = (0x404u);
  /* 110d2b22 ret  */
  ESPCHK(0x110d2b02u, _esp0);
  ESP += 4; return;
L_110d2b23:;
  /* 110d2b23 mov eax, 0x412 */
  EAX = (0x412u);
  /* 110d2b28 ret  */
  ESPCHK(0x110d2b02u, _esp0);
  ESP += 4; return;
L_110d2b29:;
  /* 110d2b29 mov eax, 0x804 */
  EAX = (0x804u);
  /* 110d2b2e ret  */
  ESPCHK(0x110d2b02u, _esp0);
  ESP += 4; return;
L_110d2b2f:;
  /* 110d2b2f mov eax, 0x411 */
  EAX = (0x411u);
  /* 110d2b34 ret  */
  ESPCHK(0x110d2b02u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b35 @ 0x110d2b35 (41 bytes, 17 insns) */
void f_110d2b35(void) {
  FTRACE(0x110d2b35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2b35 push edi */
  push32((uint32_t)(EDI));
  /* 110d2b36 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110d2b38 pop ecx */
  ECX = (pop32());
  /* 110d2b39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2b3b mov edi, 0x110d6aa0 */
  EDI = (0x110d6aa0u);
  /* 110d2b40 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110d2b42 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 110d2b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2b45 mov edi, 0x110d6980 */
  EDI = (0x110d6980u);
  /* 110d2b4a mov dword ptr [0x110d6970], eax */
  w32((uint32_t)(0x110d6970), (EAX));
  /* 110d2b4f mov dword ptr [0x110d698c], eax */
  w32((uint32_t)(0x110d698c), (EAX));
  /* 110d2b54 mov dword ptr [0x110d6ba4], eax */
  w32((uint32_t)(0x110d6ba4), (EAX));
  /* 110d2b59 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110d2b5a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110d2b5b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 110d2b5c pop edi */
  EDI = (pop32());
  /* 110d2b5d ret  */
  ESPCHK(0x110d2b35u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b5e @ 0x110d2b5e (389 bytes, 124 insns) */
void f_110d2b5e(void) {
  FTRACE(0x110d2b5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2b5e push ebp */
  push32((uint32_t)(EBP));
  /* 110d2b5f mov ebp, esp */
  EBP = (ESP);
  /* 110d2b61 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2b67 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 110d2b6a push esi */
  push32((uint32_t)(ESI));
  /* 110d2b6b push eax */
  push32((uint32_t)(EAX));
  /* 110d2b6c push dword ptr [0x110d6970] */
  push32((uint32_t)(r32((uint32_t)(0x110d6970))));
  /* 110d2b72 call dword ptr [0x110d5034] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5034))), 0x110d2b78u);
  /* 110d2b78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2b7b jne 0x110d2c97 */
  if (!C.zf) goto L_110d2c97;
  /* 110d2b81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2b83 mov esi, 0x100 */
  ESI = (0x100u);
L_110d2b88:;
  /* 110d2b88 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 110d2b8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2b90 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2b92 jb 0x110d2b88 */
  if (C.cf) goto L_110d2b88;
  /* 110d2b94 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 110d2b97 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 110d2b9e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d2ba0 je 0x110d2bd9 */
  if (C.zf) goto L_110d2bd9;
  /* 110d2ba2 push ebx */
  push32((uint32_t)(EBX));
  /* 110d2ba3 push edi */
  push32((uint32_t)(EDI));
  /* 110d2ba4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_110d2ba7:;
  /* 110d2ba7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 110d2baa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 110d2bad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2baf ja 0x110d2bce */
  if ((!C.cf&&!C.zf)) goto L_110d2bce;
  /* 110d2bb1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2bb3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 110d2bba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d2bbb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 110d2bc0 mov ebx, ecx */
  EBX = (ECX);
  /* 110d2bc2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2bc5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110d2bc7 mov ecx, ebx */
  ECX = (EBX);
  /* 110d2bc9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110d2bcc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_110d2bce:;
  /* 110d2bce inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110d2bcf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110d2bd0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 110d2bd3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d2bd5 jne 0x110d2ba7 */
  if (!C.zf) goto L_110d2ba7;
  /* 110d2bd7 pop edi */
  EDI = (pop32());
  /* 110d2bd8 pop ebx */
  EBX = (pop32());
L_110d2bd9:;
  /* 110d2bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d2bdb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 110d2be1 push dword ptr [0x110d6ba4] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba4))));
  /* 110d2be7 push dword ptr [0x110d6970] */
  push32((uint32_t)(r32((uint32_t)(0x110d6970))));
  /* 110d2bed push eax */
  push32((uint32_t)(EAX));
  /* 110d2bee lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 110d2bf4 push esi */
  push32((uint32_t)(ESI));
  /* 110d2bf5 push eax */
  push32((uint32_t)(EAX));
  /* 110d2bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d2bf8 call 0x110d3cd2 */
  push32(0x110d2bfdu); f_110d3cd2();
  /* 110d2bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 110d2bff lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 110d2c05 push dword ptr [0x110d6970] */
  push32((uint32_t)(r32((uint32_t)(0x110d6970))));
  /* 110d2c0b push esi */
  push32((uint32_t)(ESI));
  /* 110d2c0c push eax */
  push32((uint32_t)(EAX));
  /* 110d2c0d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 110d2c13 push esi */
  push32((uint32_t)(ESI));
  /* 110d2c14 push eax */
  push32((uint32_t)(EAX));
  /* 110d2c15 push esi */
  push32((uint32_t)(ESI));
  /* 110d2c16 push dword ptr [0x110d6ba4] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba4))));
  /* 110d2c1c call 0x110d3a83 */
  push32(0x110d2c21u); f_110d3a83();
  /* 110d2c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d2c23 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 110d2c29 push dword ptr [0x110d6970] */
  push32((uint32_t)(r32((uint32_t)(0x110d6970))));
  /* 110d2c2f push esi */
  push32((uint32_t)(ESI));
  /* 110d2c30 push eax */
  push32((uint32_t)(EAX));
  /* 110d2c31 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 110d2c37 push esi */
  push32((uint32_t)(ESI));
  /* 110d2c38 push eax */
  push32((uint32_t)(EAX));
  /* 110d2c39 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 110d2c3e push dword ptr [0x110d6ba4] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba4))));
  /* 110d2c44 call 0x110d3a83 */
  push32(0x110d2c49u); f_110d3a83();
  /* 110d2c49 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2c4e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_110d2c54:;
  /* 110d2c54 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 110d2c57 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 110d2c5a je 0x110d2c72 */
  if (C.zf) goto L_110d2c72;
  /* 110d2c5c or byte ptr [eax + 0x110d6aa1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d6aa1)))|(0x10u); w8((uint32_t)(EAX + 0x110d6aa1), (_r)); fl_logic(_r,8); }
  /* 110d2c63 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_110d2c6a:;
  /* 110d2c6a mov byte ptr [eax + 0x110d69a0], dl */
  w8((uint32_t)(EAX + 0x110d69a0), (DL));
  /* 110d2c70 jmp 0x110d2c8e */
  goto L_110d2c8e;
L_110d2c72:;
  /* 110d2c72 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 110d2c75 je 0x110d2c87 */
  if (C.zf) goto L_110d2c87;
  /* 110d2c77 or byte ptr [eax + 0x110d6aa1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d6aa1)))|(0x20u); w8((uint32_t)(EAX + 0x110d6aa1), (_r)); fl_logic(_r,8); }
  /* 110d2c7e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 110d2c85 jmp 0x110d2c6a */
  goto L_110d2c6a;
L_110d2c87:;
  /* 110d2c87 and byte ptr [eax + 0x110d69a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d69a0)))&(0x0u); w8((uint32_t)(EAX + 0x110d69a0), (_r)); fl_logic(_r,8); }
L_110d2c8e:;
  /* 110d2c8e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2c8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d2c90 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110d2c91 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2c93 jb 0x110d2c54 */
  if (C.cf) goto L_110d2c54;
  /* 110d2c95 jmp 0x110d2ce0 */
  goto L_110d2ce0;
L_110d2c97:;
  /* 110d2c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d2c99 mov esi, 0x100 */
  ESI = (0x100u);
L_110d2c9e:;
  /* 110d2c9e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2ca1 jb 0x110d2cbc */
  if (C.cf) goto L_110d2cbc;
  /* 110d2ca3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2ca6 ja 0x110d2cbc */
  if ((!C.cf&&!C.zf)) goto L_110d2cbc;
  /* 110d2ca8 or byte ptr [eax + 0x110d6aa1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d6aa1)))|(0x10u); w8((uint32_t)(EAX + 0x110d6aa1), (_r)); fl_logic(_r,8); }
  /* 110d2caf mov cl, al */
  CL = (AL);
  /* 110d2cb1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_110d2cb4:;
  /* 110d2cb4 mov byte ptr [eax + 0x110d69a0], cl */
  w8((uint32_t)(EAX + 0x110d69a0), (CL));
  /* 110d2cba jmp 0x110d2cdb */
  goto L_110d2cdb;
L_110d2cbc:;
  /* 110d2cbc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2cbf jb 0x110d2cd4 */
  if (C.cf) goto L_110d2cd4;
  /* 110d2cc1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2cc4 ja 0x110d2cd4 */
  if ((!C.cf&&!C.zf)) goto L_110d2cd4;
  /* 110d2cc6 or byte ptr [eax + 0x110d6aa1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d6aa1)))|(0x20u); w8((uint32_t)(EAX + 0x110d6aa1), (_r)); fl_logic(_r,8); }
  /* 110d2ccd mov cl, al */
  CL = (AL);
  /* 110d2ccf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110d2cd2 jmp 0x110d2cb4 */
  goto L_110d2cb4;
L_110d2cd4:;
  /* 110d2cd4 and byte ptr [eax + 0x110d69a0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x110d69a0)))&(0x0u); w8((uint32_t)(EAX + 0x110d69a0), (_r)); fl_logic(_r,8); }
L_110d2cdb:;
  /* 110d2cdb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d2cdc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2cde jb 0x110d2c9e */
  if (C.cf) goto L_110d2c9e;
L_110d2ce0:;
  /* 110d2ce0 pop esi */
  ESI = (pop32());
  /* 110d2ce1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d2ce2 ret  */
  ESPCHK(0x110d2b5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce3 @ 0x110d2ce3 (28 bytes, 7 insns) */
void f_110d2ce3(void) {
  FTRACE(0x110d2ce3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2ce3 cmp dword ptr [0x110d6cc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110d6cc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2cea jne 0x110d2cfe */
  if (!C.zf) goto L_110d2cfe;
  /* 110d2cec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 110d2cee call 0x110d290b */
  push32(0x110d2cf3u); f_110d290b();
  /* 110d2cf3 pop ecx */
  ECX = (pop32());
  /* 110d2cf4 mov dword ptr [0x110d6cc8], 1 */
  w32((uint32_t)(0x110d6cc8), (0x1u));
L_110d2cfe:;
  /* 110d2cfe ret  */
  ESPCHK(0x110d2ce3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d00 @ 0x110d2d00 (664 bytes, 257 insns) [15 switch table(s)] */
void f_110d2d00(void) {
  FTRACE(0x110d2d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d2d00 push ebp */
  push32((uint32_t)(EBP));
  /* 110d2d01 mov ebp, esp */
  EBP = (ESP);
  /* 110d2d03 push edi */
  push32((uint32_t)(EDI));
  /* 110d2d04 push esi */
  push32((uint32_t)(ESI));
  /* 110d2d05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110d2d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110d2d0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110d2d0e mov eax, ecx */
  EAX = (ECX);
  /* 110d2d10 mov edx, ecx */
  EDX = (ECX);
  /* 110d2d12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2d14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2d16 jbe 0x110d2d20 */
  if ((C.cf||C.zf)) goto L_110d2d20;
  /* 110d2d18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2d1a jb 0x110d2e98 */
  if (C.cf) goto L_110d2e98;
L_110d2d20:;
  /* 110d2d20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110d2d26 jne 0x110d2d3c */
  if (!C.zf) goto L_110d2d3c;
  /* 110d2d28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2d2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110d2d2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2d31 jb 0x110d2d5c */
  if (C.cf) goto L_110d2d5c;
  /* 110d2d33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d2d35 jmp dword ptr [edx*4 + 0x110d2e48] */
  switch (EDX) {
    case 0: goto L_110d2e58;
    case 1: goto L_110d2e60;
    case 2: goto L_110d2e6c;
    case 3: goto L_110d2e80;
    default: x86_unimpl("switch@0x110d2d35 out of table"); return;
  }
L_110d2d3c:;
  /* 110d2d3c mov eax, edi */
  EAX = (EDI);
  /* 110d2d3e mov edx, 3 */
  EDX = (0x3u);
  /* 110d2d43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2d46 jb 0x110d2d54 */
  if (C.cf) goto L_110d2d54;
  /* 110d2d48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110d2d4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2d4d jmp dword ptr [eax*4 + 0x110d2d60] */
  switch (EAX) {
    case 1: goto L_110d2d70;
    case 2: goto L_110d2d9c;
    case 3: goto L_110d2dc0;
    default: x86_unimpl("switch@0x110d2d4d out of table"); return;
  }
L_110d2d54:;
  /* 110d2d54 jmp dword ptr [ecx*4 + 0x110d2e58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x110d2e58)))); return;
  /* 110d2d5b nop  */
  /* nop */
L_110d2d5c:;
  /* 110d2d5c jmp dword ptr [ecx*4 + 0x110d2ddc] */
  switch (ECX) {
    case 0: goto L_110d2e3f;
    case 1: goto L_110d2e2c;
    case 2: goto L_110d2e24;
    case 3: goto L_110d2e1c;
    case 4: goto L_110d2e14;
    case 5: goto L_110d2e0c;
    case 6: goto L_110d2e04;
    case 7: goto L_110d2dfc;
    default: x86_unimpl("switch@0x110d2d5c out of table"); return;
  }
  /* 110d2d63 nop  */
  /* nop */
L_110d2d70:;
  /* 110d2d70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d2d72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d2d74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d2d76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d2d79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d2d7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d2d7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2d82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d2d85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2d88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2d8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2d8e jb 0x110d2d5c */
  if (C.cf) goto L_110d2d5c;
  /* 110d2d90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d2d92 jmp dword ptr [edx*4 + 0x110d2e48] */
  switch (EDX) {
    case 0: goto L_110d2e58;
    case 1: goto L_110d2e60;
    case 2: goto L_110d2e6c;
    case 3: goto L_110d2e80;
    default: x86_unimpl("switch@0x110d2d92 out of table"); return;
  }
  /* 110d2d99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d2d9c:;
  /* 110d2d9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d2d9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d2da0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d2da2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d2da5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2da8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d2dab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2dae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2db1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2db4 jb 0x110d2d5c */
  if (C.cf) goto L_110d2d5c;
  /* 110d2db6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d2db8 jmp dword ptr [edx*4 + 0x110d2e48] */
  switch (EDX) {
    case 0: goto L_110d2e58;
    case 1: goto L_110d2e60;
    case 2: goto L_110d2e6c;
    case 3: goto L_110d2e80;
    default: x86_unimpl("switch@0x110d2db8 out of table"); return;
  }
  /* 110d2dbf nop  */
  /* nop */
L_110d2dc0:;
  /* 110d2dc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d2dc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d2dc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d2dc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d2dc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2dca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d2dcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2dce jb 0x110d2d5c */
  if (C.cf) goto L_110d2d5c;
  /* 110d2dd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d2dd2 jmp dword ptr [edx*4 + 0x110d2e48] */
  switch (EDX) {
    case 0: goto L_110d2e58;
    case 1: goto L_110d2e60;
    case 2: goto L_110d2e6c;
    case 3: goto L_110d2e80;
    default: x86_unimpl("switch@0x110d2dd2 out of table"); return;
  }
  /* 110d2dd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d2dfc:;
  /* 110d2dfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 110d2e00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_110d2e04:;
  /* 110d2e04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 110d2e08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_110d2e0c:;
  /* 110d2e0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 110d2e10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_110d2e14:;
  /* 110d2e14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 110d2e18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_110d2e1c:;
  /* 110d2e1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 110d2e20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_110d2e24:;
  /* 110d2e24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 110d2e28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_110d2e2c:;
  /* 110d2e2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 110d2e30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 110d2e34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110d2e3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2e3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110d2e3f:;
  /* 110d2e3f jmp dword ptr [edx*4 + 0x110d2e48] */
  switch (EDX) {
    case 0: goto L_110d2e58;
    case 1: goto L_110d2e60;
    case 2: goto L_110d2e6c;
    case 3: goto L_110d2e80;
    default: x86_unimpl("switch@0x110d2e3f out of table"); return;
  }
  /* 110d2e46 mov edi, edi */
  EDI = (EDI);
L_110d2e58:;
  /* 110d2e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d2e5b pop esi */
  ESI = (pop32());
  /* 110d2e5c pop edi */
  EDI = (pop32());
  /* 110d2e5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d2e5e ret  */
  ESPCHK(0x110d2d00u, _esp0);
  ESP += 4; return;
  /* 110d2e5f nop  */
  /* nop */
L_110d2e60:;
  /* 110d2e60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d2e62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d2e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d2e67 pop esi */
  ESI = (pop32());
  /* 110d2e68 pop edi */
  EDI = (pop32());
  /* 110d2e69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d2e6a ret  */
  ESPCHK(0x110d2d00u, _esp0);
  ESP += 4; return;
  /* 110d2e6b nop  */
  /* nop */
L_110d2e6c:;
  /* 110d2e6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d2e6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d2e70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d2e73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d2e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d2e79 pop esi */
  ESI = (pop32());
  /* 110d2e7a pop edi */
  EDI = (pop32());
  /* 110d2e7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d2e7c ret  */
  ESPCHK(0x110d2d00u, _esp0);
  ESP += 4; return;
  /* 110d2e7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d2e80:;
  /* 110d2e80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d2e82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d2e84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d2e87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d2e8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d2e8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d2e90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d2e93 pop esi */
  ESI = (pop32());
  /* 110d2e94 pop edi */
  EDI = (pop32());
  /* 110d2e95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d2e96 ret  */
  ESPCHK(0x110d2d00u, _esp0);
  ESP += 4; return;
  /* 110d2e97 nop  */
  /* nop */
L_110d2e98:;
  /* 110d2e98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 110d2e9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 110d2ea0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110d2ea6 jne 0x110d2ecc */
  if (!C.zf) goto L_110d2ecc;
  /* 110d2ea8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2eab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110d2eae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2eb1 jb 0x110d2ec0 */
  if (C.cf) goto L_110d2ec0;
  /* 110d2eb3 std  */
  C.df=1;
  /* 110d2eb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d2eb6 cld  */
  C.df=0;
  /* 110d2eb7 jmp dword ptr [edx*4 + 0x110d2fe0] */
  switch (EDX) {
    case 0: goto L_110d2ff0;
    case 1: goto L_110d2ff8;
    case 2: goto L_110d3008;
    case 3: goto L_110d301c;
    default: x86_unimpl("switch@0x110d2eb7 out of table"); return;
  }
  /* 110d2ebe mov edi, edi */
  EDI = (EDI);
L_110d2ec0:;
  /* 110d2ec0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110d2ec2 jmp dword ptr [ecx*4 + 0x110d2f90] */
  switch (ECX) {
    case 0: goto L_110d2fd7;
    default: x86_unimpl("switch@0x110d2ec2 out of table"); return;
  }
  /* 110d2ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d2ecc:;
  /* 110d2ecc mov eax, edi */
  EAX = (EDI);
  /* 110d2ece mov edx, 3 */
  EDX = (0x3u);
  /* 110d2ed3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2ed6 jb 0x110d2ee4 */
  if (C.cf) goto L_110d2ee4;
  /* 110d2ed8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110d2edb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2edd jmp dword ptr [eax*4 + 0x110d2ee8] */
  switch (EAX) {
    case 1: goto L_110d2ef8;
    case 2: goto L_110d2f18;
    case 3: goto L_110d2f40;
    default: x86_unimpl("switch@0x110d2edd out of table"); return;
  }
L_110d2ee4:;
  /* 110d2ee4 jmp dword ptr [ecx*4 + 0x110d2fe0] */
  switch (ECX) {
    case 0: goto L_110d2ff0;
    case 1: goto L_110d2ff8;
    case 2: goto L_110d3008;
    case 3: goto L_110d301c;
    default: x86_unimpl("switch@0x110d2ee4 out of table"); return;
  }
  /* 110d2eeb nop  */
  /* nop */
L_110d2ef8:;
  /* 110d2ef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d2efb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d2efd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d2f00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110d2f01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2f04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110d2f05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2f08 jb 0x110d2ec0 */
  if (C.cf) goto L_110d2ec0;
  /* 110d2f0a std  */
  C.df=1;
  /* 110d2f0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d2f0d cld  */
  C.df=0;
  /* 110d2f0e jmp dword ptr [edx*4 + 0x110d2fe0] */
  switch (EDX) {
    case 0: goto L_110d2ff0;
    case 1: goto L_110d2ff8;
    case 2: goto L_110d3008;
    case 3: goto L_110d301c;
    default: x86_unimpl("switch@0x110d2f0e out of table"); return;
  }
  /* 110d2f15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d2f18:;
  /* 110d2f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d2f1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d2f1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d2f20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d2f23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2f26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d2f29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2f2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2f2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2f32 jb 0x110d2ec0 */
  if (C.cf) goto L_110d2ec0;
  /* 110d2f34 std  */
  C.df=1;
  /* 110d2f35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d2f37 cld  */
  C.df=0;
  /* 110d2f38 jmp dword ptr [edx*4 + 0x110d2fe0] */
  switch (EDX) {
    case 0: goto L_110d2ff0;
    case 1: goto L_110d2ff8;
    case 2: goto L_110d3008;
    case 3: goto L_110d301c;
    default: x86_unimpl("switch@0x110d2f38 out of table"); return;
  }
  /* 110d2f3f nop  */
  /* nop */
L_110d2f40:;
  /* 110d2f40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d2f43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d2f45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d2f48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d2f4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d2f4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d2f51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d2f54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d2f57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2f5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d2f5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d2f60 jb 0x110d2ec0 */
  if (C.cf) goto L_110d2ec0;
  /* 110d2f66 std  */
  C.df=1;
  /* 110d2f67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d2f69 cld  */
  C.df=0;
  /* 110d2f6a jmp dword ptr [edx*4 + 0x110d2fe0] */
  switch (EDX) {
    case 0: goto L_110d2ff0;
    case 1: goto L_110d2ff8;
    case 2: goto L_110d3008;
    case 3: goto L_110d301c;
    default: x86_unimpl("switch@0x110d2f6a out of table"); return;
  }
  /* 110d2f71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 110d2f74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 110d2f75 das  */
  x86_unimpl("das @ 0x110d2f75");
  /* 110d2f76 or eax, 0xd2f9c11 */
  { uint32_t _r=(EAX)|(0xd2f9c11u); EAX = (_r); fl_logic(_r,32); }
  /* 110d2f7b adc dword ptr [edi + ebp + 0x2fac110d], esp */
  { uint32_t _a=(r32((uint32_t)(EDI + EBP*1 + 0x2fac110d))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EBP*1 + 0x2fac110d), (_r)); fl_add(_a,_b,_r,32); }
  /* 110d2f82 or eax, 0xd2fb411 */
  { uint32_t _r=(EAX)|(0xd2fb411u); EAX = (_r); fl_logic(_r,32); }
  /* 110d2f87 adc dword ptr [edi + ebp + 0x2fc4110d], edi */
  { uint32_t _a=(r32((uint32_t)(EDI + EBP*1 + 0x2fc4110d))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + EBP*1 + 0x2fc4110d), (_r)); fl_add(_a,_b,_r,32); }
  /* 110d2f94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 110d2f98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 110d2f9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 110d2fa0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 110d2fa4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 110d2fa8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 110d2fac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 110d2fb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 110d2fb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 110d2fb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 110d2fbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 110d2fc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 110d2fc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 110d2fc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 110d2fcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110d2fd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d2fd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110d2fd7:;
  /* 110d2fd7 jmp dword ptr [edx*4 + 0x110d2fe0] */
  switch (EDX) {
    case 0: goto L_110d2ff0;
    case 1: goto L_110d2ff8;
    case 2: goto L_110d3008;
    case 3: goto L_110d301c;
    default: x86_unimpl("switch@0x110d2fd7 out of table"); return;
  }
  /* 110d2fde mov edi, edi */
  EDI = (EDI);
L_110d2ff0:;
  /* 110d2ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d2ff3 pop esi */
  ESI = (pop32());
  /* 110d2ff4 pop edi */
  EDI = (pop32());
  /* 110d2ff5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d2ff6 ret  */
  ESPCHK(0x110d2d00u, _esp0);
  ESP += 4; return;
  /* 110d2ff7 nop  */
  /* nop */
L_110d2ff8:;
  /* 110d2ff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d2ffb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d2ffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3001 pop esi */
  ESI = (pop32());
  /* 110d3002 pop edi */
  EDI = (pop32());
  /* 110d3003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d3004 ret  */
  ESPCHK(0x110d2d00u, _esp0);
  ESP += 4; return;
  /* 110d3005 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d3008:;
  /* 110d3008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d300b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d300e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d3011 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d3014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3017 pop esi */
  ESI = (pop32());
  /* 110d3018 pop edi */
  EDI = (pop32());
  /* 110d3019 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d301a ret  */
  ESPCHK(0x110d2d00u, _esp0);
  ESP += 4; return;
  /* 110d301b nop  */
  /* nop */
L_110d301c:;
  /* 110d301c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d301f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d3022 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d3025 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d3028 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d302b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d302e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3031 pop esi */
  ESI = (pop32());
  /* 110d3032 pop edi */
  EDI = (pop32());
  /* 110d3033 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d3034 ret  */
  ESPCHK(0x110d2d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003035 @ 0x110d3035 (62 bytes, 15 insns) */
void f_110d3035(void) {
  FTRACE(0x110d3035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3035 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 110d303a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d303c push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d3042 call dword ptr [0x110d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5038))), 0x110d3048u);
  /* 110d3048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d304a mov dword ptr [0x110d696c], eax */
  w32((uint32_t)(0x110d696c), (EAX));
  /* 110d304f jne 0x110d3052 */
  if (!C.zf) goto L_110d3052;
  /* 110d3051 ret  */
  ESPCHK(0x110d3035u, _esp0);
  ESP += 4; return;
L_110d3052:;
  /* 110d3052 and dword ptr [0x110d6964], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110d6964)))&(0x0u); w32((uint32_t)(0x110d6964), (_r)); fl_logic(_r,32); }
  /* 110d3059 and dword ptr [0x110d6968], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110d6968)))&(0x0u); w32((uint32_t)(0x110d6968), (_r)); fl_logic(_r,32); }
  /* 110d3060 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3062 mov dword ptr [0x110d6960], eax */
  w32((uint32_t)(0x110d6960), (EAX));
  /* 110d3067 mov dword ptr [0x110d6958], 0x10 */
  w32((uint32_t)(0x110d6958), (0x10u));
  /* 110d3071 pop eax */
  EAX = (pop32());
  /* 110d3072 ret  */
  ESPCHK(0x110d3035u, _esp0);
  ESP += 4; return;
}

/* FUN_10003073 @ 0x110d3073 (43 bytes, 14 insns) */
void f_110d3073(void) {
  FTRACE(0x110d3073u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3073 mov eax, dword ptr [0x110d6968] */
  EAX = (r32((uint32_t)(0x110d6968)));
  /* 110d3078 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 110d307b mov eax, dword ptr [0x110d696c] */
  EAX = (r32((uint32_t)(0x110d696c)));
  /* 110d3080 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_110d3083:;
  /* 110d3083 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3085 jae 0x110d309b */
  if (!C.cf) goto L_110d309b;
  /* 110d3087 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d308b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d308e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3094 jb 0x110d309d */
  if (C.cf) goto L_110d309d;
  /* 110d3096 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3099 jmp 0x110d3083 */
  goto L_110d3083;
L_110d309b:;
  /* 110d309b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110d309d:;
  /* 110d309d ret  */
  ESPCHK(0x110d3073u, _esp0);
  ESP += 4; return;
}

/* FUN_1000309e @ 0x110d309e (811 bytes, 264 insns) */
void f_110d309e(void) {
  FTRACE(0x110d309eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d309e push ebp */
  push32((uint32_t)(EBP));
  /* 110d309f mov ebp, esp */
  EBP = (ESP);
  /* 110d30a1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d30a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110d30a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d30aa push ebx */
  push32((uint32_t)(EBX));
  /* 110d30ab push esi */
  push32((uint32_t)(ESI));
  /* 110d30ac mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 110d30af mov esi, edx */
  ESI = (EDX);
  /* 110d30b1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d30b4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 110d30b7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d30ba push edi */
  push32((uint32_t)(EDI));
  /* 110d30bb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 110d30be mov ecx, esi */
  ECX = (ESI);
  /* 110d30c0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 110d30c3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110d30c9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110d30ca mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 110d30cd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 110d30d4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 110d30d7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110d30da mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 110d30dd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 110d30e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110d30e3 jne 0x110d3164 */
  if (!C.zf) goto L_110d3164;
  /* 110d30e5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 110d30e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110d30ea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d30eb pop edi */
  EDI = (pop32());
  /* 110d30ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 110d30ef cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d30f1 jbe 0x110d30f6 */
  if ((C.cf||C.zf)) goto L_110d30f6;
  /* 110d30f3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_110d30f6:;
  /* 110d30f6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 110d30fa cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d30fe jne 0x110d3148 */
  if (!C.zf) goto L_110d3148;
  /* 110d3100 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110d3103 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3106 jae 0x110d3124 */
  if (!C.cf) goto L_110d3124;
  /* 110d3108 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110d310d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110d310f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 110d3113 not edi */
  EDI = (~(EDI));
  /* 110d3115 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 110d3119 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 110d311b jne 0x110d3148 */
  if (!C.zf) goto L_110d3148;
  /* 110d311d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3120 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 110d3122 jmp 0x110d3148 */
  goto L_110d3148;
L_110d3124:;
  /* 110d3124 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3127 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110d312c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110d312e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110d3131 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 110d3135 not edi */
  EDI = (~(EDI));
  /* 110d3137 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 110d313e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 110d3140 jne 0x110d3148 */
  if (!C.zf) goto L_110d3148;
  /* 110d3142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3145 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_110d3148:;
  /* 110d3148 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 110d314c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 110d3150 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 110d3153 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 110d3157 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 110d315b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d315e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 110d3161 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_110d3164:;
  /* 110d3164 mov edi, ebx */
  EDI = (EBX);
  /* 110d3166 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 110d3169 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110d316a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d316d jbe 0x110d3172 */
  if ((C.cf||C.zf)) goto L_110d3172;
  /* 110d316f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110d3171 pop edi */
  EDI = (pop32());
L_110d3172:;
  /* 110d3172 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d3175 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110d3178 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110d317b jne 0x110d3221 */
  if (!C.zf) goto L_110d3221;
  /* 110d3181 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d3187 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 110d318a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110d318c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110d318f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d3190 pop edx */
  EDX = (pop32());
  /* 110d3191 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3193 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 110d3196 jbe 0x110d319d */
  if ((C.cf||C.zf)) goto L_110d319d;
  /* 110d3198 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 110d319b mov ecx, edx */
  ECX = (EDX);
L_110d319d:;
  /* 110d319d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d31a0 mov edi, ebx */
  EDI = (EBX);
  /* 110d31a2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 110d31a5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 110d31a8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110d31a9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d31ab jbe 0x110d31af */
  if ((C.cf||C.zf)) goto L_110d31af;
  /* 110d31ad mov edi, edx */
  EDI = (EDX);
L_110d31af:;
  /* 110d31af cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d31b1 je 0x110d321e */
  if (C.zf) goto L_110d321e;
  /* 110d31b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110d31b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110d31b9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d31bc jne 0x110d3206 */
  if (!C.zf) goto L_110d3206;
  /* 110d31be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110d31c1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d31c4 jae 0x110d31e2 */
  if (!C.cf) goto L_110d31e2;
  /* 110d31c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110d31cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110d31cd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 110d31d1 not edx */
  EDX = (~(EDX));
  /* 110d31d3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 110d31d7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 110d31d9 jne 0x110d3206 */
  if (!C.zf) goto L_110d3206;
  /* 110d31db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d31de and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 110d31e0 jmp 0x110d3206 */
  goto L_110d3206;
L_110d31e2:;
  /* 110d31e2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d31e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110d31ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110d31ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110d31ef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 110d31f3 not edx */
  EDX = (~(EDX));
  /* 110d31f5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 110d31fc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 110d31fe jne 0x110d3206 */
  if (!C.zf) goto L_110d3206;
  /* 110d3200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3203 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_110d3206:;
  /* 110d3206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110d3209 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 110d320c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 110d320f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 110d3212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110d3215 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110d3218 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 110d321b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_110d321e:;
  /* 110d321e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_110d3221:;
  /* 110d3221 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3225 jne 0x110d3230 */
  if (!C.zf) goto L_110d3230;
  /* 110d3227 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d322a je 0x110d32b9 */
  if (C.zf) goto L_110d32b9;
L_110d3230:;
  /* 110d3230 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110d3233 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 110d3236 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 110d3239 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 110d323c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110d323f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 110d3242 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 110d3245 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 110d3248 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110d324b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 110d324e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110d3251 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3254 jne 0x110d32b9 */
  if (!C.zf) goto L_110d32b9;
  /* 110d3256 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 110d325a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d325d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 110d3260 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 110d3262 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 110d3266 jae 0x110d328d */
  if (!C.cf) goto L_110d328d;
  /* 110d3268 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d326c jne 0x110d327c */
  if (!C.zf) goto L_110d327c;
  /* 110d326e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110d3273 mov ecx, edi */
  ECX = (EDI);
  /* 110d3275 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110d3277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d327a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_110d327c:;
  /* 110d327c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110d3281 mov ecx, edi */
  ECX = (EDI);
  /* 110d3283 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110d3285 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 110d3289 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110d328b jmp 0x110d32b6 */
  goto L_110d32b6;
L_110d328d:;
  /* 110d328d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d3291 jne 0x110d32a3 */
  if (!C.zf) goto L_110d32a3;
  /* 110d3293 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 110d3296 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110d329b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110d329d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d32a0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_110d32a3:;
  /* 110d32a3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 110d32a6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110d32ab shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110d32ad lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 110d32b4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_110d32b6:;
  /* 110d32b6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_110d32b9:;
  /* 110d32b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110d32bc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 110d32be mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 110d32c2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 110d32c4 jne 0x110d33c4 */
  if (!C.zf) goto L_110d33c4;
  /* 110d32ca mov eax, dword ptr [0x110d6964] */
  EAX = (r32((uint32_t)(0x110d6964)));
  /* 110d32cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d32d1 je 0x110d33b6 */
  if (C.zf) goto L_110d33b6;
  /* 110d32d7 mov ecx, dword ptr [0x110d695c] */
  ECX = (r32((uint32_t)(0x110d695c)));
  /* 110d32dd mov edi, dword ptr [0x110d5074] */
  EDI = (r32((uint32_t)(0x110d5074)));
  /* 110d32e3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 110d32e6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d32e9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 110d32ee push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 110d32f3 push ebx */
  push32((uint32_t)(EBX));
  /* 110d32f4 push ecx */
  push32((uint32_t)(ECX));
  /* 110d32f5 call edi */
  call_ind((uint32_t)(EDI), 0x110d32f7u);
  /* 110d32f7 mov ecx, dword ptr [0x110d695c] */
  ECX = (r32((uint32_t)(0x110d695c)));
  /* 110d32fd mov eax, dword ptr [0x110d6964] */
  EAX = (r32((uint32_t)(0x110d6964)));
  /* 110d3302 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110d3307 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110d3309 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 110d330c mov eax, dword ptr [0x110d6964] */
  EAX = (r32((uint32_t)(0x110d6964)));
  /* 110d3311 mov ecx, dword ptr [0x110d695c] */
  ECX = (r32((uint32_t)(0x110d695c)));
  /* 110d3317 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 110d331a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 110d3322 mov eax, dword ptr [0x110d6964] */
  EAX = (r32((uint32_t)(0x110d6964)));
  /* 110d3327 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 110d332a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 110d332d mov eax, dword ptr [0x110d6964] */
  EAX = (r32((uint32_t)(0x110d6964)));
  /* 110d3332 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110d3335 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d3339 jne 0x110d3344 */
  if (!C.zf) goto L_110d3344;
  /* 110d333b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 110d333f mov eax, dword ptr [0x110d6964] */
  EAX = (r32((uint32_t)(0x110d6964)));
L_110d3344:;
  /* 110d3344 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3348 jne 0x110d33b6 */
  if (!C.zf) goto L_110d33b6;
  /* 110d334a push ebx */
  push32((uint32_t)(EBX));
  /* 110d334b push 0 */
  push32((uint32_t)(0x0u));
  /* 110d334d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 110d3350 call edi */
  call_ind((uint32_t)(EDI), 0x110d3352u);
  /* 110d3352 mov eax, dword ptr [0x110d6964] */
  EAX = (r32((uint32_t)(0x110d6964)));
  /* 110d3357 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 110d335a push 0 */
  push32((uint32_t)(0x0u));
  /* 110d335c push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d3362 call dword ptr [0x110d5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5078))), 0x110d3368u);
  /* 110d3368 mov eax, dword ptr [0x110d6968] */
  EAX = (r32((uint32_t)(0x110d6968)));
  /* 110d336d mov edx, dword ptr [0x110d696c] */
  EDX = (r32((uint32_t)(0x110d696c)));
  /* 110d3373 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110d3376 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 110d3379 mov ecx, eax */
  ECX = (EAX);
  /* 110d337b mov eax, dword ptr [0x110d6964] */
  EAX = (r32((uint32_t)(0x110d6964)));
  /* 110d3380 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3382 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 110d3386 push ecx */
  push32((uint32_t)(ECX));
  /* 110d3387 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 110d338a push ecx */
  push32((uint32_t)(ECX));
  /* 110d338b push eax */
  push32((uint32_t)(EAX));
  /* 110d338c call 0x110d3e20 */
  push32(0x110d3391u); f_110d3e20();
  /* 110d3391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3394 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3397 dec dword ptr [0x110d6968] */
  { uint32_t _r=(r32((uint32_t)(0x110d6968)))-1; w32((uint32_t)(0x110d6968), (_r)); fl_dec(_r,32); }
  /* 110d339d cmp eax, dword ptr [0x110d6964] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110d6964))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d33a3 jbe 0x110d33a8 */
  if ((C.cf||C.zf)) goto L_110d33a8;
  /* 110d33a5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_110d33a8:;
  /* 110d33a8 mov ecx, dword ptr [0x110d696c] */
  ECX = (r32((uint32_t)(0x110d696c)));
  /* 110d33ae mov dword ptr [0x110d6960], ecx */
  w32((uint32_t)(0x110d6960), (ECX));
  /* 110d33b4 jmp 0x110d33b9 */
  goto L_110d33b9;
L_110d33b6:;
  /* 110d33b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_110d33b9:;
  /* 110d33b9 mov dword ptr [0x110d6964], eax */
  w32((uint32_t)(0x110d6964), (EAX));
  /* 110d33be mov dword ptr [0x110d695c], esi */
  w32((uint32_t)(0x110d695c), (ESI));
L_110d33c4:;
  /* 110d33c4 pop edi */
  EDI = (pop32());
  /* 110d33c5 pop esi */
  ESI = (pop32());
  /* 110d33c6 pop ebx */
  EBX = (pop32());
  /* 110d33c7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d33c8 ret  */
  ESPCHK(0x110d309eu, _esp0);
  ESP += 4; return;
}

/* FUN_100033c9 @ 0x110d33c9 (777 bytes, 275 insns) */
void f_110d33c9(void) {
  FTRACE(0x110d33c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d33c9 push ebp */
  push32((uint32_t)(EBP));
  /* 110d33ca mov ebp, esp */
  EBP = (ESP);
  /* 110d33cc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d33cf mov eax, dword ptr [0x110d6968] */
  EAX = (r32((uint32_t)(0x110d6968)));
  /* 110d33d4 mov edx, dword ptr [0x110d696c] */
  EDX = (r32((uint32_t)(0x110d696c)));
  /* 110d33da push ebx */
  push32((uint32_t)(EBX));
  /* 110d33db push esi */
  push32((uint32_t)(ESI));
  /* 110d33dc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110d33df push edi */
  push32((uint32_t)(EDI));
  /* 110d33e0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 110d33e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d33e6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 110d33e9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 110d33ec and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 110d33ef mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110d33f2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 110d33f5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d33f6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d33f9 jge 0x110d3409 */
  if ((C.sf==C.of)) goto L_110d3409;
  /* 110d33fb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 110d33fe shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 110d3400 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 110d3404 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 110d3407 jmp 0x110d3419 */
  goto L_110d3419;
L_110d3409:;
  /* 110d3409 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d340c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110d340f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110d3411 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110d3413 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 110d3416 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110d3419:;
  /* 110d3419 mov eax, dword ptr [0x110d6960] */
  EAX = (r32((uint32_t)(0x110d6960)));
  /* 110d341e mov ebx, eax */
  EBX = (EAX);
  /* 110d3420 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3422 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110d3425 jae 0x110d3440 */
  if (!C.cf) goto L_110d3440;
L_110d3427:;
  /* 110d3427 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 110d342a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 110d342c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 110d342f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 110d3431 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110d3433 jne 0x110d3440 */
  if (!C.zf) goto L_110d3440;
  /* 110d3435 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3438 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d343b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110d343e jb 0x110d3427 */
  if (C.cf) goto L_110d3427;
L_110d3440:;
  /* 110d3440 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3443 jne 0x110d34be */
  if (!C.zf) goto L_110d34be;
  /* 110d3445 mov ebx, edx */
  EBX = (EDX);
L_110d3447:;
  /* 110d3447 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3449 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110d344c jae 0x110d3463 */
  if (!C.cf) goto L_110d3463;
  /* 110d344e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 110d3451 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 110d3453 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 110d3456 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 110d3458 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110d345a jne 0x110d3461 */
  if (!C.zf) goto L_110d3461;
  /* 110d345c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d345f jmp 0x110d3447 */
  goto L_110d3447;
L_110d3461:;
  /* 110d3461 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_110d3463:;
  /* 110d3463 jne 0x110d34be */
  if (!C.zf) goto L_110d34be;
L_110d3465:;
  /* 110d3465 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3468 jae 0x110d347b */
  if (!C.cf) goto L_110d347b;
  /* 110d346a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d346e jne 0x110d3478 */
  if (!C.zf) goto L_110d3478;
  /* 110d3470 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3473 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110d3476 jmp 0x110d3465 */
  goto L_110d3465;
L_110d3478:;
  /* 110d3478 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_110d347b:;
  /* 110d347b jne 0x110d34a3 */
  if (!C.zf) goto L_110d34a3;
  /* 110d347d mov ebx, edx */
  EBX = (EDX);
L_110d347f:;
  /* 110d347f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3481 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110d3484 jae 0x110d3493 */
  if (!C.cf) goto L_110d3493;
  /* 110d3486 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d348a jne 0x110d3491 */
  if (!C.zf) goto L_110d3491;
  /* 110d348c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d348f jmp 0x110d347f */
  goto L_110d347f;
L_110d3491:;
  /* 110d3491 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_110d3493:;
  /* 110d3493 jne 0x110d34a3 */
  if (!C.zf) goto L_110d34a3;
  /* 110d3495 call 0x110d36d2 */
  push32(0x110d349au); f_110d36d2();
  /* 110d349a mov ebx, eax */
  EBX = (EAX);
  /* 110d349c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110d349e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110d34a1 je 0x110d34b7 */
  if (C.zf) goto L_110d34b7;
L_110d34a3:;
  /* 110d34a3 push ebx */
  push32((uint32_t)(EBX));
  /* 110d34a4 call 0x110d3783 */
  push32(0x110d34a9u); f_110d3783();
  /* 110d34a9 pop ecx */
  ECX = (pop32());
  /* 110d34aa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 110d34ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110d34af mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 110d34b2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d34b5 jne 0x110d34be */
  if (!C.zf) goto L_110d34be;
L_110d34b7:;
  /* 110d34b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d34b9 jmp 0x110d36cd */
  goto L_110d36cd;
L_110d34be:;
  /* 110d34be mov dword ptr [0x110d6960], ebx */
  w32((uint32_t)(0x110d6960), (EBX));
  /* 110d34c4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 110d34c7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 110d34c9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d34cc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110d34cf je 0x110d34e5 */
  if (C.zf) goto L_110d34e5;
  /* 110d34d1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 110d34d8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 110d34dc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 110d34df and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 110d34e1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110d34e3 jne 0x110d351c */
  if (!C.zf) goto L_110d351c;
L_110d34e5:;
  /* 110d34e5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 110d34eb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 110d34ee and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 110d34f1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 110d34f4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110d34f8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 110d34fb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 110d34fd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 110d3500 jne 0x110d3519 */
  if (!C.zf) goto L_110d3519;
L_110d3502:;
  /* 110d3502 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 110d3508 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 110d350b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 110d350e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3511 mov edi, esi */
  EDI = (ESI);
  /* 110d3513 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 110d3515 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 110d3517 je 0x110d3502 */
  if (C.zf) goto L_110d3502;
L_110d3519:;
  /* 110d3519 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_110d351c:;
  /* 110d351c mov ecx, edx */
  ECX = (EDX);
  /* 110d351e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110d3520 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110d3526 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 110d352d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110d3530 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 110d3534 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 110d3536 jne 0x110d3545 */
  if (!C.zf) goto L_110d3545;
  /* 110d3538 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 110d353f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 110d3541 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 110d3544 pop edi */
  EDI = (pop32());
L_110d3545:;
  /* 110d3545 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110d3547 jl 0x110d354e */
  if ((C.sf!=C.of)) goto L_110d354e;
  /* 110d3549 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 110d354b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d354c jmp 0x110d3545 */
  goto L_110d3545;
L_110d354e:;
  /* 110d354e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110d3551 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 110d3555 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 110d3557 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d355a mov esi, ecx */
  ESI = (ECX);
  /* 110d355c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110d355f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 110d3562 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110d3563 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3566 jle 0x110d356b */
  if ((C.zf||C.sf!=C.of)) goto L_110d356b;
  /* 110d3568 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110d356a pop esi */
  ESI = (pop32());
L_110d356b:;
  /* 110d356b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d356d je 0x110d3680 */
  if (C.zf) goto L_110d3680;
  /* 110d3573 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110d3576 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3579 jne 0x110d35dc */
  if (!C.zf) goto L_110d35dc;
  /* 110d357b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d357e jge 0x110d35ab */
  if ((C.sf==C.of)) goto L_110d35ab;
  /* 110d3580 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110d3585 mov ecx, edi */
  ECX = (EDI);
  /* 110d3587 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110d3589 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d358c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 110d3590 not ebx */
  EBX = (~(EBX));
  /* 110d3592 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 110d3595 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 110d3599 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 110d359d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 110d359f jne 0x110d35d9 */
  if (!C.zf) goto L_110d35d9;
  /* 110d35a1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d35a4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110d35a7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 110d35a9 jmp 0x110d35dc */
  goto L_110d35dc;
L_110d35ab:;
  /* 110d35ab lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 110d35ae mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110d35b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110d35b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d35b8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 110d35bc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 110d35c3 not ebx */
  EBX = (~(EBX));
  /* 110d35c5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 110d35c7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 110d35c9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 110d35cc jne 0x110d35d9 */
  if (!C.zf) goto L_110d35d9;
  /* 110d35ce mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d35d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110d35d4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 110d35d7 jmp 0x110d35dc */
  goto L_110d35dc;
L_110d35d9:;
  /* 110d35d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_110d35dc:;
  /* 110d35dc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 110d35df mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 110d35e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d35e6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 110d35e9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110d35ec mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 110d35ef mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 110d35f2 je 0x110d368c */
  if (C.zf) goto L_110d368c;
  /* 110d35f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110d35fb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 110d35ff lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 110d3602 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 110d3605 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 110d3608 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 110d360b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110d360e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 110d3611 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110d3614 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3617 jne 0x110d367d */
  if (!C.zf) goto L_110d367d;
  /* 110d3619 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 110d361d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3620 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 110d3623 jge 0x110d364e */
  if ((C.sf==C.of)) goto L_110d364e;
  /* 110d3625 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 110d3627 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d362b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 110d362f jne 0x110d363c */
  if (!C.zf) goto L_110d363c;
  /* 110d3631 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110d3636 mov ecx, esi */
  ECX = (ESI);
  /* 110d3638 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110d363a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_110d363c:;
  /* 110d363c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110d3641 mov ecx, esi */
  ECX = (ESI);
  /* 110d3643 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110d3645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d3648 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 110d364c jmp 0x110d367d */
  goto L_110d367d;
L_110d364e:;
  /* 110d364e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 110d3650 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d3654 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 110d3658 jne 0x110d3667 */
  if (!C.zf) goto L_110d3667;
  /* 110d365a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 110d365d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110d3662 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110d3664 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_110d3667:;
  /* 110d3667 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d366a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 110d3671 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 110d3674 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 110d3679 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 110d367b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_110d367d:;
  /* 110d367d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_110d3680:;
  /* 110d3680 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110d3682 je 0x110d368f */
  if (C.zf) goto L_110d368f;
  /* 110d3684 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110d3686 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 110d368a jmp 0x110d368f */
  goto L_110d368f;
L_110d368c:;
  /* 110d368c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_110d368f:;
  /* 110d368f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 110d3692 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3694 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 110d3697 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110d3699 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 110d369d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 110d36a0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 110d36a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110d36a4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 110d36a7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 110d36a9 jne 0x110d36c5 */
  if (!C.zf) goto L_110d36c5;
  /* 110d36ab cmp ebx, dword ptr [0x110d6964] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x110d6964))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d36b1 jne 0x110d36c5 */
  if (!C.zf) goto L_110d36c5;
  /* 110d36b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d36b6 cmp ecx, dword ptr [0x110d695c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110d695c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d36bc jne 0x110d36c5 */
  if (!C.zf) goto L_110d36c5;
  /* 110d36be and dword ptr [0x110d6964], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110d6964)))&(0x0u); w32((uint32_t)(0x110d6964), (_r)); fl_logic(_r,32); }
L_110d36c5:;
  /* 110d36c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d36c8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110d36ca lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_110d36cd:;
  /* 110d36cd pop edi */
  EDI = (pop32());
  /* 110d36ce pop esi */
  ESI = (pop32());
  /* 110d36cf pop ebx */
  EBX = (pop32());
  /* 110d36d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d36d1 ret  */
  ESPCHK(0x110d33c9u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d2 @ 0x110d36d2 (177 bytes, 53 insns) */
void f_110d36d2(void) {
  FTRACE(0x110d36d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d36d2 mov eax, dword ptr [0x110d6968] */
  EAX = (r32((uint32_t)(0x110d6968)));
  /* 110d36d7 mov ecx, dword ptr [0x110d6958] */
  ECX = (r32((uint32_t)(0x110d6958)));
  /* 110d36dd push esi */
  push32((uint32_t)(ESI));
  /* 110d36de push edi */
  push32((uint32_t)(EDI));
  /* 110d36df xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110d36e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d36e3 jne 0x110d3715 */
  if (!C.zf) goto L_110d3715;
  /* 110d36e5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 110d36e9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 110d36ec push eax */
  push32((uint32_t)(EAX));
  /* 110d36ed push dword ptr [0x110d696c] */
  push32((uint32_t)(r32((uint32_t)(0x110d696c))));
  /* 110d36f3 push edi */
  push32((uint32_t)(EDI));
  /* 110d36f4 push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d36fa call dword ptr [0x110d5024] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5024))), 0x110d3700u);
  /* 110d3700 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3702 je 0x110d3765 */
  if (C.zf) goto L_110d3765;
  /* 110d3704 add dword ptr [0x110d6958], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x110d6958))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x110d6958), (_r)); fl_add(_a,_b,_r,32); }
  /* 110d370b mov dword ptr [0x110d696c], eax */
  w32((uint32_t)(0x110d696c), (EAX));
  /* 110d3710 mov eax, dword ptr [0x110d6968] */
  EAX = (r32((uint32_t)(0x110d6968)));
L_110d3715:;
  /* 110d3715 mov ecx, dword ptr [0x110d696c] */
  ECX = (r32((uint32_t)(0x110d696c)));
  /* 110d371b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 110d3720 push 8 */
  push32((uint32_t)(0x8u));
  /* 110d3722 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110d3725 push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d372b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 110d372e call dword ptr [0x110d5038] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5038))), 0x110d3734u);
  /* 110d3734 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3736 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 110d3739 je 0x110d3765 */
  if (C.zf) goto L_110d3765;
  /* 110d373b push 4 */
  push32((uint32_t)(0x4u));
  /* 110d373d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 110d3742 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 110d3747 push edi */
  push32((uint32_t)(EDI));
  /* 110d3748 call dword ptr [0x110d5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5028))), 0x110d374eu);
  /* 110d374e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3750 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 110d3753 jne 0x110d3769 */
  if (!C.zf) goto L_110d3769;
  /* 110d3755 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110d3758 push edi */
  push32((uint32_t)(EDI));
  /* 110d3759 push dword ptr [0x110d6ba8] */
  push32((uint32_t)(r32((uint32_t)(0x110d6ba8))));
  /* 110d375f call dword ptr [0x110d5078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5078))), 0x110d3765u);
L_110d3765:;
  /* 110d3765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d3767 jmp 0x110d3780 */
  goto L_110d3780;
L_110d3769:;
  /* 110d3769 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 110d376d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 110d376f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 110d3772 inc dword ptr [0x110d6968] */
  { uint32_t _r=(r32((uint32_t)(0x110d6968)))+1; w32((uint32_t)(0x110d6968), (_r)); fl_inc(_r,32); }
  /* 110d3778 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 110d377b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110d377e mov eax, esi */
  EAX = (ESI);
L_110d3780:;
  /* 110d3780 pop edi */
  EDI = (pop32());
  /* 110d3781 pop esi */
  ESI = (pop32());
  /* 110d3782 ret  */
  ESPCHK(0x110d36d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003783 @ 0x110d3783 (251 bytes, 85 insns) */
void f_110d3783(void) {
  FTRACE(0x110d3783u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3783 push ebp */
  push32((uint32_t)(EBP));
  /* 110d3784 mov ebp, esp */
  EBP = (ESP);
  /* 110d3786 push ecx */
  push32((uint32_t)(ECX));
  /* 110d3787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d378a push ebx */
  push32((uint32_t)(EBX));
  /* 110d378b push esi */
  push32((uint32_t)(ESI));
  /* 110d378c push edi */
  push32((uint32_t)(EDI));
  /* 110d378d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 110d3790 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 110d3793 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_110d3795:;
  /* 110d3795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3797 jl 0x110d379e */
  if ((C.sf!=C.of)) goto L_110d379e;
  /* 110d3799 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110d379b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110d379c jmp 0x110d3795 */
  goto L_110d3795;
L_110d379e:;
  /* 110d379e mov eax, ebx */
  EAX = (EBX);
  /* 110d37a0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110d37a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110d37a8 pop edx */
  EDX = (pop32());
  /* 110d37a9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 110d37b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110d37b3:;
  /* 110d37b3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 110d37b6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 110d37b9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d37bc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110d37bd jne 0x110d37b3 */
  if (!C.zf) goto L_110d37b3;
  /* 110d37bf mov edi, ebx */
  EDI = (EBX);
  /* 110d37c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 110d37c3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 110d37c6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d37c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110d37ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110d37d3 push edi */
  push32((uint32_t)(EDI));
  /* 110d37d4 call dword ptr [0x110d5028] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5028))), 0x110d37dau);
  /* 110d37da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d37dc jne 0x110d37e6 */
  if (!C.zf) goto L_110d37e6;
  /* 110d37de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110d37e1 jmp 0x110d3879 */
  goto L_110d3879;
L_110d37e6:;
  /* 110d37e6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 110d37ec cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d37ee ja 0x110d382c */
  if ((!C.cf&&!C.zf)) goto L_110d382c;
  /* 110d37f0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_110d37f3:;
  /* 110d37f3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 110d37f7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 110d37fe lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 110d3804 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 110d380b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110d380d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 110d3813 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110d3816 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 110d3820 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3825 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 110d3828 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d382a jbe 0x110d37f3 */
  if ((C.cf||C.zf)) goto L_110d37f3;
L_110d382c:;
  /* 110d382c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110d382f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 110d3832 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3837 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3839 pop edi */
  EDI = (pop32());
  /* 110d383a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110d383d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 110d3840 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 110d3843 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 110d3846 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 110d3849 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 110d384e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 110d3855 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 110d3858 mov cl, al */
  CL = (AL);
  /* 110d385a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 110d385c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d385e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3861 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 110d3864 jne 0x110d3869 */
  if (!C.zf) goto L_110d3869;
  /* 110d3866 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_110d3869:;
  /* 110d3869 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110d386e mov ecx, ebx */
  ECX = (EBX);
  /* 110d3870 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110d3872 not edx */
  EDX = (~(EDX));
  /* 110d3874 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 110d3877 mov eax, ebx */
  EAX = (EBX);
L_110d3879:;
  /* 110d3879 pop edi */
  EDI = (pop32());
  /* 110d387a pop esi */
  ESI = (pop32());
  /* 110d387b pop ebx */
  EBX = (pop32());
  /* 110d387c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d387d ret  */
  ESPCHK(0x110d3783u, _esp0);
  ESP += 4; return;
}

/* FUN_1000387e @ 0x110d387e (137 bytes, 50 insns) */
void f_110d387e(void) {
  FTRACE(0x110d387eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d387e push ebx */
  push32((uint32_t)(EBX));
  /* 110d387f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110d3881 cmp dword ptr [0x110d691c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110d691c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3887 push esi */
  push32((uint32_t)(ESI));
  /* 110d3888 push edi */
  push32((uint32_t)(EDI));
  /* 110d3889 jne 0x110d38cd */
  if (!C.zf) goto L_110d38cd;
  /* 110d388b push 0x110d5430 */
  push32((uint32_t)(0x110d5430u));
  /* 110d3890 call dword ptr [0x110d501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d501c))), 0x110d3896u);
  /* 110d3896 mov edi, eax */
  EDI = (EAX);
  /* 110d3898 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d389a je 0x110d3903 */
  if (C.zf) goto L_110d3903;
  /* 110d389c mov esi, dword ptr [0x110d5020] */
  ESI = (r32((uint32_t)(0x110d5020)));
  /* 110d38a2 push 0x110d5424 */
  push32((uint32_t)(0x110d5424u));
  /* 110d38a7 push edi */
  push32((uint32_t)(EDI));
  /* 110d38a8 call esi */
  call_ind((uint32_t)(ESI), 0x110d38aau);
  /* 110d38aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d38ac mov dword ptr [0x110d691c], eax */
  w32((uint32_t)(0x110d691c), (EAX));
  /* 110d38b1 je 0x110d3903 */
  if (C.zf) goto L_110d3903;
  /* 110d38b3 push 0x110d5414 */
  push32((uint32_t)(0x110d5414u));
  /* 110d38b8 push edi */
  push32((uint32_t)(EDI));
  /* 110d38b9 call esi */
  call_ind((uint32_t)(ESI), 0x110d38bbu);
  /* 110d38bb push 0x110d5400 */
  push32((uint32_t)(0x110d5400u));
  /* 110d38c0 push edi */
  push32((uint32_t)(EDI));
  /* 110d38c1 mov dword ptr [0x110d6920], eax */
  w32((uint32_t)(0x110d6920), (EAX));
  /* 110d38c6 call esi */
  call_ind((uint32_t)(ESI), 0x110d38c8u);
  /* 110d38c8 mov dword ptr [0x110d6924], eax */
  w32((uint32_t)(0x110d6924), (EAX));
L_110d38cd:;
  /* 110d38cd mov eax, dword ptr [0x110d6920] */
  EAX = (r32((uint32_t)(0x110d6920)));
  /* 110d38d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d38d4 je 0x110d38ec */
  if (C.zf) goto L_110d38ec;
  /* 110d38d6 call eax */
  call_ind((uint32_t)(EAX), 0x110d38d8u);
  /* 110d38d8 mov ebx, eax */
  EBX = (EAX);
  /* 110d38da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110d38dc je 0x110d38ec */
  if (C.zf) goto L_110d38ec;
  /* 110d38de mov eax, dword ptr [0x110d6924] */
  EAX = (r32((uint32_t)(0x110d6924)));
  /* 110d38e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d38e5 je 0x110d38ec */
  if (C.zf) goto L_110d38ec;
  /* 110d38e7 push ebx */
  push32((uint32_t)(EBX));
  /* 110d38e8 call eax */
  call_ind((uint32_t)(EAX), 0x110d38eau);
  /* 110d38ea mov ebx, eax */
  EBX = (EAX);
L_110d38ec:;
  /* 110d38ec push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110d38f0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110d38f4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110d38f8 push ebx */
  push32((uint32_t)(EBX));
  /* 110d38f9 call dword ptr [0x110d691c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d691c))), 0x110d38ffu);
L_110d38ff:;
  /* 110d38ff pop edi */
  EDI = (pop32());
  /* 110d3900 pop esi */
  ESI = (pop32());
  /* 110d3901 pop ebx */
  EBX = (pop32());
  /* 110d3902 ret  */
  ESPCHK(0x110d387eu, _esp0);
  ESP += 4; return;
L_110d3903:;
  /* 110d3903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d3905 jmp 0x110d38ff */
  goto L_110d38ff;
}

/* _strncpy @ 0x110d3910 (254 bytes, 109 insns) */
void f_110d3910(void) {
  FTRACE(0x110d3910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3910 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 110d3914 push edi */
  push32((uint32_t)(EDI));
  /* 110d3915 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110d3917 je 0x110d3993 */
  if (C.zf) goto L_110d3993;
  /* 110d3919 push esi */
  push32((uint32_t)(ESI));
  /* 110d391a push ebx */
  push32((uint32_t)(EBX));
  /* 110d391b mov ebx, ecx */
  EBX = (ECX);
  /* 110d391d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 110d3921 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 110d3927 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 110d392b jne 0x110d3934 */
  if (!C.zf) goto L_110d3934;
  /* 110d392d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d3930 jne 0x110d39a1 */
  if (!C.zf) goto L_110d39a1;
  /* 110d3932 jmp 0x110d3955 */
  goto L_110d3955;
L_110d3934:;
  /* 110d3934 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d3936 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d3937 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d393a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d393b je 0x110d3962 */
  if (C.zf) goto L_110d3962;
  /* 110d393d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d393f je 0x110d396a */
  if (C.zf) goto L_110d396a;
  /* 110d3941 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 110d3947 jne 0x110d3934 */
  if (!C.zf) goto L_110d3934;
  /* 110d3949 mov ebx, ecx */
  EBX = (ECX);
  /* 110d394b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d394e jne 0x110d39a1 */
  if (!C.zf) goto L_110d39a1;
L_110d3950:;
  /* 110d3950 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 110d3953 je 0x110d3962 */
  if (C.zf) goto L_110d3962;
L_110d3955:;
  /* 110d3955 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d3957 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d3958 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d395a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d395b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110d395d je 0x110d398e */
  if (C.zf) goto L_110d398e;
  /* 110d395f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110d3960 jne 0x110d3955 */
  if (!C.zf) goto L_110d3955;
L_110d3962:;
  /* 110d3962 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110d3966 pop ebx */
  EBX = (pop32());
  /* 110d3967 pop esi */
  ESI = (pop32());
  /* 110d3968 pop edi */
  EDI = (pop32());
  /* 110d3969 ret  */
  ESPCHK(0x110d3910u, _esp0);
  ESP += 4; return;
L_110d396a:;
  /* 110d396a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110d3970 je 0x110d3984 */
  if (C.zf) goto L_110d3984;
L_110d3972:;
  /* 110d3972 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3974 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d3975 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d3976 je 0x110d3a06 */
  if (C.zf) goto L_110d3a06;
  /* 110d397c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110d3982 jne 0x110d3972 */
  if (!C.zf) goto L_110d3972;
L_110d3984:;
  /* 110d3984 mov ebx, ecx */
  EBX = (ECX);
  /* 110d3986 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d3989 jne 0x110d39f7 */
  if (!C.zf) goto L_110d39f7;
L_110d398b:;
  /* 110d398b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d398d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_110d398e:;
  /* 110d398e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110d398f jne 0x110d398b */
  if (!C.zf) goto L_110d398b;
  /* 110d3991 pop ebx */
  EBX = (pop32());
  /* 110d3992 pop esi */
  ESI = (pop32());
L_110d3993:;
  /* 110d3993 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d3997 pop edi */
  EDI = (pop32());
  /* 110d3998 ret  */
  ESPCHK(0x110d3910u, _esp0);
  ESP += 4; return;
L_110d3999:;
  /* 110d3999 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110d399b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d399e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d399f je 0x110d3950 */
  if (C.zf) goto L_110d3950;
L_110d39a1:;
  /* 110d39a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110d39a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110d39a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d39aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110d39ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110d39af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 110d39b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d39b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110d39b9 je 0x110d3999 */
  if (C.zf) goto L_110d3999;
  /* 110d39bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110d39bd je 0x110d39eb */
  if (C.zf) goto L_110d39eb;
  /* 110d39bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 110d39c1 je 0x110d39e1 */
  if (C.zf) goto L_110d39e1;
  /* 110d39c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 110d39c9 je 0x110d39d7 */
  if (C.zf) goto L_110d39d7;
  /* 110d39cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 110d39d1 jne 0x110d3999 */
  if (!C.zf) goto L_110d3999;
  /* 110d39d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110d39d5 jmp 0x110d39ef */
  goto L_110d39ef;
L_110d39d7:;
  /* 110d39d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110d39dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110d39df jmp 0x110d39ef */
  goto L_110d39ef;
L_110d39e1:;
  /* 110d39e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110d39e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110d39e9 jmp 0x110d39ef */
  goto L_110d39ef;
L_110d39eb:;
  /* 110d39eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110d39ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_110d39ef:;
  /* 110d39ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d39f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d39f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d39f5 je 0x110d3a01 */
  if (C.zf) goto L_110d3a01;
L_110d39f7:;
  /* 110d39f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110d39f9:;
  /* 110d39f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 110d39fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d39fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d39ff jne 0x110d39f9 */
  if (!C.zf) goto L_110d39f9;
L_110d3a01:;
  /* 110d3a01 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 110d3a04 jne 0x110d398b */
  if (!C.zf) goto L_110d398b;
L_110d3a06:;
  /* 110d3a06 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110d3a0a pop ebx */
  EBX = (pop32());
  /* 110d3a0b pop esi */
  ESI = (pop32());
  /* 110d3a0c pop edi */
  EDI = (pop32());
  /* 110d3a0d ret  */
  ESPCHK(0x110d3910u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x110d3a10 (88 bytes, 40 insns) */
void f_110d3a10(void) {
  FTRACE(0x110d3a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3a10 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 110d3a14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d3a18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110d3a1a je 0x110d3a63 */
  if (C.zf) goto L_110d3a63;
  /* 110d3a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d3a1e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 110d3a22 push edi */
  push32((uint32_t)(EDI));
  /* 110d3a23 mov edi, ecx */
  EDI = (ECX);
  /* 110d3a25 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3a28 jb 0x110d3a57 */
  if (C.cf) goto L_110d3a57;
  /* 110d3a2a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110d3a2c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110d3a2f je 0x110d3a39 */
  if (C.zf) goto L_110d3a39;
  /* 110d3a31 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_110d3a33:;
  /* 110d3a33 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3a35 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d3a36 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d3a37 jne 0x110d3a33 */
  if (!C.zf) goto L_110d3a33;
L_110d3a39:;
  /* 110d3a39 mov ecx, eax */
  ECX = (EAX);
  /* 110d3a3b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110d3a3e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3a40 mov ecx, eax */
  ECX = (EAX);
  /* 110d3a42 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 110d3a45 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3a47 mov ecx, edx */
  ECX = (EDX);
  /* 110d3a49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110d3a4c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d3a4f je 0x110d3a57 */
  if (C.zf) goto L_110d3a57;
  /* 110d3a51 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110d3a53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110d3a55 je 0x110d3a5d */
  if (C.zf) goto L_110d3a5d;
L_110d3a57:;
  /* 110d3a57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3a59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d3a5a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110d3a5b jne 0x110d3a57 */
  if (!C.zf) goto L_110d3a57;
L_110d3a5d:;
  /* 110d3a5d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d3a61 pop edi */
  EDI = (pop32());
  /* 110d3a62 ret  */
  ESPCHK(0x110d3a10u, _esp0);
  ESP += 4; return;
L_110d3a63:;
  /* 110d3a63 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d3a67 ret  */
  ESPCHK(0x110d3a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a68 @ 0x110d3a68 (27 bytes, 13 insns) */
void f_110d3a68(void) {
  FTRACE(0x110d3a68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3a68 mov eax, dword ptr [0x110d6928] */
  EAX = (r32((uint32_t)(0x110d6928)));
  /* 110d3a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3a6f je 0x110d3a80 */
  if (C.zf) goto L_110d3a80;
  /* 110d3a71 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110d3a75 call eax */
  call_ind((uint32_t)(EAX), 0x110d3a77u);
  /* 110d3a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3a79 pop ecx */
  ECX = (pop32());
  /* 110d3a7a je 0x110d3a80 */
  if (C.zf) goto L_110d3a80;
  /* 110d3a7c push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3a7e pop eax */
  EAX = (pop32());
  /* 110d3a7f ret  */
  ESPCHK(0x110d3a68u, _esp0);
  ESP += 4; return;
L_110d3a80:;
  /* 110d3a80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110d3a82 ret  */
  ESPCHK(0x110d3a68u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a83 @ 0x110d3a83 (511 bytes, 193 insns) */
void f_110d3a83(void) {
  FTRACE(0x110d3a83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3a83 push ebp */
  push32((uint32_t)(EBP));
  /* 110d3a84 mov ebp, esp */
  EBP = (ESP);
  /* 110d3a86 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110d3a88 push 0x110d5448 */
  push32((uint32_t)(0x110d5448u));
  /* 110d3a8d push 0x110d4250 */
  push32((uint32_t)(0x110d4250u));
  /* 110d3a92 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110d3a98 push eax */
  push32((uint32_t)(EAX));
  /* 110d3a99 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110d3aa0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3aa3 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3aa4 push esi */
  push32((uint32_t)(ESI));
  /* 110d3aa5 push edi */
  push32((uint32_t)(EDI));
  /* 110d3aa6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110d3aa9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110d3aab cmp dword ptr [0x110d6950], edi */
  { uint32_t _a=(r32((uint32_t)(0x110d6950))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3ab1 jne 0x110d3af9 */
  if (!C.zf) goto L_110d3af9;
  /* 110d3ab3 push edi */
  push32((uint32_t)(EDI));
  /* 110d3ab4 push edi */
  push32((uint32_t)(EDI));
  /* 110d3ab5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3ab7 pop ebx */
  EBX = (pop32());
  /* 110d3ab8 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3ab9 push 0x110d5440 */
  push32((uint32_t)(0x110d5440u));
  /* 110d3abe mov esi, 0x100 */
  ESI = (0x100u);
  /* 110d3ac3 push esi */
  push32((uint32_t)(ESI));
  /* 110d3ac4 push edi */
  push32((uint32_t)(EDI));
  /* 110d3ac5 call dword ptr [0x110d5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5010))), 0x110d3acbu);
  /* 110d3acb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3acd je 0x110d3ad7 */
  if (C.zf) goto L_110d3ad7;
  /* 110d3acf mov dword ptr [0x110d6950], ebx */
  w32((uint32_t)(0x110d6950), (EBX));
  /* 110d3ad5 jmp 0x110d3af9 */
  goto L_110d3af9;
L_110d3ad7:;
  /* 110d3ad7 push edi */
  push32((uint32_t)(EDI));
  /* 110d3ad8 push edi */
  push32((uint32_t)(EDI));
  /* 110d3ad9 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3ada push 0x110d543c */
  push32((uint32_t)(0x110d543cu));
  /* 110d3adf push esi */
  push32((uint32_t)(ESI));
  /* 110d3ae0 push edi */
  push32((uint32_t)(EDI));
  /* 110d3ae1 call dword ptr [0x110d5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5014))), 0x110d3ae7u);
  /* 110d3ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3ae9 je 0x110d3c11 */
  if (C.zf) goto L_110d3c11;
  /* 110d3aef mov dword ptr [0x110d6950], 2 */
  w32((uint32_t)(0x110d6950), (0x2u));
L_110d3af9:;
  /* 110d3af9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3afc jle 0x110d3b0e */
  if ((C.zf||C.sf!=C.of)) goto L_110d3b0e;
  /* 110d3afe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110d3b01 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110d3b04 call 0x110d3ca7 */
  push32(0x110d3b09u); f_110d3ca7();
  /* 110d3b09 pop ecx */
  ECX = (pop32());
  /* 110d3b0a pop ecx */
  ECX = (pop32());
  /* 110d3b0b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_110d3b0e:;
  /* 110d3b0e mov eax, dword ptr [0x110d6950] */
  EAX = (r32((uint32_t)(0x110d6950)));
  /* 110d3b13 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3b16 jne 0x110d3b35 */
  if (!C.zf) goto L_110d3b35;
  /* 110d3b18 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 110d3b1b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 110d3b1e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110d3b21 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110d3b24 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110d3b27 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110d3b2a call dword ptr [0x110d5014] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5014))), 0x110d3b30u);
  /* 110d3b30 jmp 0x110d3c13 */
  goto L_110d3c13;
L_110d3b35:;
  /* 110d3b35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3b38 jne 0x110d3c11 */
  if (!C.zf) goto L_110d3c11;
  /* 110d3b3e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3b41 jne 0x110d3b4b */
  if (!C.zf) goto L_110d3b4b;
  /* 110d3b43 mov eax, dword ptr [0x110d6948] */
  EAX = (r32((uint32_t)(0x110d6948)));
  /* 110d3b48 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_110d3b4b:;
  /* 110d3b4b push edi */
  push32((uint32_t)(EDI));
  /* 110d3b4c push edi */
  push32((uint32_t)(EDI));
  /* 110d3b4d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110d3b50 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110d3b53 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 110d3b56 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110d3b58 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3b5a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 110d3b5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d3b5e push eax */
  push32((uint32_t)(EAX));
  /* 110d3b5f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 110d3b62 call dword ptr [0x110d5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5018))), 0x110d3b68u);
  /* 110d3b68 mov ebx, eax */
  EBX = (EAX);
  /* 110d3b6a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 110d3b6d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3b6f je 0x110d3c11 */
  if (C.zf) goto L_110d3c11;
  /* 110d3b75 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 110d3b78 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 110d3b7b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3b7e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110d3b80 call 0x110d4330 */
  push32(0x110d3b85u); f_110d4330();
  /* 110d3b85 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110d3b88 mov eax, esp */
  EAX = (ESP);
  /* 110d3b8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110d3b8d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110d3b91 jmp 0x110d3ba6 */
  goto L_110d3ba6;
  /* 110d3b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3b95 pop eax */
  EAX = (pop32());
  /* 110d3b96 ret  */
  ESPCHK(0x110d3a83u, _esp0);
  ESP += 4; return;
  /* 110d3b97 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110d3b9a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110d3b9c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 110d3b9f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110d3ba3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_110d3ba6:;
  /* 110d3ba6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3ba9 je 0x110d3c11 */
  if (C.zf) goto L_110d3c11;
  /* 110d3bab push ebx */
  push32((uint32_t)(EBX));
  /* 110d3bac push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 110d3baf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110d3bb2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110d3bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3bb7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 110d3bba call dword ptr [0x110d5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5018))), 0x110d3bc0u);
  /* 110d3bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3bc2 je 0x110d3c11 */
  if (C.zf) goto L_110d3c11;
  /* 110d3bc4 push edi */
  push32((uint32_t)(EDI));
  /* 110d3bc5 push edi */
  push32((uint32_t)(EDI));
  /* 110d3bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3bc7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 110d3bca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110d3bcd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110d3bd0 call dword ptr [0x110d5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5010))), 0x110d3bd6u);
  /* 110d3bd6 mov esi, eax */
  ESI = (EAX);
  /* 110d3bd8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 110d3bdb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3bdd je 0x110d3c11 */
  if (C.zf) goto L_110d3c11;
  /* 110d3bdf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 110d3be3 je 0x110d3c25 */
  if (C.zf) goto L_110d3c25;
  /* 110d3be5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3be8 je 0x110d3ca0 */
  if (C.zf) goto L_110d3ca0;
  /* 110d3bee cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3bf1 jg 0x110d3c11 */
  if ((!C.zf&&C.sf==C.of)) goto L_110d3c11;
  /* 110d3bf3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 110d3bf6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 110d3bf9 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3bfa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 110d3bfd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110d3c00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110d3c03 call dword ptr [0x110d5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5010))), 0x110d3c09u);
  /* 110d3c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3c0b jne 0x110d3ca0 */
  if (!C.zf) goto L_110d3ca0;
L_110d3c11:;
  /* 110d3c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110d3c13:;
  /* 110d3c13 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 110d3c16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110d3c19 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110d3c20 pop edi */
  EDI = (pop32());
  /* 110d3c21 pop esi */
  ESI = (pop32());
  /* 110d3c22 pop ebx */
  EBX = (pop32());
  /* 110d3c23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d3c24 ret  */
  ESPCHK(0x110d3a83u, _esp0);
  ESP += 4; return;
L_110d3c25:;
  /* 110d3c25 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110d3c2c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 110d3c2f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3c32 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110d3c34 call 0x110d4330 */
  push32(0x110d3c39u); f_110d4330();
  /* 110d3c39 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110d3c3c mov ebx, esp */
  EBX = (ESP);
  /* 110d3c3e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 110d3c41 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110d3c45 jmp 0x110d3c59 */
  goto L_110d3c59;
  /* 110d3c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3c49 pop eax */
  EAX = (pop32());
  /* 110d3c4a ret  */
  ESPCHK(0x110d3a83u, _esp0);
  ESP += 4; return;
  /* 110d3c4b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110d3c4e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110d3c50 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110d3c52 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110d3c56 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_110d3c59:;
  /* 110d3c59 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3c5b je 0x110d3c11 */
  if (C.zf) goto L_110d3c11;
  /* 110d3c5d push esi */
  push32((uint32_t)(ESI));
  /* 110d3c5e push ebx */
  push32((uint32_t)(EBX));
  /* 110d3c5f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 110d3c62 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 110d3c65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110d3c68 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110d3c6b call dword ptr [0x110d5010] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5010))), 0x110d3c71u);
  /* 110d3c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3c73 je 0x110d3c11 */
  if (C.zf) goto L_110d3c11;
  /* 110d3c75 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3c78 push edi */
  push32((uint32_t)(EDI));
  /* 110d3c79 push edi */
  push32((uint32_t)(EDI));
  /* 110d3c7a jne 0x110d3c80 */
  if (!C.zf) goto L_110d3c80;
  /* 110d3c7c push edi */
  push32((uint32_t)(EDI));
  /* 110d3c7d push edi */
  push32((uint32_t)(EDI));
  /* 110d3c7e jmp 0x110d3c86 */
  goto L_110d3c86;
L_110d3c80:;
  /* 110d3c80 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 110d3c83 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_110d3c86:;
  /* 110d3c86 push esi */
  push32((uint32_t)(ESI));
  /* 110d3c87 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3c88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 110d3c8d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 110d3c90 call dword ptr [0x110d5098] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5098))), 0x110d3c96u);
  /* 110d3c96 mov esi, eax */
  ESI = (EAX);
  /* 110d3c98 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3c9a je 0x110d3c11 */
  if (C.zf) goto L_110d3c11;
L_110d3ca0:;
  /* 110d3ca0 mov eax, esi */
  EAX = (ESI);
  /* 110d3ca2 jmp 0x110d3c13 */
  goto L_110d3c13;
}

/* FUN_10003ca7 @ 0x110d3ca7 (43 bytes, 20 insns) */
void f_110d3ca7(void) {
  FTRACE(0x110d3ca7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3ca7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d3cab mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110d3caf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110d3cb1 push esi */
  push32((uint32_t)(ESI));
  /* 110d3cb2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 110d3cb5 je 0x110d3cc4 */
  if (C.zf) goto L_110d3cc4;
L_110d3cb7:;
  /* 110d3cb7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d3cba je 0x110d3cc4 */
  if (C.zf) goto L_110d3cc4;
  /* 110d3cbc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d3cbd mov esi, ecx */
  ESI = (ECX);
  /* 110d3cbf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110d3cc0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110d3cc2 jne 0x110d3cb7 */
  if (!C.zf) goto L_110d3cb7;
L_110d3cc4:;
  /* 110d3cc4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110d3cc7 pop esi */
  ESI = (pop32());
  /* 110d3cc8 jne 0x110d3ccf */
  if (!C.zf) goto L_110d3ccf;
  /* 110d3cca sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3cce ret  */
  ESPCHK(0x110d3ca7u, _esp0);
  ESP += 4; return;
L_110d3ccf:;
  /* 110d3ccf mov eax, edx */
  EAX = (EDX);
  /* 110d3cd1 ret  */
  ESPCHK(0x110d3ca7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd2 @ 0x110d3cd2 (318 bytes, 123 insns) */
void f_110d3cd2(void) {
  FTRACE(0x110d3cd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3cd2 push ebp */
  push32((uint32_t)(EBP));
  /* 110d3cd3 mov ebp, esp */
  EBP = (ESP);
  /* 110d3cd5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110d3cd7 push 0x110d5460 */
  push32((uint32_t)(0x110d5460u));
  /* 110d3cdc push 0x110d4250 */
  push32((uint32_t)(0x110d4250u));
  /* 110d3ce1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110d3ce7 push eax */
  push32((uint32_t)(EAX));
  /* 110d3ce8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110d3cef sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3cf2 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3cf3 push esi */
  push32((uint32_t)(ESI));
  /* 110d3cf4 push edi */
  push32((uint32_t)(EDI));
  /* 110d3cf5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110d3cf8 mov eax, dword ptr [0x110d6954] */
  EAX = (r32((uint32_t)(0x110d6954)));
  /* 110d3cfd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110d3cff cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3d01 jne 0x110d3d41 */
  if (!C.zf) goto L_110d3d41;
  /* 110d3d03 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 110d3d06 push eax */
  push32((uint32_t)(EAX));
  /* 110d3d07 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3d09 pop esi */
  ESI = (pop32());
  /* 110d3d0a push esi */
  push32((uint32_t)(ESI));
  /* 110d3d0b push 0x110d5440 */
  push32((uint32_t)(0x110d5440u));
  /* 110d3d10 push esi */
  push32((uint32_t)(ESI));
  /* 110d3d11 call dword ptr [0x110d5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5008))), 0x110d3d17u);
  /* 110d3d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3d19 je 0x110d3d1f */
  if (C.zf) goto L_110d3d1f;
  /* 110d3d1b mov eax, esi */
  EAX = (ESI);
  /* 110d3d1d jmp 0x110d3d3c */
  goto L_110d3d3c;
L_110d3d1f:;
  /* 110d3d1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 110d3d22 push eax */
  push32((uint32_t)(EAX));
  /* 110d3d23 push esi */
  push32((uint32_t)(ESI));
  /* 110d3d24 push 0x110d543c */
  push32((uint32_t)(0x110d543cu));
  /* 110d3d29 push esi */
  push32((uint32_t)(ESI));
  /* 110d3d2a push ebx */
  push32((uint32_t)(EBX));
  /* 110d3d2b call dword ptr [0x110d500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d500c))), 0x110d3d31u);
  /* 110d3d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110d3d33 je 0x110d3e07 */
  if (C.zf) goto L_110d3e07;
  /* 110d3d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 110d3d3b pop eax */
  EAX = (pop32());
L_110d3d3c:;
  /* 110d3d3c mov dword ptr [0x110d6954], eax */
  w32((uint32_t)(0x110d6954), (EAX));
L_110d3d41:;
  /* 110d3d41 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3d44 jne 0x110d3d6a */
  if (!C.zf) goto L_110d3d6a;
  /* 110d3d46 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 110d3d49 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3d4b jne 0x110d3d52 */
  if (!C.zf) goto L_110d3d52;
  /* 110d3d4d mov eax, dword ptr [0x110d6938] */
  EAX = (r32((uint32_t)(0x110d6938)));
L_110d3d52:;
  /* 110d3d52 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110d3d55 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110d3d58 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110d3d5b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110d3d5e push eax */
  push32((uint32_t)(EAX));
  /* 110d3d5f call dword ptr [0x110d500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d500c))), 0x110d3d65u);
  /* 110d3d65 jmp 0x110d3e09 */
  goto L_110d3e09;
L_110d3d6a:;
  /* 110d3d6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3d6d jne 0x110d3e07 */
  if (!C.zf) goto L_110d3e07;
  /* 110d3d73 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3d76 jne 0x110d3d80 */
  if (!C.zf) goto L_110d3d80;
  /* 110d3d78 mov eax, dword ptr [0x110d6948] */
  EAX = (r32((uint32_t)(0x110d6948)));
  /* 110d3d7d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_110d3d80:;
  /* 110d3d80 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3d81 push ebx */
  push32((uint32_t)(EBX));
  /* 110d3d82 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110d3d85 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110d3d88 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 110d3d8b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110d3d8d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3d8f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 110d3d92 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d3d93 push eax */
  push32((uint32_t)(EAX));
  /* 110d3d94 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 110d3d97 call dword ptr [0x110d5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5018))), 0x110d3d9du);
  /* 110d3d9d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 110d3da0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3da2 je 0x110d3e07 */
  if (C.zf) goto L_110d3e07;
  /* 110d3da4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 110d3da7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 110d3daa mov eax, edi */
  EAX = (EDI);
  /* 110d3dac add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3daf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110d3db1 call 0x110d4330 */
  push32(0x110d3db6u); f_110d4330();
  /* 110d3db6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 110d3db9 mov esi, esp */
  ESI = (ESP);
  /* 110d3dbb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 110d3dbe push edi */
  push32((uint32_t)(EDI));
  /* 110d3dbf push ebx */
  push32((uint32_t)(EBX));
  /* 110d3dc0 push esi */
  push32((uint32_t)(ESI));
  /* 110d3dc1 call 0x110d3a10 */
  push32(0x110d3dc6u); f_110d3a10();
  /* 110d3dc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3dc9 jmp 0x110d3dd6 */
  goto L_110d3dd6;
  /* 110d3dcb push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3dcd pop eax */
  EAX = (pop32());
  /* 110d3dce ret  */
  ESPCHK(0x110d3cd2u, _esp0);
  ESP += 4; return;
  /* 110d3dcf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 110d3dd2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110d3dd4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_110d3dd6:;
  /* 110d3dd6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110d3dda cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3ddc je 0x110d3e07 */
  if (C.zf) goto L_110d3e07;
  /* 110d3dde push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 110d3de1 push esi */
  push32((uint32_t)(ESI));
  /* 110d3de2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110d3de5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110d3de8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110d3dea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 110d3ded call dword ptr [0x110d5018] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5018))), 0x110d3df3u);
  /* 110d3df3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3df5 je 0x110d3e07 */
  if (C.zf) goto L_110d3e07;
  /* 110d3df7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110d3dfa push eax */
  push32((uint32_t)(EAX));
  /* 110d3dfb push esi */
  push32((uint32_t)(ESI));
  /* 110d3dfc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110d3dff call dword ptr [0x110d5008] */
  call_ind((uint32_t)(r32((uint32_t)(0x110d5008))), 0x110d3e05u);
  /* 110d3e05 jmp 0x110d3e09 */
  goto L_110d3e09;
L_110d3e07:;
  /* 110d3e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110d3e09:;
  /* 110d3e09 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 110d3e0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110d3e0f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 110d3e16 pop edi */
  EDI = (pop32());
  /* 110d3e17 pop esi */
  ESI = (pop32());
  /* 110d3e18 pop ebx */
  EBX = (pop32());
  /* 110d3e19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d3e1a ret  */
  ESPCHK(0x110d3cd2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e20 @ 0x110d3e20 (664 bytes, 261 insns) [15 switch table(s)] */
void f_110d3e20(void) {
  FTRACE(0x110d3e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d3e20 push ebp */
  push32((uint32_t)(EBP));
  /* 110d3e21 mov ebp, esp */
  EBP = (ESP);
  /* 110d3e23 push edi */
  push32((uint32_t)(EDI));
  /* 110d3e24 push esi */
  push32((uint32_t)(ESI));
  /* 110d3e25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110d3e28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110d3e2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3e2e mov eax, ecx */
  EAX = (ECX);
  /* 110d3e30 mov edx, ecx */
  EDX = (ECX);
  /* 110d3e32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3e34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3e36 jbe 0x110d3e40 */
  if ((C.cf||C.zf)) goto L_110d3e40;
  /* 110d3e38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3e3a jb 0x110d3fb8 */
  if (C.cf) goto L_110d3fb8;
L_110d3e40:;
  /* 110d3e40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110d3e46 jne 0x110d3e5c */
  if (!C.zf) goto L_110d3e5c;
  /* 110d3e48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d3e4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110d3e4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3e51 jb 0x110d3e7c */
  if (C.cf) goto L_110d3e7c;
  /* 110d3e53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d3e55 jmp dword ptr [edx*4 + 0x110d3f68] */
  switch (EDX) {
    case 0: goto L_110d3f78;
    case 1: goto L_110d3f80;
    case 2: goto L_110d3f8c;
    case 3: goto L_110d3fa0;
    default: x86_unimpl("switch@0x110d3e55 out of table"); return;
  }
L_110d3e5c:;
  /* 110d3e5c mov eax, edi */
  EAX = (EDI);
  /* 110d3e5e mov edx, 3 */
  EDX = (0x3u);
  /* 110d3e63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3e66 jb 0x110d3e74 */
  if (C.cf) goto L_110d3e74;
  /* 110d3e68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110d3e6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3e6d jmp dword ptr [eax*4 + 0x110d3e80] */
  switch (EAX) {
    case 1: goto L_110d3e90;
    case 2: goto L_110d3ebc;
    case 3: goto L_110d3ee0;
    default: x86_unimpl("switch@0x110d3e6d out of table"); return;
  }
L_110d3e74:;
  /* 110d3e74 jmp dword ptr [ecx*4 + 0x110d3f78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x110d3f78)))); return;
  /* 110d3e7b nop  */
  /* nop */
L_110d3e7c:;
  /* 110d3e7c jmp dword ptr [ecx*4 + 0x110d3efc] */
  switch (ECX) {
    case 0: goto L_110d3f5f;
    case 1: goto L_110d3f4c;
    case 2: goto L_110d3f44;
    case 3: goto L_110d3f3c;
    case 4: goto L_110d3f34;
    case 5: goto L_110d3f2c;
    case 6: goto L_110d3f24;
    case 7: goto L_110d3f1c;
    default: x86_unimpl("switch@0x110d3e7c out of table"); return;
  }
  /* 110d3e83 nop  */
  /* nop */
L_110d3e90:;
  /* 110d3e90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d3e92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d3e94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3e96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d3e99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d3e9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d3e9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d3ea2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d3ea5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3ea8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3eab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3eae jb 0x110d3e7c */
  if (C.cf) goto L_110d3e7c;
  /* 110d3eb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d3eb2 jmp dword ptr [edx*4 + 0x110d3f68] */
  switch (EDX) {
    case 0: goto L_110d3f78;
    case 1: goto L_110d3f80;
    case 2: goto L_110d3f8c;
    case 3: goto L_110d3fa0;
    default: x86_unimpl("switch@0x110d3eb2 out of table"); return;
  }
  /* 110d3eb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d3ebc:;
  /* 110d3ebc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d3ebe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d3ec0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3ec2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d3ec5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d3ec8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d3ecb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3ece add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3ed1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3ed4 jb 0x110d3e7c */
  if (C.cf) goto L_110d3e7c;
  /* 110d3ed6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d3ed8 jmp dword ptr [edx*4 + 0x110d3f68] */
  switch (EDX) {
    case 0: goto L_110d3f78;
    case 1: goto L_110d3f80;
    case 2: goto L_110d3f8c;
    case 3: goto L_110d3fa0;
    default: x86_unimpl("switch@0x110d3ed8 out of table"); return;
  }
  /* 110d3edf nop  */
  /* nop */
L_110d3ee0:;
  /* 110d3ee0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d3ee2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d3ee4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3ee6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110d3ee7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d3eea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110d3eeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3eee jb 0x110d3e7c */
  if (C.cf) goto L_110d3e7c;
  /* 110d3ef0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d3ef2 jmp dword ptr [edx*4 + 0x110d3f68] */
  switch (EDX) {
    case 0: goto L_110d3f78;
    case 1: goto L_110d3f80;
    case 2: goto L_110d3f8c;
    case 3: goto L_110d3fa0;
    default: x86_unimpl("switch@0x110d3ef2 out of table"); return;
  }
  /* 110d3ef9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d3f1c:;
  /* 110d3f1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 110d3f20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_110d3f24:;
  /* 110d3f24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 110d3f28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_110d3f2c:;
  /* 110d3f2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 110d3f30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_110d3f34:;
  /* 110d3f34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 110d3f38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_110d3f3c:;
  /* 110d3f3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 110d3f40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_110d3f44:;
  /* 110d3f44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 110d3f48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_110d3f4c:;
  /* 110d3f4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 110d3f50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 110d3f54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110d3f5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d3f5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110d3f5f:;
  /* 110d3f5f jmp dword ptr [edx*4 + 0x110d3f68] */
  switch (EDX) {
    case 0: goto L_110d3f78;
    case 1: goto L_110d3f80;
    case 2: goto L_110d3f8c;
    case 3: goto L_110d3fa0;
    default: x86_unimpl("switch@0x110d3f5f out of table"); return;
  }
  /* 110d3f66 mov edi, edi */
  EDI = (EDI);
L_110d3f78:;
  /* 110d3f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3f7b pop esi */
  ESI = (pop32());
  /* 110d3f7c pop edi */
  EDI = (pop32());
  /* 110d3f7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d3f7e ret  */
  ESPCHK(0x110d3e20u, _esp0);
  ESP += 4; return;
  /* 110d3f7f nop  */
  /* nop */
L_110d3f80:;
  /* 110d3f80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d3f82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3f87 pop esi */
  ESI = (pop32());
  /* 110d3f88 pop edi */
  EDI = (pop32());
  /* 110d3f89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d3f8a ret  */
  ESPCHK(0x110d3e20u, _esp0);
  ESP += 4; return;
  /* 110d3f8b nop  */
  /* nop */
L_110d3f8c:;
  /* 110d3f8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d3f8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3f90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d3f93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d3f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3f99 pop esi */
  ESI = (pop32());
  /* 110d3f9a pop edi */
  EDI = (pop32());
  /* 110d3f9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d3f9c ret  */
  ESPCHK(0x110d3e20u, _esp0);
  ESP += 4; return;
  /* 110d3f9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d3fa0:;
  /* 110d3fa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110d3fa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110d3fa4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d3fa7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d3faa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d3fad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d3fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d3fb3 pop esi */
  ESI = (pop32());
  /* 110d3fb4 pop edi */
  EDI = (pop32());
  /* 110d3fb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d3fb6 ret  */
  ESPCHK(0x110d3e20u, _esp0);
  ESP += 4; return;
  /* 110d3fb7 nop  */
  /* nop */
L_110d3fb8:;
  /* 110d3fb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 110d3fbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 110d3fc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110d3fc6 jne 0x110d3fec */
  if (!C.zf) goto L_110d3fec;
  /* 110d3fc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d3fcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110d3fce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3fd1 jb 0x110d3fe0 */
  if (C.cf) goto L_110d3fe0;
  /* 110d3fd3 std  */
  C.df=1;
  /* 110d3fd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d3fd6 cld  */
  C.df=0;
  /* 110d3fd7 jmp dword ptr [edx*4 + 0x110d4100] */
  switch (EDX) {
    case 0: goto L_110d4110;
    case 1: goto L_110d4118;
    case 2: goto L_110d4128;
    case 3: goto L_110d413c;
    default: x86_unimpl("switch@0x110d3fd7 out of table"); return;
  }
  /* 110d3fde mov edi, edi */
  EDI = (EDI);
L_110d3fe0:;
  /* 110d3fe0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110d3fe2 jmp dword ptr [ecx*4 + 0x110d40b0] */
  switch (ECX) {
    case 0: goto L_110d40f7;
    default: x86_unimpl("switch@0x110d3fe2 out of table"); return;
  }
  /* 110d3fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d3fec:;
  /* 110d3fec mov eax, edi */
  EAX = (EDI);
  /* 110d3fee mov edx, 3 */
  EDX = (0x3u);
  /* 110d3ff3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d3ff6 jb 0x110d4004 */
  if (C.cf) goto L_110d4004;
  /* 110d3ff8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110d3ffb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d3ffd jmp dword ptr [eax*4 + 0x110d4008] */
  switch (EAX) {
    case 1: goto L_110d4018;
    case 2: goto L_110d4038;
    case 3: goto L_110d4060;
    default: x86_unimpl("switch@0x110d3ffd out of table"); return;
  }
L_110d4004:;
  /* 110d4004 jmp dword ptr [ecx*4 + 0x110d4100] */
  switch (ECX) {
    case 0: goto L_110d4110;
    case 1: goto L_110d4118;
    case 2: goto L_110d4128;
    case 3: goto L_110d413c;
    default: x86_unimpl("switch@0x110d4004 out of table"); return;
  }
  /* 110d400b nop  */
  /* nop */
L_110d4018:;
  /* 110d4018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d401b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d401d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d4020 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110d4021 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d4024 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110d4025 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d4028 jb 0x110d3fe0 */
  if (C.cf) goto L_110d3fe0;
  /* 110d402a std  */
  C.df=1;
  /* 110d402b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d402d cld  */
  C.df=0;
  /* 110d402e jmp dword ptr [edx*4 + 0x110d4100] */
  switch (EDX) {
    case 0: goto L_110d4110;
    case 1: goto L_110d4118;
    case 2: goto L_110d4128;
    case 3: goto L_110d413c;
    default: x86_unimpl("switch@0x110d402e out of table"); return;
  }
  /* 110d4035 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d4038:;
  /* 110d4038 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d403b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d403d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d4040 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d4043 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d4046 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d4049 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d404c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d404f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d4052 jb 0x110d3fe0 */
  if (C.cf) goto L_110d3fe0;
  /* 110d4054 std  */
  C.df=1;
  /* 110d4055 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d4057 cld  */
  C.df=0;
  /* 110d4058 jmp dword ptr [edx*4 + 0x110d4100] */
  switch (EDX) {
    case 0: goto L_110d4110;
    case 1: goto L_110d4118;
    case 2: goto L_110d4128;
    case 3: goto L_110d413c;
    default: x86_unimpl("switch@0x110d4058 out of table"); return;
  }
  /* 110d405f nop  */
  /* nop */
L_110d4060:;
  /* 110d4060 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d4063 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110d4065 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d4068 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d406b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d406e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d4071 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110d4074 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d4077 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d407a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d407d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d4080 jb 0x110d3fe0 */
  if (C.cf) goto L_110d3fe0;
  /* 110d4086 std  */
  C.df=1;
  /* 110d4087 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110d4089 cld  */
  C.df=0;
  /* 110d408a jmp dword ptr [edx*4 + 0x110d4100] */
  switch (EDX) {
    case 0: goto L_110d4110;
    case 1: goto L_110d4118;
    case 2: goto L_110d4128;
    case 3: goto L_110d413c;
    default: x86_unimpl("switch@0x110d408a out of table"); return;
  }
  /* 110d4091 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 110d4094 mov ah, 0x40 */
  AH = (0x40u);
  /* 110d4096 or eax, 0xd40bc11 */
  { uint32_t _r=(EAX)|(0xd40bc11u); EAX = (_r); fl_logic(_r,32); }
  /* 110d409b adc esp, eax */
  { uint32_t _a=(ESP),_b=(EAX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d409d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d409e or eax, 0xd40cc11 */
  { uint32_t _r=(EAX)|(0xd40cc11u); EAX = (_r); fl_logic(_r,32); }
  /* 110d40a3 adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d40a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d40a6 or eax, 0xd40dc11 */
  { uint32_t _r=(EAX)|(0xd40dc11u); EAX = (_r); fl_logic(_r,32); }
  /* 110d40ab adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d40ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110d40b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 110d40b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 110d40bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 110d40c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 110d40c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 110d40c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 110d40cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 110d40d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 110d40d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 110d40d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 110d40dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 110d40e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 110d40e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 110d40e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 110d40ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110d40f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110d40f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110d40f7:;
  /* 110d40f7 jmp dword ptr [edx*4 + 0x110d4100] */
  switch (EDX) {
    case 0: goto L_110d4110;
    case 1: goto L_110d4118;
    case 2: goto L_110d4128;
    case 3: goto L_110d413c;
    default: x86_unimpl("switch@0x110d40f7 out of table"); return;
  }
  /* 110d40fe mov edi, edi */
  EDI = (EDI);
L_110d4110:;
  /* 110d4110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d4113 pop esi */
  ESI = (pop32());
  /* 110d4114 pop edi */
  EDI = (pop32());
  /* 110d4115 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d4116 ret  */
  ESPCHK(0x110d3e20u, _esp0);
  ESP += 4; return;
  /* 110d4117 nop  */
  /* nop */
L_110d4118:;
  /* 110d4118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d411b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d411e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d4121 pop esi */
  ESI = (pop32());
  /* 110d4122 pop edi */
  EDI = (pop32());
  /* 110d4123 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d4124 ret  */
  ESPCHK(0x110d3e20u, _esp0);
  ESP += 4; return;
  /* 110d4125 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110d4128:;
  /* 110d4128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d412b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d412e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d4131 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d4134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d4137 pop esi */
  ESI = (pop32());
  /* 110d4138 pop edi */
  EDI = (pop32());
  /* 110d4139 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d413a ret  */
  ESPCHK(0x110d3e20u, _esp0);
  ESP += 4; return;
  /* 110d413b nop  */
  /* nop */
L_110d413c:;
  /* 110d413c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110d413f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110d4142 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110d4145 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110d4148 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110d414b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110d414e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d4151 pop esi */
  ESI = (pop32());
  /* 110d4152 pop edi */
  EDI = (pop32());
  /* 110d4153 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110d4154 ret  */
  ESPCHK(0x110d3e20u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x110d4158 (32 bytes, 18 insns) */
void f_110d4158(void) {
  FTRACE(0x110d4158u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d4158 push ebp */
  push32((uint32_t)(EBP));
  /* 110d4159 mov ebp, esp */
  EBP = (ESP);
  /* 110d415b push ebx */
  push32((uint32_t)(EBX));
  /* 110d415c push esi */
  push32((uint32_t)(ESI));
  /* 110d415d push edi */
  push32((uint32_t)(EDI));
  /* 110d415e push ebp */
  push32((uint32_t)(EBP));
  /* 110d415f push 0 */
  push32((uint32_t)(0x0u));
  /* 110d4161 push 0 */
  push32((uint32_t)(0x0u));
  /* 110d4163 push 0x110d4170 */
  push32((uint32_t)(0x110d4170u));
  /* 110d4168 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110d416b call 0x110d4360 */
  push32(0x110d4170u); f_110d4360();
  /* 110d4170 pop ebp */
  EBP = (pop32());
  /* 110d4171 pop edi */
  EDI = (pop32());
  /* 110d4172 pop esi */
  ESI = (pop32());
  /* 110d4173 pop ebx */
  EBX = (pop32());
  /* 110d4174 mov esp, ebp */
  ESP = (EBP);
  /* 110d4176 pop ebp */
  EBP = (pop32());
  /* 110d4177 ret  */
  ESPCHK(0x110d4158u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x110d419a (104 bytes, 33 insns) */
void f_110d419a(void) {
  FTRACE(0x110d419au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d419a push ebx */
  push32((uint32_t)(EBX));
  /* 110d419b push esi */
  push32((uint32_t)(ESI));
  /* 110d419c push edi */
  push32((uint32_t)(EDI));
  /* 110d419d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110d41a1 push eax */
  push32((uint32_t)(EAX));
  /* 110d41a2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 110d41a4 push 0x110d4178 */
  push32((uint32_t)(0x110d4178u));
  /* 110d41a9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 110d41b0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_110d41b7:;
  /* 110d41b7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 110d41bb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 110d41be mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 110d41c1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d41c4 je 0x110d41f4 */
  if (C.zf) goto L_110d41f4;
  /* 110d41c6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d41ca je 0x110d41f4 */
  if (C.zf) goto L_110d41f4;
  /* 110d41cc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 110d41cf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 110d41d2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 110d41d6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 110d41d9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d41de jne 0x110d41f2 */
  if (!C.zf) goto L_110d41f2;
  /* 110d41e0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 110d41e5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 110d41e9 call 0x110d422e */
  push32(0x110d41eeu); f_110d422e();
  /* 110d41ee call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x110d41f2u);
L_110d41f2:;
  /* 110d41f2 jmp 0x110d41b7 */
  goto L_110d41b7;
L_110d41f4:;
  /* 110d41f4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 110d41fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d41fe pop edi */
  EDI = (pop32());
  /* 110d41ff pop esi */
  ESI = (pop32());
  /* 110d4200 pop ebx */
  EBX = (pop32());
  /* 110d4201 ret  */
  ESPCHK(0x110d419au, _esp0);
  ESP += 4; return;
}

/* FUN_1000422e @ 0x110d422e (24 bytes, 10 insns) */
void f_110d422e(void) {
  FTRACE(0x110d422eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d422e push ebx */
  push32((uint32_t)(EBX));
  /* 110d422f push ecx */
  push32((uint32_t)(ECX));
  /* 110d4230 mov ebx, 0x110d6600 */
  EBX = (0x110d6600u);
  /* 110d4235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110d4238 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 110d423b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 110d423e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 110d4241 pop ecx */
  ECX = (pop32());
  /* 110d4242 pop ebx */
  EBX = (pop32());
  /* 110d4243 ret 4 */
  ESPCHK(0x110d422eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000430d @ 0x110d430d (27 bytes, 11 insns) */
void f_110d430d(void) {
  FTRACE(0x110d430du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d430d push ebp */
  push32((uint32_t)(EBP));
  /* 110d430e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 110d4312 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 110d4314 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 110d4317 push eax */
  push32((uint32_t)(EAX));
  /* 110d4318 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 110d431b push eax */
  push32((uint32_t)(EAX));
  /* 110d431c call 0x110d419a */
  push32(0x110d4321u); f_110d419a();
  /* 110d4321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110d4324 pop ebp */
  EBP = (pop32());
  /* 110d4325 ret 4 */
  ESPCHK(0x110d430du, _esp0);
  ESP += 8; return;
}

/* FUN_10004330 @ 0x110d4330 (47 bytes, 17 insns) */
void f_110d4330(void) {
  FTRACE(0x110d4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d4330 push ecx */
  push32((uint32_t)(ECX));
  /* 110d4331 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d4336 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 110d433a jb 0x110d4350 */
  if (C.cf) goto L_110d4350;
L_110d433c:;
  /* 110d433c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d4342 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d4347 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 110d4349 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110d434e jae 0x110d433c */
  if (!C.cf) goto L_110d433c;
L_110d4350:;
  /* 110d4350 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110d4352 mov eax, esp */
  EAX = (ESP);
  /* 110d4354 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 110d4356 mov esp, ecx */
  ESP = (ECX);
  /* 110d4358 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110d435a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 110d435d push eax */
  push32((uint32_t)(EAX));
  /* 110d435e ret  */
  ESPCHK(0x110d4330u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x110d4360 (6 bytes, 1 insns) */
void f_110d4360(void) {
  FTRACE(0x110d4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110d4360 jmp dword ptr [0x110d5004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x110d5004)))); return;
}

