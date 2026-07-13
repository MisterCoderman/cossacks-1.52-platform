#include "recomp.h"

/* FUN_10001000 @ 0x11381000 (18 bytes, 7 insns) */
void f_11381000(void) {
  FTRACE(0x11381000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11381000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11381004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11381005 jne 0x1138100c */
  if (!C.zf) goto L_1138100c;
  /* 11381007 call 0x11381012 */
  push32(0x1138100cu); f_11381012();
L_1138100c:;
  /* 1138100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1138100e pop eax */
  EAX = (pop32());
  /* 1138100f ret 0xc */
  ESPCHK(0x11381000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11381012 (1210 bytes, 330 insns) */
void f_11381012(void) {
  FTRACE(0x11381012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11381012 push ebx */
  push32((uint32_t)(EBX));
  /* 11381013 push ebp */
  push32((uint32_t)(EBP));
  /* 11381014 push esi */
  push32((uint32_t)(ESI));
  /* 11381015 mov esi, dword ptr [0x1138612c] */
  ESI = (r32((uint32_t)(0x1138612c)));
  /* 1138101b push edi */
  push32((uint32_t)(EDI));
  /* 1138101c push 0x113871f4 */
  push32((uint32_t)(0x113871f4u));
  /* 11381021 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381023 call esi */
  call_ind((uint32_t)(ESI), 0x11381025u);
  /* 11381025 push 0x113871e8 */
  push32((uint32_t)(0x113871e8u));
  /* 1138102a push 2 */
  push32((uint32_t)(0x2u));
  /* 1138102c call esi */
  call_ind((uint32_t)(ESI), 0x1138102eu);
  /* 1138102e push 0x113871e0 */
  push32((uint32_t)(0x113871e0u));
  /* 11381033 push 3 */
  push32((uint32_t)(0x3u));
  /* 11381035 call esi */
  call_ind((uint32_t)(ESI), 0x11381037u);
  /* 11381037 push 0x113871d8 */
  push32((uint32_t)(0x113871d8u));
  /* 1138103c push 5 */
  push32((uint32_t)(0x5u));
  /* 1138103e call esi */
  call_ind((uint32_t)(ESI), 0x11381040u);
  /* 11381040 mov edi, dword ptr [0x11386130] */
  EDI = (r32((uint32_t)(0x11386130)));
  /* 11381046 push 4 */
  push32((uint32_t)(0x4u));
  /* 11381048 push 0x113875b8 */
  push32((uint32_t)(0x113875b8u));
  /* 1138104d call edi */
  call_ind((uint32_t)(EDI), 0x1138104fu);
  /* 1138104f push 4 */
  push32((uint32_t)(0x4u));
  /* 11381051 push 0x113875c0 */
  push32((uint32_t)(0x113875c0u));
  /* 11381056 call edi */
  call_ind((uint32_t)(EDI), 0x11381058u);
  /* 11381058 push 4 */
  push32((uint32_t)(0x4u));
  /* 1138105a push 0x113876e8 */
  push32((uint32_t)(0x113876e8u));
  /* 1138105f call edi */
  call_ind((uint32_t)(EDI), 0x11381061u);
  /* 11381061 mov esi, dword ptr [0x11386134] */
  ESI = (r32((uint32_t)(0x11386134)));
  /* 11381067 mov ebx, 0xfe */
  EBX = (0xfeu);
  /* 1138106c push ebx */
  push32((uint32_t)(EBX));
  /* 1138106d push 1 */
  push32((uint32_t)(0x1u));
  /* 1138106f call esi */
  call_ind((uint32_t)(ESI), 0x11381071u);
  /* 11381071 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381074 push ebx */
  push32((uint32_t)(EBX));
  /* 11381075 push 2 */
  push32((uint32_t)(0x2u));
  /* 11381077 call esi */
  call_ind((uint32_t)(ESI), 0x11381079u);
  /* 11381079 push ebx */
  push32((uint32_t)(EBX));
  /* 1138107a push 3 */
  push32((uint32_t)(0x3u));
  /* 1138107c call esi */
  call_ind((uint32_t)(ESI), 0x1138107eu);
  /* 1138107e mov esi, dword ptr [0x11386138] */
  ESI = (r32((uint32_t)(0x11386138)));
  /* 11381084 push 0x113871d4 */
  push32((uint32_t)(0x113871d4u));
  /* 11381089 push 0x11387658 */
  push32((uint32_t)(0x11387658u));
  /* 1138108e call esi */
  call_ind((uint32_t)(ESI), 0x11381090u);
  /* 11381090 push 0x113871d0 */
  push32((uint32_t)(0x113871d0u));
  /* 11381095 push 0x11387668 */
  push32((uint32_t)(0x11387668u));
  /* 1138109a call esi */
  call_ind((uint32_t)(ESI), 0x1138109cu);
  /* 1138109c push 0x113871cc */
  push32((uint32_t)(0x113871ccu));
  /* 113810a1 push 0x11387730 */
  push32((uint32_t)(0x11387730u));
  /* 113810a6 call esi */
  call_ind((uint32_t)(ESI), 0x113810a8u);
  /* 113810a8 push 0x113871c8 */
  push32((uint32_t)(0x113871c8u));
  /* 113810ad push 0x11387700 */
  push32((uint32_t)(0x11387700u));
  /* 113810b2 call esi */
  call_ind((uint32_t)(ESI), 0x113810b4u);
  /* 113810b4 push 0x113871c4 */
  push32((uint32_t)(0x113871c4u));
  /* 113810b9 push 0x11387740 */
  push32((uint32_t)(0x11387740u));
  /* 113810be call esi */
  call_ind((uint32_t)(ESI), 0x113810c0u);
  /* 113810c0 push 0x113871c0 */
  push32((uint32_t)(0x113871c0u));
  /* 113810c5 push 0x11387708 */
  push32((uint32_t)(0x11387708u));
  /* 113810ca call esi */
  call_ind((uint32_t)(ESI), 0x113810ccu);
  /* 113810cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113810cf push 0x113871bc */
  push32((uint32_t)(0x113871bcu));
  /* 113810d4 push 0x11387750 */
  push32((uint32_t)(0x11387750u));
  /* 113810d9 call esi */
  call_ind((uint32_t)(ESI), 0x113810dbu);
  /* 113810db push 0x113871b8 */
  push32((uint32_t)(0x113871b8u));
  /* 113810e0 push 0x11387710 */
  push32((uint32_t)(0x11387710u));
  /* 113810e5 call esi */
  call_ind((uint32_t)(ESI), 0x113810e7u);
  /* 113810e7 push 0x113871b4 */
  push32((uint32_t)(0x113871b4u));
  /* 113810ec push 0x11387758 */
  push32((uint32_t)(0x11387758u));
  /* 113810f1 call esi */
  call_ind((uint32_t)(ESI), 0x113810f3u);
  /* 113810f3 push 0x113871b0 */
  push32((uint32_t)(0x113871b0u));
  /* 113810f8 push 0x11387720 */
  push32((uint32_t)(0x11387720u));
  /* 113810fd call esi */
  call_ind((uint32_t)(ESI), 0x113810ffu);
  /* 113810ff push 0x113871ac */
  push32((uint32_t)(0x113871acu));
  /* 11381104 push 0x11387768 */
  push32((uint32_t)(0x11387768u));
  /* 11381109 call esi */
  call_ind((uint32_t)(ESI), 0x1138110bu);
  /* 1138110b push 0x113871a8 */
  push32((uint32_t)(0x113871a8u));
  /* 11381110 push 0x11387728 */
  push32((uint32_t)(0x11387728u));
  /* 11381115 call esi */
  call_ind((uint32_t)(ESI), 0x11381117u);
  /* 11381117 push 0x113871a4 */
  push32((uint32_t)(0x113871a4u));
  /* 1138111c push 0x11387778 */
  push32((uint32_t)(0x11387778u));
  /* 11381121 call esi */
  call_ind((uint32_t)(ESI), 0x11381123u);
  /* 11381123 push 0x113871a0 */
  push32((uint32_t)(0x113871a0u));
  /* 11381128 push 0x11387738 */
  push32((uint32_t)(0x11387738u));
  /* 1138112d call esi */
  call_ind((uint32_t)(ESI), 0x1138112fu);
  /* 1138112f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381132 push 0x1138719c */
  push32((uint32_t)(0x1138719cu));
  /* 11381137 push 0x11387788 */
  push32((uint32_t)(0x11387788u));
  /* 1138113c call esi */
  call_ind((uint32_t)(ESI), 0x1138113eu);
  /* 1138113e push 0x11387198 */
  push32((uint32_t)(0x11387198u));
  /* 11381143 push 0x11387748 */
  push32((uint32_t)(0x11387748u));
  /* 11381148 call esi */
  call_ind((uint32_t)(ESI), 0x1138114au);
  /* 1138114a push 0x11387194 */
  push32((uint32_t)(0x11387194u));
  /* 1138114f push 0x11387670 */
  push32((uint32_t)(0x11387670u));
  /* 11381154 call esi */
  call_ind((uint32_t)(ESI), 0x11381156u);
  /* 11381156 push 0x11387190 */
  push32((uint32_t)(0x11387190u));
  /* 1138115b push 0x11387678 */
  push32((uint32_t)(0x11387678u));
  /* 11381160 call esi */
  call_ind((uint32_t)(ESI), 0x11381162u);
  /* 11381162 push 0x1138718c */
  push32((uint32_t)(0x1138718cu));
  /* 11381167 push 0x113877a8 */
  push32((uint32_t)(0x113877a8u));
  /* 1138116c call esi */
  call_ind((uint32_t)(ESI), 0x1138116eu);
  /* 1138116e push 0x11387188 */
  push32((uint32_t)(0x11387188u));
  /* 11381173 push 0x11387760 */
  push32((uint32_t)(0x11387760u));
  /* 11381178 call esi */
  call_ind((uint32_t)(ESI), 0x1138117au);
  /* 1138117a push 0x11387184 */
  push32((uint32_t)(0x11387184u));
  /* 1138117f push 0x113877b8 */
  push32((uint32_t)(0x113877b8u));
  /* 11381184 call esi */
  call_ind((uint32_t)(ESI), 0x11381186u);
  /* 11381186 push 0x11387180 */
  push32((uint32_t)(0x11387180u));
  /* 1138118b push 0x11387770 */
  push32((uint32_t)(0x11387770u));
  /* 11381190 call esi */
  call_ind((uint32_t)(ESI), 0x11381192u);
  /* 11381192 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381195 push 0x1138717c */
  push32((uint32_t)(0x1138717cu));
  /* 1138119a push 0x113877c0 */
  push32((uint32_t)(0x113877c0u));
  /* 1138119f call esi */
  call_ind((uint32_t)(ESI), 0x113811a1u);
  /* 113811a1 push 0x11387178 */
  push32((uint32_t)(0x11387178u));
  /* 113811a6 push 0x11387780 */
  push32((uint32_t)(0x11387780u));
  /* 113811ab call esi */
  call_ind((uint32_t)(ESI), 0x113811adu);
  /* 113811ad push 0x11387174 */
  push32((uint32_t)(0x11387174u));
  /* 113811b2 push 0x113877c8 */
  push32((uint32_t)(0x113877c8u));
  /* 113811b7 call esi */
  call_ind((uint32_t)(ESI), 0x113811b9u);
  /* 113811b9 push 0x11387170 */
  push32((uint32_t)(0x11387170u));
  /* 113811be push 0x11387790 */
  push32((uint32_t)(0x11387790u));
  /* 113811c3 call esi */
  call_ind((uint32_t)(ESI), 0x113811c5u);
  /* 113811c5 push 0x1138716c */
  push32((uint32_t)(0x1138716cu));
  /* 113811ca push 0x113877d8 */
  push32((uint32_t)(0x113877d8u));
  /* 113811cf call esi */
  call_ind((uint32_t)(ESI), 0x113811d1u);
  /* 113811d1 push 0x11387168 */
  push32((uint32_t)(0x11387168u));
  /* 113811d6 push 0x11387798 */
  push32((uint32_t)(0x11387798u));
  /* 113811db call esi */
  call_ind((uint32_t)(ESI), 0x113811ddu);
  /* 113811dd push 0x11387164 */
  push32((uint32_t)(0x11387164u));
  /* 113811e2 push 0x113877e8 */
  push32((uint32_t)(0x113877e8u));
  /* 113811e7 call esi */
  call_ind((uint32_t)(ESI), 0x113811e9u);
  /* 113811e9 push 0x11387160 */
  push32((uint32_t)(0x11387160u));
  /* 113811ee push 0x113877a0 */
  push32((uint32_t)(0x113877a0u));
  /* 113811f3 call esi */
  call_ind((uint32_t)(ESI), 0x113811f5u);
  /* 113811f5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113811f8 push 0x1138715c */
  push32((uint32_t)(0x1138715cu));
  /* 113811fd push 0x113877f8 */
  push32((uint32_t)(0x113877f8u));
  /* 11381202 call esi */
  call_ind((uint32_t)(ESI), 0x11381204u);
  /* 11381204 push 0x11387158 */
  push32((uint32_t)(0x11387158u));
  /* 11381209 push 0x113877b0 */
  push32((uint32_t)(0x113877b0u));
  /* 1138120e call esi */
  call_ind((uint32_t)(ESI), 0x11381210u);
  /* 11381210 push 0x11387154 */
  push32((uint32_t)(0x11387154u));
  /* 11381215 push 0x11387680 */
  push32((uint32_t)(0x11387680u));
  /* 1138121a call esi */
  call_ind((uint32_t)(ESI), 0x1138121cu);
  /* 1138121c push 0x11387150 */
  push32((uint32_t)(0x11387150u));
  /* 11381221 push 0x11387690 */
  push32((uint32_t)(0x11387690u));
  /* 11381226 call esi */
  call_ind((uint32_t)(ESI), 0x11381228u);
  /* 11381228 push 0x1138714c */
  push32((uint32_t)(0x1138714cu));
  /* 1138122d push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 11381232 call esi */
  call_ind((uint32_t)(ESI), 0x11381234u);
  /* 11381234 push 0x11387148 */
  push32((uint32_t)(0x11387148u));
  /* 11381239 push 0x11387830 */
  push32((uint32_t)(0x11387830u));
  /* 1138123e call esi */
  call_ind((uint32_t)(ESI), 0x11381240u);
  /* 11381240 push 0x11387144 */
  push32((uint32_t)(0x11387144u));
  /* 11381245 push 0x11387838 */
  push32((uint32_t)(0x11387838u));
  /* 1138124a call esi */
  call_ind((uint32_t)(ESI), 0x1138124cu);
  /* 1138124c push 0x11387140 */
  push32((uint32_t)(0x11387140u));
  /* 11381251 push 0x11387698 */
  push32((uint32_t)(0x11387698u));
  /* 11381256 call esi */
  call_ind((uint32_t)(ESI), 0x11381258u);
  /* 11381258 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138125b push 0x1138713c */
  push32((uint32_t)(0x1138713cu));
  /* 11381260 push 0x11387718 */
  push32((uint32_t)(0x11387718u));
  /* 11381265 call esi */
  call_ind((uint32_t)(ESI), 0x11381267u);
  /* 11381267 push 0x11387138 */
  push32((uint32_t)(0x11387138u));
  /* 1138126c push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381271 call esi */
  call_ind((uint32_t)(ESI), 0x11381273u);
  /* 11381273 push 0x11387134 */
  push32((uint32_t)(0x11387134u));
  /* 11381278 push 0x11387848 */
  push32((uint32_t)(0x11387848u));
  /* 1138127d call esi */
  call_ind((uint32_t)(ESI), 0x1138127fu);
  /* 1138127f push 0x11387130 */
  push32((uint32_t)(0x11387130u));
  /* 11381284 push 0x11387850 */
  push32((uint32_t)(0x11387850u));
  /* 11381289 call esi */
  call_ind((uint32_t)(ESI), 0x1138128bu);
  /* 1138128b push 0x1138712c */
  push32((uint32_t)(0x1138712cu));
  /* 11381290 push 0x113877d0 */
  push32((uint32_t)(0x113877d0u));
  /* 11381295 call esi */
  call_ind((uint32_t)(ESI), 0x11381297u);
  /* 11381297 push 0x11387128 */
  push32((uint32_t)(0x11387128u));
  /* 1138129c push 0x113877e0 */
  push32((uint32_t)(0x113877e0u));
  /* 113812a1 call esi */
  call_ind((uint32_t)(ESI), 0x113812a3u);
  /* 113812a3 push 0x11387124 */
  push32((uint32_t)(0x11387124u));
  /* 113812a8 push 0x113877f0 */
  push32((uint32_t)(0x113877f0u));
  /* 113812ad call esi */
  call_ind((uint32_t)(ESI), 0x113812afu);
  /* 113812af push 0x11387120 */
  push32((uint32_t)(0x11387120u));
  /* 113812b4 push 0x11387808 */
  push32((uint32_t)(0x11387808u));
  /* 113812b9 call esi */
  call_ind((uint32_t)(ESI), 0x113812bbu);
  /* 113812bb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113812be push 0x11387118 */
  push32((uint32_t)(0x11387118u));
  /* 113812c3 push 0x11387860 */
  push32((uint32_t)(0x11387860u));
  /* 113812c8 call esi */
  call_ind((uint32_t)(ESI), 0x113812cau);
  /* 113812ca push 0x11387110 */
  push32((uint32_t)(0x11387110u));
  /* 113812cf push 0x113875c8 */
  push32((uint32_t)(0x113875c8u));
  /* 113812d4 call esi */
  call_ind((uint32_t)(ESI), 0x113812d6u);
  /* 113812d6 push 0x11387108 */
  push32((uint32_t)(0x11387108u));
  /* 113812db push 0x11387868 */
  push32((uint32_t)(0x11387868u));
  /* 113812e0 call esi */
  call_ind((uint32_t)(ESI), 0x113812e2u);
  /* 113812e2 push 0x11387100 */
  push32((uint32_t)(0x11387100u));
  /* 113812e7 push 0x113875d0 */
  push32((uint32_t)(0x113875d0u));
  /* 113812ec call esi */
  call_ind((uint32_t)(ESI), 0x113812eeu);
  /* 113812ee push 0x113870f8 */
  push32((uint32_t)(0x113870f8u));
  /* 113812f3 push 0x11387870 */
  push32((uint32_t)(0x11387870u));
  /* 113812f8 call esi */
  call_ind((uint32_t)(ESI), 0x113812fau);
  /* 113812fa push 0x113870f0 */
  push32((uint32_t)(0x113870f0u));
  /* 113812ff push 0x113875d8 */
  push32((uint32_t)(0x113875d8u));
  /* 11381304 call esi */
  call_ind((uint32_t)(ESI), 0x11381306u);
  /* 11381306 push 0x113870e8 */
  push32((uint32_t)(0x113870e8u));
  /* 1138130b push 0x11387878 */
  push32((uint32_t)(0x11387878u));
  /* 11381310 call esi */
  call_ind((uint32_t)(ESI), 0x11381312u);
  /* 11381312 push 0x113870e0 */
  push32((uint32_t)(0x113870e0u));
  /* 11381317 push 0x113875e0 */
  push32((uint32_t)(0x113875e0u));
  /* 1138131c call esi */
  call_ind((uint32_t)(ESI), 0x1138131eu);
  /* 1138131e mov ebx, dword ptr [0x1138613c] */
  EBX = (r32((uint32_t)(0x1138613c)));
  /* 11381324 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381327 push 0x113870dc */
  push32((uint32_t)(0x113870dcu));
  /* 1138132c push 0x11387610 */
  push32((uint32_t)(0x11387610u));
  /* 11381331 call ebx */
  call_ind((uint32_t)(EBX), 0x11381333u);
  /* 11381333 push 0x113870d4 */
  push32((uint32_t)(0x113870d4u));
  /* 11381338 push 0x11387618 */
  push32((uint32_t)(0x11387618u));
  /* 1138133d call ebx */
  call_ind((uint32_t)(EBX), 0x1138133fu);
  /* 1138133f push 0x113870cc */
  push32((uint32_t)(0x113870ccu));
  /* 11381344 push 0x11387628 */
  push32((uint32_t)(0x11387628u));
  /* 11381349 call ebx */
  call_ind((uint32_t)(EBX), 0x1138134bu);
  /* 1138134b push 0x113870c4 */
  push32((uint32_t)(0x113870c4u));
  /* 11381350 push 0x11387630 */
  push32((uint32_t)(0x11387630u));
  /* 11381355 call ebx */
  call_ind((uint32_t)(EBX), 0x11381357u);
  /* 11381357 push 0x113870bc */
  push32((uint32_t)(0x113870bcu));
  /* 1138135c push 0x11387638 */
  push32((uint32_t)(0x11387638u));
  /* 11381361 call ebx */
  call_ind((uint32_t)(EBX), 0x11381363u);
  /* 11381363 push 0x113870b4 */
  push32((uint32_t)(0x113870b4u));
  /* 11381368 push 0x11387650 */
  push32((uint32_t)(0x11387650u));
  /* 1138136d call ebx */
  call_ind((uint32_t)(EBX), 0x1138136fu);
  /* 1138136f push 0x113870ac */
  push32((uint32_t)(0x113870acu));
  /* 11381374 push 0x113876b0 */
  push32((uint32_t)(0x113876b0u));
  /* 11381379 call ebx */
  call_ind((uint32_t)(EBX), 0x1138137bu);
  /* 1138137b push 0x113870a4 */
  push32((uint32_t)(0x113870a4u));
  /* 11381380 push 0x113876a8 */
  push32((uint32_t)(0x113876a8u));
  /* 11381385 call ebx */
  call_ind((uint32_t)(EBX), 0x11381387u);
  /* 11381387 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138138a push 0x1138709c */
  push32((uint32_t)(0x1138709cu));
  /* 1138138f push 0x11387620 */
  push32((uint32_t)(0x11387620u));
  /* 11381394 call ebx */
  call_ind((uint32_t)(EBX), 0x11381396u);
  /* 11381396 push 0x11387098 */
  push32((uint32_t)(0x11387098u));
  /* 1138139b push 0x11387800 */
  push32((uint32_t)(0x11387800u));
  /* 113813a0 call esi */
  call_ind((uint32_t)(ESI), 0x113813a2u);
  /* 113813a2 push 0x11387094 */
  push32((uint32_t)(0x11387094u));
  /* 113813a7 push 0x11387810 */
  push32((uint32_t)(0x11387810u));
  /* 113813ac call esi */
  call_ind((uint32_t)(ESI), 0x113813aeu);
  /* 113813ae push 0x11387090 */
  push32((uint32_t)(0x11387090u));
  /* 113813b3 push 0x11387818 */
  push32((uint32_t)(0x11387818u));
  /* 113813b8 call esi */
  call_ind((uint32_t)(ESI), 0x113813bau);
  /* 113813ba push 0x1138708c */
  push32((uint32_t)(0x1138708cu));
  /* 113813bf push 0x11387820 */
  push32((uint32_t)(0x11387820u));
  /* 113813c4 call esi */
  call_ind((uint32_t)(ESI), 0x113813c6u);
  /* 113813c6 push 0x11387088 */
  push32((uint32_t)(0x11387088u));
  /* 113813cb push 0x11387828 */
  push32((uint32_t)(0x11387828u));
  /* 113813d0 call esi */
  call_ind((uint32_t)(ESI), 0x113813d2u);
  /* 113813d2 mov esi, dword ptr [0x11386140] */
  ESI = (r32((uint32_t)(0x11386140)));
  /* 113813d8 push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 113813dd call esi */
  call_ind((uint32_t)(ESI), 0x113813dfu);
  /* 113813df push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 113813e4 call esi */
  call_ind((uint32_t)(ESI), 0x113813e6u);
  /* 113813e6 mov ebp, dword ptr [0x11386144] */
  EBP = (r32((uint32_t)(0x11386144)));
  /* 113813ec push 0x11387080 */
  push32((uint32_t)(0x11387080u));
  /* 113813f1 push 0x11387660 */
  push32((uint32_t)(0x11387660u));
  /* 113813f6 call ebp */
  call_ind((uint32_t)(EBP), 0x113813f8u);
  /* 113813f8 mov ebx, dword ptr [0x11386148] */
  EBX = (r32((uint32_t)(0x11386148)));
  /* 113813fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381401 push 0x11387074 */
  push32((uint32_t)(0x11387074u));
  /* 11381406 push 0x113876b8 */
  push32((uint32_t)(0x113876b8u));
  /* 1138140b call ebx */
  call_ind((uint32_t)(EBX), 0x1138140du);
  /* 1138140d push 0x113875f0 */
  push32((uint32_t)(0x113875f0u));
  /* 11381412 call esi */
  call_ind((uint32_t)(ESI), 0x11381414u);
  /* 11381414 push 0x11387080 */
  push32((uint32_t)(0x11387080u));
  /* 11381419 push 0x11387688 */
  push32((uint32_t)(0x11387688u));
  /* 1138141e call ebp */
  call_ind((uint32_t)(EBP), 0x11381420u);
  /* 11381420 push 0x11387074 */
  push32((uint32_t)(0x11387074u));
  /* 11381425 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 1138142a call ebx */
  call_ind((uint32_t)(EBX), 0x1138142cu);
  /* 1138142c push 0x11387600 */
  push32((uint32_t)(0x11387600u));
  /* 11381431 call esi */
  call_ind((uint32_t)(ESI), 0x11381433u);
  /* 11381433 push 0x113875f8 */
  push32((uint32_t)(0x113875f8u));
  /* 11381438 call esi */
  call_ind((uint32_t)(ESI), 0x1138143au);
  /* 1138143a push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 1138143f call esi */
  call_ind((uint32_t)(ESI), 0x11381441u);
  /* 11381441 push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381446 call esi */
  call_ind((uint32_t)(ESI), 0x11381448u);
  /* 11381448 push 0x11387080 */
  push32((uint32_t)(0x11387080u));
  /* 1138144d push 0x113876a0 */
  push32((uint32_t)(0x113876a0u));
  /* 11381452 call ebp */
  call_ind((uint32_t)(EBP), 0x11381454u);
  /* 11381454 push 0x1138705c */
  push32((uint32_t)(0x1138705cu));
  /* 11381459 push 0x113876c8 */
  push32((uint32_t)(0x113876c8u));
  /* 1138145e call ebx */
  call_ind((uint32_t)(EBX), 0x11381460u);
  /* 11381460 push 8 */
  push32((uint32_t)(0x8u));
  /* 11381462 pop esi */
  ESI = (pop32());
  /* 11381463 push esi */
  push32((uint32_t)(ESI));
  /* 11381464 push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 11381469 call edi */
  call_ind((uint32_t)(EDI), 0x1138146bu);
  /* 1138146b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138146e push esi */
  push32((uint32_t)(ESI));
  /* 1138146f push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 11381474 call edi */
  call_ind((uint32_t)(EDI), 0x11381476u);
  /* 11381476 push esi */
  push32((uint32_t)(ESI));
  /* 11381477 push 0x113875f0 */
  push32((uint32_t)(0x113875f0u));
  /* 1138147c call edi */
  call_ind((uint32_t)(EDI), 0x1138147eu);
  /* 1138147e push esi */
  push32((uint32_t)(ESI));
  /* 1138147f push 0x11387600 */
  push32((uint32_t)(0x11387600u));
  /* 11381484 call edi */
  call_ind((uint32_t)(EDI), 0x11381486u);
  /* 11381486 push esi */
  push32((uint32_t)(ESI));
  /* 11381487 push 0x113875f8 */
  push32((uint32_t)(0x113875f8u));
  /* 1138148c call edi */
  call_ind((uint32_t)(EDI), 0x1138148eu);
  /* 1138148e push esi */
  push32((uint32_t)(ESI));
  /* 1138148f push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 11381494 call edi */
  call_ind((uint32_t)(EDI), 0x11381496u);
  /* 11381496 push esi */
  push32((uint32_t)(ESI));
  /* 11381497 push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 1138149c call edi */
  call_ind((uint32_t)(EDI), 0x1138149eu);
  /* 1138149e push 0x11387050 */
  push32((uint32_t)(0x11387050u));
  /* 113814a3 push 0x113876f8 */
  push32((uint32_t)(0x113876f8u));
  /* 113814a8 call ebx */
  call_ind((uint32_t)(EBX), 0x113814aau);
  /* 113814aa push 0x11387040 */
  push32((uint32_t)(0x11387040u));
  /* 113814af push 0x113875b0 */
  push32((uint32_t)(0x113875b0u));
  /* 113814b4 call ebx */
  call_ind((uint32_t)(EBX), 0x113814b6u);
  /* 113814b6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113814b9 push 0x11387030 */
  push32((uint32_t)(0x11387030u));
  /* 113814be push 0x113876f0 */
  push32((uint32_t)(0x113876f0u));
  /* 113814c3 call ebx */
  call_ind((uint32_t)(EBX), 0x113814c5u);
  /* 113814c5 pop ecx */
  ECX = (pop32());
  /* 113814c6 pop ecx */
  ECX = (pop32());
  /* 113814c7 pop edi */
  EDI = (pop32());
  /* 113814c8 pop esi */
  ESI = (pop32());
  /* 113814c9 pop ebp */
  EBP = (pop32());
  /* 113814ca pop ebx */
  EBX = (pop32());
  /* 113814cb ret  */
  ESPCHK(0x11381012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x113814cc (4733 bytes, 1596 insns) */
void f_113814cc(void) {
  FTRACE(0x113814ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113814cc push ecx */
  push32((uint32_t)(ECX));
  /* 113814cd push ebx */
  push32((uint32_t)(EBX));
  /* 113814ce push ebp */
  push32((uint32_t)(EBP));
  /* 113814cf push esi */
  push32((uint32_t)(ESI));
  /* 113814d0 push edi */
  push32((uint32_t)(EDI));
  /* 113814d1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 113814d3 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x113814d9u);
  /* 113814d9 mov ebx, dword ptr [0x113860b4] */
  EBX = (r32((uint32_t)(0x113860b4)));
  /* 113814df mov edi, dword ptr [0x113860b8] */
  EDI = (r32((uint32_t)(0x113860b8)));
  /* 113814e5 pop ecx */
  ECX = (pop32());
  /* 113814e6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 113814e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 113814ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113814ec pop ebp */
  EBP = (pop32());
  /* 113814ed je 0x11381745 */
  if (C.zf) goto L_11381745;
  /* 113814f3 push esi */
  push32((uint32_t)(ESI));
  /* 113814f4 call dword ptr [0x113860bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860bc))), 0x113814fau);
  /* 113814fa pop ecx */
  ECX = (pop32());
  /* 113814fb cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113814fd lea ecx, [eax + 0xf] */
  ECX = ((uint32_t)(EAX + 0xf));
  /* 11381500 mov dword ptr [0x113875c0], eax */
  w32((uint32_t)(0x113875c0), (EAX));
  /* 11381505 mov dword ptr [0x113876e8], ecx */
  w32((uint32_t)(0x113876e8), (ECX));
  /* 1138150b mov dword ptr [0x113875b8], 1 */
  w32((uint32_t)(0x113875b8), (0x1u));
  /* 11381515 je 0x11381526 */
  if (C.zf) goto L_11381526;
  /* 11381517 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1138151c push 1 */
  push32((uint32_t)(0x1u));
  /* 1138151e call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x11381524u);
  /* 11381524 pop ecx */
  ECX = (pop32());
  /* 11381525 pop ecx */
  ECX = (pop32());
L_11381526:;
  /* 11381526 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1138152b push ebp */
  push32((uint32_t)(EBP));
  /* 1138152c call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x11381532u);
  /* 11381532 push esi */
  push32((uint32_t)(ESI));
  /* 11381533 push 4 */
  push32((uint32_t)(0x4u));
  /* 11381535 call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x1138153bu);
  /* 1138153b push esi */
  push32((uint32_t)(ESI));
  /* 1138153c push 0x11387628 */
  push32((uint32_t)(0x11387628u));
  /* 11381541 call ebx */
  call_ind((uint32_t)(EBX), 0x11381543u);
  /* 11381543 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381545 push 0x113876a8 */
  push32((uint32_t)(0x113876a8u));
  /* 1138154a call ebx */
  call_ind((uint32_t)(EBX), 0x1138154cu);
  /* 1138154c push esi */
  push32((uint32_t)(ESI));
  /* 1138154d push 0x11387800 */
  push32((uint32_t)(0x11387800u));
  /* 11381552 push ebp */
  push32((uint32_t)(EBP));
  /* 11381553 call dword ptr [0x113860c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c4))), 0x11381559u);
  /* 11381559 push esi */
  push32((uint32_t)(ESI));
  /* 1138155a push 0x11387618 */
  push32((uint32_t)(0x11387618u));
  /* 1138155f call ebx */
  call_ind((uint32_t)(EBX), 0x11381561u);
  /* 11381561 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381563 push 0x11387638 */
  push32((uint32_t)(0x11387638u));
  /* 11381568 call ebx */
  call_ind((uint32_t)(EBX), 0x1138156au);
  /* 1138156a push esi */
  push32((uint32_t)(ESI));
  /* 1138156b push 0x11387810 */
  push32((uint32_t)(0x11387810u));
  /* 11381570 push ebp */
  push32((uint32_t)(EBP));
  /* 11381571 call dword ptr [0x113860c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c4))), 0x11381577u);
  /* 11381577 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138157a push esi */
  push32((uint32_t)(ESI));
  /* 1138157b push 0x11387630 */
  push32((uint32_t)(0x11387630u));
  /* 11381580 call ebx */
  call_ind((uint32_t)(EBX), 0x11381582u);
  /* 11381582 push esi */
  push32((uint32_t)(ESI));
  /* 11381583 push 0x11387818 */
  push32((uint32_t)(0x11387818u));
  /* 11381588 push ebp */
  push32((uint32_t)(EBP));
  /* 11381589 call dword ptr [0x113860c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c4))), 0x1138158fu);
  /* 1138158f push esi */
  push32((uint32_t)(ESI));
  /* 11381590 push 0x113876b0 */
  push32((uint32_t)(0x113876b0u));
  /* 11381595 call ebx */
  call_ind((uint32_t)(EBX), 0x11381597u);
  /* 11381597 push esi */
  push32((uint32_t)(ESI));
  /* 11381598 push 0x11387820 */
  push32((uint32_t)(0x11387820u));
  /* 1138159d push ebp */
  push32((uint32_t)(EBP));
  /* 1138159e call dword ptr [0x113860c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c4))), 0x113815a4u);
  /* 113815a4 push esi */
  push32((uint32_t)(ESI));
  /* 113815a5 push 0x11387620 */
  push32((uint32_t)(0x11387620u));
  /* 113815aa call ebx */
  call_ind((uint32_t)(EBX), 0x113815acu);
  /* 113815ac push 1 */
  push32((uint32_t)(0x1u));
  /* 113815ae push 0x11387650 */
  push32((uint32_t)(0x11387650u));
  /* 113815b3 call ebx */
  call_ind((uint32_t)(EBX), 0x113815b5u);
  /* 113815b5 push esi */
  push32((uint32_t)(ESI));
  /* 113815b6 push 0x11387828 */
  push32((uint32_t)(0x11387828u));
  /* 113815bb push ebp */
  push32((uint32_t)(EBP));
  /* 113815bc call dword ptr [0x113860c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c4))), 0x113815c2u);
  /* 113815c2 mov ebx, dword ptr [0x113860c8] */
  EBX = (r32((uint32_t)(0x113860c8)));
  /* 113815c8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113815cb push 0x11387278 */
  push32((uint32_t)(0x11387278u));
  /* 113815d0 push 0x113870dc */
  push32((uint32_t)(0x113870dcu));
  /* 113815d5 call ebx */
  call_ind((uint32_t)(EBX), 0x113815d7u);
  /* 113815d7 push 0x11387270 */
  push32((uint32_t)(0x11387270u));
  /* 113815dc push 0x113870dc */
  push32((uint32_t)(0x113870dcu));
  /* 113815e1 call ebx */
  call_ind((uint32_t)(EBX), 0x113815e3u);
  /* 113815e3 push 0x11387268 */
  push32((uint32_t)(0x11387268u));
  /* 113815e8 push 0x113870dc */
  push32((uint32_t)(0x113870dcu));
  /* 113815ed call ebx */
  call_ind((uint32_t)(EBX), 0x113815efu);
  /* 113815ef push 0x11387260 */
  push32((uint32_t)(0x11387260u));
  /* 113815f4 push 0x113870dc */
  push32((uint32_t)(0x113870dcu));
  /* 113815f9 call ebx */
  call_ind((uint32_t)(EBX), 0x113815fbu);
  /* 113815fb mov eax, dword ptr [0x113875c0] */
  EAX = (r32((uint32_t)(0x113875c0)));
  /* 11381600 mov ebx, dword ptr [0x113860cc] */
  EBX = (r32((uint32_t)(0x113860cc)));
  /* 11381606 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381609 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1138160a je 0x113816a6 */
  if (C.zf) goto L_113816a6;
  /* 11381610 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11381611 je 0x11381669 */
  if (C.zf) goto L_11381669;
  /* 11381613 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11381614 jne 0x113816e3 */
  if (!C.zf) goto L_113816e3;
  /* 1138161a push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 1138161f push 3 */
  push32((uint32_t)(0x3u));
  /* 11381621 push esi */
  push32((uint32_t)(ESI));
  /* 11381622 call ebx */
  call_ind((uint32_t)(EBX), 0x11381624u);
  /* 11381624 push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 11381629 push 1 */
  push32((uint32_t)(0x1u));
  /* 1138162b push esi */
  push32((uint32_t)(ESI));
  /* 1138162c call ebx */
  call_ind((uint32_t)(EBX), 0x1138162eu);
  /* 1138162e push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 11381633 push esi */
  push32((uint32_t)(ESI));
  /* 11381634 push esi */
  push32((uint32_t)(ESI));
  /* 11381635 call ebx */
  call_ind((uint32_t)(EBX), 0x11381637u);
  /* 11381637 push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 1138163c push 2 */
  push32((uint32_t)(0x2u));
  /* 1138163e push esi */
  push32((uint32_t)(ESI));
  /* 1138163f call ebx */
  call_ind((uint32_t)(EBX), 0x11381641u);
  /* 11381641 push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 11381646 push ebp */
  push32((uint32_t)(EBP));
  /* 11381647 push esi */
  push32((uint32_t)(ESI));
  /* 11381648 call ebx */
  call_ind((uint32_t)(EBX), 0x1138164au);
  /* 1138164a push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 1138164f push 4 */
  push32((uint32_t)(0x4u));
  /* 11381651 push esi */
  push32((uint32_t)(ESI));
  /* 11381652 call ebx */
  call_ind((uint32_t)(EBX), 0x11381654u);
  /* 11381654 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381657 push 0x11387258 */
  push32((uint32_t)(0x11387258u));
  /* 1138165c push 0x113870dc */
  push32((uint32_t)(0x113870dcu));
  /* 11381661 call dword ptr [0x113860c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c8))), 0x11381667u);
  /* 11381667 pop ecx */
  ECX = (pop32());
  /* 11381668 pop ecx */
  ECX = (pop32());
L_11381669:;
  /* 11381669 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 1138166e push 3 */
  push32((uint32_t)(0x3u));
  /* 11381670 push esi */
  push32((uint32_t)(ESI));
  /* 11381671 call ebx */
  call_ind((uint32_t)(EBX), 0x11381673u);
  /* 11381673 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 11381678 push 1 */
  push32((uint32_t)(0x1u));
  /* 1138167a push esi */
  push32((uint32_t)(ESI));
  /* 1138167b call ebx */
  call_ind((uint32_t)(EBX), 0x1138167du);
  /* 1138167d push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 11381682 push esi */
  push32((uint32_t)(ESI));
  /* 11381683 push esi */
  push32((uint32_t)(ESI));
  /* 11381684 call ebx */
  call_ind((uint32_t)(EBX), 0x11381686u);
  /* 11381686 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 1138168b push 2 */
  push32((uint32_t)(0x2u));
  /* 1138168d push esi */
  push32((uint32_t)(ESI));
  /* 1138168e call ebx */
  call_ind((uint32_t)(EBX), 0x11381690u);
  /* 11381690 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 11381695 push ebp */
  push32((uint32_t)(EBP));
  /* 11381696 push esi */
  push32((uint32_t)(ESI));
  /* 11381697 call ebx */
  call_ind((uint32_t)(EBX), 0x11381699u);
  /* 11381699 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 1138169e push 4 */
  push32((uint32_t)(0x4u));
  /* 113816a0 push esi */
  push32((uint32_t)(ESI));
  /* 113816a1 call ebx */
  call_ind((uint32_t)(EBX), 0x113816a3u);
  /* 113816a3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113816a6:;
  /* 113816a6 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 113816ab push 3 */
  push32((uint32_t)(0x3u));
  /* 113816ad push esi */
  push32((uint32_t)(ESI));
  /* 113816ae call ebx */
  call_ind((uint32_t)(EBX), 0x113816b0u);
  /* 113816b0 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 113816b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113816b7 push esi */
  push32((uint32_t)(ESI));
  /* 113816b8 call ebx */
  call_ind((uint32_t)(EBX), 0x113816bau);
  /* 113816ba push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 113816bf push esi */
  push32((uint32_t)(ESI));
  /* 113816c0 push esi */
  push32((uint32_t)(ESI));
  /* 113816c1 call ebx */
  call_ind((uint32_t)(EBX), 0x113816c3u);
  /* 113816c3 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 113816c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113816ca push esi */
  push32((uint32_t)(ESI));
  /* 113816cb call ebx */
  call_ind((uint32_t)(EBX), 0x113816cdu);
  /* 113816cd push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 113816d2 push ebp */
  push32((uint32_t)(EBP));
  /* 113816d3 push esi */
  push32((uint32_t)(ESI));
  /* 113816d4 call ebx */
  call_ind((uint32_t)(EBX), 0x113816d6u);
  /* 113816d6 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 113816db push 4 */
  push32((uint32_t)(0x4u));
  /* 113816dd push esi */
  push32((uint32_t)(ESI));
  /* 113816de call ebx */
  call_ind((uint32_t)(EBX), 0x113816e0u);
  /* 113816e0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113816e3:;
  /* 113816e3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 113816e5 push 0xf */
  push32((uint32_t)(0xfu));
  /* 113816e7 call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x113816edu);
  /* 113816ed push dword ptr [0x113875c0] */
  push32((uint32_t)(r32((uint32_t)(0x113875c0))));
  /* 113816f3 mov ebx, dword ptr [0x113860d0] */
  EBX = (r32((uint32_t)(0x113860d0)));
  /* 113816f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 113816fb push esi */
  push32((uint32_t)(ESI));
  /* 113816fc push 2 */
  push32((uint32_t)(0x2u));
  /* 113816fe push 0x1138724c */
  push32((uint32_t)(0x1138724cu));
  /* 11381703 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381705 call ebx */
  call_ind((uint32_t)(EBX), 0x11381707u);
  /* 11381707 push dword ptr [0x113875c0] */
  push32((uint32_t)(r32((uint32_t)(0x113875c0))));
  /* 1138170d push 1 */
  push32((uint32_t)(0x1u));
  /* 1138170f push esi */
  push32((uint32_t)(ESI));
  /* 11381710 push 2 */
  push32((uint32_t)(0x2u));
  /* 11381712 push 0x1138723c */
  push32((uint32_t)(0x1138723cu));
  /* 11381717 push 2 */
  push32((uint32_t)(0x2u));
  /* 11381719 call ebx */
  call_ind((uint32_t)(EBX), 0x1138171bu);
  /* 1138171b push dword ptr [0x113875c0] */
  push32((uint32_t)(r32((uint32_t)(0x113875c0))));
  /* 11381721 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381723 push esi */
  push32((uint32_t)(ESI));
  /* 11381724 push 2 */
  push32((uint32_t)(0x2u));
  /* 11381726 push 0x11387234 */
  push32((uint32_t)(0x11387234u));
  /* 1138172b push 3 */
  push32((uint32_t)(0x3u));
  /* 1138172d call ebx */
  call_ind((uint32_t)(EBX), 0x1138172fu);
  /* 1138172f add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381732 push 0x1138722c */
  push32((uint32_t)(0x1138722cu));
  /* 11381737 call dword ptr [0x113860d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d4))), 0x1138173du);
  /* 1138173d push esi */
  push32((uint32_t)(ESI));
  /* 1138173e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11381740 call edi */
  call_ind((uint32_t)(EDI), 0x11381742u);
  /* 11381742 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381745:;
  /* 11381745 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11381747 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x1138174du);
  /* 1138174d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1138174f pop ecx */
  ECX = (pop32());
  /* 11381750 je 0x1138258c */
  if (C.zf) goto L_1138258c;
  /* 11381756 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381758 call dword ptr [0x113860d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d8))), 0x1138175eu);
  /* 1138175e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381760 pop ecx */
  ECX = (pop32());
  /* 11381761 je 0x11381783 */
  if (C.zf) goto L_11381783;
  /* 11381763 mov eax, dword ptr [0x113875c0] */
  EAX = (r32((uint32_t)(0x113875c0)));
  /* 11381768 push esi */
  push32((uint32_t)(ESI));
  /* 11381769 add dword ptr [0x113876e8], eax */
  { uint32_t _a=(r32((uint32_t)(0x113876e8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(0x113876e8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1138176f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11381771 call edi */
  call_ind((uint32_t)(EDI), 0x11381773u);
  /* 11381773 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11381778 push 1 */
  push32((uint32_t)(0x1u));
  /* 1138177a call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x11381780u);
  /* 11381780 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381783:;
  /* 11381783 push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 11381788 call dword ptr [0x113860dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860dc))), 0x1138178eu);
  /* 1138178e mov ebx, dword ptr [0x113860e0] */
  EBX = (r32((uint32_t)(0x113860e0)));
  /* 11381794 pop ecx */
  ECX = (pop32());
  /* 11381795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381797 jne 0x113817c1 */
  if (!C.zf) goto L_113817c1;
  /* 11381799 push 4 */
  push32((uint32_t)(0x4u));
  /* 1138179b call ebx */
  call_ind((uint32_t)(EBX), 0x1138179du);
  /* 1138179d push esi */
  push32((uint32_t)(ESI));
  /* 1138179e push 4 */
  push32((uint32_t)(0x4u));
  /* 113817a0 call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x113817a6u);
  /* 113817a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113817a8 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 113817aa call edi */
  call_ind((uint32_t)(EDI), 0x113817acu);
  /* 113817ac push 1 */
  push32((uint32_t)(0x1u));
  /* 113817ae push 0x17 */
  push32((uint32_t)(0x17u));
  /* 113817b0 call edi */
  call_ind((uint32_t)(EDI), 0x113817b2u);
  /* 113817b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113817b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113817b6 call edi */
  call_ind((uint32_t)(EDI), 0x113817b8u);
  /* 113817b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 113817ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 113817bc call edi */
  call_ind((uint32_t)(EDI), 0x113817beu);
  /* 113817be add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113817c1:;
  /* 113817c1 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 113817c3 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x113817c9u);
  /* 113817c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113817cb pop ecx */
  ECX = (pop32());
  /* 113817cc jne 0x11381805 */
  if (!C.zf) goto L_11381805;
  /* 113817ce push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 113817d3 call dword ptr [0x113860dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860dc))), 0x113817d9u);
  /* 113817d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113817db pop ecx */
  ECX = (pop32());
  /* 113817dc jne 0x11381805 */
  if (!C.zf) goto L_11381805;
  /* 113817de push 4 */
  push32((uint32_t)(0x4u));
  /* 113817e0 call ebx */
  call_ind((uint32_t)(EBX), 0x113817e2u);
  /* 113817e2 push esi */
  push32((uint32_t)(ESI));
  /* 113817e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 113817e5 call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x113817ebu);
  /* 113817eb push esi */
  push32((uint32_t)(ESI));
  /* 113817ec push 0x15 */
  push32((uint32_t)(0x15u));
  /* 113817ee call edi */
  call_ind((uint32_t)(EDI), 0x113817f0u);
  /* 113817f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113817f2 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 113817f4 call edi */
  call_ind((uint32_t)(EDI), 0x113817f6u);
  /* 113817f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113817f8 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 113817fa call edi */
  call_ind((uint32_t)(EDI), 0x113817fcu);
  /* 113817fc push 1 */
  push32((uint32_t)(0x1u));
  /* 113817fe push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11381800 call edi */
  call_ind((uint32_t)(EDI), 0x11381802u);
  /* 11381802 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381805:;
  /* 11381805 push 4 */
  push32((uint32_t)(0x4u));
  /* 11381807 call dword ptr [0x113860d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d8))), 0x1138180du);
  /* 1138180d mov ebx, dword ptr [0x113860e4] */
  EBX = (r32((uint32_t)(0x113860e4)));
  /* 11381813 pop ecx */
  ECX = (pop32());
  /* 11381814 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381816 je 0x113818cb */
  if (C.zf) goto L_113818cb;
  /* 1138181c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1138181e call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381824u);
  /* 11381824 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381826 pop ecx */
  ECX = (pop32());
  /* 11381827 je 0x1138186d */
  if (C.zf) goto L_1138186d;
  /* 11381829 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1138182b push 0x11387668 */
  push32((uint32_t)(0x11387668u));
  /* 11381830 push ebp */
  push32((uint32_t)(EBP));
  /* 11381831 push 0x113876b8 */
  push32((uint32_t)(0x113876b8u));
  /* 11381836 push 0x11387660 */
  push32((uint32_t)(0x11387660u));
  /* 1138183b push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 11381840 call dword ptr [0x113860e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860e8))), 0x11381846u);
  /* 11381846 push esi */
  push32((uint32_t)(ESI));
  /* 11381847 push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 1138184c call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381852u);
  /* 11381852 push esi */
  push32((uint32_t)(ESI));
  /* 11381853 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11381855 push 0x11387848 */
  push32((uint32_t)(0x11387848u));
  /* 1138185a push ebp */
  push32((uint32_t)(EBP));
  /* 1138185b call ebx */
  call_ind((uint32_t)(EBX), 0x1138185du);
  /* 1138185d push esi */
  push32((uint32_t)(ESI));
  /* 1138185e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11381860 call edi */
  call_ind((uint32_t)(EDI), 0x11381862u);
  /* 11381862 push esi */
  push32((uint32_t)(ESI));
  /* 11381863 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11381865 call edi */
  call_ind((uint32_t)(EDI), 0x11381867u);
  /* 11381867 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138186a push esi */
  push32((uint32_t)(ESI));
  /* 1138186b jmp 0x113818b6 */
  goto L_113818b6;
L_1138186d:;
  /* 1138186d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11381872 push 0x11387678 */
  push32((uint32_t)(0x11387678u));
  /* 11381877 push ebp */
  push32((uint32_t)(EBP));
  /* 11381878 push 0x113876b8 */
  push32((uint32_t)(0x113876b8u));
  /* 1138187d push 0x11387660 */
  push32((uint32_t)(0x11387660u));
  /* 11381882 push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 11381887 call dword ptr [0x113860e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860e8))), 0x1138188du);
  /* 1138188d push esi */
  push32((uint32_t)(ESI));
  /* 1138188e push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 11381893 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381899u);
  /* 11381899 push esi */
  push32((uint32_t)(ESI));
  /* 1138189a push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 1138189f push 0x11387830 */
  push32((uint32_t)(0x11387830u));
  /* 113818a4 push ebp */
  push32((uint32_t)(EBP));
  /* 113818a5 call ebx */
  call_ind((uint32_t)(EBX), 0x113818a7u);
  /* 113818a7 push esi */
  push32((uint32_t)(ESI));
  /* 113818a8 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 113818aa call edi */
  call_ind((uint32_t)(EDI), 0x113818acu);
  /* 113818ac push esi */
  push32((uint32_t)(ESI));
  /* 113818ad push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113818af call edi */
  call_ind((uint32_t)(EDI), 0x113818b1u);
  /* 113818b1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113818b4 push 1 */
  push32((uint32_t)(0x1u));
L_113818b6:;
  /* 113818b6 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 113818b8 call edi */
  call_ind((uint32_t)(EDI), 0x113818bau);
  /* 113818ba pop ecx */
  ECX = (pop32());
  /* 113818bb pop ecx */
  ECX = (pop32());
  /* 113818bc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 113818c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 113818c3 call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x113818c9u);
  /* 113818c9 pop ecx */
  ECX = (pop32());
  /* 113818ca pop ecx */
  ECX = (pop32());
L_113818cb:;
  /* 113818cb push 0x15 */
  push32((uint32_t)(0x15u));
  /* 113818cd call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x113818d3u);
  /* 113818d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113818d5 pop ecx */
  ECX = (pop32());
  /* 113818d6 jne 0x11381970 */
  if (!C.zf) goto L_11381970;
  /* 113818dc push 0x16 */
  push32((uint32_t)(0x16u));
  /* 113818de call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x113818e4u);
  /* 113818e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113818e6 pop ecx */
  ECX = (pop32());
  /* 113818e7 jne 0x11381970 */
  if (!C.zf) goto L_11381970;
  /* 113818ed push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 113818f2 push 0x11387848 */
  push32((uint32_t)(0x11387848u));
  /* 113818f7 call dword ptr [0x113860ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860ec))), 0x113818fdu);
  /* 113818fd pop ecx */
  ECX = (pop32());
  /* 113818fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381900 pop ecx */
  ECX = (pop32());
  /* 11381901 jle 0x11381970 */
  if ((C.zf||C.sf!=C.of)) goto L_11381970;
  /* 11381903 push ebp */
  push32((uint32_t)(EBP));
  /* 11381904 push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381909 call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x1138190fu);
  /* 1138190f pop ecx */
  ECX = (pop32());
  /* 11381910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381912 pop ecx */
  ECX = (pop32());
  /* 11381913 jle 0x11381938 */
  if ((C.zf||C.sf!=C.of)) goto L_11381938;
  /* 11381915 push esi */
  push32((uint32_t)(ESI));
  /* 11381916 push ebp */
  push32((uint32_t)(EBP));
  /* 11381917 push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 1138191c call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11381922u);
  /* 11381922 push esi */
  push32((uint32_t)(ESI));
  /* 11381923 push esi */
  push32((uint32_t)(ESI));
  /* 11381924 push 0x11387730 */
  push32((uint32_t)(0x11387730u));
  /* 11381929 push ebp */
  push32((uint32_t)(EBP));
  /* 1138192a call ebx */
  call_ind((uint32_t)(EBX), 0x1138192cu);
  /* 1138192c push 1 */
  push32((uint32_t)(0x1u));
  /* 1138192e push ebp */
  push32((uint32_t)(EBP));
  /* 1138192f call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11381935u);
  /* 11381935 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381938:;
  /* 11381938 push esi */
  push32((uint32_t)(ESI));
  /* 11381939 push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 1138193e call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381944u);
  /* 11381944 push esi */
  push32((uint32_t)(ESI));
  /* 11381945 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11381947 push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 1138194c push ebp */
  push32((uint32_t)(EBP));
  /* 1138194d call ebx */
  call_ind((uint32_t)(EBX), 0x1138194fu);
  /* 1138194f push 1 */
  push32((uint32_t)(0x1u));
  /* 11381951 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11381953 call edi */
  call_ind((uint32_t)(EDI), 0x11381955u);
  /* 11381955 push esi */
  push32((uint32_t)(ESI));
  /* 11381956 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11381958 call edi */
  call_ind((uint32_t)(EDI), 0x1138195au);
  /* 1138195a push 1 */
  push32((uint32_t)(0x1u));
  /* 1138195c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1138195e call edi */
  call_ind((uint32_t)(EDI), 0x11381960u);
  /* 11381960 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11381965 push 2 */
  push32((uint32_t)(0x2u));
  /* 11381967 call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x1138196du);
  /* 1138196d add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381970:;
  /* 11381970 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11381972 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381978u);
  /* 11381978 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1138197a pop ecx */
  ECX = (pop32());
  /* 1138197b jne 0x113819b4 */
  if (!C.zf) goto L_113819b4;
  /* 1138197d push 2 */
  push32((uint32_t)(0x2u));
  /* 1138197f call dword ptr [0x113860d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d8))), 0x11381985u);
  /* 11381985 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381987 pop ecx */
  ECX = (pop32());
  /* 11381988 je 0x113819b4 */
  if (C.zf) goto L_113819b4;
  /* 1138198a push 2 */
  push32((uint32_t)(0x2u));
  /* 1138198c call dword ptr [0x113860e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860e0))), 0x11381992u);
  /* 11381992 push esi */
  push32((uint32_t)(ESI));
  /* 11381993 push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 11381998 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x1138199eu);
  /* 1138199e push esi */
  push32((uint32_t)(ESI));
  /* 1138199f push ebp */
  push32((uint32_t)(EBP));
  /* 113819a0 call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x113819a6u);
  /* 113819a6 push esi */
  push32((uint32_t)(ESI));
  /* 113819a7 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 113819a9 push 0x11387698 */
  push32((uint32_t)(0x11387698u));
  /* 113819ae push ebp */
  push32((uint32_t)(EBP));
  /* 113819af call ebx */
  call_ind((uint32_t)(EBX), 0x113819b1u);
  /* 113819b1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113819b4:;
  /* 113819b4 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 113819b6 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x113819bcu);
  /* 113819bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113819be pop ecx */
  ECX = (pop32());
  /* 113819bf jne 0x11381abf */
  if (!C.zf) goto L_11381abf;
  /* 113819c5 push 0x113875e8 */
  push32((uint32_t)(0x113875e8u));
  /* 113819ca push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 113819cf call dword ptr [0x113860ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860ec))), 0x113819d5u);
  /* 113819d5 pop ecx */
  ECX = (pop32());
  /* 113819d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113819d8 pop ecx */
  ECX = (pop32());
  /* 113819d9 jle 0x11381abf */
  if ((C.zf||C.sf!=C.of)) goto L_11381abf;
  /* 113819df mov ebp, dword ptr [0x113860f0] */
  EBP = (r32((uint32_t)(0x113860f0)));
  /* 113819e5 push esi */
  push32((uint32_t)(ESI));
  /* 113819e6 push 0x11387808 */
  push32((uint32_t)(0x11387808u));
  /* 113819eb call ebp */
  call_ind((uint32_t)(EBP), 0x113819edu);
  /* 113819ed mov edx, eax */
  EDX = (EAX);
  /* 113819ef push esi */
  push32((uint32_t)(ESI));
  /* 113819f0 push 0x113877f0 */
  push32((uint32_t)(0x113877f0u));
  /* 113819f5 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 113819f9 call ebp */
  call_ind((uint32_t)(EBP), 0x113819fbu);
  /* 113819fb mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 113819ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381a02 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11381a04 jle 0x11381a18 */
  if ((C.zf||C.sf!=C.of)) goto L_11381a18;
  /* 11381a06 push esi */
  push32((uint32_t)(ESI));
  /* 11381a07 push 0x11387808 */
  push32((uint32_t)(0x11387808u));
  /* 11381a0c call ebp */
  call_ind((uint32_t)(EBP), 0x11381a0eu);
  /* 11381a0e pop ecx */
  ECX = (pop32());
  /* 11381a0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381a11 pop ecx */
  ECX = (pop32());
  /* 11381a12 je 0x11381a18 */
  if (C.zf) goto L_11381a18;
  /* 11381a14 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381a16 jmp 0x11381a19 */
  goto L_11381a19;
L_11381a18:;
  /* 11381a18 push esi */
  push32((uint32_t)(ESI));
L_11381a19:;
  /* 11381a19 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11381a1b call edi */
  call_ind((uint32_t)(EDI), 0x11381a1du);
  /* 11381a1d cmp dword ptr [0x113876e8], esi */
  { uint32_t _a=(r32((uint32_t)(0x113876e8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11381a23 pop ecx */
  ECX = (pop32());
  /* 11381a24 pop ecx */
  ECX = (pop32());
  /* 11381a25 mov dword ptr [0x113875b8], esi */
  w32((uint32_t)(0x113875b8), (ESI));
  /* 11381a2b push 5 */
  push32((uint32_t)(0x5u));
  /* 11381a2d pop ebp */
  EBP = (pop32());
  /* 11381a2e jl 0x11381a7e */
  if ((C.sf!=C.of)) goto L_11381a7e;
L_11381a30:;
  /* 11381a30 push esi */
  push32((uint32_t)(ESI));
  /* 11381a31 push 0x11387718 */
  push32((uint32_t)(0x11387718u));
  /* 11381a36 push ebp */
  push32((uint32_t)(EBP));
  /* 11381a37 push 0x113876c8 */
  push32((uint32_t)(0x113876c8u));
  /* 11381a3c push 0x113876a0 */
  push32((uint32_t)(0x113876a0u));
  /* 11381a41 push 0x113875f8 */
  push32((uint32_t)(0x113875f8u));
  /* 11381a46 call dword ptr [0x113860e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860e8))), 0x11381a4cu);
  /* 11381a4c push esi */
  push32((uint32_t)(ESI));
  /* 11381a4d push 0x113875f8 */
  push32((uint32_t)(0x113875f8u));
  /* 11381a52 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381a58u);
  /* 11381a58 push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381a5d push 0x113875f8 */
  push32((uint32_t)(0x113875f8u));
  /* 11381a62 call dword ptr [0x113860fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860fc))), 0x11381a68u);
  /* 11381a68 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381a6b inc dword ptr [0x113875b8] */
  { uint32_t _r=(r32((uint32_t)(0x113875b8)))+1; w32((uint32_t)(0x113875b8), (_r)); fl_inc(_r,32); }
  /* 11381a71 mov eax, dword ptr [0x113875b8] */
  EAX = (r32((uint32_t)(0x113875b8)));
  /* 11381a76 cmp eax, dword ptr [0x113876e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113876e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11381a7c jle 0x11381a30 */
  if ((C.zf||C.sf!=C.of)) goto L_11381a30;
L_11381a7e:;
  /* 11381a7e push esi */
  push32((uint32_t)(ESI));
  /* 11381a7f push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381a84 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381a8au);
  /* 11381a8a push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11381a8c call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381a92u);
  /* 11381a92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381a95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381a97 push esi */
  push32((uint32_t)(ESI));
  /* 11381a98 push esi */
  push32((uint32_t)(ESI));
  /* 11381a99 je 0x11381aa2 */
  if (C.zf) goto L_11381aa2;
  /* 11381a9b push 0x11387878 */
  push32((uint32_t)(0x11387878u));
  /* 11381aa0 jmp 0x11381aa7 */
  goto L_11381aa7;
L_11381aa2:;
  /* 11381aa2 push 0x11387870 */
  push32((uint32_t)(0x11387870u));
L_11381aa7:;
  /* 11381aa7 push ebp */
  push32((uint32_t)(EBP));
  /* 11381aa8 call dword ptr [0x11386100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386100))), 0x11381aaeu);
  /* 11381aae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381ab1 push esi */
  push32((uint32_t)(ESI));
  /* 11381ab2 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11381ab4 call edi */
  call_ind((uint32_t)(EDI), 0x11381ab6u);
  /* 11381ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381ab8 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11381aba call edi */
  call_ind((uint32_t)(EDI), 0x11381abcu);
  /* 11381abc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381abf:;
  /* 11381abf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11381ac1 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381ac7u);
  /* 11381ac7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381ac9 pop ecx */
  ECX = (pop32());
  /* 11381aca jne 0x11381b5e */
  if (!C.zf) goto L_11381b5e;
  /* 11381ad0 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11381ad2 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381ad8u);
  /* 11381ad8 pop ecx */
  ECX = (pop32());
  /* 11381ad9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381adb push esi */
  push32((uint32_t)(ESI));
  /* 11381adc jne 0x11381b1e */
  if (!C.zf) goto L_11381b1e;
  /* 11381ade push 0x113877f0 */
  push32((uint32_t)(0x113877f0u));
  /* 11381ae3 call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381ae9u);
  /* 11381ae9 pop ecx */
  ECX = (pop32());
  /* 11381aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381aec pop ecx */
  ECX = (pop32());
  /* 11381aed jne 0x11381b5e */
  if (!C.zf) goto L_11381b5e;
  /* 11381aef push ebp */
  push32((uint32_t)(EBP));
  /* 11381af0 push 0x113875d8 */
  push32((uint32_t)(0x113875d8u));
  /* 11381af5 call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381afbu);
  /* 11381afb pop ecx */
  ECX = (pop32());
  /* 11381afc pop ecx */
  ECX = (pop32());
  /* 11381afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381aff push esi */
  push32((uint32_t)(ESI));
  /* 11381b00 jle 0x11381b0a */
  if ((C.zf||C.sf!=C.of)) goto L_11381b0a;
L_11381b02:;
  /* 11381b02 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11381b04 call edi */
  call_ind((uint32_t)(EDI), 0x11381b06u);
  /* 11381b06 pop ecx */
  ECX = (pop32());
  /* 11381b07 pop ecx */
  ECX = (pop32());
  /* 11381b08 jmp 0x11381b5e */
  goto L_11381b5e;
L_11381b0a:;
  /* 11381b0a push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381b0f call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381b15u);
  /* 11381b15 push esi */
  push32((uint32_t)(ESI));
  /* 11381b16 push esi */
  push32((uint32_t)(ESI));
  /* 11381b17 push 0x11387870 */
  push32((uint32_t)(0x11387870u));
  /* 11381b1c jmp 0x11381b54 */
  goto L_11381b54;
L_11381b1e:;
  /* 11381b1e push 0x11387808 */
  push32((uint32_t)(0x11387808u));
  /* 11381b23 call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381b29u);
  /* 11381b29 pop ecx */
  ECX = (pop32());
  /* 11381b2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381b2c pop ecx */
  ECX = (pop32());
  /* 11381b2d jne 0x11381b5e */
  if (!C.zf) goto L_11381b5e;
  /* 11381b2f push ebp */
  push32((uint32_t)(EBP));
  /* 11381b30 push 0x113875e0 */
  push32((uint32_t)(0x113875e0u));
  /* 11381b35 call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381b3bu);
  /* 11381b3b pop ecx */
  ECX = (pop32());
  /* 11381b3c pop ecx */
  ECX = (pop32());
  /* 11381b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381b3f push esi */
  push32((uint32_t)(ESI));
  /* 11381b40 jg 0x11381b02 */
  if ((!C.zf&&C.sf==C.of)) goto L_11381b02;
  /* 11381b42 push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381b47 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381b4du);
  /* 11381b4d push esi */
  push32((uint32_t)(ESI));
  /* 11381b4e push esi */
  push32((uint32_t)(ESI));
  /* 11381b4f push 0x11387878 */
  push32((uint32_t)(0x11387878u));
L_11381b54:;
  /* 11381b54 push ebp */
  push32((uint32_t)(EBP));
  /* 11381b55 call dword ptr [0x11386100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386100))), 0x11381b5bu);
  /* 11381b5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381b5e:;
  /* 11381b5e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11381b60 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381b66u);
  /* 11381b66 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381b68 pop ecx */
  ECX = (pop32());
  /* 11381b69 jne 0x11381bb4 */
  if (!C.zf) goto L_11381bb4;
  /* 11381b6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11381b6d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11381b6f call edi */
  call_ind((uint32_t)(EDI), 0x11381b71u);
  /* 11381b71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381b73 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11381b75 call edi */
  call_ind((uint32_t)(EDI), 0x11381b77u);
  /* 11381b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381b79 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11381b7b call edi */
  call_ind((uint32_t)(EDI), 0x11381b7du);
  /* 11381b7d push ebp */
  push32((uint32_t)(EBP));
  /* 11381b7e push 0x113876b8 */
  push32((uint32_t)(0x113876b8u));
  /* 11381b83 push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381b88 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x11381b8eu);
  /* 11381b8e add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381b91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381b93 jle 0x11381bb4 */
  if ((C.zf||C.sf!=C.of)) goto L_11381bb4;
  /* 11381b95 push esi */
  push32((uint32_t)(ESI));
  /* 11381b96 push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381b9b call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381ba1u);
  /* 11381ba1 push esi */
  push32((uint32_t)(ESI));
  /* 11381ba2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11381ba4 push 0x11387718 */
  push32((uint32_t)(0x11387718u));
  /* 11381ba9 push ebp */
  push32((uint32_t)(EBP));
  /* 11381baa call ebx */
  call_ind((uint32_t)(EBX), 0x11381bacu);
  /* 11381bac push esi */
  push32((uint32_t)(ESI));
  /* 11381bad push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11381baf call edi */
  call_ind((uint32_t)(EDI), 0x11381bb1u);
  /* 11381bb1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381bb4:;
  /* 11381bb4 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11381bb6 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381bbcu);
  /* 11381bbc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381bbe pop ecx */
  ECX = (pop32());
  /* 11381bbf jne 0x11381c00 */
  if (!C.zf) goto L_11381c00;
  /* 11381bc1 push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381bc6 call dword ptr [0x113860dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860dc))), 0x11381bccu);
  /* 11381bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381bce pop ecx */
  ECX = (pop32());
  /* 11381bcf jne 0x11381c00 */
  if (!C.zf) goto L_11381c00;
  /* 11381bd1 push esi */
  push32((uint32_t)(ESI));
  /* 11381bd2 push ebp */
  push32((uint32_t)(EBP));
  /* 11381bd3 push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381bd8 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11381bdeu);
  /* 11381bde push esi */
  push32((uint32_t)(ESI));
  /* 11381bdf push esi */
  push32((uint32_t)(ESI));
  /* 11381be0 push 0x11387730 */
  push32((uint32_t)(0x11387730u));
  /* 11381be5 push ebp */
  push32((uint32_t)(EBP));
  /* 11381be6 call ebx */
  call_ind((uint32_t)(EBX), 0x11381be8u);
  /* 11381be8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381bea push ebp */
  push32((uint32_t)(EBP));
  /* 11381beb call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11381bf1u);
  /* 11381bf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381bf3 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11381bf5 call edi */
  call_ind((uint32_t)(EDI), 0x11381bf7u);
  /* 11381bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381bf9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11381bfb call edi */
  call_ind((uint32_t)(EDI), 0x11381bfdu);
  /* 11381bfd add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381c00:;
  /* 11381c00 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11381c02 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381c08u);
  /* 11381c08 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381c0a pop ecx */
  ECX = (pop32());
  /* 11381c0b jne 0x11381cc3 */
  if (!C.zf) goto L_11381cc3;
  /* 11381c11 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c12 push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381c17 call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381c1du);
  /* 11381c1d pop ecx */
  ECX = (pop32());
  /* 11381c1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381c20 pop ecx */
  ECX = (pop32());
  /* 11381c21 jle 0x11381cc3 */
  if ((C.zf||C.sf!=C.of)) goto L_11381cc3;
  /* 11381c27 push esi */
  push32((uint32_t)(ESI));
  /* 11381c28 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c29 push 0x113876c8 */
  push32((uint32_t)(0x113876c8u));
  /* 11381c2e push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381c33 call dword ptr [0x11386108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386108))), 0x11381c39u);
  /* 11381c39 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c3a push 0x113876b8 */
  push32((uint32_t)(0x113876b8u));
  /* 11381c3f push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381c44 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x11381c4au);
  /* 11381c4a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381c4f jle 0x11381c70 */
  if ((C.zf||C.sf!=C.of)) goto L_11381c70;
  /* 11381c51 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c52 call dword ptr [0x1138610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138610c))), 0x11381c58u);
  /* 11381c58 push esi */
  push32((uint32_t)(ESI));
  /* 11381c59 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c5a push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381c5f call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11381c65u);
  /* 11381c65 push esi */
  push32((uint32_t)(ESI));
  /* 11381c66 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c67 call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11381c6du);
  /* 11381c6d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381c70:;
  /* 11381c70 push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381c75 call dword ptr [0x113860dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860dc))), 0x11381c7bu);
  /* 11381c7b pop ecx */
  ECX = (pop32());
  /* 11381c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381c7e push esi */
  push32((uint32_t)(ESI));
  /* 11381c7f jne 0x11381cab */
  if (!C.zf) goto L_11381cab;
  /* 11381c81 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c82 push 0x11387858 */
  push32((uint32_t)(0x11387858u));
  /* 11381c87 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11381c8du);
  /* 11381c8d push esi */
  push32((uint32_t)(ESI));
  /* 11381c8e push esi */
  push32((uint32_t)(ESI));
  /* 11381c8f push 0x11387730 */
  push32((uint32_t)(0x11387730u));
  /* 11381c94 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c95 call ebx */
  call_ind((uint32_t)(EBX), 0x11381c97u);
  /* 11381c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381c99 push ebp */
  push32((uint32_t)(EBP));
  /* 11381c9a call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11381ca0u);
  /* 11381ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381ca2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11381ca4 call edi */
  call_ind((uint32_t)(EDI), 0x11381ca6u);
  /* 11381ca6 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381ca9 jmp 0x11381cc3 */
  goto L_11381cc3;
L_11381cab:;
  /* 11381cab push 0x11387648 */
  push32((uint32_t)(0x11387648u));
  /* 11381cb0 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381cb6u);
  /* 11381cb6 push esi */
  push32((uint32_t)(ESI));
  /* 11381cb7 push esi */
  push32((uint32_t)(ESI));
  /* 11381cb8 push 0x11387718 */
  push32((uint32_t)(0x11387718u));
  /* 11381cbd push ebp */
  push32((uint32_t)(EBP));
  /* 11381cbe call ebx */
  call_ind((uint32_t)(EBX), 0x11381cc0u);
  /* 11381cc0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381cc3:;
  /* 11381cc3 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11381cc5 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381ccbu);
  /* 11381ccb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381ccd pop ecx */
  ECX = (pop32());
  /* 11381cce je 0x11381d68 */
  if (C.zf) goto L_11381d68;
  /* 11381cd4 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11381cd6 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381cdcu);
  /* 11381cdc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381cde pop ecx */
  ECX = (pop32());
  /* 11381cdf jne 0x11381d68 */
  if (!C.zf) goto L_11381d68;
  /* 11381ce5 push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 11381cea push 0x11387830 */
  push32((uint32_t)(0x11387830u));
  /* 11381cef call dword ptr [0x113860ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860ec))), 0x11381cf5u);
  /* 11381cf5 pop ecx */
  ECX = (pop32());
  /* 11381cf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381cf8 pop ecx */
  ECX = (pop32());
  /* 11381cf9 jle 0x11381d68 */
  if ((C.zf||C.sf!=C.of)) goto L_11381d68;
  /* 11381cfb push ebp */
  push32((uint32_t)(EBP));
  /* 11381cfc push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 11381d01 call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381d07u);
  /* 11381d07 pop ecx */
  ECX = (pop32());
  /* 11381d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381d0a pop ecx */
  ECX = (pop32());
  /* 11381d0b jle 0x11381d30 */
  if ((C.zf||C.sf!=C.of)) goto L_11381d30;
  /* 11381d0d push esi */
  push32((uint32_t)(ESI));
  /* 11381d0e push ebp */
  push32((uint32_t)(EBP));
  /* 11381d0f push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 11381d14 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11381d1au);
  /* 11381d1a push esi */
  push32((uint32_t)(ESI));
  /* 11381d1b push esi */
  push32((uint32_t)(ESI));
  /* 11381d1c push 0x113877a8 */
  push32((uint32_t)(0x113877a8u));
  /* 11381d21 push ebp */
  push32((uint32_t)(EBP));
  /* 11381d22 call ebx */
  call_ind((uint32_t)(EBX), 0x11381d24u);
  /* 11381d24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381d26 push ebp */
  push32((uint32_t)(EBP));
  /* 11381d27 call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11381d2du);
  /* 11381d2d add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381d30:;
  /* 11381d30 push esi */
  push32((uint32_t)(ESI));
  /* 11381d31 push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 11381d36 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381d3cu);
  /* 11381d3c push esi */
  push32((uint32_t)(ESI));
  /* 11381d3d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11381d3f push 0x11387838 */
  push32((uint32_t)(0x11387838u));
  /* 11381d44 push ebp */
  push32((uint32_t)(EBP));
  /* 11381d45 call ebx */
  call_ind((uint32_t)(EBX), 0x11381d47u);
  /* 11381d47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381d49 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11381d4b call edi */
  call_ind((uint32_t)(EDI), 0x11381d4du);
  /* 11381d4d push esi */
  push32((uint32_t)(ESI));
  /* 11381d4e push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11381d50 call edi */
  call_ind((uint32_t)(EDI), 0x11381d52u);
  /* 11381d52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381d54 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11381d56 call edi */
  call_ind((uint32_t)(EDI), 0x11381d58u);
  /* 11381d58 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11381d5d push 3 */
  push32((uint32_t)(0x3u));
  /* 11381d5f call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x11381d65u);
  /* 11381d65 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381d68:;
  /* 11381d68 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11381d6a call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381d70u);
  /* 11381d70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381d72 pop ecx */
  ECX = (pop32());
  /* 11381d73 jne 0x11381dab */
  if (!C.zf) goto L_11381dab;
  /* 11381d75 push 3 */
  push32((uint32_t)(0x3u));
  /* 11381d77 call dword ptr [0x113860d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d8))), 0x11381d7du);
  /* 11381d7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381d7f pop ecx */
  ECX = (pop32());
  /* 11381d80 je 0x11381dab */
  if (C.zf) goto L_11381dab;
  /* 11381d82 push 3 */
  push32((uint32_t)(0x3u));
  /* 11381d84 call dword ptr [0x113860e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860e0))), 0x11381d8au);
  /* 11381d8a push esi */
  push32((uint32_t)(ESI));
  /* 11381d8b push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 11381d90 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381d96u);
  /* 11381d96 push esi */
  push32((uint32_t)(ESI));
  /* 11381d97 push ebp */
  push32((uint32_t)(EBP));
  /* 11381d98 call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11381d9eu);
  /* 11381d9e push esi */
  push32((uint32_t)(ESI));
  /* 11381d9f push esi */
  push32((uint32_t)(ESI));
  /* 11381da0 push 0x11387680 */
  push32((uint32_t)(0x11387680u));
  /* 11381da5 push ebp */
  push32((uint32_t)(EBP));
  /* 11381da6 call ebx */
  call_ind((uint32_t)(EBX), 0x11381da8u);
  /* 11381da8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381dab:;
  /* 11381dab push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11381dad call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381db3u);
  /* 11381db3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381db5 pop ecx */
  ECX = (pop32());
  /* 11381db6 jne 0x11381eb6 */
  if (!C.zf) goto L_11381eb6;
  /* 11381dbc push 0x11387608 */
  push32((uint32_t)(0x11387608u));
  /* 11381dc1 push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 11381dc6 call dword ptr [0x113860ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860ec))), 0x11381dccu);
  /* 11381dcc pop ecx */
  ECX = (pop32());
  /* 11381dcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381dcf pop ecx */
  ECX = (pop32());
  /* 11381dd0 jle 0x11381eb6 */
  if ((C.zf||C.sf!=C.of)) goto L_11381eb6;
  /* 11381dd6 mov ebp, dword ptr [0x113860f0] */
  EBP = (r32((uint32_t)(0x113860f0)));
  /* 11381ddc push esi */
  push32((uint32_t)(ESI));
  /* 11381ddd push 0x113877e0 */
  push32((uint32_t)(0x113877e0u));
  /* 11381de2 call ebp */
  call_ind((uint32_t)(EBP), 0x11381de4u);
  /* 11381de4 mov edx, eax */
  EDX = (EAX);
  /* 11381de6 push esi */
  push32((uint32_t)(ESI));
  /* 11381de7 push 0x113877d0 */
  push32((uint32_t)(0x113877d0u));
  /* 11381dec mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11381df0 call ebp */
  call_ind((uint32_t)(EBP), 0x11381df2u);
  /* 11381df2 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11381df6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381df9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11381dfb jl 0x11381e0f */
  if ((C.sf!=C.of)) goto L_11381e0f;
  /* 11381dfd push esi */
  push32((uint32_t)(ESI));
  /* 11381dfe push 0x113877e0 */
  push32((uint32_t)(0x113877e0u));
  /* 11381e03 call ebp */
  call_ind((uint32_t)(EBP), 0x11381e05u);
  /* 11381e05 pop ecx */
  ECX = (pop32());
  /* 11381e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381e08 pop ecx */
  ECX = (pop32());
  /* 11381e09 je 0x11381e0f */
  if (C.zf) goto L_11381e0f;
  /* 11381e0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11381e0d jmp 0x11381e10 */
  goto L_11381e10;
L_11381e0f:;
  /* 11381e0f push esi */
  push32((uint32_t)(ESI));
L_11381e10:;
  /* 11381e10 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11381e12 call edi */
  call_ind((uint32_t)(EDI), 0x11381e14u);
  /* 11381e14 cmp dword ptr [0x113876e8], esi */
  { uint32_t _a=(r32((uint32_t)(0x113876e8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11381e1a pop ecx */
  ECX = (pop32());
  /* 11381e1b pop ecx */
  ECX = (pop32());
  /* 11381e1c mov dword ptr [0x113875bc], esi */
  w32((uint32_t)(0x113875bc), (ESI));
  /* 11381e22 push 5 */
  push32((uint32_t)(0x5u));
  /* 11381e24 pop ebp */
  EBP = (pop32());
  /* 11381e25 jl 0x11381e75 */
  if ((C.sf!=C.of)) goto L_11381e75;
L_11381e27:;
  /* 11381e27 push esi */
  push32((uint32_t)(ESI));
  /* 11381e28 push 0x11387690 */
  push32((uint32_t)(0x11387690u));
  /* 11381e2d push ebp */
  push32((uint32_t)(EBP));
  /* 11381e2e push 0x113876c8 */
  push32((uint32_t)(0x113876c8u));
  /* 11381e33 push 0x113876a0 */
  push32((uint32_t)(0x113876a0u));
  /* 11381e38 push 0x113875f8 */
  push32((uint32_t)(0x113875f8u));
  /* 11381e3d call dword ptr [0x113860e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860e8))), 0x11381e43u);
  /* 11381e43 push esi */
  push32((uint32_t)(ESI));
  /* 11381e44 push 0x113875f8 */
  push32((uint32_t)(0x113875f8u));
  /* 11381e49 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381e4fu);
  /* 11381e4f push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 11381e54 push 0x113875f8 */
  push32((uint32_t)(0x113875f8u));
  /* 11381e59 call dword ptr [0x113860fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860fc))), 0x11381e5fu);
  /* 11381e5f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381e62 inc dword ptr [0x113875bc] */
  { uint32_t _r=(r32((uint32_t)(0x113875bc)))+1; w32((uint32_t)(0x113875bc), (_r)); fl_inc(_r,32); }
  /* 11381e68 mov eax, dword ptr [0x113875bc] */
  EAX = (r32((uint32_t)(0x113875bc)));
  /* 11381e6d cmp eax, dword ptr [0x113876e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113876e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11381e73 jle 0x11381e27 */
  if ((C.zf||C.sf!=C.of)) goto L_11381e27;
L_11381e75:;
  /* 11381e75 push esi */
  push32((uint32_t)(ESI));
  /* 11381e76 push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 11381e7b call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381e81u);
  /* 11381e81 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11381e83 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381e89u);
  /* 11381e89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381e8c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381e8e push esi */
  push32((uint32_t)(ESI));
  /* 11381e8f push esi */
  push32((uint32_t)(ESI));
  /* 11381e90 je 0x11381e99 */
  if (C.zf) goto L_11381e99;
  /* 11381e92 push 0x11387868 */
  push32((uint32_t)(0x11387868u));
  /* 11381e97 jmp 0x11381e9e */
  goto L_11381e9e;
L_11381e99:;
  /* 11381e99 push 0x11387860 */
  push32((uint32_t)(0x11387860u));
L_11381e9e:;
  /* 11381e9e push ebp */
  push32((uint32_t)(EBP));
  /* 11381e9f call dword ptr [0x11386100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386100))), 0x11381ea5u);
  /* 11381ea5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381ea8 push esi */
  push32((uint32_t)(ESI));
  /* 11381ea9 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11381eab call edi */
  call_ind((uint32_t)(EDI), 0x11381eadu);
  /* 11381ead push 1 */
  push32((uint32_t)(0x1u));
  /* 11381eaf push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11381eb1 call edi */
  call_ind((uint32_t)(EDI), 0x11381eb3u);
  /* 11381eb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381eb6:;
  /* 11381eb6 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11381eb8 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381ebeu);
  /* 11381ebe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381ec0 pop ecx */
  ECX = (pop32());
  /* 11381ec1 jne 0x11381f55 */
  if (!C.zf) goto L_11381f55;
  /* 11381ec7 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 11381ec9 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381ecfu);
  /* 11381ecf pop ecx */
  ECX = (pop32());
  /* 11381ed0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381ed2 push esi */
  push32((uint32_t)(ESI));
  /* 11381ed3 jne 0x11381f15 */
  if (!C.zf) goto L_11381f15;
  /* 11381ed5 push 0x113877d0 */
  push32((uint32_t)(0x113877d0u));
  /* 11381eda call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381ee0u);
  /* 11381ee0 pop ecx */
  ECX = (pop32());
  /* 11381ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381ee3 pop ecx */
  ECX = (pop32());
  /* 11381ee4 jne 0x11381f55 */
  if (!C.zf) goto L_11381f55;
  /* 11381ee6 push ebp */
  push32((uint32_t)(EBP));
  /* 11381ee7 push 0x113875c8 */
  push32((uint32_t)(0x113875c8u));
  /* 11381eec call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381ef2u);
  /* 11381ef2 pop ecx */
  ECX = (pop32());
  /* 11381ef3 pop ecx */
  ECX = (pop32());
  /* 11381ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381ef6 push esi */
  push32((uint32_t)(ESI));
  /* 11381ef7 jle 0x11381f01 */
  if ((C.zf||C.sf!=C.of)) goto L_11381f01;
L_11381ef9:;
  /* 11381ef9 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11381efb call edi */
  call_ind((uint32_t)(EDI), 0x11381efdu);
  /* 11381efd pop ecx */
  ECX = (pop32());
  /* 11381efe pop ecx */
  ECX = (pop32());
  /* 11381eff jmp 0x11381f55 */
  goto L_11381f55;
L_11381f01:;
  /* 11381f01 push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 11381f06 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381f0cu);
  /* 11381f0c push esi */
  push32((uint32_t)(ESI));
  /* 11381f0d push esi */
  push32((uint32_t)(ESI));
  /* 11381f0e push 0x11387860 */
  push32((uint32_t)(0x11387860u));
  /* 11381f13 jmp 0x11381f4b */
  goto L_11381f4b;
L_11381f15:;
  /* 11381f15 push 0x113877e0 */
  push32((uint32_t)(0x113877e0u));
  /* 11381f1a call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381f20u);
  /* 11381f20 pop ecx */
  ECX = (pop32());
  /* 11381f21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381f23 pop ecx */
  ECX = (pop32());
  /* 11381f24 jne 0x11381f55 */
  if (!C.zf) goto L_11381f55;
  /* 11381f26 push ebp */
  push32((uint32_t)(EBP));
  /* 11381f27 push 0x113875d0 */
  push32((uint32_t)(0x113875d0u));
  /* 11381f2c call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11381f32u);
  /* 11381f32 pop ecx */
  ECX = (pop32());
  /* 11381f33 pop ecx */
  ECX = (pop32());
  /* 11381f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381f36 push esi */
  push32((uint32_t)(ESI));
  /* 11381f37 jg 0x11381ef9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11381ef9;
  /* 11381f39 push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 11381f3e call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381f44u);
  /* 11381f44 push esi */
  push32((uint32_t)(ESI));
  /* 11381f45 push esi */
  push32((uint32_t)(ESI));
  /* 11381f46 push 0x11387868 */
  push32((uint32_t)(0x11387868u));
L_11381f4b:;
  /* 11381f4b push ebp */
  push32((uint32_t)(EBP));
  /* 11381f4c call dword ptr [0x11386100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386100))), 0x11381f52u);
  /* 11381f52 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381f55:;
  /* 11381f55 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11381f57 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381f5du);
  /* 11381f5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381f5f pop ecx */
  ECX = (pop32());
  /* 11381f60 jne 0x11381fab */
  if (!C.zf) goto L_11381fab;
  /* 11381f62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381f64 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 11381f66 call edi */
  call_ind((uint32_t)(EDI), 0x11381f68u);
  /* 11381f68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381f6a push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11381f6c call edi */
  call_ind((uint32_t)(EDI), 0x11381f6eu);
  /* 11381f6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11381f70 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11381f72 call edi */
  call_ind((uint32_t)(EDI), 0x11381f74u);
  /* 11381f74 push ebp */
  push32((uint32_t)(EBP));
  /* 11381f75 push 0x113876b8 */
  push32((uint32_t)(0x113876b8u));
  /* 11381f7a push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 11381f7f call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x11381f85u);
  /* 11381f85 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11381f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381f8a jle 0x11381fab */
  if ((C.zf||C.sf!=C.of)) goto L_11381fab;
  /* 11381f8c push esi */
  push32((uint32_t)(ESI));
  /* 11381f8d push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 11381f92 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11381f98u);
  /* 11381f98 push esi */
  push32((uint32_t)(ESI));
  /* 11381f99 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11381f9b push 0x11387690 */
  push32((uint32_t)(0x11387690u));
  /* 11381fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11381fa1 call ebx */
  call_ind((uint32_t)(EBX), 0x11381fa3u);
  /* 11381fa3 push esi */
  push32((uint32_t)(ESI));
  /* 11381fa4 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 11381fa6 call edi */
  call_ind((uint32_t)(EDI), 0x11381fa8u);
  /* 11381fa8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381fab:;
  /* 11381fab push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11381fad call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381fb3u);
  /* 11381fb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11381fb5 pop ecx */
  ECX = (pop32());
  /* 11381fb6 jne 0x11381ff7 */
  if (!C.zf) goto L_11381ff7;
  /* 11381fb8 push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 11381fbd call dword ptr [0x113860dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860dc))), 0x11381fc3u);
  /* 11381fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11381fc5 pop ecx */
  ECX = (pop32());
  /* 11381fc6 jne 0x11381ff7 */
  if (!C.zf) goto L_11381ff7;
  /* 11381fc8 push esi */
  push32((uint32_t)(ESI));
  /* 11381fc9 push ebp */
  push32((uint32_t)(EBP));
  /* 11381fca push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 11381fcf call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11381fd5u);
  /* 11381fd5 push esi */
  push32((uint32_t)(ESI));
  /* 11381fd6 push esi */
  push32((uint32_t)(ESI));
  /* 11381fd7 push 0x113877a8 */
  push32((uint32_t)(0x113877a8u));
  /* 11381fdc push ebp */
  push32((uint32_t)(EBP));
  /* 11381fdd call ebx */
  call_ind((uint32_t)(EBX), 0x11381fdfu);
  /* 11381fdf push 1 */
  push32((uint32_t)(0x1u));
  /* 11381fe1 push ebp */
  push32((uint32_t)(EBP));
  /* 11381fe2 call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11381fe8u);
  /* 11381fe8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11381fea push 0x22 */
  push32((uint32_t)(0x22u));
  /* 11381fec call edi */
  call_ind((uint32_t)(EDI), 0x11381feeu);
  /* 11381fee push 1 */
  push32((uint32_t)(0x1u));
  /* 11381ff0 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 11381ff2 call edi */
  call_ind((uint32_t)(EDI), 0x11381ff4u);
  /* 11381ff4 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11381ff7:;
  /* 11381ff7 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 11381ff9 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11381fffu);
  /* 11381fff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11382001 pop ecx */
  ECX = (pop32());
  /* 11382002 jne 0x113820ba */
  if (!C.zf) goto L_113820ba;
  /* 11382008 push ebp */
  push32((uint32_t)(EBP));
  /* 11382009 push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 1138200e call dword ptr [0x113860f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f0))), 0x11382014u);
  /* 11382014 pop ecx */
  ECX = (pop32());
  /* 11382015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382017 pop ecx */
  ECX = (pop32());
  /* 11382018 jle 0x113820ba */
  if ((C.zf||C.sf!=C.of)) goto L_113820ba;
  /* 1138201e push esi */
  push32((uint32_t)(ESI));
  /* 1138201f push ebp */
  push32((uint32_t)(EBP));
  /* 11382020 push 0x113876c8 */
  push32((uint32_t)(0x113876c8u));
  /* 11382025 push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 1138202a call dword ptr [0x11386108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386108))), 0x11382030u);
  /* 11382030 push ebp */
  push32((uint32_t)(EBP));
  /* 11382031 push 0x113876b8 */
  push32((uint32_t)(0x113876b8u));
  /* 11382036 push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 1138203b call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x11382041u);
  /* 11382041 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11382044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382046 jle 0x11382067 */
  if ((C.zf||C.sf!=C.of)) goto L_11382067;
  /* 11382048 push ebp */
  push32((uint32_t)(EBP));
  /* 11382049 call dword ptr [0x1138610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138610c))), 0x1138204fu);
  /* 1138204f push esi */
  push32((uint32_t)(ESI));
  /* 11382050 push ebp */
  push32((uint32_t)(EBP));
  /* 11382051 push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 11382056 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138205cu);
  /* 1138205c push esi */
  push32((uint32_t)(ESI));
  /* 1138205d push ebp */
  push32((uint32_t)(EBP));
  /* 1138205e call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11382064u);
  /* 11382064 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382067:;
  /* 11382067 push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 1138206c call dword ptr [0x113860dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860dc))), 0x11382072u);
  /* 11382072 pop ecx */
  ECX = (pop32());
  /* 11382073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382075 push esi */
  push32((uint32_t)(ESI));
  /* 11382076 jne 0x113820a2 */
  if (!C.zf) goto L_113820a2;
  /* 11382078 push ebp */
  push32((uint32_t)(EBP));
  /* 11382079 push 0x11387840 */
  push32((uint32_t)(0x11387840u));
  /* 1138207e call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382084u);
  /* 11382084 push esi */
  push32((uint32_t)(ESI));
  /* 11382085 push esi */
  push32((uint32_t)(ESI));
  /* 11382086 push 0x113877a8 */
  push32((uint32_t)(0x113877a8u));
  /* 1138208b push ebp */
  push32((uint32_t)(EBP));
  /* 1138208c call ebx */
  call_ind((uint32_t)(EBX), 0x1138208eu);
  /* 1138208e push 1 */
  push32((uint32_t)(0x1u));
  /* 11382090 push ebp */
  push32((uint32_t)(EBP));
  /* 11382091 call dword ptr [0x113860f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f8))), 0x11382097u);
  /* 11382097 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382099 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 1138209b call edi */
  call_ind((uint32_t)(EDI), 0x1138209du);
  /* 1138209d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113820a0 jmp 0x113820ba */
  goto L_113820ba;
L_113820a2:;
  /* 113820a2 push 0x11387640 */
  push32((uint32_t)(0x11387640u));
  /* 113820a7 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x113820adu);
  /* 113820ad push esi */
  push32((uint32_t)(ESI));
  /* 113820ae push esi */
  push32((uint32_t)(ESI));
  /* 113820af push 0x11387690 */
  push32((uint32_t)(0x11387690u));
  /* 113820b4 push ebp */
  push32((uint32_t)(EBP));
  /* 113820b5 call ebx */
  call_ind((uint32_t)(EBX), 0x113820b7u);
  /* 113820b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113820ba:;
  /* 113820ba cmp dword ptr [0x113875c0], esi */
  { uint32_t _a=(r32((uint32_t)(0x113875c0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113820c0 je 0x113821c7 */
  if (C.zf) goto L_113821c7;
  /* 113820c6 push ebp */
  push32((uint32_t)(EBP));
  /* 113820c7 call dword ptr [0x113860d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d8))), 0x113820cdu);
  /* 113820cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113820cf pop ecx */
  ECX = (pop32());
  /* 113820d0 je 0x113821c7 */
  if (C.zf) goto L_113821c7;
  /* 113820d6 mov eax, dword ptr [0x113875b8] */
  EAX = (r32((uint32_t)(0x113875b8)));
  /* 113820db cmp eax, dword ptr [0x113875c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113875c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113820e1 jg 0x1138216f */
  if ((!C.zf&&C.sf==C.of)) goto L_1138216f;
  /* 113820e7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 113820e9 push 0x11387668 */
  push32((uint32_t)(0x11387668u));
  /* 113820ee push ebp */
  push32((uint32_t)(EBP));
  /* 113820ef push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 113820f4 push 0x11387688 */
  push32((uint32_t)(0x11387688u));
  /* 113820f9 push 0x113875f0 */
  push32((uint32_t)(0x113875f0u));
  /* 113820fe call dword ptr [0x113860e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860e8))), 0x11382104u);
  /* 11382104 push esi */
  push32((uint32_t)(ESI));
  /* 11382105 push 0x113875f0 */
  push32((uint32_t)(0x113875f0u));
  /* 1138210a call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x11382110u);
  /* 11382110 push esi */
  push32((uint32_t)(ESI));
  /* 11382111 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11382113 push 0x11387658 */
  push32((uint32_t)(0x11387658u));
  /* 11382118 push ebp */
  push32((uint32_t)(EBP));
  /* 11382119 call ebx */
  call_ind((uint32_t)(EBX), 0x1138211bu);
  /* 1138211b push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 11382120 push 0x11387678 */
  push32((uint32_t)(0x11387678u));
  /* 11382125 push ebp */
  push32((uint32_t)(EBP));
  /* 11382126 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 1138212b push 0x11387688 */
  push32((uint32_t)(0x11387688u));
  /* 11382130 push 0x11387600 */
  push32((uint32_t)(0x11387600u));
  /* 11382135 call dword ptr [0x113860e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860e8))), 0x1138213bu);
  /* 1138213b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138213e push esi */
  push32((uint32_t)(ESI));
  /* 1138213f push 0x11387600 */
  push32((uint32_t)(0x11387600u));
  /* 11382144 call dword ptr [0x113860b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b4))), 0x1138214au);
  /* 1138214a push esi */
  push32((uint32_t)(ESI));
  /* 1138214b push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11382150 push 0x11387670 */
  push32((uint32_t)(0x11387670u));
  /* 11382155 push ebp */
  push32((uint32_t)(EBP));
  /* 11382156 call ebx */
  call_ind((uint32_t)(EBX), 0x11382158u);
  /* 11382158 inc dword ptr [0x113875b8] */
  { uint32_t _r=(r32((uint32_t)(0x113875b8)))+1; w32((uint32_t)(0x113875b8), (_r)); fl_inc(_r,32); }
  /* 1138215e push 0x15e */
  push32((uint32_t)(0x15eu));
  /* 11382163 push ebp */
  push32((uint32_t)(EBP));
  /* 11382164 call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x1138216au);
  /* 1138216a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138216d jmp 0x113821c7 */
  goto L_113821c7;
L_1138216f:;
  /* 1138216f push esi */
  push32((uint32_t)(ESI));
  /* 11382170 push ebp */
  push32((uint32_t)(EBP));
  /* 11382171 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 11382176 push 0x11387658 */
  push32((uint32_t)(0x11387658u));
  /* 1138217b call dword ptr [0x11386108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386108))), 0x11382181u);
  /* 11382181 push esi */
  push32((uint32_t)(ESI));
  /* 11382182 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11382184 push 0x11387658 */
  push32((uint32_t)(0x11387658u));
  /* 11382189 push ebp */
  push32((uint32_t)(EBP));
  /* 1138218a call ebx */
  call_ind((uint32_t)(EBX), 0x1138218cu);
  /* 1138218c push esi */
  push32((uint32_t)(ESI));
  /* 1138218d push ebp */
  push32((uint32_t)(EBP));
  /* 1138218e push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 11382193 push 0x11387670 */
  push32((uint32_t)(0x11387670u));
  /* 11382198 call dword ptr [0x11386108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386108))), 0x1138219eu);
  /* 1138219e push esi */
  push32((uint32_t)(ESI));
  /* 1138219f push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 113821a4 push 0x11387670 */
  push32((uint32_t)(0x11387670u));
  /* 113821a9 push ebp */
  push32((uint32_t)(EBP));
  /* 113821aa call ebx */
  call_ind((uint32_t)(EBX), 0x113821acu);
  /* 113821ac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113821af mov dword ptr [0x113875b8], 1 */
  w32((uint32_t)(0x113875b8), (0x1u));
  /* 113821b9 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 113821be push ebp */
  push32((uint32_t)(EBP));
  /* 113821bf call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x113821c5u);
  /* 113821c5 pop ecx */
  ECX = (pop32());
  /* 113821c6 pop ecx */
  ECX = (pop32());
L_113821c7:;
  /* 113821c7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 113821c9 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x113821cfu);
  /* 113821cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113821d1 pop ecx */
  ECX = (pop32());
  /* 113821d2 je 0x1138239f */
  if (C.zf) goto L_1138239f;
  /* 113821d8 push ebp */
  push32((uint32_t)(EBP));
  /* 113821d9 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 113821de push 0x11387730 */
  push32((uint32_t)(0x11387730u));
  /* 113821e3 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x113821e9u);
  /* 113821e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113821ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113821ee jle 0x11382219 */
  if ((C.zf||C.sf!=C.of)) goto L_11382219;
  /* 113821f0 push esi */
  push32((uint32_t)(ESI));
  /* 113821f1 push ebp */
  push32((uint32_t)(EBP));
  /* 113821f2 push 0x11387730 */
  push32((uint32_t)(0x11387730u));
  /* 113821f7 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113821fdu);
  /* 113821fd push 1 */
  push32((uint32_t)(0x1u));
  /* 113821ff push ebp */
  push32((uint32_t)(EBP));
  /* 11382200 push 0x11387700 */
  push32((uint32_t)(0x11387700u));
  /* 11382205 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138220bu);
  /* 1138220b push esi */
  push32((uint32_t)(ESI));
  /* 1138220c push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1138220e push 0x11387700 */
  push32((uint32_t)(0x11387700u));
  /* 11382213 push ebp */
  push32((uint32_t)(EBP));
  /* 11382214 call ebx */
  call_ind((uint32_t)(EBX), 0x11382216u);
  /* 11382216 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382219:;
  /* 11382219 push ebp */
  push32((uint32_t)(EBP));
  /* 1138221a push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 1138221f push 0x11387740 */
  push32((uint32_t)(0x11387740u));
  /* 11382224 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x1138222au);
  /* 1138222a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138222d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138222f jle 0x1138225a */
  if ((C.zf||C.sf!=C.of)) goto L_1138225a;
  /* 11382231 push esi */
  push32((uint32_t)(ESI));
  /* 11382232 push ebp */
  push32((uint32_t)(EBP));
  /* 11382233 push 0x11387740 */
  push32((uint32_t)(0x11387740u));
  /* 11382238 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138223eu);
  /* 1138223e push 1 */
  push32((uint32_t)(0x1u));
  /* 11382240 push ebp */
  push32((uint32_t)(EBP));
  /* 11382241 push 0x11387708 */
  push32((uint32_t)(0x11387708u));
  /* 11382246 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138224cu);
  /* 1138224c push esi */
  push32((uint32_t)(ESI));
  /* 1138224d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1138224f push 0x11387708 */
  push32((uint32_t)(0x11387708u));
  /* 11382254 push ebp */
  push32((uint32_t)(EBP));
  /* 11382255 call ebx */
  call_ind((uint32_t)(EBX), 0x11382257u);
  /* 11382257 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1138225a:;
  /* 1138225a push ebp */
  push32((uint32_t)(EBP));
  /* 1138225b push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 11382260 push 0x11387750 */
  push32((uint32_t)(0x11387750u));
  /* 11382265 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x1138226bu);
  /* 1138226b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138226e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382270 jle 0x1138229b */
  if ((C.zf||C.sf!=C.of)) goto L_1138229b;
  /* 11382272 push esi */
  push32((uint32_t)(ESI));
  /* 11382273 push ebp */
  push32((uint32_t)(EBP));
  /* 11382274 push 0x11387750 */
  push32((uint32_t)(0x11387750u));
  /* 11382279 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138227fu);
  /* 1138227f push 1 */
  push32((uint32_t)(0x1u));
  /* 11382281 push ebp */
  push32((uint32_t)(EBP));
  /* 11382282 push 0x11387710 */
  push32((uint32_t)(0x11387710u));
  /* 11382287 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138228du);
  /* 1138228d push esi */
  push32((uint32_t)(ESI));
  /* 1138228e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11382290 push 0x11387710 */
  push32((uint32_t)(0x11387710u));
  /* 11382295 push ebp */
  push32((uint32_t)(EBP));
  /* 11382296 call ebx */
  call_ind((uint32_t)(EBX), 0x11382298u);
  /* 11382298 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1138229b:;
  /* 1138229b push ebp */
  push32((uint32_t)(EBP));
  /* 1138229c push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 113822a1 push 0x11387758 */
  push32((uint32_t)(0x11387758u));
  /* 113822a6 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x113822acu);
  /* 113822ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113822af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113822b1 jle 0x113822dc */
  if ((C.zf||C.sf!=C.of)) goto L_113822dc;
  /* 113822b3 push esi */
  push32((uint32_t)(ESI));
  /* 113822b4 push ebp */
  push32((uint32_t)(EBP));
  /* 113822b5 push 0x11387758 */
  push32((uint32_t)(0x11387758u));
  /* 113822ba call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113822c0u);
  /* 113822c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113822c2 push ebp */
  push32((uint32_t)(EBP));
  /* 113822c3 push 0x11387720 */
  push32((uint32_t)(0x11387720u));
  /* 113822c8 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113822ceu);
  /* 113822ce push esi */
  push32((uint32_t)(ESI));
  /* 113822cf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113822d1 push 0x11387720 */
  push32((uint32_t)(0x11387720u));
  /* 113822d6 push ebp */
  push32((uint32_t)(EBP));
  /* 113822d7 call ebx */
  call_ind((uint32_t)(EBX), 0x113822d9u);
  /* 113822d9 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113822dc:;
  /* 113822dc push ebp */
  push32((uint32_t)(EBP));
  /* 113822dd push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 113822e2 push 0x11387768 */
  push32((uint32_t)(0x11387768u));
  /* 113822e7 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x113822edu);
  /* 113822ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113822f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113822f2 jle 0x1138231d */
  if ((C.zf||C.sf!=C.of)) goto L_1138231d;
  /* 113822f4 push esi */
  push32((uint32_t)(ESI));
  /* 113822f5 push ebp */
  push32((uint32_t)(EBP));
  /* 113822f6 push 0x11387768 */
  push32((uint32_t)(0x11387768u));
  /* 113822fb call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382301u);
  /* 11382301 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382303 push ebp */
  push32((uint32_t)(EBP));
  /* 11382304 push 0x11387728 */
  push32((uint32_t)(0x11387728u));
  /* 11382309 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138230fu);
  /* 1138230f push esi */
  push32((uint32_t)(ESI));
  /* 11382310 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11382312 push 0x11387728 */
  push32((uint32_t)(0x11387728u));
  /* 11382317 push ebp */
  push32((uint32_t)(EBP));
  /* 11382318 call ebx */
  call_ind((uint32_t)(EBX), 0x1138231au);
  /* 1138231a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1138231d:;
  /* 1138231d push ebp */
  push32((uint32_t)(EBP));
  /* 1138231e push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 11382323 push 0x11387778 */
  push32((uint32_t)(0x11387778u));
  /* 11382328 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x1138232eu);
  /* 1138232e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11382331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382333 jle 0x1138235e */
  if ((C.zf||C.sf!=C.of)) goto L_1138235e;
  /* 11382335 push esi */
  push32((uint32_t)(ESI));
  /* 11382336 push ebp */
  push32((uint32_t)(EBP));
  /* 11382337 push 0x11387778 */
  push32((uint32_t)(0x11387778u));
  /* 1138233c call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382342u);
  /* 11382342 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382344 push ebp */
  push32((uint32_t)(EBP));
  /* 11382345 push 0x11387738 */
  push32((uint32_t)(0x11387738u));
  /* 1138234a call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382350u);
  /* 11382350 push esi */
  push32((uint32_t)(ESI));
  /* 11382351 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11382353 push 0x11387738 */
  push32((uint32_t)(0x11387738u));
  /* 11382358 push ebp */
  push32((uint32_t)(EBP));
  /* 11382359 call ebx */
  call_ind((uint32_t)(EBX), 0x1138235bu);
  /* 1138235b add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1138235e:;
  /* 1138235e push ebp */
  push32((uint32_t)(EBP));
  /* 1138235f push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 11382364 push 0x11387788 */
  push32((uint32_t)(0x11387788u));
  /* 11382369 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x1138236fu);
  /* 1138236f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11382372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382374 jle 0x1138239f */
  if ((C.zf||C.sf!=C.of)) goto L_1138239f;
  /* 11382376 push esi */
  push32((uint32_t)(ESI));
  /* 11382377 push ebp */
  push32((uint32_t)(EBP));
  /* 11382378 push 0x11387788 */
  push32((uint32_t)(0x11387788u));
  /* 1138237d call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382383u);
  /* 11382383 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382385 push ebp */
  push32((uint32_t)(EBP));
  /* 11382386 push 0x11387748 */
  push32((uint32_t)(0x11387748u));
  /* 1138238b call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382391u);
  /* 11382391 push esi */
  push32((uint32_t)(ESI));
  /* 11382392 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11382394 push 0x11387748 */
  push32((uint32_t)(0x11387748u));
  /* 11382399 push ebp */
  push32((uint32_t)(EBP));
  /* 1138239a call ebx */
  call_ind((uint32_t)(EBX), 0x1138239cu);
  /* 1138239c add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1138239f:;
  /* 1138239f push 0x33 */
  push32((uint32_t)(0x33u));
  /* 113823a1 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x113823a7u);
  /* 113823a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113823a9 pop ecx */
  ECX = (pop32());
  /* 113823aa je 0x1138258c */
  if (C.zf) goto L_1138258c;
  /* 113823b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113823b1 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 113823b6 push 0x113877a8 */
  push32((uint32_t)(0x113877a8u));
  /* 113823bb call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x113823c1u);
  /* 113823c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113823c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113823c6 jle 0x113823f4 */
  if ((C.zf||C.sf!=C.of)) goto L_113823f4;
  /* 113823c8 push esi */
  push32((uint32_t)(ESI));
  /* 113823c9 push ebp */
  push32((uint32_t)(EBP));
  /* 113823ca push 0x113877a8 */
  push32((uint32_t)(0x113877a8u));
  /* 113823cf call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113823d5u);
  /* 113823d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113823d7 push ebp */
  push32((uint32_t)(EBP));
  /* 113823d8 push 0x11387760 */
  push32((uint32_t)(0x11387760u));
  /* 113823dd call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113823e3u);
  /* 113823e3 push esi */
  push32((uint32_t)(ESI));
  /* 113823e4 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 113823e9 push 0x11387760 */
  push32((uint32_t)(0x11387760u));
  /* 113823ee push ebp */
  push32((uint32_t)(EBP));
  /* 113823ef call ebx */
  call_ind((uint32_t)(EBX), 0x113823f1u);
  /* 113823f1 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113823f4:;
  /* 113823f4 push ebp */
  push32((uint32_t)(EBP));
  /* 113823f5 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 113823fa push 0x113877b8 */
  push32((uint32_t)(0x113877b8u));
  /* 113823ff call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x11382405u);
  /* 11382405 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11382408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138240a jle 0x11382438 */
  if ((C.zf||C.sf!=C.of)) goto L_11382438;
  /* 1138240c push esi */
  push32((uint32_t)(ESI));
  /* 1138240d push ebp */
  push32((uint32_t)(EBP));
  /* 1138240e push 0x113877b8 */
  push32((uint32_t)(0x113877b8u));
  /* 11382413 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382419u);
  /* 11382419 push 1 */
  push32((uint32_t)(0x1u));
  /* 1138241b push ebp */
  push32((uint32_t)(EBP));
  /* 1138241c push 0x11387770 */
  push32((uint32_t)(0x11387770u));
  /* 11382421 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382427u);
  /* 11382427 push esi */
  push32((uint32_t)(ESI));
  /* 11382428 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 1138242d push 0x11387770 */
  push32((uint32_t)(0x11387770u));
  /* 11382432 push ebp */
  push32((uint32_t)(EBP));
  /* 11382433 call ebx */
  call_ind((uint32_t)(EBX), 0x11382435u);
  /* 11382435 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382438:;
  /* 11382438 push ebp */
  push32((uint32_t)(EBP));
  /* 11382439 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 1138243e push 0x113877c0 */
  push32((uint32_t)(0x113877c0u));
  /* 11382443 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x11382449u);
  /* 11382449 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138244c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138244e jle 0x1138247c */
  if ((C.zf||C.sf!=C.of)) goto L_1138247c;
  /* 11382450 push esi */
  push32((uint32_t)(ESI));
  /* 11382451 push ebp */
  push32((uint32_t)(EBP));
  /* 11382452 push 0x113877c0 */
  push32((uint32_t)(0x113877c0u));
  /* 11382457 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138245du);
  /* 1138245d push 1 */
  push32((uint32_t)(0x1u));
  /* 1138245f push ebp */
  push32((uint32_t)(EBP));
  /* 11382460 push 0x11387780 */
  push32((uint32_t)(0x11387780u));
  /* 11382465 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138246bu);
  /* 1138246b push esi */
  push32((uint32_t)(ESI));
  /* 1138246c push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 11382471 push 0x11387780 */
  push32((uint32_t)(0x11387780u));
  /* 11382476 push ebp */
  push32((uint32_t)(EBP));
  /* 11382477 call ebx */
  call_ind((uint32_t)(EBX), 0x11382479u);
  /* 11382479 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1138247c:;
  /* 1138247c push ebp */
  push32((uint32_t)(EBP));
  /* 1138247d push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 11382482 push 0x113877c8 */
  push32((uint32_t)(0x113877c8u));
  /* 11382487 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x1138248du);
  /* 1138248d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11382490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382492 jle 0x113824c0 */
  if ((C.zf||C.sf!=C.of)) goto L_113824c0;
  /* 11382494 push esi */
  push32((uint32_t)(ESI));
  /* 11382495 push ebp */
  push32((uint32_t)(EBP));
  /* 11382496 push 0x113877c8 */
  push32((uint32_t)(0x113877c8u));
  /* 1138249b call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113824a1u);
  /* 113824a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113824a3 push ebp */
  push32((uint32_t)(EBP));
  /* 113824a4 push 0x11387790 */
  push32((uint32_t)(0x11387790u));
  /* 113824a9 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113824afu);
  /* 113824af push esi */
  push32((uint32_t)(ESI));
  /* 113824b0 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 113824b5 push 0x11387790 */
  push32((uint32_t)(0x11387790u));
  /* 113824ba push ebp */
  push32((uint32_t)(EBP));
  /* 113824bb call ebx */
  call_ind((uint32_t)(EBX), 0x113824bdu);
  /* 113824bd add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113824c0:;
  /* 113824c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113824c1 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 113824c6 push 0x113877d8 */
  push32((uint32_t)(0x113877d8u));
  /* 113824cb call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x113824d1u);
  /* 113824d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113824d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113824d6 jle 0x11382504 */
  if ((C.zf||C.sf!=C.of)) goto L_11382504;
  /* 113824d8 push esi */
  push32((uint32_t)(ESI));
  /* 113824d9 push ebp */
  push32((uint32_t)(EBP));
  /* 113824da push 0x113877d8 */
  push32((uint32_t)(0x113877d8u));
  /* 113824df call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113824e5u);
  /* 113824e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113824e7 push ebp */
  push32((uint32_t)(EBP));
  /* 113824e8 push 0x11387798 */
  push32((uint32_t)(0x11387798u));
  /* 113824ed call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x113824f3u);
  /* 113824f3 push esi */
  push32((uint32_t)(ESI));
  /* 113824f4 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 113824f9 push 0x11387798 */
  push32((uint32_t)(0x11387798u));
  /* 113824fe push ebp */
  push32((uint32_t)(EBP));
  /* 113824ff call ebx */
  call_ind((uint32_t)(EBX), 0x11382501u);
  /* 11382501 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382504:;
  /* 11382504 push ebp */
  push32((uint32_t)(EBP));
  /* 11382505 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 1138250a push 0x113877e8 */
  push32((uint32_t)(0x113877e8u));
  /* 1138250f call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x11382515u);
  /* 11382515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11382518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138251a jle 0x11382548 */
  if ((C.zf||C.sf!=C.of)) goto L_11382548;
  /* 1138251c push esi */
  push32((uint32_t)(ESI));
  /* 1138251d push ebp */
  push32((uint32_t)(EBP));
  /* 1138251e push 0x113877e8 */
  push32((uint32_t)(0x113877e8u));
  /* 11382523 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382529u);
  /* 11382529 push 1 */
  push32((uint32_t)(0x1u));
  /* 1138252b push ebp */
  push32((uint32_t)(EBP));
  /* 1138252c push 0x113877a0 */
  push32((uint32_t)(0x113877a0u));
  /* 11382531 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x11382537u);
  /* 11382537 push esi */
  push32((uint32_t)(ESI));
  /* 11382538 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 1138253d push 0x113877a0 */
  push32((uint32_t)(0x113877a0u));
  /* 11382542 push ebp */
  push32((uint32_t)(EBP));
  /* 11382543 call ebx */
  call_ind((uint32_t)(EBX), 0x11382545u);
  /* 11382545 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382548:;
  /* 11382548 push ebp */
  push32((uint32_t)(EBP));
  /* 11382549 push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 1138254e push 0x113877f8 */
  push32((uint32_t)(0x113877f8u));
  /* 11382553 call dword ptr [0x11386104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386104))), 0x11382559u);
  /* 11382559 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138255c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138255e jle 0x1138258c */
  if ((C.zf||C.sf!=C.of)) goto L_1138258c;
  /* 11382560 push esi */
  push32((uint32_t)(ESI));
  /* 11382561 push ebp */
  push32((uint32_t)(EBP));
  /* 11382562 push 0x113877f8 */
  push32((uint32_t)(0x113877f8u));
  /* 11382567 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138256du);
  /* 1138256d push 1 */
  push32((uint32_t)(0x1u));
  /* 1138256f push ebp */
  push32((uint32_t)(EBP));
  /* 11382570 push 0x113877b0 */
  push32((uint32_t)(0x113877b0u));
  /* 11382575 call dword ptr [0x113860f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860f4))), 0x1138257bu);
  /* 1138257b push esi */
  push32((uint32_t)(ESI));
  /* 1138257c push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 11382581 push 0x113877b0 */
  push32((uint32_t)(0x113877b0u));
  /* 11382586 push ebp */
  push32((uint32_t)(EBP));
  /* 11382587 call ebx */
  call_ind((uint32_t)(EBX), 0x11382589u);
  /* 11382589 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1138258c:;
  /* 1138258c push 0xf */
  push32((uint32_t)(0xfu));
  /* 1138258e call dword ptr [0x113860d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d8))), 0x11382594u);
  /* 11382594 mov ebx, dword ptr [0x11386110] */
  EBX = (r32((uint32_t)(0x11386110)));
  /* 1138259a pop ecx */
  ECX = (pop32());
  /* 1138259b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1138259d je 0x11382618 */
  if (C.zf) goto L_11382618;
  /* 1138259f push ebp */
  push32((uint32_t)(EBP));
  /* 113825a0 push 0x113876f0 */
  push32((uint32_t)(0x113876f0u));
  /* 113825a5 call ebx */
  call_ind((uint32_t)(EBX), 0x113825a7u);
  /* 113825a7 mov edx, eax */
  EDX = (EAX);
  /* 113825a9 push ebp */
  push32((uint32_t)(EBP));
  /* 113825aa push 0x113875b0 */
  push32((uint32_t)(0x113875b0u));
  /* 113825af mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 113825b3 call ebx */
  call_ind((uint32_t)(EBX), 0x113825b5u);
  /* 113825b5 mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 113825b9 push ebp */
  push32((uint32_t)(EBP));
  /* 113825ba push 0x113876f8 */
  push32((uint32_t)(0x113876f8u));
  /* 113825bf add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113825c1 call dword ptr [0x11386110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386110))), 0x113825c7u);
  /* 113825c7 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113825c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113825cc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 113825ce jle 0x11382618 */
  if ((C.zf||C.sf!=C.of)) goto L_11382618;
  /* 113825d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113825d1 call dword ptr [0x11386114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386114))), 0x113825d7u);
  /* 113825d7 mov ebx, dword ptr [0x11386118] */
  EBX = (r32((uint32_t)(0x11386118)));
  /* 113825dd push esi */
  push32((uint32_t)(ESI));
  /* 113825de push ebp */
  push32((uint32_t)(EBP));
  /* 113825df push 0x113876f8 */
  push32((uint32_t)(0x113876f8u));
  /* 113825e4 call ebx */
  call_ind((uint32_t)(EBX), 0x113825e6u);
  /* 113825e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113825e8 push ebp */
  push32((uint32_t)(EBP));
  /* 113825e9 push 0x113875b0 */
  push32((uint32_t)(0x113875b0u));
  /* 113825ee call ebx */
  call_ind((uint32_t)(EBX), 0x113825f0u);
  /* 113825f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 113825f2 push ebp */
  push32((uint32_t)(EBP));
  /* 113825f3 push 0x113876f0 */
  push32((uint32_t)(0x113876f0u));
  /* 113825f8 call ebx */
  call_ind((uint32_t)(EBX), 0x113825fau);
  /* 113825fa push ebp */
  push32((uint32_t)(EBP));
  /* 113825fb call dword ptr [0x1138611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138611c))), 0x11382601u);
  /* 11382601 push ebp */
  push32((uint32_t)(EBP));
  /* 11382602 call dword ptr [0x11386114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386114))), 0x11382608u);
  /* 11382608 push 0x15e */
  push32((uint32_t)(0x15eu));
  /* 1138260d push 0xf */
  push32((uint32_t)(0xfu));
  /* 1138260f call dword ptr [0x113860c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860c0))), 0x11382615u);
  /* 11382615 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382618:;
  /* 11382618 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1138261a call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11382620u);
  /* 11382620 mov ebx, dword ptr [0x11386120] */
  EBX = (r32((uint32_t)(0x11386120)));
  /* 11382626 pop ecx */
  ECX = (pop32());
  /* 11382627 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11382629 je 0x11382647 */
  if (C.zf) goto L_11382647;
  /* 1138262b push 1 */
  push32((uint32_t)(0x1u));
  /* 1138262d call ebx */
  call_ind((uint32_t)(EBX), 0x1138262fu);
  /* 1138262f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11382631 pop ecx */
  ECX = (pop32());
  /* 11382632 je 0x11382647 */
  if (C.zf) goto L_11382647;
  /* 11382634 push 0x11387224 */
  push32((uint32_t)(0x11387224u));
  /* 11382639 call dword ptr [0x113860d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d4))), 0x1138263fu);
  /* 1138263f push esi */
  push32((uint32_t)(ESI));
  /* 11382640 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11382642 call edi */
  call_ind((uint32_t)(EDI), 0x11382644u);
  /* 11382644 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382647:;
  /* 11382647 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11382649 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x1138264fu);
  /* 1138264f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11382651 pop ecx */
  ECX = (pop32());
  /* 11382652 je 0x11382670 */
  if (C.zf) goto L_11382670;
  /* 11382654 push 2 */
  push32((uint32_t)(0x2u));
  /* 11382656 call ebx */
  call_ind((uint32_t)(EBX), 0x11382658u);
  /* 11382658 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1138265a pop ecx */
  ECX = (pop32());
  /* 1138265b je 0x11382670 */
  if (C.zf) goto L_11382670;
  /* 1138265d push 0x1138721c */
  push32((uint32_t)(0x1138721cu));
  /* 11382662 call dword ptr [0x113860d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d4))), 0x11382668u);
  /* 11382668 push esi */
  push32((uint32_t)(ESI));
  /* 11382669 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1138266b call edi */
  call_ind((uint32_t)(EDI), 0x1138266du);
  /* 1138266d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382670:;
  /* 11382670 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11382672 call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x11382678u);
  /* 11382678 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1138267a pop ecx */
  ECX = (pop32());
  /* 1138267b je 0x11382699 */
  if (C.zf) goto L_11382699;
  /* 1138267d push 3 */
  push32((uint32_t)(0x3u));
  /* 1138267f call ebx */
  call_ind((uint32_t)(EBX), 0x11382681u);
  /* 11382681 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11382683 pop ecx */
  ECX = (pop32());
  /* 11382684 je 0x11382699 */
  if (C.zf) goto L_11382699;
  /* 11382686 push 0x11387214 */
  push32((uint32_t)(0x11387214u));
  /* 1138268b call dword ptr [0x113860d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d4))), 0x11382691u);
  /* 11382691 push esi */
  push32((uint32_t)(ESI));
  /* 11382692 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11382694 call edi */
  call_ind((uint32_t)(EDI), 0x11382696u);
  /* 11382696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11382699:;
  /* 11382699 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1138269b call dword ptr [0x113860b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860b0))), 0x113826a1u);
  /* 113826a1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113826a3 pop ecx */
  ECX = (pop32());
  /* 113826a4 je 0x113826f4 */
  if (C.zf) goto L_113826f4;
  /* 113826a6 mov ebx, dword ptr [0x11386110] */
  EBX = (r32((uint32_t)(0x11386110)));
  /* 113826ac push ebp */
  push32((uint32_t)(EBP));
  /* 113826ad push 0x113876c0 */
  push32((uint32_t)(0x113876c0u));
  /* 113826b2 call ebx */
  call_ind((uint32_t)(EBX), 0x113826b4u);
  /* 113826b4 mov edx, eax */
  EDX = (EAX);
  /* 113826b6 push ebp */
  push32((uint32_t)(EBP));
  /* 113826b7 push 0x113876c8 */
  push32((uint32_t)(0x113876c8u));
  /* 113826bc mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 113826c0 call ebx */
  call_ind((uint32_t)(EBX), 0x113826c2u);
  /* 113826c2 mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 113826c6 push ebp */
  push32((uint32_t)(EBP));
  /* 113826c7 push 0x113876b8 */
  push32((uint32_t)(0x113876b8u));
  /* 113826cc add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113826ce call dword ptr [0x11386110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386110))), 0x113826d4u);
  /* 113826d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113826d7 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113826d9 jne 0x113826ee */
  if (!C.zf) goto L_113826ee;
  /* 113826db push 0x1138720c */
  push32((uint32_t)(0x1138720cu));
  /* 113826e0 call dword ptr [0x113860d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d4))), 0x113826e6u);
  /* 113826e6 push esi */
  push32((uint32_t)(ESI));
  /* 113826e7 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 113826e9 call edi */
  call_ind((uint32_t)(EDI), 0x113826ebu);
  /* 113826eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113826ee:;
  /* 113826ee mov ebx, dword ptr [0x11386120] */
  EBX = (r32((uint32_t)(0x11386120)));
L_113826f4:;
  /* 113826f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113826f6 call ebx */
  call_ind((uint32_t)(EBX), 0x113826f8u);
  /* 113826f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113826fa pop ecx */
  ECX = (pop32());
  /* 113826fb je 0x11382729 */
  if (C.zf) goto L_11382729;
  /* 113826fd push 2 */
  push32((uint32_t)(0x2u));
  /* 113826ff call ebx */
  call_ind((uint32_t)(EBX), 0x11382701u);
  /* 11382701 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11382703 pop ecx */
  ECX = (pop32());
  /* 11382704 je 0x11382729 */
  if (C.zf) goto L_11382729;
  /* 11382706 push 3 */
  push32((uint32_t)(0x3u));
  /* 11382708 call ebx */
  call_ind((uint32_t)(EBX), 0x1138270au);
  /* 1138270a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1138270c pop ecx */
  ECX = (pop32());
  /* 1138270d je 0x11382729 */
  if (C.zf) goto L_11382729;
  /* 1138270f push ebp */
  push32((uint32_t)(EBP));
  /* 11382710 call ebx */
  call_ind((uint32_t)(EBX), 0x11382712u);
  /* 11382712 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11382714 pop ecx */
  ECX = (pop32());
  /* 11382715 je 0x11382729 */
  if (C.zf) goto L_11382729;
  /* 11382717 push 0x11387204 */
  push32((uint32_t)(0x11387204u));
  /* 1138271c call dword ptr [0x113860d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d4))), 0x11382722u);
  /* 11382722 pop ecx */
  ECX = (pop32());
  /* 11382723 call dword ptr [0x11386124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386124))), 0x11382729u);
L_11382729:;
  /* 11382729 push esi */
  push32((uint32_t)(ESI));
  /* 1138272a call ebx */
  call_ind((uint32_t)(EBX), 0x1138272cu);
  /* 1138272c pop ecx */
  ECX = (pop32());
  /* 1138272d pop edi */
  EDI = (pop32());
  /* 1138272e pop esi */
  ESI = (pop32());
  /* 1138272f pop ebp */
  EBP = (pop32());
  /* 11382730 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11382732 pop ebx */
  EBX = (pop32());
  /* 11382733 je 0x11382747 */
  if (C.zf) goto L_11382747;
  /* 11382735 push 0x113871fc */
  push32((uint32_t)(0x113871fcu));
  /* 1138273a call dword ptr [0x113860d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860d4))), 0x11382740u);
  /* 11382740 pop ecx */
  ECX = (pop32());
  /* 11382741 call dword ptr [0x11386128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386128))), 0x11382747u);
L_11382747:;
  /* 11382747 pop ecx */
  ECX = (pop32());
  /* 11382748 ret  */
  ESPCHK(0x113814ccu, _esp0);
  ESP += 4; return;
}

/* FUN_10002749 @ 0x11382749 (217 bytes, 57 insns) */
void f_11382749(void) {
  FTRACE(0x11382749u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382749 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1138274d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382750 jne 0x113827de */
  if (!C.zf) goto L_113827de;
  /* 11382756 call dword ptr [0x11386090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386090))), 0x1138275cu);
  /* 1138275c push 1 */
  push32((uint32_t)(0x1u));
  /* 1138275e mov dword ptr [0x1138789c], eax */
  w32((uint32_t)(0x1138789c), (EAX));
  /* 11382763 call 0x1138317d */
  push32(0x11382768u); f_1138317d();
  /* 11382768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138276a pop ecx */
  ECX = (pop32());
  /* 1138276b je 0x113827a9 */
  if (C.zf) goto L_113827a9;
  /* 1138276d mov eax, dword ptr [0x1138789c] */
  EAX = (r32((uint32_t)(0x1138789c)));
  /* 11382772 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11382774 mov cl, byte ptr [0x1138789d] */
  CL = (r8((uint32_t)(0x1138789d)));
  /* 1138277a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1138277f shr dword ptr [0x1138789c], 0x10 */
  w32((uint32_t)(0x1138789c), (sh_shr((uint32_t)(r32((uint32_t)(0x1138789c))), (0x10u)&0x1f, 32)));
  /* 11382786 mov dword ptr [0x113878a4], eax */
  w32((uint32_t)(0x113878a4), (EAX));
  /* 1138278b mov dword ptr [0x113878a8], ecx */
  w32((uint32_t)(0x113878a8), (ECX));
  /* 11382791 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11382794 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11382796 mov dword ptr [0x113878a0], eax */
  w32((uint32_t)(0x113878a0), (EAX));
  /* 1138279b call 0x11382a10 */
  push32(0x113827a0u); f_11382a10();
  /* 113827a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113827a2 jne 0x113827ad */
  if (!C.zf) goto L_113827ad;
  /* 113827a4 call 0x113831b9 */
  push32(0x113827a9u); f_113831b9();
L_113827a9:;
  /* 113827a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113827ab jmp 0x1138281f */
  goto L_1138281f;
L_113827ad:;
  /* 113827ad call dword ptr [0x1138608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138608c))), 0x113827b3u);
  /* 113827b3 mov dword ptr [0x11387df8], eax */
  w32((uint32_t)(0x11387df8), (EAX));
  /* 113827b8 call 0x1138304b */
  push32(0x113827bdu); f_1138304b();
  /* 113827bd mov dword ptr [0x11387888], eax */
  w32((uint32_t)(0x11387888), (EAX));
  /* 113827c2 call 0x11382b35 */
  push32(0x113827c7u); f_11382b35();
  /* 113827c7 call 0x11382dfe */
  push32(0x113827ccu); f_11382dfe();
  /* 113827cc call 0x11382d45 */
  push32(0x113827d1u); f_11382d45();
  /* 113827d1 call 0x113828f2 */
  push32(0x113827d6u); f_113828f2();
  /* 113827d6 inc dword ptr [0x11387884] */
  { uint32_t _r=(r32((uint32_t)(0x11387884)))+1; w32((uint32_t)(0x11387884), (_r)); fl_inc(_r,32); }
  /* 113827dc jmp 0x1138281c */
  goto L_1138281c;
L_113827de:;
  /* 113827de xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113827e0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113827e2 jne 0x11382810 */
  if (!C.zf) goto L_11382810;
  /* 113827e4 cmp dword ptr [0x11387884], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11387884))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113827ea jle 0x113827a9 */
  if ((C.zf||C.sf!=C.of)) goto L_113827a9;
  /* 113827ec dec dword ptr [0x11387884] */
  { uint32_t _r=(r32((uint32_t)(0x11387884)))-1; w32((uint32_t)(0x11387884), (_r)); fl_dec(_r,32); }
  /* 113827f2 cmp dword ptr [0x113878d4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x113878d4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113827f8 jne 0x113827ff */
  if (!C.zf) goto L_113827ff;
  /* 113827fa call 0x11382930 */
  push32(0x113827ffu); f_11382930();
L_113827ff:;
  /* 113827ff call 0x11382cf1 */
  push32(0x11382804u); f_11382cf1();
  /* 11382804 call 0x11382a64 */
  push32(0x11382809u); f_11382a64();
  /* 11382809 call 0x113831b9 */
  push32(0x1138280eu); f_113831b9();
  /* 1138280e jmp 0x1138281c */
  goto L_1138281c;
L_11382810:;
  /* 11382810 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382813 jne 0x1138281c */
  if (!C.zf) goto L_1138281c;
  /* 11382815 push ecx */
  push32((uint32_t)(ECX));
  /* 11382816 call 0x11382a95 */
  push32(0x1138281bu); f_11382a95();
  /* 1138281b pop ecx */
  ECX = (pop32());
L_1138281c:;
  /* 1138281c push 1 */
  push32((uint32_t)(0x1u));
  /* 1138281e pop eax */
  EAX = (pop32());
L_1138281f:;
  /* 1138281f ret 0xc */
  ESPCHK(0x11382749u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11382822 (157 bytes, 73 insns) */
void f_11382822(void) {
  FTRACE(0x11382822u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382822 push ebp */
  push32((uint32_t)(EBP));
  /* 11382823 mov ebp, esp */
  EBP = (ESP);
  /* 11382825 push ebx */
  push32((uint32_t)(EBX));
  /* 11382826 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11382829 push esi */
  push32((uint32_t)(ESI));
  /* 1138282a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1138282d push edi */
  push32((uint32_t)(EDI));
  /* 1138282e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11382831 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382833 jne 0x1138283e */
  if (!C.zf) goto L_1138283e;
  /* 11382835 cmp dword ptr [0x11387884], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11387884))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138283c jmp 0x11382864 */
  goto L_11382864;
L_1138283e:;
  /* 1138283e cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382841 je 0x11382848 */
  if (C.zf) goto L_11382848;
  /* 11382843 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382846 jne 0x1138286a */
  if (!C.zf) goto L_1138286a;
L_11382848:;
  /* 11382848 mov eax, dword ptr [0x11387dfc] */
  EAX = (r32((uint32_t)(0x11387dfc)));
  /* 1138284d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138284f je 0x1138285a */
  if (C.zf) goto L_1138285a;
  /* 11382851 push edi */
  push32((uint32_t)(EDI));
  /* 11382852 push esi */
  push32((uint32_t)(ESI));
  /* 11382853 push ebx */
  push32((uint32_t)(EBX));
  /* 11382854 call eax */
  call_ind((uint32_t)(EAX), 0x11382856u);
  /* 11382856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382858 je 0x11382866 */
  if (C.zf) goto L_11382866;
L_1138285a:;
  /* 1138285a push edi */
  push32((uint32_t)(EDI));
  /* 1138285b push esi */
  push32((uint32_t)(ESI));
  /* 1138285c push ebx */
  push32((uint32_t)(EBX));
  /* 1138285d call 0x11382749 */
  push32(0x11382862u); f_11382749();
  /* 11382862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11382864:;
  /* 11382864 jne 0x1138286a */
  if (!C.zf) goto L_1138286a;
L_11382866:;
  /* 11382866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11382868 jmp 0x113828b8 */
  goto L_113828b8;
L_1138286a:;
  /* 1138286a push edi */
  push32((uint32_t)(EDI));
  /* 1138286b push esi */
  push32((uint32_t)(ESI));
  /* 1138286c push ebx */
  push32((uint32_t)(EBX));
  /* 1138286d call 0x11381000 */
  push32(0x11382872u); f_11381000();
  /* 11382872 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382875 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11382878 jne 0x11382886 */
  if (!C.zf) goto L_11382886;
  /* 1138287a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138287c jne 0x113828b5 */
  if (!C.zf) goto L_113828b5;
  /* 1138287e push edi */
  push32((uint32_t)(EDI));
  /* 1138287f push eax */
  push32((uint32_t)(EAX));
  /* 11382880 push ebx */
  push32((uint32_t)(EBX));
  /* 11382881 call 0x11382749 */
  push32(0x11382886u); f_11382749();
L_11382886:;
  /* 11382886 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382888 je 0x1138288f */
  if (C.zf) goto L_1138288f;
  /* 1138288a cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138288d jne 0x113828b5 */
  if (!C.zf) goto L_113828b5;
L_1138288f:;
  /* 1138288f push edi */
  push32((uint32_t)(EDI));
  /* 11382890 push esi */
  push32((uint32_t)(ESI));
  /* 11382891 push ebx */
  push32((uint32_t)(EBX));
  /* 11382892 call 0x11382749 */
  push32(0x11382897u); f_11382749();
  /* 11382897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382899 jne 0x1138289e */
  if (!C.zf) goto L_1138289e;
  /* 1138289b and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_1138289e:;
  /* 1138289e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113828a2 je 0x113828b5 */
  if (C.zf) goto L_113828b5;
  /* 113828a4 mov eax, dword ptr [0x11387dfc] */
  EAX = (r32((uint32_t)(0x11387dfc)));
  /* 113828a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113828ab je 0x113828b5 */
  if (C.zf) goto L_113828b5;
  /* 113828ad push edi */
  push32((uint32_t)(EDI));
  /* 113828ae push esi */
  push32((uint32_t)(ESI));
  /* 113828af push ebx */
  push32((uint32_t)(EBX));
  /* 113828b0 call eax */
  call_ind((uint32_t)(EAX), 0x113828b2u);
  /* 113828b2 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_113828b5:;
  /* 113828b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_113828b8:;
  /* 113828b8 pop edi */
  EDI = (pop32());
  /* 113828b9 pop esi */
  ESI = (pop32());
  /* 113828ba pop ebx */
  EBX = (pop32());
  /* 113828bb pop ebp */
  EBP = (pop32());
  /* 113828bc ret 0xc */
  ESPCHK(0x11382822u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x113828bf (48 bytes, 15 insns) */
void f_113828bf(void) {
  FTRACE(0x113828bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113828bf mov eax, dword ptr [0x11387890] */
  EAX = (r32((uint32_t)(0x11387890)));
  /* 113828c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113828c7 je 0x113828d6 */
  if (C.zf) goto L_113828d6;
  /* 113828c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113828cb jne 0x113828db */
  if (!C.zf) goto L_113828db;
  /* 113828cd cmp dword ptr [0x11387894], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11387894))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113828d4 jne 0x113828db */
  if (!C.zf) goto L_113828db;
L_113828d6:;
  /* 113828d6 call 0x1138322e */
  push32(0x113828dbu); f_1138322e();
L_113828db:;
  /* 113828db push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 113828df call 0x11383267 */
  push32(0x113828e4u); f_11383267();
  /* 113828e4 push 0xff */
  push32((uint32_t)(0xffu));
  /* 113828e9 call dword ptr [0x11387280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11387280))), 0x113828efu);
  /* 113828ef pop ecx */
  ECX = (pop32());
  /* 113828f0 pop ecx */
  ECX = (pop32());
  /* 113828f1 ret  */
  ESPCHK(0x113828bfu, _esp0);
  ESP += 4; return;
}

/* FUN_100028f2 @ 0x113828f2 (45 bytes, 12 insns) */
void f_113828f2(void) {
  FTRACE(0x113828f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113828f2 mov eax, dword ptr [0x11387df4] */
  EAX = (r32((uint32_t)(0x11387df4)));
  /* 113828f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113828f9 je 0x113828fd */
  if (C.zf) goto L_113828fd;
  /* 113828fb call eax */
  call_ind((uint32_t)(EAX), 0x113828fdu);
L_113828fd:;
  /* 113828fd push 0x11387010 */
  push32((uint32_t)(0x11387010u));
  /* 11382902 push 0x11387008 */
  push32((uint32_t)(0x11387008u));
  /* 11382907 call 0x113829f6 */
  push32(0x1138290cu); f_113829f6();
  /* 1138290c push 0x11387004 */
  push32((uint32_t)(0x11387004u));
  /* 11382911 push 0x11387000 */
  push32((uint32_t)(0x11387000u));
  /* 11382916 call 0x113829f6 */
  push32(0x1138291bu); f_113829f6();
  /* 1138291b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138291e ret  */
  ESPCHK(0x113828f2u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x1138291f (17 bytes, 6 insns) */
void f_1138291f(void) {
  FTRACE(0x1138291fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138291f push 0 */
  push32((uint32_t)(0x0u));
  /* 11382921 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382923 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11382927 call 0x1138293f */
  push32(0x1138292cu); f_1138293f();
  /* 1138292c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138292f ret  */
  ESPCHK(0x1138291fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002930 @ 0x11382930 (15 bytes, 6 insns) */
void f_11382930(void) {
  FTRACE(0x11382930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382930 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382932 push 0 */
  push32((uint32_t)(0x0u));
  /* 11382934 push 0 */
  push32((uint32_t)(0x0u));
  /* 11382936 call 0x1138293f */
  push32(0x1138293bu); f_1138293f();
  /* 1138293b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138293e ret  */
  ESPCHK(0x11382930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000293f @ 0x1138293f (163 bytes, 53 insns) */
void f_1138293f(void) {
  FTRACE(0x1138293fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138293f push edi */
  push32((uint32_t)(EDI));
  /* 11382940 call 0x113829e4 */
  push32(0x11382945u); f_113829e4();
  /* 11382945 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382947 pop edi */
  EDI = (pop32());
  /* 11382948 cmp dword ptr [0x113878d8], edi */
  { uint32_t _a=(r32((uint32_t)(0x113878d8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138294e jne 0x11382961 */
  if (!C.zf) goto L_11382961;
  /* 11382950 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11382954 call dword ptr [0x11386004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386004))), 0x1138295au);
  /* 1138295a push eax */
  push32((uint32_t)(EAX));
  /* 1138295b call dword ptr [0x11386098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386098))), 0x11382961u);
L_11382961:;
  /* 11382961 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382966 push ebx */
  push32((uint32_t)(EBX));
  /* 11382967 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1138296b mov dword ptr [0x113878d4], edi */
  w32((uint32_t)(0x113878d4), (EDI));
  /* 11382971 mov byte ptr [0x113878d0], bl */
  w8((uint32_t)(0x113878d0), (BL));
  /* 11382977 jne 0x113829b5 */
  if (!C.zf) goto L_113829b5;
  /* 11382979 mov eax, dword ptr [0x11387df0] */
  EAX = (r32((uint32_t)(0x11387df0)));
  /* 1138297e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382980 je 0x113829a4 */
  if (C.zf) goto L_113829a4;
  /* 11382982 mov ecx, dword ptr [0x11387dec] */
  ECX = (r32((uint32_t)(0x11387dec)));
  /* 11382988 push esi */
  push32((uint32_t)(ESI));
  /* 11382989 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 1138298c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138298e jb 0x113829a3 */
  if (C.cf) goto L_113829a3;
L_11382990:;
  /* 11382990 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11382992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382994 je 0x11382998 */
  if (C.zf) goto L_11382998;
  /* 11382996 call eax */
  call_ind((uint32_t)(EAX), 0x11382998u);
L_11382998:;
  /* 11382998 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1138299b cmp esi, dword ptr [0x11387df0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11387df0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113829a1 jae 0x11382990 */
  if (!C.cf) goto L_11382990;
L_113829a3:;
  /* 113829a3 pop esi */
  ESI = (pop32());
L_113829a4:;
  /* 113829a4 push 0x11387018 */
  push32((uint32_t)(0x11387018u));
  /* 113829a9 push 0x11387014 */
  push32((uint32_t)(0x11387014u));
  /* 113829ae call 0x113829f6 */
  push32(0x113829b3u); f_113829f6();
  /* 113829b3 pop ecx */
  ECX = (pop32());
  /* 113829b4 pop ecx */
  ECX = (pop32());
L_113829b5:;
  /* 113829b5 push 0x11387020 */
  push32((uint32_t)(0x11387020u));
  /* 113829ba push 0x1138701c */
  push32((uint32_t)(0x1138701cu));
  /* 113829bf call 0x113829f6 */
  push32(0x113829c4u); f_113829f6();
  /* 113829c4 pop ecx */
  ECX = (pop32());
  /* 113829c5 pop ecx */
  ECX = (pop32());
  /* 113829c6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 113829c8 pop ebx */
  EBX = (pop32());
  /* 113829c9 je 0x113829d2 */
  if (C.zf) goto L_113829d2;
  /* 113829cb call 0x113829ed */
  push32(0x113829d0u); f_113829ed();
  /* 113829d0 pop edi */
  EDI = (pop32());
  /* 113829d1 ret  */
  ESPCHK(0x1138293fu, _esp0);
  ESP += 4; return;
L_113829d2:;
  /* 113829d2 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 113829d6 mov dword ptr [0x113878d8], edi */
  w32((uint32_t)(0x113878d8), (EDI));
  /* 113829dc call dword ptr [0x11386094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386094))), 0x113829e2u);
  /* 113829e2 pop edi */
  EDI = (pop32());
  /* 113829e3 ret  */
  ESPCHK(0x1138293fu, _esp0);
  ESP += 4; return;
}

/* FUN_100029e4 @ 0x113829e4 (9 bytes, 4 insns) */
void f_113829e4(void) {
  FTRACE(0x113829e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113829e4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 113829e6 call 0x1138344f */
  push32(0x113829ebu); f_1138344f();
  /* 113829eb pop ecx */
  ECX = (pop32());
  /* 113829ec ret  */
  ESPCHK(0x113829e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100029ed @ 0x113829ed (9 bytes, 4 insns) */
void f_113829ed(void) {
  FTRACE(0x113829edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113829ed push 0xd */
  push32((uint32_t)(0xdu));
  /* 113829ef call 0x113834b0 */
  push32(0x113829f4u); f_113834b0();
  /* 113829f4 pop ecx */
  ECX = (pop32());
  /* 113829f5 ret  */
  ESPCHK(0x113829edu, _esp0);
  ESP += 4; return;
}

/* FUN_100029f6 @ 0x113829f6 (26 bytes, 12 insns) */
void f_113829f6(void) {
  FTRACE(0x113829f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113829f6 push esi */
  push32((uint32_t)(ESI));
  /* 113829f7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_113829fb:;
  /* 113829fb cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113829ff jae 0x11382a0e */
  if (!C.cf) goto L_11382a0e;
  /* 11382a01 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11382a03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382a05 je 0x11382a09 */
  if (C.zf) goto L_11382a09;
  /* 11382a07 call eax */
  call_ind((uint32_t)(EAX), 0x11382a09u);
L_11382a09:;
  /* 11382a09 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382a0c jmp 0x113829fb */
  goto L_113829fb;
L_11382a0e:;
  /* 11382a0e pop esi */
  ESI = (pop32());
  /* 11382a0f ret  */
  ESPCHK(0x113829f6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x11382a10 (84 bytes, 32 insns) */
void f_11382a10(void) {
  FTRACE(0x11382a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382a10 push esi */
  push32((uint32_t)(ESI));
  /* 11382a11 call 0x113833ba */
  push32(0x11382a16u); f_113833ba();
  /* 11382a16 call dword ptr [0x113860a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860a4))), 0x11382a1cu);
  /* 11382a1c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382a1f mov dword ptr [0x11387284], eax */
  w32((uint32_t)(0x11387284), (EAX));
  /* 11382a24 je 0x11382a60 */
  if (C.zf) goto L_11382a60;
  /* 11382a26 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11382a28 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382a2a call 0x113834c5 */
  push32(0x11382a2fu); f_113834c5();
  /* 11382a2f mov esi, eax */
  ESI = (EAX);
  /* 11382a31 pop ecx */
  ECX = (pop32());
  /* 11382a32 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382a34 pop ecx */
  ECX = (pop32());
  /* 11382a35 je 0x11382a60 */
  if (C.zf) goto L_11382a60;
  /* 11382a37 push esi */
  push32((uint32_t)(ESI));
  /* 11382a38 push dword ptr [0x11387284] */
  push32((uint32_t)(r32((uint32_t)(0x11387284))));
  /* 11382a3e call dword ptr [0x113860a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860a0))), 0x11382a44u);
  /* 11382a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382a46 je 0x11382a60 */
  if (C.zf) goto L_11382a60;
  /* 11382a48 push esi */
  push32((uint32_t)(ESI));
  /* 11382a49 call 0x11382a82 */
  push32(0x11382a4eu); f_11382a82();
  /* 11382a4e pop ecx */
  ECX = (pop32());
  /* 11382a4f call dword ptr [0x11386000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386000))), 0x11382a55u);
  /* 11382a55 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11382a59 push 1 */
  push32((uint32_t)(0x1u));
  /* 11382a5b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11382a5d pop eax */
  EAX = (pop32());
  /* 11382a5e pop esi */
  ESI = (pop32());
  /* 11382a5f ret  */
  ESPCHK(0x11382a10u, _esp0);
  ESP += 4; return;
L_11382a60:;
  /* 11382a60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11382a62 pop esi */
  ESI = (pop32());
  /* 11382a63 ret  */
  ESPCHK(0x11382a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a64 @ 0x11382a64 (30 bytes, 8 insns) */
void f_11382a64(void) {
  FTRACE(0x11382a64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382a64 call 0x113833e3 */
  push32(0x11382a69u); f_113833e3();
  /* 11382a69 mov eax, dword ptr [0x11387284] */
  EAX = (r32((uint32_t)(0x11387284)));
  /* 11382a6e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382a71 je 0x11382a81 */
  if (C.zf) goto L_11382a81;
  /* 11382a73 push eax */
  push32((uint32_t)(EAX));
  /* 11382a74 call dword ptr [0x113860a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860a8))), 0x11382a7au);
  /* 11382a7a or dword ptr [0x11387284], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11387284)))|(0xffffffffu); w32((uint32_t)(0x11387284), (_r)); fl_logic(_r,32); }
L_11382a81:;
  /* 11382a81 ret  */
  ESPCHK(0x11382a64u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a82 @ 0x11382a82 (19 bytes, 4 insns) */
void f_11382a82(void) {
  FTRACE(0x11382a82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382a82 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11382a86 mov dword ptr [eax + 0x50], 0x11387400 */
  w32((uint32_t)(EAX + 0x50), (0x11387400u));
  /* 11382a8d mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11382a94 ret  */
  ESPCHK(0x11382a82u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a95 @ 0x11382a95 (160 bytes, 62 insns) */
void f_11382a95(void) {
  FTRACE(0x11382a95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382a95 mov eax, dword ptr [0x11387284] */
  EAX = (r32((uint32_t)(0x11387284)));
  /* 11382a9a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382a9d je 0x11382b34 */
  if (C.zf) goto L_11382b34;
  /* 11382aa3 push esi */
  push32((uint32_t)(ESI));
  /* 11382aa4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11382aa8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382aaa jne 0x11382ab9 */
  if (!C.zf) goto L_11382ab9;
  /* 11382aac push eax */
  push32((uint32_t)(EAX));
  /* 11382aad call dword ptr [0x1138609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138609c))), 0x11382ab3u);
  /* 11382ab3 mov esi, eax */
  ESI = (EAX);
  /* 11382ab5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382ab7 je 0x11382b25 */
  if (C.zf) goto L_11382b25;
L_11382ab9:;
  /* 11382ab9 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11382abc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382abe je 0x11382ac7 */
  if (C.zf) goto L_11382ac7;
  /* 11382ac0 push eax */
  push32((uint32_t)(EAX));
  /* 11382ac1 call 0x11383552 */
  push32(0x11382ac6u); f_11383552();
  /* 11382ac6 pop ecx */
  ECX = (pop32());
L_11382ac7:;
  /* 11382ac7 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11382aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382acc je 0x11382ad5 */
  if (C.zf) goto L_11382ad5;
  /* 11382ace push eax */
  push32((uint32_t)(EAX));
  /* 11382acf call 0x11383552 */
  push32(0x11382ad4u); f_11383552();
  /* 11382ad4 pop ecx */
  ECX = (pop32());
L_11382ad5:;
  /* 11382ad5 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11382ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382ada je 0x11382ae3 */
  if (C.zf) goto L_11382ae3;
  /* 11382adc push eax */
  push32((uint32_t)(EAX));
  /* 11382add call 0x11383552 */
  push32(0x11382ae2u); f_11383552();
  /* 11382ae2 pop ecx */
  ECX = (pop32());
L_11382ae3:;
  /* 11382ae3 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11382ae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382ae8 je 0x11382af1 */
  if (C.zf) goto L_11382af1;
  /* 11382aea push eax */
  push32((uint32_t)(EAX));
  /* 11382aeb call 0x11383552 */
  push32(0x11382af0u); f_11383552();
  /* 11382af0 pop ecx */
  ECX = (pop32());
L_11382af1:;
  /* 11382af1 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11382af4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382af6 je 0x11382aff */
  if (C.zf) goto L_11382aff;
  /* 11382af8 push eax */
  push32((uint32_t)(EAX));
  /* 11382af9 call 0x11383552 */
  push32(0x11382afeu); f_11383552();
  /* 11382afe pop ecx */
  ECX = (pop32());
L_11382aff:;
  /* 11382aff mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11382b02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382b04 je 0x11382b0d */
  if (C.zf) goto L_11382b0d;
  /* 11382b06 push eax */
  push32((uint32_t)(EAX));
  /* 11382b07 call 0x11383552 */
  push32(0x11382b0cu); f_11383552();
  /* 11382b0c pop ecx */
  ECX = (pop32());
L_11382b0d:;
  /* 11382b0d mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11382b10 cmp eax, 0x11387400 */
  { uint32_t _a=(EAX),_b=(0x11387400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382b15 je 0x11382b1e */
  if (C.zf) goto L_11382b1e;
  /* 11382b17 push eax */
  push32((uint32_t)(EAX));
  /* 11382b18 call 0x11383552 */
  push32(0x11382b1du); f_11383552();
  /* 11382b1d pop ecx */
  ECX = (pop32());
L_11382b1e:;
  /* 11382b1e push esi */
  push32((uint32_t)(ESI));
  /* 11382b1f call 0x11383552 */
  push32(0x11382b24u); f_11383552();
  /* 11382b24 pop ecx */
  ECX = (pop32());
L_11382b25:;
  /* 11382b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11382b27 push dword ptr [0x11387284] */
  push32((uint32_t)(r32((uint32_t)(0x11387284))));
  /* 11382b2d call dword ptr [0x113860a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113860a0))), 0x11382b33u);
  /* 11382b33 pop esi */
  ESI = (pop32());
L_11382b34:;
  /* 11382b34 ret  */
  ESPCHK(0x11382a95u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b35 @ 0x11382b35 (444 bytes, 150 insns) */
void f_11382b35(void) {
  FTRACE(0x11382b35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382b35 push ebp */
  push32((uint32_t)(EBP));
  /* 11382b36 mov ebp, esp */
  EBP = (ESP);
  /* 11382b38 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11382b3b push ebx */
  push32((uint32_t)(EBX));
  /* 11382b3c push esi */
  push32((uint32_t)(ESI));
  /* 11382b3d push edi */
  push32((uint32_t)(EDI));
  /* 11382b3e push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11382b43 call 0x1138359a */
  push32(0x11382b48u); f_1138359a();
  /* 11382b48 mov esi, eax */
  ESI = (EAX);
  /* 11382b4a pop ecx */
  ECX = (pop32());
  /* 11382b4b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382b4d jne 0x11382b57 */
  if (!C.zf) goto L_11382b57;
  /* 11382b4f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11382b51 call 0x113828bf */
  push32(0x11382b56u); f_113828bf();
  /* 11382b56 pop ecx */
  ECX = (pop32());
L_11382b57:;
  /* 11382b57 mov dword ptr [0x11387ce0], esi */
  w32((uint32_t)(0x11387ce0), (ESI));
  /* 11382b5d mov dword ptr [0x11387de0], 0x20 */
  w32((uint32_t)(0x11387de0), (0x20u));
  /* 11382b67 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11382b6d:;
  /* 11382b6d cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382b6f jae 0x11382b8f */
  if (!C.cf) goto L_11382b8f;
  /* 11382b71 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11382b75 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11382b78 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11382b7c mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11382b80 mov eax, dword ptr [0x11387ce0] */
  EAX = (r32((uint32_t)(0x11387ce0)));
  /* 11382b85 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382b88 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11382b8d jmp 0x11382b6d */
  goto L_11382b6d;
L_11382b8f:;
  /* 11382b8f lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11382b92 push eax */
  push32((uint32_t)(EAX));
  /* 11382b93 call dword ptr [0x1138607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138607c))), 0x11382b99u);
  /* 11382b99 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11382b9e je 0x11382c75 */
  if (C.zf) goto L_11382c75;
  /* 11382ba4 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11382ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382ba9 je 0x11382c75 */
  if (C.zf) goto L_11382c75;
  /* 11382baf mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11382bb1 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11382bb4 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11382bb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11382bba mov eax, 0x800 */
  EAX = (0x800u);
  /* 11382bbf cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382bc1 jl 0x11382bc5 */
  if ((C.sf!=C.of)) goto L_11382bc5;
  /* 11382bc3 mov edi, eax */
  EDI = (EAX);
L_11382bc5:;
  /* 11382bc5 cmp dword ptr [0x11387de0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11387de0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382bcb jge 0x11382c23 */
  if ((C.sf==C.of)) goto L_11382c23;
  /* 11382bcd mov esi, 0x11387ce4 */
  ESI = (0x11387ce4u);
L_11382bd2:;
  /* 11382bd2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11382bd7 call 0x1138359a */
  push32(0x11382bdcu); f_1138359a();
  /* 11382bdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382bde pop ecx */
  ECX = (pop32());
  /* 11382bdf je 0x11382c1d */
  if (C.zf) goto L_11382c1d;
  /* 11382be1 add dword ptr [0x11387de0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11387de0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11387de0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11382be8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11382bea lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11382bf0:;
  /* 11382bf0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382bf2 jae 0x11382c10 */
  if (!C.cf) goto L_11382c10;
  /* 11382bf4 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11382bf8 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11382bfb and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11382bff mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11382c03 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11382c05 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11382c08 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11382c0e jmp 0x11382bf0 */
  goto L_11382bf0;
L_11382c10:;
  /* 11382c10 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382c13 cmp dword ptr [0x11387de0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11387de0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382c19 jl 0x11382bd2 */
  if ((C.sf!=C.of)) goto L_11382bd2;
  /* 11382c1b jmp 0x11382c23 */
  goto L_11382c23;
L_11382c1d:;
  /* 11382c1d mov edi, dword ptr [0x11387de0] */
  EDI = (r32((uint32_t)(0x11387de0)));
L_11382c23:;
  /* 11382c23 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11382c25 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11382c27 jle 0x11382c75 */
  if ((C.zf||C.sf!=C.of)) goto L_11382c75;
L_11382c29:;
  /* 11382c29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11382c2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11382c2e cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382c31 je 0x11382c6b */
  if (C.zf) goto L_11382c6b;
  /* 11382c33 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11382c35 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11382c37 je 0x11382c6b */
  if (C.zf) goto L_11382c6b;
  /* 11382c39 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11382c3b jne 0x11382c48 */
  if (!C.zf) goto L_11382c48;
  /* 11382c3d push ecx */
  push32((uint32_t)(ECX));
  /* 11382c3e call dword ptr [0x11386080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386080))), 0x11382c44u);
  /* 11382c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382c46 je 0x11382c6b */
  if (C.zf) goto L_11382c6b;
L_11382c48:;
  /* 11382c48 mov ecx, esi */
  ECX = (ESI);
  /* 11382c4a mov eax, esi */
  EAX = (ESI);
  /* 11382c4c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11382c4f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11382c52 mov ecx, dword ptr [ecx*4 + 0x11387ce0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11387ce0)));
  /* 11382c59 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11382c5c lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11382c5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11382c62 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11382c64 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11382c66 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11382c68 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11382c6b:;
  /* 11382c6b add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11382c6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11382c70 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11382c71 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382c73 jl 0x11382c29 */
  if ((C.sf!=C.of)) goto L_11382c29;
L_11382c75:;
  /* 11382c75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11382c77:;
  /* 11382c77 mov ecx, dword ptr [0x11387ce0] */
  ECX = (r32((uint32_t)(0x11387ce0)));
  /* 11382c7d lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11382c80 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382c84 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11382c87 jne 0x11382cd6 */
  if (!C.zf) goto L_11382cd6;
  /* 11382c89 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11382c8b mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11382c8f jne 0x11382c96 */
  if (!C.zf) goto L_11382c96;
  /* 11382c91 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11382c93 pop eax */
  EAX = (pop32());
  /* 11382c94 jmp 0x11382ca0 */
  goto L_11382ca0;
L_11382c96:;
  /* 11382c96 mov eax, ebx */
  EAX = (EBX);
  /* 11382c98 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11382c99 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11382c9b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11382c9d add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11382ca0:;
  /* 11382ca0 push eax */
  push32((uint32_t)(EAX));
  /* 11382ca1 call dword ptr [0x11386084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386084))), 0x11382ca7u);
  /* 11382ca7 mov edi, eax */
  EDI = (EAX);
  /* 11382ca9 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382cac je 0x11382cc5 */
  if (C.zf) goto L_11382cc5;
  /* 11382cae push edi */
  push32((uint32_t)(EDI));
  /* 11382caf call dword ptr [0x11386080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386080))), 0x11382cb5u);
  /* 11382cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382cb7 je 0x11382cc5 */
  if (C.zf) goto L_11382cc5;
  /* 11382cb9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11382cbe mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11382cc0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382cc3 jne 0x11382ccb */
  if (!C.zf) goto L_11382ccb;
L_11382cc5:;
  /* 11382cc5 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11382cc9 jmp 0x11382cda */
  goto L_11382cda;
L_11382ccb:;
  /* 11382ccb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382cce jne 0x11382cda */
  if (!C.zf) goto L_11382cda;
  /* 11382cd0 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11382cd4 jmp 0x11382cda */
  goto L_11382cda;
L_11382cd6:;
  /* 11382cd6 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11382cda:;
  /* 11382cda inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11382cdb cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382cde jl 0x11382c77 */
  if ((C.sf!=C.of)) goto L_11382c77;
  /* 11382ce0 push dword ptr [0x11387de0] */
  push32((uint32_t)(r32((uint32_t)(0x11387de0))));
  /* 11382ce6 call dword ptr [0x11386088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386088))), 0x11382cecu);
  /* 11382cec pop edi */
  EDI = (pop32());
  /* 11382ced pop esi */
  ESI = (pop32());
  /* 11382cee pop ebx */
  EBX = (pop32());
  /* 11382cef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11382cf0 ret  */
  ESPCHK(0x11382b35u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf1 @ 0x11382cf1 (84 bytes, 33 insns) */
void f_11382cf1(void) {
  FTRACE(0x11382cf1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382cf1 push ebx */
  push32((uint32_t)(EBX));
  /* 11382cf2 push esi */
  push32((uint32_t)(ESI));
  /* 11382cf3 push edi */
  push32((uint32_t)(EDI));
  /* 11382cf4 mov esi, 0x11387ce0 */
  ESI = (0x11387ce0u);
L_11382cf9:;
  /* 11382cf9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11382cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11382cfd je 0x11382d36 */
  if (C.zf) goto L_11382d36;
  /* 11382cff mov edi, eax */
  EDI = (EAX);
  /* 11382d01 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11382d06 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382d08 jae 0x11382d2b */
  if (!C.cf) goto L_11382d2b;
  /* 11382d0a lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11382d0d:;
  /* 11382d0d cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382d11 je 0x11382d1a */
  if (C.zf) goto L_11382d1a;
  /* 11382d13 push ebx */
  push32((uint32_t)(EBX));
  /* 11382d14 call dword ptr [0x11386078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386078))), 0x11382d1au);
L_11382d1a:;
  /* 11382d1a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11382d1c add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382d1f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11382d24 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11382d27 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382d29 jb 0x11382d0d */
  if (C.cf) goto L_11382d0d;
L_11382d2b:;
  /* 11382d2b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11382d2d call 0x11383552 */
  push32(0x11382d32u); f_11383552();
  /* 11382d32 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11382d35 pop ecx */
  ECX = (pop32());
L_11382d36:;
  /* 11382d36 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382d39 cmp esi, 0x11387de0 */
  { uint32_t _a=(ESI),_b=(0x11387de0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382d3f jl 0x11382cf9 */
  if ((C.sf!=C.of)) goto L_11382cf9;
  /* 11382d41 pop edi */
  EDI = (pop32());
  /* 11382d42 pop esi */
  ESI = (pop32());
  /* 11382d43 pop ebx */
  EBX = (pop32());
  /* 11382d44 ret  */
  ESPCHK(0x11382cf1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d45 @ 0x11382d45 (185 bytes, 71 insns) */
void f_11382d45(void) {
  FTRACE(0x11382d45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382d45 push ebx */
  push32((uint32_t)(EBX));
  /* 11382d46 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11382d48 cmp dword ptr [0x11387de8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11387de8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382d4e push esi */
  push32((uint32_t)(ESI));
  /* 11382d4f push edi */
  push32((uint32_t)(EDI));
  /* 11382d50 jne 0x11382d57 */
  if (!C.zf) goto L_11382d57;
  /* 11382d52 call 0x11383b73 */
  push32(0x11382d57u); f_11383b73();
L_11382d57:;
  /* 11382d57 mov esi, dword ptr [0x11387888] */
  ESI = (r32((uint32_t)(0x11387888)));
  /* 11382d5d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11382d5f:;
  /* 11382d5f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11382d61 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382d63 je 0x11382d77 */
  if (C.zf) goto L_11382d77;
  /* 11382d65 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382d67 je 0x11382d6a */
  if (C.zf) goto L_11382d6a;
  /* 11382d69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11382d6a:;
  /* 11382d6a push esi */
  push32((uint32_t)(ESI));
  /* 11382d6b call 0x11383720 */
  push32(0x11382d70u); f_11383720();
  /* 11382d70 pop ecx */
  ECX = (pop32());
  /* 11382d71 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11382d75 jmp 0x11382d5f */
  goto L_11382d5f;
L_11382d77:;
  /* 11382d77 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11382d7e push eax */
  push32((uint32_t)(EAX));
  /* 11382d7f call 0x1138359a */
  push32(0x11382d84u); f_1138359a();
  /* 11382d84 mov esi, eax */
  ESI = (EAX);
  /* 11382d86 pop ecx */
  ECX = (pop32());
  /* 11382d87 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382d89 mov dword ptr [0x113878b8], esi */
  w32((uint32_t)(0x113878b8), (ESI));
  /* 11382d8f jne 0x11382d99 */
  if (!C.zf) goto L_11382d99;
  /* 11382d91 push 9 */
  push32((uint32_t)(0x9u));
  /* 11382d93 call 0x113828bf */
  push32(0x11382d98u); f_113828bf();
  /* 11382d98 pop ecx */
  ECX = (pop32());
L_11382d99:;
  /* 11382d99 mov edi, dword ptr [0x11387888] */
  EDI = (r32((uint32_t)(0x11387888)));
  /* 11382d9f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382da1 je 0x11382ddc */
  if (C.zf) goto L_11382ddc;
  /* 11382da3 push ebp */
  push32((uint32_t)(EBP));
L_11382da4:;
  /* 11382da4 push edi */
  push32((uint32_t)(EDI));
  /* 11382da5 call 0x11383720 */
  push32(0x11382daau); f_11383720();
  /* 11382daa mov ebp, eax */
  EBP = (EAX);
  /* 11382dac pop ecx */
  ECX = (pop32());
  /* 11382dad inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11382dae cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382db1 je 0x11382dd5 */
  if (C.zf) goto L_11382dd5;
  /* 11382db3 push ebp */
  push32((uint32_t)(EBP));
  /* 11382db4 call 0x1138359a */
  push32(0x11382db9u); f_1138359a();
  /* 11382db9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382dbb pop ecx */
  ECX = (pop32());
  /* 11382dbc mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11382dbe jne 0x11382dc8 */
  if (!C.zf) goto L_11382dc8;
  /* 11382dc0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11382dc2 call 0x113828bf */
  push32(0x11382dc7u); f_113828bf();
  /* 11382dc7 pop ecx */
  ECX = (pop32());
L_11382dc8:;
  /* 11382dc8 push edi */
  push32((uint32_t)(EDI));
  /* 11382dc9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11382dcb call 0x11383630 */
  push32(0x11382dd0u); f_11383630();
  /* 11382dd0 pop ecx */
  ECX = (pop32());
  /* 11382dd1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382dd4 pop ecx */
  ECX = (pop32());
L_11382dd5:;
  /* 11382dd5 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382dd7 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382dd9 jne 0x11382da4 */
  if (!C.zf) goto L_11382da4;
  /* 11382ddb pop ebp */
  EBP = (pop32());
L_11382ddc:;
  /* 11382ddc push dword ptr [0x11387888] */
  push32((uint32_t)(r32((uint32_t)(0x11387888))));
  /* 11382de2 call 0x11383552 */
  push32(0x11382de7u); f_11383552();
  /* 11382de7 pop ecx */
  ECX = (pop32());
  /* 11382de8 mov dword ptr [0x11387888], ebx */
  w32((uint32_t)(0x11387888), (EBX));
  /* 11382dee mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11382df0 pop edi */
  EDI = (pop32());
  /* 11382df1 pop esi */
  ESI = (pop32());
  /* 11382df2 mov dword ptr [0x11387de4], 1 */
  w32((uint32_t)(0x11387de4), (0x1u));
  /* 11382dfc pop ebx */
  EBX = (pop32());
  /* 11382dfd ret  */
  ESPCHK(0x11382d45u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dfe @ 0x11382dfe (153 bytes, 62 insns) */
void f_11382dfe(void) {
  FTRACE(0x11382dfeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382dfe push ebp */
  push32((uint32_t)(EBP));
  /* 11382dff mov ebp, esp */
  EBP = (ESP);
  /* 11382e01 push ecx */
  push32((uint32_t)(ECX));
  /* 11382e02 push ecx */
  push32((uint32_t)(ECX));
  /* 11382e03 push ebx */
  push32((uint32_t)(EBX));
  /* 11382e04 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11382e06 cmp dword ptr [0x11387de8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11387de8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382e0c push esi */
  push32((uint32_t)(ESI));
  /* 11382e0d push edi */
  push32((uint32_t)(EDI));
  /* 11382e0e jne 0x11382e15 */
  if (!C.zf) goto L_11382e15;
  /* 11382e10 call 0x11383b73 */
  push32(0x11382e15u); f_11383b73();
L_11382e15:;
  /* 11382e15 mov esi, 0x113878dc */
  ESI = (0x113878dcu);
  /* 11382e1a push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11382e1f push esi */
  push32((uint32_t)(ESI));
  /* 11382e20 push ebx */
  push32((uint32_t)(EBX));
  /* 11382e21 call dword ptr [0x11386074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386074))), 0x11382e27u);
  /* 11382e27 mov eax, dword ptr [0x11387df8] */
  EAX = (r32((uint32_t)(0x11387df8)));
  /* 11382e2c mov dword ptr [0x113878c8], esi */
  w32((uint32_t)(0x113878c8), (ESI));
  /* 11382e32 mov edi, esi */
  EDI = (ESI);
  /* 11382e34 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382e36 je 0x11382e3a */
  if (C.zf) goto L_11382e3a;
  /* 11382e38 mov edi, eax */
  EDI = (EAX);
L_11382e3a:;
  /* 11382e3a lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11382e3d push eax */
  push32((uint32_t)(EAX));
  /* 11382e3e lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11382e41 push eax */
  push32((uint32_t)(EAX));
  /* 11382e42 push ebx */
  push32((uint32_t)(EBX));
  /* 11382e43 push ebx */
  push32((uint32_t)(EBX));
  /* 11382e44 push edi */
  push32((uint32_t)(EDI));
  /* 11382e45 call 0x11382e97 */
  push32(0x11382e4au); f_11382e97();
  /* 11382e4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11382e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11382e50 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11382e53 push eax */
  push32((uint32_t)(EAX));
  /* 11382e54 call 0x1138359a */
  push32(0x11382e59u); f_1138359a();
  /* 11382e59 mov esi, eax */
  ESI = (EAX);
  /* 11382e5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11382e5e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382e60 jne 0x11382e6a */
  if (!C.zf) goto L_11382e6a;
  /* 11382e62 push 8 */
  push32((uint32_t)(0x8u));
  /* 11382e64 call 0x113828bf */
  push32(0x11382e69u); f_113828bf();
  /* 11382e69 pop ecx */
  ECX = (pop32());
L_11382e6a:;
  /* 11382e6a lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11382e6d push eax */
  push32((uint32_t)(EAX));
  /* 11382e6e lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11382e71 push eax */
  push32((uint32_t)(EAX));
  /* 11382e72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11382e75 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11382e78 push eax */
  push32((uint32_t)(EAX));
  /* 11382e79 push esi */
  push32((uint32_t)(ESI));
  /* 11382e7a push edi */
  push32((uint32_t)(EDI));
  /* 11382e7b call 0x11382e97 */
  push32(0x11382e80u); f_11382e97();
  /* 11382e80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11382e83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11382e86 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11382e87 mov dword ptr [0x113878b0], esi */
  w32((uint32_t)(0x113878b0), (ESI));
  /* 11382e8d pop edi */
  EDI = (pop32());
  /* 11382e8e pop esi */
  ESI = (pop32());
  /* 11382e8f mov dword ptr [0x113878ac], eax */
  w32((uint32_t)(0x113878ac), (EAX));
  /* 11382e94 pop ebx */
  EBX = (pop32());
  /* 11382e95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11382e96 ret  */
  ESPCHK(0x11382dfeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e97 @ 0x11382e97 (436 bytes, 187 insns) */
void f_11382e97(void) {
  FTRACE(0x11382e97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11382e97 push ebp */
  push32((uint32_t)(EBP));
  /* 11382e98 mov ebp, esp */
  EBP = (ESP);
  /* 11382e9a mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11382e9d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11382ea0 push ebx */
  push32((uint32_t)(EBX));
  /* 11382ea1 push esi */
  push32((uint32_t)(ESI));
  /* 11382ea2 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11382ea5 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11382ea8 push edi */
  push32((uint32_t)(EDI));
  /* 11382ea9 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11382eac mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11382eb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11382eb5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11382eb7 je 0x11382ec1 */
  if (C.zf) goto L_11382ec1;
  /* 11382eb9 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11382ebb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382ebe mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11382ec1:;
  /* 11382ec1 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382ec4 jne 0x11382f0a */
  if (!C.zf) goto L_11382f0a;
L_11382ec6:;
  /* 11382ec6 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11382ec9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11382eca cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382ecd je 0x11382ef8 */
  if (C.zf) goto L_11382ef8;
  /* 11382ecf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11382ed1 je 0x11382ef8 */
  if (C.zf) goto L_11382ef8;
  /* 11382ed3 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11382ed6 test byte ptr [edx + 0x11387bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11387bc1)))&(0x4u); fl_logic(_r,8); }
  /* 11382edd je 0x11382eeb */
  if (C.zf) goto L_11382eeb;
  /* 11382edf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11382ee1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382ee3 je 0x11382eeb */
  if (C.zf) goto L_11382eeb;
  /* 11382ee5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11382ee7 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11382ee9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11382eea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11382eeb:;
  /* 11382eeb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11382eed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382eef je 0x11382ec6 */
  if (C.zf) goto L_11382ec6;
  /* 11382ef1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11382ef3 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11382ef5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11382ef6 jmp 0x11382ec6 */
  goto L_11382ec6;
L_11382ef8:;
  /* 11382ef8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11382efa test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382efc je 0x11382f02 */
  if (C.zf) goto L_11382f02;
  /* 11382efe and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11382f01 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11382f02:;
  /* 11382f02 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f05 jne 0x11382f4d */
  if (!C.zf) goto L_11382f4d;
  /* 11382f07 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11382f08 jmp 0x11382f4d */
  goto L_11382f4d;
L_11382f0a:;
  /* 11382f0a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11382f0c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382f0e je 0x11382f15 */
  if (C.zf) goto L_11382f15;
  /* 11382f10 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11382f12 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11382f14 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11382f15:;
  /* 11382f15 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11382f17 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11382f18 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11382f1b test byte ptr [ebx + 0x11387bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11387bc1)))&(0x4u); fl_logic(_r,8); }
  /* 11382f22 je 0x11382f30 */
  if (C.zf) goto L_11382f30;
  /* 11382f24 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11382f26 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382f28 je 0x11382f2f */
  if (C.zf) goto L_11382f2f;
  /* 11382f2a mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11382f2c mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11382f2e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11382f2f:;
  /* 11382f2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11382f30:;
  /* 11382f30 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f33 je 0x11382f3e */
  if (C.zf) goto L_11382f3e;
  /* 11382f35 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11382f37 je 0x11382f42 */
  if (C.zf) goto L_11382f42;
  /* 11382f39 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f3c jne 0x11382f0a */
  if (!C.zf) goto L_11382f0a;
L_11382f3e:;
  /* 11382f3e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11382f40 jne 0x11382f45 */
  if (!C.zf) goto L_11382f45;
L_11382f42:;
  /* 11382f42 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11382f43 jmp 0x11382f4d */
  goto L_11382f4d;
L_11382f45:;
  /* 11382f45 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382f47 je 0x11382f4d */
  if (C.zf) goto L_11382f4d;
  /* 11382f49 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11382f4d:;
  /* 11382f4d and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11382f51:;
  /* 11382f51 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f54 je 0x1138303a */
  if (C.zf) goto L_1138303a;
L_11382f5a:;
  /* 11382f5a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11382f5c cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f5f je 0x11382f66 */
  if (C.zf) goto L_11382f66;
  /* 11382f61 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f64 jne 0x11382f69 */
  if (!C.zf) goto L_11382f69;
L_11382f66:;
  /* 11382f66 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11382f67 jmp 0x11382f5a */
  goto L_11382f5a;
L_11382f69:;
  /* 11382f69 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f6c je 0x1138303a */
  if (C.zf) goto L_1138303a;
  /* 11382f72 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11382f74 je 0x11382f7e */
  if (C.zf) goto L_11382f7e;
  /* 11382f76 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11382f78 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11382f7b mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11382f7e:;
  /* 11382f7e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11382f81 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11382f83:;
  /* 11382f83 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11382f8a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11382f8c:;
  /* 11382f8c cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f8f jne 0x11382f95 */
  if (!C.zf) goto L_11382f95;
  /* 11382f91 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11382f92 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11382f93 jmp 0x11382f8c */
  goto L_11382f8c;
L_11382f95:;
  /* 11382f95 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382f98 jne 0x11382fc6 */
  if (!C.zf) goto L_11382fc6;
  /* 11382f9a test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11382f9d jne 0x11382fc4 */
  if (!C.zf) goto L_11382fc4;
  /* 11382f9f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11382fa1 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382fa4 je 0x11382fb3 */
  if (C.zf) goto L_11382fb3;
  /* 11382fa6 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382faa lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11382fad jne 0x11382fb3 */
  if (!C.zf) goto L_11382fb3;
  /* 11382faf mov eax, edx */
  EAX = (EDX);
  /* 11382fb1 jmp 0x11382fb6 */
  goto L_11382fb6;
L_11382fb3:;
  /* 11382fb3 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11382fb6:;
  /* 11382fb6 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11382fb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11382fbb cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382fbe sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11382fc1 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11382fc4:;
  /* 11382fc4 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11382fc6:;
  /* 11382fc6 mov edx, ebx */
  EDX = (EBX);
  /* 11382fc8 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11382fc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11382fcb je 0x11382fdb */
  if (C.zf) goto L_11382fdb;
  /* 11382fcd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11382fce:;
  /* 11382fce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382fd0 je 0x11382fd6 */
  if (C.zf) goto L_11382fd6;
  /* 11382fd2 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11382fd5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11382fd6:;
  /* 11382fd6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11382fd8 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11382fd9 jne 0x11382fce */
  if (!C.zf) goto L_11382fce;
L_11382fdb:;
  /* 11382fdb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11382fdd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11382fdf je 0x1138302b */
  if (C.zf) goto L_1138302b;
  /* 11382fe1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382fe5 jne 0x11382ff1 */
  if (!C.zf) goto L_11382ff1;
  /* 11382fe7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382fea je 0x1138302b */
  if (C.zf) goto L_1138302b;
  /* 11382fec cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11382fef je 0x1138302b */
  if (C.zf) goto L_1138302b;
L_11382ff1:;
  /* 11382ff1 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11382ff5 je 0x11383025 */
  if (C.zf) goto L_11383025;
  /* 11382ff7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11382ff9 je 0x11383014 */
  if (C.zf) goto L_11383014;
  /* 11382ffb movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11382ffe test byte ptr [ebx + 0x11387bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11387bc1)))&(0x4u); fl_logic(_r,8); }
  /* 11383005 je 0x1138300d */
  if (C.zf) goto L_1138300d;
  /* 11383007 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11383009 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1138300a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1138300b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1138300d:;
  /* 1138300d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1138300f mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11383011 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11383012 jmp 0x11383023 */
  goto L_11383023;
L_11383014:;
  /* 11383014 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11383017 test byte ptr [edx + 0x11387bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11387bc1)))&(0x4u); fl_logic(_r,8); }
  /* 1138301e je 0x11383023 */
  if (C.zf) goto L_11383023;
  /* 11383020 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11383021 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11383023:;
  /* 11383023 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11383025:;
  /* 11383025 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11383026 jmp 0x11382f83 */
  goto L_11382f83;
L_1138302b:;
  /* 1138302b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1138302d je 0x11383033 */
  if (C.zf) goto L_11383033;
  /* 1138302f and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11383032 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11383033:;
  /* 11383033 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11383035 jmp 0x11382f51 */
  goto L_11382f51;
L_1138303a:;
  /* 1138303a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1138303c je 0x11383041 */
  if (C.zf) goto L_11383041;
  /* 1138303e and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11383041:;
  /* 11383041 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11383044 pop edi */
  EDI = (pop32());
  /* 11383045 pop esi */
  ESI = (pop32());
  /* 11383046 pop ebx */
  EBX = (pop32());
  /* 11383047 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11383049 pop ebp */
  EBP = (pop32());
  /* 1138304a ret  */
  ESPCHK(0x11382e97u, _esp0);
  ESP += 4; return;
}

/* FUN_1000304b @ 0x1138304b (306 bytes, 132 insns) */
void f_1138304b(void) {
  FTRACE(0x1138304bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138304b push ecx */
  push32((uint32_t)(ECX));
  /* 1138304c push ecx */
  push32((uint32_t)(ECX));
  /* 1138304d mov eax, dword ptr [0x113879e0] */
  EAX = (r32((uint32_t)(0x113879e0)));
  /* 11383052 push ebx */
  push32((uint32_t)(EBX));
  /* 11383053 push ebp */
  push32((uint32_t)(EBP));
  /* 11383054 mov ebp, dword ptr [0x11386060] */
  EBP = (r32((uint32_t)(0x11386060)));
  /* 1138305a push esi */
  push32((uint32_t)(ESI));
  /* 1138305b push edi */
  push32((uint32_t)(EDI));
  /* 1138305c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1138305e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11383060 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11383062 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383064 jne 0x11383099 */
  if (!C.zf) goto L_11383099;
  /* 11383066 call ebp */
  call_ind((uint32_t)(EBP), 0x11383068u);
  /* 11383068 mov esi, eax */
  ESI = (EAX);
  /* 1138306a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138306c je 0x1138307a */
  if (C.zf) goto L_1138307a;
  /* 1138306e mov dword ptr [0x113879e0], 1 */
  w32((uint32_t)(0x113879e0), (0x1u));
  /* 11383078 jmp 0x113830a2 */
  goto L_113830a2;
L_1138307a:;
  /* 1138307a call dword ptr [0x11386064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386064))), 0x11383080u);
  /* 11383080 mov edi, eax */
  EDI = (EAX);
  /* 11383082 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383084 je 0x11383174 */
  if (C.zf) goto L_11383174;
  /* 1138308a mov dword ptr [0x113879e0], 2 */
  w32((uint32_t)(0x113879e0), (0x2u));
  /* 11383094 jmp 0x11383128 */
  goto L_11383128;
L_11383099:;
  /* 11383099 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138309c jne 0x11383123 */
  if (!C.zf) goto L_11383123;
L_113830a2:;
  /* 113830a2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113830a4 jne 0x113830b2 */
  if (!C.zf) goto L_113830b2;
  /* 113830a6 call ebp */
  call_ind((uint32_t)(EBP), 0x113830a8u);
  /* 113830a8 mov esi, eax */
  ESI = (EAX);
  /* 113830aa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113830ac je 0x11383174 */
  if (C.zf) goto L_11383174;
L_113830b2:;
  /* 113830b2 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 113830b5 mov eax, esi */
  EAX = (ESI);
  /* 113830b7 je 0x113830c7 */
  if (C.zf) goto L_113830c7;
L_113830b9:;
  /* 113830b9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113830ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113830bb cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 113830be jne 0x113830b9 */
  if (!C.zf) goto L_113830b9;
  /* 113830c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113830c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113830c2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 113830c5 jne 0x113830b9 */
  if (!C.zf) goto L_113830b9;
L_113830c7:;
  /* 113830c7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113830c9 mov edi, dword ptr [0x11386068] */
  EDI = (r32((uint32_t)(0x11386068)));
  /* 113830cf sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113830d1 push ebx */
  push32((uint32_t)(EBX));
  /* 113830d2 push ebx */
  push32((uint32_t)(EBX));
  /* 113830d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113830d4 push ebx */
  push32((uint32_t)(EBX));
  /* 113830d5 push ebx */
  push32((uint32_t)(EBX));
  /* 113830d6 push eax */
  push32((uint32_t)(EAX));
  /* 113830d7 push esi */
  push32((uint32_t)(ESI));
  /* 113830d8 push ebx */
  push32((uint32_t)(EBX));
  /* 113830d9 push ebx */
  push32((uint32_t)(EBX));
  /* 113830da mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 113830de call edi */
  call_ind((uint32_t)(EDI), 0x113830e0u);
  /* 113830e0 mov ebp, eax */
  EBP = (EAX);
  /* 113830e2 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113830e4 je 0x11383118 */
  if (C.zf) goto L_11383118;
  /* 113830e6 push ebp */
  push32((uint32_t)(EBP));
  /* 113830e7 call 0x1138359a */
  push32(0x113830ecu); f_1138359a();
  /* 113830ec cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113830ee pop ecx */
  ECX = (pop32());
  /* 113830ef mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 113830f3 je 0x11383118 */
  if (C.zf) goto L_11383118;
  /* 113830f5 push ebx */
  push32((uint32_t)(EBX));
  /* 113830f6 push ebx */
  push32((uint32_t)(EBX));
  /* 113830f7 push ebp */
  push32((uint32_t)(EBP));
  /* 113830f8 push eax */
  push32((uint32_t)(EAX));
  /* 113830f9 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 113830fd push esi */
  push32((uint32_t)(ESI));
  /* 113830fe push ebx */
  push32((uint32_t)(EBX));
  /* 113830ff push ebx */
  push32((uint32_t)(EBX));
  /* 11383100 call edi */
  call_ind((uint32_t)(EDI), 0x11383102u);
  /* 11383102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11383104 jne 0x11383114 */
  if (!C.zf) goto L_11383114;
  /* 11383106 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1138310a call 0x11383552 */
  push32(0x1138310fu); f_11383552();
  /* 1138310f pop ecx */
  ECX = (pop32());
  /* 11383110 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11383114:;
  /* 11383114 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11383118:;
  /* 11383118 push esi */
  push32((uint32_t)(ESI));
  /* 11383119 call dword ptr [0x1138606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138606c))), 0x1138311fu);
  /* 1138311f mov eax, ebx */
  EAX = (EBX);
  /* 11383121 jmp 0x11383176 */
  goto L_11383176;
L_11383123:;
  /* 11383123 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383126 jne 0x11383174 */
  if (!C.zf) goto L_11383174;
L_11383128:;
  /* 11383128 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138312a jne 0x11383138 */
  if (!C.zf) goto L_11383138;
  /* 1138312c call dword ptr [0x11386064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386064))), 0x11383132u);
  /* 11383132 mov edi, eax */
  EDI = (EAX);
  /* 11383134 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383136 je 0x11383174 */
  if (C.zf) goto L_11383174;
L_11383138:;
  /* 11383138 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1138313a mov eax, edi */
  EAX = (EDI);
  /* 1138313c je 0x11383148 */
  if (C.zf) goto L_11383148;
L_1138313e:;
  /* 1138313e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1138313f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383141 jne 0x1138313e */
  if (!C.zf) goto L_1138313e;
  /* 11383143 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11383144 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383146 jne 0x1138313e */
  if (!C.zf) goto L_1138313e;
L_11383148:;
  /* 11383148 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1138314a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1138314b mov ebp, eax */
  EBP = (EAX);
  /* 1138314d push ebp */
  push32((uint32_t)(EBP));
  /* 1138314e call 0x1138359a */
  push32(0x11383153u); f_1138359a();
  /* 11383153 mov esi, eax */
  ESI = (EAX);
  /* 11383155 pop ecx */
  ECX = (pop32());
  /* 11383156 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383158 jne 0x1138315e */
  if (!C.zf) goto L_1138315e;
  /* 1138315a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1138315c jmp 0x11383169 */
  goto L_11383169;
L_1138315e:;
  /* 1138315e push ebp */
  push32((uint32_t)(EBP));
  /* 1138315f push edi */
  push32((uint32_t)(EDI));
  /* 11383160 push esi */
  push32((uint32_t)(ESI));
  /* 11383161 call 0x11383b90 */
  push32(0x11383166u); f_11383b90();
  /* 11383166 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11383169:;
  /* 11383169 push edi */
  push32((uint32_t)(EDI));
  /* 1138316a call dword ptr [0x11386070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386070))), 0x11383170u);
  /* 11383170 mov eax, esi */
  EAX = (ESI);
  /* 11383172 jmp 0x11383176 */
  goto L_11383176;
L_11383174:;
  /* 11383174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11383176:;
  /* 11383176 pop edi */
  EDI = (pop32());
  /* 11383177 pop esi */
  ESI = (pop32());
  /* 11383178 pop ebp */
  EBP = (pop32());
  /* 11383179 pop ebx */
  EBX = (pop32());
  /* 1138317a pop ecx */
  ECX = (pop32());
  /* 1138317b pop ecx */
  ECX = (pop32());
  /* 1138317c ret  */
  ESPCHK(0x1138304bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000317d @ 0x1138317d (60 bytes, 20 insns) */
void f_1138317d(void) {
  FTRACE(0x1138317du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138317d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1138317f push 0 */
  push32((uint32_t)(0x0u));
  /* 11383181 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383185 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1138318a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1138318d push eax */
  push32((uint32_t)(EAX));
  /* 1138318e call dword ptr [0x11386058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386058))), 0x11383194u);
  /* 11383194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11383196 mov dword ptr [0x11387cc8], eax */
  w32((uint32_t)(0x11387cc8), (EAX));
  /* 1138319b je 0x113831b2 */
  if (C.zf) goto L_113831b2;
  /* 1138319d call 0x11383ec5 */
  push32(0x113831a2u); f_11383ec5();
  /* 113831a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113831a4 jne 0x113831b5 */
  if (!C.zf) goto L_113831b5;
  /* 113831a6 push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 113831ac call dword ptr [0x1138605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138605c))), 0x113831b2u);
L_113831b2:;
  /* 113831b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113831b4 ret  */
  ESPCHK(0x1138317du, _esp0);
  ESP += 4; return;
L_113831b5:;
  /* 113831b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113831b7 pop eax */
  EAX = (pop32());
  /* 113831b8 ret  */
  ESPCHK(0x1138317du, _esp0);
  ESP += 4; return;
}

/* FUN_100031b9 @ 0x113831b9 (117 bytes, 38 insns) */
void f_113831b9(void) {
  FTRACE(0x113831b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113831b9 push ebx */
  push32((uint32_t)(EBX));
  /* 113831ba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 113831bc cmp dword ptr [0x11387a98], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11387a98))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113831c2 push ebp */
  push32((uint32_t)(EBP));
  /* 113831c3 mov ebp, dword ptr [0x11386050] */
  EBP = (r32((uint32_t)(0x11386050)));
  /* 113831c9 jle 0x1138320f */
  if ((C.zf||C.sf!=C.of)) goto L_1138320f;
  /* 113831cb mov eax, dword ptr [0x11387a9c] */
  EAX = (r32((uint32_t)(0x11387a9c)));
  /* 113831d0 push esi */
  push32((uint32_t)(ESI));
  /* 113831d1 push edi */
  push32((uint32_t)(EDI));
  /* 113831d2 mov edi, dword ptr [0x11386054] */
  EDI = (r32((uint32_t)(0x11386054)));
  /* 113831d8 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_113831db:;
  /* 113831db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 113831e0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 113831e5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 113831e7 call edi */
  call_ind((uint32_t)(EDI), 0x113831e9u);
  /* 113831e9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 113831ee push 0 */
  push32((uint32_t)(0x0u));
  /* 113831f0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 113831f2 call edi */
  call_ind((uint32_t)(EDI), 0x113831f4u);
  /* 113831f4 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 113831f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113831f9 push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 113831ff call ebp */
  call_ind((uint32_t)(EBP), 0x11383201u);
  /* 11383201 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383204 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11383205 cmp ebx, dword ptr [0x11387a98] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11387a98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138320b jl 0x113831db */
  if ((C.sf!=C.of)) goto L_113831db;
  /* 1138320d pop edi */
  EDI = (pop32());
  /* 1138320e pop esi */
  ESI = (pop32());
L_1138320f:;
  /* 1138320f push dword ptr [0x11387a9c] */
  push32((uint32_t)(r32((uint32_t)(0x11387a9c))));
  /* 11383215 push 0 */
  push32((uint32_t)(0x0u));
  /* 11383217 push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 1138321d call ebp */
  call_ind((uint32_t)(EBP), 0x1138321fu);
  /* 1138321f push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 11383225 call dword ptr [0x1138605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138605c))), 0x1138322bu);
  /* 1138322b pop ebp */
  EBP = (pop32());
  /* 1138322c pop ebx */
  EBX = (pop32());
  /* 1138322d ret  */
  ESPCHK(0x113831b9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000322e @ 0x1138322e (57 bytes, 18 insns) */
void f_1138322e(void) {
  FTRACE(0x1138322eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138322e mov eax, dword ptr [0x11387890] */
  EAX = (r32((uint32_t)(0x11387890)));
  /* 11383233 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383236 je 0x11383245 */
  if (C.zf) goto L_11383245;
  /* 11383238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138323a jne 0x11383266 */
  if (!C.zf) goto L_11383266;
  /* 1138323c cmp dword ptr [0x11387894], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11387894))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383243 jne 0x11383266 */
  if (!C.zf) goto L_11383266;
L_11383245:;
  /* 11383245 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1138324a call 0x11383267 */
  push32(0x1138324fu); f_11383267();
  /* 1138324f mov eax, dword ptr [0x113879e4] */
  EAX = (r32((uint32_t)(0x113879e4)));
  /* 11383254 pop ecx */
  ECX = (pop32());
  /* 11383255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11383257 je 0x1138325b */
  if (C.zf) goto L_1138325b;
  /* 11383259 call eax */
  call_ind((uint32_t)(EAX), 0x1138325bu);
L_1138325b:;
  /* 1138325b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11383260 call 0x11383267 */
  push32(0x11383265u); f_11383267();
  /* 11383265 pop ecx */
  ECX = (pop32());
L_11383266:;
  /* 11383266 ret  */
  ESPCHK(0x1138322eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003267 @ 0x11383267 (339 bytes, 100 insns) */
void f_11383267(void) {
  FTRACE(0x11383267u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383267 push ebp */
  push32((uint32_t)(EBP));
  /* 11383268 mov ebp, esp */
  EBP = (ESP);
  /* 1138326a sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383270 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383273 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11383275 mov eax, 0x113872b0 */
  EAX = (0x113872b0u);
L_1138327a:;
  /* 1138327a cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138327c je 0x11383289 */
  if (C.zf) goto L_11383289;
  /* 1138327e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383281 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11383282 cmp eax, 0x11387340 */
  { uint32_t _a=(EAX),_b=(0x11387340u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383287 jl 0x1138327a */
  if ((C.sf!=C.of)) goto L_1138327a;
L_11383289:;
  /* 11383289 push esi */
  push32((uint32_t)(ESI));
  /* 1138328a mov esi, ecx */
  ESI = (ECX);
  /* 1138328c shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1138328f cmp edx, dword ptr [esi + 0x113872b0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x113872b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383295 jne 0x113833b7 */
  if (!C.zf) goto L_113833b7;
  /* 1138329b mov eax, dword ptr [0x11387890] */
  EAX = (r32((uint32_t)(0x11387890)));
  /* 113832a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113832a3 je 0x11383391 */
  if (C.zf) goto L_11383391;
  /* 113832a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113832ab jne 0x113832ba */
  if (!C.zf) goto L_113832ba;
  /* 113832ad cmp dword ptr [0x11387894], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11387894))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113832b4 je 0x11383391 */
  if (C.zf) goto L_11383391;
L_113832ba:;
  /* 113832ba cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113832c0 je 0x113833b7 */
  if (C.zf) goto L_113833b7;
  /* 113832c6 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 113832cc push 0x104 */
  push32((uint32_t)(0x104u));
  /* 113832d1 push eax */
  push32((uint32_t)(EAX));
  /* 113832d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113832d4 call dword ptr [0x11386074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386074))), 0x113832dau);
  /* 113832da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113832dc jne 0x113832f1 */
  if (!C.zf) goto L_113832f1;
  /* 113832de lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 113832e4 push 0x11386428 */
  push32((uint32_t)(0x11386428u));
  /* 113832e9 push eax */
  push32((uint32_t)(EAX));
  /* 113832ea call 0x11383630 */
  push32(0x113832efu); f_11383630();
  /* 113832ef pop ecx */
  ECX = (pop32());
  /* 113832f0 pop ecx */
  ECX = (pop32());
L_113832f1:;
  /* 113832f1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 113832f7 push edi */
  push32((uint32_t)(EDI));
  /* 113832f8 push eax */
  push32((uint32_t)(EAX));
  /* 113832f9 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 113832ff call 0x11383720 */
  push32(0x11383304u); f_11383720();
  /* 11383304 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11383305 pop ecx */
  ECX = (pop32());
  /* 11383306 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383309 jbe 0x11383334 */
  if ((C.cf||C.zf)) goto L_11383334;
  /* 1138330b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11383311 push eax */
  push32((uint32_t)(EAX));
  /* 11383312 call 0x11383720 */
  push32(0x11383317u); f_11383720();
  /* 11383317 mov edi, eax */
  EDI = (EAX);
  /* 11383319 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1138331f sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383322 push 3 */
  push32((uint32_t)(0x3u));
  /* 11383324 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383326 push 0x11386424 */
  push32((uint32_t)(0x11386424u));
  /* 1138332b push edi */
  push32((uint32_t)(EDI));
  /* 1138332c call 0x113847a0 */
  push32(0x11383331u); f_113847a0();
  /* 11383331 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11383334:;
  /* 11383334 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1138333a push 0x11386408 */
  push32((uint32_t)(0x11386408u));
  /* 1138333f push eax */
  push32((uint32_t)(EAX));
  /* 11383340 call 0x11383630 */
  push32(0x11383345u); f_11383630();
  /* 11383345 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1138334b push edi */
  push32((uint32_t)(EDI));
  /* 1138334c push eax */
  push32((uint32_t)(EAX));
  /* 1138334d call 0x11383640 */
  push32(0x11383352u); f_11383640();
  /* 11383352 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11383358 push 0x11386404 */
  push32((uint32_t)(0x11386404u));
  /* 1138335d push eax */
  push32((uint32_t)(EAX));
  /* 1138335e call 0x11383640 */
  push32(0x11383363u); f_11383640();
  /* 11383363 push dword ptr [esi + 0x113872b4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x113872b4))));
  /* 11383369 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1138336f push eax */
  push32((uint32_t)(EAX));
  /* 11383370 call 0x11383640 */
  push32(0x11383375u); f_11383640();
  /* 11383375 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1138337a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11383380 push 0x113863dc */
  push32((uint32_t)(0x113863dcu));
  /* 11383385 push eax */
  push32((uint32_t)(EAX));
  /* 11383386 call 0x1138470e */
  push32(0x1138338bu); f_1138470e();
  /* 1138338b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138338e pop edi */
  EDI = (pop32());
  /* 1138338f jmp 0x113833b7 */
  goto L_113833b7;
L_11383391:;
  /* 11383391 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11383394 lea esi, [esi + 0x113872b4] */
  ESI = ((uint32_t)(ESI + 0x113872b4));
  /* 1138339a push 0 */
  push32((uint32_t)(0x0u));
  /* 1138339c push eax */
  push32((uint32_t)(EAX));
  /* 1138339d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1138339f call 0x11383720 */
  push32(0x113833a4u); f_11383720();
  /* 113833a4 pop ecx */
  ECX = (pop32());
  /* 113833a5 push eax */
  push32((uint32_t)(EAX));
  /* 113833a6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 113833a8 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 113833aa call dword ptr [0x11386084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386084))), 0x113833b0u);
  /* 113833b0 push eax */
  push32((uint32_t)(EAX));
  /* 113833b1 call dword ptr [0x1138604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138604c))), 0x113833b7u);
L_113833b7:;
  /* 113833b7 pop esi */
  ESI = (pop32());
  /* 113833b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113833b9 ret  */
  ESPCHK(0x11383267u, _esp0);
  ESP += 4; return;
}

/* FUN_100033ba @ 0x113833ba (41 bytes, 12 insns) */
void f_113833ba(void) {
  FTRACE(0x113833bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113833ba push esi */
  push32((uint32_t)(ESI));
  /* 113833bb mov esi, dword ptr [0x11386048] */
  ESI = (r32((uint32_t)(0x11386048)));
  /* 113833c1 push dword ptr [0x11387384] */
  push32((uint32_t)(r32((uint32_t)(0x11387384))));
  /* 113833c7 call esi */
  call_ind((uint32_t)(ESI), 0x113833c9u);
  /* 113833c9 push dword ptr [0x11387374] */
  push32((uint32_t)(r32((uint32_t)(0x11387374))));
  /* 113833cf call esi */
  call_ind((uint32_t)(ESI), 0x113833d1u);
  /* 113833d1 push dword ptr [0x11387364] */
  push32((uint32_t)(r32((uint32_t)(0x11387364))));
  /* 113833d7 call esi */
  call_ind((uint32_t)(ESI), 0x113833d9u);
  /* 113833d9 push dword ptr [0x11387344] */
  push32((uint32_t)(r32((uint32_t)(0x11387344))));
  /* 113833df call esi */
  call_ind((uint32_t)(ESI), 0x113833e1u);
  /* 113833e1 pop esi */
  ESI = (pop32());
  /* 113833e2 ret  */
  ESPCHK(0x113833bau, _esp0);
  ESP += 4; return;
}

/* FUN_100033e3 @ 0x113833e3 (108 bytes, 34 insns) */
void f_113833e3(void) {
  FTRACE(0x113833e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113833e3 push esi */
  push32((uint32_t)(ESI));
  /* 113833e4 push edi */
  push32((uint32_t)(EDI));
  /* 113833e5 mov edi, dword ptr [0x11386078] */
  EDI = (r32((uint32_t)(0x11386078)));
  /* 113833eb mov esi, 0x11387340 */
  ESI = (0x11387340u);
L_113833f0:;
  /* 113833f0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 113833f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113833f4 je 0x11383421 */
  if (C.zf) goto L_11383421;
  /* 113833f6 cmp esi, 0x11387384 */
  { uint32_t _a=(ESI),_b=(0x11387384u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113833fc je 0x11383421 */
  if (C.zf) goto L_11383421;
  /* 113833fe cmp esi, 0x11387374 */
  { uint32_t _a=(ESI),_b=(0x11387374u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383404 je 0x11383421 */
  if (C.zf) goto L_11383421;
  /* 11383406 cmp esi, 0x11387364 */
  { uint32_t _a=(ESI),_b=(0x11387364u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138340c je 0x11383421 */
  if (C.zf) goto L_11383421;
  /* 1138340e cmp esi, 0x11387344 */
  { uint32_t _a=(ESI),_b=(0x11387344u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383414 je 0x11383421 */
  if (C.zf) goto L_11383421;
  /* 11383416 push eax */
  push32((uint32_t)(EAX));
  /* 11383417 call edi */
  call_ind((uint32_t)(EDI), 0x11383419u);
  /* 11383419 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1138341b call 0x11383552 */
  push32(0x11383420u); f_11383552();
  /* 11383420 pop ecx */
  ECX = (pop32());
L_11383421:;
  /* 11383421 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383424 cmp esi, 0x11387400 */
  { uint32_t _a=(ESI),_b=(0x11387400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138342a jl 0x113833f0 */
  if ((C.sf!=C.of)) goto L_113833f0;
  /* 1138342c push dword ptr [0x11387364] */
  push32((uint32_t)(r32((uint32_t)(0x11387364))));
  /* 11383432 call edi */
  call_ind((uint32_t)(EDI), 0x11383434u);
  /* 11383434 push dword ptr [0x11387374] */
  push32((uint32_t)(r32((uint32_t)(0x11387374))));
  /* 1138343a call edi */
  call_ind((uint32_t)(EDI), 0x1138343cu);
  /* 1138343c push dword ptr [0x11387384] */
  push32((uint32_t)(r32((uint32_t)(0x11387384))));
  /* 11383442 call edi */
  call_ind((uint32_t)(EDI), 0x11383444u);
  /* 11383444 push dword ptr [0x11387344] */
  push32((uint32_t)(r32((uint32_t)(0x11387344))));
  /* 1138344a call edi */
  call_ind((uint32_t)(EDI), 0x1138344cu);
  /* 1138344c pop edi */
  EDI = (pop32());
  /* 1138344d pop esi */
  ESI = (pop32());
  /* 1138344e ret  */
  ESPCHK(0x113833e3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000344f @ 0x1138344f (97 bytes, 37 insns) */
void f_1138344f(void) {
  FTRACE(0x1138344fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138344f push ebp */
  push32((uint32_t)(EBP));
  /* 11383450 mov ebp, esp */
  EBP = (ESP);
  /* 11383452 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383455 push esi */
  push32((uint32_t)(ESI));
  /* 11383456 cmp dword ptr [eax*4 + 0x11387340], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11387340))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138345e lea esi, [eax*4 + 0x11387340] */
  ESI = ((uint32_t)(EAX*4 + 0x11387340));
  /* 11383465 jne 0x113834a5 */
  if (!C.zf) goto L_113834a5;
  /* 11383467 push edi */
  push32((uint32_t)(EDI));
  /* 11383468 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1138346a call 0x1138359a */
  push32(0x1138346fu); f_1138359a();
  /* 1138346f mov edi, eax */
  EDI = (EAX);
  /* 11383471 pop ecx */
  ECX = (pop32());
  /* 11383472 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11383474 jne 0x1138347e */
  if (!C.zf) goto L_1138347e;
  /* 11383476 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11383478 call 0x113828bf */
  push32(0x1138347du); f_113828bf();
  /* 1138347d pop ecx */
  ECX = (pop32());
L_1138347e:;
  /* 1138347e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11383480 call 0x1138344f */
  push32(0x11383485u); f_1138344f();
  /* 11383485 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383488 pop ecx */
  ECX = (pop32());
  /* 11383489 push edi */
  push32((uint32_t)(EDI));
  /* 1138348a jne 0x11383496 */
  if (!C.zf) goto L_11383496;
  /* 1138348c call dword ptr [0x11386048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386048))), 0x11383492u);
  /* 11383492 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11383494 jmp 0x1138349c */
  goto L_1138349c;
L_11383496:;
  /* 11383496 call 0x11383552 */
  push32(0x1138349bu); f_11383552();
  /* 1138349b pop ecx */
  ECX = (pop32());
L_1138349c:;
  /* 1138349c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1138349e call 0x113834b0 */
  push32(0x113834a3u); f_113834b0();
  /* 113834a3 pop ecx */
  ECX = (pop32());
  /* 113834a4 pop edi */
  EDI = (pop32());
L_113834a5:;
  /* 113834a5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 113834a7 call dword ptr [0x11386044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386044))), 0x113834adu);
  /* 113834ad pop esi */
  ESI = (pop32());
  /* 113834ae pop ebp */
  EBP = (pop32());
  /* 113834af ret  */
  ESPCHK(0x1138344fu, _esp0);
  ESP += 4; return;
}

/* FUN_100034b0 @ 0x113834b0 (21 bytes, 7 insns) */
void f_113834b0(void) {
  FTRACE(0x113834b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113834b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113834b1 mov ebp, esp */
  EBP = (ESP);
  /* 113834b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113834b6 push dword ptr [eax*4 + 0x11387340] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11387340))));
  /* 113834bd call dword ptr [0x11386040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386040))), 0x113834c3u);
  /* 113834c3 pop ebp */
  EBP = (pop32());
  /* 113834c4 ret  */
  ESPCHK(0x113834b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100034c5 @ 0x113834c5 (141 bytes, 56 insns) */
void f_113834c5(void) {
  FTRACE(0x113834c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113834c5 push ebx */
  push32((uint32_t)(EBX));
  /* 113834c6 push esi */
  push32((uint32_t)(ESI));
  /* 113834c7 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 113834cb push edi */
  push32((uint32_t)(EDI));
  /* 113834cc imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113834d1 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113834d4 mov ebx, esi */
  EBX = (ESI);
  /* 113834d6 ja 0x113834e5 */
  if ((!C.cf&&!C.zf)) goto L_113834e5;
  /* 113834d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 113834da jne 0x113834df */
  if (!C.zf) goto L_113834df;
  /* 113834dc push 1 */
  push32((uint32_t)(0x1u));
  /* 113834de pop esi */
  ESI = (pop32());
L_113834df:;
  /* 113834df add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113834e2 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_113834e5:;
  /* 113834e5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 113834e7 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113834ea ja 0x11383526 */
  if ((!C.cf&&!C.zf)) goto L_11383526;
  /* 113834ec cmp ebx, dword ptr [0x11387590] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11387590))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113834f2 ja 0x11383511 */
  if ((!C.cf&&!C.zf)) goto L_11383511;
  /* 113834f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 113834f6 call 0x1138344f */
  push32(0x113834fbu); f_1138344f();
  /* 113834fb push ebx */
  push32((uint32_t)(EBX));
  /* 113834fc call 0x11384259 */
  push32(0x11383501u); f_11384259();
  /* 11383501 push 9 */
  push32((uint32_t)(0x9u));
  /* 11383503 mov edi, eax */
  EDI = (EAX);
  /* 11383505 call 0x113834b0 */
  push32(0x1138350au); f_113834b0();
  /* 1138350a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138350d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1138350f jne 0x1138353c */
  if (!C.zf) goto L_1138353c;
L_11383511:;
  /* 11383511 push esi */
  push32((uint32_t)(ESI));
  /* 11383512 push 8 */
  push32((uint32_t)(0x8u));
  /* 11383514 push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 1138351a call dword ptr [0x1138603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138603c))), 0x11383520u);
  /* 11383520 mov edi, eax */
  EDI = (EAX);
  /* 11383522 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11383524 jne 0x11383548 */
  if (!C.zf) goto L_11383548;
L_11383526:;
  /* 11383526 cmp dword ptr [0x11387a5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11387a5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138352d je 0x11383548 */
  if (C.zf) goto L_11383548;
  /* 1138352f push esi */
  push32((uint32_t)(ESI));
  /* 11383530 call 0x113848f8 */
  push32(0x11383535u); f_113848f8();
  /* 11383535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11383537 pop ecx */
  ECX = (pop32());
  /* 11383538 je 0x1138354e */
  if (C.zf) goto L_1138354e;
  /* 1138353a jmp 0x113834e5 */
  goto L_113834e5;
L_1138353c:;
  /* 1138353c push ebx */
  push32((uint32_t)(EBX));
  /* 1138353d push 0 */
  push32((uint32_t)(0x0u));
  /* 1138353f push edi */
  push32((uint32_t)(EDI));
  /* 11383540 call 0x113848a0 */
  push32(0x11383545u); f_113848a0();
  /* 11383545 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11383548:;
  /* 11383548 mov eax, edi */
  EAX = (EDI);
L_1138354a:;
  /* 1138354a pop edi */
  EDI = (pop32());
  /* 1138354b pop esi */
  ESI = (pop32());
  /* 1138354c pop ebx */
  EBX = (pop32());
  /* 1138354d ret  */
  ESPCHK(0x113834c5u, _esp0);
  ESP += 4; return;
L_1138354e:;
  /* 1138354e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11383550 jmp 0x1138354a */
  goto L_1138354a;
}

/* FUN_10003552 @ 0x11383552 (72 bytes, 29 insns) */
void f_11383552(void) {
  FTRACE(0x11383552u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383552 push esi */
  push32((uint32_t)(ESI));
  /* 11383553 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11383557 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11383559 je 0x11383598 */
  if (C.zf) goto L_11383598;
  /* 1138355b push 9 */
  push32((uint32_t)(0x9u));
  /* 1138355d call 0x1138344f */
  push32(0x11383562u); f_1138344f();
  /* 11383562 push esi */
  push32((uint32_t)(ESI));
  /* 11383563 call 0x11383f03 */
  push32(0x11383568u); f_11383f03();
  /* 11383568 pop ecx */
  ECX = (pop32());
  /* 11383569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138356b pop ecx */
  ECX = (pop32());
  /* 1138356c je 0x11383581 */
  if (C.zf) goto L_11383581;
  /* 1138356e push esi */
  push32((uint32_t)(ESI));
  /* 1138356f push eax */
  push32((uint32_t)(EAX));
  /* 11383570 call 0x11383f2e */
  push32(0x11383575u); f_11383f2e();
  /* 11383575 push 9 */
  push32((uint32_t)(0x9u));
  /* 11383577 call 0x113834b0 */
  push32(0x1138357cu); f_113834b0();
  /* 1138357c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138357f pop esi */
  ESI = (pop32());
  /* 11383580 ret  */
  ESPCHK(0x11383552u, _esp0);
  ESP += 4; return;
L_11383581:;
  /* 11383581 push 9 */
  push32((uint32_t)(0x9u));
  /* 11383583 call 0x113834b0 */
  push32(0x11383588u); f_113834b0();
  /* 11383588 pop ecx */
  ECX = (pop32());
  /* 11383589 push esi */
  push32((uint32_t)(ESI));
  /* 1138358a push 0 */
  push32((uint32_t)(0x0u));
  /* 1138358c push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 11383592 call dword ptr [0x11386050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386050))), 0x11383598u);
L_11383598:;
  /* 11383598 pop esi */
  ESI = (pop32());
  /* 11383599 ret  */
  ESPCHK(0x11383552u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1138359a (18 bytes, 6 insns) */
void f_1138359a(void) {
  FTRACE(0x1138359au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138359a push dword ptr [0x11387a5c] */
  push32((uint32_t)(r32((uint32_t)(0x11387a5c))));
  /* 113835a0 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 113835a4 call 0x113835ac */
  push32(0x113835a9u); f_113835ac();
  /* 113835a9 pop ecx */
  ECX = (pop32());
  /* 113835aa pop ecx */
  ECX = (pop32());
  /* 113835ab ret  */
  ESPCHK(0x1138359au, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x113835ac (44 bytes, 16 insns) */
void f_113835ac(void) {
  FTRACE(0x113835acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113835ac cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113835b1 ja 0x113835d5 */
  if ((!C.cf&&!C.zf)) goto L_113835d5;
L_113835b3:;
  /* 113835b3 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 113835b7 call 0x113835d8 */
  push32(0x113835bcu); f_113835d8();
  /* 113835bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113835be pop ecx */
  ECX = (pop32());
  /* 113835bf jne 0x113835d7 */
  if (!C.zf) goto L_113835d7;
  /* 113835c1 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113835c5 je 0x113835d7 */
  if (C.zf) goto L_113835d7;
  /* 113835c7 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 113835cb call 0x113848f8 */
  push32(0x113835d0u); f_113848f8();
  /* 113835d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113835d2 pop ecx */
  ECX = (pop32());
  /* 113835d3 jne 0x113835b3 */
  if (!C.zf) goto L_113835b3;
L_113835d5:;
  /* 113835d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113835d7:;
  /* 113835d7 ret  */
  ESPCHK(0x113835acu, _esp0);
  ESP += 4; return;
}

/* FUN_100035d8 @ 0x113835d8 (78 bytes, 30 insns) */
void f_113835d8(void) {
  FTRACE(0x113835d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113835d8 push esi */
  push32((uint32_t)(ESI));
  /* 113835d9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 113835dd cmp esi, dword ptr [0x11387590] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11387590))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113835e3 push edi */
  push32((uint32_t)(EDI));
  /* 113835e4 ja 0x11383607 */
  if ((!C.cf&&!C.zf)) goto L_11383607;
  /* 113835e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 113835e8 call 0x1138344f */
  push32(0x113835edu); f_1138344f();
  /* 113835ed push esi */
  push32((uint32_t)(ESI));
  /* 113835ee call 0x11384259 */
  push32(0x113835f3u); f_11384259();
  /* 113835f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 113835f5 mov edi, eax */
  EDI = (EAX);
  /* 113835f7 call 0x113834b0 */
  push32(0x113835fcu); f_113834b0();
  /* 113835fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113835ff test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11383601 je 0x11383607 */
  if (C.zf) goto L_11383607;
  /* 11383603 mov eax, edi */
  EAX = (EDI);
  /* 11383605 jmp 0x11383623 */
  goto L_11383623;
L_11383607:;
  /* 11383607 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11383609 jne 0x1138360e */
  if (!C.zf) goto L_1138360e;
  /* 1138360b push 1 */
  push32((uint32_t)(0x1u));
  /* 1138360d pop esi */
  ESI = (pop32());
L_1138360e:;
  /* 1138360e add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383611 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11383614 push esi */
  push32((uint32_t)(ESI));
  /* 11383615 push 0 */
  push32((uint32_t)(0x0u));
  /* 11383617 push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 1138361d call dword ptr [0x1138603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138603c))), 0x11383623u);
L_11383623:;
  /* 11383623 pop edi */
  EDI = (pop32());
  /* 11383624 pop esi */
  ESI = (pop32());
  /* 11383625 ret  */
  ESPCHK(0x113835d8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003630 @ 0x11383630 (7 bytes, 3 insns) */
void f_11383630(void) {
  FTRACE(0x11383630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383630 push edi */
  push32((uint32_t)(EDI));
  /* 11383631 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11383635 jmp 0x113836a1 */
  jmp_ind(0x113836a1u); return;
}

/* FUN_10003640 @ 0x11383640 (224 bytes, 84 insns) */
void f_11383640(void) {
  FTRACE(0x11383640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383640 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11383644 push edi */
  push32((uint32_t)(EDI));
  /* 11383645 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1138364b je 0x1138365c */
  if (C.zf) goto L_1138365c;
L_1138364d:;
  /* 1138364d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1138364f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11383650 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11383652 je 0x1138368f */
  if (C.zf) goto L_1138368f;
  /* 11383654 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1138365a jne 0x1138364d */
  if (!C.zf) goto L_1138364d;
L_1138365c:;
  /* 1138365c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1138365e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11383663 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383665 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11383668 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1138366a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1138366d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11383672 je 0x1138365c */
  if (C.zf) goto L_1138365c;
  /* 11383674 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11383677 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11383679 je 0x1138369e */
  if (C.zf) goto L_1138369e;
  /* 1138367b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1138367d je 0x11383699 */
  if (C.zf) goto L_11383699;
  /* 1138367f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11383684 je 0x11383694 */
  if (C.zf) goto L_11383694;
  /* 11383686 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1138368b je 0x1138368f */
  if (C.zf) goto L_1138368f;
  /* 1138368d jmp 0x1138365c */
  goto L_1138365c;
L_1138368f:;
  /* 1138368f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11383692 jmp 0x113836a1 */
  goto L_113836a1;
L_11383694:;
  /* 11383694 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11383697 jmp 0x113836a1 */
  goto L_113836a1;
L_11383699:;
  /* 11383699 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1138369c jmp 0x113836a1 */
  goto L_113836a1;
L_1138369e:;
  /* 1138369e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_113836a1:;
  /* 113836a1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 113836a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113836ab je 0x113836c6 */
  if (C.zf) goto L_113836c6;
L_113836ad:;
  /* 113836ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113836af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113836b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 113836b2 je 0x11383718 */
  if (C.zf) goto L_11383718;
  /* 113836b4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 113836b6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113836b7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 113836bd jne 0x113836ad */
  if (!C.zf) goto L_113836ad;
  /* 113836bf jmp 0x113836c6 */
  goto L_113836c6;
L_113836c1:;
  /* 113836c1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113836c3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_113836c6:;
  /* 113836c6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 113836cb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 113836cd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113836cf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113836d2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 113836d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113836d6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113836d9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 113836de je 0x113836c1 */
  if (C.zf) goto L_113836c1;
  /* 113836e0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 113836e2 je 0x11383718 */
  if (C.zf) goto L_11383718;
  /* 113836e4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 113836e6 je 0x1138370f */
  if (C.zf) goto L_1138370f;
  /* 113836e8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 113836ee je 0x11383702 */
  if (C.zf) goto L_11383702;
  /* 113836f0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 113836f6 je 0x113836fa */
  if (C.zf) goto L_113836fa;
  /* 113836f8 jmp 0x113836c1 */
  goto L_113836c1;
L_113836fa:;
  /* 113836fa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 113836fc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11383700 pop edi */
  EDI = (pop32());
  /* 11383701 ret  */
  ESPCHK(0x11383640u, _esp0);
  ESP += 4; return;
L_11383702:;
  /* 11383702 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11383705 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11383709 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1138370d pop edi */
  EDI = (pop32());
  /* 1138370e ret  */
  ESPCHK(0x11383640u, _esp0);
  ESP += 4; return;
L_1138370f:;
  /* 1138370f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11383712 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11383716 pop edi */
  EDI = (pop32());
  /* 11383717 ret  */
  ESPCHK(0x11383640u, _esp0);
  ESP += 4; return;
L_11383718:;
  /* 11383718 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1138371a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1138371e pop edi */
  EDI = (pop32());
  /* 1138371f ret  */
  ESPCHK(0x11383640u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11383720 (123 bytes, 44 insns) */
void f_11383720(void) {
  FTRACE(0x11383720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383720 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11383724 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1138372a je 0x11383740 */
  if (C.zf) goto L_11383740;
L_1138372c:;
  /* 1138372c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1138372e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1138372f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11383731 je 0x11383773 */
  if (C.zf) goto L_11383773;
  /* 11383733 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11383739 jne 0x1138372c */
  if (!C.zf) goto L_1138372c;
  /* 1138373b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11383740:;
  /* 11383740 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11383742 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11383747 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383749 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1138374c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1138374e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383751 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11383756 je 0x11383740 */
  if (C.zf) goto L_11383740;
  /* 11383758 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1138375b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1138375d je 0x11383791 */
  if (C.zf) goto L_11383791;
  /* 1138375f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11383761 je 0x11383787 */
  if (C.zf) goto L_11383787;
  /* 11383763 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11383768 je 0x1138377d */
  if (C.zf) goto L_1138377d;
  /* 1138376a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1138376f je 0x11383773 */
  if (C.zf) goto L_11383773;
  /* 11383771 jmp 0x11383740 */
  goto L_11383740;
L_11383773:;
  /* 11383773 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11383776 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1138377a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1138377c ret  */
  ESPCHK(0x11383720u, _esp0);
  ESP += 4; return;
L_1138377d:;
  /* 1138377d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11383780 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11383784 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383786 ret  */
  ESPCHK(0x11383720u, _esp0);
  ESP += 4; return;
L_11383787:;
  /* 11383787 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1138378a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1138378e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383790 ret  */
  ESPCHK(0x11383720u, _esp0);
  ESP += 4; return;
L_11383791:;
  /* 11383791 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11383794 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11383798 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1138379a ret  */
  ESPCHK(0x11383720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000379b @ 0x1138379b (429 bytes, 143 insns) */
void f_1138379b(void) {
  FTRACE(0x1138379bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138379b push ebp */
  push32((uint32_t)(EBP));
  /* 1138379c mov ebp, esp */
  EBP = (ESP);
  /* 1138379e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113837a1 push ebx */
  push32((uint32_t)(EBX));
  /* 113837a2 push esi */
  push32((uint32_t)(ESI));
  /* 113837a3 push edi */
  push32((uint32_t)(EDI));
  /* 113837a4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113837a6 call 0x1138344f */
  push32(0x113837abu); f_1138344f();
  /* 113837ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 113837ae call 0x11383948 */
  push32(0x113837b3u); f_11383948();
  /* 113837b3 mov ebx, eax */
  EBX = (EAX);
  /* 113837b5 pop ecx */
  ECX = (pop32());
  /* 113837b6 cmp ebx, dword ptr [0x11387aa0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11387aa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113837bc pop ecx */
  ECX = (pop32());
  /* 113837bd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 113837c0 jne 0x113837c9 */
  if (!C.zf) goto L_113837c9;
L_113837c2:;
  /* 113837c2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 113837c4 jmp 0x11383939 */
  goto L_11383939;
L_113837c9:;
  /* 113837c9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 113837cb je 0x11383927 */
  if (C.zf) goto L_11383927;
  /* 113837d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113837d3 mov eax, 0x11387498 */
  EAX = (0x11387498u);
L_113837d8:;
  /* 113837d8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113837da je 0x11383850 */
  if (C.zf) goto L_11383850;
  /* 113837dc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113837df inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113837e0 cmp eax, 0x11387588 */
  { uint32_t _a=(EAX),_b=(0x11387588u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113837e5 jl 0x113837d8 */
  if ((C.sf!=C.of)) goto L_113837d8;
  /* 113837e7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 113837ea push eax */
  push32((uint32_t)(EAX));
  /* 113837eb push ebx */
  push32((uint32_t)(EBX));
  /* 113837ec call dword ptr [0x11386038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386038))), 0x113837f2u);
  /* 113837f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 113837f4 pop esi */
  ESI = (pop32());
  /* 113837f5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113837f7 jne 0x1138391e */
  if (!C.zf) goto L_1138391e;
  /* 113837fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113837ff and dword ptr [0x11387cc4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11387cc4)))&(0x0u); w32((uint32_t)(0x11387cc4), (_r)); fl_logic(_r,32); }
  /* 11383806 pop ecx */
  ECX = (pop32());
  /* 11383807 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11383809 mov edi, 0x11387bc0 */
  EDI = (0x11387bc0u);
  /* 1138380e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383811 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11383813 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11383814 mov dword ptr [0x11387aa0], ebx */
  w32((uint32_t)(0x11387aa0), (EBX));
  /* 1138381a jbe 0x1138390b */
  if ((C.cf||C.zf)) goto L_1138390b;
  /* 11383820 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383824 je 0x113838e6 */
  if (C.zf) goto L_113838e6;
  /* 1138382a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1138382d:;
  /* 1138382d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1138382f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11383831 je 0x113838e6 */
  if (C.zf) goto L_113838e6;
  /* 11383837 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1138383b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1138383e:;
  /* 1138383e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383840 ja 0x113838da */
  if ((!C.cf&&!C.zf)) goto L_113838da;
  /* 11383846 or byte ptr [eax + 0x11387bc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387bc1)))|(0x4u); w8((uint32_t)(EAX + 0x11387bc1), (_r)); fl_logic(_r,8); }
  /* 1138384d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1138384e jmp 0x1138383e */
  goto L_1138383e;
L_11383850:;
  /* 11383850 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11383854 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11383856 pop ecx */
  ECX = (pop32());
  /* 11383857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11383859 mov edi, 0x11387bc0 */
  EDI = (0x11387bc0u);
  /* 1138385e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11383861 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11383863 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11383866 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11383867 lea ebx, [esi + 0x113874a8] */
  EBX = ((uint32_t)(ESI + 0x113874a8));
L_1138386d:;
  /* 1138386d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383870 mov ecx, ebx */
  ECX = (EBX);
  /* 11383872 je 0x113838a0 */
  if (C.zf) goto L_113838a0;
L_11383874:;
  /* 11383874 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11383877 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11383879 je 0x113838a0 */
  if (C.zf) goto L_113838a0;
  /* 1138387b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1138387e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11383881 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383883 ja 0x11383899 */
  if ((!C.cf&&!C.zf)) goto L_11383899;
  /* 11383885 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11383888 mov dl, byte ptr [edx + 0x11387490] */
  DL = (r8((uint32_t)(EDX + 0x11387490)));
L_1138388e:;
  /* 1138388e or byte ptr [eax + 0x11387bc1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387bc1)))|(DL); w8((uint32_t)(EAX + 0x11387bc1), (_r)); fl_logic(_r,8); }
  /* 11383894 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11383895 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383897 jbe 0x1138388e */
  if ((C.cf||C.zf)) goto L_1138388e;
L_11383899:;
  /* 11383899 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1138389a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1138389b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1138389e jne 0x11383874 */
  if (!C.zf) goto L_11383874;
L_113838a0:;
  /* 113838a0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 113838a3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113838a6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113838aa jb 0x1138386d */
  if (C.cf) goto L_1138386d;
  /* 113838ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113838af mov dword ptr [0x11387abc], 1 */
  w32((uint32_t)(0x11387abc), (0x1u));
  /* 113838b9 push eax */
  push32((uint32_t)(EAX));
  /* 113838ba mov dword ptr [0x11387aa0], eax */
  w32((uint32_t)(0x11387aa0), (EAX));
  /* 113838bf call 0x11383992 */
  push32(0x113838c4u); f_11383992();
  /* 113838c4 lea esi, [esi + 0x1138749c] */
  ESI = ((uint32_t)(ESI + 0x1138749c));
  /* 113838ca mov edi, 0x11387ab0 */
  EDI = (0x11387ab0u);
  /* 113838cf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 113838d0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 113838d1 pop ecx */
  ECX = (pop32());
  /* 113838d2 mov dword ptr [0x11387cc4], eax */
  w32((uint32_t)(0x11387cc4), (EAX));
  /* 113838d7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 113838d8 jmp 0x1138392c */
  goto L_1138392c;
L_113838da:;
  /* 113838da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113838db inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113838dc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113838e0 jne 0x1138382d */
  if (!C.zf) goto L_1138382d;
L_113838e6:;
  /* 113838e6 mov eax, esi */
  EAX = (ESI);
L_113838e8:;
  /* 113838e8 or byte ptr [eax + 0x11387bc1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387bc1)))|(0x8u); w8((uint32_t)(EAX + 0x11387bc1), (_r)); fl_logic(_r,8); }
  /* 113838ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113838f0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113838f5 jb 0x113838e8 */
  if (C.cf) goto L_113838e8;
  /* 113838f7 push ebx */
  push32((uint32_t)(EBX));
  /* 113838f8 call 0x11383992 */
  push32(0x113838fdu); f_11383992();
  /* 113838fd pop ecx */
  ECX = (pop32());
  /* 113838fe mov dword ptr [0x11387cc4], eax */
  w32((uint32_t)(0x11387cc4), (EAX));
  /* 11383903 mov dword ptr [0x11387abc], esi */
  w32((uint32_t)(0x11387abc), (ESI));
  /* 11383909 jmp 0x11383912 */
  goto L_11383912;
L_1138390b:;
  /* 1138390b and dword ptr [0x11387abc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11387abc)))&(0x0u); w32((uint32_t)(0x11387abc), (_r)); fl_logic(_r,32); }
L_11383912:;
  /* 11383912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11383914 mov edi, 0x11387ab0 */
  EDI = (0x11387ab0u);
  /* 11383919 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1138391a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1138391b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1138391c jmp 0x1138392c */
  goto L_1138392c;
L_1138391e:;
  /* 1138391e cmp dword ptr [0x11387a48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11387a48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383925 je 0x11383936 */
  if (C.zf) goto L_11383936;
L_11383927:;
  /* 11383927 call 0x113839c5 */
  push32(0x1138392cu); f_113839c5();
L_1138392c:;
  /* 1138392c call 0x113839ee */
  push32(0x11383931u); f_113839ee();
  /* 11383931 jmp 0x113837c2 */
  goto L_113837c2;
L_11383936:;
  /* 11383936 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11383939:;
  /* 11383939 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1138393b call 0x113834b0 */
  push32(0x11383940u); f_113834b0();
  /* 11383940 pop ecx */
  ECX = (pop32());
  /* 11383941 mov eax, esi */
  EAX = (ESI);
  /* 11383943 pop edi */
  EDI = (pop32());
  /* 11383944 pop esi */
  ESI = (pop32());
  /* 11383945 pop ebx */
  EBX = (pop32());
  /* 11383946 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383947 ret  */
  ESPCHK(0x1138379bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003948 @ 0x11383948 (74 bytes, 15 insns) */
void f_11383948(void) {
  FTRACE(0x11383948u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383948 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1138394c and dword ptr [0x11387a48], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11387a48)))&(0x0u); w32((uint32_t)(0x11387a48), (_r)); fl_logic(_r,32); }
  /* 11383953 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383956 jne 0x11383968 */
  if (!C.zf) goto L_11383968;
  /* 11383958 mov dword ptr [0x11387a48], 1 */
  w32((uint32_t)(0x11387a48), (0x1u));
  /* 11383962 jmp dword ptr [0x11386030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11386030)))); return;
L_11383968:;
  /* 11383968 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138396b jne 0x1138397d */
  if (!C.zf) goto L_1138397d;
  /* 1138396d mov dword ptr [0x11387a48], 1 */
  w32((uint32_t)(0x11387a48), (0x1u));
  /* 11383977 jmp dword ptr [0x11386034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11386034)))); return;
L_1138397d:;
  /* 1138397d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383980 jne 0x11383991 */
  if (!C.zf) goto L_11383991;
  /* 11383982 mov eax, dword ptr [0x11387a78] */
  EAX = (r32((uint32_t)(0x11387a78)));
  /* 11383987 mov dword ptr [0x11387a48], 1 */
  w32((uint32_t)(0x11387a48), (0x1u));
L_11383991:;
  /* 11383991 ret  */
  ESPCHK(0x11383948u, _esp0);
  ESP += 4; return;
}

/* FUN_10003992 @ 0x11383992 (51 bytes, 19 insns) */
void f_11383992(void) {
  FTRACE(0x11383992u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383992 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11383996 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1138399b je 0x113839bf */
  if (C.zf) goto L_113839bf;
  /* 1138399d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113839a0 je 0x113839b9 */
  if (C.zf) goto L_113839b9;
  /* 113839a2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113839a5 je 0x113839b3 */
  if (C.zf) goto L_113839b3;
  /* 113839a7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 113839a8 je 0x113839ad */
  if (C.zf) goto L_113839ad;
  /* 113839aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113839ac ret  */
  ESPCHK(0x11383992u, _esp0);
  ESP += 4; return;
L_113839ad:;
  /* 113839ad mov eax, 0x404 */
  EAX = (0x404u);
  /* 113839b2 ret  */
  ESPCHK(0x11383992u, _esp0);
  ESP += 4; return;
L_113839b3:;
  /* 113839b3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 113839b8 ret  */
  ESPCHK(0x11383992u, _esp0);
  ESP += 4; return;
L_113839b9:;
  /* 113839b9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 113839be ret  */
  ESPCHK(0x11383992u, _esp0);
  ESP += 4; return;
L_113839bf:;
  /* 113839bf mov eax, 0x411 */
  EAX = (0x411u);
  /* 113839c4 ret  */
  ESPCHK(0x11383992u, _esp0);
  ESP += 4; return;
}

/* FUN_100039c5 @ 0x113839c5 (41 bytes, 17 insns) */
void f_113839c5(void) {
  FTRACE(0x113839c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113839c5 push edi */
  push32((uint32_t)(EDI));
  /* 113839c6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113839c8 pop ecx */
  ECX = (pop32());
  /* 113839c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113839cb mov edi, 0x11387bc0 */
  EDI = (0x11387bc0u);
  /* 113839d0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113839d2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 113839d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113839d5 mov edi, 0x11387ab0 */
  EDI = (0x11387ab0u);
  /* 113839da mov dword ptr [0x11387aa0], eax */
  w32((uint32_t)(0x11387aa0), (EAX));
  /* 113839df mov dword ptr [0x11387abc], eax */
  w32((uint32_t)(0x11387abc), (EAX));
  /* 113839e4 mov dword ptr [0x11387cc4], eax */
  w32((uint32_t)(0x11387cc4), (EAX));
  /* 113839e9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 113839ea stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 113839eb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 113839ec pop edi */
  EDI = (pop32());
  /* 113839ed ret  */
  ESPCHK(0x113839c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100039ee @ 0x113839ee (389 bytes, 124 insns) */
void f_113839ee(void) {
  FTRACE(0x113839eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113839ee push ebp */
  push32((uint32_t)(EBP));
  /* 113839ef mov ebp, esp */
  EBP = (ESP);
  /* 113839f1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113839f7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 113839fa push esi */
  push32((uint32_t)(ESI));
  /* 113839fb push eax */
  push32((uint32_t)(EAX));
  /* 113839fc push dword ptr [0x11387aa0] */
  push32((uint32_t)(r32((uint32_t)(0x11387aa0))));
  /* 11383a02 call dword ptr [0x11386038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386038))), 0x11383a08u);
  /* 11383a08 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383a0b jne 0x11383b27 */
  if (!C.zf) goto L_11383b27;
  /* 11383a11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11383a13 mov esi, 0x100 */
  ESI = (0x100u);
L_11383a18:;
  /* 11383a18 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11383a1f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11383a20 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383a22 jb 0x11383a18 */
  if (C.cf) goto L_11383a18;
  /* 11383a24 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11383a27 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11383a2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11383a30 je 0x11383a69 */
  if (C.zf) goto L_11383a69;
  /* 11383a32 push ebx */
  push32((uint32_t)(EBX));
  /* 11383a33 push edi */
  push32((uint32_t)(EDI));
  /* 11383a34 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11383a37:;
  /* 11383a37 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11383a3a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11383a3d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383a3f ja 0x11383a5e */
  if ((!C.cf&&!C.zf)) goto L_11383a5e;
  /* 11383a41 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383a43 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11383a4a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11383a4b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11383a50 mov ebx, ecx */
  EBX = (ECX);
  /* 11383a52 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383a55 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11383a57 mov ecx, ebx */
  ECX = (EBX);
  /* 11383a59 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11383a5c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11383a5e:;
  /* 11383a5e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11383a5f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11383a60 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11383a63 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11383a65 jne 0x11383a37 */
  if (!C.zf) goto L_11383a37;
  /* 11383a67 pop edi */
  EDI = (pop32());
  /* 11383a68 pop ebx */
  EBX = (pop32());
L_11383a69:;
  /* 11383a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11383a6b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11383a71 push dword ptr [0x11387cc4] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc4))));
  /* 11383a77 push dword ptr [0x11387aa0] */
  push32((uint32_t)(r32((uint32_t)(0x11387aa0))));
  /* 11383a7d push eax */
  push32((uint32_t)(EAX));
  /* 11383a7e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11383a84 push esi */
  push32((uint32_t)(ESI));
  /* 11383a85 push eax */
  push32((uint32_t)(EAX));
  /* 11383a86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11383a88 call 0x11384b62 */
  push32(0x11383a8du); f_11384b62();
  /* 11383a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11383a8f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11383a95 push dword ptr [0x11387aa0] */
  push32((uint32_t)(r32((uint32_t)(0x11387aa0))));
  /* 11383a9b push esi */
  push32((uint32_t)(ESI));
  /* 11383a9c push eax */
  push32((uint32_t)(EAX));
  /* 11383a9d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11383aa3 push esi */
  push32((uint32_t)(ESI));
  /* 11383aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11383aa5 push esi */
  push32((uint32_t)(ESI));
  /* 11383aa6 push dword ptr [0x11387cc4] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc4))));
  /* 11383aac call 0x11384913 */
  push32(0x11383ab1u); f_11384913();
  /* 11383ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11383ab3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11383ab9 push dword ptr [0x11387aa0] */
  push32((uint32_t)(r32((uint32_t)(0x11387aa0))));
  /* 11383abf push esi */
  push32((uint32_t)(ESI));
  /* 11383ac0 push eax */
  push32((uint32_t)(EAX));
  /* 11383ac1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11383ac7 push esi */
  push32((uint32_t)(ESI));
  /* 11383ac8 push eax */
  push32((uint32_t)(EAX));
  /* 11383ac9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11383ace push dword ptr [0x11387cc4] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc4))));
  /* 11383ad4 call 0x11384913 */
  push32(0x11383ad9u); f_11384913();
  /* 11383ad9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11383adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11383ade lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11383ae4:;
  /* 11383ae4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11383ae7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11383aea je 0x11383b02 */
  if (C.zf) goto L_11383b02;
  /* 11383aec or byte ptr [eax + 0x11387bc1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387bc1)))|(0x10u); w8((uint32_t)(EAX + 0x11387bc1), (_r)); fl_logic(_r,8); }
  /* 11383af3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11383afa:;
  /* 11383afa mov byte ptr [eax + 0x11387ac0], dl */
  w8((uint32_t)(EAX + 0x11387ac0), (DL));
  /* 11383b00 jmp 0x11383b1e */
  goto L_11383b1e;
L_11383b02:;
  /* 11383b02 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11383b05 je 0x11383b17 */
  if (C.zf) goto L_11383b17;
  /* 11383b07 or byte ptr [eax + 0x11387bc1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387bc1)))|(0x20u); w8((uint32_t)(EAX + 0x11387bc1), (_r)); fl_logic(_r,8); }
  /* 11383b0e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11383b15 jmp 0x11383afa */
  goto L_11383afa;
L_11383b17:;
  /* 11383b17 and byte ptr [eax + 0x11387ac0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387ac0)))&(0x0u); w8((uint32_t)(EAX + 0x11387ac0), (_r)); fl_logic(_r,8); }
L_11383b1e:;
  /* 11383b1e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11383b1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11383b20 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11383b21 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383b23 jb 0x11383ae4 */
  if (C.cf) goto L_11383ae4;
  /* 11383b25 jmp 0x11383b70 */
  goto L_11383b70;
L_11383b27:;
  /* 11383b27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11383b29 mov esi, 0x100 */
  ESI = (0x100u);
L_11383b2e:;
  /* 11383b2e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383b31 jb 0x11383b4c */
  if (C.cf) goto L_11383b4c;
  /* 11383b33 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383b36 ja 0x11383b4c */
  if ((!C.cf&&!C.zf)) goto L_11383b4c;
  /* 11383b38 or byte ptr [eax + 0x11387bc1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387bc1)))|(0x10u); w8((uint32_t)(EAX + 0x11387bc1), (_r)); fl_logic(_r,8); }
  /* 11383b3f mov cl, al */
  CL = (AL);
  /* 11383b41 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11383b44:;
  /* 11383b44 mov byte ptr [eax + 0x11387ac0], cl */
  w8((uint32_t)(EAX + 0x11387ac0), (CL));
  /* 11383b4a jmp 0x11383b6b */
  goto L_11383b6b;
L_11383b4c:;
  /* 11383b4c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383b4f jb 0x11383b64 */
  if (C.cf) goto L_11383b64;
  /* 11383b51 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383b54 ja 0x11383b64 */
  if ((!C.cf&&!C.zf)) goto L_11383b64;
  /* 11383b56 or byte ptr [eax + 0x11387bc1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387bc1)))|(0x20u); w8((uint32_t)(EAX + 0x11387bc1), (_r)); fl_logic(_r,8); }
  /* 11383b5d mov cl, al */
  CL = (AL);
  /* 11383b5f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11383b62 jmp 0x11383b44 */
  goto L_11383b44;
L_11383b64:;
  /* 11383b64 and byte ptr [eax + 0x11387ac0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11387ac0)))&(0x0u); w8((uint32_t)(EAX + 0x11387ac0), (_r)); fl_logic(_r,8); }
L_11383b6b:;
  /* 11383b6b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11383b6c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383b6e jb 0x11383b2e */
  if (C.cf) goto L_11383b2e;
L_11383b70:;
  /* 11383b70 pop esi */
  ESI = (pop32());
  /* 11383b71 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383b72 ret  */
  ESPCHK(0x113839eeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b73 @ 0x11383b73 (28 bytes, 7 insns) */
void f_11383b73(void) {
  FTRACE(0x11383b73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383b73 cmp dword ptr [0x11387de8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11387de8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383b7a jne 0x11383b8e */
  if (!C.zf) goto L_11383b8e;
  /* 11383b7c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11383b7e call 0x1138379b */
  push32(0x11383b83u); f_1138379b();
  /* 11383b83 pop ecx */
  ECX = (pop32());
  /* 11383b84 mov dword ptr [0x11387de8], 1 */
  w32((uint32_t)(0x11387de8), (0x1u));
L_11383b8e:;
  /* 11383b8e ret  */
  ESPCHK(0x11383b73u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x11383b90 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11383b90(void) {
  FTRACE(0x11383b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11383b91 mov ebp, esp */
  EBP = (ESP);
  /* 11383b93 push edi */
  push32((uint32_t)(EDI));
  /* 11383b94 push esi */
  push32((uint32_t)(ESI));
  /* 11383b95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11383b98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11383b9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11383b9e mov eax, ecx */
  EAX = (ECX);
  /* 11383ba0 mov edx, ecx */
  EDX = (ECX);
  /* 11383ba2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383ba4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383ba6 jbe 0x11383bb0 */
  if ((C.cf||C.zf)) goto L_11383bb0;
  /* 11383ba8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383baa jb 0x11383d28 */
  if (C.cf) goto L_11383d28;
L_11383bb0:;
  /* 11383bb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11383bb6 jne 0x11383bcc */
  if (!C.zf) goto L_11383bcc;
  /* 11383bb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383bbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11383bbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383bc1 jb 0x11383bec */
  if (C.cf) goto L_11383bec;
  /* 11383bc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11383bc5 jmp dword ptr [edx*4 + 0x11383cd8] */
  switch (EDX) {
    case 0: goto L_11383ce8;
    case 1: goto L_11383cf0;
    case 2: goto L_11383cfc;
    case 3: goto L_11383d10;
    default: x86_unimpl("switch@0x11383bc5 out of table"); return;
  }
L_11383bcc:;
  /* 11383bcc mov eax, edi */
  EAX = (EDI);
  /* 11383bce mov edx, 3 */
  EDX = (0x3u);
  /* 11383bd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383bd6 jb 0x11383be4 */
  if (C.cf) goto L_11383be4;
  /* 11383bd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11383bdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383bdd jmp dword ptr [eax*4 + 0x11383bf0] */
  switch (EAX) {
    case 1: goto L_11383c00;
    case 2: goto L_11383c2c;
    case 3: goto L_11383c50;
    default: x86_unimpl("switch@0x11383bdd out of table"); return;
  }
L_11383be4:;
  /* 11383be4 jmp dword ptr [ecx*4 + 0x11383ce8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11383ce8)))); return;
  /* 11383beb nop  */
  /* nop */
L_11383bec:;
  /* 11383bec jmp dword ptr [ecx*4 + 0x11383c6c] */
  switch (ECX) {
    case 0: goto L_11383ccf;
    case 1: goto L_11383cbc;
    case 2: goto L_11383cb4;
    case 3: goto L_11383cac;
    case 4: goto L_11383ca4;
    case 5: goto L_11383c9c;
    case 6: goto L_11383c94;
    case 7: goto L_11383c8c;
    default: x86_unimpl("switch@0x11383bec out of table"); return;
  }
  /* 11383bf3 nop  */
  /* nop */
L_11383c00:;
  /* 11383c00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11383c02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11383c04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11383c06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11383c09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11383c0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11383c0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383c12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11383c15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383c18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383c1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383c1e jb 0x11383bec */
  if (C.cf) goto L_11383bec;
  /* 11383c20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11383c22 jmp dword ptr [edx*4 + 0x11383cd8] */
  switch (EDX) {
    case 0: goto L_11383ce8;
    case 1: goto L_11383cf0;
    case 2: goto L_11383cfc;
    case 3: goto L_11383d10;
    default: x86_unimpl("switch@0x11383c22 out of table"); return;
  }
  /* 11383c29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11383c2c:;
  /* 11383c2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11383c2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11383c30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11383c32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11383c35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383c38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11383c3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383c3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383c41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383c44 jb 0x11383bec */
  if (C.cf) goto L_11383bec;
  /* 11383c46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11383c48 jmp dword ptr [edx*4 + 0x11383cd8] */
  switch (EDX) {
    case 0: goto L_11383ce8;
    case 1: goto L_11383cf0;
    case 2: goto L_11383cfc;
    case 3: goto L_11383d10;
    default: x86_unimpl("switch@0x11383c48 out of table"); return;
  }
  /* 11383c4f nop  */
  /* nop */
L_11383c50:;
  /* 11383c50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11383c52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11383c54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11383c56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11383c57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383c5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11383c5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383c5e jb 0x11383bec */
  if (C.cf) goto L_11383bec;
  /* 11383c60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11383c62 jmp dword ptr [edx*4 + 0x11383cd8] */
  switch (EDX) {
    case 0: goto L_11383ce8;
    case 1: goto L_11383cf0;
    case 2: goto L_11383cfc;
    case 3: goto L_11383d10;
    default: x86_unimpl("switch@0x11383c62 out of table"); return;
  }
  /* 11383c69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11383c8c:;
  /* 11383c8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11383c90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11383c94:;
  /* 11383c94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11383c98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11383c9c:;
  /* 11383c9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11383ca0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11383ca4:;
  /* 11383ca4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11383ca8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11383cac:;
  /* 11383cac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11383cb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11383cb4:;
  /* 11383cb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11383cb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11383cbc:;
  /* 11383cbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11383cc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11383cc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11383ccb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383ccd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11383ccf:;
  /* 11383ccf jmp dword ptr [edx*4 + 0x11383cd8] */
  switch (EDX) {
    case 0: goto L_11383ce8;
    case 1: goto L_11383cf0;
    case 2: goto L_11383cfc;
    case 3: goto L_11383d10;
    default: x86_unimpl("switch@0x11383ccf out of table"); return;
  }
  /* 11383cd6 mov edi, edi */
  EDI = (EDI);
L_11383ce8:;
  /* 11383ce8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383ceb pop esi */
  ESI = (pop32());
  /* 11383cec pop edi */
  EDI = (pop32());
  /* 11383ced leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383cee ret  */
  ESPCHK(0x11383b90u, _esp0);
  ESP += 4; return;
  /* 11383cef nop  */
  /* nop */
L_11383cf0:;
  /* 11383cf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11383cf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11383cf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383cf7 pop esi */
  ESI = (pop32());
  /* 11383cf8 pop edi */
  EDI = (pop32());
  /* 11383cf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383cfa ret  */
  ESPCHK(0x11383b90u, _esp0);
  ESP += 4; return;
  /* 11383cfb nop  */
  /* nop */
L_11383cfc:;
  /* 11383cfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11383cfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11383d00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11383d03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11383d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383d09 pop esi */
  ESI = (pop32());
  /* 11383d0a pop edi */
  EDI = (pop32());
  /* 11383d0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383d0c ret  */
  ESPCHK(0x11383b90u, _esp0);
  ESP += 4; return;
  /* 11383d0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11383d10:;
  /* 11383d10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11383d12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11383d14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11383d17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11383d1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11383d1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11383d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383d23 pop esi */
  ESI = (pop32());
  /* 11383d24 pop edi */
  EDI = (pop32());
  /* 11383d25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383d26 ret  */
  ESPCHK(0x11383b90u, _esp0);
  ESP += 4; return;
  /* 11383d27 nop  */
  /* nop */
L_11383d28:;
  /* 11383d28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11383d2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11383d30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11383d36 jne 0x11383d5c */
  if (!C.zf) goto L_11383d5c;
  /* 11383d38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383d3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11383d3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383d41 jb 0x11383d50 */
  if (C.cf) goto L_11383d50;
  /* 11383d43 std  */
  C.df=1;
  /* 11383d44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11383d46 cld  */
  C.df=0;
  /* 11383d47 jmp dword ptr [edx*4 + 0x11383e70] */
  switch (EDX) {
    case 0: goto L_11383e80;
    case 1: goto L_11383e88;
    case 2: goto L_11383e98;
    case 3: goto L_11383eac;
    default: x86_unimpl("switch@0x11383d47 out of table"); return;
  }
  /* 11383d4e mov edi, edi */
  EDI = (EDI);
L_11383d50:;
  /* 11383d50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11383d52 jmp dword ptr [ecx*4 + 0x11383e20] */
  switch (ECX) {
    case 0: goto L_11383e67;
    default: x86_unimpl("switch@0x11383d52 out of table"); return;
  }
  /* 11383d59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11383d5c:;
  /* 11383d5c mov eax, edi */
  EAX = (EDI);
  /* 11383d5e mov edx, 3 */
  EDX = (0x3u);
  /* 11383d63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383d66 jb 0x11383d74 */
  if (C.cf) goto L_11383d74;
  /* 11383d68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11383d6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383d6d jmp dword ptr [eax*4 + 0x11383d78] */
  switch (EAX) {
    case 1: goto L_11383d88;
    case 2: goto L_11383da8;
    case 3: goto L_11383dd0;
    default: x86_unimpl("switch@0x11383d6d out of table"); return;
  }
L_11383d74:;
  /* 11383d74 jmp dword ptr [ecx*4 + 0x11383e70] */
  switch (ECX) {
    case 0: goto L_11383e80;
    case 1: goto L_11383e88;
    case 2: goto L_11383e98;
    case 3: goto L_11383eac;
    default: x86_unimpl("switch@0x11383d74 out of table"); return;
  }
  /* 11383d7b nop  */
  /* nop */
L_11383d88:;
  /* 11383d88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11383d8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11383d8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11383d90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11383d91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383d94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11383d95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383d98 jb 0x11383d50 */
  if (C.cf) goto L_11383d50;
  /* 11383d9a std  */
  C.df=1;
  /* 11383d9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11383d9d cld  */
  C.df=0;
  /* 11383d9e jmp dword ptr [edx*4 + 0x11383e70] */
  switch (EDX) {
    case 0: goto L_11383e80;
    case 1: goto L_11383e88;
    case 2: goto L_11383e98;
    case 3: goto L_11383eac;
    default: x86_unimpl("switch@0x11383d9e out of table"); return;
  }
  /* 11383da5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11383da8:;
  /* 11383da8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11383dab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11383dad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11383db0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11383db3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383db6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11383db9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383dbc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383dbf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383dc2 jb 0x11383d50 */
  if (C.cf) goto L_11383d50;
  /* 11383dc4 std  */
  C.df=1;
  /* 11383dc5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11383dc7 cld  */
  C.df=0;
  /* 11383dc8 jmp dword ptr [edx*4 + 0x11383e70] */
  switch (EDX) {
    case 0: goto L_11383e80;
    case 1: goto L_11383e88;
    case 2: goto L_11383e98;
    case 3: goto L_11383eac;
    default: x86_unimpl("switch@0x11383dc8 out of table"); return;
  }
  /* 11383dcf nop  */
  /* nop */
L_11383dd0:;
  /* 11383dd0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11383dd3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11383dd5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11383dd8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11383ddb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11383dde mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11383de1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11383de4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11383de7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383dea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383ded cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383df0 jb 0x11383d50 */
  if (C.cf) goto L_11383d50;
  /* 11383df6 std  */
  C.df=1;
  /* 11383df7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11383df9 cld  */
  C.df=0;
  /* 11383dfa jmp dword ptr [edx*4 + 0x11383e70] */
  switch (EDX) {
    case 0: goto L_11383e80;
    case 1: goto L_11383e88;
    case 2: goto L_11383e98;
    case 3: goto L_11383eac;
    default: x86_unimpl("switch@0x11383dfa out of table"); return;
  }
  /* 11383e01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11383e04 and al, 0x3e */
  { uint32_t _r=(AL)&(0x3eu); AL = (_r); fl_logic(_r,8); }
  /* 11383e06 cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383e08 sub al, 0x3e */
  { uint32_t _a=(AL),_b=(0x3eu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11383e0a cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383e0c xor al, 0x3e */
  { uint32_t _r=(AL)^(0x3eu); AL = (_r); fl_logic(_r,8); }
  /* 11383e0e cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383e10 cmp al, 0x3e */
  { uint32_t _a=(AL),_b=(0x3eu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383e12 cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383e14 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11383e15 cmp byte ptr ds:[ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383e18 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11383e19 cmp byte ptr ds:[ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383e1c push esp */
  push32((uint32_t)(ESP));
  /* 11383e1d cmp byte ptr ds:[ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11383e24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11383e28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11383e2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11383e30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11383e34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11383e38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11383e3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11383e40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11383e44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11383e48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11383e4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11383e50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11383e54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11383e58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11383e5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11383e63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11383e65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11383e67:;
  /* 11383e67 jmp dword ptr [edx*4 + 0x11383e70] */
  switch (EDX) {
    case 0: goto L_11383e80;
    case 1: goto L_11383e88;
    case 2: goto L_11383e98;
    case 3: goto L_11383eac;
    default: x86_unimpl("switch@0x11383e67 out of table"); return;
  }
  /* 11383e6e mov edi, edi */
  EDI = (EDI);
L_11383e80:;
  /* 11383e80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383e83 pop esi */
  ESI = (pop32());
  /* 11383e84 pop edi */
  EDI = (pop32());
  /* 11383e85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383e86 ret  */
  ESPCHK(0x11383b90u, _esp0);
  ESP += 4; return;
  /* 11383e87 nop  */
  /* nop */
L_11383e88:;
  /* 11383e88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11383e8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11383e8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383e91 pop esi */
  ESI = (pop32());
  /* 11383e92 pop edi */
  EDI = (pop32());
  /* 11383e93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383e94 ret  */
  ESPCHK(0x11383b90u, _esp0);
  ESP += 4; return;
  /* 11383e95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11383e98:;
  /* 11383e98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11383e9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11383e9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11383ea1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11383ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383ea7 pop esi */
  ESI = (pop32());
  /* 11383ea8 pop edi */
  EDI = (pop32());
  /* 11383ea9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383eaa ret  */
  ESPCHK(0x11383b90u, _esp0);
  ESP += 4; return;
  /* 11383eab nop  */
  /* nop */
L_11383eac:;
  /* 11383eac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11383eaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11383eb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11383eb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11383eb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11383ebb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11383ebe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383ec1 pop esi */
  ESI = (pop32());
  /* 11383ec2 pop edi */
  EDI = (pop32());
  /* 11383ec3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11383ec4 ret  */
  ESPCHK(0x11383b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ec5 @ 0x11383ec5 (62 bytes, 15 insns) */
void f_11383ec5(void) {
  FTRACE(0x11383ec5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383ec5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11383eca push 0 */
  push32((uint32_t)(0x0u));
  /* 11383ecc push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 11383ed2 call dword ptr [0x1138603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138603c))), 0x11383ed8u);
  /* 11383ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11383eda mov dword ptr [0x11387a9c], eax */
  w32((uint32_t)(0x11387a9c), (EAX));
  /* 11383edf jne 0x11383ee2 */
  if (!C.zf) goto L_11383ee2;
  /* 11383ee1 ret  */
  ESPCHK(0x11383ec5u, _esp0);
  ESP += 4; return;
L_11383ee2:;
  /* 11383ee2 and dword ptr [0x11387a94], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11387a94)))&(0x0u); w32((uint32_t)(0x11387a94), (_r)); fl_logic(_r,32); }
  /* 11383ee9 and dword ptr [0x11387a98], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11387a98)))&(0x0u); w32((uint32_t)(0x11387a98), (_r)); fl_logic(_r,32); }
  /* 11383ef0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11383ef2 mov dword ptr [0x11387a90], eax */
  w32((uint32_t)(0x11387a90), (EAX));
  /* 11383ef7 mov dword ptr [0x11387a88], 0x10 */
  w32((uint32_t)(0x11387a88), (0x10u));
  /* 11383f01 pop eax */
  EAX = (pop32());
  /* 11383f02 ret  */
  ESPCHK(0x11383ec5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f03 @ 0x11383f03 (43 bytes, 14 insns) */
void f_11383f03(void) {
  FTRACE(0x11383f03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383f03 mov eax, dword ptr [0x11387a98] */
  EAX = (r32((uint32_t)(0x11387a98)));
  /* 11383f08 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11383f0b mov eax, dword ptr [0x11387a9c] */
  EAX = (r32((uint32_t)(0x11387a9c)));
  /* 11383f10 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11383f13:;
  /* 11383f13 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383f15 jae 0x11383f2b */
  if (!C.cf) goto L_11383f2b;
  /* 11383f17 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11383f1b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383f1e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383f24 jb 0x11383f2d */
  if (C.cf) goto L_11383f2d;
  /* 11383f26 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383f29 jmp 0x11383f13 */
  goto L_11383f13;
L_11383f2b:;
  /* 11383f2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11383f2d:;
  /* 11383f2d ret  */
  ESPCHK(0x11383f03u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f2e @ 0x11383f2e (811 bytes, 264 insns) */
void f_11383f2e(void) {
  FTRACE(0x11383f2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11383f2e push ebp */
  push32((uint32_t)(EBP));
  /* 11383f2f mov ebp, esp */
  EBP = (ESP);
  /* 11383f31 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383f34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11383f37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383f3a push ebx */
  push32((uint32_t)(EBX));
  /* 11383f3b push esi */
  push32((uint32_t)(ESI));
  /* 11383f3c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11383f3f mov esi, edx */
  ESI = (EDX);
  /* 11383f41 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11383f44 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11383f47 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383f4a push edi */
  push32((uint32_t)(EDI));
  /* 11383f4b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11383f4e mov ecx, esi */
  ECX = (ESI);
  /* 11383f50 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11383f53 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11383f59 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11383f5a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11383f5d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11383f64 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11383f67 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11383f6a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11383f6d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11383f70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11383f73 jne 0x11383ff4 */
  if (!C.zf) goto L_11383ff4;
  /* 11383f75 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11383f78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11383f7a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11383f7b pop edi */
  EDI = (pop32());
  /* 11383f7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11383f7f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383f81 jbe 0x11383f86 */
  if ((C.cf||C.zf)) goto L_11383f86;
  /* 11383f83 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11383f86:;
  /* 11383f86 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11383f8a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383f8e jne 0x11383fd8 */
  if (!C.zf) goto L_11383fd8;
  /* 11383f90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11383f93 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383f96 jae 0x11383fb4 */
  if (!C.cf) goto L_11383fb4;
  /* 11383f98 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11383f9d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11383f9f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11383fa3 not edi */
  EDI = (~(EDI));
  /* 11383fa5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11383fa9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11383fab jne 0x11383fd8 */
  if (!C.zf) goto L_11383fd8;
  /* 11383fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383fb0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11383fb2 jmp 0x11383fd8 */
  goto L_11383fd8;
L_11383fb4:;
  /* 11383fb4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383fb7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11383fbc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11383fbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11383fc1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11383fc5 not edi */
  EDI = (~(EDI));
  /* 11383fc7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11383fce dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11383fd0 jne 0x11383fd8 */
  if (!C.zf) goto L_11383fd8;
  /* 11383fd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11383fd5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11383fd8:;
  /* 11383fd8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11383fdc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11383fe0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11383fe3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11383fe7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11383feb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11383fee mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11383ff1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11383ff4:;
  /* 11383ff4 mov edi, ebx */
  EDI = (EBX);
  /* 11383ff6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11383ff9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11383ffa cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11383ffd jbe 0x11384002 */
  if ((C.cf||C.zf)) goto L_11384002;
  /* 11383fff push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11384001 pop edi */
  EDI = (pop32());
L_11384002:;
  /* 11384002 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11384005 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11384008 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1138400b jne 0x113840b1 */
  if (!C.zf) goto L_113840b1;
  /* 11384011 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384014 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11384017 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1138401a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1138401c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1138401f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11384020 pop edx */
  EDX = (pop32());
  /* 11384021 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384023 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11384026 jbe 0x1138402d */
  if ((C.cf||C.zf)) goto L_1138402d;
  /* 11384028 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1138402b mov ecx, edx */
  ECX = (EDX);
L_1138402d:;
  /* 1138402d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384030 mov edi, ebx */
  EDI = (EBX);
  /* 11384032 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11384035 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11384038 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11384039 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138403b jbe 0x1138403f */
  if ((C.cf||C.zf)) goto L_1138403f;
  /* 1138403d mov edi, edx */
  EDI = (EDX);
L_1138403f:;
  /* 1138403f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384041 je 0x113840ae */
  if (C.zf) goto L_113840ae;
  /* 11384043 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11384046 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11384049 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138404c jne 0x11384096 */
  if (!C.zf) goto L_11384096;
  /* 1138404e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11384051 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384054 jae 0x11384072 */
  if (!C.cf) goto L_11384072;
  /* 11384056 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1138405b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1138405d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11384061 not edx */
  EDX = (~(EDX));
  /* 11384063 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11384067 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11384069 jne 0x11384096 */
  if (!C.zf) goto L_11384096;
  /* 1138406b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1138406e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11384070 jmp 0x11384096 */
  goto L_11384096;
L_11384072:;
  /* 11384072 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384075 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1138407a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1138407c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1138407f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11384083 not edx */
  EDX = (~(EDX));
  /* 11384085 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1138408c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1138408e jne 0x11384096 */
  if (!C.zf) goto L_11384096;
  /* 11384090 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384093 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11384096:;
  /* 11384096 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11384099 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1138409c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1138409f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113840a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113840a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113840a8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 113840ab mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_113840ae:;
  /* 113840ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_113840b1:;
  /* 113840b1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113840b5 jne 0x113840c0 */
  if (!C.zf) goto L_113840c0;
  /* 113840b7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113840ba je 0x11384149 */
  if (C.zf) goto L_11384149;
L_113840c0:;
  /* 113840c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113840c3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 113840c6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 113840c9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 113840cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113840cf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 113840d2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 113840d5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 113840d8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 113840db mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113840de mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 113840e1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113840e4 jne 0x11384149 */
  if (!C.zf) goto L_11384149;
  /* 113840e6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 113840ea cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113840ed mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 113840f0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 113840f2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 113840f6 jae 0x1138411d */
  if (!C.cf) goto L_1138411d;
  /* 113840f8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113840fc jne 0x1138410c */
  if (!C.zf) goto L_1138410c;
  /* 113840fe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11384103 mov ecx, edi */
  ECX = (EDI);
  /* 11384105 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11384107 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1138410a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1138410c:;
  /* 1138410c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11384111 mov ecx, edi */
  ECX = (EDI);
  /* 11384113 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11384115 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11384119 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1138411b jmp 0x11384146 */
  goto L_11384146;
L_1138411d:;
  /* 1138411d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384121 jne 0x11384133 */
  if (!C.zf) goto L_11384133;
  /* 11384123 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11384126 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1138412b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1138412d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384130 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11384133:;
  /* 11384133 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11384136 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1138413b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1138413d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11384144 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11384146:;
  /* 11384146 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11384149:;
  /* 11384149 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1138414c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1138414e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11384152 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11384154 jne 0x11384254 */
  if (!C.zf) goto L_11384254;
  /* 1138415a mov eax, dword ptr [0x11387a94] */
  EAX = (r32((uint32_t)(0x11387a94)));
  /* 1138415f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384161 je 0x11384246 */
  if (C.zf) goto L_11384246;
  /* 11384167 mov ecx, dword ptr [0x11387a8c] */
  ECX = (r32((uint32_t)(0x11387a8c)));
  /* 1138416d mov edi, dword ptr [0x11386054] */
  EDI = (r32((uint32_t)(0x11386054)));
  /* 11384173 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11384176 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384179 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1138417e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11384183 push ebx */
  push32((uint32_t)(EBX));
  /* 11384184 push ecx */
  push32((uint32_t)(ECX));
  /* 11384185 call edi */
  call_ind((uint32_t)(EDI), 0x11384187u);
  /* 11384187 mov ecx, dword ptr [0x11387a8c] */
  ECX = (r32((uint32_t)(0x11387a8c)));
  /* 1138418d mov eax, dword ptr [0x11387a94] */
  EAX = (r32((uint32_t)(0x11387a94)));
  /* 11384192 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11384197 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11384199 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1138419c mov eax, dword ptr [0x11387a94] */
  EAX = (r32((uint32_t)(0x11387a94)));
  /* 113841a1 mov ecx, dword ptr [0x11387a8c] */
  ECX = (r32((uint32_t)(0x11387a8c)));
  /* 113841a7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 113841aa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 113841b2 mov eax, dword ptr [0x11387a94] */
  EAX = (r32((uint32_t)(0x11387a94)));
  /* 113841b7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 113841ba dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 113841bd mov eax, dword ptr [0x11387a94] */
  EAX = (r32((uint32_t)(0x11387a94)));
  /* 113841c2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113841c5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113841c9 jne 0x113841d4 */
  if (!C.zf) goto L_113841d4;
  /* 113841cb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 113841cf mov eax, dword ptr [0x11387a94] */
  EAX = (r32((uint32_t)(0x11387a94)));
L_113841d4:;
  /* 113841d4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113841d8 jne 0x11384246 */
  if (!C.zf) goto L_11384246;
  /* 113841da push ebx */
  push32((uint32_t)(EBX));
  /* 113841db push 0 */
  push32((uint32_t)(0x0u));
  /* 113841dd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 113841e0 call edi */
  call_ind((uint32_t)(EDI), 0x113841e2u);
  /* 113841e2 mov eax, dword ptr [0x11387a94] */
  EAX = (r32((uint32_t)(0x11387a94)));
  /* 113841e7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 113841ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113841ec push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 113841f2 call dword ptr [0x11386050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386050))), 0x113841f8u);
  /* 113841f8 mov eax, dword ptr [0x11387a98] */
  EAX = (r32((uint32_t)(0x11387a98)));
  /* 113841fd mov edx, dword ptr [0x11387a9c] */
  EDX = (r32((uint32_t)(0x11387a9c)));
  /* 11384203 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11384206 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11384209 mov ecx, eax */
  ECX = (EAX);
  /* 1138420b mov eax, dword ptr [0x11387a94] */
  EAX = (r32((uint32_t)(0x11387a94)));
  /* 11384210 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384212 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11384216 push ecx */
  push32((uint32_t)(ECX));
  /* 11384217 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1138421a push ecx */
  push32((uint32_t)(ECX));
  /* 1138421b push eax */
  push32((uint32_t)(EAX));
  /* 1138421c call 0x11384cb0 */
  push32(0x11384221u); f_11384cb0();
  /* 11384221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384224 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11384227 dec dword ptr [0x11387a98] */
  { uint32_t _r=(r32((uint32_t)(0x11387a98)))-1; w32((uint32_t)(0x11387a98), (_r)); fl_dec(_r,32); }
  /* 1138422d cmp eax, dword ptr [0x11387a94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11387a94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384233 jbe 0x11384238 */
  if ((C.cf||C.zf)) goto L_11384238;
  /* 11384235 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11384238:;
  /* 11384238 mov ecx, dword ptr [0x11387a9c] */
  ECX = (r32((uint32_t)(0x11387a9c)));
  /* 1138423e mov dword ptr [0x11387a90], ecx */
  w32((uint32_t)(0x11387a90), (ECX));
  /* 11384244 jmp 0x11384249 */
  goto L_11384249;
L_11384246:;
  /* 11384246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11384249:;
  /* 11384249 mov dword ptr [0x11387a94], eax */
  w32((uint32_t)(0x11387a94), (EAX));
  /* 1138424e mov dword ptr [0x11387a8c], esi */
  w32((uint32_t)(0x11387a8c), (ESI));
L_11384254:;
  /* 11384254 pop edi */
  EDI = (pop32());
  /* 11384255 pop esi */
  ESI = (pop32());
  /* 11384256 pop ebx */
  EBX = (pop32());
  /* 11384257 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384258 ret  */
  ESPCHK(0x11383f2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004259 @ 0x11384259 (777 bytes, 275 insns) */
void f_11384259(void) {
  FTRACE(0x11384259u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11384259 push ebp */
  push32((uint32_t)(EBP));
  /* 1138425a mov ebp, esp */
  EBP = (ESP);
  /* 1138425c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1138425f mov eax, dword ptr [0x11387a98] */
  EAX = (r32((uint32_t)(0x11387a98)));
  /* 11384264 mov edx, dword ptr [0x11387a9c] */
  EDX = (r32((uint32_t)(0x11387a9c)));
  /* 1138426a push ebx */
  push32((uint32_t)(EBX));
  /* 1138426b push esi */
  push32((uint32_t)(ESI));
  /* 1138426c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1138426f push edi */
  push32((uint32_t)(EDI));
  /* 11384270 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11384273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384276 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11384279 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1138427c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1138427f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11384282 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11384285 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11384286 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384289 jge 0x11384299 */
  if ((C.sf==C.of)) goto L_11384299;
  /* 1138428b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1138428e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11384290 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11384294 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11384297 jmp 0x113842a9 */
  goto L_113842a9;
L_11384299:;
  /* 11384299 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1138429c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1138429f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 113842a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 113842a3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 113842a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113842a9:;
  /* 113842a9 mov eax, dword ptr [0x11387a90] */
  EAX = (r32((uint32_t)(0x11387a90)));
  /* 113842ae mov ebx, eax */
  EBX = (EAX);
  /* 113842b0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113842b2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 113842b5 jae 0x113842d0 */
  if (!C.cf) goto L_113842d0;
L_113842b7:;
  /* 113842b7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 113842ba mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 113842bc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 113842bf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 113842c1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 113842c3 jne 0x113842d0 */
  if (!C.zf) goto L_113842d0;
  /* 113842c5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113842c8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113842cb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 113842ce jb 0x113842b7 */
  if (C.cf) goto L_113842b7;
L_113842d0:;
  /* 113842d0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113842d3 jne 0x1138434e */
  if (!C.zf) goto L_1138434e;
  /* 113842d5 mov ebx, edx */
  EBX = (EDX);
L_113842d7:;
  /* 113842d7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113842d9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 113842dc jae 0x113842f3 */
  if (!C.cf) goto L_113842f3;
  /* 113842de mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 113842e1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 113842e3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 113842e6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 113842e8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 113842ea jne 0x113842f1 */
  if (!C.zf) goto L_113842f1;
  /* 113842ec add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113842ef jmp 0x113842d7 */
  goto L_113842d7;
L_113842f1:;
  /* 113842f1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_113842f3:;
  /* 113842f3 jne 0x1138434e */
  if (!C.zf) goto L_1138434e;
L_113842f5:;
  /* 113842f5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113842f8 jae 0x1138430b */
  if (!C.cf) goto L_1138430b;
  /* 113842fa cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113842fe jne 0x11384308 */
  if (!C.zf) goto L_11384308;
  /* 11384300 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384303 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11384306 jmp 0x113842f5 */
  goto L_113842f5;
L_11384308:;
  /* 11384308 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1138430b:;
  /* 1138430b jne 0x11384333 */
  if (!C.zf) goto L_11384333;
  /* 1138430d mov ebx, edx */
  EBX = (EDX);
L_1138430f:;
  /* 1138430f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384311 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11384314 jae 0x11384323 */
  if (!C.cf) goto L_11384323;
  /* 11384316 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138431a jne 0x11384321 */
  if (!C.zf) goto L_11384321;
  /* 1138431c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1138431f jmp 0x1138430f */
  goto L_1138430f;
L_11384321:;
  /* 11384321 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11384323:;
  /* 11384323 jne 0x11384333 */
  if (!C.zf) goto L_11384333;
  /* 11384325 call 0x11384562 */
  push32(0x1138432au); f_11384562();
  /* 1138432a mov ebx, eax */
  EBX = (EAX);
  /* 1138432c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1138432e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11384331 je 0x11384347 */
  if (C.zf) goto L_11384347;
L_11384333:;
  /* 11384333 push ebx */
  push32((uint32_t)(EBX));
  /* 11384334 call 0x11384613 */
  push32(0x11384339u); f_11384613();
  /* 11384339 pop ecx */
  ECX = (pop32());
  /* 1138433a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1138433d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1138433f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11384342 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384345 jne 0x1138434e */
  if (!C.zf) goto L_1138434e;
L_11384347:;
  /* 11384347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11384349 jmp 0x1138455d */
  goto L_1138455d;
L_1138434e:;
  /* 1138434e mov dword ptr [0x11387a90], ebx */
  w32((uint32_t)(0x11387a90), (EBX));
  /* 11384354 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11384357 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11384359 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138435c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1138435f je 0x11384375 */
  if (C.zf) goto L_11384375;
  /* 11384361 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11384368 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1138436c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1138436f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11384371 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11384373 jne 0x113843ac */
  if (!C.zf) goto L_113843ac;
L_11384375:;
  /* 11384375 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1138437b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1138437e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11384381 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11384384 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11384388 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1138438b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1138438d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11384390 jne 0x113843a9 */
  if (!C.zf) goto L_113843a9;
L_11384392:;
  /* 11384392 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11384398 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1138439b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1138439e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113843a1 mov edi, esi */
  EDI = (ESI);
  /* 113843a3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 113843a5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 113843a7 je 0x11384392 */
  if (C.zf) goto L_11384392;
L_113843a9:;
  /* 113843a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_113843ac:;
  /* 113843ac mov ecx, edx */
  ECX = (EDX);
  /* 113843ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 113843b0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113843b6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 113843bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113843c0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 113843c4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 113843c6 jne 0x113843d5 */
  if (!C.zf) goto L_113843d5;
  /* 113843c8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 113843cf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113843d1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 113843d4 pop edi */
  EDI = (pop32());
L_113843d5:;
  /* 113843d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113843d7 jl 0x113843de */
  if ((C.sf!=C.of)) goto L_113843de;
  /* 113843d9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 113843db inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113843dc jmp 0x113843d5 */
  goto L_113843d5;
L_113843de:;
  /* 113843de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113843e1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 113843e5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 113843e7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113843ea mov esi, ecx */
  ESI = (ECX);
  /* 113843ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113843ef sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 113843f2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 113843f3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113843f6 jle 0x113843fb */
  if ((C.zf||C.sf!=C.of)) goto L_113843fb;
  /* 113843f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 113843fa pop esi */
  ESI = (pop32());
L_113843fb:;
  /* 113843fb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113843fd je 0x11384510 */
  if (C.zf) goto L_11384510;
  /* 11384403 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11384406 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384409 jne 0x1138446c */
  if (!C.zf) goto L_1138446c;
  /* 1138440b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138440e jge 0x1138443b */
  if ((C.sf==C.of)) goto L_1138443b;
  /* 11384410 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11384415 mov ecx, edi */
  ECX = (EDI);
  /* 11384417 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11384419 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1138441c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11384420 not ebx */
  EBX = (~(EBX));
  /* 11384422 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11384425 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11384429 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1138442d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1138442f jne 0x11384469 */
  if (!C.zf) goto L_11384469;
  /* 11384431 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384434 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11384437 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11384439 jmp 0x1138446c */
  goto L_1138446c;
L_1138443b:;
  /* 1138443b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1138443e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11384443 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11384445 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11384448 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1138444c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11384453 not ebx */
  EBX = (~(EBX));
  /* 11384455 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11384457 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11384459 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1138445c jne 0x11384469 */
  if (!C.zf) goto L_11384469;
  /* 1138445e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384461 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11384464 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11384467 jmp 0x1138446c */
  goto L_1138446c;
L_11384469:;
  /* 11384469 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1138446c:;
  /* 1138446c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1138446f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11384472 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384476 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11384479 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1138447c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1138447f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11384482 je 0x1138451c */
  if (C.zf) goto L_1138451c;
  /* 11384488 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1138448b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1138448f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11384492 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11384495 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11384498 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1138449b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1138449e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 113844a1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 113844a4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113844a7 jne 0x1138450d */
  if (!C.zf) goto L_1138450d;
  /* 113844a9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 113844ad cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113844b0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 113844b3 jge 0x113844de */
  if ((C.sf==C.of)) goto L_113844de;
  /* 113844b5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 113844b7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113844bb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 113844bf jne 0x113844cc */
  if (!C.zf) goto L_113844cc;
  /* 113844c1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 113844c6 mov ecx, esi */
  ECX = (ESI);
  /* 113844c8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 113844ca or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_113844cc:;
  /* 113844cc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 113844d1 mov ecx, esi */
  ECX = (ESI);
  /* 113844d3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 113844d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113844d8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 113844dc jmp 0x1138450d */
  goto L_1138450d;
L_113844de:;
  /* 113844de inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 113844e0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113844e4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 113844e8 jne 0x113844f7 */
  if (!C.zf) goto L_113844f7;
  /* 113844ea lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 113844ed mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 113844f2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 113844f4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_113844f7:;
  /* 113844f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113844fa lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11384501 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11384504 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11384509 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1138450b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1138450d:;
  /* 1138450d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11384510:;
  /* 11384510 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11384512 je 0x1138451f */
  if (C.zf) goto L_1138451f;
  /* 11384514 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11384516 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1138451a jmp 0x1138451f */
  goto L_1138451f;
L_1138451c:;
  /* 1138451c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1138451f:;
  /* 1138451f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11384522 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384524 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11384527 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11384529 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1138452d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11384530 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11384532 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11384534 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11384537 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11384539 jne 0x11384555 */
  if (!C.zf) goto L_11384555;
  /* 1138453b cmp ebx, dword ptr [0x11387a94] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11387a94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384541 jne 0x11384555 */
  if (!C.zf) goto L_11384555;
  /* 11384543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11384546 cmp ecx, dword ptr [0x11387a8c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11387a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138454c jne 0x11384555 */
  if (!C.zf) goto L_11384555;
  /* 1138454e and dword ptr [0x11387a94], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11387a94)))&(0x0u); w32((uint32_t)(0x11387a94), (_r)); fl_logic(_r,32); }
L_11384555:;
  /* 11384555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11384558 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1138455a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1138455d:;
  /* 1138455d pop edi */
  EDI = (pop32());
  /* 1138455e pop esi */
  ESI = (pop32());
  /* 1138455f pop ebx */
  EBX = (pop32());
  /* 11384560 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384561 ret  */
  ESPCHK(0x11384259u, _esp0);
  ESP += 4; return;
}

/* FUN_10004562 @ 0x11384562 (177 bytes, 53 insns) */
void f_11384562(void) {
  FTRACE(0x11384562u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11384562 mov eax, dword ptr [0x11387a98] */
  EAX = (r32((uint32_t)(0x11387a98)));
  /* 11384567 mov ecx, dword ptr [0x11387a88] */
  ECX = (r32((uint32_t)(0x11387a88)));
  /* 1138456d push esi */
  push32((uint32_t)(ESI));
  /* 1138456e push edi */
  push32((uint32_t)(EDI));
  /* 1138456f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11384571 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384573 jne 0x113845a5 */
  if (!C.zf) goto L_113845a5;
  /* 11384575 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11384579 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1138457c push eax */
  push32((uint32_t)(EAX));
  /* 1138457d push dword ptr [0x11387a9c] */
  push32((uint32_t)(r32((uint32_t)(0x11387a9c))));
  /* 11384583 push edi */
  push32((uint32_t)(EDI));
  /* 11384584 push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 1138458a call dword ptr [0x11386028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386028))), 0x11384590u);
  /* 11384590 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384592 je 0x113845f5 */
  if (C.zf) goto L_113845f5;
  /* 11384594 add dword ptr [0x11387a88], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11387a88))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11387a88), (_r)); fl_add(_a,_b,_r,32); }
  /* 1138459b mov dword ptr [0x11387a9c], eax */
  w32((uint32_t)(0x11387a9c), (EAX));
  /* 113845a0 mov eax, dword ptr [0x11387a98] */
  EAX = (r32((uint32_t)(0x11387a98)));
L_113845a5:;
  /* 113845a5 mov ecx, dword ptr [0x11387a9c] */
  ECX = (r32((uint32_t)(0x11387a9c)));
  /* 113845ab push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 113845b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 113845b2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 113845b5 push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 113845bb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 113845be call dword ptr [0x1138603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138603c))), 0x113845c4u);
  /* 113845c4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113845c6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 113845c9 je 0x113845f5 */
  if (C.zf) goto L_113845f5;
  /* 113845cb push 4 */
  push32((uint32_t)(0x4u));
  /* 113845cd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 113845d2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 113845d7 push edi */
  push32((uint32_t)(EDI));
  /* 113845d8 call dword ptr [0x1138602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138602c))), 0x113845deu);
  /* 113845de cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113845e0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 113845e3 jne 0x113845f9 */
  if (!C.zf) goto L_113845f9;
  /* 113845e5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 113845e8 push edi */
  push32((uint32_t)(EDI));
  /* 113845e9 push dword ptr [0x11387cc8] */
  push32((uint32_t)(r32((uint32_t)(0x11387cc8))));
  /* 113845ef call dword ptr [0x11386050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386050))), 0x113845f5u);
L_113845f5:;
  /* 113845f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113845f7 jmp 0x11384610 */
  goto L_11384610;
L_113845f9:;
  /* 113845f9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 113845fd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 113845ff mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11384602 inc dword ptr [0x11387a98] */
  { uint32_t _r=(r32((uint32_t)(0x11387a98)))+1; w32((uint32_t)(0x11387a98), (_r)); fl_inc(_r,32); }
  /* 11384608 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1138460b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1138460e mov eax, esi */
  EAX = (ESI);
L_11384610:;
  /* 11384610 pop edi */
  EDI = (pop32());
  /* 11384611 pop esi */
  ESI = (pop32());
  /* 11384612 ret  */
  ESPCHK(0x11384562u, _esp0);
  ESP += 4; return;
}

/* FUN_10004613 @ 0x11384613 (251 bytes, 85 insns) */
void f_11384613(void) {
  FTRACE(0x11384613u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11384613 push ebp */
  push32((uint32_t)(EBP));
  /* 11384614 mov ebp, esp */
  EBP = (ESP);
  /* 11384616 push ecx */
  push32((uint32_t)(ECX));
  /* 11384617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1138461a push ebx */
  push32((uint32_t)(EBX));
  /* 1138461b push esi */
  push32((uint32_t)(ESI));
  /* 1138461c push edi */
  push32((uint32_t)(EDI));
  /* 1138461d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11384620 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11384623 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11384625:;
  /* 11384625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384627 jl 0x1138462e */
  if ((C.sf!=C.of)) goto L_1138462e;
  /* 11384629 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1138462b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1138462c jmp 0x11384625 */
  goto L_11384625;
L_1138462e:;
  /* 1138462e mov eax, ebx */
  EAX = (EBX);
  /* 11384630 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11384632 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11384638 pop edx */
  EDX = (pop32());
  /* 11384639 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11384640 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11384643:;
  /* 11384643 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11384646 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11384649 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1138464c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1138464d jne 0x11384643 */
  if (!C.zf) goto L_11384643;
  /* 1138464f mov edi, ebx */
  EDI = (EBX);
  /* 11384651 push 4 */
  push32((uint32_t)(0x4u));
  /* 11384653 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11384656 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384659 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1138465e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11384663 push edi */
  push32((uint32_t)(EDI));
  /* 11384664 call dword ptr [0x1138602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138602c))), 0x1138466au);
  /* 1138466a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138466c jne 0x11384676 */
  if (!C.zf) goto L_11384676;
  /* 1138466e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11384671 jmp 0x11384709 */
  goto L_11384709;
L_11384676:;
  /* 11384676 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1138467c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138467e ja 0x113846bc */
  if ((!C.cf&&!C.zf)) goto L_113846bc;
  /* 11384680 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11384683:;
  /* 11384683 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11384687 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1138468e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11384694 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1138469b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1138469d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 113846a3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113846a6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 113846b0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113846b5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 113846b8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113846ba jbe 0x11384683 */
  if ((C.cf||C.zf)) goto L_11384683;
L_113846bc:;
  /* 113846bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113846bf lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 113846c2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113846c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 113846c9 pop edi */
  EDI = (pop32());
  /* 113846ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113846cd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 113846d0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 113846d3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 113846d6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 113846d9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 113846de mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 113846e5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 113846e8 mov cl, al */
  CL = (AL);
  /* 113846ea inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 113846ec test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113846ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113846f1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 113846f4 jne 0x113846f9 */
  if (!C.zf) goto L_113846f9;
  /* 113846f6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_113846f9:;
  /* 113846f9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 113846fe mov ecx, ebx */
  ECX = (EBX);
  /* 11384700 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11384702 not edx */
  EDX = (~(EDX));
  /* 11384704 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11384707 mov eax, ebx */
  EAX = (EBX);
L_11384709:;
  /* 11384709 pop edi */
  EDI = (pop32());
  /* 1138470a pop esi */
  ESI = (pop32());
  /* 1138470b pop ebx */
  EBX = (pop32());
  /* 1138470c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1138470d ret  */
  ESPCHK(0x11384613u, _esp0);
  ESP += 4; return;
}

/* FUN_1000470e @ 0x1138470e (137 bytes, 50 insns) */
void f_1138470e(void) {
  FTRACE(0x1138470eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138470e push ebx */
  push32((uint32_t)(EBX));
  /* 1138470f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11384711 cmp dword ptr [0x11387a4c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11387a4c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384717 push esi */
  push32((uint32_t)(ESI));
  /* 11384718 push edi */
  push32((uint32_t)(EDI));
  /* 11384719 jne 0x1138475d */
  if (!C.zf) goto L_1138475d;
  /* 1138471b push 0x11386470 */
  push32((uint32_t)(0x11386470u));
  /* 11384720 call dword ptr [0x11386020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386020))), 0x11384726u);
  /* 11384726 mov edi, eax */
  EDI = (EAX);
  /* 11384728 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138472a je 0x11384793 */
  if (C.zf) goto L_11384793;
  /* 1138472c mov esi, dword ptr [0x11386024] */
  ESI = (r32((uint32_t)(0x11386024)));
  /* 11384732 push 0x11386464 */
  push32((uint32_t)(0x11386464u));
  /* 11384737 push edi */
  push32((uint32_t)(EDI));
  /* 11384738 call esi */
  call_ind((uint32_t)(ESI), 0x1138473au);
  /* 1138473a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138473c mov dword ptr [0x11387a4c], eax */
  w32((uint32_t)(0x11387a4c), (EAX));
  /* 11384741 je 0x11384793 */
  if (C.zf) goto L_11384793;
  /* 11384743 push 0x11386454 */
  push32((uint32_t)(0x11386454u));
  /* 11384748 push edi */
  push32((uint32_t)(EDI));
  /* 11384749 call esi */
  call_ind((uint32_t)(ESI), 0x1138474bu);
  /* 1138474b push 0x11386440 */
  push32((uint32_t)(0x11386440u));
  /* 11384750 push edi */
  push32((uint32_t)(EDI));
  /* 11384751 mov dword ptr [0x11387a50], eax */
  w32((uint32_t)(0x11387a50), (EAX));
  /* 11384756 call esi */
  call_ind((uint32_t)(ESI), 0x11384758u);
  /* 11384758 mov dword ptr [0x11387a54], eax */
  w32((uint32_t)(0x11387a54), (EAX));
L_1138475d:;
  /* 1138475d mov eax, dword ptr [0x11387a50] */
  EAX = (r32((uint32_t)(0x11387a50)));
  /* 11384762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384764 je 0x1138477c */
  if (C.zf) goto L_1138477c;
  /* 11384766 call eax */
  call_ind((uint32_t)(EAX), 0x11384768u);
  /* 11384768 mov ebx, eax */
  EBX = (EAX);
  /* 1138476a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1138476c je 0x1138477c */
  if (C.zf) goto L_1138477c;
  /* 1138476e mov eax, dword ptr [0x11387a54] */
  EAX = (r32((uint32_t)(0x11387a54)));
  /* 11384773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384775 je 0x1138477c */
  if (C.zf) goto L_1138477c;
  /* 11384777 push ebx */
  push32((uint32_t)(EBX));
  /* 11384778 call eax */
  call_ind((uint32_t)(EAX), 0x1138477au);
  /* 1138477a mov ebx, eax */
  EBX = (EAX);
L_1138477c:;
  /* 1138477c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11384780 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11384784 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11384788 push ebx */
  push32((uint32_t)(EBX));
  /* 11384789 call dword ptr [0x11387a4c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11387a4c))), 0x1138478fu);
L_1138478f:;
  /* 1138478f pop edi */
  EDI = (pop32());
  /* 11384790 pop esi */
  ESI = (pop32());
  /* 11384791 pop ebx */
  EBX = (pop32());
  /* 11384792 ret  */
  ESPCHK(0x1138470eu, _esp0);
  ESP += 4; return;
L_11384793:;
  /* 11384793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11384795 jmp 0x1138478f */
  goto L_1138478f;
}

/* _strncpy @ 0x113847a0 (254 bytes, 109 insns) */
void f_113847a0(void) {
  FTRACE(0x113847a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113847a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 113847a4 push edi */
  push32((uint32_t)(EDI));
  /* 113847a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113847a7 je 0x11384823 */
  if (C.zf) goto L_11384823;
  /* 113847a9 push esi */
  push32((uint32_t)(ESI));
  /* 113847aa push ebx */
  push32((uint32_t)(EBX));
  /* 113847ab mov ebx, ecx */
  EBX = (ECX);
  /* 113847ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 113847b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 113847b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 113847bb jne 0x113847c4 */
  if (!C.zf) goto L_113847c4;
  /* 113847bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113847c0 jne 0x11384831 */
  if (!C.zf) goto L_11384831;
  /* 113847c2 jmp 0x113847e5 */
  goto L_113847e5;
L_113847c4:;
  /* 113847c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113847c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113847c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113847c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113847ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113847cb je 0x113847f2 */
  if (C.zf) goto L_113847f2;
  /* 113847cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113847cf je 0x113847fa */
  if (C.zf) goto L_113847fa;
  /* 113847d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 113847d7 jne 0x113847c4 */
  if (!C.zf) goto L_113847c4;
  /* 113847d9 mov ebx, ecx */
  EBX = (ECX);
  /* 113847db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113847de jne 0x11384831 */
  if (!C.zf) goto L_11384831;
L_113847e0:;
  /* 113847e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 113847e3 je 0x113847f2 */
  if (C.zf) goto L_113847f2;
L_113847e5:;
  /* 113847e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113847e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113847e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113847ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113847eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113847ed je 0x1138481e */
  if (C.zf) goto L_1138481e;
  /* 113847ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 113847f0 jne 0x113847e5 */
  if (!C.zf) goto L_113847e5;
L_113847f2:;
  /* 113847f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 113847f6 pop ebx */
  EBX = (pop32());
  /* 113847f7 pop esi */
  ESI = (pop32());
  /* 113847f8 pop edi */
  EDI = (pop32());
  /* 113847f9 ret  */
  ESPCHK(0x113847a0u, _esp0);
  ESP += 4; return;
L_113847fa:;
  /* 113847fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11384800 je 0x11384814 */
  if (C.zf) goto L_11384814;
L_11384802:;
  /* 11384802 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11384804 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11384805 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11384806 je 0x11384896 */
  if (C.zf) goto L_11384896;
  /* 1138480c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11384812 jne 0x11384802 */
  if (!C.zf) goto L_11384802;
L_11384814:;
  /* 11384814 mov ebx, ecx */
  EBX = (ECX);
  /* 11384816 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384819 jne 0x11384887 */
  if (!C.zf) goto L_11384887;
L_1138481b:;
  /* 1138481b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1138481d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1138481e:;
  /* 1138481e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1138481f jne 0x1138481b */
  if (!C.zf) goto L_1138481b;
  /* 11384821 pop ebx */
  EBX = (pop32());
  /* 11384822 pop esi */
  ESI = (pop32());
L_11384823:;
  /* 11384823 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11384827 pop edi */
  EDI = (pop32());
  /* 11384828 ret  */
  ESPCHK(0x113847a0u, _esp0);
  ESP += 4; return;
L_11384829:;
  /* 11384829 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1138482b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1138482e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1138482f je 0x113847e0 */
  if (C.zf) goto L_113847e0;
L_11384831:;
  /* 11384831 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11384836 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11384838 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1138483a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1138483d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1138483f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11384841 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384844 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11384849 je 0x11384829 */
  if (C.zf) goto L_11384829;
  /* 1138484b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1138484d je 0x1138487b */
  if (C.zf) goto L_1138487b;
  /* 1138484f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11384851 je 0x11384871 */
  if (C.zf) goto L_11384871;
  /* 11384853 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11384859 je 0x11384867 */
  if (C.zf) goto L_11384867;
  /* 1138485b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11384861 jne 0x11384829 */
  if (!C.zf) goto L_11384829;
  /* 11384863 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11384865 jmp 0x1138487f */
  goto L_1138487f;
L_11384867:;
  /* 11384867 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1138486d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1138486f jmp 0x1138487f */
  goto L_1138487f;
L_11384871:;
  /* 11384871 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11384877 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11384879 jmp 0x1138487f */
  goto L_1138487f;
L_1138487b:;
  /* 1138487b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1138487d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1138487f:;
  /* 1138487f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11384884 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11384885 je 0x11384891 */
  if (C.zf) goto L_11384891;
L_11384887:;
  /* 11384887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11384889:;
  /* 11384889 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1138488b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1138488e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1138488f jne 0x11384889 */
  if (!C.zf) goto L_11384889;
L_11384891:;
  /* 11384891 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11384894 jne 0x1138481b */
  if (!C.zf) goto L_1138481b;
L_11384896:;
  /* 11384896 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1138489a pop ebx */
  EBX = (pop32());
  /* 1138489b pop esi */
  ESI = (pop32());
  /* 1138489c pop edi */
  EDI = (pop32());
  /* 1138489d ret  */
  ESPCHK(0x113847a0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x113848a0 (88 bytes, 40 insns) */
void f_113848a0(void) {
  FTRACE(0x113848a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113848a0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 113848a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 113848a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113848aa je 0x113848f3 */
  if (C.zf) goto L_113848f3;
  /* 113848ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113848ae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 113848b2 push edi */
  push32((uint32_t)(EDI));
  /* 113848b3 mov edi, ecx */
  EDI = (ECX);
  /* 113848b5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113848b8 jb 0x113848e7 */
  if (C.cf) goto L_113848e7;
  /* 113848ba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113848bc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 113848bf je 0x113848c9 */
  if (C.zf) goto L_113848c9;
  /* 113848c1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_113848c3:;
  /* 113848c3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113848c5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113848c6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113848c7 jne 0x113848c3 */
  if (!C.zf) goto L_113848c3;
L_113848c9:;
  /* 113848c9 mov ecx, eax */
  ECX = (EAX);
  /* 113848cb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 113848ce add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113848d0 mov ecx, eax */
  ECX = (EAX);
  /* 113848d2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113848d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113848d7 mov ecx, edx */
  ECX = (EDX);
  /* 113848d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113848dc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 113848df je 0x113848e7 */
  if (C.zf) goto L_113848e7;
  /* 113848e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 113848e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113848e5 je 0x113848ed */
  if (C.zf) goto L_113848ed;
L_113848e7:;
  /* 113848e7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 113848e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113848ea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 113848eb jne 0x113848e7 */
  if (!C.zf) goto L_113848e7;
L_113848ed:;
  /* 113848ed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113848f1 pop edi */
  EDI = (pop32());
  /* 113848f2 ret  */
  ESPCHK(0x113848a0u, _esp0);
  ESP += 4; return;
L_113848f3:;
  /* 113848f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 113848f7 ret  */
  ESPCHK(0x113848a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100048f8 @ 0x113848f8 (27 bytes, 13 insns) */
void f_113848f8(void) {
  FTRACE(0x113848f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113848f8 mov eax, dword ptr [0x11387a58] */
  EAX = (r32((uint32_t)(0x11387a58)));
  /* 113848fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113848ff je 0x11384910 */
  if (C.zf) goto L_11384910;
  /* 11384901 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11384905 call eax */
  call_ind((uint32_t)(EAX), 0x11384907u);
  /* 11384907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384909 pop ecx */
  ECX = (pop32());
  /* 1138490a je 0x11384910 */
  if (C.zf) goto L_11384910;
  /* 1138490c push 1 */
  push32((uint32_t)(0x1u));
  /* 1138490e pop eax */
  EAX = (pop32());
  /* 1138490f ret  */
  ESPCHK(0x113848f8u, _esp0);
  ESP += 4; return;
L_11384910:;
  /* 11384910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11384912 ret  */
  ESPCHK(0x113848f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004913 @ 0x11384913 (511 bytes, 193 insns) */
void f_11384913(void) {
  FTRACE(0x11384913u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11384913 push ebp */
  push32((uint32_t)(EBP));
  /* 11384914 mov ebp, esp */
  EBP = (ESP);
  /* 11384916 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11384918 push 0x11386488 */
  push32((uint32_t)(0x11386488u));
  /* 1138491d push 0x113850e0 */
  push32((uint32_t)(0x113850e0u));
  /* 11384922 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11384928 push eax */
  push32((uint32_t)(EAX));
  /* 11384929 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11384930 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384933 push ebx */
  push32((uint32_t)(EBX));
  /* 11384934 push esi */
  push32((uint32_t)(ESI));
  /* 11384935 push edi */
  push32((uint32_t)(EDI));
  /* 11384936 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11384939 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1138493b cmp dword ptr [0x11387a80], edi */
  { uint32_t _a=(r32((uint32_t)(0x11387a80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384941 jne 0x11384989 */
  if (!C.zf) goto L_11384989;
  /* 11384943 push edi */
  push32((uint32_t)(EDI));
  /* 11384944 push edi */
  push32((uint32_t)(EDI));
  /* 11384945 push 1 */
  push32((uint32_t)(0x1u));
  /* 11384947 pop ebx */
  EBX = (pop32());
  /* 11384948 push ebx */
  push32((uint32_t)(EBX));
  /* 11384949 push 0x11386480 */
  push32((uint32_t)(0x11386480u));
  /* 1138494e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11384953 push esi */
  push32((uint32_t)(ESI));
  /* 11384954 push edi */
  push32((uint32_t)(EDI));
  /* 11384955 call dword ptr [0x11386014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386014))), 0x1138495bu);
  /* 1138495b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1138495d je 0x11384967 */
  if (C.zf) goto L_11384967;
  /* 1138495f mov dword ptr [0x11387a80], ebx */
  w32((uint32_t)(0x11387a80), (EBX));
  /* 11384965 jmp 0x11384989 */
  goto L_11384989;
L_11384967:;
  /* 11384967 push edi */
  push32((uint32_t)(EDI));
  /* 11384968 push edi */
  push32((uint32_t)(EDI));
  /* 11384969 push ebx */
  push32((uint32_t)(EBX));
  /* 1138496a push 0x1138647c */
  push32((uint32_t)(0x1138647cu));
  /* 1138496f push esi */
  push32((uint32_t)(ESI));
  /* 11384970 push edi */
  push32((uint32_t)(EDI));
  /* 11384971 call dword ptr [0x11386018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386018))), 0x11384977u);
  /* 11384977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384979 je 0x11384aa1 */
  if (C.zf) goto L_11384aa1;
  /* 1138497f mov dword ptr [0x11387a80], 2 */
  w32((uint32_t)(0x11387a80), (0x2u));
L_11384989:;
  /* 11384989 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138498c jle 0x1138499e */
  if ((C.zf||C.sf!=C.of)) goto L_1138499e;
  /* 1138498e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11384991 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11384994 call 0x11384b37 */
  push32(0x11384999u); f_11384b37();
  /* 11384999 pop ecx */
  ECX = (pop32());
  /* 1138499a pop ecx */
  ECX = (pop32());
  /* 1138499b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1138499e:;
  /* 1138499e mov eax, dword ptr [0x11387a80] */
  EAX = (r32((uint32_t)(0x11387a80)));
  /* 113849a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113849a6 jne 0x113849c5 */
  if (!C.zf) goto L_113849c5;
  /* 113849a8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 113849ab push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 113849ae push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 113849b1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 113849b4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 113849b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 113849ba call dword ptr [0x11386018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386018))), 0x113849c0u);
  /* 113849c0 jmp 0x11384aa3 */
  goto L_11384aa3;
L_113849c5:;
  /* 113849c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113849c8 jne 0x11384aa1 */
  if (!C.zf) goto L_11384aa1;
  /* 113849ce cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113849d1 jne 0x113849db */
  if (!C.zf) goto L_113849db;
  /* 113849d3 mov eax, dword ptr [0x11387a78] */
  EAX = (r32((uint32_t)(0x11387a78)));
  /* 113849d8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_113849db:;
  /* 113849db push edi */
  push32((uint32_t)(EDI));
  /* 113849dc push edi */
  push32((uint32_t)(EDI));
  /* 113849dd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 113849e0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 113849e3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 113849e6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113849e8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113849ea and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 113849ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113849ee push eax */
  push32((uint32_t)(EAX));
  /* 113849ef push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 113849f2 call dword ptr [0x1138601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138601c))), 0x113849f8u);
  /* 113849f8 mov ebx, eax */
  EBX = (EAX);
  /* 113849fa mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 113849fd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113849ff je 0x11384aa1 */
  if (C.zf) goto L_11384aa1;
  /* 11384a05 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11384a08 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11384a0b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384a0e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11384a10 call 0x113851c0 */
  push32(0x11384a15u); f_113851c0();
  /* 11384a15 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11384a18 mov eax, esp */
  EAX = (ESP);
  /* 11384a1a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11384a1d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11384a21 jmp 0x11384a36 */
  goto L_11384a36;
  /* 11384a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11384a25 pop eax */
  EAX = (pop32());
  /* 11384a26 ret  */
  ESPCHK(0x11384913u, _esp0);
  ESP += 4; return;
  /* 11384a27 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11384a2a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11384a2c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11384a2f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11384a33 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11384a36:;
  /* 11384a36 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384a39 je 0x11384aa1 */
  if (C.zf) goto L_11384aa1;
  /* 11384a3b push ebx */
  push32((uint32_t)(EBX));
  /* 11384a3c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11384a3f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11384a42 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11384a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11384a47 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11384a4a call dword ptr [0x1138601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138601c))), 0x11384a50u);
  /* 11384a50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384a52 je 0x11384aa1 */
  if (C.zf) goto L_11384aa1;
  /* 11384a54 push edi */
  push32((uint32_t)(EDI));
  /* 11384a55 push edi */
  push32((uint32_t)(EDI));
  /* 11384a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11384a57 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11384a5a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11384a5d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11384a60 call dword ptr [0x11386014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386014))), 0x11384a66u);
  /* 11384a66 mov esi, eax */
  ESI = (EAX);
  /* 11384a68 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11384a6b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384a6d je 0x11384aa1 */
  if (C.zf) goto L_11384aa1;
  /* 11384a6f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11384a73 je 0x11384ab5 */
  if (C.zf) goto L_11384ab5;
  /* 11384a75 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384a78 je 0x11384b30 */
  if (C.zf) goto L_11384b30;
  /* 11384a7e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384a81 jg 0x11384aa1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11384aa1;
  /* 11384a83 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11384a86 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11384a89 push ebx */
  push32((uint32_t)(EBX));
  /* 11384a8a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11384a8d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11384a90 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11384a93 call dword ptr [0x11386014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386014))), 0x11384a99u);
  /* 11384a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384a9b jne 0x11384b30 */
  if (!C.zf) goto L_11384b30;
L_11384aa1:;
  /* 11384aa1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11384aa3:;
  /* 11384aa3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11384aa6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11384aa9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11384ab0 pop edi */
  EDI = (pop32());
  /* 11384ab1 pop esi */
  ESI = (pop32());
  /* 11384ab2 pop ebx */
  EBX = (pop32());
  /* 11384ab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384ab4 ret  */
  ESPCHK(0x11384913u, _esp0);
  ESP += 4; return;
L_11384ab5:;
  /* 11384ab5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11384abc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11384abf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384ac2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11384ac4 call 0x113851c0 */
  push32(0x11384ac9u); f_113851c0();
  /* 11384ac9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11384acc mov ebx, esp */
  EBX = (ESP);
  /* 11384ace mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11384ad1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11384ad5 jmp 0x11384ae9 */
  goto L_11384ae9;
  /* 11384ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11384ad9 pop eax */
  EAX = (pop32());
  /* 11384ada ret  */
  ESPCHK(0x11384913u, _esp0);
  ESP += 4; return;
  /* 11384adb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11384ade xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11384ae0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11384ae2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11384ae6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11384ae9:;
  /* 11384ae9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384aeb je 0x11384aa1 */
  if (C.zf) goto L_11384aa1;
  /* 11384aed push esi */
  push32((uint32_t)(ESI));
  /* 11384aee push ebx */
  push32((uint32_t)(EBX));
  /* 11384aef push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11384af2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11384af5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11384af8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11384afb call dword ptr [0x11386014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386014))), 0x11384b01u);
  /* 11384b01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384b03 je 0x11384aa1 */
  if (C.zf) goto L_11384aa1;
  /* 11384b05 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384b08 push edi */
  push32((uint32_t)(EDI));
  /* 11384b09 push edi */
  push32((uint32_t)(EDI));
  /* 11384b0a jne 0x11384b10 */
  if (!C.zf) goto L_11384b10;
  /* 11384b0c push edi */
  push32((uint32_t)(EDI));
  /* 11384b0d push edi */
  push32((uint32_t)(EDI));
  /* 11384b0e jmp 0x11384b16 */
  goto L_11384b16;
L_11384b10:;
  /* 11384b10 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11384b13 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11384b16:;
  /* 11384b16 push esi */
  push32((uint32_t)(ESI));
  /* 11384b17 push ebx */
  push32((uint32_t)(EBX));
  /* 11384b18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11384b1d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11384b20 call dword ptr [0x11386068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386068))), 0x11384b26u);
  /* 11384b26 mov esi, eax */
  ESI = (EAX);
  /* 11384b28 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384b2a je 0x11384aa1 */
  if (C.zf) goto L_11384aa1;
L_11384b30:;
  /* 11384b30 mov eax, esi */
  EAX = (ESI);
  /* 11384b32 jmp 0x11384aa3 */
  goto L_11384aa3;
}

/* FUN_10004b37 @ 0x11384b37 (43 bytes, 20 insns) */
void f_11384b37(void) {
  FTRACE(0x11384b37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11384b37 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11384b3b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11384b3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11384b41 push esi */
  push32((uint32_t)(ESI));
  /* 11384b42 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11384b45 je 0x11384b54 */
  if (C.zf) goto L_11384b54;
L_11384b47:;
  /* 11384b47 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384b4a je 0x11384b54 */
  if (C.zf) goto L_11384b54;
  /* 11384b4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11384b4d mov esi, ecx */
  ESI = (ECX);
  /* 11384b4f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11384b50 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11384b52 jne 0x11384b47 */
  if (!C.zf) goto L_11384b47;
L_11384b54:;
  /* 11384b54 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384b57 pop esi */
  ESI = (pop32());
  /* 11384b58 jne 0x11384b5f */
  if (!C.zf) goto L_11384b5f;
  /* 11384b5a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384b5e ret  */
  ESPCHK(0x11384b37u, _esp0);
  ESP += 4; return;
L_11384b5f:;
  /* 11384b5f mov eax, edx */
  EAX = (EDX);
  /* 11384b61 ret  */
  ESPCHK(0x11384b37u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b62 @ 0x11384b62 (318 bytes, 123 insns) */
void f_11384b62(void) {
  FTRACE(0x11384b62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11384b62 push ebp */
  push32((uint32_t)(EBP));
  /* 11384b63 mov ebp, esp */
  EBP = (ESP);
  /* 11384b65 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11384b67 push 0x113864a0 */
  push32((uint32_t)(0x113864a0u));
  /* 11384b6c push 0x113850e0 */
  push32((uint32_t)(0x113850e0u));
  /* 11384b71 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11384b77 push eax */
  push32((uint32_t)(EAX));
  /* 11384b78 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11384b7f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384b82 push ebx */
  push32((uint32_t)(EBX));
  /* 11384b83 push esi */
  push32((uint32_t)(ESI));
  /* 11384b84 push edi */
  push32((uint32_t)(EDI));
  /* 11384b85 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11384b88 mov eax, dword ptr [0x11387a84] */
  EAX = (r32((uint32_t)(0x11387a84)));
  /* 11384b8d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11384b8f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384b91 jne 0x11384bd1 */
  if (!C.zf) goto L_11384bd1;
  /* 11384b93 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11384b96 push eax */
  push32((uint32_t)(EAX));
  /* 11384b97 push 1 */
  push32((uint32_t)(0x1u));
  /* 11384b99 pop esi */
  ESI = (pop32());
  /* 11384b9a push esi */
  push32((uint32_t)(ESI));
  /* 11384b9b push 0x11386480 */
  push32((uint32_t)(0x11386480u));
  /* 11384ba0 push esi */
  push32((uint32_t)(ESI));
  /* 11384ba1 call dword ptr [0x1138600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138600c))), 0x11384ba7u);
  /* 11384ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384ba9 je 0x11384baf */
  if (C.zf) goto L_11384baf;
  /* 11384bab mov eax, esi */
  EAX = (ESI);
  /* 11384bad jmp 0x11384bcc */
  goto L_11384bcc;
L_11384baf:;
  /* 11384baf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11384bb2 push eax */
  push32((uint32_t)(EAX));
  /* 11384bb3 push esi */
  push32((uint32_t)(ESI));
  /* 11384bb4 push 0x1138647c */
  push32((uint32_t)(0x1138647cu));
  /* 11384bb9 push esi */
  push32((uint32_t)(ESI));
  /* 11384bba push ebx */
  push32((uint32_t)(EBX));
  /* 11384bbb call dword ptr [0x11386010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386010))), 0x11384bc1u);
  /* 11384bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11384bc3 je 0x11384c97 */
  if (C.zf) goto L_11384c97;
  /* 11384bc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11384bcb pop eax */
  EAX = (pop32());
L_11384bcc:;
  /* 11384bcc mov dword ptr [0x11387a84], eax */
  w32((uint32_t)(0x11387a84), (EAX));
L_11384bd1:;
  /* 11384bd1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384bd4 jne 0x11384bfa */
  if (!C.zf) goto L_11384bfa;
  /* 11384bd6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11384bd9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384bdb jne 0x11384be2 */
  if (!C.zf) goto L_11384be2;
  /* 11384bdd mov eax, dword ptr [0x11387a68] */
  EAX = (r32((uint32_t)(0x11387a68)));
L_11384be2:;
  /* 11384be2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11384be5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11384be8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11384beb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11384bee push eax */
  push32((uint32_t)(EAX));
  /* 11384bef call dword ptr [0x11386010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11386010))), 0x11384bf5u);
  /* 11384bf5 jmp 0x11384c99 */
  goto L_11384c99;
L_11384bfa:;
  /* 11384bfa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384bfd jne 0x11384c97 */
  if (!C.zf) goto L_11384c97;
  /* 11384c03 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384c06 jne 0x11384c10 */
  if (!C.zf) goto L_11384c10;
  /* 11384c08 mov eax, dword ptr [0x11387a78] */
  EAX = (r32((uint32_t)(0x11387a78)));
  /* 11384c0d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11384c10:;
  /* 11384c10 push ebx */
  push32((uint32_t)(EBX));
  /* 11384c11 push ebx */
  push32((uint32_t)(EBX));
  /* 11384c12 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11384c15 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11384c18 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11384c1b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11384c1d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384c1f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11384c22 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11384c23 push eax */
  push32((uint32_t)(EAX));
  /* 11384c24 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11384c27 call dword ptr [0x1138601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138601c))), 0x11384c2du);
  /* 11384c2d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11384c30 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384c32 je 0x11384c97 */
  if (C.zf) goto L_11384c97;
  /* 11384c34 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11384c37 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11384c3a mov eax, edi */
  EAX = (EDI);
  /* 11384c3c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384c3f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11384c41 call 0x113851c0 */
  push32(0x11384c46u); f_113851c0();
  /* 11384c46 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11384c49 mov esi, esp */
  ESI = (ESP);
  /* 11384c4b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11384c4e push edi */
  push32((uint32_t)(EDI));
  /* 11384c4f push ebx */
  push32((uint32_t)(EBX));
  /* 11384c50 push esi */
  push32((uint32_t)(ESI));
  /* 11384c51 call 0x113848a0 */
  push32(0x11384c56u); f_113848a0();
  /* 11384c56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11384c59 jmp 0x11384c66 */
  goto L_11384c66;
  /* 11384c5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11384c5d pop eax */
  EAX = (pop32());
  /* 11384c5e ret  */
  ESPCHK(0x11384b62u, _esp0);
  ESP += 4; return;
  /* 11384c5f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11384c62 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11384c64 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11384c66:;
  /* 11384c66 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11384c6a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384c6c je 0x11384c97 */
  if (C.zf) goto L_11384c97;
  /* 11384c6e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11384c71 push esi */
  push32((uint32_t)(ESI));
  /* 11384c72 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11384c75 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11384c78 push 1 */
  push32((uint32_t)(0x1u));
  /* 11384c7a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11384c7d call dword ptr [0x1138601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138601c))), 0x11384c83u);
  /* 11384c83 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384c85 je 0x11384c97 */
  if (C.zf) goto L_11384c97;
  /* 11384c87 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11384c8a push eax */
  push32((uint32_t)(EAX));
  /* 11384c8b push esi */
  push32((uint32_t)(ESI));
  /* 11384c8c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11384c8f call dword ptr [0x1138600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1138600c))), 0x11384c95u);
  /* 11384c95 jmp 0x11384c99 */
  goto L_11384c99;
L_11384c97:;
  /* 11384c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11384c99:;
  /* 11384c99 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11384c9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11384c9f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11384ca6 pop edi */
  EDI = (pop32());
  /* 11384ca7 pop esi */
  ESI = (pop32());
  /* 11384ca8 pop ebx */
  EBX = (pop32());
  /* 11384ca9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384caa ret  */
  ESPCHK(0x11384b62u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cb0 @ 0x11384cb0 (664 bytes, 270 insns) [15 switch table(s)] */
void f_11384cb0(void) {
  FTRACE(0x11384cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11384cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11384cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11384cb3 push edi */
  push32((uint32_t)(EDI));
  /* 11384cb4 push esi */
  push32((uint32_t)(ESI));
  /* 11384cb5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11384cb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11384cbb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11384cbe mov eax, ecx */
  EAX = (ECX);
  /* 11384cc0 mov edx, ecx */
  EDX = (ECX);
  /* 11384cc2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384cc4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384cc6 jbe 0x11384cd0 */
  if ((C.cf||C.zf)) goto L_11384cd0;
  /* 11384cc8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384cca jb 0x11384e48 */
  if (C.cf) goto L_11384e48;
L_11384cd0:;
  /* 11384cd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11384cd6 jne 0x11384cec */
  if (!C.zf) goto L_11384cec;
  /* 11384cd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384cdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11384cde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384ce1 jb 0x11384d0c */
  if (C.cf) goto L_11384d0c;
  /* 11384ce3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11384ce5 jmp dword ptr [edx*4 + 0x11384df8] */
  switch (EDX) {
    case 0: goto L_11384e08;
    case 1: goto L_11384e10;
    case 2: goto L_11384e1c;
    case 3: goto L_11384e30;
    default: x86_unimpl("switch@0x11384ce5 out of table"); return;
  }
L_11384cec:;
  /* 11384cec mov eax, edi */
  EAX = (EDI);
  /* 11384cee mov edx, 3 */
  EDX = (0x3u);
  /* 11384cf3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384cf6 jb 0x11384d04 */
  if (C.cf) goto L_11384d04;
  /* 11384cf8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11384cfb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11384cfd jmp dword ptr [eax*4 + 0x11384d10] */
  switch (EAX) {
    case 1: goto L_11384d20;
    case 2: goto L_11384d4c;
    case 3: goto L_11384d70;
    default: x86_unimpl("switch@0x11384cfd out of table"); return;
  }
L_11384d04:;
  /* 11384d04 jmp dword ptr [ecx*4 + 0x11384e08] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11384e08)))); return;
  /* 11384d0b nop  */
  /* nop */
L_11384d0c:;
  /* 11384d0c jmp dword ptr [ecx*4 + 0x11384d8c] */
  switch (ECX) {
    case 0: goto L_11384def;
    case 1: goto L_11384ddc;
    case 2: goto L_11384dd4;
    case 3: goto L_11384dcc;
    case 4: goto L_11384dc4;
    case 5: goto L_11384dbc;
    case 6: goto L_11384db4;
    case 7: goto L_11384dac;
    default: x86_unimpl("switch@0x11384d0c out of table"); return;
  }
  /* 11384d13 nop  */
  /* nop */
L_11384d20:;
  /* 11384d20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11384d22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11384d24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11384d26 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11384d29 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11384d2c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11384d2f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384d32 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11384d35 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384d38 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384d3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384d3e jb 0x11384d0c */
  if (C.cf) goto L_11384d0c;
  /* 11384d40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11384d42 jmp dword ptr [edx*4 + 0x11384df8] */
  switch (EDX) {
    case 0: goto L_11384e08;
    case 1: goto L_11384e10;
    case 2: goto L_11384e1c;
    case 3: goto L_11384e30;
    default: x86_unimpl("switch@0x11384d42 out of table"); return;
  }
  /* 11384d49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11384d4c:;
  /* 11384d4c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11384d4e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11384d50 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11384d52 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11384d55 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384d58 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11384d5b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384d5e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384d61 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384d64 jb 0x11384d0c */
  if (C.cf) goto L_11384d0c;
  /* 11384d66 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11384d68 jmp dword ptr [edx*4 + 0x11384df8] */
  switch (EDX) {
    case 0: goto L_11384e08;
    case 1: goto L_11384e10;
    case 2: goto L_11384e1c;
    case 3: goto L_11384e30;
    default: x86_unimpl("switch@0x11384d68 out of table"); return;
  }
  /* 11384d6f nop  */
  /* nop */
L_11384d70:;
  /* 11384d70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11384d72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11384d74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11384d76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11384d77 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384d7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11384d7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384d7e jb 0x11384d0c */
  if (C.cf) goto L_11384d0c;
  /* 11384d80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11384d82 jmp dword ptr [edx*4 + 0x11384df8] */
  switch (EDX) {
    case 0: goto L_11384e08;
    case 1: goto L_11384e10;
    case 2: goto L_11384e1c;
    case 3: goto L_11384e30;
    default: x86_unimpl("switch@0x11384d82 out of table"); return;
  }
  /* 11384d89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11384dac:;
  /* 11384dac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11384db0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11384db4:;
  /* 11384db4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11384db8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11384dbc:;
  /* 11384dbc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11384dc0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11384dc4:;
  /* 11384dc4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11384dc8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11384dcc:;
  /* 11384dcc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11384dd0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11384dd4:;
  /* 11384dd4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11384dd8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11384ddc:;
  /* 11384ddc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11384de0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11384de4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11384deb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384ded add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11384def:;
  /* 11384def jmp dword ptr [edx*4 + 0x11384df8] */
  switch (EDX) {
    case 0: goto L_11384e08;
    case 1: goto L_11384e10;
    case 2: goto L_11384e1c;
    case 3: goto L_11384e30;
    default: x86_unimpl("switch@0x11384def out of table"); return;
  }
  /* 11384df6 mov edi, edi */
  EDI = (EDI);
L_11384e08:;
  /* 11384e08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384e0b pop esi */
  ESI = (pop32());
  /* 11384e0c pop edi */
  EDI = (pop32());
  /* 11384e0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384e0e ret  */
  ESPCHK(0x11384cb0u, _esp0);
  ESP += 4; return;
  /* 11384e0f nop  */
  /* nop */
L_11384e10:;
  /* 11384e10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11384e12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11384e14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384e17 pop esi */
  ESI = (pop32());
  /* 11384e18 pop edi */
  EDI = (pop32());
  /* 11384e19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384e1a ret  */
  ESPCHK(0x11384cb0u, _esp0);
  ESP += 4; return;
  /* 11384e1b nop  */
  /* nop */
L_11384e1c:;
  /* 11384e1c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11384e1e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11384e20 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11384e23 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11384e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384e29 pop esi */
  ESI = (pop32());
  /* 11384e2a pop edi */
  EDI = (pop32());
  /* 11384e2b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384e2c ret  */
  ESPCHK(0x11384cb0u, _esp0);
  ESP += 4; return;
  /* 11384e2d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11384e30:;
  /* 11384e30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11384e32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11384e34 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11384e37 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11384e3a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11384e3d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11384e40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384e43 pop esi */
  ESI = (pop32());
  /* 11384e44 pop edi */
  EDI = (pop32());
  /* 11384e45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384e46 ret  */
  ESPCHK(0x11384cb0u, _esp0);
  ESP += 4; return;
  /* 11384e47 nop  */
  /* nop */
L_11384e48:;
  /* 11384e48 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11384e4c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11384e50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11384e56 jne 0x11384e7c */
  if (!C.zf) goto L_11384e7c;
  /* 11384e58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384e5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11384e5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384e61 jb 0x11384e70 */
  if (C.cf) goto L_11384e70;
  /* 11384e63 std  */
  C.df=1;
  /* 11384e64 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11384e66 cld  */
  C.df=0;
  /* 11384e67 jmp dword ptr [edx*4 + 0x11384f90] */
  switch (EDX) {
    case 0: goto L_11384fa0;
    case 1: goto L_11384fa8;
    case 2: goto L_11384fb8;
    case 3: goto L_11384fcc;
    default: x86_unimpl("switch@0x11384e67 out of table"); return;
  }
  /* 11384e6e mov edi, edi */
  EDI = (EDI);
L_11384e70:;
  /* 11384e70 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11384e72 jmp dword ptr [ecx*4 + 0x11384f40] */
  switch (ECX) {
    case 0: goto L_11384f87;
    default: x86_unimpl("switch@0x11384e72 out of table"); return;
  }
  /* 11384e79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11384e7c:;
  /* 11384e7c mov eax, edi */
  EAX = (EDI);
  /* 11384e7e mov edx, 3 */
  EDX = (0x3u);
  /* 11384e83 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384e86 jb 0x11384e94 */
  if (C.cf) goto L_11384e94;
  /* 11384e88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11384e8b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384e8d jmp dword ptr [eax*4 + 0x11384e98] */
  switch (EAX) {
    case 1: goto L_11384ea8;
    case 2: goto L_11384ec8;
    case 3: goto L_11384ef0;
    default: x86_unimpl("switch@0x11384e8d out of table"); return;
  }
L_11384e94:;
  /* 11384e94 jmp dword ptr [ecx*4 + 0x11384f90] */
  switch (ECX) {
    case 0: goto L_11384fa0;
    case 1: goto L_11384fa8;
    case 2: goto L_11384fb8;
    case 3: goto L_11384fcc;
    default: x86_unimpl("switch@0x11384e94 out of table"); return;
  }
  /* 11384e9b nop  */
  /* nop */
L_11384ea8:;
  /* 11384ea8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11384eab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11384ead mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11384eb0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11384eb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384eb4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11384eb5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384eb8 jb 0x11384e70 */
  if (C.cf) goto L_11384e70;
  /* 11384eba std  */
  C.df=1;
  /* 11384ebb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11384ebd cld  */
  C.df=0;
  /* 11384ebe jmp dword ptr [edx*4 + 0x11384f90] */
  switch (EDX) {
    case 0: goto L_11384fa0;
    case 1: goto L_11384fa8;
    case 2: goto L_11384fb8;
    case 3: goto L_11384fcc;
    default: x86_unimpl("switch@0x11384ebe out of table"); return;
  }
  /* 11384ec5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11384ec8:;
  /* 11384ec8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11384ecb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11384ecd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11384ed0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11384ed3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384ed6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11384ed9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384edc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384edf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384ee2 jb 0x11384e70 */
  if (C.cf) goto L_11384e70;
  /* 11384ee4 std  */
  C.df=1;
  /* 11384ee5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11384ee7 cld  */
  C.df=0;
  /* 11384ee8 jmp dword ptr [edx*4 + 0x11384f90] */
  switch (EDX) {
    case 0: goto L_11384fa0;
    case 1: goto L_11384fa8;
    case 2: goto L_11384fb8;
    case 3: goto L_11384fcc;
    default: x86_unimpl("switch@0x11384ee8 out of table"); return;
  }
  /* 11384eef nop  */
  /* nop */
L_11384ef0:;
  /* 11384ef0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11384ef3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11384ef5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11384ef8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11384efb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11384efe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11384f01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11384f04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11384f07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384f0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11384f0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11384f10 jb 0x11384e70 */
  if (C.cf) goto L_11384e70;
  /* 11384f16 std  */
  C.df=1;
  /* 11384f17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11384f19 cld  */
  C.df=0;
  /* 11384f1a jmp dword ptr [edx*4 + 0x11384f90] */
  switch (EDX) {
    case 0: goto L_11384fa0;
    case 1: goto L_11384fa8;
    case 2: goto L_11384fb8;
    case 3: goto L_11384fcc;
    default: x86_unimpl("switch@0x11384f1a out of table"); return;
  }
  /* 11384f21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11384f24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11384f25 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11384f26 cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384f28 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11384f29 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11384f2a cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384f2c push esp */
  push32((uint32_t)(ESP));
  /* 11384f2d dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11384f2e cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384f30 pop esp */
  ESP = (pop32());
  /* 11384f31 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11384f32 cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384f34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11384f36 cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384f38 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x11384f38");
  /* 11384f39 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11384f3a cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384f3c je 0x11384f8d */
  if (C.zf) goto L_11384f8d;
  /* 11384f3e cmp byte ptr [ecx], dl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11384f44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11384f48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11384f4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11384f50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11384f54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11384f58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11384f5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11384f60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11384f64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11384f68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11384f6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11384f70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11384f74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11384f78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11384f7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11384f83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11384f85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11384f87:;
  /* 11384f87 jmp dword ptr [edx*4 + 0x11384f90] */
  switch (EDX) {
    case 0: goto L_11384fa0;
    case 1: goto L_11384fa8;
    case 2: goto L_11384fb8;
    case 3: goto L_11384fcc;
    default: x86_unimpl("switch@0x11384f87 out of table"); return;
  }
  /* 11384f8e mov edi, edi */
  EDI = (EDI);
L_11384fa0:;
  /* 11384fa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384fa3 pop esi */
  ESI = (pop32());
  /* 11384fa4 pop edi */
  EDI = (pop32());
  /* 11384fa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384fa6 ret  */
  ESPCHK(0x11384cb0u, _esp0);
  ESP += 4; return;
  /* 11384fa7 nop  */
  /* nop */
L_11384fa8:;
  /* 11384fa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11384fab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11384fae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384fb1 pop esi */
  ESI = (pop32());
  /* 11384fb2 pop edi */
  EDI = (pop32());
  /* 11384fb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384fb4 ret  */
  ESPCHK(0x11384cb0u, _esp0);
  ESP += 4; return;
  /* 11384fb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11384fb8:;
  /* 11384fb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11384fbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11384fbe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11384fc1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11384fc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384fc7 pop esi */
  ESI = (pop32());
  /* 11384fc8 pop edi */
  EDI = (pop32());
  /* 11384fc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384fca ret  */
  ESPCHK(0x11384cb0u, _esp0);
  ESP += 4; return;
  /* 11384fcb nop  */
  /* nop */
L_11384fcc:;
  /* 11384fcc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11384fcf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11384fd2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11384fd5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11384fd8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11384fdb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11384fde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11384fe1 pop esi */
  ESI = (pop32());
  /* 11384fe2 pop edi */
  EDI = (pop32());
  /* 11384fe3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11384fe4 ret  */
  ESPCHK(0x11384cb0u, _esp0);
  ESP += 4; return;
L_11384f8d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11384f8d (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11384fe8 (32 bytes, 18 insns) */
void f_11384fe8(void) {
  FTRACE(0x11384fe8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11384fe8 push ebp */
  push32((uint32_t)(EBP));
  /* 11384fe9 mov ebp, esp */
  EBP = (ESP);
  /* 11384feb push ebx */
  push32((uint32_t)(EBX));
  /* 11384fec push esi */
  push32((uint32_t)(ESI));
  /* 11384fed push edi */
  push32((uint32_t)(EDI));
  /* 11384fee push ebp */
  push32((uint32_t)(EBP));
  /* 11384fef push 0 */
  push32((uint32_t)(0x0u));
  /* 11384ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11384ff3 push 0x11385000 */
  push32((uint32_t)(0x11385000u));
  /* 11384ff8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11384ffb call 0x113851f0 */
  push32(0x11385000u); f_113851f0();
  /* 11385000 pop ebp */
  EBP = (pop32());
  /* 11385001 pop edi */
  EDI = (pop32());
  /* 11385002 pop esi */
  ESI = (pop32());
  /* 11385003 pop ebx */
  EBX = (pop32());
  /* 11385004 mov esp, ebp */
  ESP = (EBP);
  /* 11385006 pop ebp */
  EBP = (pop32());
  /* 11385007 ret  */
  ESPCHK(0x11384fe8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1138502a (104 bytes, 33 insns) */
void f_1138502a(void) {
  FTRACE(0x1138502au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138502a push ebx */
  push32((uint32_t)(EBX));
  /* 1138502b push esi */
  push32((uint32_t)(ESI));
  /* 1138502c push edi */
  push32((uint32_t)(EDI));
  /* 1138502d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11385031 push eax */
  push32((uint32_t)(EAX));
  /* 11385032 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11385034 push 0x11385008 */
  push32((uint32_t)(0x11385008u));
  /* 11385039 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11385040 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11385047:;
  /* 11385047 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1138504b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1138504e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11385051 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11385054 je 0x11385084 */
  if (C.zf) goto L_11385084;
  /* 11385056 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138505a je 0x11385084 */
  if (C.zf) goto L_11385084;
  /* 1138505c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1138505f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11385062 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11385066 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11385069 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1138506e jne 0x11385082 */
  if (!C.zf) goto L_11385082;
  /* 11385070 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11385075 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11385079 call 0x113850be */
  push32(0x1138507eu); f_113850be();
  /* 1138507e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11385082u);
L_11385082:;
  /* 11385082 jmp 0x11385047 */
  goto L_11385047;
L_11385084:;
  /* 11385084 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1138508b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1138508e pop edi */
  EDI = (pop32());
  /* 1138508f pop esi */
  ESI = (pop32());
  /* 11385090 pop ebx */
  EBX = (pop32());
  /* 11385091 ret  */
  ESPCHK(0x1138502au, _esp0);
  ESP += 4; return;
}

/* FUN_100050be @ 0x113850be (24 bytes, 10 insns) */
void f_113850be(void) {
  FTRACE(0x113850beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113850be push ebx */
  push32((uint32_t)(EBX));
  /* 113850bf push ecx */
  push32((uint32_t)(ECX));
  /* 113850c0 mov ebx, 0x113875a0 */
  EBX = (0x113875a0u);
  /* 113850c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113850c8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 113850cb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 113850ce mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 113850d1 pop ecx */
  ECX = (pop32());
  /* 113850d2 pop ebx */
  EBX = (pop32());
  /* 113850d3 ret 4 */
  ESPCHK(0x113850beu, _esp0);
  ESP += 8; return;
}

/* FUN_1000519d @ 0x1138519d (27 bytes, 11 insns) */
void f_1138519d(void) {
  FTRACE(0x1138519du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1138519d push ebp */
  push32((uint32_t)(EBP));
  /* 1138519e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 113851a2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 113851a4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113851a7 push eax */
  push32((uint32_t)(EAX));
  /* 113851a8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 113851ab push eax */
  push32((uint32_t)(EAX));
  /* 113851ac call 0x1138502a */
  push32(0x113851b1u); f_1138502a();
  /* 113851b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113851b4 pop ebp */
  EBP = (pop32());
  /* 113851b5 ret 4 */
  ESPCHK(0x1138519du, _esp0);
  ESP += 8; return;
}

/* FUN_100051c0 @ 0x113851c0 (47 bytes, 17 insns) */
void f_113851c0(void) {
  FTRACE(0x113851c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113851c0 push ecx */
  push32((uint32_t)(ECX));
  /* 113851c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113851c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 113851ca jb 0x113851e0 */
  if (C.cf) goto L_113851e0;
L_113851cc:;
  /* 113851cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113851d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113851d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 113851d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113851de jae 0x113851cc */
  if (!C.cf) goto L_113851cc;
L_113851e0:;
  /* 113851e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113851e2 mov eax, esp */
  EAX = (ESP);
  /* 113851e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 113851e6 mov esp, ecx */
  ESP = (ECX);
  /* 113851e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113851ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 113851ed push eax */
  push32((uint32_t)(EAX));
  /* 113851ee ret  */
  ESPCHK(0x113851c0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x113851f0 (6 bytes, 1 insns) */
void f_113851f0(void) {
  FTRACE(0x113851f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113851f0 jmp dword ptr [0x11386008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11386008)))); return;
}

