#include "recomp.h"

/* FUN_10001000 @ 0x10301000 (20 bytes, 6 insns) */
void f_10301000(void) {
  FTRACE(0x10301000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10301000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10301004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10301005 jne 0x1030100c */
  if (!C.zf) goto L_1030100c;
  /* 10301007 call 0x10301020 */
  push32(0x1030100cu); f_10301020();
L_1030100c:;
  /* 1030100c mov eax, 1 */
  EAX = (0x1u);
  /* 10301011 ret 0xc */
  ESPCHK(0x10301000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10301020 (986 bytes, 276 insns) */
void f_10301020(void) {
  FTRACE(0x10301020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10301020 push esi */
  push32((uint32_t)(ESI));
  /* 10301021 mov esi, dword ptr [0x10305118] */
  ESI = (r32((uint32_t)(0x10305118)));
  /* 10301027 push 0x103061d8 */
  push32((uint32_t)(0x103061d8u));
  /* 1030102c push 0x10306610 */
  push32((uint32_t)(0x10306610u));
  /* 10301031 call esi */
  call_ind((uint32_t)(ESI), 0x10301033u);
  /* 10301033 push 0x103061d4 */
  push32((uint32_t)(0x103061d4u));
  /* 10301038 push 0x10306618 */
  push32((uint32_t)(0x10306618u));
  /* 1030103d call esi */
  call_ind((uint32_t)(ESI), 0x1030103fu);
  /* 1030103f push 0x103061d0 */
  push32((uint32_t)(0x103061d0u));
  /* 10301044 push 0x10306620 */
  push32((uint32_t)(0x10306620u));
  /* 10301049 call esi */
  call_ind((uint32_t)(ESI), 0x1030104bu);
  /* 1030104b push 0x103061cc */
  push32((uint32_t)(0x103061ccu));
  /* 10301050 push 0x10306628 */
  push32((uint32_t)(0x10306628u));
  /* 10301055 call esi */
  call_ind((uint32_t)(ESI), 0x10301057u);
  /* 10301057 push 0x103061c8 */
  push32((uint32_t)(0x103061c8u));
  /* 1030105c push 0x10306630 */
  push32((uint32_t)(0x10306630u));
  /* 10301061 call esi */
  call_ind((uint32_t)(ESI), 0x10301063u);
  /* 10301063 push 0x103061c4 */
  push32((uint32_t)(0x103061c4u));
  /* 10301068 push 0x10306638 */
  push32((uint32_t)(0x10306638u));
  /* 1030106d call esi */
  call_ind((uint32_t)(ESI), 0x1030106fu);
  /* 1030106f push 0x103061c0 */
  push32((uint32_t)(0x103061c0u));
  /* 10301074 push 0x10306640 */
  push32((uint32_t)(0x10306640u));
  /* 10301079 call esi */
  call_ind((uint32_t)(ESI), 0x1030107bu);
  /* 1030107b push 0x103061bc */
  push32((uint32_t)(0x103061bcu));
  /* 10301080 push 0x10306648 */
  push32((uint32_t)(0x10306648u));
  /* 10301085 call esi */
  call_ind((uint32_t)(ESI), 0x10301087u);
  /* 10301087 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030108a push 0x103061b8 */
  push32((uint32_t)(0x103061b8u));
  /* 1030108f push 0x10306650 */
  push32((uint32_t)(0x10306650u));
  /* 10301094 call esi */
  call_ind((uint32_t)(ESI), 0x10301096u);
  /* 10301096 push 0x103061b4 */
  push32((uint32_t)(0x103061b4u));
  /* 1030109b push 0x10306660 */
  push32((uint32_t)(0x10306660u));
  /* 103010a0 call esi */
  call_ind((uint32_t)(ESI), 0x103010a2u);
  /* 103010a2 push 0x103061b0 */
  push32((uint32_t)(0x103061b0u));
  /* 103010a7 push 0x10306668 */
  push32((uint32_t)(0x10306668u));
  /* 103010ac call esi */
  call_ind((uint32_t)(ESI), 0x103010aeu);
  /* 103010ae push 0x103061ac */
  push32((uint32_t)(0x103061acu));
  /* 103010b3 push 0x10306670 */
  push32((uint32_t)(0x10306670u));
  /* 103010b8 call esi */
  call_ind((uint32_t)(ESI), 0x103010bau);
  /* 103010ba push 0x103061a8 */
  push32((uint32_t)(0x103061a8u));
  /* 103010bf push 0x10306678 */
  push32((uint32_t)(0x10306678u));
  /* 103010c4 call esi */
  call_ind((uint32_t)(ESI), 0x103010c6u);
  /* 103010c6 push 0x103061a4 */
  push32((uint32_t)(0x103061a4u));
  /* 103010cb push 0x10306688 */
  push32((uint32_t)(0x10306688u));
  /* 103010d0 call esi */
  call_ind((uint32_t)(ESI), 0x103010d2u);
  /* 103010d2 push 0x103061a0 */
  push32((uint32_t)(0x103061a0u));
  /* 103010d7 push 0x10306698 */
  push32((uint32_t)(0x10306698u));
  /* 103010dc call esi */
  call_ind((uint32_t)(ESI), 0x103010deu);
  /* 103010de push 0x1030619c */
  push32((uint32_t)(0x1030619cu));
  /* 103010e3 push 0x103066a8 */
  push32((uint32_t)(0x103066a8u));
  /* 103010e8 call esi */
  call_ind((uint32_t)(ESI), 0x103010eau);
  /* 103010ea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103010ed push 0x10306198 */
  push32((uint32_t)(0x10306198u));
  /* 103010f2 push 0x103066b8 */
  push32((uint32_t)(0x103066b8u));
  /* 103010f7 call esi */
  call_ind((uint32_t)(ESI), 0x103010f9u);
  /* 103010f9 push 0x10306194 */
  push32((uint32_t)(0x10306194u));
  /* 103010fe push 0x103066c8 */
  push32((uint32_t)(0x103066c8u));
  /* 10301103 call esi */
  call_ind((uint32_t)(ESI), 0x10301105u);
  /* 10301105 push 0x10306190 */
  push32((uint32_t)(0x10306190u));
  /* 1030110a push 0x103066d8 */
  push32((uint32_t)(0x103066d8u));
  /* 1030110f call esi */
  call_ind((uint32_t)(ESI), 0x10301111u);
  /* 10301111 push 0x1030618c */
  push32((uint32_t)(0x1030618cu));
  /* 10301116 push 0x10306680 */
  push32((uint32_t)(0x10306680u));
  /* 1030111b call esi */
  call_ind((uint32_t)(ESI), 0x1030111du);
  /* 1030111d push 0x10306188 */
  push32((uint32_t)(0x10306188u));
  /* 10301122 push 0x10306690 */
  push32((uint32_t)(0x10306690u));
  /* 10301127 call esi */
  call_ind((uint32_t)(ESI), 0x10301129u);
  /* 10301129 push 0x10306184 */
  push32((uint32_t)(0x10306184u));
  /* 1030112e push 0x103066a0 */
  push32((uint32_t)(0x103066a0u));
  /* 10301133 call esi */
  call_ind((uint32_t)(ESI), 0x10301135u);
  /* 10301135 push 0x10306180 */
  push32((uint32_t)(0x10306180u));
  /* 1030113a push 0x103066b0 */
  push32((uint32_t)(0x103066b0u));
  /* 1030113f call esi */
  call_ind((uint32_t)(ESI), 0x10301141u);
  /* 10301141 push 0x1030617c */
  push32((uint32_t)(0x1030617cu));
  /* 10301146 push 0x103066c0 */
  push32((uint32_t)(0x103066c0u));
  /* 1030114b call esi */
  call_ind((uint32_t)(ESI), 0x1030114du);
  /* 1030114d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301150 push 0x10306178 */
  push32((uint32_t)(0x10306178u));
  /* 10301155 push 0x103066d0 */
  push32((uint32_t)(0x103066d0u));
  /* 1030115a call esi */
  call_ind((uint32_t)(ESI), 0x1030115cu);
  /* 1030115c push 0x10306174 */
  push32((uint32_t)(0x10306174u));
  /* 10301161 mov esi, dword ptr [0x10305128] */
  ESI = (r32((uint32_t)(0x10305128)));
  /* 10301167 push 0x103066e0 */
  push32((uint32_t)(0x103066e0u));
  /* 1030116c call esi */
  call_ind((uint32_t)(ESI), 0x1030116eu);
  /* 1030116e push 0x10306170 */
  push32((uint32_t)(0x10306170u));
  /* 10301173 push 0x103066e8 */
  push32((uint32_t)(0x103066e8u));
  /* 10301178 call esi */
  call_ind((uint32_t)(ESI), 0x1030117au);
  /* 1030117a push 0x1030616c */
  push32((uint32_t)(0x1030616cu));
  /* 1030117f push 0x103066f0 */
  push32((uint32_t)(0x103066f0u));
  /* 10301184 call esi */
  call_ind((uint32_t)(ESI), 0x10301186u);
  /* 10301186 push 0x10306168 */
  push32((uint32_t)(0x10306168u));
  /* 1030118b push 0x103066f8 */
  push32((uint32_t)(0x103066f8u));
  /* 10301190 call esi */
  call_ind((uint32_t)(ESI), 0x10301192u);
  /* 10301192 push 0x10306164 */
  push32((uint32_t)(0x10306164u));
  /* 10301197 push 0x10306700 */
  push32((uint32_t)(0x10306700u));
  /* 1030119c call esi */
  call_ind((uint32_t)(ESI), 0x1030119eu);
  /* 1030119e push 0x10306160 */
  push32((uint32_t)(0x10306160u));
  /* 103011a3 push 0x10306708 */
  push32((uint32_t)(0x10306708u));
  /* 103011a8 call esi */
  call_ind((uint32_t)(ESI), 0x103011aau);
  /* 103011aa push 0x1030615c */
  push32((uint32_t)(0x1030615cu));
  /* 103011af push 0x10306710 */
  push32((uint32_t)(0x10306710u));
  /* 103011b4 call esi */
  call_ind((uint32_t)(ESI), 0x103011b6u);
  /* 103011b6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103011b9 push 0x10306158 */
  push32((uint32_t)(0x10306158u));
  /* 103011be push 0x10306718 */
  push32((uint32_t)(0x10306718u));
  /* 103011c3 call esi */
  call_ind((uint32_t)(ESI), 0x103011c5u);
  /* 103011c5 push 0x10306154 */
  push32((uint32_t)(0x10306154u));
  /* 103011ca push 0x10306720 */
  push32((uint32_t)(0x10306720u));
  /* 103011cf call esi */
  call_ind((uint32_t)(ESI), 0x103011d1u);
  /* 103011d1 push 0x10306150 */
  push32((uint32_t)(0x10306150u));
  /* 103011d6 push 0x10306728 */
  push32((uint32_t)(0x10306728u));
  /* 103011db call esi */
  call_ind((uint32_t)(ESI), 0x103011ddu);
  /* 103011dd push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 103011e2 call dword ptr [0x1030512c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030512c))), 0x103011e8u);
  /* 103011e8 push 0x10306148 */
  push32((uint32_t)(0x10306148u));
  /* 103011ed push 0x10306580 */
  push32((uint32_t)(0x10306580u));
  /* 103011f2 call dword ptr [0x10305124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305124))), 0x103011f8u);
  /* 103011f8 mov esi, dword ptr [0x10305134] */
  ESI = (r32((uint32_t)(0x10305134)));
  /* 103011fe push 0x10306134 */
  push32((uint32_t)(0x10306134u));
  /* 10301203 push 0x103065c0 */
  push32((uint32_t)(0x103065c0u));
  /* 10301208 call esi */
  call_ind((uint32_t)(ESI), 0x1030120au);
  /* 1030120a push 0x10306124 */
  push32((uint32_t)(0x10306124u));
  /* 1030120f push 0x103065d0 */
  push32((uint32_t)(0x103065d0u));
  /* 10301214 call esi */
  call_ind((uint32_t)(ESI), 0x10301216u);
  /* 10301216 push 0x10306118 */
  push32((uint32_t)(0x10306118u));
  /* 1030121b push 0x103065d8 */
  push32((uint32_t)(0x103065d8u));
  /* 10301220 call esi */
  call_ind((uint32_t)(ESI), 0x10301222u);
  /* 10301222 push 0x1030610c */
  push32((uint32_t)(0x1030610cu));
  /* 10301227 push 0x103065e0 */
  push32((uint32_t)(0x103065e0u));
  /* 1030122c call esi */
  call_ind((uint32_t)(ESI), 0x1030122eu);
  /* 1030122e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301231 push 0x10306100 */
  push32((uint32_t)(0x10306100u));
  /* 10301236 push 0x103065e8 */
  push32((uint32_t)(0x103065e8u));
  /* 1030123b call esi */
  call_ind((uint32_t)(ESI), 0x1030123du);
  /* 1030123d push 0x103060e8 */
  push32((uint32_t)(0x103060e8u));
  /* 10301242 push 0x103065f0 */
  push32((uint32_t)(0x103065f0u));
  /* 10301247 call esi */
  call_ind((uint32_t)(ESI), 0x10301249u);
  /* 10301249 push 0x103060d4 */
  push32((uint32_t)(0x103060d4u));
  /* 1030124e push 0x103065f8 */
  push32((uint32_t)(0x103065f8u));
  /* 10301253 call esi */
  call_ind((uint32_t)(ESI), 0x10301255u);
  /* 10301255 push 0x103060c4 */
  push32((uint32_t)(0x103060c4u));
  /* 1030125a push 0x10306600 */
  push32((uint32_t)(0x10306600u));
  /* 1030125f call esi */
  call_ind((uint32_t)(ESI), 0x10301261u);
  /* 10301261 push 0x103060b4 */
  push32((uint32_t)(0x103060b4u));
  /* 10301266 push 0x10306608 */
  push32((uint32_t)(0x10306608u));
  /* 1030126b call esi */
  call_ind((uint32_t)(ESI), 0x1030126du);
  /* 1030126d push 0x103060a0 */
  push32((uint32_t)(0x103060a0u));
  /* 10301272 push 0x10306588 */
  push32((uint32_t)(0x10306588u));
  /* 10301277 call esi */
  call_ind((uint32_t)(ESI), 0x10301279u);
  /* 10301279 push 0x10306094 */
  push32((uint32_t)(0x10306094u));
  /* 1030127e push 0x10306590 */
  push32((uint32_t)(0x10306590u));
  /* 10301283 call esi */
  call_ind((uint32_t)(ESI), 0x10301285u);
  /* 10301285 push 0x10306080 */
  push32((uint32_t)(0x10306080u));
  /* 1030128a push 0x10306598 */
  push32((uint32_t)(0x10306598u));
  /* 1030128f call esi */
  call_ind((uint32_t)(ESI), 0x10301291u);
  /* 10301291 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301294 push 0x10306074 */
  push32((uint32_t)(0x10306074u));
  /* 10301299 push 0x103065a0 */
  push32((uint32_t)(0x103065a0u));
  /* 1030129e call esi */
  call_ind((uint32_t)(ESI), 0x103012a0u);
  /* 103012a0 push 0x10306064 */
  push32((uint32_t)(0x10306064u));
  /* 103012a5 push 0x103065a8 */
  push32((uint32_t)(0x103065a8u));
  /* 103012aa call esi */
  call_ind((uint32_t)(ESI), 0x103012acu);
  /* 103012ac push 0x10306058 */
  push32((uint32_t)(0x10306058u));
  /* 103012b1 push 0x103065b0 */
  push32((uint32_t)(0x103065b0u));
  /* 103012b6 call esi */
  call_ind((uint32_t)(ESI), 0x103012b8u);
  /* 103012b8 push 0x1030604c */
  push32((uint32_t)(0x1030604cu));
  /* 103012bd push 0x103065b8 */
  push32((uint32_t)(0x103065b8u));
  /* 103012c2 call esi */
  call_ind((uint32_t)(ESI), 0x103012c4u);
  /* 103012c4 push 0x10306040 */
  push32((uint32_t)(0x10306040u));
  /* 103012c9 push 0x103065c8 */
  push32((uint32_t)(0x103065c8u));
  /* 103012ce call esi */
  call_ind((uint32_t)(ESI), 0x103012d0u);
  /* 103012d0 mov esi, dword ptr [0x10305138] */
  ESI = (r32((uint32_t)(0x10305138)));
  /* 103012d6 push 0x10306038 */
  push32((uint32_t)(0x10306038u));
  /* 103012db push 5 */
  push32((uint32_t)(0x5u));
  /* 103012dd call esi */
  call_ind((uint32_t)(ESI), 0x103012dfu);
  /* 103012df push 0x10306030 */
  push32((uint32_t)(0x10306030u));
  /* 103012e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103012e6 call esi */
  call_ind((uint32_t)(ESI), 0x103012e8u);
  /* 103012e8 mov esi, dword ptr [0x10305130] */
  ESI = (r32((uint32_t)(0x10305130)));
  /* 103012ee push 1 */
  push32((uint32_t)(0x1u));
  /* 103012f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103012f2 call esi */
  call_ind((uint32_t)(ESI), 0x103012f4u);
  /* 103012f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103012f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103012f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 103012fb call esi */
  call_ind((uint32_t)(ESI), 0x103012fdu);
  /* 103012fd push 0x22 */
  push32((uint32_t)(0x22u));
  /* 103012ff push 5 */
  push32((uint32_t)(0x5u));
  /* 10301301 call esi */
  call_ind((uint32_t)(ESI), 0x10301303u);
  /* 10301303 mov esi, dword ptr [0x10305140] */
  ESI = (r32((uint32_t)(0x10305140)));
  /* 10301309 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030130b push 0x103065c0 */
  push32((uint32_t)(0x103065c0u));
  /* 10301310 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301312 call esi */
  call_ind((uint32_t)(ESI), 0x10301314u);
  /* 10301314 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301316 push 0x103065d0 */
  push32((uint32_t)(0x103065d0u));
  /* 1030131b push 0 */
  push32((uint32_t)(0x0u));
  /* 1030131d call esi */
  call_ind((uint32_t)(ESI), 0x1030131fu);
  /* 1030131f push 0 */
  push32((uint32_t)(0x0u));
  /* 10301321 push 0x103065d8 */
  push32((uint32_t)(0x103065d8u));
  /* 10301326 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301328 call esi */
  call_ind((uint32_t)(ESI), 0x1030132au);
  /* 1030132a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030132c call dword ptr [0x10305144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305144))), 0x10301332u);
  /* 10301332 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301335 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10301338 jge 0x10301348 */
  if ((C.sf==C.of)) goto L_10301348;
  /* 1030133a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030133c push 0x103065e0 */
  push32((uint32_t)(0x103065e0u));
  /* 10301341 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301343 call esi */
  call_ind((uint32_t)(ESI), 0x10301345u);
  /* 10301345 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10301348:;
  /* 10301348 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030134a push 0x103065e8 */
  push32((uint32_t)(0x103065e8u));
  /* 1030134f push 0 */
  push32((uint32_t)(0x0u));
  /* 10301351 call esi */
  call_ind((uint32_t)(ESI), 0x10301353u);
  /* 10301353 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301355 push 0x103065f0 */
  push32((uint32_t)(0x103065f0u));
  /* 1030135a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030135c call esi */
  call_ind((uint32_t)(ESI), 0x1030135eu);
  /* 1030135e push 0 */
  push32((uint32_t)(0x0u));
  /* 10301360 push 0x103065f8 */
  push32((uint32_t)(0x103065f8u));
  /* 10301365 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301367 call esi */
  call_ind((uint32_t)(ESI), 0x10301369u);
  /* 10301369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030136b push 0x10306600 */
  push32((uint32_t)(0x10306600u));
  /* 10301370 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301372 call esi */
  call_ind((uint32_t)(ESI), 0x10301374u);
  /* 10301374 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301376 push 0x10306608 */
  push32((uint32_t)(0x10306608u));
  /* 1030137b push 0 */
  push32((uint32_t)(0x0u));
  /* 1030137d call esi */
  call_ind((uint32_t)(ESI), 0x1030137fu);
  /* 1030137f push 0 */
  push32((uint32_t)(0x0u));
  /* 10301381 push 0x10306588 */
  push32((uint32_t)(0x10306588u));
  /* 10301386 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301388 call esi */
  call_ind((uint32_t)(ESI), 0x1030138au);
  /* 1030138a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030138d push 0 */
  push32((uint32_t)(0x0u));
  /* 1030138f push 0x10306590 */
  push32((uint32_t)(0x10306590u));
  /* 10301394 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301396 call esi */
  call_ind((uint32_t)(ESI), 0x10301398u);
  /* 10301398 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030139a push 0x10306598 */
  push32((uint32_t)(0x10306598u));
  /* 1030139f push 0 */
  push32((uint32_t)(0x0u));
  /* 103013a1 call esi */
  call_ind((uint32_t)(ESI), 0x103013a3u);
  /* 103013a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103013a5 push 0x103065a0 */
  push32((uint32_t)(0x103065a0u));
  /* 103013aa push 0 */
  push32((uint32_t)(0x0u));
  /* 103013ac call esi */
  call_ind((uint32_t)(ESI), 0x103013aeu);
  /* 103013ae push 0 */
  push32((uint32_t)(0x0u));
  /* 103013b0 push 0x103065a8 */
  push32((uint32_t)(0x103065a8u));
  /* 103013b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103013b7 call esi */
  call_ind((uint32_t)(ESI), 0x103013b9u);
  /* 103013b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103013bb push 0x103065b0 */
  push32((uint32_t)(0x103065b0u));
  /* 103013c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103013c2 call esi */
  call_ind((uint32_t)(ESI), 0x103013c4u);
  /* 103013c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103013c6 push 0x103065b8 */
  push32((uint32_t)(0x103065b8u));
  /* 103013cb push 0 */
  push32((uint32_t)(0x0u));
  /* 103013cd call esi */
  call_ind((uint32_t)(ESI), 0x103013cfu);
  /* 103013cf add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103013d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103013d4 push 0x103065c8 */
  push32((uint32_t)(0x103065c8u));
  /* 103013d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103013db call esi */
  call_ind((uint32_t)(ESI), 0x103013ddu);
  /* 103013dd mov esi, dword ptr [0x1030513c] */
  ESI = (r32((uint32_t)(0x1030513c)));
  /* 103013e3 push 0x10306580 */
  push32((uint32_t)(0x10306580u));
  /* 103013e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103013ea call esi */
  call_ind((uint32_t)(ESI), 0x103013ecu);
  /* 103013ec push 0x10306580 */
  push32((uint32_t)(0x10306580u));
  /* 103013f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103013f3 call esi */
  call_ind((uint32_t)(ESI), 0x103013f5u);
  /* 103013f5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103013f8 pop esi */
  ESI = (pop32());
  /* 103013f9 ret  */
  ESPCHK(0x10301020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10301400 (3207 bytes, 1100 insns) */
void f_10301400(void) {
  FTRACE(0x10301400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10301400 push ecx */
  push32((uint32_t)(ECX));
  /* 10301401 push ebx */
  push32((uint32_t)(EBX));
  /* 10301402 push ebp */
  push32((uint32_t)(EBP));
  /* 10301403 push esi */
  push32((uint32_t)(ESI));
  /* 10301404 push edi */
  push32((uint32_t)(EDI));
  /* 10301405 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10301407 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x1030140du);
  /* 1030140d mov esi, dword ptr [0x103050c0] */
  ESI = (r32((uint32_t)(0x103050c0)));
  /* 10301413 mov edi, dword ptr [0x10305144] */
  EDI = (r32((uint32_t)(0x10305144)));
  /* 10301419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030141c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1030141e je 0x103015d1 */
  if (C.zf) goto L_103015d1;
  /* 10301424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301426 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10301428 call dword ptr [0x103050b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050b8))), 0x1030142eu);
  /* 1030142e push 1 */
  push32((uint32_t)(0x1u));
  /* 10301430 call edi */
  call_ind((uint32_t)(EDI), 0x10301432u);
  /* 10301432 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10301437 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10301439 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1030143c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1030143f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301442 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10301445 push eax */
  push32((uint32_t)(EAX));
  /* 10301446 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030144a call esi */
  call_ind((uint32_t)(ESI), 0x1030144cu);
  /* 1030144c push 1 */
  push32((uint32_t)(0x1u));
  /* 1030144e call edi */
  call_ind((uint32_t)(EDI), 0x10301450u);
  /* 10301450 mov ecx, 0xb */
  ECX = (0xbu);
  /* 10301455 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10301457 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1030145a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1030145d lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10301460 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10301463 push ecx */
  push32((uint32_t)(ECX));
  /* 10301464 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301466 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301468 call esi */
  call_ind((uint32_t)(ESI), 0x1030146au);
  /* 1030146a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030146c push 0 */
  push32((uint32_t)(0x0u));
  /* 1030146e push 0 */
  push32((uint32_t)(0x0u));
  /* 10301470 call esi */
  call_ind((uint32_t)(ESI), 0x10301472u);
  /* 10301472 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301474 push 2 */
  push32((uint32_t)(0x2u));
  /* 10301476 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301478 call esi */
  call_ind((uint32_t)(ESI), 0x1030147au);
  /* 1030147a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030147d push 1 */
  push32((uint32_t)(0x1u));
  /* 1030147f call edi */
  call_ind((uint32_t)(EDI), 0x10301481u);
  /* 10301481 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10301486 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10301488 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 1030148b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1030148e lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10301491 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 10301494 push edx */
  push32((uint32_t)(EDX));
  /* 10301495 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301497 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301499 call esi */
  call_ind((uint32_t)(ESI), 0x1030149bu);
  /* 1030149b push 1 */
  push32((uint32_t)(0x1u));
  /* 1030149d call edi */
  call_ind((uint32_t)(EDI), 0x1030149fu);
  /* 1030149f mov ecx, 0xc */
  ECX = (0xcu);
  /* 103014a4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103014a6 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 103014a9 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 103014ac lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103014af shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103014b2 push eax */
  push32((uint32_t)(EAX));
  /* 103014b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 103014b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103014b7 call esi */
  call_ind((uint32_t)(ESI), 0x103014b9u);
  /* 103014b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103014bb call edi */
  call_ind((uint32_t)(EDI), 0x103014bdu);
  /* 103014bd add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103014c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103014c2 jne 0x10301502 */
  if (!C.zf) goto L_10301502;
  /* 103014c4 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 103014c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 103014cb push eax */
  push32((uint32_t)(EAX));
  /* 103014cc call esi */
  call_ind((uint32_t)(ESI), 0x103014ceu);
  /* 103014ce push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 103014d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103014d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103014d7 call esi */
  call_ind((uint32_t)(ESI), 0x103014d9u);
  /* 103014d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103014db push 0 */
  push32((uint32_t)(0x0u));
  /* 103014dd push 0 */
  push32((uint32_t)(0x0u));
  /* 103014df call esi */
  call_ind((uint32_t)(ESI), 0x103014e1u);
  /* 103014e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103014e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103014e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103014e7 call esi */
  call_ind((uint32_t)(ESI), 0x103014e9u);
  /* 103014e9 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 103014ee push 5 */
  push32((uint32_t)(0x5u));
  /* 103014f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103014f2 call esi */
  call_ind((uint32_t)(ESI), 0x103014f4u);
  /* 103014f4 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 103014f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 103014fb push 0 */
  push32((uint32_t)(0x0u));
  /* 103014fd call esi */
  call_ind((uint32_t)(ESI), 0x103014ffu);
  /* 103014ff add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10301502:;
  /* 10301502 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10301507 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301509 push 1 */
  push32((uint32_t)(0x1u));
  /* 1030150b call esi */
  call_ind((uint32_t)(ESI), 0x1030150du);
  /* 1030150d push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10301512 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301514 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301516 call esi */
  call_ind((uint32_t)(ESI), 0x10301518u);
  /* 10301518 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 1030151d push 0 */
  push32((uint32_t)(0x0u));
  /* 1030151f push 1 */
  push32((uint32_t)(0x1u));
  /* 10301521 call esi */
  call_ind((uint32_t)(ESI), 0x10301523u);
  /* 10301523 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10301528 push 2 */
  push32((uint32_t)(0x2u));
  /* 1030152a push 1 */
  push32((uint32_t)(0x1u));
  /* 1030152c call esi */
  call_ind((uint32_t)(ESI), 0x1030152eu);
  /* 1030152e push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10301533 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301535 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301537 call esi */
  call_ind((uint32_t)(ESI), 0x10301539u);
  /* 10301539 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1030153e push 4 */
  push32((uint32_t)(0x4u));
  /* 10301540 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301542 call esi */
  call_ind((uint32_t)(ESI), 0x10301544u);
  /* 10301544 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301547 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 1030154c push 3 */
  push32((uint32_t)(0x3u));
  /* 1030154e push 5 */
  push32((uint32_t)(0x5u));
  /* 10301550 call esi */
  call_ind((uint32_t)(ESI), 0x10301552u);
  /* 10301552 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10301557 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301559 push 5 */
  push32((uint32_t)(0x5u));
  /* 1030155b call esi */
  call_ind((uint32_t)(ESI), 0x1030155du);
  /* 1030155d push 0 */
  push32((uint32_t)(0x0u));
  /* 1030155f push 0 */
  push32((uint32_t)(0x0u));
  /* 10301561 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301563 call esi */
  call_ind((uint32_t)(ESI), 0x10301565u);
  /* 10301565 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301567 push 2 */
  push32((uint32_t)(0x2u));
  /* 10301569 push 5 */
  push32((uint32_t)(0x5u));
  /* 1030156b call esi */
  call_ind((uint32_t)(ESI), 0x1030156du);
  /* 1030156d push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10301572 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301574 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301576 call esi */
  call_ind((uint32_t)(ESI), 0x10301578u);
  /* 10301578 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1030157d push 4 */
  push32((uint32_t)(0x4u));
  /* 1030157f push 5 */
  push32((uint32_t)(0x5u));
  /* 10301581 call esi */
  call_ind((uint32_t)(ESI), 0x10301583u);
  /* 10301583 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301586 push 0x10306250 */
  push32((uint32_t)(0x10306250u));
  /* 1030158b call dword ptr [0x103050c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c8))), 0x10301591u);
  /* 10301591 call 0x10302090 */
  push32(0x10301596u); f_10302090();
  /* 10301596 mov ecx, eax */
  ECX = (EAX);
  /* 10301598 mov eax, 0x88888889 */
  EAX = (0x88888889u);
  /* 1030159d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 1030159f add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103015a1 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 103015a4 mov ecx, edx */
  ECX = (EDX);
  /* 103015a6 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 103015a9 lea edx, [edx + ecx + 0xc8] */
  EDX = ((uint32_t)(EDX + ECX*1 + 0xc8));
  /* 103015b0 push edx */
  push32((uint32_t)(EDX));
  /* 103015b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103015b3 call dword ptr [0x103050cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050cc))), 0x103015b9u);
  /* 103015b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103015bb push 0x10306678 */
  push32((uint32_t)(0x10306678u));
  /* 103015c0 call dword ptr [0x103050c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c4))), 0x103015c6u);
  /* 103015c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103015c8 call dword ptr [0x103050d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050d4))), 0x103015ceu);
  /* 103015ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103015d1:;
  /* 103015d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 103015d3 call dword ptr [0x103050d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050d8))), 0x103015d9u);
  /* 103015d9 mov ebp, dword ptr [0x103050d0] */
  EBP = (r32((uint32_t)(0x103050d0)));
  /* 103015df mov ebx, dword ptr [0x103050e0] */
  EBX = (r32((uint32_t)(0x103050e0)));
  /* 103015e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103015e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103015ea je 0x103016ab */
  if (C.zf) goto L_103016ab;
  /* 103015f0 push 0x10306248 */
  push32((uint32_t)(0x10306248u));
  /* 103015f5 call dword ptr [0x103050c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c8))), 0x103015fbu);
  /* 103015fb push 0 */
  push32((uint32_t)(0x0u));
  /* 103015fd push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 10301602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301604 call ebp */
  call_ind((uint32_t)(EBP), 0x10301606u);
  /* 10301606 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301608 push 0x10306618 */
  push32((uint32_t)(0x10306618u));
  /* 1030160d push 0 */
  push32((uint32_t)(0x0u));
  /* 1030160f call ebx */
  call_ind((uint32_t)(EBX), 0x10301611u);
  /* 10301611 mov ebp, dword ptr [0x103050e4] */
  EBP = (r32((uint32_t)(0x103050e4)));
  /* 10301617 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301619 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030161b call ebp */
  call_ind((uint32_t)(EBP), 0x1030161du);
  /* 1030161d push 0 */
  push32((uint32_t)(0x0u));
  /* 1030161f push 0x10306620 */
  push32((uint32_t)(0x10306620u));
  /* 10301624 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301626 call ebx */
  call_ind((uint32_t)(EBX), 0x10301628u);
  /* 10301628 push 5 */
  push32((uint32_t)(0x5u));
  /* 1030162a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030162c call ebp */
  call_ind((uint32_t)(EBP), 0x1030162eu);
  /* 1030162e push 1 */
  push32((uint32_t)(0x1u));
  /* 10301630 call edi */
  call_ind((uint32_t)(EDI), 0x10301632u);
  /* 10301632 mov ebp, eax */
  EBP = (EAX);
  /* 10301634 add ebp, 7 */
  { uint32_t _a=(EBP),_b=(0x7u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301637 call 0x10302090 */
  push32(0x1030163cu); f_10302090();
  /* 1030163c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1030163d idiv ebp */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EBP); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1030163f add eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301642 push eax */
  push32((uint32_t)(EAX));
  /* 10301643 push 2 */
  push32((uint32_t)(0x2u));
  /* 10301645 call dword ptr [0x103050cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050cc))), 0x1030164bu);
  /* 1030164b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030164e push 1 */
  push32((uint32_t)(0x1u));
  /* 10301650 call edi */
  call_ind((uint32_t)(EDI), 0x10301652u);
  /* 10301652 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301655 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 10301658 shl ebp, 1 */
  EBP = (sh_shl((uint32_t)(EBP), (0x1u)&0x1f, 32));
  /* 1030165a call 0x10302090 */
  push32(0x1030165fu); f_10302090();
  /* 1030165f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10301660 idiv ebp */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EBP); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10301662 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301665 push eax */
  push32((uint32_t)(EAX));
  /* 10301666 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301668 call dword ptr [0x103050cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050cc))), 0x1030166eu);
  /* 1030166e mov ebp, dword ptr [0x103050c4] */
  EBP = (r32((uint32_t)(0x103050c4)));
  /* 10301674 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301676 push 0x10306688 */
  push32((uint32_t)(0x10306688u));
  /* 1030167b call ebp */
  call_ind((uint32_t)(EBP), 0x1030167du);
  /* 1030167d push 1 */
  push32((uint32_t)(0x1u));
  /* 1030167f push 0x10306698 */
  push32((uint32_t)(0x10306698u));
  /* 10301684 call ebp */
  call_ind((uint32_t)(EBP), 0x10301686u);
  /* 10301686 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301688 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030168a push 0x103066f8 */
  push32((uint32_t)(0x103066f8u));
  /* 1030168f push 1 */
  push32((uint32_t)(0x1u));
  /* 10301691 call dword ptr [0x103050dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050dc))), 0x10301697u);
  /* 10301697 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301699 push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 1030169e push 0 */
  push32((uint32_t)(0x0u));
  /* 103016a0 call ebx */
  call_ind((uint32_t)(EBX), 0x103016a2u);
  /* 103016a2 mov ebp, dword ptr [0x103050d0] */
  EBP = (r32((uint32_t)(0x103050d0)));
  /* 103016a8 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103016ab:;
  /* 103016ab push 2 */
  push32((uint32_t)(0x2u));
  /* 103016ad call dword ptr [0x103050d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050d8))), 0x103016b3u);
  /* 103016b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103016b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103016b8 je 0x1030172c */
  if (C.zf) goto L_1030172c;
  /* 103016ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103016bc push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 103016c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103016c3 call ebp */
  call_ind((uint32_t)(EBP), 0x103016c5u);
  /* 103016c5 push 0x10306240 */
  push32((uint32_t)(0x10306240u));
  /* 103016ca call dword ptr [0x103050c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c8))), 0x103016d0u);
  /* 103016d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103016d2 push 0x10306628 */
  push32((uint32_t)(0x10306628u));
  /* 103016d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103016d9 call ebx */
  call_ind((uint32_t)(EBX), 0x103016dbu);
  /* 103016db mov ebp, dword ptr [0x103050e4] */
  EBP = (r32((uint32_t)(0x103050e4)));
  /* 103016e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 103016e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103016e5 call ebp */
  call_ind((uint32_t)(EBP), 0x103016e7u);
  /* 103016e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103016e9 push 0x10306630 */
  push32((uint32_t)(0x10306630u));
  /* 103016ee push 0 */
  push32((uint32_t)(0x0u));
  /* 103016f0 call ebx */
  call_ind((uint32_t)(EBX), 0x103016f2u);
  /* 103016f2 push 5 */
  push32((uint32_t)(0x5u));
  /* 103016f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103016f6 call ebp */
  call_ind((uint32_t)(EBP), 0x103016f8u);
  /* 103016f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103016fa call edi */
  call_ind((uint32_t)(EDI), 0x103016fcu);
  /* 103016fc mov ebp, eax */
  EBP = (EAX);
  /* 103016fe add ebp, 5 */
  { uint32_t _a=(EBP),_b=(0x5u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301701 call 0x10302090 */
  push32(0x10301706u); f_10302090();
  /* 10301706 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10301707 idiv ebp */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EBP); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10301709 add eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030170c push eax */
  push32((uint32_t)(EAX));
  /* 1030170d push 3 */
  push32((uint32_t)(0x3u));
  /* 1030170f call dword ptr [0x103050cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050cc))), 0x10301715u);
  /* 10301715 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030171a push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 1030171f push 0 */
  push32((uint32_t)(0x0u));
  /* 10301721 call ebx */
  call_ind((uint32_t)(EBX), 0x10301723u);
  /* 10301723 mov ebp, dword ptr [0x103050d0] */
  EBP = (r32((uint32_t)(0x103050d0)));
  /* 10301729 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1030172c:;
  /* 1030172c push 3 */
  push32((uint32_t)(0x3u));
  /* 1030172e call dword ptr [0x103050d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050d8))), 0x10301734u);
  /* 10301734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301737 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301739 je 0x103017ae */
  if (C.zf) goto L_103017ae;
  /* 1030173b push 0 */
  push32((uint32_t)(0x0u));
  /* 1030173d push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 10301742 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301744 call ebp */
  call_ind((uint32_t)(EBP), 0x10301746u);
  /* 10301746 push 0x10306238 */
  push32((uint32_t)(0x10306238u));
  /* 1030174b call dword ptr [0x103050c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c8))), 0x10301751u);
  /* 10301751 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301753 push 0x10306638 */
  push32((uint32_t)(0x10306638u));
  /* 10301758 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030175a call ebx */
  call_ind((uint32_t)(EBX), 0x1030175cu);
  /* 1030175c mov ebp, dword ptr [0x103050e4] */
  EBP = (r32((uint32_t)(0x103050e4)));
  /* 10301762 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301764 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301766 call ebp */
  call_ind((uint32_t)(EBP), 0x10301768u);
  /* 10301768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030176a push 0x10306640 */
  push32((uint32_t)(0x10306640u));
  /* 1030176f push 0 */
  push32((uint32_t)(0x0u));
  /* 10301771 call ebx */
  call_ind((uint32_t)(EBX), 0x10301773u);
  /* 10301773 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301777 call ebp */
  call_ind((uint32_t)(EBP), 0x10301779u);
  /* 10301779 push 1 */
  push32((uint32_t)(0x1u));
  /* 1030177b call edi */
  call_ind((uint32_t)(EDI), 0x1030177du);
  /* 1030177d add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301780 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 10301783 call 0x10302090 */
  push32(0x10301788u); f_10302090();
  /* 10301788 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10301789 idiv ebp */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EBP); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1030178b add eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030178e push eax */
  push32((uint32_t)(EAX));
  /* 1030178f push 4 */
  push32((uint32_t)(0x4u));
  /* 10301791 call dword ptr [0x103050cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050cc))), 0x10301797u);
  /* 10301797 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030179a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030179c push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 103017a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103017a3 call ebx */
  call_ind((uint32_t)(EBX), 0x103017a5u);
  /* 103017a5 mov ebp, dword ptr [0x103050d0] */
  EBP = (r32((uint32_t)(0x103050d0)));
  /* 103017ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103017ae:;
  /* 103017ae push 4 */
  push32((uint32_t)(0x4u));
  /* 103017b0 call dword ptr [0x103050d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050d8))), 0x103017b6u);
  /* 103017b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103017b9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103017bb je 0x1030180b */
  if (C.zf) goto L_1030180b;
  /* 103017bd push 0 */
  push32((uint32_t)(0x0u));
  /* 103017bf push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 103017c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103017c6 call ebp */
  call_ind((uint32_t)(EBP), 0x103017c8u);
  /* 103017c8 push 0x10306230 */
  push32((uint32_t)(0x10306230u));
  /* 103017cd call dword ptr [0x103050c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c8))), 0x103017d3u);
  /* 103017d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103017d5 push 0x10306648 */
  push32((uint32_t)(0x10306648u));
  /* 103017da push 0 */
  push32((uint32_t)(0x0u));
  /* 103017dc call ebx */
  call_ind((uint32_t)(EBX), 0x103017deu);
  /* 103017de push 5 */
  push32((uint32_t)(0x5u));
  /* 103017e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103017e2 call dword ptr [0x103050e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050e4))), 0x103017e8u);
  /* 103017e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103017ea push 0x10306650 */
  push32((uint32_t)(0x10306650u));
  /* 103017ef push 0 */
  push32((uint32_t)(0x0u));
  /* 103017f1 call ebx */
  call_ind((uint32_t)(EBX), 0x103017f3u);
  /* 103017f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 103017f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103017f7 call dword ptr [0x103050e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050e4))), 0x103017fdu);
  /* 103017fd push 0 */
  push32((uint32_t)(0x0u));
  /* 103017ff push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 10301804 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301806 call ebx */
  call_ind((uint32_t)(EBX), 0x10301808u);
  /* 10301808 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1030180b:;
  /* 1030180b push 5 */
  push32((uint32_t)(0x5u));
  /* 1030180d call dword ptr [0x103050d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050d8))), 0x10301813u);
  /* 10301813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301816 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301818 je 0x10301866 */
  if (C.zf) goto L_10301866;
  /* 1030181a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030181c push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 10301821 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301823 call ebp */
  call_ind((uint32_t)(EBP), 0x10301825u);
  /* 10301825 push 0x10306228 */
  push32((uint32_t)(0x10306228u));
  /* 1030182a call dword ptr [0x103050c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c8))), 0x10301830u);
  /* 10301830 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301832 push 0x10306660 */
  push32((uint32_t)(0x10306660u));
  /* 10301837 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301839 call ebx */
  call_ind((uint32_t)(EBX), 0x1030183bu);
  /* 1030183b mov ebp, dword ptr [0x103050e4] */
  EBP = (r32((uint32_t)(0x103050e4)));
  /* 10301841 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301843 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301845 call ebp */
  call_ind((uint32_t)(EBP), 0x10301847u);
  /* 10301847 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301849 push 0x10306668 */
  push32((uint32_t)(0x10306668u));
  /* 1030184e push 0 */
  push32((uint32_t)(0x0u));
  /* 10301850 call ebx */
  call_ind((uint32_t)(EBX), 0x10301852u);
  /* 10301852 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301854 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301856 call ebp */
  call_ind((uint32_t)(EBP), 0x10301858u);
  /* 10301858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030185a push 0x10306658 */
  push32((uint32_t)(0x10306658u));
  /* 1030185f push 0 */
  push32((uint32_t)(0x0u));
  /* 10301861 call ebx */
  call_ind((uint32_t)(EBX), 0x10301863u);
  /* 10301863 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10301866:;
  /* 10301866 mov ebx, dword ptr [0x103050ec] */
  EBX = (r32((uint32_t)(0x103050ec)));
  /* 1030186c push 0x103066b8 */
  push32((uint32_t)(0x103066b8u));
  /* 10301871 call ebx */
  call_ind((uint32_t)(EBX), 0x10301873u);
  /* 10301873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301878 jle 0x103018a9 */
  if ((C.zf||C.sf!=C.of)) goto L_103018a9;
  /* 1030187a push 0x10306688 */
  push32((uint32_t)(0x10306688u));
  /* 1030187f call ebx */
  call_ind((uint32_t)(EBX), 0x10301881u);
  /* 10301881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301886 jle 0x103018a9 */
  if ((C.zf||C.sf!=C.of)) goto L_103018a9;
  /* 10301888 mov ebp, dword ptr [0x103050c4] */
  EBP = (r32((uint32_t)(0x103050c4)));
  /* 1030188e push 0 */
  push32((uint32_t)(0x0u));
  /* 10301890 push 0x10306688 */
  push32((uint32_t)(0x10306688u));
  /* 10301895 call ebp */
  call_ind((uint32_t)(EBP), 0x10301897u);
  /* 10301897 push 0x103066b8 */
  push32((uint32_t)(0x103066b8u));
  /* 1030189c push 1 */
  push32((uint32_t)(0x1u));
  /* 1030189e call dword ptr [0x103050f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050f0))), 0x103018a4u);
  /* 103018a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103018a7 jmp 0x103018af */
  goto L_103018af;
L_103018a9:;
  /* 103018a9 mov ebp, dword ptr [0x103050c4] */
  EBP = (r32((uint32_t)(0x103050c4)));
L_103018af:;
  /* 103018af push 0x103066b8 */
  push32((uint32_t)(0x103066b8u));
  /* 103018b4 call ebx */
  call_ind((uint32_t)(EBX), 0x103018b6u);
  /* 103018b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103018b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103018bb jne 0x10301949 */
  if (!C.zf) goto L_10301949;
  /* 103018c1 push 0x10306698 */
  push32((uint32_t)(0x10306698u));
  /* 103018c6 call ebx */
  call_ind((uint32_t)(EBX), 0x103018c8u);
  /* 103018c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103018cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103018cd jle 0x10301949 */
  if ((C.zf||C.sf!=C.of)) goto L_10301949;
  /* 103018cf push 0 */
  push32((uint32_t)(0x0u));
  /* 103018d1 push 0x103066f8 */
  push32((uint32_t)(0x103066f8u));
  /* 103018d6 call dword ptr [0x103050e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050e8))), 0x103018dcu);
  /* 103018dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103018df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103018e1 jle 0x10301949 */
  if ((C.zf||C.sf!=C.of)) goto L_10301949;
  /* 103018e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103018e5 push 0x103066f8 */
  push32((uint32_t)(0x103066f8u));
  /* 103018ea push 0x10306698 */
  push32((uint32_t)(0x10306698u));
  /* 103018ef call dword ptr [0x103050f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050f8))), 0x103018f5u);
  /* 103018f5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103018f7 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x103018fdu);
  /* 103018fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301900 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301902 je 0x10301949 */
  if (C.zf) goto L_10301949;
  /* 10301904 mov ebx, dword ptr [0x103050b8] */
  EBX = (r32((uint32_t)(0x103050b8)));
  /* 1030190a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030190c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1030190e call ebx */
  call_ind((uint32_t)(EBX), 0x10301910u);
  /* 10301910 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301912 push 0x103066d0 */
  push32((uint32_t)(0x103066d0u));
  /* 10301917 call ebp */
  call_ind((uint32_t)(EBP), 0x10301919u);
  /* 10301919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030191b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1030191d push 0x103066f8 */
  push32((uint32_t)(0x103066f8u));
  /* 10301922 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301924 call dword ptr [0x103050dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050dc))), 0x1030192au);
  /* 1030192a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030192c push 0x10306688 */
  push32((uint32_t)(0x10306688u));
  /* 10301931 call ebp */
  call_ind((uint32_t)(EBP), 0x10301933u);
  /* 10301933 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301935 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10301937 push 0x103066f8 */
  push32((uint32_t)(0x103066f8u));
  /* 1030193c push 1 */
  push32((uint32_t)(0x1u));
  /* 1030193e call dword ptr [0x103050dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050dc))), 0x10301944u);
  /* 10301944 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301947 jmp 0x1030194f */
  goto L_1030194f;
L_10301949:;
  /* 10301949 mov ebx, dword ptr [0x103050b8] */
  EBX = (r32((uint32_t)(0x103050b8)));
L_1030194f:;
  /* 1030194f push 0xa */
  push32((uint32_t)(0xau));
  /* 10301951 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x10301957u);
  /* 10301957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030195a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1030195c je 0x10301994 */
  if (C.zf) goto L_10301994;
  /* 1030195e push 0 */
  push32((uint32_t)(0x0u));
  /* 10301960 push 0x103066f8 */
  push32((uint32_t)(0x103066f8u));
  /* 10301965 call dword ptr [0x103050e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050e8))), 0x1030196bu);
  /* 1030196b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030196e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301970 jne 0x10301994 */
  if (!C.zf) goto L_10301994;
  /* 10301972 push eax */
  push32((uint32_t)(EAX));
  /* 10301973 push 0xa */
  push32((uint32_t)(0xau));
  /* 10301975 call ebx */
  call_ind((uint32_t)(EBX), 0x10301977u);
  /* 10301977 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301979 push 0x10306698 */
  push32((uint32_t)(0x10306698u));
  /* 1030197e call ebp */
  call_ind((uint32_t)(EBP), 0x10301980u);
  /* 10301980 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301982 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10301984 push 0x103066f8 */
  push32((uint32_t)(0x103066f8u));
  /* 10301989 push 1 */
  push32((uint32_t)(0x1u));
  /* 1030198b call dword ptr [0x103050dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050dc))), 0x10301991u);
  /* 10301991 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10301994:;
  /* 10301994 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301996 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x1030199cu);
  /* 1030199c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030199f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103019a1 je 0x103019f3 */
  if (C.zf) goto L_103019f3;
  /* 103019a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103019a5 push 0x10306690 */
  push32((uint32_t)(0x10306690u));
  /* 103019aa call dword ptr [0x103050fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050fc))), 0x103019b0u);
  /* 103019b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103019b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103019b5 jne 0x103019f3 */
  if (!C.zf) goto L_103019f3;
  /* 103019b7 push eax */
  push32((uint32_t)(EAX));
  /* 103019b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103019ba call ebx */
  call_ind((uint32_t)(EBX), 0x103019bcu);
  /* 103019bc push 0 */
  push32((uint32_t)(0x0u));
  /* 103019be push 0x10306698 */
  push32((uint32_t)(0x10306698u));
  /* 103019c3 call ebp */
  call_ind((uint32_t)(EBP), 0x103019c5u);
  /* 103019c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103019c7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103019c9 push 0x10306708 */
  push32((uint32_t)(0x10306708u));
  /* 103019ce push 1 */
  push32((uint32_t)(0x1u));
  /* 103019d0 call dword ptr [0x103050dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050dc))), 0x103019d6u);
  /* 103019d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103019d8 push 0x103066a8 */
  push32((uint32_t)(0x103066a8u));
  /* 103019dd call ebp */
  call_ind((uint32_t)(EBP), 0x103019dfu);
  /* 103019df push 0 */
  push32((uint32_t)(0x0u));
  /* 103019e1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103019e3 push 0x10306700 */
  push32((uint32_t)(0x10306700u));
  /* 103019e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103019ea call dword ptr [0x103050dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050dc))), 0x103019f0u);
  /* 103019f0 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103019f3:;
  /* 103019f3 mov ebp, dword ptr [0x103050bc] */
  EBP = (r32((uint32_t)(0x103050bc)));
  /* 103019f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103019fb call ebp */
  call_ind((uint32_t)(EBP), 0x103019fdu);
  /* 103019fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301a00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301a02 je 0x10301b4e */
  if (C.zf) goto L_10301b4e;
  /* 10301a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301a0a push 0x10306708 */
  push32((uint32_t)(0x10306708u));
  /* 10301a0f call dword ptr [0x103050e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050e8))), 0x10301a15u);
  /* 10301a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301a1a jne 0x10301b4e */
  if (!C.zf) goto L_10301b4e;
  /* 10301a20 push 0x10306698 */
  push32((uint32_t)(0x10306698u));
  /* 10301a25 push 0x10306708 */
  push32((uint32_t)(0x10306708u));
  /* 10301a2a call dword ptr [0x103050f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050f4))), 0x10301a30u);
  /* 10301a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301a33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301a35 jle 0x10301b4e */
  if ((C.zf||C.sf!=C.of)) goto L_10301b4e;
  /* 10301a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10301a3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10301a3f call ebx */
  call_ind((uint32_t)(EBX), 0x10301a41u);
  /* 10301a41 push 0x10306220 */
  push32((uint32_t)(0x10306220u));
  /* 10301a46 call dword ptr [0x10305104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305104))), 0x10301a4cu);
  /* 10301a4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301a4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301a51 je 0x10301a6b */
  if (C.zf) goto L_10301a6b;
  /* 10301a53 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301a55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301a57 call dword ptr [0x10305130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305130))), 0x10301a5du);
  /* 10301a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10301a5f push 3 */
  push32((uint32_t)(0x3u));
  /* 10301a61 call ebx */
  call_ind((uint32_t)(EBX), 0x10301a63u);
  /* 10301a63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301a66 jmp 0x10301b4e */
  goto L_10301b4e;
L_10301a6b:;
  /* 10301a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10301a6d call edi */
  call_ind((uint32_t)(EDI), 0x10301a6fu);
  /* 10301a6f lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10301a72 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301a75 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301a78 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301a7b lea ecx, [eax*8 + 0x2710] */
  ECX = ((uint32_t)(EAX*8 + 0x2710));
  /* 10301a82 push ecx */
  push32((uint32_t)(ECX));
  /* 10301a83 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301a85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301a87 call esi */
  call_ind((uint32_t)(ESI), 0x10301a89u);
  /* 10301a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301a8b call edi */
  call_ind((uint32_t)(EDI), 0x10301a8du);
  /* 10301a8d lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10301a90 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301a93 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301a96 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10301a99 lea eax, [edx*8 + 0x2710] */
  EAX = ((uint32_t)(EDX*8 + 0x2710));
  /* 10301aa0 push eax */
  push32((uint32_t)(EAX));
  /* 10301aa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301aa5 call esi */
  call_ind((uint32_t)(ESI), 0x10301aa7u);
  /* 10301aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301aa9 call edi */
  call_ind((uint32_t)(EDI), 0x10301aabu);
  /* 10301aab lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10301aae lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ab1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ab4 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10301ab7 lea edx, [ecx*8 + 0x2710] */
  EDX = ((uint32_t)(ECX*8 + 0x2710));
  /* 10301abe push edx */
  push32((uint32_t)(EDX));
  /* 10301abf push 0 */
  push32((uint32_t)(0x0u));
  /* 10301ac1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ac3 call esi */
  call_ind((uint32_t)(ESI), 0x10301ac5u);
  /* 10301ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301ac7 call edi */
  call_ind((uint32_t)(EDI), 0x10301ac9u);
  /* 10301ac9 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10301acc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301acf lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ad2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ad5 lea ecx, [eax*8 + 0x2710] */
  ECX = ((uint32_t)(EAX*8 + 0x2710));
  /* 10301adc push ecx */
  push32((uint32_t)(ECX));
  /* 10301add push 2 */
  push32((uint32_t)(0x2u));
  /* 10301adf push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ae1 call esi */
  call_ind((uint32_t)(ESI), 0x10301ae3u);
  /* 10301ae3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301ae8 call edi */
  call_ind((uint32_t)(EDI), 0x10301aeau);
  /* 10301aea lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10301aed lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301af0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301af3 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10301af6 lea eax, [edx*8 + 0x2710] */
  EAX = ((uint32_t)(EDX*8 + 0x2710));
  /* 10301afd push eax */
  push32((uint32_t)(EAX));
  /* 10301afe push 5 */
  push32((uint32_t)(0x5u));
  /* 10301b00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301b02 call esi */
  call_ind((uint32_t)(ESI), 0x10301b04u);
  /* 10301b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301b06 call edi */
  call_ind((uint32_t)(EDI), 0x10301b08u);
  /* 10301b08 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 10301b0b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301b0e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301b11 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10301b14 lea edx, [ecx*8 + 0x2710] */
  EDX = ((uint32_t)(ECX*8 + 0x2710));
  /* 10301b1b push edx */
  push32((uint32_t)(EDX));
  /* 10301b1c push 4 */
  push32((uint32_t)(0x4u));
  /* 10301b1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10301b20 call esi */
  call_ind((uint32_t)(ESI), 0x10301b22u);
  /* 10301b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301b24 call edi */
  call_ind((uint32_t)(EDI), 0x10301b26u);
  /* 10301b26 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301b29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10301b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10301b2e jle 0x10301b35 */
  if ((C.zf||C.sf!=C.of)) goto L_10301b35;
  /* 10301b30 call edi */
  call_ind((uint32_t)(EDI), 0x10301b32u);
  /* 10301b32 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10301b33 jmp 0x10301b37 */
  goto L_10301b37;
L_10301b35:;
  /* 10301b35 call edi */
  call_ind((uint32_t)(EDI), 0x10301b37u);
L_10301b37:;
  /* 10301b37 push eax */
  push32((uint32_t)(EAX));
  /* 10301b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301b3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10301b3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10301b3e push 0x10306214 */
  push32((uint32_t)(0x10306214u));
  /* 10301b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301b45 call dword ptr [0x10305108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305108))), 0x10301b4bu);
  /* 10301b4b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10301b4e:;
  /* 10301b4e push 4 */
  push32((uint32_t)(0x4u));
  /* 10301b50 call ebp */
  call_ind((uint32_t)(EBP), 0x10301b52u);
  /* 10301b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301b55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301b57 je 0x10301bae */
  if (C.zf) goto L_10301bae;
  /* 10301b59 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301b5b call ebp */
  call_ind((uint32_t)(EBP), 0x10301b5du);
  /* 10301b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301b60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301b62 jne 0x10301bae */
  if (!C.zf) goto L_10301bae;
  /* 10301b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301b66 push 0x10306700 */
  push32((uint32_t)(0x10306700u));
  /* 10301b6b call dword ptr [0x103050e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050e8))), 0x10301b71u);
  /* 10301b71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301b76 jle 0x10301bae */
  if ((C.zf||C.sf!=C.of)) goto L_10301bae;
  /* 10301b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301b7a push 4 */
  push32((uint32_t)(0x4u));
  /* 10301b7c call ebx */
  call_ind((uint32_t)(EBX), 0x10301b7eu);
  /* 10301b7e mov ebp, dword ptr [0x103050c8] */
  EBP = (r32((uint32_t)(0x103050c8)));
  /* 10301b84 push 0x1030620c */
  push32((uint32_t)(0x1030620cu));
  /* 10301b89 call ebp */
  call_ind((uint32_t)(EBP), 0x10301b8bu);
  /* 10301b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10301b8d push 0x103066a8 */
  push32((uint32_t)(0x103066a8u));
  /* 10301b92 call dword ptr [0x103050c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c4))), 0x10301b98u);
  /* 10301b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301b9a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10301b9c push 0x10306708 */
  push32((uint32_t)(0x10306708u));
  /* 10301ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ba3 call dword ptr [0x10305100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305100))), 0x10301ba9u);
  /* 10301ba9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301bac jmp 0x10301bb4 */
  goto L_10301bb4;
L_10301bae:;
  /* 10301bae mov ebp, dword ptr [0x103050c8] */
  EBP = (r32((uint32_t)(0x103050c8)));
L_10301bb4:;
  /* 10301bb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301bb6 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x10301bbcu);
  /* 10301bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301bbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301bc1 je 0x10301cfa */
  if (C.zf) goto L_10301cfa;
  /* 10301bc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301bc9 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x10301bcfu);
  /* 10301bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301bd2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301bd4 jne 0x10301cfa */
  if (!C.zf) goto L_10301cfa;
  /* 10301bda push 0 */
  push32((uint32_t)(0x0u));
  /* 10301bdc push 0x10306708 */
  push32((uint32_t)(0x10306708u));
  /* 10301be1 call dword ptr [0x103050e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050e8))), 0x10301be7u);
  /* 10301be7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301bea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301bec jle 0x10301cfa */
  if ((C.zf||C.sf!=C.of)) goto L_10301cfa;
  /* 10301bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301bf4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301bf6 call ebx */
  call_ind((uint32_t)(EBX), 0x10301bf8u);
  /* 10301bf8 push 0x10306204 */
  push32((uint32_t)(0x10306204u));
  /* 10301bfd call ebp */
  call_ind((uint32_t)(EBP), 0x10301bffu);
  /* 10301bff push 2 */
  push32((uint32_t)(0x2u));
  /* 10301c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301c03 call dword ptr [0x10305130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305130))), 0x10301c09u);
  /* 10301c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301c0b call edi */
  call_ind((uint32_t)(EDI), 0x10301c0du);
  /* 10301c0d add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301c10 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c13 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c16 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c19 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c1c shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10301c1f push eax */
  push32((uint32_t)(EAX));
  /* 10301c20 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301c24 call esi */
  call_ind((uint32_t)(ESI), 0x10301c26u);
  /* 10301c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301c28 call edi */
  call_ind((uint32_t)(EDI), 0x10301c2au);
  /* 10301c2a add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301c2d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c30 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c33 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c36 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10301c39 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10301c3c push ecx */
  push32((uint32_t)(ECX));
  /* 10301c3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10301c3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10301c41 call esi */
  call_ind((uint32_t)(ESI), 0x10301c43u);
  /* 10301c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301c45 call edi */
  call_ind((uint32_t)(EDI), 0x10301c47u);
  /* 10301c47 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301c4a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c4d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c50 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c53 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10301c56 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10301c59 push edx */
  push32((uint32_t)(EDX));
  /* 10301c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10301c5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10301c5e call esi */
  call_ind((uint32_t)(ESI), 0x10301c60u);
  /* 10301c60 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301c65 call edi */
  call_ind((uint32_t)(EDI), 0x10301c67u);
  /* 10301c67 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301c6a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c6d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c70 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c73 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c76 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10301c79 push eax */
  push32((uint32_t)(EAX));
  /* 10301c7a push 2 */
  push32((uint32_t)(0x2u));
  /* 10301c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10301c7e call esi */
  call_ind((uint32_t)(ESI), 0x10301c80u);
  /* 10301c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301c82 call edi */
  call_ind((uint32_t)(EDI), 0x10301c84u);
  /* 10301c84 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301c87 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c8a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c8d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301c90 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10301c93 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10301c96 push ecx */
  push32((uint32_t)(ECX));
  /* 10301c97 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301c99 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301c9b call esi */
  call_ind((uint32_t)(ESI), 0x10301c9du);
  /* 10301c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10301c9f call edi */
  call_ind((uint32_t)(EDI), 0x10301ca1u);
  /* 10301ca1 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301ca4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ca7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301caa lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301cad lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10301cb0 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10301cb3 push edx */
  push32((uint32_t)(EDX));
  /* 10301cb4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10301cb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301cb8 call esi */
  call_ind((uint32_t)(ESI), 0x10301cbau);
  /* 10301cba push 0 */
  push32((uint32_t)(0x0u));
  /* 10301cbc call edi */
  call_ind((uint32_t)(EDI), 0x10301cbeu);
  /* 10301cbe add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301cc3 jle 0x10301ce2 */
  if ((C.zf||C.sf!=C.of)) goto L_10301ce2;
  /* 10301cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301cc7 call edi */
  call_ind((uint32_t)(EDI), 0x10301cc9u);
  /* 10301cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10301cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10301ccc push 1 */
  push32((uint32_t)(0x1u));
  /* 10301cce push 1 */
  push32((uint32_t)(0x1u));
  /* 10301cd0 push 0x10306214 */
  push32((uint32_t)(0x10306214u));
  /* 10301cd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301cd7 call dword ptr [0x10305108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305108))), 0x10301cddu);
  /* 10301cdd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301ce0 jmp 0x10301cfa */
  goto L_10301cfa;
L_10301ce2:;
  /* 10301ce2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301ce6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301cea push 0x10306214 */
  push32((uint32_t)(0x10306214u));
  /* 10301cef push 1 */
  push32((uint32_t)(0x1u));
  /* 10301cf1 call dword ptr [0x10305108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305108))), 0x10301cf7u);
  /* 10301cf7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10301cfa:;
  /* 10301cfa push 6 */
  push32((uint32_t)(0x6u));
  /* 10301cfc call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x10301d02u);
  /* 10301d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d05 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301d07 je 0x10301d30 */
  if (C.zf) goto L_10301d30;
  /* 10301d09 push 0x10306670 */
  push32((uint32_t)(0x10306670u));
  /* 10301d0e call dword ptr [0x103050ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050ec))), 0x10301d14u);
  /* 10301d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301d19 jne 0x10301d30 */
  if (!C.zf) goto L_10301d30;
  /* 10301d1b push eax */
  push32((uint32_t)(EAX));
  /* 10301d1c push 6 */
  push32((uint32_t)(0x6u));
  /* 10301d1e call ebx */
  call_ind((uint32_t)(EBX), 0x10301d20u);
  /* 10301d20 push 0x103061fc */
  push32((uint32_t)(0x103061fcu));
  /* 10301d25 call ebp */
  call_ind((uint32_t)(EBP), 0x10301d27u);
  /* 10301d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d2a call dword ptr [0x10305110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305110))), 0x10301d30u);
L_10301d30:;
  /* 10301d30 push 7 */
  push32((uint32_t)(0x7u));
  /* 10301d32 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x10301d38u);
  /* 10301d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301d3d je 0x10301d64 */
  if (C.zf) goto L_10301d64;
  /* 10301d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10301d41 call dword ptr [0x10305114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305114))), 0x10301d47u);
  /* 10301d47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d4a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301d4c je 0x10301d64 */
  if (C.zf) goto L_10301d64;
  /* 10301d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10301d50 push 7 */
  push32((uint32_t)(0x7u));
  /* 10301d52 call ebx */
  call_ind((uint32_t)(EBX), 0x10301d54u);
  /* 10301d54 push 0x103061f4 */
  push32((uint32_t)(0x103061f4u));
  /* 10301d59 call ebp */
  call_ind((uint32_t)(EBP), 0x10301d5bu);
  /* 10301d5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d5e call dword ptr [0x1030510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030510c))), 0x10301d64u);
L_10301d64:;
  /* 10301d64 push 8 */
  push32((uint32_t)(0x8u));
  /* 10301d66 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x10301d6cu);
  /* 10301d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301d71 je 0x10301dec */
  if (C.zf) goto L_10301dec;
  /* 10301d73 push 0x10306678 */
  push32((uint32_t)(0x10306678u));
  /* 10301d78 call dword ptr [0x103050ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050ec))), 0x10301d7eu);
  /* 10301d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301d83 jle 0x10301dec */
  if ((C.zf||C.sf!=C.of)) goto L_10301dec;
  /* 10301d85 mov ebp, dword ptr [0x103050e8] */
  EBP = (r32((uint32_t)(0x103050e8)));
  /* 10301d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10301d8d push 0x103066e0 */
  push32((uint32_t)(0x103066e0u));
  /* 10301d92 call ebp */
  call_ind((uint32_t)(EBP), 0x10301d94u);
  /* 10301d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301d97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301d99 jle 0x10301df2 */
  if ((C.zf||C.sf!=C.of)) goto L_10301df2;
  /* 10301d9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10301d9d push 0x103066e8 */
  push32((uint32_t)(0x103066e8u));
  /* 10301da2 call ebp */
  call_ind((uint32_t)(EBP), 0x10301da4u);
  /* 10301da4 mov edx, eax */
  EDX = (EAX);
  /* 10301da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301da8 push 0x103066f0 */
  push32((uint32_t)(0x103066f0u));
  /* 10301dad mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 10301db1 call ebp */
  call_ind((uint32_t)(EBP), 0x10301db3u);
  /* 10301db3 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 10301db7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301dba cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10301dbc jg 0x10301dce */
  if ((!C.zf&&C.sf==C.of)) goto L_10301dce;
  /* 10301dbe push 1 */
  push32((uint32_t)(0x1u));
  /* 10301dc0 push 0x103066e8 */
  push32((uint32_t)(0x103066e8u));
  /* 10301dc5 call ebp */
  call_ind((uint32_t)(EBP), 0x10301dc7u);
  /* 10301dc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301dcc jne 0x10301dec */
  if (!C.zf) goto L_10301dec;
L_10301dce:;
  /* 10301dce push 0 */
  push32((uint32_t)(0x0u));
  /* 10301dd0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10301dd2 call ebx */
  call_ind((uint32_t)(EBX), 0x10301dd4u);
  /* 10301dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301dd6 push 0x10306678 */
  push32((uint32_t)(0x10306678u));
  /* 10301ddb call dword ptr [0x103050c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c4))), 0x10301de1u);
  /* 10301de1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301de3 call dword ptr [0x1030511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030511c))), 0x10301de9u);
  /* 10301de9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10301dec:;
  /* 10301dec mov ebp, dword ptr [0x103050e8] */
  EBP = (r32((uint32_t)(0x103050e8)));
L_10301df2:;
  /* 10301df2 push 8 */
  push32((uint32_t)(0x8u));
  /* 10301df4 call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x10301dfau);
  /* 10301dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301dfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301dff jne 0x10301e64 */
  if (!C.zf) goto L_10301e64;
  /* 10301e01 push 0x10306678 */
  push32((uint32_t)(0x10306678u));
  /* 10301e06 call dword ptr [0x103050ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050ec))), 0x10301e0cu);
  /* 10301e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301e0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301e11 jle 0x10301e64 */
  if ((C.zf||C.sf!=C.of)) goto L_10301e64;
  /* 10301e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301e15 push 0x103066e0 */
  push32((uint32_t)(0x103066e0u));
  /* 10301e1a call ebp */
  call_ind((uint32_t)(EBP), 0x10301e1cu);
  /* 10301e1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301e1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301e21 je 0x10301e46 */
  if (C.zf) goto L_10301e46;
  /* 10301e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301e25 push 0x103066e8 */
  push32((uint32_t)(0x103066e8u));
  /* 10301e2a call ebp */
  call_ind((uint32_t)(EBP), 0x10301e2cu);
  /* 10301e2c mov edx, eax */
  EDX = (EAX);
  /* 10301e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10301e30 push 0x103066f0 */
  push32((uint32_t)(0x103066f0u));
  /* 10301e35 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 10301e39 call ebp */
  call_ind((uint32_t)(EBP), 0x10301e3bu);
  /* 10301e3b mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 10301e3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301e42 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10301e44 jle 0x10301e64 */
  if ((C.zf||C.sf!=C.of)) goto L_10301e64;
L_10301e46:;
  /* 10301e46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301e48 push 8 */
  push32((uint32_t)(0x8u));
  /* 10301e4a call ebx */
  call_ind((uint32_t)(EBX), 0x10301e4cu);
  /* 10301e4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10301e4e push 0x10306678 */
  push32((uint32_t)(0x10306678u));
  /* 10301e53 call dword ptr [0x103050c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c4))), 0x10301e59u);
  /* 10301e59 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301e5b call dword ptr [0x103050d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050d4))), 0x10301e61u);
  /* 10301e61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10301e64:;
  /* 10301e64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301e66 call edi */
  call_ind((uint32_t)(EDI), 0x10301e68u);
  /* 10301e68 mov ecx, 0xa */
  ECX = (0xau);
  /* 10301e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301e70 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10301e72 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10301e75 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301e78 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 10301e7b shl ebp, 5 */
  EBP = (sh_shl((uint32_t)(EBP), (0x5u)&0x1f, 32));
  /* 10301e7e call dword ptr [0x10305120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305120))), 0x10301e84u);
  /* 10301e84 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10301e86 jle 0x10301fb0 */
  if ((C.zf||C.sf!=C.of)) goto L_10301fb0;
  /* 10301e8c push 3 */
  push32((uint32_t)(0x3u));
  /* 10301e8e call dword ptr [0x103050bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050bc))), 0x10301e94u);
  /* 10301e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301e97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10301e99 jne 0x10301fb0 */
  if (!C.zf) goto L_10301fb0;
  /* 10301e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ea1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301ea3 call ebx */
  call_ind((uint32_t)(EBX), 0x10301ea5u);
  /* 10301ea5 mov ebx, dword ptr [0x103050c8] */
  EBX = (r32((uint32_t)(0x103050c8)));
  /* 10301eab push 0x103061ec */
  push32((uint32_t)(0x103061ecu));
  /* 10301eb0 call ebx */
  call_ind((uint32_t)(EBX), 0x10301eb2u);
  /* 10301eb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10301eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301eb6 call dword ptr [0x10305130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305130))), 0x10301ebcu);
  /* 10301ebc push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ebe call edi */
  call_ind((uint32_t)(EDI), 0x10301ec0u);
  /* 10301ec0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301ec3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ec6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ec9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ecc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ecf shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10301ed2 push eax */
  push32((uint32_t)(EAX));
  /* 10301ed3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10301ed5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ed7 call esi */
  call_ind((uint32_t)(ESI), 0x10301ed9u);
  /* 10301ed9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301edb call edi */
  call_ind((uint32_t)(EDI), 0x10301eddu);
  /* 10301edd add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301ee0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ee3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ee6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301ee9 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10301eec shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10301eef push ecx */
  push32((uint32_t)(ECX));
  /* 10301ef0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ef4 call esi */
  call_ind((uint32_t)(ESI), 0x10301ef6u);
  /* 10301ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301ef8 call edi */
  call_ind((uint32_t)(EDI), 0x10301efau);
  /* 10301efa add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301efd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f00 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f03 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f06 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10301f09 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10301f0c push edx */
  push32((uint32_t)(EDX));
  /* 10301f0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10301f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f11 call esi */
  call_ind((uint32_t)(ESI), 0x10301f13u);
  /* 10301f13 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301f16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f18 call edi */
  call_ind((uint32_t)(EDI), 0x10301f1au);
  /* 10301f1a add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301f1d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f20 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f23 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f26 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f29 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10301f2c push eax */
  push32((uint32_t)(EAX));
  /* 10301f2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10301f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f31 call esi */
  call_ind((uint32_t)(ESI), 0x10301f33u);
  /* 10301f33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f35 call edi */
  call_ind((uint32_t)(EDI), 0x10301f37u);
  /* 10301f37 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301f3a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f3d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f40 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f43 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10301f46 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10301f49 push ecx */
  push32((uint32_t)(ECX));
  /* 10301f4a push 5 */
  push32((uint32_t)(0x5u));
  /* 10301f4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f4e call esi */
  call_ind((uint32_t)(ESI), 0x10301f50u);
  /* 10301f50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f52 call edi */
  call_ind((uint32_t)(EDI), 0x10301f54u);
  /* 10301f54 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10301f57 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f5a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f5d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10301f60 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10301f63 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10301f66 push edx */
  push32((uint32_t)(EDX));
  /* 10301f67 push 4 */
  push32((uint32_t)(0x4u));
  /* 10301f69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f6b call esi */
  call_ind((uint32_t)(ESI), 0x10301f6du);
  /* 10301f6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f6f call edi */
  call_ind((uint32_t)(EDI), 0x10301f71u);
  /* 10301f71 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301f74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10301f77 jne 0x10301f92 */
  if (!C.zf) goto L_10301f92;
  /* 10301f79 push eax */
  push32((uint32_t)(EAX));
  /* 10301f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10301f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f80 push 0x10306214 */
  push32((uint32_t)(0x10306214u));
  /* 10301f85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f87 call dword ptr [0x10305108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305108))), 0x10301f8du);
  /* 10301f8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301f90 jmp 0x10301fb6 */
  goto L_10301fb6;
L_10301f92:;
  /* 10301f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301f94 call edi */
  call_ind((uint32_t)(EDI), 0x10301f96u);
  /* 10301f96 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10301f97 push eax */
  push32((uint32_t)(EAX));
  /* 10301f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10301f9e push 0x10306214 */
  push32((uint32_t)(0x10306214u));
  /* 10301fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10301fa5 call dword ptr [0x10305108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305108))), 0x10301fabu);
  /* 10301fab add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301fae jmp 0x10301fb6 */
  goto L_10301fb6;
L_10301fb0:;
  /* 10301fb0 mov ebx, dword ptr [0x103050c8] */
  EBX = (r32((uint32_t)(0x103050c8)));
L_10301fb6:;
  /* 10301fb6 mov edi, dword ptr [0x103050fc] */
  EDI = (r32((uint32_t)(0x103050fc)));
  /* 10301fbc push 5 */
  push32((uint32_t)(0x5u));
  /* 10301fbe push 0x103066a0 */
  push32((uint32_t)(0x103066a0u));
  /* 10301fc3 call edi */
  call_ind((uint32_t)(EDI), 0x10301fc5u);
  /* 10301fc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301fc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301fca jle 0x1030202a */
  if ((C.zf||C.sf!=C.of)) goto L_1030202a;
  /* 10301fcc mov esi, dword ptr [0x103050e8] */
  ESI = (r32((uint32_t)(0x103050e8)));
  /* 10301fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301fd4 push 0x10306710 */
  push32((uint32_t)(0x10306710u));
  /* 10301fd9 call esi */
  call_ind((uint32_t)(ESI), 0x10301fdbu);
  /* 10301fdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301fde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301fe0 jle 0x10302030 */
  if ((C.zf||C.sf!=C.of)) goto L_10302030;
  /* 10301fe2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10301fe4 push 0x10306718 */
  push32((uint32_t)(0x10306718u));
  /* 10301fe9 call esi */
  call_ind((uint32_t)(ESI), 0x10301febu);
  /* 10301feb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10301fee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10301ff0 jne 0x10302030 */
  if (!C.zf) goto L_10302030;
  /* 10301ff2 push 0x103061e4 */
  push32((uint32_t)(0x103061e4u));
  /* 10301ff7 call ebx */
  call_ind((uint32_t)(EBX), 0x10301ff9u);
  /* 10301ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10301ffb push 0x103066a0 */
  push32((uint32_t)(0x103066a0u));
  /* 10302000 call dword ptr [0x103050c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c4))), 0x10302006u);
  /* 10302006 mov ebp, dword ptr [0x103050e4] */
  EBP = (r32((uint32_t)(0x103050e4)));
  /* 1030200c push 0 */
  push32((uint32_t)(0x0u));
  /* 1030200e push 5 */
  push32((uint32_t)(0x5u));
  /* 10302010 call ebp */
  call_ind((uint32_t)(EBP), 0x10302012u);
  /* 10302012 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302014 push 0x103066c0 */
  push32((uint32_t)(0x103066c0u));
  /* 10302019 call dword ptr [0x103050c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c4))), 0x1030201fu);
  /* 1030201f push 0 */
  push32((uint32_t)(0x0u));
  /* 10302021 push 5 */
  push32((uint32_t)(0x5u));
  /* 10302023 call ebp */
  call_ind((uint32_t)(EBP), 0x10302025u);
  /* 10302025 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302028 jmp 0x10302030 */
  goto L_10302030;
L_1030202a:;
  /* 1030202a mov esi, dword ptr [0x103050e8] */
  ESI = (r32((uint32_t)(0x103050e8)));
L_10302030:;
  /* 10302030 push 5 */
  push32((uint32_t)(0x5u));
  /* 10302032 push 0x103066b0 */
  push32((uint32_t)(0x103066b0u));
  /* 10302037 call edi */
  call_ind((uint32_t)(EDI), 0x10302039u);
  /* 10302039 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030203c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030203e jle 0x10302081 */
  if ((C.zf||C.sf!=C.of)) goto L_10302081;
  /* 10302040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302042 push 0x10306720 */
  push32((uint32_t)(0x10306720u));
  /* 10302047 call esi */
  call_ind((uint32_t)(ESI), 0x10302049u);
  /* 10302049 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030204c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030204e jle 0x10302081 */
  if ((C.zf||C.sf!=C.of)) goto L_10302081;
  /* 10302050 push 5 */
  push32((uint32_t)(0x5u));
  /* 10302052 push 0x10306728 */
  push32((uint32_t)(0x10306728u));
  /* 10302057 call esi */
  call_ind((uint32_t)(ESI), 0x10302059u);
  /* 10302059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030205c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030205e jne 0x10302081 */
  if (!C.zf) goto L_10302081;
  /* 10302060 push 0x103061dc */
  push32((uint32_t)(0x103061dcu));
  /* 10302065 call ebx */
  call_ind((uint32_t)(EBX), 0x10302067u);
  /* 10302067 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302069 push 0x103066b0 */
  push32((uint32_t)(0x103066b0u));
  /* 1030206e call dword ptr [0x103050c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050c4))), 0x10302074u);
  /* 10302074 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302076 push 5 */
  push32((uint32_t)(0x5u));
  /* 10302078 call dword ptr [0x103050e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050e4))), 0x1030207eu);
  /* 1030207e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10302081:;
  /* 10302081 pop edi */
  EDI = (pop32());
  /* 10302082 pop esi */
  ESI = (pop32());
  /* 10302083 pop ebp */
  EBP = (pop32());
  /* 10302084 pop ebx */
  EBX = (pop32());
  /* 10302085 pop ecx */
  ECX = (pop32());
  /* 10302086 ret  */
  ESPCHK(0x10301400u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x10302090 (34 bytes, 9 insns) */
void f_10302090(void) {
  FTRACE(0x10302090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302090 call 0x103022e0 */
  push32(0x10302095u); f_103022e0();
  /* 10302095 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10302098 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1030209e add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103020a4 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 103020a7 mov eax, ecx */
  EAX = (ECX);
  /* 103020a9 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103020ac and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 103020b1 ret  */
  ESPCHK(0x10302090u, _esp0);
  ESP += 4; return;
}

/* FUN_100020b2 @ 0x103020b2 (217 bytes, 57 insns) */
void f_103020b2(void) {
  FTRACE(0x103020b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103020b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103020b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103020b9 jne 0x10302147 */
  if (!C.zf) goto L_10302147;
  /* 103020bf call dword ptr [0x10305088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305088))), 0x103020c5u);
  /* 103020c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103020c7 mov dword ptr [0x1030674c], eax */
  w32((uint32_t)(0x1030674c), (EAX));
  /* 103020cc call 0x10302b4d */
  push32(0x103020d1u); f_10302b4d();
  /* 103020d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103020d3 pop ecx */
  ECX = (pop32());
  /* 103020d4 je 0x10302112 */
  if (C.zf) goto L_10302112;
  /* 103020d6 mov eax, dword ptr [0x1030674c] */
  EAX = (r32((uint32_t)(0x1030674c)));
  /* 103020db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103020dd mov cl, byte ptr [0x1030674d] */
  CL = (r8((uint32_t)(0x1030674d)));
  /* 103020e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103020e8 shr dword ptr [0x1030674c], 0x10 */
  w32((uint32_t)(0x1030674c), (sh_shr((uint32_t)(r32((uint32_t)(0x1030674c))), (0x10u)&0x1f, 32)));
  /* 103020ef mov dword ptr [0x10306754], eax */
  w32((uint32_t)(0x10306754), (EAX));
  /* 103020f4 mov dword ptr [0x10306758], ecx */
  w32((uint32_t)(0x10306758), (ECX));
  /* 103020fa shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103020fd add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103020ff mov dword ptr [0x10306750], eax */
  w32((uint32_t)(0x10306750), (EAX));
  /* 10302104 call 0x1030225b */
  push32(0x10302109u); f_1030225b();
  /* 10302109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030210b jne 0x10302116 */
  if (!C.zf) goto L_10302116;
  /* 1030210d call 0x10302b89 */
  push32(0x10302112u); f_10302b89();
L_10302112:;
  /* 10302112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10302114 jmp 0x10302188 */
  goto L_10302188;
L_10302116:;
  /* 10302116 call dword ptr [0x10305084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305084))), 0x1030211cu);
  /* 1030211c mov dword ptr [0x10306cb8], eax */
  w32((uint32_t)(0x10306cb8), (EAX));
  /* 10302121 call 0x10302a1b */
  push32(0x10302126u); f_10302a1b();
  /* 10302126 mov dword ptr [0x10306738], eax */
  w32((uint32_t)(0x10306738), (EAX));
  /* 1030212b call 0x10302505 */
  push32(0x10302130u); f_10302505();
  /* 10302130 call 0x103027ce */
  push32(0x10302135u); f_103027ce();
  /* 10302135 call 0x10302715 */
  push32(0x1030213au); f_10302715();
  /* 1030213a call 0x103023e7 */
  push32(0x1030213fu); f_103023e7();
  /* 1030213f inc dword ptr [0x10306734] */
  { uint32_t _r=(r32((uint32_t)(0x10306734)))+1; w32((uint32_t)(0x10306734), (_r)); fl_inc(_r,32); }
  /* 10302145 jmp 0x10302185 */
  goto L_10302185;
L_10302147:;
  /* 10302147 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10302149 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030214b jne 0x10302179 */
  if (!C.zf) goto L_10302179;
  /* 1030214d cmp dword ptr [0x10306734], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10306734))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302153 jle 0x10302112 */
  if ((C.zf||C.sf!=C.of)) goto L_10302112;
  /* 10302155 dec dword ptr [0x10306734] */
  { uint32_t _r=(r32((uint32_t)(0x10306734)))-1; w32((uint32_t)(0x10306734), (_r)); fl_dec(_r,32); }
  /* 1030215b cmp dword ptr [0x10306784], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10306784))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302161 jne 0x10302168 */
  if (!C.zf) goto L_10302168;
  /* 10302163 call 0x10302425 */
  push32(0x10302168u); f_10302425();
L_10302168:;
  /* 10302168 call 0x103026c1 */
  push32(0x1030216du); f_103026c1();
  /* 1030216d call 0x103022af */
  push32(0x10302172u); f_103022af();
  /* 10302172 call 0x10302b89 */
  push32(0x10302177u); f_10302b89();
  /* 10302177 jmp 0x10302185 */
  goto L_10302185;
L_10302179:;
  /* 10302179 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030217c jne 0x10302185 */
  if (!C.zf) goto L_10302185;
  /* 1030217e push ecx */
  push32((uint32_t)(ECX));
  /* 1030217f call 0x10302347 */
  push32(0x10302184u); f_10302347();
  /* 10302184 pop ecx */
  ECX = (pop32());
L_10302185:;
  /* 10302185 push 1 */
  push32((uint32_t)(0x1u));
  /* 10302187 pop eax */
  EAX = (pop32());
L_10302188:;
  /* 10302188 ret 0xc */
  ESPCHK(0x103020b2u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x1030218b (157 bytes, 73 insns) */
void f_1030218b(void) {
  FTRACE(0x1030218bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1030218b push ebp */
  push32((uint32_t)(EBP));
  /* 1030218c mov ebp, esp */
  EBP = (ESP);
  /* 1030218e push ebx */
  push32((uint32_t)(EBX));
  /* 1030218f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10302192 push esi */
  push32((uint32_t)(ESI));
  /* 10302193 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10302196 push edi */
  push32((uint32_t)(EDI));
  /* 10302197 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1030219a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1030219c jne 0x103021a7 */
  if (!C.zf) goto L_103021a7;
  /* 1030219e cmp dword ptr [0x10306734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10306734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103021a5 jmp 0x103021cd */
  goto L_103021cd;
L_103021a7:;
  /* 103021a7 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103021aa je 0x103021b1 */
  if (C.zf) goto L_103021b1;
  /* 103021ac cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103021af jne 0x103021d3 */
  if (!C.zf) goto L_103021d3;
L_103021b1:;
  /* 103021b1 mov eax, dword ptr [0x10306cbc] */
  EAX = (r32((uint32_t)(0x10306cbc)));
  /* 103021b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103021b8 je 0x103021c3 */
  if (C.zf) goto L_103021c3;
  /* 103021ba push edi */
  push32((uint32_t)(EDI));
  /* 103021bb push esi */
  push32((uint32_t)(ESI));
  /* 103021bc push ebx */
  push32((uint32_t)(EBX));
  /* 103021bd call eax */
  call_ind((uint32_t)(EAX), 0x103021bfu);
  /* 103021bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103021c1 je 0x103021cf */
  if (C.zf) goto L_103021cf;
L_103021c3:;
  /* 103021c3 push edi */
  push32((uint32_t)(EDI));
  /* 103021c4 push esi */
  push32((uint32_t)(ESI));
  /* 103021c5 push ebx */
  push32((uint32_t)(EBX));
  /* 103021c6 call 0x103020b2 */
  push32(0x103021cbu); f_103020b2();
  /* 103021cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_103021cd:;
  /* 103021cd jne 0x103021d3 */
  if (!C.zf) goto L_103021d3;
L_103021cf:;
  /* 103021cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103021d1 jmp 0x10302221 */
  goto L_10302221;
L_103021d3:;
  /* 103021d3 push edi */
  push32((uint32_t)(EDI));
  /* 103021d4 push esi */
  push32((uint32_t)(ESI));
  /* 103021d5 push ebx */
  push32((uint32_t)(EBX));
  /* 103021d6 call 0x10301000 */
  push32(0x103021dbu); f_10301000();
  /* 103021db cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103021de mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 103021e1 jne 0x103021ef */
  if (!C.zf) goto L_103021ef;
  /* 103021e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103021e5 jne 0x1030221e */
  if (!C.zf) goto L_1030221e;
  /* 103021e7 push edi */
  push32((uint32_t)(EDI));
  /* 103021e8 push eax */
  push32((uint32_t)(EAX));
  /* 103021e9 push ebx */
  push32((uint32_t)(EBX));
  /* 103021ea call 0x103020b2 */
  push32(0x103021efu); f_103020b2();
L_103021ef:;
  /* 103021ef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103021f1 je 0x103021f8 */
  if (C.zf) goto L_103021f8;
  /* 103021f3 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103021f6 jne 0x1030221e */
  if (!C.zf) goto L_1030221e;
L_103021f8:;
  /* 103021f8 push edi */
  push32((uint32_t)(EDI));
  /* 103021f9 push esi */
  push32((uint32_t)(ESI));
  /* 103021fa push ebx */
  push32((uint32_t)(EBX));
  /* 103021fb call 0x103020b2 */
  push32(0x10302200u); f_103020b2();
  /* 10302200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302202 jne 0x10302207 */
  if (!C.zf) goto L_10302207;
  /* 10302204 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10302207:;
  /* 10302207 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030220b je 0x1030221e */
  if (C.zf) goto L_1030221e;
  /* 1030220d mov eax, dword ptr [0x10306cbc] */
  EAX = (r32((uint32_t)(0x10306cbc)));
  /* 10302212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302214 je 0x1030221e */
  if (C.zf) goto L_1030221e;
  /* 10302216 push edi */
  push32((uint32_t)(EDI));
  /* 10302217 push esi */
  push32((uint32_t)(ESI));
  /* 10302218 push ebx */
  push32((uint32_t)(EBX));
  /* 10302219 call eax */
  call_ind((uint32_t)(EAX), 0x1030221bu);
  /* 1030221b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1030221e:;
  /* 1030221e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10302221:;
  /* 10302221 pop edi */
  EDI = (pop32());
  /* 10302222 pop esi */
  ESI = (pop32());
  /* 10302223 pop ebx */
  EBX = (pop32());
  /* 10302224 pop ebp */
  EBP = (pop32());
  /* 10302225 ret 0xc */
  ESPCHK(0x1030218bu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10302228 (48 bytes, 15 insns) */
void f_10302228(void) {
  FTRACE(0x10302228u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302228 mov eax, dword ptr [0x10306740] */
  EAX = (r32((uint32_t)(0x10306740)));
  /* 1030222d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302230 je 0x1030223f */
  if (C.zf) goto L_1030223f;
  /* 10302232 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302234 jne 0x10302244 */
  if (!C.zf) goto L_10302244;
  /* 10302236 cmp dword ptr [0x10306744], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10306744))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030223d jne 0x10302244 */
  if (!C.zf) goto L_10302244;
L_1030223f:;
  /* 1030223f call 0x10302bfe */
  push32(0x10302244u); f_10302bfe();
L_10302244:;
  /* 10302244 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10302248 call 0x10302c37 */
  push32(0x1030224du); f_10302c37();
  /* 1030224d push 0xff */
  push32((uint32_t)(0xffu));
  /* 10302252 call dword ptr [0x10306258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10306258))), 0x10302258u);
  /* 10302258 pop ecx */
  ECX = (pop32());
  /* 10302259 pop ecx */
  ECX = (pop32());
  /* 1030225a ret  */
  ESPCHK(0x10302228u, _esp0);
  ESP += 4; return;
}

/* FUN_1000225b @ 0x1030225b (84 bytes, 32 insns) */
void f_1030225b(void) {
  FTRACE(0x1030225bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1030225b push esi */
  push32((uint32_t)(ESI));
  /* 1030225c call 0x10302e17 */
  push32(0x10302261u); f_10302e17();
  /* 10302261 call dword ptr [0x10305094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305094))), 0x10302267u);
  /* 10302267 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030226a mov dword ptr [0x1030625c], eax */
  w32((uint32_t)(0x1030625c), (EAX));
  /* 1030226f je 0x103022ab */
  if (C.zf) goto L_103022ab;
  /* 10302271 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10302273 push 1 */
  push32((uint32_t)(0x1u));
  /* 10302275 call 0x10302d8a */
  push32(0x1030227au); f_10302d8a();
  /* 1030227a mov esi, eax */
  ESI = (EAX);
  /* 1030227c pop ecx */
  ECX = (pop32());
  /* 1030227d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1030227f pop ecx */
  ECX = (pop32());
  /* 10302280 je 0x103022ab */
  if (C.zf) goto L_103022ab;
  /* 10302282 push esi */
  push32((uint32_t)(ESI));
  /* 10302283 push dword ptr [0x1030625c] */
  push32((uint32_t)(r32((uint32_t)(0x1030625c))));
  /* 10302289 call dword ptr [0x10305090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305090))), 0x1030228fu);
  /* 1030228f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302291 je 0x103022ab */
  if (C.zf) goto L_103022ab;
  /* 10302293 push esi */
  push32((uint32_t)(ESI));
  /* 10302294 call 0x103022cd */
  push32(0x10302299u); f_103022cd();
  /* 10302299 pop ecx */
  ECX = (pop32());
  /* 1030229a call dword ptr [0x1030508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030508c))), 0x103022a0u);
  /* 103022a0 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 103022a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103022a6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 103022a8 pop eax */
  EAX = (pop32());
  /* 103022a9 pop esi */
  ESI = (pop32());
  /* 103022aa ret  */
  ESPCHK(0x1030225bu, _esp0);
  ESP += 4; return;
L_103022ab:;
  /* 103022ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103022ad pop esi */
  ESI = (pop32());
  /* 103022ae ret  */
  ESPCHK(0x1030225bu, _esp0);
  ESP += 4; return;
}

/* FUN_100022af @ 0x103022af (30 bytes, 8 insns) */
void f_103022af(void) {
  FTRACE(0x103022afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103022af call 0x10302e40 */
  push32(0x103022b4u); f_10302e40();
  /* 103022b4 mov eax, dword ptr [0x1030625c] */
  EAX = (r32((uint32_t)(0x1030625c)));
  /* 103022b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103022bc je 0x103022cc */
  if (C.zf) goto L_103022cc;
  /* 103022be push eax */
  push32((uint32_t)(EAX));
  /* 103022bf call dword ptr [0x10305098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305098))), 0x103022c5u);
  /* 103022c5 or dword ptr [0x1030625c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1030625c)))|(0xffffffffu); w32((uint32_t)(0x1030625c), (_r)); fl_logic(_r,32); }
L_103022cc:;
  /* 103022cc ret  */
  ESPCHK(0x103022afu, _esp0);
  ESP += 4; return;
}

/* FUN_100022cd @ 0x103022cd (19 bytes, 4 insns) */
void f_103022cd(void) {
  FTRACE(0x103022cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103022cd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 103022d1 mov dword ptr [eax + 0x50], 0x103063d8 */
  w32((uint32_t)(EAX + 0x50), (0x103063d8u));
  /* 103022d8 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 103022df ret  */
  ESPCHK(0x103022cdu, _esp0);
  ESP += 4; return;
}

/* FUN_100022e0 @ 0x103022e0 (103 bytes, 38 insns) */
void f_103022e0(void) {
  FTRACE(0x103022e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103022e0 push esi */
  push32((uint32_t)(ESI));
  /* 103022e1 push edi */
  push32((uint32_t)(EDI));
  /* 103022e2 call dword ptr [0x103050a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050a0))), 0x103022e8u);
  /* 103022e8 push dword ptr [0x1030625c] */
  push32((uint32_t)(r32((uint32_t)(0x1030625c))));
  /* 103022ee mov edi, eax */
  EDI = (EAX);
  /* 103022f0 call dword ptr [0x10305004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305004))), 0x103022f6u);
  /* 103022f6 mov esi, eax */
  ESI = (EAX);
  /* 103022f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103022fa jne 0x1030233b */
  if (!C.zf) goto L_1030233b;
  /* 103022fc push 0x74 */
  push32((uint32_t)(0x74u));
  /* 103022fe push 1 */
  push32((uint32_t)(0x1u));
  /* 10302300 call 0x10302d8a */
  push32(0x10302305u); f_10302d8a();
  /* 10302305 mov esi, eax */
  ESI = (EAX);
  /* 10302307 pop ecx */
  ECX = (pop32());
  /* 10302308 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1030230a pop ecx */
  ECX = (pop32());
  /* 1030230b je 0x10302333 */
  if (C.zf) goto L_10302333;
  /* 1030230d push esi */
  push32((uint32_t)(ESI));
  /* 1030230e push dword ptr [0x1030625c] */
  push32((uint32_t)(r32((uint32_t)(0x1030625c))));
  /* 10302314 call dword ptr [0x10305090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305090))), 0x1030231au);
  /* 1030231a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030231c je 0x10302333 */
  if (C.zf) goto L_10302333;
  /* 1030231e push esi */
  push32((uint32_t)(ESI));
  /* 1030231f call 0x103022cd */
  push32(0x10302324u); f_103022cd();
  /* 10302324 pop ecx */
  ECX = (pop32());
  /* 10302325 call dword ptr [0x1030508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030508c))), 0x1030232bu);
  /* 1030232b or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1030232f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10302331 jmp 0x1030233b */
  goto L_1030233b;
L_10302333:;
  /* 10302333 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10302335 call 0x10302228 */
  push32(0x1030233au); f_10302228();
  /* 1030233a pop ecx */
  ECX = (pop32());
L_1030233b:;
  /* 1030233b push edi */
  push32((uint32_t)(EDI));
  /* 1030233c call dword ptr [0x10305000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305000))), 0x10302342u);
  /* 10302342 mov eax, esi */
  EAX = (ESI);
  /* 10302344 pop edi */
  EDI = (pop32());
  /* 10302345 pop esi */
  ESI = (pop32());
  /* 10302346 ret  */
  ESPCHK(0x103022e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002347 @ 0x10302347 (160 bytes, 62 insns) */
void f_10302347(void) {
  FTRACE(0x10302347u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302347 mov eax, dword ptr [0x1030625c] */
  EAX = (r32((uint32_t)(0x1030625c)));
  /* 1030234c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030234f je 0x103023e6 */
  if (C.zf) goto L_103023e6;
  /* 10302355 push esi */
  push32((uint32_t)(ESI));
  /* 10302356 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1030235a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1030235c jne 0x1030236b */
  if (!C.zf) goto L_1030236b;
  /* 1030235e push eax */
  push32((uint32_t)(EAX));
  /* 1030235f call dword ptr [0x10305004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305004))), 0x10302365u);
  /* 10302365 mov esi, eax */
  ESI = (EAX);
  /* 10302367 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10302369 je 0x103023d7 */
  if (C.zf) goto L_103023d7;
L_1030236b:;
  /* 1030236b mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 1030236e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302370 je 0x10302379 */
  if (C.zf) goto L_10302379;
  /* 10302372 push eax */
  push32((uint32_t)(EAX));
  /* 10302373 call 0x10302f22 */
  push32(0x10302378u); f_10302f22();
  /* 10302378 pop ecx */
  ECX = (pop32());
L_10302379:;
  /* 10302379 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 1030237c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030237e je 0x10302387 */
  if (C.zf) goto L_10302387;
  /* 10302380 push eax */
  push32((uint32_t)(EAX));
  /* 10302381 call 0x10302f22 */
  push32(0x10302386u); f_10302f22();
  /* 10302386 pop ecx */
  ECX = (pop32());
L_10302387:;
  /* 10302387 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 1030238a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030238c je 0x10302395 */
  if (C.zf) goto L_10302395;
  /* 1030238e push eax */
  push32((uint32_t)(EAX));
  /* 1030238f call 0x10302f22 */
  push32(0x10302394u); f_10302f22();
  /* 10302394 pop ecx */
  ECX = (pop32());
L_10302395:;
  /* 10302395 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10302398 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030239a je 0x103023a3 */
  if (C.zf) goto L_103023a3;
  /* 1030239c push eax */
  push32((uint32_t)(EAX));
  /* 1030239d call 0x10302f22 */
  push32(0x103023a2u); f_10302f22();
  /* 103023a2 pop ecx */
  ECX = (pop32());
L_103023a3:;
  /* 103023a3 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 103023a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103023a8 je 0x103023b1 */
  if (C.zf) goto L_103023b1;
  /* 103023aa push eax */
  push32((uint32_t)(EAX));
  /* 103023ab call 0x10302f22 */
  push32(0x103023b0u); f_10302f22();
  /* 103023b0 pop ecx */
  ECX = (pop32());
L_103023b1:;
  /* 103023b1 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 103023b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103023b6 je 0x103023bf */
  if (C.zf) goto L_103023bf;
  /* 103023b8 push eax */
  push32((uint32_t)(EAX));
  /* 103023b9 call 0x10302f22 */
  push32(0x103023beu); f_10302f22();
  /* 103023be pop ecx */
  ECX = (pop32());
L_103023bf:;
  /* 103023bf mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 103023c2 cmp eax, 0x103063d8 */
  { uint32_t _a=(EAX),_b=(0x103063d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103023c7 je 0x103023d0 */
  if (C.zf) goto L_103023d0;
  /* 103023c9 push eax */
  push32((uint32_t)(EAX));
  /* 103023ca call 0x10302f22 */
  push32(0x103023cfu); f_10302f22();
  /* 103023cf pop ecx */
  ECX = (pop32());
L_103023d0:;
  /* 103023d0 push esi */
  push32((uint32_t)(ESI));
  /* 103023d1 call 0x10302f22 */
  push32(0x103023d6u); f_10302f22();
  /* 103023d6 pop ecx */
  ECX = (pop32());
L_103023d7:;
  /* 103023d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103023d9 push dword ptr [0x1030625c] */
  push32((uint32_t)(r32((uint32_t)(0x1030625c))));
  /* 103023df call dword ptr [0x10305090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305090))), 0x103023e5u);
  /* 103023e5 pop esi */
  ESI = (pop32());
L_103023e6:;
  /* 103023e6 ret  */
  ESPCHK(0x10302347u, _esp0);
  ESP += 4; return;
}

/* FUN_100023e7 @ 0x103023e7 (45 bytes, 12 insns) */
void f_103023e7(void) {
  FTRACE(0x103023e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103023e7 mov eax, dword ptr [0x10306cb4] */
  EAX = (r32((uint32_t)(0x10306cb4)));
  /* 103023ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103023ee je 0x103023f2 */
  if (C.zf) goto L_103023f2;
  /* 103023f0 call eax */
  call_ind((uint32_t)(EAX), 0x103023f2u);
L_103023f2:;
  /* 103023f2 push 0x10306010 */
  push32((uint32_t)(0x10306010u));
  /* 103023f7 push 0x10306008 */
  push32((uint32_t)(0x10306008u));
  /* 103023fc call 0x103024eb */
  push32(0x10302401u); f_103024eb();
  /* 10302401 push 0x10306004 */
  push32((uint32_t)(0x10306004u));
  /* 10302406 push 0x10306000 */
  push32((uint32_t)(0x10306000u));
  /* 1030240b call 0x103024eb */
  push32(0x10302410u); f_103024eb();
  /* 10302410 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302413 ret  */
  ESPCHK(0x103023e7u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10302414 (17 bytes, 6 insns) */
void f_10302414(void) {
  FTRACE(0x10302414u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302414 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302416 push 1 */
  push32((uint32_t)(0x1u));
  /* 10302418 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1030241c call 0x10302434 */
  push32(0x10302421u); f_10302434();
  /* 10302421 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302424 ret  */
  ESPCHK(0x10302414u, _esp0);
  ESP += 4; return;
}

/* FUN_10002425 @ 0x10302425 (15 bytes, 6 insns) */
void f_10302425(void) {
  FTRACE(0x10302425u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302425 push 1 */
  push32((uint32_t)(0x1u));
  /* 10302427 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302429 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030242b call 0x10302434 */
  push32(0x10302430u); f_10302434();
  /* 10302430 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302433 ret  */
  ESPCHK(0x10302425u, _esp0);
  ESP += 4; return;
}

/* FUN_10002434 @ 0x10302434 (163 bytes, 53 insns) */
void f_10302434(void) {
  FTRACE(0x10302434u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302434 push edi */
  push32((uint32_t)(EDI));
  /* 10302435 call 0x103024d9 */
  push32(0x1030243au); f_103024d9();
  /* 1030243a push 1 */
  push32((uint32_t)(0x1u));
  /* 1030243c pop edi */
  EDI = (pop32());
  /* 1030243d cmp dword ptr [0x10306788], edi */
  { uint32_t _a=(r32((uint32_t)(0x10306788))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302443 jne 0x10302456 */
  if (!C.zf) goto L_10302456;
  /* 10302445 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10302449 call dword ptr [0x103050ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050ac))), 0x1030244fu);
  /* 1030244f push eax */
  push32((uint32_t)(EAX));
  /* 10302450 call dword ptr [0x103050a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050a8))), 0x10302456u);
L_10302456:;
  /* 10302456 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030245b push ebx */
  push32((uint32_t)(EBX));
  /* 1030245c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10302460 mov dword ptr [0x10306784], edi */
  w32((uint32_t)(0x10306784), (EDI));
  /* 10302466 mov byte ptr [0x10306780], bl */
  w8((uint32_t)(0x10306780), (BL));
  /* 1030246c jne 0x103024aa */
  if (!C.zf) goto L_103024aa;
  /* 1030246e mov eax, dword ptr [0x10306cb0] */
  EAX = (r32((uint32_t)(0x10306cb0)));
  /* 10302473 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302475 je 0x10302499 */
  if (C.zf) goto L_10302499;
  /* 10302477 mov ecx, dword ptr [0x10306cac] */
  ECX = (r32((uint32_t)(0x10306cac)));
  /* 1030247d push esi */
  push32((uint32_t)(ESI));
  /* 1030247e lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10302481 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302483 jb 0x10302498 */
  if (C.cf) goto L_10302498;
L_10302485:;
  /* 10302485 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10302487 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302489 je 0x1030248d */
  if (C.zf) goto L_1030248d;
  /* 1030248b call eax */
  call_ind((uint32_t)(EAX), 0x1030248du);
L_1030248d:;
  /* 1030248d sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10302490 cmp esi, dword ptr [0x10306cb0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10306cb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302496 jae 0x10302485 */
  if (!C.cf) goto L_10302485;
L_10302498:;
  /* 10302498 pop esi */
  ESI = (pop32());
L_10302499:;
  /* 10302499 push 0x10306018 */
  push32((uint32_t)(0x10306018u));
  /* 1030249e push 0x10306014 */
  push32((uint32_t)(0x10306014u));
  /* 103024a3 call 0x103024eb */
  push32(0x103024a8u); f_103024eb();
  /* 103024a8 pop ecx */
  ECX = (pop32());
  /* 103024a9 pop ecx */
  ECX = (pop32());
L_103024aa:;
  /* 103024aa push 0x10306020 */
  push32((uint32_t)(0x10306020u));
  /* 103024af push 0x1030601c */
  push32((uint32_t)(0x1030601cu));
  /* 103024b4 call 0x103024eb */
  push32(0x103024b9u); f_103024eb();
  /* 103024b9 pop ecx */
  ECX = (pop32());
  /* 103024ba pop ecx */
  ECX = (pop32());
  /* 103024bb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 103024bd pop ebx */
  EBX = (pop32());
  /* 103024be je 0x103024c7 */
  if (C.zf) goto L_103024c7;
  /* 103024c0 call 0x103024e2 */
  push32(0x103024c5u); f_103024e2();
  /* 103024c5 pop edi */
  EDI = (pop32());
  /* 103024c6 ret  */
  ESPCHK(0x10302434u, _esp0);
  ESP += 4; return;
L_103024c7:;
  /* 103024c7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 103024cb mov dword ptr [0x10306788], edi */
  w32((uint32_t)(0x10306788), (EDI));
  /* 103024d1 call dword ptr [0x103050a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050a4))), 0x103024d7u);
  /* 103024d7 pop edi */
  EDI = (pop32());
  /* 103024d8 ret  */
  ESPCHK(0x10302434u, _esp0);
  ESP += 4; return;
}

/* FUN_100024d9 @ 0x103024d9 (9 bytes, 4 insns) */
void f_103024d9(void) {
  FTRACE(0x103024d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103024d9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103024db call 0x10302eac */
  push32(0x103024e0u); f_10302eac();
  /* 103024e0 pop ecx */
  ECX = (pop32());
  /* 103024e1 ret  */
  ESPCHK(0x103024d9u, _esp0);
  ESP += 4; return;
}

/* FUN_100024e2 @ 0x103024e2 (9 bytes, 4 insns) */
void f_103024e2(void) {
  FTRACE(0x103024e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103024e2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103024e4 call 0x10302f0d */
  push32(0x103024e9u); f_10302f0d();
  /* 103024e9 pop ecx */
  ECX = (pop32());
  /* 103024ea ret  */
  ESPCHK(0x103024e2u, _esp0);
  ESP += 4; return;
}

/* FUN_100024eb @ 0x103024eb (26 bytes, 12 insns) */
void f_103024eb(void) {
  FTRACE(0x103024ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103024eb push esi */
  push32((uint32_t)(ESI));
  /* 103024ec mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_103024f0:;
  /* 103024f0 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103024f4 jae 0x10302503 */
  if (!C.cf) goto L_10302503;
  /* 103024f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103024f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103024fa je 0x103024fe */
  if (C.zf) goto L_103024fe;
  /* 103024fc call eax */
  call_ind((uint32_t)(EAX), 0x103024feu);
L_103024fe:;
  /* 103024fe add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10302501 jmp 0x103024f0 */
  goto L_103024f0;
L_10302503:;
  /* 10302503 pop esi */
  ESI = (pop32());
  /* 10302504 ret  */
  ESPCHK(0x103024ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10002505 @ 0x10302505 (444 bytes, 150 insns) */
void f_10302505(void) {
  FTRACE(0x10302505u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302505 push ebp */
  push32((uint32_t)(EBP));
  /* 10302506 mov ebp, esp */
  EBP = (ESP);
  /* 10302508 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030250b push ebx */
  push32((uint32_t)(EBX));
  /* 1030250c push esi */
  push32((uint32_t)(ESI));
  /* 1030250d push edi */
  push32((uint32_t)(EDI));
  /* 1030250e push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10302513 call 0x10302f6a */
  push32(0x10302518u); f_10302f6a();
  /* 10302518 mov esi, eax */
  ESI = (EAX);
  /* 1030251a pop ecx */
  ECX = (pop32());
  /* 1030251b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1030251d jne 0x10302527 */
  if (!C.zf) goto L_10302527;
  /* 1030251f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10302521 call 0x10302228 */
  push32(0x10302526u); f_10302228();
  /* 10302526 pop ecx */
  ECX = (pop32());
L_10302527:;
  /* 10302527 mov dword ptr [0x10306ba0], esi */
  w32((uint32_t)(0x10306ba0), (ESI));
  /* 1030252d mov dword ptr [0x10306ca0], 0x20 */
  w32((uint32_t)(0x10306ca0), (0x20u));
  /* 10302537 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_1030253d:;
  /* 1030253d cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030253f jae 0x1030255f */
  if (!C.cf) goto L_1030255f;
  /* 10302541 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10302545 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10302548 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1030254c mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10302550 mov eax, dword ptr [0x10306ba0] */
  EAX = (r32((uint32_t)(0x10306ba0)));
  /* 10302555 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10302558 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030255d jmp 0x1030253d */
  goto L_1030253d;
L_1030255f:;
  /* 1030255f lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10302562 push eax */
  push32((uint32_t)(EAX));
  /* 10302563 call dword ptr [0x1030509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030509c))), 0x10302569u);
  /* 10302569 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1030256e je 0x10302645 */
  if (C.zf) goto L_10302645;
  /* 10302574 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10302577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302579 je 0x10302645 */
  if (C.zf) goto L_10302645;
  /* 1030257f mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10302581 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10302584 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10302587 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1030258a mov eax, 0x800 */
  EAX = (0x800u);
  /* 1030258f cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302591 jl 0x10302595 */
  if ((C.sf!=C.of)) goto L_10302595;
  /* 10302593 mov edi, eax */
  EDI = (EAX);
L_10302595:;
  /* 10302595 cmp dword ptr [0x10306ca0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10306ca0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030259b jge 0x103025f3 */
  if ((C.sf==C.of)) goto L_103025f3;
  /* 1030259d mov esi, 0x10306ba4 */
  ESI = (0x10306ba4u);
L_103025a2:;
  /* 103025a2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103025a7 call 0x10302f6a */
  push32(0x103025acu); f_10302f6a();
  /* 103025ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103025ae pop ecx */
  ECX = (pop32());
  /* 103025af je 0x103025ed */
  if (C.zf) goto L_103025ed;
  /* 103025b1 add dword ptr [0x10306ca0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10306ca0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10306ca0), (_r)); fl_add(_a,_b,_r,32); }
  /* 103025b8 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 103025ba lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_103025c0:;
  /* 103025c0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103025c2 jae 0x103025e0 */
  if (!C.cf) goto L_103025e0;
  /* 103025c4 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 103025c8 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 103025cb and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 103025cf mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 103025d3 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 103025d5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103025d8 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103025de jmp 0x103025c0 */
  goto L_103025c0;
L_103025e0:;
  /* 103025e0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103025e3 cmp dword ptr [0x10306ca0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10306ca0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103025e9 jl 0x103025a2 */
  if ((C.sf!=C.of)) goto L_103025a2;
  /* 103025eb jmp 0x103025f3 */
  goto L_103025f3;
L_103025ed:;
  /* 103025ed mov edi, dword ptr [0x10306ca0] */
  EDI = (r32((uint32_t)(0x10306ca0)));
L_103025f3:;
  /* 103025f3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103025f5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103025f7 jle 0x10302645 */
  if ((C.zf||C.sf!=C.of)) goto L_10302645;
L_103025f9:;
  /* 103025f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103025fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103025fe cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302601 je 0x1030263b */
  if (C.zf) goto L_1030263b;
  /* 10302603 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10302605 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10302607 je 0x1030263b */
  if (C.zf) goto L_1030263b;
  /* 10302609 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1030260b jne 0x10302618 */
  if (!C.zf) goto L_10302618;
  /* 1030260d push ecx */
  push32((uint32_t)(ECX));
  /* 1030260e call dword ptr [0x1030507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030507c))), 0x10302614u);
  /* 10302614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302616 je 0x1030263b */
  if (C.zf) goto L_1030263b;
L_10302618:;
  /* 10302618 mov ecx, esi */
  ECX = (ESI);
  /* 1030261a mov eax, esi */
  EAX = (ESI);
  /* 1030261c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1030261f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10302622 mov ecx, dword ptr [ecx*4 + 0x10306ba0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10306ba0)));
  /* 10302629 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1030262c lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1030262f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10302632 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10302634 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10302636 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10302638 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_1030263b:;
  /* 1030263b add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1030263f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10302640 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10302641 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302643 jl 0x103025f9 */
  if ((C.sf!=C.of)) goto L_103025f9;
L_10302645:;
  /* 10302645 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10302647:;
  /* 10302647 mov ecx, dword ptr [0x10306ba0] */
  ECX = (r32((uint32_t)(0x10306ba0)));
  /* 1030264d lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10302650 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302654 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10302657 jne 0x103026a6 */
  if (!C.zf) goto L_103026a6;
  /* 10302659 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1030265b mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 1030265f jne 0x10302666 */
  if (!C.zf) goto L_10302666;
  /* 10302661 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10302663 pop eax */
  EAX = (pop32());
  /* 10302664 jmp 0x10302670 */
  goto L_10302670;
L_10302666:;
  /* 10302666 mov eax, ebx */
  EAX = (EBX);
  /* 10302668 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10302669 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1030266b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030266d add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10302670:;
  /* 10302670 push eax */
  push32((uint32_t)(EAX));
  /* 10302671 call dword ptr [0x10305080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305080))), 0x10302677u);
  /* 10302677 mov edi, eax */
  EDI = (EAX);
  /* 10302679 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030267c je 0x10302695 */
  if (C.zf) goto L_10302695;
  /* 1030267e push edi */
  push32((uint32_t)(EDI));
  /* 1030267f call dword ptr [0x1030507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030507c))), 0x10302685u);
  /* 10302685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302687 je 0x10302695 */
  if (C.zf) goto L_10302695;
  /* 10302689 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1030268e mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10302690 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302693 jne 0x1030269b */
  if (!C.zf) goto L_1030269b;
L_10302695:;
  /* 10302695 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10302699 jmp 0x103026aa */
  goto L_103026aa;
L_1030269b:;
  /* 1030269b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030269e jne 0x103026aa */
  if (!C.zf) goto L_103026aa;
  /* 103026a0 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 103026a4 jmp 0x103026aa */
  goto L_103026aa;
L_103026a6:;
  /* 103026a6 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_103026aa:;
  /* 103026aa inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103026ab cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103026ae jl 0x10302647 */
  if ((C.sf!=C.of)) goto L_10302647;
  /* 103026b0 push dword ptr [0x10306ca0] */
  push32((uint32_t)(r32((uint32_t)(0x10306ca0))));
  /* 103026b6 call dword ptr [0x103050b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103050b0))), 0x103026bcu);
  /* 103026bc pop edi */
  EDI = (pop32());
  /* 103026bd pop esi */
  ESI = (pop32());
  /* 103026be pop ebx */
  EBX = (pop32());
  /* 103026bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103026c0 ret  */
  ESPCHK(0x10302505u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c1 @ 0x103026c1 (84 bytes, 33 insns) */
void f_103026c1(void) {
  FTRACE(0x103026c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103026c1 push ebx */
  push32((uint32_t)(EBX));
  /* 103026c2 push esi */
  push32((uint32_t)(ESI));
  /* 103026c3 push edi */
  push32((uint32_t)(EDI));
  /* 103026c4 mov esi, 0x10306ba0 */
  ESI = (0x10306ba0u);
L_103026c9:;
  /* 103026c9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103026cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103026cd je 0x10302706 */
  if (C.zf) goto L_10302706;
  /* 103026cf mov edi, eax */
  EDI = (EAX);
  /* 103026d1 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103026d6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103026d8 jae 0x103026fb */
  if (!C.cf) goto L_103026fb;
  /* 103026da lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_103026dd:;
  /* 103026dd cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103026e1 je 0x103026ea */
  if (C.zf) goto L_103026ea;
  /* 103026e3 push ebx */
  push32((uint32_t)(EBX));
  /* 103026e4 call dword ptr [0x10305074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305074))), 0x103026eau);
L_103026ea:;
  /* 103026ea mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103026ec add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103026ef add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103026f4 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 103026f7 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103026f9 jb 0x103026dd */
  if (C.cf) goto L_103026dd;
L_103026fb:;
  /* 103026fb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103026fd call 0x10302f22 */
  push32(0x10302702u); f_10302f22();
  /* 10302702 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10302705 pop ecx */
  ECX = (pop32());
L_10302706:;
  /* 10302706 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10302709 cmp esi, 0x10306ca0 */
  { uint32_t _a=(ESI),_b=(0x10306ca0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030270f jl 0x103026c9 */
  if ((C.sf!=C.of)) goto L_103026c9;
  /* 10302711 pop edi */
  EDI = (pop32());
  /* 10302712 pop esi */
  ESI = (pop32());
  /* 10302713 pop ebx */
  EBX = (pop32());
  /* 10302714 ret  */
  ESPCHK(0x103026c1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002715 @ 0x10302715 (185 bytes, 71 insns) */
void f_10302715(void) {
  FTRACE(0x10302715u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302715 push ebx */
  push32((uint32_t)(EBX));
  /* 10302716 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10302718 cmp dword ptr [0x10306ca8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10306ca8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030271e push esi */
  push32((uint32_t)(ESI));
  /* 1030271f push edi */
  push32((uint32_t)(EDI));
  /* 10302720 jne 0x10302727 */
  if (!C.zf) goto L_10302727;
  /* 10302722 call 0x10303543 */
  push32(0x10302727u); f_10303543();
L_10302727:;
  /* 10302727 mov esi, dword ptr [0x10306738] */
  ESI = (r32((uint32_t)(0x10306738)));
  /* 1030272d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1030272f:;
  /* 1030272f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10302731 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302733 je 0x10302747 */
  if (C.zf) goto L_10302747;
  /* 10302735 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302737 je 0x1030273a */
  if (C.zf) goto L_1030273a;
  /* 10302739 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1030273a:;
  /* 1030273a push esi */
  push32((uint32_t)(ESI));
  /* 1030273b call 0x103030f0 */
  push32(0x10302740u); f_103030f0();
  /* 10302740 pop ecx */
  ECX = (pop32());
  /* 10302741 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10302745 jmp 0x1030272f */
  goto L_1030272f;
L_10302747:;
  /* 10302747 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 1030274e push eax */
  push32((uint32_t)(EAX));
  /* 1030274f call 0x10302f6a */
  push32(0x10302754u); f_10302f6a();
  /* 10302754 mov esi, eax */
  ESI = (EAX);
  /* 10302756 pop ecx */
  ECX = (pop32());
  /* 10302757 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302759 mov dword ptr [0x10306768], esi */
  w32((uint32_t)(0x10306768), (ESI));
  /* 1030275f jne 0x10302769 */
  if (!C.zf) goto L_10302769;
  /* 10302761 push 9 */
  push32((uint32_t)(0x9u));
  /* 10302763 call 0x10302228 */
  push32(0x10302768u); f_10302228();
  /* 10302768 pop ecx */
  ECX = (pop32());
L_10302769:;
  /* 10302769 mov edi, dword ptr [0x10306738] */
  EDI = (r32((uint32_t)(0x10306738)));
  /* 1030276f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302771 je 0x103027ac */
  if (C.zf) goto L_103027ac;
  /* 10302773 push ebp */
  push32((uint32_t)(EBP));
L_10302774:;
  /* 10302774 push edi */
  push32((uint32_t)(EDI));
  /* 10302775 call 0x103030f0 */
  push32(0x1030277au); f_103030f0();
  /* 1030277a mov ebp, eax */
  EBP = (EAX);
  /* 1030277c pop ecx */
  ECX = (pop32());
  /* 1030277d inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1030277e cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302781 je 0x103027a5 */
  if (C.zf) goto L_103027a5;
  /* 10302783 push ebp */
  push32((uint32_t)(EBP));
  /* 10302784 call 0x10302f6a */
  push32(0x10302789u); f_10302f6a();
  /* 10302789 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030278b pop ecx */
  ECX = (pop32());
  /* 1030278c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1030278e jne 0x10302798 */
  if (!C.zf) goto L_10302798;
  /* 10302790 push 9 */
  push32((uint32_t)(0x9u));
  /* 10302792 call 0x10302228 */
  push32(0x10302797u); f_10302228();
  /* 10302797 pop ecx */
  ECX = (pop32());
L_10302798:;
  /* 10302798 push edi */
  push32((uint32_t)(EDI));
  /* 10302799 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1030279b call 0x10303000 */
  push32(0x103027a0u); f_10303000();
  /* 103027a0 pop ecx */
  ECX = (pop32());
  /* 103027a1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103027a4 pop ecx */
  ECX = (pop32());
L_103027a5:;
  /* 103027a5 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103027a7 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103027a9 jne 0x10302774 */
  if (!C.zf) goto L_10302774;
  /* 103027ab pop ebp */
  EBP = (pop32());
L_103027ac:;
  /* 103027ac push dword ptr [0x10306738] */
  push32((uint32_t)(r32((uint32_t)(0x10306738))));
  /* 103027b2 call 0x10302f22 */
  push32(0x103027b7u); f_10302f22();
  /* 103027b7 pop ecx */
  ECX = (pop32());
  /* 103027b8 mov dword ptr [0x10306738], ebx */
  w32((uint32_t)(0x10306738), (EBX));
  /* 103027be mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 103027c0 pop edi */
  EDI = (pop32());
  /* 103027c1 pop esi */
  ESI = (pop32());
  /* 103027c2 mov dword ptr [0x10306ca4], 1 */
  w32((uint32_t)(0x10306ca4), (0x1u));
  /* 103027cc pop ebx */
  EBX = (pop32());
  /* 103027cd ret  */
  ESPCHK(0x10302715u, _esp0);
  ESP += 4; return;
}

/* FUN_100027ce @ 0x103027ce (153 bytes, 62 insns) */
void f_103027ce(void) {
  FTRACE(0x103027ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103027ce push ebp */
  push32((uint32_t)(EBP));
  /* 103027cf mov ebp, esp */
  EBP = (ESP);
  /* 103027d1 push ecx */
  push32((uint32_t)(ECX));
  /* 103027d2 push ecx */
  push32((uint32_t)(ECX));
  /* 103027d3 push ebx */
  push32((uint32_t)(EBX));
  /* 103027d4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103027d6 cmp dword ptr [0x10306ca8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10306ca8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103027dc push esi */
  push32((uint32_t)(ESI));
  /* 103027dd push edi */
  push32((uint32_t)(EDI));
  /* 103027de jne 0x103027e5 */
  if (!C.zf) goto L_103027e5;
  /* 103027e0 call 0x10303543 */
  push32(0x103027e5u); f_10303543();
L_103027e5:;
  /* 103027e5 mov esi, 0x1030678c */
  ESI = (0x1030678cu);
  /* 103027ea push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103027ef push esi */
  push32((uint32_t)(ESI));
  /* 103027f0 push ebx */
  push32((uint32_t)(EBX));
  /* 103027f1 call dword ptr [0x10305070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305070))), 0x103027f7u);
  /* 103027f7 mov eax, dword ptr [0x10306cb8] */
  EAX = (r32((uint32_t)(0x10306cb8)));
  /* 103027fc mov dword ptr [0x10306778], esi */
  w32((uint32_t)(0x10306778), (ESI));
  /* 10302802 mov edi, esi */
  EDI = (ESI);
  /* 10302804 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302806 je 0x1030280a */
  if (C.zf) goto L_1030280a;
  /* 10302808 mov edi, eax */
  EDI = (EAX);
L_1030280a:;
  /* 1030280a lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1030280d push eax */
  push32((uint32_t)(EAX));
  /* 1030280e lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10302811 push eax */
  push32((uint32_t)(EAX));
  /* 10302812 push ebx */
  push32((uint32_t)(EBX));
  /* 10302813 push ebx */
  push32((uint32_t)(EBX));
  /* 10302814 push edi */
  push32((uint32_t)(EDI));
  /* 10302815 call 0x10302867 */
  push32(0x1030281au); f_10302867();
  /* 1030281a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1030281d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10302820 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10302823 push eax */
  push32((uint32_t)(EAX));
  /* 10302824 call 0x10302f6a */
  push32(0x10302829u); f_10302f6a();
  /* 10302829 mov esi, eax */
  ESI = (EAX);
  /* 1030282b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1030282e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302830 jne 0x1030283a */
  if (!C.zf) goto L_1030283a;
  /* 10302832 push 8 */
  push32((uint32_t)(0x8u));
  /* 10302834 call 0x10302228 */
  push32(0x10302839u); f_10302228();
  /* 10302839 pop ecx */
  ECX = (pop32());
L_1030283a:;
  /* 1030283a lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1030283d push eax */
  push32((uint32_t)(EAX));
  /* 1030283e lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10302841 push eax */
  push32((uint32_t)(EAX));
  /* 10302842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10302845 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10302848 push eax */
  push32((uint32_t)(EAX));
  /* 10302849 push esi */
  push32((uint32_t)(ESI));
  /* 1030284a push edi */
  push32((uint32_t)(EDI));
  /* 1030284b call 0x10302867 */
  push32(0x10302850u); f_10302867();
  /* 10302850 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10302853 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302856 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10302857 mov dword ptr [0x10306760], esi */
  w32((uint32_t)(0x10306760), (ESI));
  /* 1030285d pop edi */
  EDI = (pop32());
  /* 1030285e pop esi */
  ESI = (pop32());
  /* 1030285f mov dword ptr [0x1030675c], eax */
  w32((uint32_t)(0x1030675c), (EAX));
  /* 10302864 pop ebx */
  EBX = (pop32());
  /* 10302865 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10302866 ret  */
  ESPCHK(0x103027ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10002867 @ 0x10302867 (436 bytes, 187 insns) */
void f_10302867(void) {
  FTRACE(0x10302867u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302867 push ebp */
  push32((uint32_t)(EBP));
  /* 10302868 mov ebp, esp */
  EBP = (ESP);
  /* 1030286a mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1030286d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10302870 push ebx */
  push32((uint32_t)(EBX));
  /* 10302871 push esi */
  push32((uint32_t)(ESI));
  /* 10302872 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10302875 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10302878 push edi */
  push32((uint32_t)(EDI));
  /* 10302879 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1030287c mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10302882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10302885 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10302887 je 0x10302891 */
  if (C.zf) goto L_10302891;
  /* 10302889 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1030288b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1030288e mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10302891:;
  /* 10302891 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302894 jne 0x103028da */
  if (!C.zf) goto L_103028da;
L_10302896:;
  /* 10302896 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10302899 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1030289a cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030289d je 0x103028c8 */
  if (C.zf) goto L_103028c8;
  /* 1030289f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103028a1 je 0x103028c8 */
  if (C.zf) goto L_103028c8;
  /* 103028a3 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 103028a6 test byte ptr [edx + 0x10306a81], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10306a81)))&(0x4u); fl_logic(_r,8); }
  /* 103028ad je 0x103028bb */
  if (C.zf) goto L_103028bb;
  /* 103028af inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103028b1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103028b3 je 0x103028bb */
  if (C.zf) goto L_103028bb;
  /* 103028b5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103028b7 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 103028b9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103028ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103028bb:;
  /* 103028bb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103028bd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103028bf je 0x10302896 */
  if (C.zf) goto L_10302896;
  /* 103028c1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103028c3 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 103028c5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103028c6 jmp 0x10302896 */
  goto L_10302896;
L_103028c8:;
  /* 103028c8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103028ca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103028cc je 0x103028d2 */
  if (C.zf) goto L_103028d2;
  /* 103028ce and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 103028d1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_103028d2:;
  /* 103028d2 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103028d5 jne 0x1030291d */
  if (!C.zf) goto L_1030291d;
  /* 103028d7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103028d8 jmp 0x1030291d */
  goto L_1030291d;
L_103028da:;
  /* 103028da inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103028dc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103028de je 0x103028e5 */
  if (C.zf) goto L_103028e5;
  /* 103028e0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103028e2 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 103028e4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_103028e5:;
  /* 103028e5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103028e7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103028e8 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 103028eb test byte ptr [ebx + 0x10306a81], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10306a81)))&(0x4u); fl_logic(_r,8); }
  /* 103028f2 je 0x10302900 */
  if (C.zf) goto L_10302900;
  /* 103028f4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103028f6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103028f8 je 0x103028ff */
  if (C.zf) goto L_103028ff;
  /* 103028fa mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 103028fc mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 103028fe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_103028ff:;
  /* 103028ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10302900:;
  /* 10302900 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302903 je 0x1030290e */
  if (C.zf) goto L_1030290e;
  /* 10302905 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10302907 je 0x10302912 */
  if (C.zf) goto L_10302912;
  /* 10302909 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030290c jne 0x103028da */
  if (!C.zf) goto L_103028da;
L_1030290e:;
  /* 1030290e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10302910 jne 0x10302915 */
  if (!C.zf) goto L_10302915;
L_10302912:;
  /* 10302912 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10302913 jmp 0x1030291d */
  goto L_1030291d;
L_10302915:;
  /* 10302915 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10302917 je 0x1030291d */
  if (C.zf) goto L_1030291d;
  /* 10302919 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_1030291d:;
  /* 1030291d and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10302921:;
  /* 10302921 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302924 je 0x10302a0a */
  if (C.zf) goto L_10302a0a;
L_1030292a:;
  /* 1030292a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1030292c cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030292f je 0x10302936 */
  if (C.zf) goto L_10302936;
  /* 10302931 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302934 jne 0x10302939 */
  if (!C.zf) goto L_10302939;
L_10302936:;
  /* 10302936 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302937 jmp 0x1030292a */
  goto L_1030292a;
L_10302939:;
  /* 10302939 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030293c je 0x10302a0a */
  if (C.zf) goto L_10302a0a;
  /* 10302942 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10302944 je 0x1030294e */
  if (C.zf) goto L_1030294e;
  /* 10302946 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10302948 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1030294b mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_1030294e:;
  /* 1030294e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10302951 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10302953:;
  /* 10302953 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 1030295a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1030295c:;
  /* 1030295c cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030295f jne 0x10302965 */
  if (!C.zf) goto L_10302965;
  /* 10302961 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302962 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10302963 jmp 0x1030295c */
  goto L_1030295c;
L_10302965:;
  /* 10302965 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302968 jne 0x10302996 */
  if (!C.zf) goto L_10302996;
  /* 1030296a test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1030296d jne 0x10302994 */
  if (!C.zf) goto L_10302994;
  /* 1030296f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10302971 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302974 je 0x10302983 */
  if (C.zf) goto L_10302983;
  /* 10302976 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030297a lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 1030297d jne 0x10302983 */
  if (!C.zf) goto L_10302983;
  /* 1030297f mov eax, edx */
  EAX = (EDX);
  /* 10302981 jmp 0x10302986 */
  goto L_10302986;
L_10302983:;
  /* 10302983 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10302986:;
  /* 10302986 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10302989 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1030298b cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030298e sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10302991 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10302994:;
  /* 10302994 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10302996:;
  /* 10302996 mov edx, ebx */
  EDX = (EBX);
  /* 10302998 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10302999 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1030299b je 0x103029ab */
  if (C.zf) goto L_103029ab;
  /* 1030299d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_1030299e:;
  /* 1030299e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103029a0 je 0x103029a6 */
  if (C.zf) goto L_103029a6;
  /* 103029a2 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 103029a5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_103029a6:;
  /* 103029a6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103029a8 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103029a9 jne 0x1030299e */
  if (!C.zf) goto L_1030299e;
L_103029ab:;
  /* 103029ab mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103029ad test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103029af je 0x103029fb */
  if (C.zf) goto L_103029fb;
  /* 103029b1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103029b5 jne 0x103029c1 */
  if (!C.zf) goto L_103029c1;
  /* 103029b7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103029ba je 0x103029fb */
  if (C.zf) goto L_103029fb;
  /* 103029bc cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103029bf je 0x103029fb */
  if (C.zf) goto L_103029fb;
L_103029c1:;
  /* 103029c1 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103029c5 je 0x103029f5 */
  if (C.zf) goto L_103029f5;
  /* 103029c7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103029c9 je 0x103029e4 */
  if (C.zf) goto L_103029e4;
  /* 103029cb movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 103029ce test byte ptr [ebx + 0x10306a81], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10306a81)))&(0x4u); fl_logic(_r,8); }
  /* 103029d5 je 0x103029dd */
  if (C.zf) goto L_103029dd;
  /* 103029d7 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 103029d9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103029da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103029db inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_103029dd:;
  /* 103029dd mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103029df mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 103029e1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103029e2 jmp 0x103029f3 */
  goto L_103029f3;
L_103029e4:;
  /* 103029e4 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 103029e7 test byte ptr [edx + 0x10306a81], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10306a81)))&(0x4u); fl_logic(_r,8); }
  /* 103029ee je 0x103029f3 */
  if (C.zf) goto L_103029f3;
  /* 103029f0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103029f1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_103029f3:;
  /* 103029f3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_103029f5:;
  /* 103029f5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103029f6 jmp 0x10302953 */
  goto L_10302953;
L_103029fb:;
  /* 103029fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103029fd je 0x10302a03 */
  if (C.zf) goto L_10302a03;
  /* 103029ff and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10302a02 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10302a03:;
  /* 10302a03 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10302a05 jmp 0x10302921 */
  goto L_10302921;
L_10302a0a:;
  /* 10302a0a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10302a0c je 0x10302a11 */
  if (C.zf) goto L_10302a11;
  /* 10302a0e and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10302a11:;
  /* 10302a11 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10302a14 pop edi */
  EDI = (pop32());
  /* 10302a15 pop esi */
  ESI = (pop32());
  /* 10302a16 pop ebx */
  EBX = (pop32());
  /* 10302a17 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10302a19 pop ebp */
  EBP = (pop32());
  /* 10302a1a ret  */
  ESPCHK(0x10302867u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a1b @ 0x10302a1b (306 bytes, 132 insns) */
void f_10302a1b(void) {
  FTRACE(0x10302a1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302a1b push ecx */
  push32((uint32_t)(ECX));
  /* 10302a1c push ecx */
  push32((uint32_t)(ECX));
  /* 10302a1d mov eax, dword ptr [0x10306890] */
  EAX = (r32((uint32_t)(0x10306890)));
  /* 10302a22 push ebx */
  push32((uint32_t)(EBX));
  /* 10302a23 push ebp */
  push32((uint32_t)(EBP));
  /* 10302a24 mov ebp, dword ptr [0x1030505c] */
  EBP = (r32((uint32_t)(0x1030505c)));
  /* 10302a2a push esi */
  push32((uint32_t)(ESI));
  /* 10302a2b push edi */
  push32((uint32_t)(EDI));
  /* 10302a2c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10302a2e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10302a30 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10302a32 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302a34 jne 0x10302a69 */
  if (!C.zf) goto L_10302a69;
  /* 10302a36 call ebp */
  call_ind((uint32_t)(EBP), 0x10302a38u);
  /* 10302a38 mov esi, eax */
  ESI = (EAX);
  /* 10302a3a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302a3c je 0x10302a4a */
  if (C.zf) goto L_10302a4a;
  /* 10302a3e mov dword ptr [0x10306890], 1 */
  w32((uint32_t)(0x10306890), (0x1u));
  /* 10302a48 jmp 0x10302a72 */
  goto L_10302a72;
L_10302a4a:;
  /* 10302a4a call dword ptr [0x1030506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030506c))), 0x10302a50u);
  /* 10302a50 mov edi, eax */
  EDI = (EAX);
  /* 10302a52 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302a54 je 0x10302b44 */
  if (C.zf) goto L_10302b44;
  /* 10302a5a mov dword ptr [0x10306890], 2 */
  w32((uint32_t)(0x10306890), (0x2u));
  /* 10302a64 jmp 0x10302af8 */
  goto L_10302af8;
L_10302a69:;
  /* 10302a69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302a6c jne 0x10302af3 */
  if (!C.zf) goto L_10302af3;
L_10302a72:;
  /* 10302a72 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302a74 jne 0x10302a82 */
  if (!C.zf) goto L_10302a82;
  /* 10302a76 call ebp */
  call_ind((uint32_t)(EBP), 0x10302a78u);
  /* 10302a78 mov esi, eax */
  ESI = (EAX);
  /* 10302a7a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302a7c je 0x10302b44 */
  if (C.zf) goto L_10302b44;
L_10302a82:;
  /* 10302a82 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10302a85 mov eax, esi */
  EAX = (ESI);
  /* 10302a87 je 0x10302a97 */
  if (C.zf) goto L_10302a97;
L_10302a89:;
  /* 10302a89 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302a8a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302a8b cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10302a8e jne 0x10302a89 */
  if (!C.zf) goto L_10302a89;
  /* 10302a90 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302a91 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302a92 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10302a95 jne 0x10302a89 */
  if (!C.zf) goto L_10302a89;
L_10302a97:;
  /* 10302a97 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10302a99 mov edi, dword ptr [0x10305064] */
  EDI = (r32((uint32_t)(0x10305064)));
  /* 10302a9f sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10302aa1 push ebx */
  push32((uint32_t)(EBX));
  /* 10302aa2 push ebx */
  push32((uint32_t)(EBX));
  /* 10302aa3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302aa4 push ebx */
  push32((uint32_t)(EBX));
  /* 10302aa5 push ebx */
  push32((uint32_t)(EBX));
  /* 10302aa6 push eax */
  push32((uint32_t)(EAX));
  /* 10302aa7 push esi */
  push32((uint32_t)(ESI));
  /* 10302aa8 push ebx */
  push32((uint32_t)(EBX));
  /* 10302aa9 push ebx */
  push32((uint32_t)(EBX));
  /* 10302aaa mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10302aae call edi */
  call_ind((uint32_t)(EDI), 0x10302ab0u);
  /* 10302ab0 mov ebp, eax */
  EBP = (EAX);
  /* 10302ab2 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302ab4 je 0x10302ae8 */
  if (C.zf) goto L_10302ae8;
  /* 10302ab6 push ebp */
  push32((uint32_t)(EBP));
  /* 10302ab7 call 0x10302f6a */
  push32(0x10302abcu); f_10302f6a();
  /* 10302abc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302abe pop ecx */
  ECX = (pop32());
  /* 10302abf mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10302ac3 je 0x10302ae8 */
  if (C.zf) goto L_10302ae8;
  /* 10302ac5 push ebx */
  push32((uint32_t)(EBX));
  /* 10302ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 10302ac7 push ebp */
  push32((uint32_t)(EBP));
  /* 10302ac8 push eax */
  push32((uint32_t)(EAX));
  /* 10302ac9 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10302acd push esi */
  push32((uint32_t)(ESI));
  /* 10302ace push ebx */
  push32((uint32_t)(EBX));
  /* 10302acf push ebx */
  push32((uint32_t)(EBX));
  /* 10302ad0 call edi */
  call_ind((uint32_t)(EDI), 0x10302ad2u);
  /* 10302ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302ad4 jne 0x10302ae4 */
  if (!C.zf) goto L_10302ae4;
  /* 10302ad6 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10302ada call 0x10302f22 */
  push32(0x10302adfu); f_10302f22();
  /* 10302adf pop ecx */
  ECX = (pop32());
  /* 10302ae0 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10302ae4:;
  /* 10302ae4 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10302ae8:;
  /* 10302ae8 push esi */
  push32((uint32_t)(ESI));
  /* 10302ae9 call dword ptr [0x10305068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305068))), 0x10302aefu);
  /* 10302aef mov eax, ebx */
  EAX = (EBX);
  /* 10302af1 jmp 0x10302b46 */
  goto L_10302b46;
L_10302af3:;
  /* 10302af3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302af6 jne 0x10302b44 */
  if (!C.zf) goto L_10302b44;
L_10302af8:;
  /* 10302af8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302afa jne 0x10302b08 */
  if (!C.zf) goto L_10302b08;
  /* 10302afc call dword ptr [0x1030506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030506c))), 0x10302b02u);
  /* 10302b02 mov edi, eax */
  EDI = (EAX);
  /* 10302b04 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302b06 je 0x10302b44 */
  if (C.zf) goto L_10302b44;
L_10302b08:;
  /* 10302b08 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302b0a mov eax, edi */
  EAX = (EDI);
  /* 10302b0c je 0x10302b18 */
  if (C.zf) goto L_10302b18;
L_10302b0e:;
  /* 10302b0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302b0f cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302b11 jne 0x10302b0e */
  if (!C.zf) goto L_10302b0e;
  /* 10302b13 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302b14 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10302b16 jne 0x10302b0e */
  if (!C.zf) goto L_10302b0e;
L_10302b18:;
  /* 10302b18 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10302b1a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302b1b mov ebp, eax */
  EBP = (EAX);
  /* 10302b1d push ebp */
  push32((uint32_t)(EBP));
  /* 10302b1e call 0x10302f6a */
  push32(0x10302b23u); f_10302f6a();
  /* 10302b23 mov esi, eax */
  ESI = (EAX);
  /* 10302b25 pop ecx */
  ECX = (pop32());
  /* 10302b26 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302b28 jne 0x10302b2e */
  if (!C.zf) goto L_10302b2e;
  /* 10302b2a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10302b2c jmp 0x10302b39 */
  goto L_10302b39;
L_10302b2e:;
  /* 10302b2e push ebp */
  push32((uint32_t)(EBP));
  /* 10302b2f push edi */
  push32((uint32_t)(EDI));
  /* 10302b30 push esi */
  push32((uint32_t)(ESI));
  /* 10302b31 call 0x10303560 */
  push32(0x10302b36u); f_10303560();
  /* 10302b36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10302b39:;
  /* 10302b39 push edi */
  push32((uint32_t)(EDI));
  /* 10302b3a call dword ptr [0x10305078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305078))), 0x10302b40u);
  /* 10302b40 mov eax, esi */
  EAX = (ESI);
  /* 10302b42 jmp 0x10302b46 */
  goto L_10302b46;
L_10302b44:;
  /* 10302b44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10302b46:;
  /* 10302b46 pop edi */
  EDI = (pop32());
  /* 10302b47 pop esi */
  ESI = (pop32());
  /* 10302b48 pop ebp */
  EBP = (pop32());
  /* 10302b49 pop ebx */
  EBX = (pop32());
  /* 10302b4a pop ecx */
  ECX = (pop32());
  /* 10302b4b pop ecx */
  ECX = (pop32());
  /* 10302b4c ret  */
  ESPCHK(0x10302a1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b4d @ 0x10302b4d (60 bytes, 20 insns) */
void f_10302b4d(void) {
  FTRACE(0x10302b4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302b4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10302b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10302b51 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302b55 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10302b5a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10302b5d push eax */
  push32((uint32_t)(EAX));
  /* 10302b5e call dword ptr [0x10305060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305060))), 0x10302b64u);
  /* 10302b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302b66 mov dword ptr [0x10306b88], eax */
  w32((uint32_t)(0x10306b88), (EAX));
  /* 10302b6b je 0x10302b82 */
  if (C.zf) goto L_10302b82;
  /* 10302b6d call 0x10303895 */
  push32(0x10302b72u); f_10303895();
  /* 10302b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302b74 jne 0x10302b85 */
  if (!C.zf) goto L_10302b85;
  /* 10302b76 push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10302b7c call dword ptr [0x10305058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305058))), 0x10302b82u);
L_10302b82:;
  /* 10302b82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10302b84 ret  */
  ESPCHK(0x10302b4du, _esp0);
  ESP += 4; return;
L_10302b85:;
  /* 10302b85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10302b87 pop eax */
  EAX = (pop32());
  /* 10302b88 ret  */
  ESPCHK(0x10302b4du, _esp0);
  ESP += 4; return;
}

/* FUN_10002b89 @ 0x10302b89 (117 bytes, 38 insns) */
void f_10302b89(void) {
  FTRACE(0x10302b89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302b89 push ebx */
  push32((uint32_t)(EBX));
  /* 10302b8a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10302b8c cmp dword ptr [0x10306948], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10306948))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302b92 push ebp */
  push32((uint32_t)(EBP));
  /* 10302b93 mov ebp, dword ptr [0x1030504c] */
  EBP = (r32((uint32_t)(0x1030504c)));
  /* 10302b99 jle 0x10302bdf */
  if ((C.zf||C.sf!=C.of)) goto L_10302bdf;
  /* 10302b9b mov eax, dword ptr [0x1030694c] */
  EAX = (r32((uint32_t)(0x1030694c)));
  /* 10302ba0 push esi */
  push32((uint32_t)(ESI));
  /* 10302ba1 push edi */
  push32((uint32_t)(EDI));
  /* 10302ba2 mov edi, dword ptr [0x10305050] */
  EDI = (r32((uint32_t)(0x10305050)));
  /* 10302ba8 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10302bab:;
  /* 10302bab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10302bb0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10302bb5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10302bb7 call edi */
  call_ind((uint32_t)(EDI), 0x10302bb9u);
  /* 10302bb9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10302bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10302bc0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10302bc2 call edi */
  call_ind((uint32_t)(EDI), 0x10302bc4u);
  /* 10302bc4 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10302bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302bc9 push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10302bcf call ebp */
  call_ind((uint32_t)(EBP), 0x10302bd1u);
  /* 10302bd1 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10302bd4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10302bd5 cmp ebx, dword ptr [0x10306948] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10306948))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302bdb jl 0x10302bab */
  if ((C.sf!=C.of)) goto L_10302bab;
  /* 10302bdd pop edi */
  EDI = (pop32());
  /* 10302bde pop esi */
  ESI = (pop32());
L_10302bdf:;
  /* 10302bdf push dword ptr [0x1030694c] */
  push32((uint32_t)(r32((uint32_t)(0x1030694c))));
  /* 10302be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302be7 push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10302bed call ebp */
  call_ind((uint32_t)(EBP), 0x10302befu);
  /* 10302bef push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10302bf5 call dword ptr [0x10305058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305058))), 0x10302bfbu);
  /* 10302bfb pop ebp */
  EBP = (pop32());
  /* 10302bfc pop ebx */
  EBX = (pop32());
  /* 10302bfd ret  */
  ESPCHK(0x10302b89u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bfe @ 0x10302bfe (57 bytes, 18 insns) */
void f_10302bfe(void) {
  FTRACE(0x10302bfeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302bfe mov eax, dword ptr [0x10306740] */
  EAX = (r32((uint32_t)(0x10306740)));
  /* 10302c03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302c06 je 0x10302c15 */
  if (C.zf) goto L_10302c15;
  /* 10302c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302c0a jne 0x10302c36 */
  if (!C.zf) goto L_10302c36;
  /* 10302c0c cmp dword ptr [0x10306744], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10306744))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302c13 jne 0x10302c36 */
  if (!C.zf) goto L_10302c36;
L_10302c15:;
  /* 10302c15 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10302c1a call 0x10302c37 */
  push32(0x10302c1fu); f_10302c37();
  /* 10302c1f mov eax, dword ptr [0x10306894] */
  EAX = (r32((uint32_t)(0x10306894)));
  /* 10302c24 pop ecx */
  ECX = (pop32());
  /* 10302c25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302c27 je 0x10302c2b */
  if (C.zf) goto L_10302c2b;
  /* 10302c29 call eax */
  call_ind((uint32_t)(EAX), 0x10302c2bu);
L_10302c2b:;
  /* 10302c2b push 0xff */
  push32((uint32_t)(0xffu));
  /* 10302c30 call 0x10302c37 */
  push32(0x10302c35u); f_10302c37();
  /* 10302c35 pop ecx */
  ECX = (pop32());
L_10302c36:;
  /* 10302c36 ret  */
  ESPCHK(0x10302bfeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002c37 @ 0x10302c37 (339 bytes, 100 insns) */
void f_10302c37(void) {
  FTRACE(0x10302c37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302c37 push ebp */
  push32((uint32_t)(EBP));
  /* 10302c38 mov ebp, esp */
  EBP = (ESP);
  /* 10302c3a sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10302c40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10302c43 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10302c45 mov eax, 0x10306288 */
  EAX = (0x10306288u);
L_10302c4a:;
  /* 10302c4a cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302c4c je 0x10302c59 */
  if (C.zf) goto L_10302c59;
  /* 10302c4e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10302c51 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10302c52 cmp eax, 0x10306318 */
  { uint32_t _a=(EAX),_b=(0x10306318u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302c57 jl 0x10302c4a */
  if ((C.sf!=C.of)) goto L_10302c4a;
L_10302c59:;
  /* 10302c59 push esi */
  push32((uint32_t)(ESI));
  /* 10302c5a mov esi, ecx */
  ESI = (ECX);
  /* 10302c5c shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10302c5f cmp edx, dword ptr [esi + 0x10306288] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10306288))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302c65 jne 0x10302d87 */
  if (!C.zf) goto L_10302d87;
  /* 10302c6b mov eax, dword ptr [0x10306740] */
  EAX = (r32((uint32_t)(0x10306740)));
  /* 10302c70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302c73 je 0x10302d61 */
  if (C.zf) goto L_10302d61;
  /* 10302c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302c7b jne 0x10302c8a */
  if (!C.zf) goto L_10302c8a;
  /* 10302c7d cmp dword ptr [0x10306744], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10306744))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302c84 je 0x10302d61 */
  if (C.zf) goto L_10302d61;
L_10302c8a:;
  /* 10302c8a cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302c90 je 0x10302d87 */
  if (C.zf) goto L_10302d87;
  /* 10302c96 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10302c9c push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10302ca1 push eax */
  push32((uint32_t)(EAX));
  /* 10302ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302ca4 call dword ptr [0x10305070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305070))), 0x10302caau);
  /* 10302caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302cac jne 0x10302cc1 */
  if (!C.zf) goto L_10302cc1;
  /* 10302cae lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10302cb4 push 0x10305428 */
  push32((uint32_t)(0x10305428u));
  /* 10302cb9 push eax */
  push32((uint32_t)(EAX));
  /* 10302cba call 0x10303000 */
  push32(0x10302cbfu); f_10303000();
  /* 10302cbf pop ecx */
  ECX = (pop32());
  /* 10302cc0 pop ecx */
  ECX = (pop32());
L_10302cc1:;
  /* 10302cc1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10302cc7 push edi */
  push32((uint32_t)(EDI));
  /* 10302cc8 push eax */
  push32((uint32_t)(EAX));
  /* 10302cc9 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10302ccf call 0x103030f0 */
  push32(0x10302cd4u); f_103030f0();
  /* 10302cd4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10302cd5 pop ecx */
  ECX = (pop32());
  /* 10302cd6 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302cd9 jbe 0x10302d04 */
  if ((C.cf||C.zf)) goto L_10302d04;
  /* 10302cdb lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10302ce1 push eax */
  push32((uint32_t)(EAX));
  /* 10302ce2 call 0x103030f0 */
  push32(0x10302ce7u); f_103030f0();
  /* 10302ce7 mov edi, eax */
  EDI = (EAX);
  /* 10302ce9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10302cef sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10302cf2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10302cf4 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10302cf6 push 0x10305424 */
  push32((uint32_t)(0x10305424u));
  /* 10302cfb push edi */
  push32((uint32_t)(EDI));
  /* 10302cfc call 0x10304170 */
  push32(0x10302d01u); f_10304170();
  /* 10302d01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10302d04:;
  /* 10302d04 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10302d0a push 0x10305408 */
  push32((uint32_t)(0x10305408u));
  /* 10302d0f push eax */
  push32((uint32_t)(EAX));
  /* 10302d10 call 0x10303000 */
  push32(0x10302d15u); f_10303000();
  /* 10302d15 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10302d1b push edi */
  push32((uint32_t)(EDI));
  /* 10302d1c push eax */
  push32((uint32_t)(EAX));
  /* 10302d1d call 0x10303010 */
  push32(0x10302d22u); f_10303010();
  /* 10302d22 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10302d28 push 0x10305404 */
  push32((uint32_t)(0x10305404u));
  /* 10302d2d push eax */
  push32((uint32_t)(EAX));
  /* 10302d2e call 0x10303010 */
  push32(0x10302d33u); f_10303010();
  /* 10302d33 push dword ptr [esi + 0x1030628c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1030628c))));
  /* 10302d39 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10302d3f push eax */
  push32((uint32_t)(EAX));
  /* 10302d40 call 0x10303010 */
  push32(0x10302d45u); f_10303010();
  /* 10302d45 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10302d4a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10302d50 push 0x103053dc */
  push32((uint32_t)(0x103053dcu));
  /* 10302d55 push eax */
  push32((uint32_t)(EAX));
  /* 10302d56 call 0x103040de */
  push32(0x10302d5bu); f_103040de();
  /* 10302d5b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302d5e pop edi */
  EDI = (pop32());
  /* 10302d5f jmp 0x10302d87 */
  goto L_10302d87;
L_10302d61:;
  /* 10302d61 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10302d64 lea esi, [esi + 0x1030628c] */
  ESI = ((uint32_t)(ESI + 0x1030628c));
  /* 10302d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10302d6c push eax */
  push32((uint32_t)(EAX));
  /* 10302d6d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10302d6f call 0x103030f0 */
  push32(0x10302d74u); f_103030f0();
  /* 10302d74 pop ecx */
  ECX = (pop32());
  /* 10302d75 push eax */
  push32((uint32_t)(EAX));
  /* 10302d76 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10302d78 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10302d7a call dword ptr [0x10305080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305080))), 0x10302d80u);
  /* 10302d80 push eax */
  push32((uint32_t)(EAX));
  /* 10302d81 call dword ptr [0x10305054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305054))), 0x10302d87u);
L_10302d87:;
  /* 10302d87 pop esi */
  ESI = (pop32());
  /* 10302d88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10302d89 ret  */
  ESPCHK(0x10302c37u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d8a @ 0x10302d8a (141 bytes, 56 insns) */
void f_10302d8a(void) {
  FTRACE(0x10302d8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302d8a push ebx */
  push32((uint32_t)(EBX));
  /* 10302d8b push esi */
  push32((uint32_t)(ESI));
  /* 10302d8c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10302d90 push edi */
  push32((uint32_t)(EDI));
  /* 10302d91 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10302d96 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302d99 mov ebx, esi */
  EBX = (ESI);
  /* 10302d9b ja 0x10302daa */
  if ((!C.cf&&!C.zf)) goto L_10302daa;
  /* 10302d9d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10302d9f jne 0x10302da4 */
  if (!C.zf) goto L_10302da4;
  /* 10302da1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10302da3 pop esi */
  ESI = (pop32());
L_10302da4:;
  /* 10302da4 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10302da7 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10302daa:;
  /* 10302daa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10302dac cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302daf ja 0x10302deb */
  if ((!C.cf&&!C.zf)) goto L_10302deb;
  /* 10302db1 cmp ebx, dword ptr [0x10306560] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10306560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302db7 ja 0x10302dd6 */
  if ((!C.cf&&!C.zf)) goto L_10302dd6;
  /* 10302db9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10302dbb call 0x10302eac */
  push32(0x10302dc0u); f_10302eac();
  /* 10302dc0 push ebx */
  push32((uint32_t)(EBX));
  /* 10302dc1 call 0x10303c29 */
  push32(0x10302dc6u); f_10303c29();
  /* 10302dc6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10302dc8 mov edi, eax */
  EDI = (EAX);
  /* 10302dca call 0x10302f0d */
  push32(0x10302dcfu); f_10302f0d();
  /* 10302dcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302dd2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10302dd4 jne 0x10302e01 */
  if (!C.zf) goto L_10302e01;
L_10302dd6:;
  /* 10302dd6 push esi */
  push32((uint32_t)(ESI));
  /* 10302dd7 push 8 */
  push32((uint32_t)(0x8u));
  /* 10302dd9 push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10302ddf call dword ptr [0x10305044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305044))), 0x10302de5u);
  /* 10302de5 mov edi, eax */
  EDI = (EAX);
  /* 10302de7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10302de9 jne 0x10302e0d */
  if (!C.zf) goto L_10302e0d;
L_10302deb:;
  /* 10302deb cmp dword ptr [0x1030690c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1030690c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302df2 je 0x10302e0d */
  if (C.zf) goto L_10302e0d;
  /* 10302df4 push esi */
  push32((uint32_t)(ESI));
  /* 10302df5 call 0x103042c8 */
  push32(0x10302dfau); f_103042c8();
  /* 10302dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302dfc pop ecx */
  ECX = (pop32());
  /* 10302dfd je 0x10302e13 */
  if (C.zf) goto L_10302e13;
  /* 10302dff jmp 0x10302daa */
  goto L_10302daa;
L_10302e01:;
  /* 10302e01 push ebx */
  push32((uint32_t)(EBX));
  /* 10302e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302e04 push edi */
  push32((uint32_t)(EDI));
  /* 10302e05 call 0x10304270 */
  push32(0x10302e0au); f_10304270();
  /* 10302e0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10302e0d:;
  /* 10302e0d mov eax, edi */
  EAX = (EDI);
L_10302e0f:;
  /* 10302e0f pop edi */
  EDI = (pop32());
  /* 10302e10 pop esi */
  ESI = (pop32());
  /* 10302e11 pop ebx */
  EBX = (pop32());
  /* 10302e12 ret  */
  ESPCHK(0x10302d8au, _esp0);
  ESP += 4; return;
L_10302e13:;
  /* 10302e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10302e15 jmp 0x10302e0f */
  goto L_10302e0f;
}

/* FUN_10002e17 @ 0x10302e17 (41 bytes, 12 insns) */
void f_10302e17(void) {
  FTRACE(0x10302e17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302e17 push esi */
  push32((uint32_t)(ESI));
  /* 10302e18 mov esi, dword ptr [0x10305040] */
  ESI = (r32((uint32_t)(0x10305040)));
  /* 10302e1e push dword ptr [0x1030635c] */
  push32((uint32_t)(r32((uint32_t)(0x1030635c))));
  /* 10302e24 call esi */
  call_ind((uint32_t)(ESI), 0x10302e26u);
  /* 10302e26 push dword ptr [0x1030634c] */
  push32((uint32_t)(r32((uint32_t)(0x1030634c))));
  /* 10302e2c call esi */
  call_ind((uint32_t)(ESI), 0x10302e2eu);
  /* 10302e2e push dword ptr [0x1030633c] */
  push32((uint32_t)(r32((uint32_t)(0x1030633c))));
  /* 10302e34 call esi */
  call_ind((uint32_t)(ESI), 0x10302e36u);
  /* 10302e36 push dword ptr [0x1030631c] */
  push32((uint32_t)(r32((uint32_t)(0x1030631c))));
  /* 10302e3c call esi */
  call_ind((uint32_t)(ESI), 0x10302e3eu);
  /* 10302e3e pop esi */
  ESI = (pop32());
  /* 10302e3f ret  */
  ESPCHK(0x10302e17u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e40 @ 0x10302e40 (108 bytes, 34 insns) */
void f_10302e40(void) {
  FTRACE(0x10302e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302e40 push esi */
  push32((uint32_t)(ESI));
  /* 10302e41 push edi */
  push32((uint32_t)(EDI));
  /* 10302e42 mov edi, dword ptr [0x10305074] */
  EDI = (r32((uint32_t)(0x10305074)));
  /* 10302e48 mov esi, 0x10306318 */
  ESI = (0x10306318u);
L_10302e4d:;
  /* 10302e4d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10302e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302e51 je 0x10302e7e */
  if (C.zf) goto L_10302e7e;
  /* 10302e53 cmp esi, 0x1030635c */
  { uint32_t _a=(ESI),_b=(0x1030635cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302e59 je 0x10302e7e */
  if (C.zf) goto L_10302e7e;
  /* 10302e5b cmp esi, 0x1030634c */
  { uint32_t _a=(ESI),_b=(0x1030634cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302e61 je 0x10302e7e */
  if (C.zf) goto L_10302e7e;
  /* 10302e63 cmp esi, 0x1030633c */
  { uint32_t _a=(ESI),_b=(0x1030633cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302e69 je 0x10302e7e */
  if (C.zf) goto L_10302e7e;
  /* 10302e6b cmp esi, 0x1030631c */
  { uint32_t _a=(ESI),_b=(0x1030631cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302e71 je 0x10302e7e */
  if (C.zf) goto L_10302e7e;
  /* 10302e73 push eax */
  push32((uint32_t)(EAX));
  /* 10302e74 call edi */
  call_ind((uint32_t)(EDI), 0x10302e76u);
  /* 10302e76 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10302e78 call 0x10302f22 */
  push32(0x10302e7du); f_10302f22();
  /* 10302e7d pop ecx */
  ECX = (pop32());
L_10302e7e:;
  /* 10302e7e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10302e81 cmp esi, 0x103063d8 */
  { uint32_t _a=(ESI),_b=(0x103063d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302e87 jl 0x10302e4d */
  if ((C.sf!=C.of)) goto L_10302e4d;
  /* 10302e89 push dword ptr [0x1030633c] */
  push32((uint32_t)(r32((uint32_t)(0x1030633c))));
  /* 10302e8f call edi */
  call_ind((uint32_t)(EDI), 0x10302e91u);
  /* 10302e91 push dword ptr [0x1030634c] */
  push32((uint32_t)(r32((uint32_t)(0x1030634c))));
  /* 10302e97 call edi */
  call_ind((uint32_t)(EDI), 0x10302e99u);
  /* 10302e99 push dword ptr [0x1030635c] */
  push32((uint32_t)(r32((uint32_t)(0x1030635c))));
  /* 10302e9f call edi */
  call_ind((uint32_t)(EDI), 0x10302ea1u);
  /* 10302ea1 push dword ptr [0x1030631c] */
  push32((uint32_t)(r32((uint32_t)(0x1030631c))));
  /* 10302ea7 call edi */
  call_ind((uint32_t)(EDI), 0x10302ea9u);
  /* 10302ea9 pop edi */
  EDI = (pop32());
  /* 10302eaa pop esi */
  ESI = (pop32());
  /* 10302eab ret  */
  ESPCHK(0x10302e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eac @ 0x10302eac (97 bytes, 37 insns) */
void f_10302eac(void) {
  FTRACE(0x10302eacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302eac push ebp */
  push32((uint32_t)(EBP));
  /* 10302ead mov ebp, esp */
  EBP = (ESP);
  /* 10302eaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10302eb2 push esi */
  push32((uint32_t)(ESI));
  /* 10302eb3 cmp dword ptr [eax*4 + 0x10306318], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10306318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302ebb lea esi, [eax*4 + 0x10306318] */
  ESI = ((uint32_t)(EAX*4 + 0x10306318));
  /* 10302ec2 jne 0x10302f02 */
  if (!C.zf) goto L_10302f02;
  /* 10302ec4 push edi */
  push32((uint32_t)(EDI));
  /* 10302ec5 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10302ec7 call 0x10302f6a */
  push32(0x10302eccu); f_10302f6a();
  /* 10302ecc mov edi, eax */
  EDI = (EAX);
  /* 10302ece pop ecx */
  ECX = (pop32());
  /* 10302ecf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10302ed1 jne 0x10302edb */
  if (!C.zf) goto L_10302edb;
  /* 10302ed3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10302ed5 call 0x10302228 */
  push32(0x10302edau); f_10302228();
  /* 10302eda pop ecx */
  ECX = (pop32());
L_10302edb:;
  /* 10302edb push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10302edd call 0x10302eac */
  push32(0x10302ee2u); f_10302eac();
  /* 10302ee2 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302ee5 pop ecx */
  ECX = (pop32());
  /* 10302ee6 push edi */
  push32((uint32_t)(EDI));
  /* 10302ee7 jne 0x10302ef3 */
  if (!C.zf) goto L_10302ef3;
  /* 10302ee9 call dword ptr [0x10305040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305040))), 0x10302eefu);
  /* 10302eef mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10302ef1 jmp 0x10302ef9 */
  goto L_10302ef9;
L_10302ef3:;
  /* 10302ef3 call 0x10302f22 */
  push32(0x10302ef8u); f_10302f22();
  /* 10302ef8 pop ecx */
  ECX = (pop32());
L_10302ef9:;
  /* 10302ef9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10302efb call 0x10302f0d */
  push32(0x10302f00u); f_10302f0d();
  /* 10302f00 pop ecx */
  ECX = (pop32());
  /* 10302f01 pop edi */
  EDI = (pop32());
L_10302f02:;
  /* 10302f02 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10302f04 call dword ptr [0x10305048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305048))), 0x10302f0au);
  /* 10302f0a pop esi */
  ESI = (pop32());
  /* 10302f0b pop ebp */
  EBP = (pop32());
  /* 10302f0c ret  */
  ESPCHK(0x10302eacu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f0d @ 0x10302f0d (21 bytes, 7 insns) */
void f_10302f0d(void) {
  FTRACE(0x10302f0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302f0d push ebp */
  push32((uint32_t)(EBP));
  /* 10302f0e mov ebp, esp */
  EBP = (ESP);
  /* 10302f10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10302f13 push dword ptr [eax*4 + 0x10306318] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10306318))));
  /* 10302f1a call dword ptr [0x1030503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030503c))), 0x10302f20u);
  /* 10302f20 pop ebp */
  EBP = (pop32());
  /* 10302f21 ret  */
  ESPCHK(0x10302f0du, _esp0);
  ESP += 4; return;
}

/* FUN_10002f22 @ 0x10302f22 (72 bytes, 29 insns) */
void f_10302f22(void) {
  FTRACE(0x10302f22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302f22 push esi */
  push32((uint32_t)(ESI));
  /* 10302f23 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10302f27 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10302f29 je 0x10302f68 */
  if (C.zf) goto L_10302f68;
  /* 10302f2b push 9 */
  push32((uint32_t)(0x9u));
  /* 10302f2d call 0x10302eac */
  push32(0x10302f32u); f_10302eac();
  /* 10302f32 push esi */
  push32((uint32_t)(ESI));
  /* 10302f33 call 0x103038d3 */
  push32(0x10302f38u); f_103038d3();
  /* 10302f38 pop ecx */
  ECX = (pop32());
  /* 10302f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302f3b pop ecx */
  ECX = (pop32());
  /* 10302f3c je 0x10302f51 */
  if (C.zf) goto L_10302f51;
  /* 10302f3e push esi */
  push32((uint32_t)(ESI));
  /* 10302f3f push eax */
  push32((uint32_t)(EAX));
  /* 10302f40 call 0x103038fe */
  push32(0x10302f45u); f_103038fe();
  /* 10302f45 push 9 */
  push32((uint32_t)(0x9u));
  /* 10302f47 call 0x10302f0d */
  push32(0x10302f4cu); f_10302f0d();
  /* 10302f4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302f4f pop esi */
  ESI = (pop32());
  /* 10302f50 ret  */
  ESPCHK(0x10302f22u, _esp0);
  ESP += 4; return;
L_10302f51:;
  /* 10302f51 push 9 */
  push32((uint32_t)(0x9u));
  /* 10302f53 call 0x10302f0d */
  push32(0x10302f58u); f_10302f0d();
  /* 10302f58 pop ecx */
  ECX = (pop32());
  /* 10302f59 push esi */
  push32((uint32_t)(ESI));
  /* 10302f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10302f5c push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10302f62 call dword ptr [0x1030504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030504c))), 0x10302f68u);
L_10302f68:;
  /* 10302f68 pop esi */
  ESI = (pop32());
  /* 10302f69 ret  */
  ESPCHK(0x10302f22u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10302f6a (18 bytes, 6 insns) */
void f_10302f6a(void) {
  FTRACE(0x10302f6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302f6a push dword ptr [0x1030690c] */
  push32((uint32_t)(r32((uint32_t)(0x1030690c))));
  /* 10302f70 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10302f74 call 0x10302f7c */
  push32(0x10302f79u); f_10302f7c();
  /* 10302f79 pop ecx */
  ECX = (pop32());
  /* 10302f7a pop ecx */
  ECX = (pop32());
  /* 10302f7b ret  */
  ESPCHK(0x10302f6au, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10302f7c (44 bytes, 16 insns) */
void f_10302f7c(void) {
  FTRACE(0x10302f7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302f7c cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302f81 ja 0x10302fa5 */
  if ((!C.cf&&!C.zf)) goto L_10302fa5;
L_10302f83:;
  /* 10302f83 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10302f87 call 0x10302fa8 */
  push32(0x10302f8cu); f_10302fa8();
  /* 10302f8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302f8e pop ecx */
  ECX = (pop32());
  /* 10302f8f jne 0x10302fa7 */
  if (!C.zf) goto L_10302fa7;
  /* 10302f91 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302f95 je 0x10302fa7 */
  if (C.zf) goto L_10302fa7;
  /* 10302f97 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10302f9b call 0x103042c8 */
  push32(0x10302fa0u); f_103042c8();
  /* 10302fa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10302fa2 pop ecx */
  ECX = (pop32());
  /* 10302fa3 jne 0x10302f83 */
  if (!C.zf) goto L_10302f83;
L_10302fa5:;
  /* 10302fa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10302fa7:;
  /* 10302fa7 ret  */
  ESPCHK(0x10302f7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa8 @ 0x10302fa8 (78 bytes, 30 insns) */
void f_10302fa8(void) {
  FTRACE(0x10302fa8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10302fa8 push esi */
  push32((uint32_t)(ESI));
  /* 10302fa9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10302fad cmp esi, dword ptr [0x10306560] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10306560))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10302fb3 push edi */
  push32((uint32_t)(EDI));
  /* 10302fb4 ja 0x10302fd7 */
  if ((!C.cf&&!C.zf)) goto L_10302fd7;
  /* 10302fb6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10302fb8 call 0x10302eac */
  push32(0x10302fbdu); f_10302eac();
  /* 10302fbd push esi */
  push32((uint32_t)(ESI));
  /* 10302fbe call 0x10303c29 */
  push32(0x10302fc3u); f_10303c29();
  /* 10302fc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10302fc5 mov edi, eax */
  EDI = (EAX);
  /* 10302fc7 call 0x10302f0d */
  push32(0x10302fccu); f_10302f0d();
  /* 10302fcc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10302fcf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10302fd1 je 0x10302fd7 */
  if (C.zf) goto L_10302fd7;
  /* 10302fd3 mov eax, edi */
  EAX = (EDI);
  /* 10302fd5 jmp 0x10302ff3 */
  goto L_10302ff3;
L_10302fd7:;
  /* 10302fd7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10302fd9 jne 0x10302fde */
  if (!C.zf) goto L_10302fde;
  /* 10302fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10302fdd pop esi */
  ESI = (pop32());
L_10302fde:;
  /* 10302fde add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10302fe1 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10302fe4 push esi */
  push32((uint32_t)(ESI));
  /* 10302fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10302fe7 push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10302fed call dword ptr [0x10305044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305044))), 0x10302ff3u);
L_10302ff3:;
  /* 10302ff3 pop edi */
  EDI = (pop32());
  /* 10302ff4 pop esi */
  ESI = (pop32());
  /* 10302ff5 ret  */
  ESPCHK(0x10302fa8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003000 @ 0x10303000 (7 bytes, 3 insns) */
void f_10303000(void) {
  FTRACE(0x10303000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303000 push edi */
  push32((uint32_t)(EDI));
  /* 10303001 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10303005 jmp 0x10303071 */
  jmp_ind(0x10303071u); return;
}

/* FUN_10003010 @ 0x10303010 (224 bytes, 84 insns) */
void f_10303010(void) {
  FTRACE(0x10303010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303010 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10303014 push edi */
  push32((uint32_t)(EDI));
  /* 10303015 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1030301b je 0x1030302c */
  if (C.zf) goto L_1030302c;
L_1030301d:;
  /* 1030301d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1030301f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10303020 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10303022 je 0x1030305f */
  if (C.zf) goto L_1030305f;
  /* 10303024 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1030302a jne 0x1030301d */
  if (!C.zf) goto L_1030301d;
L_1030302c:;
  /* 1030302c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1030302e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10303033 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303035 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10303038 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1030303a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030303d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10303042 je 0x1030302c */
  if (C.zf) goto L_1030302c;
  /* 10303044 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10303047 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10303049 je 0x1030306e */
  if (C.zf) goto L_1030306e;
  /* 1030304b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1030304d je 0x10303069 */
  if (C.zf) goto L_10303069;
  /* 1030304f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10303054 je 0x10303064 */
  if (C.zf) goto L_10303064;
  /* 10303056 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1030305b je 0x1030305f */
  if (C.zf) goto L_1030305f;
  /* 1030305d jmp 0x1030302c */
  goto L_1030302c;
L_1030305f:;
  /* 1030305f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10303062 jmp 0x10303071 */
  goto L_10303071;
L_10303064:;
  /* 10303064 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10303067 jmp 0x10303071 */
  goto L_10303071;
L_10303069:;
  /* 10303069 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1030306c jmp 0x10303071 */
  goto L_10303071;
L_1030306e:;
  /* 1030306e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10303071:;
  /* 10303071 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10303075 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1030307b je 0x10303096 */
  if (C.zf) goto L_10303096;
L_1030307d:;
  /* 1030307d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1030307f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10303080 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10303082 je 0x103030e8 */
  if (C.zf) goto L_103030e8;
  /* 10303084 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10303086 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10303087 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1030308d jne 0x1030307d */
  if (!C.zf) goto L_1030307d;
  /* 1030308f jmp 0x10303096 */
  goto L_10303096;
L_10303091:;
  /* 10303091 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10303093 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10303096:;
  /* 10303096 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1030309b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1030309d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030309f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103030a2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103030a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103030a6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103030a9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103030ae je 0x10303091 */
  if (C.zf) goto L_10303091;
  /* 103030b0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103030b2 je 0x103030e8 */
  if (C.zf) goto L_103030e8;
  /* 103030b4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 103030b6 je 0x103030df */
  if (C.zf) goto L_103030df;
  /* 103030b8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 103030be je 0x103030d2 */
  if (C.zf) goto L_103030d2;
  /* 103030c0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 103030c6 je 0x103030ca */
  if (C.zf) goto L_103030ca;
  /* 103030c8 jmp 0x10303091 */
  goto L_10303091;
L_103030ca:;
  /* 103030ca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103030cc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103030d0 pop edi */
  EDI = (pop32());
  /* 103030d1 ret  */
  ESPCHK(0x10303010u, _esp0);
  ESP += 4; return;
L_103030d2:;
  /* 103030d2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 103030d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103030d9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 103030dd pop edi */
  EDI = (pop32());
  /* 103030de ret  */
  ESPCHK(0x10303010u, _esp0);
  ESP += 4; return;
L_103030df:;
  /* 103030df mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 103030e2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103030e6 pop edi */
  EDI = (pop32());
  /* 103030e7 ret  */
  ESPCHK(0x10303010u, _esp0);
  ESP += 4; return;
L_103030e8:;
  /* 103030e8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 103030ea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103030ee pop edi */
  EDI = (pop32());
  /* 103030ef ret  */
  ESPCHK(0x10303010u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x103030f0 (123 bytes, 44 insns) */
void f_103030f0(void) {
  FTRACE(0x103030f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103030f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103030f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103030fa je 0x10303110 */
  if (C.zf) goto L_10303110;
L_103030fc:;
  /* 103030fc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 103030fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103030ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10303101 je 0x10303143 */
  if (C.zf) goto L_10303143;
  /* 10303103 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10303109 jne 0x103030fc */
  if (!C.zf) goto L_103030fc;
  /* 1030310b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10303110:;
  /* 10303110 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10303112 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10303117 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303119 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1030311c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1030311e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303121 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10303126 je 0x10303110 */
  if (C.zf) goto L_10303110;
  /* 10303128 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1030312b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1030312d je 0x10303161 */
  if (C.zf) goto L_10303161;
  /* 1030312f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10303131 je 0x10303157 */
  if (C.zf) goto L_10303157;
  /* 10303133 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10303138 je 0x1030314d */
  if (C.zf) goto L_1030314d;
  /* 1030313a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1030313f je 0x10303143 */
  if (C.zf) goto L_10303143;
  /* 10303141 jmp 0x10303110 */
  goto L_10303110;
L_10303143:;
  /* 10303143 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10303146 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1030314a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030314c ret  */
  ESPCHK(0x103030f0u, _esp0);
  ESP += 4; return;
L_1030314d:;
  /* 1030314d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10303150 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10303154 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303156 ret  */
  ESPCHK(0x103030f0u, _esp0);
  ESP += 4; return;
L_10303157:;
  /* 10303157 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1030315a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1030315e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303160 ret  */
  ESPCHK(0x103030f0u, _esp0);
  ESP += 4; return;
L_10303161:;
  /* 10303161 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10303164 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10303168 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030316a ret  */
  ESPCHK(0x103030f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000316b @ 0x1030316b (429 bytes, 143 insns) */
void f_1030316b(void) {
  FTRACE(0x1030316bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1030316b push ebp */
  push32((uint32_t)(EBP));
  /* 1030316c mov ebp, esp */
  EBP = (ESP);
  /* 1030316e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303171 push ebx */
  push32((uint32_t)(EBX));
  /* 10303172 push esi */
  push32((uint32_t)(ESI));
  /* 10303173 push edi */
  push32((uint32_t)(EDI));
  /* 10303174 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10303176 call 0x10302eac */
  push32(0x1030317bu); f_10302eac();
  /* 1030317b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1030317e call 0x10303318 */
  push32(0x10303183u); f_10303318();
  /* 10303183 mov ebx, eax */
  EBX = (EAX);
  /* 10303185 pop ecx */
  ECX = (pop32());
  /* 10303186 cmp ebx, dword ptr [0x10306950] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10306950))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030318c pop ecx */
  ECX = (pop32());
  /* 1030318d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10303190 jne 0x10303199 */
  if (!C.zf) goto L_10303199;
L_10303192:;
  /* 10303192 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10303194 jmp 0x10303309 */
  goto L_10303309;
L_10303199:;
  /* 10303199 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1030319b je 0x103032f7 */
  if (C.zf) goto L_103032f7;
  /* 103031a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103031a3 mov eax, 0x10306468 */
  EAX = (0x10306468u);
L_103031a8:;
  /* 103031a8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103031aa je 0x10303220 */
  if (C.zf) goto L_10303220;
  /* 103031ac add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103031af inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103031b0 cmp eax, 0x10306558 */
  { uint32_t _a=(EAX),_b=(0x10306558u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103031b5 jl 0x103031a8 */
  if ((C.sf!=C.of)) goto L_103031a8;
  /* 103031b7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 103031ba push eax */
  push32((uint32_t)(EAX));
  /* 103031bb push ebx */
  push32((uint32_t)(EBX));
  /* 103031bc call dword ptr [0x10305034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305034))), 0x103031c2u);
  /* 103031c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 103031c4 pop esi */
  ESI = (pop32());
  /* 103031c5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103031c7 jne 0x103032ee */
  if (!C.zf) goto L_103032ee;
  /* 103031cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103031cf and dword ptr [0x10306b84], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10306b84)))&(0x0u); w32((uint32_t)(0x10306b84), (_r)); fl_logic(_r,32); }
  /* 103031d6 pop ecx */
  ECX = (pop32());
  /* 103031d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103031d9 mov edi, 0x10306a80 */
  EDI = (0x10306a80u);
  /* 103031de cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103031e1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103031e3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103031e4 mov dword ptr [0x10306950], ebx */
  w32((uint32_t)(0x10306950), (EBX));
  /* 103031ea jbe 0x103032db */
  if ((C.cf||C.zf)) goto L_103032db;
  /* 103031f0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103031f4 je 0x103032b6 */
  if (C.zf) goto L_103032b6;
  /* 103031fa lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_103031fd:;
  /* 103031fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103031ff test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10303201 je 0x103032b6 */
  if (C.zf) goto L_103032b6;
  /* 10303207 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1030320b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1030320e:;
  /* 1030320e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303210 ja 0x103032aa */
  if ((!C.cf&&!C.zf)) goto L_103032aa;
  /* 10303216 or byte ptr [eax + 0x10306a81], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306a81)))|(0x4u); w8((uint32_t)(EAX + 0x10306a81), (_r)); fl_logic(_r,8); }
  /* 1030321d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1030321e jmp 0x1030320e */
  goto L_1030320e;
L_10303220:;
  /* 10303220 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10303224 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10303226 pop ecx */
  ECX = (pop32());
  /* 10303227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10303229 mov edi, 0x10306a80 */
  EDI = (0x10306a80u);
  /* 1030322e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10303231 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10303233 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10303236 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10303237 lea ebx, [esi + 0x10306478] */
  EBX = ((uint32_t)(ESI + 0x10306478));
L_1030323d:;
  /* 1030323d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10303240 mov ecx, ebx */
  ECX = (EBX);
  /* 10303242 je 0x10303270 */
  if (C.zf) goto L_10303270;
L_10303244:;
  /* 10303244 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10303247 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10303249 je 0x10303270 */
  if (C.zf) goto L_10303270;
  /* 1030324b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1030324e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10303251 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303253 ja 0x10303269 */
  if ((!C.cf&&!C.zf)) goto L_10303269;
  /* 10303255 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10303258 mov dl, byte ptr [edx + 0x10306460] */
  DL = (r8((uint32_t)(EDX + 0x10306460)));
L_1030325e:;
  /* 1030325e or byte ptr [eax + 0x10306a81], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306a81)))|(DL); w8((uint32_t)(EAX + 0x10306a81), (_r)); fl_logic(_r,8); }
  /* 10303264 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10303265 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303267 jbe 0x1030325e */
  if ((C.cf||C.zf)) goto L_1030325e;
L_10303269:;
  /* 10303269 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1030326a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1030326b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030326e jne 0x10303244 */
  if (!C.zf) goto L_10303244;
L_10303270:;
  /* 10303270 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10303273 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303276 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030327a jb 0x1030323d */
  if (C.cf) goto L_1030323d;
  /* 1030327c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1030327f mov dword ptr [0x1030696c], 1 */
  w32((uint32_t)(0x1030696c), (0x1u));
  /* 10303289 push eax */
  push32((uint32_t)(EAX));
  /* 1030328a mov dword ptr [0x10306950], eax */
  w32((uint32_t)(0x10306950), (EAX));
  /* 1030328f call 0x10303362 */
  push32(0x10303294u); f_10303362();
  /* 10303294 lea esi, [esi + 0x1030646c] */
  ESI = ((uint32_t)(ESI + 0x1030646c));
  /* 1030329a mov edi, 0x10306960 */
  EDI = (0x10306960u);
  /* 1030329f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103032a0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103032a1 pop ecx */
  ECX = (pop32());
  /* 103032a2 mov dword ptr [0x10306b84], eax */
  w32((uint32_t)(0x10306b84), (EAX));
  /* 103032a7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103032a8 jmp 0x103032fc */
  goto L_103032fc;
L_103032aa:;
  /* 103032aa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103032ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103032ac cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103032b0 jne 0x103031fd */
  if (!C.zf) goto L_103031fd;
L_103032b6:;
  /* 103032b6 mov eax, esi */
  EAX = (ESI);
L_103032b8:;
  /* 103032b8 or byte ptr [eax + 0x10306a81], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306a81)))|(0x8u); w8((uint32_t)(EAX + 0x10306a81), (_r)); fl_logic(_r,8); }
  /* 103032bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103032c0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103032c5 jb 0x103032b8 */
  if (C.cf) goto L_103032b8;
  /* 103032c7 push ebx */
  push32((uint32_t)(EBX));
  /* 103032c8 call 0x10303362 */
  push32(0x103032cdu); f_10303362();
  /* 103032cd pop ecx */
  ECX = (pop32());
  /* 103032ce mov dword ptr [0x10306b84], eax */
  w32((uint32_t)(0x10306b84), (EAX));
  /* 103032d3 mov dword ptr [0x1030696c], esi */
  w32((uint32_t)(0x1030696c), (ESI));
  /* 103032d9 jmp 0x103032e2 */
  goto L_103032e2;
L_103032db:;
  /* 103032db and dword ptr [0x1030696c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1030696c)))&(0x0u); w32((uint32_t)(0x1030696c), (_r)); fl_logic(_r,32); }
L_103032e2:;
  /* 103032e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103032e4 mov edi, 0x10306960 */
  EDI = (0x10306960u);
  /* 103032e9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103032ea stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103032eb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103032ec jmp 0x103032fc */
  goto L_103032fc;
L_103032ee:;
  /* 103032ee cmp dword ptr [0x103068f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x103068f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103032f5 je 0x10303306 */
  if (C.zf) goto L_10303306;
L_103032f7:;
  /* 103032f7 call 0x10303395 */
  push32(0x103032fcu); f_10303395();
L_103032fc:;
  /* 103032fc call 0x103033be */
  push32(0x10303301u); f_103033be();
  /* 10303301 jmp 0x10303192 */
  goto L_10303192;
L_10303306:;
  /* 10303306 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10303309:;
  /* 10303309 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1030330b call 0x10302f0d */
  push32(0x10303310u); f_10302f0d();
  /* 10303310 pop ecx */
  ECX = (pop32());
  /* 10303311 mov eax, esi */
  EAX = (ESI);
  /* 10303313 pop edi */
  EDI = (pop32());
  /* 10303314 pop esi */
  ESI = (pop32());
  /* 10303315 pop ebx */
  EBX = (pop32());
  /* 10303316 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10303317 ret  */
  ESPCHK(0x1030316bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003318 @ 0x10303318 (74 bytes, 15 insns) */
void f_10303318(void) {
  FTRACE(0x10303318u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303318 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1030331c and dword ptr [0x103068f8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103068f8)))&(0x0u); w32((uint32_t)(0x103068f8), (_r)); fl_logic(_r,32); }
  /* 10303323 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303326 jne 0x10303338 */
  if (!C.zf) goto L_10303338;
  /* 10303328 mov dword ptr [0x103068f8], 1 */
  w32((uint32_t)(0x103068f8), (0x1u));
  /* 10303332 jmp dword ptr [0x10305038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10305038)))); return;
L_10303338:;
  /* 10303338 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030333b jne 0x1030334d */
  if (!C.zf) goto L_1030334d;
  /* 1030333d mov dword ptr [0x103068f8], 1 */
  w32((uint32_t)(0x103068f8), (0x1u));
  /* 10303347 jmp dword ptr [0x10305030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10305030)))); return;
L_1030334d:;
  /* 1030334d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303350 jne 0x10303361 */
  if (!C.zf) goto L_10303361;
  /* 10303352 mov eax, dword ptr [0x10306928] */
  EAX = (r32((uint32_t)(0x10306928)));
  /* 10303357 mov dword ptr [0x103068f8], 1 */
  w32((uint32_t)(0x103068f8), (0x1u));
L_10303361:;
  /* 10303361 ret  */
  ESPCHK(0x10303318u, _esp0);
  ESP += 4; return;
}

/* FUN_10003362 @ 0x10303362 (51 bytes, 19 insns) */
void f_10303362(void) {
  FTRACE(0x10303362u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303362 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10303366 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030336b je 0x1030338f */
  if (C.zf) goto L_1030338f;
  /* 1030336d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303370 je 0x10303389 */
  if (C.zf) goto L_10303389;
  /* 10303372 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303375 je 0x10303383 */
  if (C.zf) goto L_10303383;
  /* 10303377 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10303378 je 0x1030337d */
  if (C.zf) goto L_1030337d;
  /* 1030337a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1030337c ret  */
  ESPCHK(0x10303362u, _esp0);
  ESP += 4; return;
L_1030337d:;
  /* 1030337d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10303382 ret  */
  ESPCHK(0x10303362u, _esp0);
  ESP += 4; return;
L_10303383:;
  /* 10303383 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10303388 ret  */
  ESPCHK(0x10303362u, _esp0);
  ESP += 4; return;
L_10303389:;
  /* 10303389 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1030338e ret  */
  ESPCHK(0x10303362u, _esp0);
  ESP += 4; return;
L_1030338f:;
  /* 1030338f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10303394 ret  */
  ESPCHK(0x10303362u, _esp0);
  ESP += 4; return;
}

/* FUN_10003395 @ 0x10303395 (41 bytes, 17 insns) */
void f_10303395(void) {
  FTRACE(0x10303395u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303395 push edi */
  push32((uint32_t)(EDI));
  /* 10303396 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10303398 pop ecx */
  ECX = (pop32());
  /* 10303399 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1030339b mov edi, 0x10306a80 */
  EDI = (0x10306a80u);
  /* 103033a0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103033a2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103033a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103033a5 mov edi, 0x10306960 */
  EDI = (0x10306960u);
  /* 103033aa mov dword ptr [0x10306950], eax */
  w32((uint32_t)(0x10306950), (EAX));
  /* 103033af mov dword ptr [0x1030696c], eax */
  w32((uint32_t)(0x1030696c), (EAX));
  /* 103033b4 mov dword ptr [0x10306b84], eax */
  w32((uint32_t)(0x10306b84), (EAX));
  /* 103033b9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103033ba stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103033bb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103033bc pop edi */
  EDI = (pop32());
  /* 103033bd ret  */
  ESPCHK(0x10303395u, _esp0);
  ESP += 4; return;
}

/* FUN_100033be @ 0x103033be (389 bytes, 124 insns) */
void f_103033be(void) {
  FTRACE(0x103033beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103033be push ebp */
  push32((uint32_t)(EBP));
  /* 103033bf mov ebp, esp */
  EBP = (ESP);
  /* 103033c1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103033c7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 103033ca push esi */
  push32((uint32_t)(ESI));
  /* 103033cb push eax */
  push32((uint32_t)(EAX));
  /* 103033cc push dword ptr [0x10306950] */
  push32((uint32_t)(r32((uint32_t)(0x10306950))));
  /* 103033d2 call dword ptr [0x10305034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305034))), 0x103033d8u);
  /* 103033d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103033db jne 0x103034f7 */
  if (!C.zf) goto L_103034f7;
  /* 103033e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103033e3 mov esi, 0x100 */
  ESI = (0x100u);
L_103033e8:;
  /* 103033e8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 103033ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103033f0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103033f2 jb 0x103033e8 */
  if (C.cf) goto L_103033e8;
  /* 103033f4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 103033f7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 103033fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10303400 je 0x10303439 */
  if (C.zf) goto L_10303439;
  /* 10303402 push ebx */
  push32((uint32_t)(EBX));
  /* 10303403 push edi */
  push32((uint32_t)(EDI));
  /* 10303404 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10303407:;
  /* 10303407 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1030340a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1030340d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030340f ja 0x1030342e */
  if ((!C.cf&&!C.zf)) goto L_1030342e;
  /* 10303411 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303413 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1030341a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1030341b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10303420 mov ebx, ecx */
  EBX = (ECX);
  /* 10303422 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10303425 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10303427 mov ecx, ebx */
  ECX = (EBX);
  /* 10303429 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1030342c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1030342e:;
  /* 1030342e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1030342f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10303430 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10303433 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10303435 jne 0x10303407 */
  if (!C.zf) goto L_10303407;
  /* 10303437 pop edi */
  EDI = (pop32());
  /* 10303438 pop ebx */
  EBX = (pop32());
L_10303439:;
  /* 10303439 push 0 */
  push32((uint32_t)(0x0u));
  /* 1030343b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10303441 push dword ptr [0x10306b84] */
  push32((uint32_t)(r32((uint32_t)(0x10306b84))));
  /* 10303447 push dword ptr [0x10306950] */
  push32((uint32_t)(r32((uint32_t)(0x10306950))));
  /* 1030344d push eax */
  push32((uint32_t)(EAX));
  /* 1030344e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10303454 push esi */
  push32((uint32_t)(ESI));
  /* 10303455 push eax */
  push32((uint32_t)(EAX));
  /* 10303456 push 1 */
  push32((uint32_t)(0x1u));
  /* 10303458 call 0x10304532 */
  push32(0x1030345du); f_10304532();
  /* 1030345d push 0 */
  push32((uint32_t)(0x0u));
  /* 1030345f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10303465 push dword ptr [0x10306950] */
  push32((uint32_t)(r32((uint32_t)(0x10306950))));
  /* 1030346b push esi */
  push32((uint32_t)(ESI));
  /* 1030346c push eax */
  push32((uint32_t)(EAX));
  /* 1030346d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10303473 push esi */
  push32((uint32_t)(ESI));
  /* 10303474 push eax */
  push32((uint32_t)(EAX));
  /* 10303475 push esi */
  push32((uint32_t)(ESI));
  /* 10303476 push dword ptr [0x10306b84] */
  push32((uint32_t)(r32((uint32_t)(0x10306b84))));
  /* 1030347c call 0x103042e3 */
  push32(0x10303481u); f_103042e3();
  /* 10303481 push 0 */
  push32((uint32_t)(0x0u));
  /* 10303483 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10303489 push dword ptr [0x10306950] */
  push32((uint32_t)(r32((uint32_t)(0x10306950))));
  /* 1030348f push esi */
  push32((uint32_t)(ESI));
  /* 10303490 push eax */
  push32((uint32_t)(EAX));
  /* 10303491 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10303497 push esi */
  push32((uint32_t)(ESI));
  /* 10303498 push eax */
  push32((uint32_t)(EAX));
  /* 10303499 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1030349e push dword ptr [0x10306b84] */
  push32((uint32_t)(r32((uint32_t)(0x10306b84))));
  /* 103034a4 call 0x103042e3 */
  push32(0x103034a9u); f_103042e3();
  /* 103034a9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103034ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103034ae lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_103034b4:;
  /* 103034b4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103034b7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 103034ba je 0x103034d2 */
  if (C.zf) goto L_103034d2;
  /* 103034bc or byte ptr [eax + 0x10306a81], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306a81)))|(0x10u); w8((uint32_t)(EAX + 0x10306a81), (_r)); fl_logic(_r,8); }
  /* 103034c3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_103034ca:;
  /* 103034ca mov byte ptr [eax + 0x10306980], dl */
  w8((uint32_t)(EAX + 0x10306980), (DL));
  /* 103034d0 jmp 0x103034ee */
  goto L_103034ee;
L_103034d2:;
  /* 103034d2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 103034d5 je 0x103034e7 */
  if (C.zf) goto L_103034e7;
  /* 103034d7 or byte ptr [eax + 0x10306a81], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306a81)))|(0x20u); w8((uint32_t)(EAX + 0x10306a81), (_r)); fl_logic(_r,8); }
  /* 103034de mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 103034e5 jmp 0x103034ca */
  goto L_103034ca;
L_103034e7:;
  /* 103034e7 and byte ptr [eax + 0x10306980], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306980)))&(0x0u); w8((uint32_t)(EAX + 0x10306980), (_r)); fl_logic(_r,8); }
L_103034ee:;
  /* 103034ee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103034ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103034f0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103034f1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103034f3 jb 0x103034b4 */
  if (C.cf) goto L_103034b4;
  /* 103034f5 jmp 0x10303540 */
  goto L_10303540;
L_103034f7:;
  /* 103034f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103034f9 mov esi, 0x100 */
  ESI = (0x100u);
L_103034fe:;
  /* 103034fe cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303501 jb 0x1030351c */
  if (C.cf) goto L_1030351c;
  /* 10303503 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303506 ja 0x1030351c */
  if ((!C.cf&&!C.zf)) goto L_1030351c;
  /* 10303508 or byte ptr [eax + 0x10306a81], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306a81)))|(0x10u); w8((uint32_t)(EAX + 0x10306a81), (_r)); fl_logic(_r,8); }
  /* 1030350f mov cl, al */
  CL = (AL);
  /* 10303511 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10303514:;
  /* 10303514 mov byte ptr [eax + 0x10306980], cl */
  w8((uint32_t)(EAX + 0x10306980), (CL));
  /* 1030351a jmp 0x1030353b */
  goto L_1030353b;
L_1030351c:;
  /* 1030351c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030351f jb 0x10303534 */
  if (C.cf) goto L_10303534;
  /* 10303521 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303524 ja 0x10303534 */
  if ((!C.cf&&!C.zf)) goto L_10303534;
  /* 10303526 or byte ptr [eax + 0x10306a81], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306a81)))|(0x20u); w8((uint32_t)(EAX + 0x10306a81), (_r)); fl_logic(_r,8); }
  /* 1030352d mov cl, al */
  CL = (AL);
  /* 1030352f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10303532 jmp 0x10303514 */
  goto L_10303514;
L_10303534:;
  /* 10303534 and byte ptr [eax + 0x10306980], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10306980)))&(0x0u); w8((uint32_t)(EAX + 0x10306980), (_r)); fl_logic(_r,8); }
L_1030353b:;
  /* 1030353b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1030353c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030353e jb 0x103034fe */
  if (C.cf) goto L_103034fe;
L_10303540:;
  /* 10303540 pop esi */
  ESI = (pop32());
  /* 10303541 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10303542 ret  */
  ESPCHK(0x103033beu, _esp0);
  ESP += 4; return;
}

/* FUN_10003543 @ 0x10303543 (28 bytes, 7 insns) */
void f_10303543(void) {
  FTRACE(0x10303543u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303543 cmp dword ptr [0x10306ca8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10306ca8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030354a jne 0x1030355e */
  if (!C.zf) goto L_1030355e;
  /* 1030354c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1030354e call 0x1030316b */
  push32(0x10303553u); f_1030316b();
  /* 10303553 pop ecx */
  ECX = (pop32());
  /* 10303554 mov dword ptr [0x10306ca8], 1 */
  w32((uint32_t)(0x10306ca8), (0x1u));
L_1030355e:;
  /* 1030355e ret  */
  ESPCHK(0x10303543u, _esp0);
  ESP += 4; return;
}

/* FUN_10003560 @ 0x10303560 (664 bytes, 267 insns) [15 switch table(s)] */
void f_10303560(void) {
  FTRACE(0x10303560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303560 push ebp */
  push32((uint32_t)(EBP));
  /* 10303561 mov ebp, esp */
  EBP = (ESP);
  /* 10303563 push edi */
  push32((uint32_t)(EDI));
  /* 10303564 push esi */
  push32((uint32_t)(ESI));
  /* 10303565 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10303568 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1030356b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1030356e mov eax, ecx */
  EAX = (ECX);
  /* 10303570 mov edx, ecx */
  EDX = (ECX);
  /* 10303572 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303574 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303576 jbe 0x10303580 */
  if ((C.cf||C.zf)) goto L_10303580;
  /* 10303578 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030357a jb 0x103036f8 */
  if (C.cf) goto L_103036f8;
L_10303580:;
  /* 10303580 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10303586 jne 0x1030359c */
  if (!C.zf) goto L_1030359c;
  /* 10303588 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1030358b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1030358e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303591 jb 0x103035bc */
  if (C.cf) goto L_103035bc;
  /* 10303593 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10303595 jmp dword ptr [edx*4 + 0x103036a8] */
  switch (EDX) {
    case 0: goto L_103036b8;
    case 1: goto L_103036c0;
    case 2: goto L_103036cc;
    case 3: goto L_103036e0;
    default: x86_unimpl("switch@0x10303595 out of table"); return;
  }
L_1030359c:;
  /* 1030359c mov eax, edi */
  EAX = (EDI);
  /* 1030359e mov edx, 3 */
  EDX = (0x3u);
  /* 103035a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103035a6 jb 0x103035b4 */
  if (C.cf) goto L_103035b4;
  /* 103035a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103035ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103035ad jmp dword ptr [eax*4 + 0x103035c0] */
  switch (EAX) {
    case 1: goto L_103035d0;
    case 2: goto L_103035fc;
    case 3: goto L_10303620;
    default: x86_unimpl("switch@0x103035ad out of table"); return;
  }
L_103035b4:;
  /* 103035b4 jmp dword ptr [ecx*4 + 0x103036b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103036b8)))); return;
  /* 103035bb nop  */
  /* nop */
L_103035bc:;
  /* 103035bc jmp dword ptr [ecx*4 + 0x1030363c] */
  switch (ECX) {
    case 0: goto L_1030369f;
    case 1: goto L_1030368c;
    case 2: goto L_10303684;
    case 3: goto L_1030367c;
    case 4: goto L_10303674;
    case 5: goto L_1030366c;
    case 6: goto L_10303664;
    case 7: goto L_1030365c;
    default: x86_unimpl("switch@0x103035bc out of table"); return;
  }
  /* 103035c3 nop  */
  /* nop */
L_103035d0:;
  /* 103035d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103035d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103035d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103035d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103035d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103035dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103035df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103035e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103035e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103035e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103035eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103035ee jb 0x103035bc */
  if (C.cf) goto L_103035bc;
  /* 103035f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103035f2 jmp dword ptr [edx*4 + 0x103036a8] */
  switch (EDX) {
    case 0: goto L_103036b8;
    case 1: goto L_103036c0;
    case 2: goto L_103036cc;
    case 3: goto L_103036e0;
    default: x86_unimpl("switch@0x103035f2 out of table"); return;
  }
  /* 103035f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103035fc:;
  /* 103035fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103035fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10303600 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10303602 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10303605 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10303608 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1030360b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1030360e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10303611 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303614 jb 0x103035bc */
  if (C.cf) goto L_103035bc;
  /* 10303616 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10303618 jmp dword ptr [edx*4 + 0x103036a8] */
  switch (EDX) {
    case 0: goto L_103036b8;
    case 1: goto L_103036c0;
    case 2: goto L_103036cc;
    case 3: goto L_103036e0;
    default: x86_unimpl("switch@0x10303618 out of table"); return;
  }
  /* 1030361f nop  */
  /* nop */
L_10303620:;
  /* 10303620 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10303622 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10303624 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10303626 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10303627 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1030362a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1030362b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030362e jb 0x103035bc */
  if (C.cf) goto L_103035bc;
  /* 10303630 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10303632 jmp dword ptr [edx*4 + 0x103036a8] */
  switch (EDX) {
    case 0: goto L_103036b8;
    case 1: goto L_103036c0;
    case 2: goto L_103036cc;
    case 3: goto L_103036e0;
    default: x86_unimpl("switch@0x10303632 out of table"); return;
  }
  /* 10303639 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1030365c:;
  /* 1030365c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10303660 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10303664:;
  /* 10303664 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10303668 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1030366c:;
  /* 1030366c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10303670 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10303674:;
  /* 10303674 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10303678 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1030367c:;
  /* 1030367c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10303680 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10303684:;
  /* 10303684 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10303688 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1030368c:;
  /* 1030368c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10303690 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10303694 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1030369b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1030369d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1030369f:;
  /* 1030369f jmp dword ptr [edx*4 + 0x103036a8] */
  switch (EDX) {
    case 0: goto L_103036b8;
    case 1: goto L_103036c0;
    case 2: goto L_103036cc;
    case 3: goto L_103036e0;
    default: x86_unimpl("switch@0x1030369f out of table"); return;
  }
  /* 103036a6 mov edi, edi */
  EDI = (EDI);
L_103036b8:;
  /* 103036b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103036bb pop esi */
  ESI = (pop32());
  /* 103036bc pop edi */
  EDI = (pop32());
  /* 103036bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103036be ret  */
  ESPCHK(0x10303560u, _esp0);
  ESP += 4; return;
  /* 103036bf nop  */
  /* nop */
L_103036c0:;
  /* 103036c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103036c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103036c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103036c7 pop esi */
  ESI = (pop32());
  /* 103036c8 pop edi */
  EDI = (pop32());
  /* 103036c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103036ca ret  */
  ESPCHK(0x10303560u, _esp0);
  ESP += 4; return;
  /* 103036cb nop  */
  /* nop */
L_103036cc:;
  /* 103036cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103036ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103036d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103036d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103036d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103036d9 pop esi */
  ESI = (pop32());
  /* 103036da pop edi */
  EDI = (pop32());
  /* 103036db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103036dc ret  */
  ESPCHK(0x10303560u, _esp0);
  ESP += 4; return;
  /* 103036dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103036e0:;
  /* 103036e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103036e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103036e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103036e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103036ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103036ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103036f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103036f3 pop esi */
  ESI = (pop32());
  /* 103036f4 pop edi */
  EDI = (pop32());
  /* 103036f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103036f6 ret  */
  ESPCHK(0x10303560u, _esp0);
  ESP += 4; return;
  /* 103036f7 nop  */
  /* nop */
L_103036f8:;
  /* 103036f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 103036fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10303700 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10303706 jne 0x1030372c */
  if (!C.zf) goto L_1030372c;
  /* 10303708 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1030370b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1030370e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303711 jb 0x10303720 */
  if (C.cf) goto L_10303720;
  /* 10303713 std  */
  C.df=1;
  /* 10303714 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10303716 cld  */
  C.df=0;
  /* 10303717 jmp dword ptr [edx*4 + 0x10303840] */
  switch (EDX) {
    case 0: goto L_10303850;
    case 1: goto L_10303858;
    case 2: goto L_10303868;
    case 3: goto L_1030387c;
    default: x86_unimpl("switch@0x10303717 out of table"); return;
  }
  /* 1030371e mov edi, edi */
  EDI = (EDI);
L_10303720:;
  /* 10303720 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10303722 jmp dword ptr [ecx*4 + 0x103037f0] */
  switch (ECX) {
    case 0: goto L_10303837;
    default: x86_unimpl("switch@0x10303722 out of table"); return;
  }
  /* 10303729 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1030372c:;
  /* 1030372c mov eax, edi */
  EAX = (EDI);
  /* 1030372e mov edx, 3 */
  EDX = (0x3u);
  /* 10303733 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303736 jb 0x10303744 */
  if (C.cf) goto L_10303744;
  /* 10303738 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1030373b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030373d jmp dword ptr [eax*4 + 0x10303748] */
  switch (EAX) {
    case 1: goto L_10303758;
    case 2: goto L_10303778;
    case 3: goto L_103037a0;
    default: x86_unimpl("switch@0x1030373d out of table"); return;
  }
L_10303744:;
  /* 10303744 jmp dword ptr [ecx*4 + 0x10303840] */
  switch (ECX) {
    case 0: goto L_10303850;
    case 1: goto L_10303858;
    case 2: goto L_10303868;
    case 3: goto L_1030387c;
    default: x86_unimpl("switch@0x10303744 out of table"); return;
  }
  /* 1030374b nop  */
  /* nop */
L_10303758:;
  /* 10303758 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030375b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1030375d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10303760 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10303761 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10303764 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10303765 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303768 jb 0x10303720 */
  if (C.cf) goto L_10303720;
  /* 1030376a std  */
  C.df=1;
  /* 1030376b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1030376d cld  */
  C.df=0;
  /* 1030376e jmp dword ptr [edx*4 + 0x10303840] */
  switch (EDX) {
    case 0: goto L_10303850;
    case 1: goto L_10303858;
    case 2: goto L_10303868;
    case 3: goto L_1030387c;
    default: x86_unimpl("switch@0x1030376e out of table"); return;
  }
  /* 10303775 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10303778:;
  /* 10303778 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030377b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1030377d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10303780 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10303783 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10303786 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10303789 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030378c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030378f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303792 jb 0x10303720 */
  if (C.cf) goto L_10303720;
  /* 10303794 std  */
  C.df=1;
  /* 10303795 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10303797 cld  */
  C.df=0;
  /* 10303798 jmp dword ptr [edx*4 + 0x10303840] */
  switch (EDX) {
    case 0: goto L_10303850;
    case 1: goto L_10303858;
    case 2: goto L_10303868;
    case 3: goto L_1030387c;
    default: x86_unimpl("switch@0x10303798 out of table"); return;
  }
  /* 1030379f nop  */
  /* nop */
L_103037a0:;
  /* 103037a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103037a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103037a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103037a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103037ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103037ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103037b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103037b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103037b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103037ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103037bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103037c0 jb 0x10303720 */
  if (C.cf) goto L_10303720;
  /* 103037c6 std  */
  C.df=1;
  /* 103037c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103037c9 cld  */
  C.df=0;
  /* 103037ca jmp dword ptr [edx*4 + 0x10303840] */
  switch (EDX) {
    case 0: goto L_10303850;
    case 1: goto L_10303858;
    case 2: goto L_10303868;
    case 3: goto L_1030387c;
    default: x86_unimpl("switch@0x103037ca out of table"); return;
  }
  /* 103037d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 103037d4 hlt  */
  x86_unimpl("hlt @ 0x103037d4");
  /* 103037d5 aaa  */
  x86_unimpl("aaa @ 0x103037d5");
  /* 103037d6 xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103037d8 cld  */
  C.df=0;
  /* 103037d9 aaa  */
  x86_unimpl("aaa @ 0x103037d9");
  /* 103037da xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103037dc add al, 0x38 */
  { uint32_t _a=(AL),_b=(0x38u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103037de xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103037e0 or al, 0x38 */
  { uint32_t _r=(AL)|(0x38u); AL = (_r); fl_logic(_r,8); }
  /* 103037e2 xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103037e4 adc al, 0x38 */
  { uint32_t _a=(AL),_b=(0x38u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103037e6 xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103037e8 sbb al, 0x38 */
  { uint32_t _a=(AL),_b=(0x38u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103037ea xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103037ec and al, 0x38 */
  { uint32_t _r=(AL)&(0x38u); AL = (_r); fl_logic(_r,8); }
  /* 103037ee xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103037f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 103037f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 103037fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10303800 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10303804 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10303808 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1030380c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10303810 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10303814 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10303818 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1030381c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10303820 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10303824 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10303828 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1030382c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10303833 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10303835 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10303837:;
  /* 10303837 jmp dword ptr [edx*4 + 0x10303840] */
  switch (EDX) {
    case 0: goto L_10303850;
    case 1: goto L_10303858;
    case 2: goto L_10303868;
    case 3: goto L_1030387c;
    default: x86_unimpl("switch@0x10303837 out of table"); return;
  }
  /* 1030383e mov edi, edi */
  EDI = (EDI);
L_10303850:;
  /* 10303850 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303853 pop esi */
  ESI = (pop32());
  /* 10303854 pop edi */
  EDI = (pop32());
  /* 10303855 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10303856 ret  */
  ESPCHK(0x10303560u, _esp0);
  ESP += 4; return;
  /* 10303857 nop  */
  /* nop */
L_10303858:;
  /* 10303858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030385b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1030385e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303861 pop esi */
  ESI = (pop32());
  /* 10303862 pop edi */
  EDI = (pop32());
  /* 10303863 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10303864 ret  */
  ESPCHK(0x10303560u, _esp0);
  ESP += 4; return;
  /* 10303865 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10303868:;
  /* 10303868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030386b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1030386e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10303871 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10303874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303877 pop esi */
  ESI = (pop32());
  /* 10303878 pop edi */
  EDI = (pop32());
  /* 10303879 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1030387a ret  */
  ESPCHK(0x10303560u, _esp0);
  ESP += 4; return;
  /* 1030387b nop  */
  /* nop */
L_1030387c:;
  /* 1030387c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030387f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10303882 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10303885 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10303888 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1030388b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1030388e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303891 pop esi */
  ESI = (pop32());
  /* 10303892 pop edi */
  EDI = (pop32());
  /* 10303893 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10303894 ret  */
  ESPCHK(0x10303560u, _esp0);
  ESP += 4; return;
}

/* FUN_10003895 @ 0x10303895 (62 bytes, 15 insns) */
void f_10303895(void) {
  FTRACE(0x10303895u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303895 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1030389a push 0 */
  push32((uint32_t)(0x0u));
  /* 1030389c push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 103038a2 call dword ptr [0x10305044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305044))), 0x103038a8u);
  /* 103038a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103038aa mov dword ptr [0x1030694c], eax */
  w32((uint32_t)(0x1030694c), (EAX));
  /* 103038af jne 0x103038b2 */
  if (!C.zf) goto L_103038b2;
  /* 103038b1 ret  */
  ESPCHK(0x10303895u, _esp0);
  ESP += 4; return;
L_103038b2:;
  /* 103038b2 and dword ptr [0x10306944], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10306944)))&(0x0u); w32((uint32_t)(0x10306944), (_r)); fl_logic(_r,32); }
  /* 103038b9 and dword ptr [0x10306948], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10306948)))&(0x0u); w32((uint32_t)(0x10306948), (_r)); fl_logic(_r,32); }
  /* 103038c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103038c2 mov dword ptr [0x10306940], eax */
  w32((uint32_t)(0x10306940), (EAX));
  /* 103038c7 mov dword ptr [0x10306938], 0x10 */
  w32((uint32_t)(0x10306938), (0x10u));
  /* 103038d1 pop eax */
  EAX = (pop32());
  /* 103038d2 ret  */
  ESPCHK(0x10303895u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d3 @ 0x103038d3 (43 bytes, 14 insns) */
void f_103038d3(void) {
  FTRACE(0x103038d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103038d3 mov eax, dword ptr [0x10306948] */
  EAX = (r32((uint32_t)(0x10306948)));
  /* 103038d8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 103038db mov eax, dword ptr [0x1030694c] */
  EAX = (r32((uint32_t)(0x1030694c)));
  /* 103038e0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_103038e3:;
  /* 103038e3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103038e5 jae 0x103038fb */
  if (!C.cf) goto L_103038fb;
  /* 103038e7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 103038eb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103038ee cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103038f4 jb 0x103038fd */
  if (C.cf) goto L_103038fd;
  /* 103038f6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103038f9 jmp 0x103038e3 */
  goto L_103038e3;
L_103038fb:;
  /* 103038fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103038fd:;
  /* 103038fd ret  */
  ESPCHK(0x103038d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100038fe @ 0x103038fe (811 bytes, 264 insns) */
void f_103038fe(void) {
  FTRACE(0x103038feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103038fe push ebp */
  push32((uint32_t)(EBP));
  /* 103038ff mov ebp, esp */
  EBP = (ESP);
  /* 10303901 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303904 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10303907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1030390a push ebx */
  push32((uint32_t)(EBX));
  /* 1030390b push esi */
  push32((uint32_t)(ESI));
  /* 1030390c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1030390f mov esi, edx */
  ESI = (EDX);
  /* 10303911 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303914 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10303917 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030391a push edi */
  push32((uint32_t)(EDI));
  /* 1030391b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 1030391e mov ecx, esi */
  ECX = (ESI);
  /* 10303920 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10303923 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10303929 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1030392a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1030392d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10303934 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10303937 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1030393a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 1030393d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10303940 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10303943 jne 0x103039c4 */
  if (!C.zf) goto L_103039c4;
  /* 10303945 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10303948 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1030394a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1030394b pop edi */
  EDI = (pop32());
  /* 1030394c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1030394f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303951 jbe 0x10303956 */
  if ((C.cf||C.zf)) goto L_10303956;
  /* 10303953 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10303956:;
  /* 10303956 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1030395a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030395e jne 0x103039a8 */
  if (!C.zf) goto L_103039a8;
  /* 10303960 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10303963 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303966 jae 0x10303984 */
  if (!C.cf) goto L_10303984;
  /* 10303968 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1030396d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1030396f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10303973 not edi */
  EDI = (~(EDI));
  /* 10303975 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10303979 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1030397b jne 0x103039a8 */
  if (!C.zf) goto L_103039a8;
  /* 1030397d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303980 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10303982 jmp 0x103039a8 */
  goto L_103039a8;
L_10303984:;
  /* 10303984 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303987 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1030398c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1030398e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10303991 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10303995 not edi */
  EDI = (~(EDI));
  /* 10303997 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1030399e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 103039a0 jne 0x103039a8 */
  if (!C.zf) goto L_103039a8;
  /* 103039a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103039a5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_103039a8:;
  /* 103039a8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 103039ac mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 103039b0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 103039b3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 103039b7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 103039bb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 103039be mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 103039c1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_103039c4:;
  /* 103039c4 mov edi, ebx */
  EDI = (EBX);
  /* 103039c6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 103039c9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 103039ca cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103039cd jbe 0x103039d2 */
  if ((C.cf||C.zf)) goto L_103039d2;
  /* 103039cf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103039d1 pop edi */
  EDI = (pop32());
L_103039d2:;
  /* 103039d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103039d5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 103039d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 103039db jne 0x10303a81 */
  if (!C.zf) goto L_10303a81;
  /* 103039e1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103039e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103039e7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103039ea push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103039ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103039ef dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103039f0 pop edx */
  EDX = (pop32());
  /* 103039f1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103039f3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103039f6 jbe 0x103039fd */
  if ((C.cf||C.zf)) goto L_103039fd;
  /* 103039f8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103039fb mov ecx, edx */
  ECX = (EDX);
L_103039fd:;
  /* 103039fd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303a00 mov edi, ebx */
  EDI = (EBX);
  /* 10303a02 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10303a05 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10303a08 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10303a09 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303a0b jbe 0x10303a0f */
  if ((C.cf||C.zf)) goto L_10303a0f;
  /* 10303a0d mov edi, edx */
  EDI = (EDX);
L_10303a0f:;
  /* 10303a0f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303a11 je 0x10303a7e */
  if (C.zf) goto L_10303a7e;
  /* 10303a13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10303a16 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10303a19 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303a1c jne 0x10303a66 */
  if (!C.zf) goto L_10303a66;
  /* 10303a1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10303a21 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303a24 jae 0x10303a42 */
  if (!C.cf) goto L_10303a42;
  /* 10303a26 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10303a2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10303a2d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10303a31 not edx */
  EDX = (~(EDX));
  /* 10303a33 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10303a37 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10303a39 jne 0x10303a66 */
  if (!C.zf) goto L_10303a66;
  /* 10303a3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303a3e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10303a40 jmp 0x10303a66 */
  goto L_10303a66;
L_10303a42:;
  /* 10303a42 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303a45 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10303a4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10303a4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10303a4f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10303a53 not edx */
  EDX = (~(EDX));
  /* 10303a55 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10303a5c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10303a5e jne 0x10303a66 */
  if (!C.zf) goto L_10303a66;
  /* 10303a60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303a63 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10303a66:;
  /* 10303a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10303a69 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10303a6c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10303a6f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10303a72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10303a75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10303a78 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10303a7b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10303a7e:;
  /* 10303a7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10303a81:;
  /* 10303a81 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303a85 jne 0x10303a90 */
  if (!C.zf) goto L_10303a90;
  /* 10303a87 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303a8a je 0x10303b19 */
  if (C.zf) goto L_10303b19;
L_10303a90:;
  /* 10303a90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10303a93 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10303a96 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10303a99 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10303a9c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10303a9f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10303aa2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10303aa5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10303aa8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10303aab mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10303aae mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10303ab1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303ab4 jne 0x10303b19 */
  if (!C.zf) goto L_10303b19;
  /* 10303ab6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10303aba cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303abd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10303ac0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10303ac2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10303ac6 jae 0x10303aed */
  if (!C.cf) goto L_10303aed;
  /* 10303ac8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10303acc jne 0x10303adc */
  if (!C.zf) goto L_10303adc;
  /* 10303ace mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10303ad3 mov ecx, edi */
  ECX = (EDI);
  /* 10303ad5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10303ad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303ada or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10303adc:;
  /* 10303adc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10303ae1 mov ecx, edi */
  ECX = (EDI);
  /* 10303ae3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10303ae5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10303ae9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10303aeb jmp 0x10303b16 */
  goto L_10303b16;
L_10303aed:;
  /* 10303aed cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10303af1 jne 0x10303b03 */
  if (!C.zf) goto L_10303b03;
  /* 10303af3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10303af6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10303afb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10303afd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303b00 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10303b03:;
  /* 10303b03 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10303b06 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10303b0b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10303b0d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10303b14 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10303b16:;
  /* 10303b16 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10303b19:;
  /* 10303b19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10303b1c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10303b1e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10303b22 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10303b24 jne 0x10303c24 */
  if (!C.zf) goto L_10303c24;
  /* 10303b2a mov eax, dword ptr [0x10306944] */
  EAX = (r32((uint32_t)(0x10306944)));
  /* 10303b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10303b31 je 0x10303c16 */
  if (C.zf) goto L_10303c16;
  /* 10303b37 mov ecx, dword ptr [0x1030693c] */
  ECX = (r32((uint32_t)(0x1030693c)));
  /* 10303b3d mov edi, dword ptr [0x10305050] */
  EDI = (r32((uint32_t)(0x10305050)));
  /* 10303b43 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10303b46 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303b49 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10303b4e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10303b53 push ebx */
  push32((uint32_t)(EBX));
  /* 10303b54 push ecx */
  push32((uint32_t)(ECX));
  /* 10303b55 call edi */
  call_ind((uint32_t)(EDI), 0x10303b57u);
  /* 10303b57 mov ecx, dword ptr [0x1030693c] */
  ECX = (r32((uint32_t)(0x1030693c)));
  /* 10303b5d mov eax, dword ptr [0x10306944] */
  EAX = (r32((uint32_t)(0x10306944)));
  /* 10303b62 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10303b67 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10303b69 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10303b6c mov eax, dword ptr [0x10306944] */
  EAX = (r32((uint32_t)(0x10306944)));
  /* 10303b71 mov ecx, dword ptr [0x1030693c] */
  ECX = (r32((uint32_t)(0x1030693c)));
  /* 10303b77 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10303b7a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10303b82 mov eax, dword ptr [0x10306944] */
  EAX = (r32((uint32_t)(0x10306944)));
  /* 10303b87 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10303b8a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10303b8d mov eax, dword ptr [0x10306944] */
  EAX = (r32((uint32_t)(0x10306944)));
  /* 10303b92 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10303b95 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10303b99 jne 0x10303ba4 */
  if (!C.zf) goto L_10303ba4;
  /* 10303b9b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10303b9f mov eax, dword ptr [0x10306944] */
  EAX = (r32((uint32_t)(0x10306944)));
L_10303ba4:;
  /* 10303ba4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303ba8 jne 0x10303c16 */
  if (!C.zf) goto L_10303c16;
  /* 10303baa push ebx */
  push32((uint32_t)(EBX));
  /* 10303bab push 0 */
  push32((uint32_t)(0x0u));
  /* 10303bad push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10303bb0 call edi */
  call_ind((uint32_t)(EDI), 0x10303bb2u);
  /* 10303bb2 mov eax, dword ptr [0x10306944] */
  EAX = (r32((uint32_t)(0x10306944)));
  /* 10303bb7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10303bba push 0 */
  push32((uint32_t)(0x0u));
  /* 10303bbc push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10303bc2 call dword ptr [0x1030504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030504c))), 0x10303bc8u);
  /* 10303bc8 mov eax, dword ptr [0x10306948] */
  EAX = (r32((uint32_t)(0x10306948)));
  /* 10303bcd mov edx, dword ptr [0x1030694c] */
  EDX = (r32((uint32_t)(0x1030694c)));
  /* 10303bd3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10303bd6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10303bd9 mov ecx, eax */
  ECX = (EAX);
  /* 10303bdb mov eax, dword ptr [0x10306944] */
  EAX = (r32((uint32_t)(0x10306944)));
  /* 10303be0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303be2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10303be6 push ecx */
  push32((uint32_t)(ECX));
  /* 10303be7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10303bea push ecx */
  push32((uint32_t)(ECX));
  /* 10303beb push eax */
  push32((uint32_t)(EAX));
  /* 10303bec call 0x10304680 */
  push32(0x10303bf1u); f_10304680();
  /* 10303bf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10303bf7 dec dword ptr [0x10306948] */
  { uint32_t _r=(r32((uint32_t)(0x10306948)))-1; w32((uint32_t)(0x10306948), (_r)); fl_dec(_r,32); }
  /* 10303bfd cmp eax, dword ptr [0x10306944] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10306944))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303c03 jbe 0x10303c08 */
  if ((C.cf||C.zf)) goto L_10303c08;
  /* 10303c05 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10303c08:;
  /* 10303c08 mov ecx, dword ptr [0x1030694c] */
  ECX = (r32((uint32_t)(0x1030694c)));
  /* 10303c0e mov dword ptr [0x10306940], ecx */
  w32((uint32_t)(0x10306940), (ECX));
  /* 10303c14 jmp 0x10303c19 */
  goto L_10303c19;
L_10303c16:;
  /* 10303c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10303c19:;
  /* 10303c19 mov dword ptr [0x10306944], eax */
  w32((uint32_t)(0x10306944), (EAX));
  /* 10303c1e mov dword ptr [0x1030693c], esi */
  w32((uint32_t)(0x1030693c), (ESI));
L_10303c24:;
  /* 10303c24 pop edi */
  EDI = (pop32());
  /* 10303c25 pop esi */
  ESI = (pop32());
  /* 10303c26 pop ebx */
  EBX = (pop32());
  /* 10303c27 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10303c28 ret  */
  ESPCHK(0x103038feu, _esp0);
  ESP += 4; return;
}

/* FUN_10003c29 @ 0x10303c29 (777 bytes, 275 insns) */
void f_10303c29(void) {
  FTRACE(0x10303c29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303c29 push ebp */
  push32((uint32_t)(EBP));
  /* 10303c2a mov ebp, esp */
  EBP = (ESP);
  /* 10303c2c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303c2f mov eax, dword ptr [0x10306948] */
  EAX = (r32((uint32_t)(0x10306948)));
  /* 10303c34 mov edx, dword ptr [0x1030694c] */
  EDX = (r32((uint32_t)(0x1030694c)));
  /* 10303c3a push ebx */
  push32((uint32_t)(EBX));
  /* 10303c3b push esi */
  push32((uint32_t)(ESI));
  /* 10303c3c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10303c3f push edi */
  push32((uint32_t)(EDI));
  /* 10303c40 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10303c43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303c46 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10303c49 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10303c4c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10303c4f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10303c52 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10303c55 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10303c56 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303c59 jge 0x10303c69 */
  if ((C.sf==C.of)) goto L_10303c69;
  /* 10303c5b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10303c5e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10303c60 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10303c64 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10303c67 jmp 0x10303c79 */
  goto L_10303c79;
L_10303c69:;
  /* 10303c69 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303c6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10303c6f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10303c71 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10303c73 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10303c76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10303c79:;
  /* 10303c79 mov eax, dword ptr [0x10306940] */
  EAX = (r32((uint32_t)(0x10306940)));
  /* 10303c7e mov ebx, eax */
  EBX = (EAX);
  /* 10303c80 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303c82 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10303c85 jae 0x10303ca0 */
  if (!C.cf) goto L_10303ca0;
L_10303c87:;
  /* 10303c87 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10303c8a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10303c8c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10303c8f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10303c91 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10303c93 jne 0x10303ca0 */
  if (!C.zf) goto L_10303ca0;
  /* 10303c95 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303c98 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303c9b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10303c9e jb 0x10303c87 */
  if (C.cf) goto L_10303c87;
L_10303ca0:;
  /* 10303ca0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303ca3 jne 0x10303d1e */
  if (!C.zf) goto L_10303d1e;
  /* 10303ca5 mov ebx, edx */
  EBX = (EDX);
L_10303ca7:;
  /* 10303ca7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303ca9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10303cac jae 0x10303cc3 */
  if (!C.cf) goto L_10303cc3;
  /* 10303cae mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10303cb1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10303cb3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10303cb6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10303cb8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10303cba jne 0x10303cc1 */
  if (!C.zf) goto L_10303cc1;
  /* 10303cbc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303cbf jmp 0x10303ca7 */
  goto L_10303ca7;
L_10303cc1:;
  /* 10303cc1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10303cc3:;
  /* 10303cc3 jne 0x10303d1e */
  if (!C.zf) goto L_10303d1e;
L_10303cc5:;
  /* 10303cc5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303cc8 jae 0x10303cdb */
  if (!C.cf) goto L_10303cdb;
  /* 10303cca cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303cce jne 0x10303cd8 */
  if (!C.zf) goto L_10303cd8;
  /* 10303cd0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303cd3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10303cd6 jmp 0x10303cc5 */
  goto L_10303cc5;
L_10303cd8:;
  /* 10303cd8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10303cdb:;
  /* 10303cdb jne 0x10303d03 */
  if (!C.zf) goto L_10303d03;
  /* 10303cdd mov ebx, edx */
  EBX = (EDX);
L_10303cdf:;
  /* 10303cdf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303ce1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10303ce4 jae 0x10303cf3 */
  if (!C.cf) goto L_10303cf3;
  /* 10303ce6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303cea jne 0x10303cf1 */
  if (!C.zf) goto L_10303cf1;
  /* 10303cec add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303cef jmp 0x10303cdf */
  goto L_10303cdf;
L_10303cf1:;
  /* 10303cf1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10303cf3:;
  /* 10303cf3 jne 0x10303d03 */
  if (!C.zf) goto L_10303d03;
  /* 10303cf5 call 0x10303f32 */
  push32(0x10303cfau); f_10303f32();
  /* 10303cfa mov ebx, eax */
  EBX = (EAX);
  /* 10303cfc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10303cfe mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10303d01 je 0x10303d17 */
  if (C.zf) goto L_10303d17;
L_10303d03:;
  /* 10303d03 push ebx */
  push32((uint32_t)(EBX));
  /* 10303d04 call 0x10303fe3 */
  push32(0x10303d09u); f_10303fe3();
  /* 10303d09 pop ecx */
  ECX = (pop32());
  /* 10303d0a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10303d0d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10303d0f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10303d12 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303d15 jne 0x10303d1e */
  if (!C.zf) goto L_10303d1e;
L_10303d17:;
  /* 10303d17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10303d19 jmp 0x10303f2d */
  goto L_10303f2d;
L_10303d1e:;
  /* 10303d1e mov dword ptr [0x10306940], ebx */
  w32((uint32_t)(0x10306940), (EBX));
  /* 10303d24 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10303d27 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10303d29 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303d2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10303d2f je 0x10303d45 */
  if (C.zf) goto L_10303d45;
  /* 10303d31 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10303d38 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10303d3c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10303d3f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10303d41 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10303d43 jne 0x10303d7c */
  if (!C.zf) goto L_10303d7c;
L_10303d45:;
  /* 10303d45 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10303d4b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10303d4e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10303d51 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10303d54 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10303d58 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10303d5b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10303d5d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10303d60 jne 0x10303d79 */
  if (!C.zf) goto L_10303d79;
L_10303d62:;
  /* 10303d62 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10303d68 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10303d6b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10303d6e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303d71 mov edi, esi */
  EDI = (ESI);
  /* 10303d73 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10303d75 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10303d77 je 0x10303d62 */
  if (C.zf) goto L_10303d62;
L_10303d79:;
  /* 10303d79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10303d7c:;
  /* 10303d7c mov ecx, edx */
  ECX = (EDX);
  /* 10303d7e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10303d80 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10303d86 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10303d8d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10303d90 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10303d94 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10303d96 jne 0x10303da5 */
  if (!C.zf) goto L_10303da5;
  /* 10303d98 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10303d9f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10303da1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10303da4 pop edi */
  EDI = (pop32());
L_10303da5:;
  /* 10303da5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10303da7 jl 0x10303dae */
  if ((C.sf!=C.of)) goto L_10303dae;
  /* 10303da9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10303dab inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10303dac jmp 0x10303da5 */
  goto L_10303da5;
L_10303dae:;
  /* 10303dae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10303db1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10303db5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10303db7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10303dba mov esi, ecx */
  ESI = (ECX);
  /* 10303dbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10303dbf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10303dc2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10303dc3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303dc6 jle 0x10303dcb */
  if ((C.zf||C.sf!=C.of)) goto L_10303dcb;
  /* 10303dc8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10303dca pop esi */
  ESI = (pop32());
L_10303dcb:;
  /* 10303dcb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303dcd je 0x10303ee0 */
  if (C.zf) goto L_10303ee0;
  /* 10303dd3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10303dd6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303dd9 jne 0x10303e3c */
  if (!C.zf) goto L_10303e3c;
  /* 10303ddb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303dde jge 0x10303e0b */
  if ((C.sf==C.of)) goto L_10303e0b;
  /* 10303de0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10303de5 mov ecx, edi */
  ECX = (EDI);
  /* 10303de7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10303de9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10303dec lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10303df0 not ebx */
  EBX = (~(EBX));
  /* 10303df2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10303df5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10303df9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10303dfd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10303dff jne 0x10303e39 */
  if (!C.zf) goto L_10303e39;
  /* 10303e01 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303e04 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10303e07 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10303e09 jmp 0x10303e3c */
  goto L_10303e3c;
L_10303e0b:;
  /* 10303e0b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10303e0e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10303e13 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10303e15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10303e18 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10303e1c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10303e23 not ebx */
  EBX = (~(EBX));
  /* 10303e25 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10303e27 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10303e29 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10303e2c jne 0x10303e39 */
  if (!C.zf) goto L_10303e39;
  /* 10303e2e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303e31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10303e34 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10303e37 jmp 0x10303e3c */
  goto L_10303e3c;
L_10303e39:;
  /* 10303e39 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10303e3c:;
  /* 10303e3c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10303e3f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10303e42 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303e46 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10303e49 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10303e4c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10303e4f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10303e52 je 0x10303eec */
  if (C.zf) goto L_10303eec;
  /* 10303e58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10303e5b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10303e5f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10303e62 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10303e65 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10303e68 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10303e6b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10303e6e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10303e71 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10303e74 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303e77 jne 0x10303edd */
  if (!C.zf) goto L_10303edd;
  /* 10303e79 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10303e7d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303e80 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10303e83 jge 0x10303eae */
  if ((C.sf==C.of)) goto L_10303eae;
  /* 10303e85 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10303e87 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10303e8b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10303e8f jne 0x10303e9c */
  if (!C.zf) goto L_10303e9c;
  /* 10303e91 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10303e96 mov ecx, esi */
  ECX = (ESI);
  /* 10303e98 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10303e9a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10303e9c:;
  /* 10303e9c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10303ea1 mov ecx, esi */
  ECX = (ESI);
  /* 10303ea3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10303ea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10303ea8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10303eac jmp 0x10303edd */
  goto L_10303edd;
L_10303eae:;
  /* 10303eae inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10303eb0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10303eb4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10303eb8 jne 0x10303ec7 */
  if (!C.zf) goto L_10303ec7;
  /* 10303eba lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10303ebd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10303ec2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10303ec4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10303ec7:;
  /* 10303ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10303eca lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10303ed1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10303ed4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10303ed9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10303edb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10303edd:;
  /* 10303edd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10303ee0:;
  /* 10303ee0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10303ee2 je 0x10303eef */
  if (C.zf) goto L_10303eef;
  /* 10303ee4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10303ee6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10303eea jmp 0x10303eef */
  goto L_10303eef;
L_10303eec:;
  /* 10303eec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10303eef:;
  /* 10303eef mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10303ef2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10303ef4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10303ef7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10303ef9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10303efd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10303f00 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10303f02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10303f04 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10303f07 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10303f09 jne 0x10303f25 */
  if (!C.zf) goto L_10303f25;
  /* 10303f0b cmp ebx, dword ptr [0x10306944] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10306944))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303f11 jne 0x10303f25 */
  if (!C.zf) goto L_10303f25;
  /* 10303f13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10303f16 cmp ecx, dword ptr [0x1030693c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1030693c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303f1c jne 0x10303f25 */
  if (!C.zf) goto L_10303f25;
  /* 10303f1e and dword ptr [0x10306944], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10306944)))&(0x0u); w32((uint32_t)(0x10306944), (_r)); fl_logic(_r,32); }
L_10303f25:;
  /* 10303f25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10303f28 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10303f2a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10303f2d:;
  /* 10303f2d pop edi */
  EDI = (pop32());
  /* 10303f2e pop esi */
  ESI = (pop32());
  /* 10303f2f pop ebx */
  EBX = (pop32());
  /* 10303f30 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10303f31 ret  */
  ESPCHK(0x10303c29u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f32 @ 0x10303f32 (177 bytes, 53 insns) */
void f_10303f32(void) {
  FTRACE(0x10303f32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303f32 mov eax, dword ptr [0x10306948] */
  EAX = (r32((uint32_t)(0x10306948)));
  /* 10303f37 mov ecx, dword ptr [0x10306938] */
  ECX = (r32((uint32_t)(0x10306938)));
  /* 10303f3d push esi */
  push32((uint32_t)(ESI));
  /* 10303f3e push edi */
  push32((uint32_t)(EDI));
  /* 10303f3f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10303f41 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303f43 jne 0x10303f75 */
  if (!C.zf) goto L_10303f75;
  /* 10303f45 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10303f49 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10303f4c push eax */
  push32((uint32_t)(EAX));
  /* 10303f4d push dword ptr [0x1030694c] */
  push32((uint32_t)(r32((uint32_t)(0x1030694c))));
  /* 10303f53 push edi */
  push32((uint32_t)(EDI));
  /* 10303f54 push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10303f5a call dword ptr [0x10305028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305028))), 0x10303f60u);
  /* 10303f60 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303f62 je 0x10303fc5 */
  if (C.zf) goto L_10303fc5;
  /* 10303f64 add dword ptr [0x10306938], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10306938))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10306938), (_r)); fl_add(_a,_b,_r,32); }
  /* 10303f6b mov dword ptr [0x1030694c], eax */
  w32((uint32_t)(0x1030694c), (EAX));
  /* 10303f70 mov eax, dword ptr [0x10306948] */
  EAX = (r32((uint32_t)(0x10306948)));
L_10303f75:;
  /* 10303f75 mov ecx, dword ptr [0x1030694c] */
  ECX = (r32((uint32_t)(0x1030694c)));
  /* 10303f7b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10303f80 push 8 */
  push32((uint32_t)(0x8u));
  /* 10303f82 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10303f85 push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10303f8b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10303f8e call dword ptr [0x10305044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305044))), 0x10303f94u);
  /* 10303f94 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303f96 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10303f99 je 0x10303fc5 */
  if (C.zf) goto L_10303fc5;
  /* 10303f9b push 4 */
  push32((uint32_t)(0x4u));
  /* 10303f9d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10303fa2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10303fa7 push edi */
  push32((uint32_t)(EDI));
  /* 10303fa8 call dword ptr [0x1030502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030502c))), 0x10303faeu);
  /* 10303fae cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10303fb0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10303fb3 jne 0x10303fc9 */
  if (!C.zf) goto L_10303fc9;
  /* 10303fb5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10303fb8 push edi */
  push32((uint32_t)(EDI));
  /* 10303fb9 push dword ptr [0x10306b88] */
  push32((uint32_t)(r32((uint32_t)(0x10306b88))));
  /* 10303fbf call dword ptr [0x1030504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030504c))), 0x10303fc5u);
L_10303fc5:;
  /* 10303fc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10303fc7 jmp 0x10303fe0 */
  goto L_10303fe0;
L_10303fc9:;
  /* 10303fc9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10303fcd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10303fcf mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10303fd2 inc dword ptr [0x10306948] */
  { uint32_t _r=(r32((uint32_t)(0x10306948)))+1; w32((uint32_t)(0x10306948), (_r)); fl_inc(_r,32); }
  /* 10303fd8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10303fdb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10303fde mov eax, esi */
  EAX = (ESI);
L_10303fe0:;
  /* 10303fe0 pop edi */
  EDI = (pop32());
  /* 10303fe1 pop esi */
  ESI = (pop32());
  /* 10303fe2 ret  */
  ESPCHK(0x10303f32u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe3 @ 0x10303fe3 (251 bytes, 85 insns) */
void f_10303fe3(void) {
  FTRACE(0x10303fe3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10303fe3 push ebp */
  push32((uint32_t)(EBP));
  /* 10303fe4 mov ebp, esp */
  EBP = (ESP);
  /* 10303fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10303fe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10303fea push ebx */
  push32((uint32_t)(EBX));
  /* 10303feb push esi */
  push32((uint32_t)(ESI));
  /* 10303fec push edi */
  push32((uint32_t)(EDI));
  /* 10303fed mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10303ff0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10303ff3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10303ff5:;
  /* 10303ff5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10303ff7 jl 0x10303ffe */
  if ((C.sf!=C.of)) goto L_10303ffe;
  /* 10303ff9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10303ffb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10303ffc jmp 0x10303ff5 */
  goto L_10303ff5;
L_10303ffe:;
  /* 10303ffe mov eax, ebx */
  EAX = (EBX);
  /* 10304000 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10304002 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10304008 pop edx */
  EDX = (pop32());
  /* 10304009 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10304010 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10304013:;
  /* 10304013 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10304016 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10304019 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030401c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1030401d jne 0x10304013 */
  if (!C.zf) goto L_10304013;
  /* 1030401f mov edi, ebx */
  EDI = (EBX);
  /* 10304021 push 4 */
  push32((uint32_t)(0x4u));
  /* 10304023 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10304026 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10304029 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1030402e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10304033 push edi */
  push32((uint32_t)(EDI));
  /* 10304034 call dword ptr [0x1030502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030502c))), 0x1030403au);
  /* 1030403a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030403c jne 0x10304046 */
  if (!C.zf) goto L_10304046;
  /* 1030403e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10304041 jmp 0x103040d9 */
  goto L_103040d9;
L_10304046:;
  /* 10304046 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1030404c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030404e ja 0x1030408c */
  if ((!C.cf&&!C.zf)) goto L_1030408c;
  /* 10304050 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10304053:;
  /* 10304053 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10304057 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1030405e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10304064 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1030406b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1030406d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10304073 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10304076 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10304080 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10304085 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10304088 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030408a jbe 0x10304053 */
  if ((C.cf||C.zf)) goto L_10304053;
L_1030408c:;
  /* 1030408c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1030408f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10304092 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10304097 push 1 */
  push32((uint32_t)(0x1u));
  /* 10304099 pop edi */
  EDI = (pop32());
  /* 1030409a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1030409d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103040a0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 103040a3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103040a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103040a9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 103040ae mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 103040b5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 103040b8 mov cl, al */
  CL = (AL);
  /* 103040ba inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 103040bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103040be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103040c1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 103040c4 jne 0x103040c9 */
  if (!C.zf) goto L_103040c9;
  /* 103040c6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_103040c9:;
  /* 103040c9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103040ce mov ecx, ebx */
  ECX = (EBX);
  /* 103040d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103040d2 not edx */
  EDX = (~(EDX));
  /* 103040d4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 103040d7 mov eax, ebx */
  EAX = (EBX);
L_103040d9:;
  /* 103040d9 pop edi */
  EDI = (pop32());
  /* 103040da pop esi */
  ESI = (pop32());
  /* 103040db pop ebx */
  EBX = (pop32());
  /* 103040dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103040dd ret  */
  ESPCHK(0x10303fe3u, _esp0);
  ESP += 4; return;
}

/* FUN_100040de @ 0x103040de (137 bytes, 50 insns) */
void f_103040de(void) {
  FTRACE(0x103040deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103040de push ebx */
  push32((uint32_t)(EBX));
  /* 103040df xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103040e1 cmp dword ptr [0x103068fc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x103068fc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103040e7 push esi */
  push32((uint32_t)(ESI));
  /* 103040e8 push edi */
  push32((uint32_t)(EDI));
  /* 103040e9 jne 0x1030412d */
  if (!C.zf) goto L_1030412d;
  /* 103040eb push 0x10305470 */
  push32((uint32_t)(0x10305470u));
  /* 103040f0 call dword ptr [0x1030501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030501c))), 0x103040f6u);
  /* 103040f6 mov edi, eax */
  EDI = (EAX);
  /* 103040f8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103040fa je 0x10304163 */
  if (C.zf) goto L_10304163;
  /* 103040fc mov esi, dword ptr [0x10305020] */
  ESI = (r32((uint32_t)(0x10305020)));
  /* 10304102 push 0x10305464 */
  push32((uint32_t)(0x10305464u));
  /* 10304107 push edi */
  push32((uint32_t)(EDI));
  /* 10304108 call esi */
  call_ind((uint32_t)(ESI), 0x1030410au);
  /* 1030410a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030410c mov dword ptr [0x103068fc], eax */
  w32((uint32_t)(0x103068fc), (EAX));
  /* 10304111 je 0x10304163 */
  if (C.zf) goto L_10304163;
  /* 10304113 push 0x10305454 */
  push32((uint32_t)(0x10305454u));
  /* 10304118 push edi */
  push32((uint32_t)(EDI));
  /* 10304119 call esi */
  call_ind((uint32_t)(ESI), 0x1030411bu);
  /* 1030411b push 0x10305440 */
  push32((uint32_t)(0x10305440u));
  /* 10304120 push edi */
  push32((uint32_t)(EDI));
  /* 10304121 mov dword ptr [0x10306900], eax */
  w32((uint32_t)(0x10306900), (EAX));
  /* 10304126 call esi */
  call_ind((uint32_t)(ESI), 0x10304128u);
  /* 10304128 mov dword ptr [0x10306904], eax */
  w32((uint32_t)(0x10306904), (EAX));
L_1030412d:;
  /* 1030412d mov eax, dword ptr [0x10306900] */
  EAX = (r32((uint32_t)(0x10306900)));
  /* 10304132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10304134 je 0x1030414c */
  if (C.zf) goto L_1030414c;
  /* 10304136 call eax */
  call_ind((uint32_t)(EAX), 0x10304138u);
  /* 10304138 mov ebx, eax */
  EBX = (EAX);
  /* 1030413a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1030413c je 0x1030414c */
  if (C.zf) goto L_1030414c;
  /* 1030413e mov eax, dword ptr [0x10306904] */
  EAX = (r32((uint32_t)(0x10306904)));
  /* 10304143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10304145 je 0x1030414c */
  if (C.zf) goto L_1030414c;
  /* 10304147 push ebx */
  push32((uint32_t)(EBX));
  /* 10304148 call eax */
  call_ind((uint32_t)(EAX), 0x1030414au);
  /* 1030414a mov ebx, eax */
  EBX = (EAX);
L_1030414c:;
  /* 1030414c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10304150 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10304154 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10304158 push ebx */
  push32((uint32_t)(EBX));
  /* 10304159 call dword ptr [0x103068fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103068fc))), 0x1030415fu);
L_1030415f:;
  /* 1030415f pop edi */
  EDI = (pop32());
  /* 10304160 pop esi */
  ESI = (pop32());
  /* 10304161 pop ebx */
  EBX = (pop32());
  /* 10304162 ret  */
  ESPCHK(0x103040deu, _esp0);
  ESP += 4; return;
L_10304163:;
  /* 10304163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10304165 jmp 0x1030415f */
  goto L_1030415f;
}

/* _strncpy @ 0x10304170 (254 bytes, 109 insns) */
void f_10304170(void) {
  FTRACE(0x10304170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304170 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10304174 push edi */
  push32((uint32_t)(EDI));
  /* 10304175 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10304177 je 0x103041f3 */
  if (C.zf) goto L_103041f3;
  /* 10304179 push esi */
  push32((uint32_t)(ESI));
  /* 1030417a push ebx */
  push32((uint32_t)(EBX));
  /* 1030417b mov ebx, ecx */
  EBX = (ECX);
  /* 1030417d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10304181 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10304187 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1030418b jne 0x10304194 */
  if (!C.zf) goto L_10304194;
  /* 1030418d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10304190 jne 0x10304201 */
  if (!C.zf) goto L_10304201;
  /* 10304192 jmp 0x103041b5 */
  goto L_103041b5;
L_10304194:;
  /* 10304194 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10304196 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10304197 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10304199 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1030419a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1030419b je 0x103041c2 */
  if (C.zf) goto L_103041c2;
  /* 1030419d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1030419f je 0x103041ca */
  if (C.zf) goto L_103041ca;
  /* 103041a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 103041a7 jne 0x10304194 */
  if (!C.zf) goto L_10304194;
  /* 103041a9 mov ebx, ecx */
  EBX = (ECX);
  /* 103041ab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103041ae jne 0x10304201 */
  if (!C.zf) goto L_10304201;
L_103041b0:;
  /* 103041b0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 103041b3 je 0x103041c2 */
  if (C.zf) goto L_103041c2;
L_103041b5:;
  /* 103041b5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103041b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103041b8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103041ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103041bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103041bd je 0x103041ee */
  if (C.zf) goto L_103041ee;
  /* 103041bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103041c0 jne 0x103041b5 */
  if (!C.zf) goto L_103041b5;
L_103041c2:;
  /* 103041c2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103041c6 pop ebx */
  EBX = (pop32());
  /* 103041c7 pop esi */
  ESI = (pop32());
  /* 103041c8 pop edi */
  EDI = (pop32());
  /* 103041c9 ret  */
  ESPCHK(0x10304170u, _esp0);
  ESP += 4; return;
L_103041ca:;
  /* 103041ca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103041d0 je 0x103041e4 */
  if (C.zf) goto L_103041e4;
L_103041d2:;
  /* 103041d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103041d4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103041d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103041d6 je 0x10304266 */
  if (C.zf) goto L_10304266;
  /* 103041dc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103041e2 jne 0x103041d2 */
  if (!C.zf) goto L_103041d2;
L_103041e4:;
  /* 103041e4 mov ebx, ecx */
  EBX = (ECX);
  /* 103041e6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103041e9 jne 0x10304257 */
  if (!C.zf) goto L_10304257;
L_103041eb:;
  /* 103041eb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103041ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_103041ee:;
  /* 103041ee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103041ef jne 0x103041eb */
  if (!C.zf) goto L_103041eb;
  /* 103041f1 pop ebx */
  EBX = (pop32());
  /* 103041f2 pop esi */
  ESI = (pop32());
L_103041f3:;
  /* 103041f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103041f7 pop edi */
  EDI = (pop32());
  /* 103041f8 ret  */
  ESPCHK(0x10304170u, _esp0);
  ESP += 4; return;
L_103041f9:;
  /* 103041f9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103041fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103041fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103041ff je 0x103041b0 */
  if (C.zf) goto L_103041b0;
L_10304201:;
  /* 10304201 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10304206 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10304208 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030420a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1030420d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1030420f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10304211 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10304214 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10304219 je 0x103041f9 */
  if (C.zf) goto L_103041f9;
  /* 1030421b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1030421d je 0x1030424b */
  if (C.zf) goto L_1030424b;
  /* 1030421f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10304221 je 0x10304241 */
  if (C.zf) goto L_10304241;
  /* 10304223 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10304229 je 0x10304237 */
  if (C.zf) goto L_10304237;
  /* 1030422b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10304231 jne 0x103041f9 */
  if (!C.zf) goto L_103041f9;
  /* 10304233 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10304235 jmp 0x1030424f */
  goto L_1030424f;
L_10304237:;
  /* 10304237 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1030423d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1030423f jmp 0x1030424f */
  goto L_1030424f;
L_10304241:;
  /* 10304241 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10304247 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10304249 jmp 0x1030424f */
  goto L_1030424f;
L_1030424b:;
  /* 1030424b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1030424d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1030424f:;
  /* 1030424f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10304252 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10304254 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10304255 je 0x10304261 */
  if (C.zf) goto L_10304261;
L_10304257:;
  /* 10304257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10304259:;
  /* 10304259 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1030425b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1030425e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1030425f jne 0x10304259 */
  if (!C.zf) goto L_10304259;
L_10304261:;
  /* 10304261 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10304264 jne 0x103041eb */
  if (!C.zf) goto L_103041eb;
L_10304266:;
  /* 10304266 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1030426a pop ebx */
  EBX = (pop32());
  /* 1030426b pop esi */
  ESI = (pop32());
  /* 1030426c pop edi */
  EDI = (pop32());
  /* 1030426d ret  */
  ESPCHK(0x10304170u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10304270 (88 bytes, 40 insns) */
void f_10304270(void) {
  FTRACE(0x10304270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304270 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10304274 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10304278 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1030427a je 0x103042c3 */
  if (C.zf) goto L_103042c3;
  /* 1030427c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1030427e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10304282 push edi */
  push32((uint32_t)(EDI));
  /* 10304283 mov edi, ecx */
  EDI = (ECX);
  /* 10304285 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304288 jb 0x103042b7 */
  if (C.cf) goto L_103042b7;
  /* 1030428a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1030428c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1030428f je 0x10304299 */
  if (C.zf) goto L_10304299;
  /* 10304291 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10304293:;
  /* 10304293 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10304295 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10304296 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10304297 jne 0x10304293 */
  if (!C.zf) goto L_10304293;
L_10304299:;
  /* 10304299 mov ecx, eax */
  ECX = (EAX);
  /* 1030429b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1030429e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103042a0 mov ecx, eax */
  ECX = (EAX);
  /* 103042a2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103042a5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103042a7 mov ecx, edx */
  ECX = (EDX);
  /* 103042a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103042ac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103042af je 0x103042b7 */
  if (C.zf) goto L_103042b7;
  /* 103042b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103042b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103042b5 je 0x103042bd */
  if (C.zf) goto L_103042bd;
L_103042b7:;
  /* 103042b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103042b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103042ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 103042bb jne 0x103042b7 */
  if (!C.zf) goto L_103042b7;
L_103042bd:;
  /* 103042bd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 103042c1 pop edi */
  EDI = (pop32());
  /* 103042c2 ret  */
  ESPCHK(0x10304270u, _esp0);
  ESP += 4; return;
L_103042c3:;
  /* 103042c3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 103042c7 ret  */
  ESPCHK(0x10304270u, _esp0);
  ESP += 4; return;
}

/* FUN_100042c8 @ 0x103042c8 (27 bytes, 13 insns) */
void f_103042c8(void) {
  FTRACE(0x103042c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103042c8 mov eax, dword ptr [0x10306908] */
  EAX = (r32((uint32_t)(0x10306908)));
  /* 103042cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103042cf je 0x103042e0 */
  if (C.zf) goto L_103042e0;
  /* 103042d1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 103042d5 call eax */
  call_ind((uint32_t)(EAX), 0x103042d7u);
  /* 103042d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103042d9 pop ecx */
  ECX = (pop32());
  /* 103042da je 0x103042e0 */
  if (C.zf) goto L_103042e0;
  /* 103042dc push 1 */
  push32((uint32_t)(0x1u));
  /* 103042de pop eax */
  EAX = (pop32());
  /* 103042df ret  */
  ESPCHK(0x103042c8u, _esp0);
  ESP += 4; return;
L_103042e0:;
  /* 103042e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103042e2 ret  */
  ESPCHK(0x103042c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e3 @ 0x103042e3 (511 bytes, 193 insns) */
void f_103042e3(void) {
  FTRACE(0x103042e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103042e3 push ebp */
  push32((uint32_t)(EBP));
  /* 103042e4 mov ebp, esp */
  EBP = (ESP);
  /* 103042e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103042e8 push 0x10305488 */
  push32((uint32_t)(0x10305488u));
  /* 103042ed push 0x10304ab0 */
  push32((uint32_t)(0x10304ab0u));
  /* 103042f2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 103042f8 push eax */
  push32((uint32_t)(EAX));
  /* 103042f9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10304300 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10304303 push ebx */
  push32((uint32_t)(EBX));
  /* 10304304 push esi */
  push32((uint32_t)(ESI));
  /* 10304305 push edi */
  push32((uint32_t)(EDI));
  /* 10304306 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10304309 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1030430b cmp dword ptr [0x10306930], edi */
  { uint32_t _a=(r32((uint32_t)(0x10306930))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304311 jne 0x10304359 */
  if (!C.zf) goto L_10304359;
  /* 10304313 push edi */
  push32((uint32_t)(EDI));
  /* 10304314 push edi */
  push32((uint32_t)(EDI));
  /* 10304315 push 1 */
  push32((uint32_t)(0x1u));
  /* 10304317 pop ebx */
  EBX = (pop32());
  /* 10304318 push ebx */
  push32((uint32_t)(EBX));
  /* 10304319 push 0x10305480 */
  push32((uint32_t)(0x10305480u));
  /* 1030431e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10304323 push esi */
  push32((uint32_t)(ESI));
  /* 10304324 push edi */
  push32((uint32_t)(EDI));
  /* 10304325 call dword ptr [0x10305010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305010))), 0x1030432bu);
  /* 1030432b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030432d je 0x10304337 */
  if (C.zf) goto L_10304337;
  /* 1030432f mov dword ptr [0x10306930], ebx */
  w32((uint32_t)(0x10306930), (EBX));
  /* 10304335 jmp 0x10304359 */
  goto L_10304359;
L_10304337:;
  /* 10304337 push edi */
  push32((uint32_t)(EDI));
  /* 10304338 push edi */
  push32((uint32_t)(EDI));
  /* 10304339 push ebx */
  push32((uint32_t)(EBX));
  /* 1030433a push 0x1030547c */
  push32((uint32_t)(0x1030547cu));
  /* 1030433f push esi */
  push32((uint32_t)(ESI));
  /* 10304340 push edi */
  push32((uint32_t)(EDI));
  /* 10304341 call dword ptr [0x10305014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305014))), 0x10304347u);
  /* 10304347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10304349 je 0x10304471 */
  if (C.zf) goto L_10304471;
  /* 1030434f mov dword ptr [0x10306930], 2 */
  w32((uint32_t)(0x10306930), (0x2u));
L_10304359:;
  /* 10304359 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030435c jle 0x1030436e */
  if ((C.zf||C.sf!=C.of)) goto L_1030436e;
  /* 1030435e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10304361 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10304364 call 0x10304507 */
  push32(0x10304369u); f_10304507();
  /* 10304369 pop ecx */
  ECX = (pop32());
  /* 1030436a pop ecx */
  ECX = (pop32());
  /* 1030436b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1030436e:;
  /* 1030436e mov eax, dword ptr [0x10306930] */
  EAX = (r32((uint32_t)(0x10306930)));
  /* 10304373 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304376 jne 0x10304395 */
  if (!C.zf) goto L_10304395;
  /* 10304378 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1030437b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1030437e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10304381 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10304384 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10304387 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1030438a call dword ptr [0x10305014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305014))), 0x10304390u);
  /* 10304390 jmp 0x10304473 */
  goto L_10304473;
L_10304395:;
  /* 10304395 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304398 jne 0x10304471 */
  if (!C.zf) goto L_10304471;
  /* 1030439e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103043a1 jne 0x103043ab */
  if (!C.zf) goto L_103043ab;
  /* 103043a3 mov eax, dword ptr [0x10306928] */
  EAX = (r32((uint32_t)(0x10306928)));
  /* 103043a8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_103043ab:;
  /* 103043ab push edi */
  push32((uint32_t)(EDI));
  /* 103043ac push edi */
  push32((uint32_t)(EDI));
  /* 103043ad push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 103043b0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103043b3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 103043b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103043b8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103043ba and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103043bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103043be push eax */
  push32((uint32_t)(EAX));
  /* 103043bf push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 103043c2 call dword ptr [0x10305024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305024))), 0x103043c8u);
  /* 103043c8 mov ebx, eax */
  EBX = (EAX);
  /* 103043ca mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 103043cd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103043cf je 0x10304471 */
  if (C.zf) goto L_10304471;
  /* 103043d5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 103043d8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 103043db add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103043de and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103043e0 call 0x10304b90 */
  push32(0x103043e5u); f_10304b90();
  /* 103043e5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103043e8 mov eax, esp */
  EAX = (ESP);
  /* 103043ea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 103043ed or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103043f1 jmp 0x10304406 */
  goto L_10304406;
  /* 103043f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103043f5 pop eax */
  EAX = (pop32());
  /* 103043f6 ret  */
  ESPCHK(0x103042e3u, _esp0);
  ESP += 4; return;
  /* 103043f7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103043fa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103043fc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 103043ff or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10304403 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10304406:;
  /* 10304406 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304409 je 0x10304471 */
  if (C.zf) goto L_10304471;
  /* 1030440b push ebx */
  push32((uint32_t)(EBX));
  /* 1030440c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1030440f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10304412 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10304415 push 1 */
  push32((uint32_t)(0x1u));
  /* 10304417 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1030441a call dword ptr [0x10305024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305024))), 0x10304420u);
  /* 10304420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10304422 je 0x10304471 */
  if (C.zf) goto L_10304471;
  /* 10304424 push edi */
  push32((uint32_t)(EDI));
  /* 10304425 push edi */
  push32((uint32_t)(EDI));
  /* 10304426 push ebx */
  push32((uint32_t)(EBX));
  /* 10304427 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1030442a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1030442d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10304430 call dword ptr [0x10305010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305010))), 0x10304436u);
  /* 10304436 mov esi, eax */
  ESI = (EAX);
  /* 10304438 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1030443b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030443d je 0x10304471 */
  if (C.zf) goto L_10304471;
  /* 1030443f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10304443 je 0x10304485 */
  if (C.zf) goto L_10304485;
  /* 10304445 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304448 je 0x10304500 */
  if (C.zf) goto L_10304500;
  /* 1030444e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304451 jg 0x10304471 */
  if ((!C.zf&&C.sf==C.of)) goto L_10304471;
  /* 10304453 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10304456 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10304459 push ebx */
  push32((uint32_t)(EBX));
  /* 1030445a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1030445d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10304460 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10304463 call dword ptr [0x10305010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305010))), 0x10304469u);
  /* 10304469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1030446b jne 0x10304500 */
  if (!C.zf) goto L_10304500;
L_10304471:;
  /* 10304471 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10304473:;
  /* 10304473 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10304476 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10304479 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10304480 pop edi */
  EDI = (pop32());
  /* 10304481 pop esi */
  ESI = (pop32());
  /* 10304482 pop ebx */
  EBX = (pop32());
  /* 10304483 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10304484 ret  */
  ESPCHK(0x103042e3u, _esp0);
  ESP += 4; return;
L_10304485:;
  /* 10304485 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1030448c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1030448f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10304492 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10304494 call 0x10304b90 */
  push32(0x10304499u); f_10304b90();
  /* 10304499 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1030449c mov ebx, esp */
  EBX = (ESP);
  /* 1030449e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 103044a1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103044a5 jmp 0x103044b9 */
  goto L_103044b9;
  /* 103044a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103044a9 pop eax */
  EAX = (pop32());
  /* 103044aa ret  */
  ESPCHK(0x103042e3u, _esp0);
  ESP += 4; return;
  /* 103044ab mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103044ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103044b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103044b2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103044b6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_103044b9:;
  /* 103044b9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103044bb je 0x10304471 */
  if (C.zf) goto L_10304471;
  /* 103044bd push esi */
  push32((uint32_t)(ESI));
  /* 103044be push ebx */
  push32((uint32_t)(EBX));
  /* 103044bf push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 103044c2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 103044c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103044c8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103044cb call dword ptr [0x10305010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305010))), 0x103044d1u);
  /* 103044d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103044d3 je 0x10304471 */
  if (C.zf) goto L_10304471;
  /* 103044d5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103044d8 push edi */
  push32((uint32_t)(EDI));
  /* 103044d9 push edi */
  push32((uint32_t)(EDI));
  /* 103044da jne 0x103044e0 */
  if (!C.zf) goto L_103044e0;
  /* 103044dc push edi */
  push32((uint32_t)(EDI));
  /* 103044dd push edi */
  push32((uint32_t)(EDI));
  /* 103044de jmp 0x103044e6 */
  goto L_103044e6;
L_103044e0:;
  /* 103044e0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 103044e3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_103044e6:;
  /* 103044e6 push esi */
  push32((uint32_t)(ESI));
  /* 103044e7 push ebx */
  push32((uint32_t)(EBX));
  /* 103044e8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 103044ed push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 103044f0 call dword ptr [0x10305064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305064))), 0x103044f6u);
  /* 103044f6 mov esi, eax */
  ESI = (EAX);
  /* 103044f8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103044fa je 0x10304471 */
  if (C.zf) goto L_10304471;
L_10304500:;
  /* 10304500 mov eax, esi */
  EAX = (ESI);
  /* 10304502 jmp 0x10304473 */
  goto L_10304473;
}

/* FUN_10004507 @ 0x10304507 (43 bytes, 20 insns) */
void f_10304507(void) {
  FTRACE(0x10304507u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304507 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1030450b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1030450f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10304511 push esi */
  push32((uint32_t)(ESI));
  /* 10304512 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10304515 je 0x10304524 */
  if (C.zf) goto L_10304524;
L_10304517:;
  /* 10304517 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030451a je 0x10304524 */
  if (C.zf) goto L_10304524;
  /* 1030451c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1030451d mov esi, ecx */
  ESI = (ECX);
  /* 1030451f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10304520 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10304522 jne 0x10304517 */
  if (!C.zf) goto L_10304517;
L_10304524:;
  /* 10304524 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10304527 pop esi */
  ESI = (pop32());
  /* 10304528 jne 0x1030452f */
  if (!C.zf) goto L_1030452f;
  /* 1030452a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030452e ret  */
  ESPCHK(0x10304507u, _esp0);
  ESP += 4; return;
L_1030452f:;
  /* 1030452f mov eax, edx */
  EAX = (EDX);
  /* 10304531 ret  */
  ESPCHK(0x10304507u, _esp0);
  ESP += 4; return;
}

/* FUN_10004532 @ 0x10304532 (318 bytes, 123 insns) */
void f_10304532(void) {
  FTRACE(0x10304532u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304532 push ebp */
  push32((uint32_t)(EBP));
  /* 10304533 mov ebp, esp */
  EBP = (ESP);
  /* 10304535 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10304537 push 0x103054a0 */
  push32((uint32_t)(0x103054a0u));
  /* 1030453c push 0x10304ab0 */
  push32((uint32_t)(0x10304ab0u));
  /* 10304541 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10304547 push eax */
  push32((uint32_t)(EAX));
  /* 10304548 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1030454f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10304552 push ebx */
  push32((uint32_t)(EBX));
  /* 10304553 push esi */
  push32((uint32_t)(ESI));
  /* 10304554 push edi */
  push32((uint32_t)(EDI));
  /* 10304555 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10304558 mov eax, dword ptr [0x10306934] */
  EAX = (r32((uint32_t)(0x10306934)));
  /* 1030455d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1030455f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304561 jne 0x103045a1 */
  if (!C.zf) goto L_103045a1;
  /* 10304563 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10304566 push eax */
  push32((uint32_t)(EAX));
  /* 10304567 push 1 */
  push32((uint32_t)(0x1u));
  /* 10304569 pop esi */
  ESI = (pop32());
  /* 1030456a push esi */
  push32((uint32_t)(ESI));
  /* 1030456b push 0x10305480 */
  push32((uint32_t)(0x10305480u));
  /* 10304570 push esi */
  push32((uint32_t)(ESI));
  /* 10304571 call dword ptr [0x1030500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030500c))), 0x10304577u);
  /* 10304577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10304579 je 0x1030457f */
  if (C.zf) goto L_1030457f;
  /* 1030457b mov eax, esi */
  EAX = (ESI);
  /* 1030457d jmp 0x1030459c */
  goto L_1030459c;
L_1030457f:;
  /* 1030457f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10304582 push eax */
  push32((uint32_t)(EAX));
  /* 10304583 push esi */
  push32((uint32_t)(ESI));
  /* 10304584 push 0x1030547c */
  push32((uint32_t)(0x1030547cu));
  /* 10304589 push esi */
  push32((uint32_t)(ESI));
  /* 1030458a push ebx */
  push32((uint32_t)(EBX));
  /* 1030458b call dword ptr [0x10305018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305018))), 0x10304591u);
  /* 10304591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10304593 je 0x10304667 */
  if (C.zf) goto L_10304667;
  /* 10304599 push 2 */
  push32((uint32_t)(0x2u));
  /* 1030459b pop eax */
  EAX = (pop32());
L_1030459c:;
  /* 1030459c mov dword ptr [0x10306934], eax */
  w32((uint32_t)(0x10306934), (EAX));
L_103045a1:;
  /* 103045a1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103045a4 jne 0x103045ca */
  if (!C.zf) goto L_103045ca;
  /* 103045a6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103045a9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103045ab jne 0x103045b2 */
  if (!C.zf) goto L_103045b2;
  /* 103045ad mov eax, dword ptr [0x10306918] */
  EAX = (r32((uint32_t)(0x10306918)));
L_103045b2:;
  /* 103045b2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 103045b5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103045b8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103045bb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103045be push eax */
  push32((uint32_t)(EAX));
  /* 103045bf call dword ptr [0x10305018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305018))), 0x103045c5u);
  /* 103045c5 jmp 0x10304669 */
  goto L_10304669;
L_103045ca:;
  /* 103045ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103045cd jne 0x10304667 */
  if (!C.zf) goto L_10304667;
  /* 103045d3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103045d6 jne 0x103045e0 */
  if (!C.zf) goto L_103045e0;
  /* 103045d8 mov eax, dword ptr [0x10306928] */
  EAX = (r32((uint32_t)(0x10306928)));
  /* 103045dd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_103045e0:;
  /* 103045e0 push ebx */
  push32((uint32_t)(EBX));
  /* 103045e1 push ebx */
  push32((uint32_t)(EBX));
  /* 103045e2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103045e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103045e8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 103045eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103045ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103045ef and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103045f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103045f3 push eax */
  push32((uint32_t)(EAX));
  /* 103045f4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 103045f7 call dword ptr [0x10305024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305024))), 0x103045fdu);
  /* 103045fd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10304600 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304602 je 0x10304667 */
  if (C.zf) goto L_10304667;
  /* 10304604 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10304607 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1030460a mov eax, edi */
  EAX = (EDI);
  /* 1030460c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1030460f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10304611 call 0x10304b90 */
  push32(0x10304616u); f_10304b90();
  /* 10304616 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10304619 mov esi, esp */
  ESI = (ESP);
  /* 1030461b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1030461e push edi */
  push32((uint32_t)(EDI));
  /* 1030461f push ebx */
  push32((uint32_t)(EBX));
  /* 10304620 push esi */
  push32((uint32_t)(ESI));
  /* 10304621 call 0x10304270 */
  push32(0x10304626u); f_10304270();
  /* 10304626 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10304629 jmp 0x10304636 */
  goto L_10304636;
  /* 1030462b push 1 */
  push32((uint32_t)(0x1u));
  /* 1030462d pop eax */
  EAX = (pop32());
  /* 1030462e ret  */
  ESPCHK(0x10304532u, _esp0);
  ESP += 4; return;
  /* 1030462f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10304632 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10304634 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10304636:;
  /* 10304636 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1030463a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030463c je 0x10304667 */
  if (C.zf) goto L_10304667;
  /* 1030463e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10304641 push esi */
  push32((uint32_t)(ESI));
  /* 10304642 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10304645 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10304648 push 1 */
  push32((uint32_t)(0x1u));
  /* 1030464a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1030464d call dword ptr [0x10305024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10305024))), 0x10304653u);
  /* 10304653 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304655 je 0x10304667 */
  if (C.zf) goto L_10304667;
  /* 10304657 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1030465a push eax */
  push32((uint32_t)(EAX));
  /* 1030465b push esi */
  push32((uint32_t)(ESI));
  /* 1030465c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1030465f call dword ptr [0x1030500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1030500c))), 0x10304665u);
  /* 10304665 jmp 0x10304669 */
  goto L_10304669;
L_10304667:;
  /* 10304667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10304669:;
  /* 10304669 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1030466c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1030466f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10304676 pop edi */
  EDI = (pop32());
  /* 10304677 pop esi */
  ESI = (pop32());
  /* 10304678 pop ebx */
  EBX = (pop32());
  /* 10304679 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1030467a ret  */
  ESPCHK(0x10304532u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x10304680 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10304680(void) {
  FTRACE(0x10304680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304680 push ebp */
  push32((uint32_t)(EBP));
  /* 10304681 mov ebp, esp */
  EBP = (ESP);
  /* 10304683 push edi */
  push32((uint32_t)(EDI));
  /* 10304684 push esi */
  push32((uint32_t)(ESI));
  /* 10304685 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10304688 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1030468b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1030468e mov eax, ecx */
  EAX = (ECX);
  /* 10304690 mov edx, ecx */
  EDX = (ECX);
  /* 10304692 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10304694 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304696 jbe 0x103046a0 */
  if ((C.cf||C.zf)) goto L_103046a0;
  /* 10304698 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030469a jb 0x10304818 */
  if (C.cf) goto L_10304818;
L_103046a0:;
  /* 103046a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103046a6 jne 0x103046bc */
  if (!C.zf) goto L_103046bc;
  /* 103046a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103046ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103046ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103046b1 jb 0x103046dc */
  if (C.cf) goto L_103046dc;
  /* 103046b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103046b5 jmp dword ptr [edx*4 + 0x103047c8] */
  switch (EDX) {
    case 0: goto L_103047d8;
    case 1: goto L_103047e0;
    case 2: goto L_103047ec;
    case 3: goto L_10304800;
    default: x86_unimpl("switch@0x103046b5 out of table"); return;
  }
L_103046bc:;
  /* 103046bc mov eax, edi */
  EAX = (EDI);
  /* 103046be mov edx, 3 */
  EDX = (0x3u);
  /* 103046c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103046c6 jb 0x103046d4 */
  if (C.cf) goto L_103046d4;
  /* 103046c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103046cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103046cd jmp dword ptr [eax*4 + 0x103046e0] */
  switch (EAX) {
    case 1: goto L_103046f0;
    case 2: goto L_1030471c;
    case 3: goto L_10304740;
    default: x86_unimpl("switch@0x103046cd out of table"); return;
  }
L_103046d4:;
  /* 103046d4 jmp dword ptr [ecx*4 + 0x103047d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103047d8)))); return;
  /* 103046db nop  */
  /* nop */
L_103046dc:;
  /* 103046dc jmp dword ptr [ecx*4 + 0x1030475c] */
  switch (ECX) {
    case 0: goto L_103047bf;
    case 1: goto L_103047ac;
    case 2: goto L_103047a4;
    case 3: goto L_1030479c;
    case 4: goto L_10304794;
    case 5: goto L_1030478c;
    case 6: goto L_10304784;
    case 7: goto L_1030477c;
    default: x86_unimpl("switch@0x103046dc out of table"); return;
  }
  /* 103046e3 nop  */
  /* nop */
L_103046f0:;
  /* 103046f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103046f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103046f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103046f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103046f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103046fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103046ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10304702 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10304705 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10304708 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1030470b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030470e jb 0x103046dc */
  if (C.cf) goto L_103046dc;
  /* 10304710 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10304712 jmp dword ptr [edx*4 + 0x103047c8] */
  switch (EDX) {
    case 0: goto L_103047d8;
    case 1: goto L_103047e0;
    case 2: goto L_103047ec;
    case 3: goto L_10304800;
    default: x86_unimpl("switch@0x10304712 out of table"); return;
  }
  /* 10304719 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1030471c:;
  /* 1030471c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1030471e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10304720 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10304722 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10304725 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10304728 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1030472b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1030472e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10304731 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304734 jb 0x103046dc */
  if (C.cf) goto L_103046dc;
  /* 10304736 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10304738 jmp dword ptr [edx*4 + 0x103047c8] */
  switch (EDX) {
    case 0: goto L_103047d8;
    case 1: goto L_103047e0;
    case 2: goto L_103047ec;
    case 3: goto L_10304800;
    default: x86_unimpl("switch@0x10304738 out of table"); return;
  }
  /* 1030473f nop  */
  /* nop */
L_10304740:;
  /* 10304740 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10304742 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10304744 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10304746 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10304747 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1030474a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1030474b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1030474e jb 0x103046dc */
  if (C.cf) goto L_103046dc;
  /* 10304750 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10304752 jmp dword ptr [edx*4 + 0x103047c8] */
  switch (EDX) {
    case 0: goto L_103047d8;
    case 1: goto L_103047e0;
    case 2: goto L_103047ec;
    case 3: goto L_10304800;
    default: x86_unimpl("switch@0x10304752 out of table"); return;
  }
  /* 10304759 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1030477c:;
  /* 1030477c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10304780 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10304784:;
  /* 10304784 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10304788 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1030478c:;
  /* 1030478c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10304790 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10304794:;
  /* 10304794 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10304798 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1030479c:;
  /* 1030479c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 103047a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_103047a4:;
  /* 103047a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 103047a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_103047ac:;
  /* 103047ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 103047b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 103047b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103047bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103047bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103047bf:;
  /* 103047bf jmp dword ptr [edx*4 + 0x103047c8] */
  switch (EDX) {
    case 0: goto L_103047d8;
    case 1: goto L_103047e0;
    case 2: goto L_103047ec;
    case 3: goto L_10304800;
    default: x86_unimpl("switch@0x103047bf out of table"); return;
  }
  /* 103047c6 mov edi, edi */
  EDI = (EDI);
L_103047d8:;
  /* 103047d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103047db pop esi */
  ESI = (pop32());
  /* 103047dc pop edi */
  EDI = (pop32());
  /* 103047dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103047de ret  */
  ESPCHK(0x10304680u, _esp0);
  ESP += 4; return;
  /* 103047df nop  */
  /* nop */
L_103047e0:;
  /* 103047e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103047e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103047e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103047e7 pop esi */
  ESI = (pop32());
  /* 103047e8 pop edi */
  EDI = (pop32());
  /* 103047e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103047ea ret  */
  ESPCHK(0x10304680u, _esp0);
  ESP += 4; return;
  /* 103047eb nop  */
  /* nop */
L_103047ec:;
  /* 103047ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103047ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103047f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103047f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103047f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103047f9 pop esi */
  ESI = (pop32());
  /* 103047fa pop edi */
  EDI = (pop32());
  /* 103047fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103047fc ret  */
  ESPCHK(0x10304680u, _esp0);
  ESP += 4; return;
  /* 103047fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10304800:;
  /* 10304800 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10304802 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10304804 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10304807 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1030480a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1030480d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10304810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10304813 pop esi */
  ESI = (pop32());
  /* 10304814 pop edi */
  EDI = (pop32());
  /* 10304815 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10304816 ret  */
  ESPCHK(0x10304680u, _esp0);
  ESP += 4; return;
  /* 10304817 nop  */
  /* nop */
L_10304818:;
  /* 10304818 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1030481c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10304820 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10304826 jne 0x1030484c */
  if (!C.zf) goto L_1030484c;
  /* 10304828 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1030482b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1030482e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304831 jb 0x10304840 */
  if (C.cf) goto L_10304840;
  /* 10304833 std  */
  C.df=1;
  /* 10304834 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10304836 cld  */
  C.df=0;
  /* 10304837 jmp dword ptr [edx*4 + 0x10304960] */
  switch (EDX) {
    case 0: goto L_10304970;
    case 1: goto L_10304978;
    case 2: goto L_10304988;
    case 3: goto L_1030499c;
    default: x86_unimpl("switch@0x10304837 out of table"); return;
  }
  /* 1030483e mov edi, edi */
  EDI = (EDI);
L_10304840:;
  /* 10304840 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10304842 jmp dword ptr [ecx*4 + 0x10304910] */
  switch (ECX) {
    case 0: goto L_10304957;
    default: x86_unimpl("switch@0x10304842 out of table"); return;
  }
  /* 10304849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1030484c:;
  /* 1030484c mov eax, edi */
  EAX = (EDI);
  /* 1030484e mov edx, 3 */
  EDX = (0x3u);
  /* 10304853 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304856 jb 0x10304864 */
  if (C.cf) goto L_10304864;
  /* 10304858 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1030485b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1030485d jmp dword ptr [eax*4 + 0x10304868] */
  switch (EAX) {
    case 1: goto L_10304878;
    case 2: goto L_10304898;
    case 3: goto L_103048c0;
    default: x86_unimpl("switch@0x1030485d out of table"); return;
  }
L_10304864:;
  /* 10304864 jmp dword ptr [ecx*4 + 0x10304960] */
  switch (ECX) {
    case 0: goto L_10304970;
    case 1: goto L_10304978;
    case 2: goto L_10304988;
    case 3: goto L_1030499c;
    default: x86_unimpl("switch@0x10304864 out of table"); return;
  }
  /* 1030486b nop  */
  /* nop */
L_10304878:;
  /* 10304878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030487b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1030487d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10304880 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10304881 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10304884 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10304885 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304888 jb 0x10304840 */
  if (C.cf) goto L_10304840;
  /* 1030488a std  */
  C.df=1;
  /* 1030488b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1030488d cld  */
  C.df=0;
  /* 1030488e jmp dword ptr [edx*4 + 0x10304960] */
  switch (EDX) {
    case 0: goto L_10304970;
    case 1: goto L_10304978;
    case 2: goto L_10304988;
    case 3: goto L_1030499c;
    default: x86_unimpl("switch@0x1030488e out of table"); return;
  }
  /* 10304895 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10304898:;
  /* 10304898 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030489b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1030489d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103048a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103048a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103048a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103048a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103048ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103048af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103048b2 jb 0x10304840 */
  if (C.cf) goto L_10304840;
  /* 103048b4 std  */
  C.df=1;
  /* 103048b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103048b7 cld  */
  C.df=0;
  /* 103048b8 jmp dword ptr [edx*4 + 0x10304960] */
  switch (EDX) {
    case 0: goto L_10304970;
    case 1: goto L_10304978;
    case 2: goto L_10304988;
    case 3: goto L_1030499c;
    default: x86_unimpl("switch@0x103048b8 out of table"); return;
  }
  /* 103048bf nop  */
  /* nop */
L_103048c0:;
  /* 103048c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 103048c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103048c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103048c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103048cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103048ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103048d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103048d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103048d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103048da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103048dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103048e0 jb 0x10304840 */
  if (C.cf) goto L_10304840;
  /* 103048e6 std  */
  C.df=1;
  /* 103048e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103048e9 cld  */
  C.df=0;
  /* 103048ea jmp dword ptr [edx*4 + 0x10304960] */
  switch (EDX) {
    case 0: goto L_10304970;
    case 1: goto L_10304978;
    case 2: goto L_10304988;
    case 3: goto L_1030499c;
    default: x86_unimpl("switch@0x103048ea out of table"); return;
  }
  /* 103048f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 103048f4 adc al, 0x49 */
  { uint32_t _a=(AL),_b=(0x49u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 103048f6 xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103048f8 sbb al, 0x49 */
  { uint32_t _a=(AL),_b=(0x49u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 103048fa xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 103048fc and al, 0x49 */
  { uint32_t _r=(AL)&(0x49u); AL = (_r); fl_logic(_r,8); }
  /* 103048fe xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10304900 sub al, 0x49 */
  { uint32_t _a=(AL),_b=(0x49u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10304902 xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10304904 xor al, 0x49 */
  { uint32_t _r=(AL)^(0x49u); AL = (_r); fl_logic(_r,8); }
  /* 10304906 xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10304908 cmp al, 0x49 */
  { uint32_t _a=(AL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1030490a xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1030490c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1030490d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1030490e xor byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))^(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10304914 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10304918 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1030491c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10304920 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10304924 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10304928 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1030492c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10304930 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10304934 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10304938 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1030493c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10304940 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10304944 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10304948 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1030494c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10304953 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10304955 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10304957:;
  /* 10304957 jmp dword ptr [edx*4 + 0x10304960] */
  switch (EDX) {
    case 0: goto L_10304970;
    case 1: goto L_10304978;
    case 2: goto L_10304988;
    case 3: goto L_1030499c;
    default: x86_unimpl("switch@0x10304957 out of table"); return;
  }
  /* 1030495e mov edi, edi */
  EDI = (EDI);
L_10304970:;
  /* 10304970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10304973 pop esi */
  ESI = (pop32());
  /* 10304974 pop edi */
  EDI = (pop32());
  /* 10304975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10304976 ret  */
  ESPCHK(0x10304680u, _esp0);
  ESP += 4; return;
  /* 10304977 nop  */
  /* nop */
L_10304978:;
  /* 10304978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030497b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1030497e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10304981 pop esi */
  ESI = (pop32());
  /* 10304982 pop edi */
  EDI = (pop32());
  /* 10304983 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10304984 ret  */
  ESPCHK(0x10304680u, _esp0);
  ESP += 4; return;
  /* 10304985 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10304988:;
  /* 10304988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030498b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1030498e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10304991 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10304994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10304997 pop esi */
  ESI = (pop32());
  /* 10304998 pop edi */
  EDI = (pop32());
  /* 10304999 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1030499a ret  */
  ESPCHK(0x10304680u, _esp0);
  ESP += 4; return;
  /* 1030499b nop  */
  /* nop */
L_1030499c:;
  /* 1030499c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1030499f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 103049a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103049a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103049a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103049ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103049ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103049b1 pop esi */
  ESI = (pop32());
  /* 103049b2 pop edi */
  EDI = (pop32());
  /* 103049b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103049b4 ret  */
  ESPCHK(0x10304680u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x103049b8 (32 bytes, 18 insns) */
void f_103049b8(void) {
  FTRACE(0x103049b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103049b8 push ebp */
  push32((uint32_t)(EBP));
  /* 103049b9 mov ebp, esp */
  EBP = (ESP);
  /* 103049bb push ebx */
  push32((uint32_t)(EBX));
  /* 103049bc push esi */
  push32((uint32_t)(ESI));
  /* 103049bd push edi */
  push32((uint32_t)(EDI));
  /* 103049be push ebp */
  push32((uint32_t)(EBP));
  /* 103049bf push 0 */
  push32((uint32_t)(0x0u));
  /* 103049c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103049c3 push 0x103049d0 */
  push32((uint32_t)(0x103049d0u));
  /* 103049c8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103049cb call 0x10304bc0 */
  push32(0x103049d0u); f_10304bc0();
  /* 103049d0 pop ebp */
  EBP = (pop32());
  /* 103049d1 pop edi */
  EDI = (pop32());
  /* 103049d2 pop esi */
  ESI = (pop32());
  /* 103049d3 pop ebx */
  EBX = (pop32());
  /* 103049d4 mov esp, ebp */
  ESP = (EBP);
  /* 103049d6 pop ebp */
  EBP = (pop32());
  /* 103049d7 ret  */
  ESPCHK(0x103049b8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x103049fa (104 bytes, 33 insns) */
void f_103049fa(void) {
  FTRACE(0x103049fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103049fa push ebx */
  push32((uint32_t)(EBX));
  /* 103049fb push esi */
  push32((uint32_t)(ESI));
  /* 103049fc push edi */
  push32((uint32_t)(EDI));
  /* 103049fd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10304a01 push eax */
  push32((uint32_t)(EAX));
  /* 10304a02 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10304a04 push 0x103049d8 */
  push32((uint32_t)(0x103049d8u));
  /* 10304a09 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10304a10 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10304a17:;
  /* 10304a17 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10304a1b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10304a1e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10304a21 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304a24 je 0x10304a54 */
  if (C.zf) goto L_10304a54;
  /* 10304a26 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304a2a je 0x10304a54 */
  if (C.zf) goto L_10304a54;
  /* 10304a2c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10304a2f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10304a32 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10304a36 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10304a39 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304a3e jne 0x10304a52 */
  if (!C.zf) goto L_10304a52;
  /* 10304a40 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10304a45 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10304a49 call 0x10304a8e */
  push32(0x10304a4eu); f_10304a8e();
  /* 10304a4e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10304a52u);
L_10304a52:;
  /* 10304a52 jmp 0x10304a17 */
  goto L_10304a17;
L_10304a54:;
  /* 10304a54 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10304a5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10304a5e pop edi */
  EDI = (pop32());
  /* 10304a5f pop esi */
  ESI = (pop32());
  /* 10304a60 pop ebx */
  EBX = (pop32());
  /* 10304a61 ret  */
  ESPCHK(0x103049fau, _esp0);
  ESP += 4; return;
}

/* FUN_10004a8e @ 0x10304a8e (24 bytes, 10 insns) */
void f_10304a8e(void) {
  FTRACE(0x10304a8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304a8e push ebx */
  push32((uint32_t)(EBX));
  /* 10304a8f push ecx */
  push32((uint32_t)(ECX));
  /* 10304a90 mov ebx, 0x10306570 */
  EBX = (0x10306570u);
  /* 10304a95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10304a98 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10304a9b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10304a9e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10304aa1 pop ecx */
  ECX = (pop32());
  /* 10304aa2 pop ebx */
  EBX = (pop32());
  /* 10304aa3 ret 4 */
  ESPCHK(0x10304a8eu, _esp0);
  ESP += 8; return;
}

/* FUN_10004b6d @ 0x10304b6d (27 bytes, 11 insns) */
void f_10304b6d(void) {
  FTRACE(0x10304b6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304b6d push ebp */
  push32((uint32_t)(EBP));
  /* 10304b6e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10304b72 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10304b74 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10304b77 push eax */
  push32((uint32_t)(EAX));
  /* 10304b78 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10304b7b push eax */
  push32((uint32_t)(EAX));
  /* 10304b7c call 0x103049fa */
  push32(0x10304b81u); f_103049fa();
  /* 10304b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10304b84 pop ebp */
  EBP = (pop32());
  /* 10304b85 ret 4 */
  ESPCHK(0x10304b6du, _esp0);
  ESP += 8; return;
}

/* FUN_10004b90 @ 0x10304b90 (47 bytes, 17 insns) */
void f_10304b90(void) {
  FTRACE(0x10304b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10304b91 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304b96 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10304b9a jb 0x10304bb0 */
  if (C.cf) goto L_10304bb0;
L_10304b9c:;
  /* 10304b9c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10304ba2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10304ba7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10304ba9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10304bae jae 0x10304b9c */
  if (!C.cf) goto L_10304b9c;
L_10304bb0:;
  /* 10304bb0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10304bb2 mov eax, esp */
  EAX = (ESP);
  /* 10304bb4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10304bb6 mov esp, ecx */
  ESP = (ECX);
  /* 10304bb8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10304bba mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10304bbd push eax */
  push32((uint32_t)(EAX));
  /* 10304bbe ret  */
  ESPCHK(0x10304b90u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10304bc0 (6 bytes, 1 insns) */
void f_10304bc0(void) {
  FTRACE(0x10304bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10304bc0 jmp dword ptr [0x10305008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10305008)))); return;
}

