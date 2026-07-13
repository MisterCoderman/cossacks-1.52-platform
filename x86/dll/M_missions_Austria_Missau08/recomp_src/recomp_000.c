#include "recomp.h"

/* FUN_10001000 @ 0x10371000 (18 bytes, 7 insns) */
void f_10371000(void) {
  FTRACE(0x10371000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10371000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10371004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10371005 jne 0x1037100c */
  if (!C.zf) goto L_1037100c;
  /* 10371007 call 0x10371012 */
  push32(0x1037100cu); f_10371012();
L_1037100c:;
  /* 1037100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1037100e pop eax */
  EAX = (pop32());
  /* 1037100f ret 0xc */
  ESPCHK(0x10371000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10371012 (819 bytes, 212 insns) */
void f_10371012(void) {
  FTRACE(0x10371012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10371012 push esi */
  push32((uint32_t)(ESI));
  /* 10371013 mov esi, dword ptr [0x10375134] */
  ESI = (r32((uint32_t)(0x10375134)));
  /* 10371019 push edi */
  push32((uint32_t)(EDI));
  /* 1037101a push 0x10376130 */
  push32((uint32_t)(0x10376130u));
  /* 1037101f push 0x103764a0 */
  push32((uint32_t)(0x103764a0u));
  /* 10371024 call esi */
  call_ind((uint32_t)(ESI), 0x10371026u);
  /* 10371026 push 0x1037612c */
  push32((uint32_t)(0x1037612cu));
  /* 1037102b push 0x103764a8 */
  push32((uint32_t)(0x103764a8u));
  /* 10371030 call esi */
  call_ind((uint32_t)(ESI), 0x10371032u);
  /* 10371032 push 0x10376128 */
  push32((uint32_t)(0x10376128u));
  /* 10371037 push 0x103764b0 */
  push32((uint32_t)(0x103764b0u));
  /* 1037103c call esi */
  call_ind((uint32_t)(ESI), 0x1037103eu);
  /* 1037103e push 0x10376124 */
  push32((uint32_t)(0x10376124u));
  /* 10371043 push 0x103764b8 */
  push32((uint32_t)(0x103764b8u));
  /* 10371048 call esi */
  call_ind((uint32_t)(ESI), 0x1037104au);
  /* 1037104a push 0x10376120 */
  push32((uint32_t)(0x10376120u));
  /* 1037104f push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 10371054 call esi */
  call_ind((uint32_t)(ESI), 0x10371056u);
  /* 10371056 push 0x1037611c */
  push32((uint32_t)(0x1037611cu));
  /* 1037105b push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 10371060 call esi */
  call_ind((uint32_t)(ESI), 0x10371062u);
  /* 10371062 push 0x10376118 */
  push32((uint32_t)(0x10376118u));
  /* 10371067 push 0x103764d0 */
  push32((uint32_t)(0x103764d0u));
  /* 1037106c call esi */
  call_ind((uint32_t)(ESI), 0x1037106eu);
  /* 1037106e push 0x10376114 */
  push32((uint32_t)(0x10376114u));
  /* 10371073 push 0x103764d8 */
  push32((uint32_t)(0x103764d8u));
  /* 10371078 call esi */
  call_ind((uint32_t)(ESI), 0x1037107au);
  /* 1037107a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037107d push 0x10376110 */
  push32((uint32_t)(0x10376110u));
  /* 10371082 push 0x103764e0 */
  push32((uint32_t)(0x103764e0u));
  /* 10371087 call esi */
  call_ind((uint32_t)(ESI), 0x10371089u);
  /* 10371089 push 0x1037610c */
  push32((uint32_t)(0x1037610cu));
  /* 1037108e push 0x103764f8 */
  push32((uint32_t)(0x103764f8u));
  /* 10371093 call esi */
  call_ind((uint32_t)(ESI), 0x10371095u);
  /* 10371095 push 0x10376108 */
  push32((uint32_t)(0x10376108u));
  /* 1037109a push 0x10376500 */
  push32((uint32_t)(0x10376500u));
  /* 1037109f call esi */
  call_ind((uint32_t)(ESI), 0x103710a1u);
  /* 103710a1 push 0x10376104 */
  push32((uint32_t)(0x10376104u));
  /* 103710a6 push 0x10376508 */
  push32((uint32_t)(0x10376508u));
  /* 103710ab call esi */
  call_ind((uint32_t)(ESI), 0x103710adu);
  /* 103710ad push 0x10376100 */
  push32((uint32_t)(0x10376100u));
  /* 103710b2 push 0x10376510 */
  push32((uint32_t)(0x10376510u));
  /* 103710b7 call esi */
  call_ind((uint32_t)(ESI), 0x103710b9u);
  /* 103710b9 push 0x103760fc */
  push32((uint32_t)(0x103760fcu));
  /* 103710be push 0x10376520 */
  push32((uint32_t)(0x10376520u));
  /* 103710c3 call esi */
  call_ind((uint32_t)(ESI), 0x103710c5u);
  /* 103710c5 push 0x103760f8 */
  push32((uint32_t)(0x103760f8u));
  /* 103710ca push 0x10376530 */
  push32((uint32_t)(0x10376530u));
  /* 103710cf call esi */
  call_ind((uint32_t)(ESI), 0x103710d1u);
  /* 103710d1 push 0x103760f4 */
  push32((uint32_t)(0x103760f4u));
  /* 103710d6 push 0x10376540 */
  push32((uint32_t)(0x10376540u));
  /* 103710db call esi */
  call_ind((uint32_t)(ESI), 0x103710ddu);
  /* 103710dd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103710e0 push 0x103760f0 */
  push32((uint32_t)(0x103760f0u));
  /* 103710e5 push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 103710ea call esi */
  call_ind((uint32_t)(ESI), 0x103710ecu);
  /* 103710ec push 0x103760ec */
  push32((uint32_t)(0x103760ecu));
  /* 103710f1 push 0x10376568 */
  push32((uint32_t)(0x10376568u));
  /* 103710f6 call esi */
  call_ind((uint32_t)(ESI), 0x103710f8u);
  /* 103710f8 push 0x103760e8 */
  push32((uint32_t)(0x103760e8u));
  /* 103710fd push 0x10376580 */
  push32((uint32_t)(0x10376580u));
  /* 10371102 call esi */
  call_ind((uint32_t)(ESI), 0x10371104u);
  /* 10371104 push 0x103760e4 */
  push32((uint32_t)(0x103760e4u));
  /* 10371109 push 0x10376518 */
  push32((uint32_t)(0x10376518u));
  /* 1037110e call esi */
  call_ind((uint32_t)(ESI), 0x10371110u);
  /* 10371110 push 0x103760e0 */
  push32((uint32_t)(0x103760e0u));
  /* 10371115 push 0x10376528 */
  push32((uint32_t)(0x10376528u));
  /* 1037111a call esi */
  call_ind((uint32_t)(ESI), 0x1037111cu);
  /* 1037111c push 0x103760dc */
  push32((uint32_t)(0x103760dcu));
  /* 10371121 push 0x10376538 */
  push32((uint32_t)(0x10376538u));
  /* 10371126 call esi */
  call_ind((uint32_t)(ESI), 0x10371128u);
  /* 10371128 push 0x103760d8 */
  push32((uint32_t)(0x103760d8u));
  /* 1037112d push 0x10376548 */
  push32((uint32_t)(0x10376548u));
  /* 10371132 call esi */
  call_ind((uint32_t)(ESI), 0x10371134u);
  /* 10371134 push 0x103760d4 */
  push32((uint32_t)(0x103760d4u));
  /* 10371139 push 0x10376560 */
  push32((uint32_t)(0x10376560u));
  /* 1037113e call esi */
  call_ind((uint32_t)(ESI), 0x10371140u);
  /* 10371140 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371143 push 0x103760d0 */
  push32((uint32_t)(0x103760d0u));
  /* 10371148 push 0x10376578 */
  push32((uint32_t)(0x10376578u));
  /* 1037114d call esi */
  call_ind((uint32_t)(ESI), 0x1037114fu);
  /* 1037114f push 0x103760cc */
  push32((uint32_t)(0x103760ccu));
  /* 10371154 push 0x10376590 */
  push32((uint32_t)(0x10376590u));
  /* 10371159 call esi */
  call_ind((uint32_t)(ESI), 0x1037115bu);
  /* 1037115b push 0x103760c8 */
  push32((uint32_t)(0x103760c8u));
  /* 10371160 push 0x103765a0 */
  push32((uint32_t)(0x103765a0u));
  /* 10371165 call esi */
  call_ind((uint32_t)(ESI), 0x10371167u);
  /* 10371167 push 0x103760c4 */
  push32((uint32_t)(0x103760c4u));
  /* 1037116c push 0x103765b0 */
  push32((uint32_t)(0x103765b0u));
  /* 10371171 call esi */
  call_ind((uint32_t)(ESI), 0x10371173u);
  /* 10371173 push 0x103760c0 */
  push32((uint32_t)(0x103760c0u));
  /* 10371178 push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 1037117d call esi */
  call_ind((uint32_t)(ESI), 0x1037117fu);
  /* 1037117f push 0x103760bc */
  push32((uint32_t)(0x103760bcu));
  /* 10371184 push 0x10376558 */
  push32((uint32_t)(0x10376558u));
  /* 10371189 call esi */
  call_ind((uint32_t)(ESI), 0x1037118bu);
  /* 1037118b push 0x103760b8 */
  push32((uint32_t)(0x103760b8u));
  /* 10371190 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 10371195 call esi */
  call_ind((uint32_t)(ESI), 0x10371197u);
  /* 10371197 push 0x103760b4 */
  push32((uint32_t)(0x103760b4u));
  /* 1037119c push 0x10376588 */
  push32((uint32_t)(0x10376588u));
  /* 103711a1 call esi */
  call_ind((uint32_t)(ESI), 0x103711a3u);
  /* 103711a3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103711a6 push 0x103760b0 */
  push32((uint32_t)(0x103760b0u));
  /* 103711ab push 0x10376598 */
  push32((uint32_t)(0x10376598u));
  /* 103711b0 call esi */
  call_ind((uint32_t)(ESI), 0x103711b2u);
  /* 103711b2 push 0x103760ac */
  push32((uint32_t)(0x103760acu));
  /* 103711b7 push 0x103765a8 */
  push32((uint32_t)(0x103765a8u));
  /* 103711bc call esi */
  call_ind((uint32_t)(ESI), 0x103711beu);
  /* 103711be push 0x103760a8 */
  push32((uint32_t)(0x103760a8u));
  /* 103711c3 push 0x103765b8 */
  push32((uint32_t)(0x103765b8u));
  /* 103711c8 call esi */
  call_ind((uint32_t)(ESI), 0x103711cau);
  /* 103711ca push 0x103760a4 */
  push32((uint32_t)(0x103760a4u));
  /* 103711cf push 0x103765c8 */
  push32((uint32_t)(0x103765c8u));
  /* 103711d4 call esi */
  call_ind((uint32_t)(ESI), 0x103711d6u);
  /* 103711d6 push 0x103760a0 */
  push32((uint32_t)(0x103760a0u));
  /* 103711db push 0x103765d0 */
  push32((uint32_t)(0x103765d0u));
  /* 103711e0 call esi */
  call_ind((uint32_t)(ESI), 0x103711e2u);
  /* 103711e2 push 0x1037609c */
  push32((uint32_t)(0x1037609cu));
  /* 103711e7 push 0x103765d8 */
  push32((uint32_t)(0x103765d8u));
  /* 103711ec call esi */
  call_ind((uint32_t)(ESI), 0x103711eeu);
  /* 103711ee push 0x10376098 */
  push32((uint32_t)(0x10376098u));
  /* 103711f3 push 0x103765e0 */
  push32((uint32_t)(0x103765e0u));
  /* 103711f8 call esi */
  call_ind((uint32_t)(ESI), 0x103711fau);
  /* 103711fa mov esi, dword ptr [0x1037512c] */
  ESI = (r32((uint32_t)(0x1037512c)));
  /* 10371200 push 0x10376094 */
  push32((uint32_t)(0x10376094u));
  /* 10371205 push 0x103765e8 */
  push32((uint32_t)(0x103765e8u));
  /* 1037120a call esi */
  call_ind((uint32_t)(ESI), 0x1037120cu);
  /* 1037120c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037120f push 0x10376090 */
  push32((uint32_t)(0x10376090u));
  /* 10371214 push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 10371219 call esi */
  call_ind((uint32_t)(ESI), 0x1037121bu);
  /* 1037121b push 0x1037608c */
  push32((uint32_t)(0x1037608cu));
  /* 10371220 push 0x103765f8 */
  push32((uint32_t)(0x103765f8u));
  /* 10371225 call esi */
  call_ind((uint32_t)(ESI), 0x10371227u);
  /* 10371227 push 0x10376088 */
  push32((uint32_t)(0x10376088u));
  /* 1037122c push 0x10376600 */
  push32((uint32_t)(0x10376600u));
  /* 10371231 call esi */
  call_ind((uint32_t)(ESI), 0x10371233u);
  /* 10371233 push 0x10376084 */
  push32((uint32_t)(0x10376084u));
  /* 10371238 push 0x10376608 */
  push32((uint32_t)(0x10376608u));
  /* 1037123d call esi */
  call_ind((uint32_t)(ESI), 0x1037123fu);
  /* 1037123f push 0x10376080 */
  push32((uint32_t)(0x10376080u));
  /* 10371244 push 0x10376610 */
  push32((uint32_t)(0x10376610u));
  /* 10371249 call esi */
  call_ind((uint32_t)(ESI), 0x1037124bu);
  /* 1037124b push 0x1037607c */
  push32((uint32_t)(0x1037607cu));
  /* 10371250 push 0x10376618 */
  push32((uint32_t)(0x10376618u));
  /* 10371255 call esi */
  call_ind((uint32_t)(ESI), 0x10371257u);
  /* 10371257 push 0x10376078 */
  push32((uint32_t)(0x10376078u));
  /* 1037125c push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 10371261 call esi */
  call_ind((uint32_t)(ESI), 0x10371263u);
  /* 10371263 push 0x10376074 */
  push32((uint32_t)(0x10376074u));
  /* 10371268 push 0x10376628 */
  push32((uint32_t)(0x10376628u));
  /* 1037126d call esi */
  call_ind((uint32_t)(ESI), 0x1037126fu);
  /* 1037126f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371272 push 0x10376070 */
  push32((uint32_t)(0x10376070u));
  /* 10371277 push 0x10376638 */
  push32((uint32_t)(0x10376638u));
  /* 1037127c call esi */
  call_ind((uint32_t)(ESI), 0x1037127eu);
  /* 1037127e push 0x1037606c */
  push32((uint32_t)(0x1037606cu));
  /* 10371283 push 0x10376640 */
  push32((uint32_t)(0x10376640u));
  /* 10371288 call esi */
  call_ind((uint32_t)(ESI), 0x1037128au);
  /* 1037128a push 0x10376068 */
  push32((uint32_t)(0x10376068u));
  /* 1037128f push 0x10376648 */
  push32((uint32_t)(0x10376648u));
  /* 10371294 call esi */
  call_ind((uint32_t)(ESI), 0x10371296u);
  /* 10371296 push 0x10376064 */
  push32((uint32_t)(0x10376064u));
  /* 1037129b push 0x10376650 */
  push32((uint32_t)(0x10376650u));
  /* 103712a0 call esi */
  call_ind((uint32_t)(ESI), 0x103712a2u);
  /* 103712a2 push 0x10376060 */
  push32((uint32_t)(0x10376060u));
  /* 103712a7 push 0x10376658 */
  push32((uint32_t)(0x10376658u));
  /* 103712ac call esi */
  call_ind((uint32_t)(ESI), 0x103712aeu);
  /* 103712ae push 0x1037605c */
  push32((uint32_t)(0x1037605cu));
  /* 103712b3 push 0x10376660 */
  push32((uint32_t)(0x10376660u));
  /* 103712b8 call esi */
  call_ind((uint32_t)(ESI), 0x103712bau);
  /* 103712ba push 0x10376058 */
  push32((uint32_t)(0x10376058u));
  /* 103712bf push 0x10376668 */
  push32((uint32_t)(0x10376668u));
  /* 103712c4 call esi */
  call_ind((uint32_t)(ESI), 0x103712c6u);
  /* 103712c6 push 0x1037604c */
  push32((uint32_t)(0x1037604cu));
  /* 103712cb push 0x10376630 */
  push32((uint32_t)(0x10376630u));
  /* 103712d0 call dword ptr [0x1037513c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037513c))), 0x103712d6u);
  /* 103712d6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103712d9 push 0x10376040 */
  push32((uint32_t)(0x10376040u));
  /* 103712de push 0x103764e8 */
  push32((uint32_t)(0x103764e8u));
  /* 103712e3 call dword ptr [0x10375140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375140))), 0x103712e9u);
  /* 103712e9 mov esi, dword ptr [0x10375138] */
  ESI = (r32((uint32_t)(0x10375138)));
  /* 103712ef push 8 */
  push32((uint32_t)(0x8u));
  /* 103712f1 push 0x10376670 */
  push32((uint32_t)(0x10376670u));
  /* 103712f6 call esi */
  call_ind((uint32_t)(ESI), 0x103712f8u);
  /* 103712f8 mov edi, dword ptr [0x10375148] */
  EDI = (r32((uint32_t)(0x10375148)));
  /* 103712fe push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10371300 push 0 */
  push32((uint32_t)(0x0u));
  /* 10371302 call edi */
  call_ind((uint32_t)(EDI), 0x10371304u);
  /* 10371304 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10371306 push 4 */
  push32((uint32_t)(0x4u));
  /* 10371308 call edi */
  call_ind((uint32_t)(EDI), 0x1037130au);
  /* 1037130a push 8 */
  push32((uint32_t)(0x8u));
  /* 1037130c push 0x10376678 */
  push32((uint32_t)(0x10376678u));
  /* 10371311 call esi */
  call_ind((uint32_t)(ESI), 0x10371313u);
  /* 10371313 push 8 */
  push32((uint32_t)(0x8u));
  /* 10371315 push 0x10376680 */
  push32((uint32_t)(0x10376680u));
  /* 1037131a call esi */
  call_ind((uint32_t)(ESI), 0x1037131cu);
  /* 1037131c push 0x103764f0 */
  push32((uint32_t)(0x103764f0u));
  /* 10371321 call dword ptr [0x1037514c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037514c))), 0x10371327u);
  /* 10371327 mov esi, dword ptr [0x10375144] */
  ESI = (r32((uint32_t)(0x10375144)));
  /* 1037132d push 0x10376038 */
  push32((uint32_t)(0x10376038u));
  /* 10371332 push 1 */
  push32((uint32_t)(0x1u));
  /* 10371334 call esi */
  call_ind((uint32_t)(ESI), 0x10371336u);
  /* 10371336 push 0x10376030 */
  push32((uint32_t)(0x10376030u));
  /* 1037133b push 4 */
  push32((uint32_t)(0x4u));
  /* 1037133d call esi */
  call_ind((uint32_t)(ESI), 0x1037133fu);
  /* 1037133f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371342 pop edi */
  EDI = (pop32());
  /* 10371343 pop esi */
  ESI = (pop32());
  /* 10371344 ret  */
  ESPCHK(0x10371012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10371345 (4370 bytes, 1470 insns) */
void f_10371345(void) {
  FTRACE(0x10371345u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10371345 push ecx */
  push32((uint32_t)(ECX));
  /* 10371346 push ebx */
  push32((uint32_t)(EBX));
  /* 10371347 push ebp */
  push32((uint32_t)(EBP));
  /* 10371348 push esi */
  push32((uint32_t)(ESI));
  /* 10371349 push edi */
  push32((uint32_t)(EDI));
  /* 1037134a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1037134c call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371352u);
  /* 10371352 mov esi, dword ptr [0x103750b8] */
  ESI = (r32((uint32_t)(0x103750b8)));
  /* 10371358 pop ecx */
  ECX = (pop32());
  /* 10371359 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1037135b push 1 */
  push32((uint32_t)(0x1u));
  /* 1037135d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1037135f pop ebp */
  EBP = (pop32());
  /* 10371360 je 0x10371497 */
  if (C.zf) goto L_10371497;
  /* 10371366 push ebx */
  push32((uint32_t)(EBX));
  /* 10371367 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10371369 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x1037136fu);
  /* 1037136f mov edi, dword ptr [0x103750b4] */
  EDI = (r32((uint32_t)(0x103750b4)));
  /* 10371375 push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 1037137a push 3 */
  push32((uint32_t)(0x3u));
  /* 1037137c push ebx */
  push32((uint32_t)(EBX));
  /* 1037137d call edi */
  call_ind((uint32_t)(EDI), 0x1037137fu);
  /* 1037137f push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 10371384 push ebp */
  push32((uint32_t)(EBP));
  /* 10371385 push ebx */
  push32((uint32_t)(EBX));
  /* 10371386 call edi */
  call_ind((uint32_t)(EDI), 0x10371388u);
  /* 10371388 push ebx */
  push32((uint32_t)(EBX));
  /* 10371389 push ebx */
  push32((uint32_t)(EBX));
  /* 1037138a push ebx */
  push32((uint32_t)(EBX));
  /* 1037138b call edi */
  call_ind((uint32_t)(EDI), 0x1037138du);
  /* 1037138d push ebx */
  push32((uint32_t)(EBX));
  /* 1037138e push 2 */
  push32((uint32_t)(0x2u));
  /* 10371390 push ebx */
  push32((uint32_t)(EBX));
  /* 10371391 call edi */
  call_ind((uint32_t)(EDI), 0x10371393u);
  /* 10371393 push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 10371398 push 5 */
  push32((uint32_t)(0x5u));
  /* 1037139a push ebx */
  push32((uint32_t)(EBX));
  /* 1037139b call edi */
  call_ind((uint32_t)(EDI), 0x1037139du);
  /* 1037139d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103713a0 push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 103713a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 103713a7 push ebx */
  push32((uint32_t)(EBX));
  /* 103713a8 call edi */
  call_ind((uint32_t)(EDI), 0x103713aau);
  /* 103713aa push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 103713af push 3 */
  push32((uint32_t)(0x3u));
  /* 103713b1 push ebp */
  push32((uint32_t)(EBP));
  /* 103713b2 call edi */
  call_ind((uint32_t)(EDI), 0x103713b4u);
  /* 103713b4 push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 103713b9 push ebp */
  push32((uint32_t)(EBP));
  /* 103713ba push ebp */
  push32((uint32_t)(EBP));
  /* 103713bb call edi */
  call_ind((uint32_t)(EDI), 0x103713bdu);
  /* 103713bd push ebx */
  push32((uint32_t)(EBX));
  /* 103713be push ebx */
  push32((uint32_t)(EBX));
  /* 103713bf push ebp */
  push32((uint32_t)(EBP));
  /* 103713c0 call edi */
  call_ind((uint32_t)(EDI), 0x103713c2u);
  /* 103713c2 push ebx */
  push32((uint32_t)(EBX));
  /* 103713c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103713c5 push ebp */
  push32((uint32_t)(EBP));
  /* 103713c6 call edi */
  call_ind((uint32_t)(EDI), 0x103713c8u);
  /* 103713c8 push 0x1312d00 */
  push32((uint32_t)(0x1312d00u));
  /* 103713cd push 5 */
  push32((uint32_t)(0x5u));
  /* 103713cf push ebp */
  push32((uint32_t)(EBP));
  /* 103713d0 call edi */
  call_ind((uint32_t)(EDI), 0x103713d2u);
  /* 103713d2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103713d5 push 0x1312d00 */
  push32((uint32_t)(0x1312d00u));
  /* 103713da push 4 */
  push32((uint32_t)(0x4u));
  /* 103713dc push ebp */
  push32((uint32_t)(EBP));
  /* 103713dd call edi */
  call_ind((uint32_t)(EDI), 0x103713dfu);
  /* 103713df push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 103713e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 103713e6 push 4 */
  push32((uint32_t)(0x4u));
  /* 103713e8 call edi */
  call_ind((uint32_t)(EDI), 0x103713eau);
  /* 103713ea push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 103713ef push ebp */
  push32((uint32_t)(EBP));
  /* 103713f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 103713f2 call edi */
  call_ind((uint32_t)(EDI), 0x103713f4u);
  /* 103713f4 push ebx */
  push32((uint32_t)(EBX));
  /* 103713f5 push ebx */
  push32((uint32_t)(EBX));
  /* 103713f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 103713f8 call edi */
  call_ind((uint32_t)(EDI), 0x103713fau);
  /* 103713fa push ebx */
  push32((uint32_t)(EBX));
  /* 103713fb push 2 */
  push32((uint32_t)(0x2u));
  /* 103713fd push 4 */
  push32((uint32_t)(0x4u));
  /* 103713ff call edi */
  call_ind((uint32_t)(EDI), 0x10371401u);
  /* 10371401 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10371406 push 5 */
  push32((uint32_t)(0x5u));
  /* 10371408 push 4 */
  push32((uint32_t)(0x4u));
  /* 1037140a call edi */
  call_ind((uint32_t)(EDI), 0x1037140cu);
  /* 1037140c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037140f push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10371414 push 4 */
  push32((uint32_t)(0x4u));
  /* 10371416 push 4 */
  push32((uint32_t)(0x4u));
  /* 10371418 call edi */
  call_ind((uint32_t)(EDI), 0x1037141au);
  /* 1037141a push 0x1037616c */
  push32((uint32_t)(0x1037616cu));
  /* 1037141f call dword ptr [0x103750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c4))), 0x10371425u);
  /* 10371425 push ebx */
  push32((uint32_t)(EBX));
  /* 10371426 call dword ptr [0x103750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c8))), 0x1037142cu);
  /* 1037142c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037142f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371431 jne 0x1037146b */
  if (!C.zf) goto L_1037146b;
  /* 10371433 mov edi, dword ptr [0x103750c0] */
  EDI = (r32((uint32_t)(0x103750c0)));
  /* 10371439 push ebp */
  push32((uint32_t)(EBP));
  /* 1037143a push 3 */
  push32((uint32_t)(0x3u));
  /* 1037143c push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 10371441 call edi */
  call_ind((uint32_t)(EDI), 0x10371443u);
  /* 10371443 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371445 push 3 */
  push32((uint32_t)(0x3u));
  /* 10371447 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 1037144c call edi */
  call_ind((uint32_t)(EDI), 0x1037144eu);
  /* 1037144e push 0x10376164 */
  push32((uint32_t)(0x10376164u));
  /* 10371453 call dword ptr [0x103750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c4))), 0x10371459u);
  /* 10371459 push ebx */
  push32((uint32_t)(EBX));
  /* 1037145a push 0x103765e0 */
  push32((uint32_t)(0x103765e0u));
  /* 1037145f call esi */
  call_ind((uint32_t)(ESI), 0x10371461u);
  /* 10371461 push ebp */
  push32((uint32_t)(EBP));
  /* 10371462 call dword ptr [0x103750d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750d0))), 0x10371468u);
  /* 10371468 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1037146b:;
  /* 1037146b push ebx */
  push32((uint32_t)(EBX));
  /* 1037146c push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 10371471 call esi */
  call_ind((uint32_t)(ESI), 0x10371473u);
  /* 10371473 push 0x103765c8 */
  push32((uint32_t)(0x103765c8u));
  /* 10371478 call dword ptr [0x103750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750d4))), 0x1037147eu);
  /* 1037147e push 0x103765d0 */
  push32((uint32_t)(0x103765d0u));
  /* 10371483 call dword ptr [0x103750cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750cc))), 0x10371489u);
  /* 10371489 push 0x103765d8 */
  push32((uint32_t)(0x103765d8u));
  /* 1037148e call dword ptr [0x103750dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750dc))), 0x10371494u);
  /* 10371494 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371497:;
  /* 10371497 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10371499 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x1037149fu);
  /* 1037149f mov edi, dword ptr [0x103750e0] */
  EDI = (r32((uint32_t)(0x103750e0)));
  /* 103714a5 pop ecx */
  ECX = (pop32());
  /* 103714a6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103714a8 je 0x1037151b */
  if (C.zf) goto L_1037151b;
  /* 103714aa push ebx */
  push32((uint32_t)(EBX));
  /* 103714ab call dword ptr [0x103750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c8))), 0x103714b1u);
  /* 103714b1 pop ecx */
  ECX = (pop32());
  /* 103714b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 103714b4 pop ebp */
  EBP = (pop32());
  /* 103714b5 sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103714b7 imul ebp, ebp, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(0xc8u); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103714bd call dword ptr [0x103750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750d8))), 0x103714c3u);
  /* 103714c3 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103714c5 jle 0x10371518 */
  if ((C.zf||C.sf!=C.of)) goto L_10371518;
  /* 103714c7 push ebx */
  push32((uint32_t)(EBX));
  /* 103714c8 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 103714ca call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x103714d0u);
  /* 103714d0 push ebx */
  push32((uint32_t)(EBX));
  /* 103714d1 push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 103714d6 call esi */
  call_ind((uint32_t)(ESI), 0x103714d8u);
  /* 103714d8 push ebx */
  push32((uint32_t)(EBX));
  /* 103714d9 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103714db push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 103714e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103714e2 pop ebp */
  EBP = (pop32());
  /* 103714e3 push ebp */
  push32((uint32_t)(EBP));
  /* 103714e4 call edi */
  call_ind((uint32_t)(EDI), 0x103714e6u);
  /* 103714e6 push ebx */
  push32((uint32_t)(EBX));
  /* 103714e7 push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 103714ec call esi */
  call_ind((uint32_t)(ESI), 0x103714eeu);
  /* 103714ee push ebx */
  push32((uint32_t)(EBX));
  /* 103714ef push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 103714f4 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 103714f9 push ebp */
  push32((uint32_t)(EBP));
  /* 103714fa call edi */
  call_ind((uint32_t)(EDI), 0x103714fcu);
  /* 103714fc push ebx */
  push32((uint32_t)(EBX));
  /* 103714fd call dword ptr [0x103750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c8))), 0x10371503u);
  /* 10371503 push 7 */
  push32((uint32_t)(0x7u));
  /* 10371505 pop ecx */
  ECX = (pop32());
  /* 10371506 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10371508 imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1037150b push ecx */
  push32((uint32_t)(ECX));
  /* 1037150c push ebp */
  push32((uint32_t)(EBP));
  /* 1037150d call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x10371513u);
  /* 10371513 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371516 jmp 0x1037151b */
  goto L_1037151b;
L_10371518:;
  /* 10371518 push 1 */
  push32((uint32_t)(0x1u));
  /* 1037151a pop ebp */
  EBP = (pop32());
L_1037151b:;
  /* 1037151b push ebp */
  push32((uint32_t)(EBP));
  /* 1037151c call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371522u);
  /* 10371522 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371524 pop ecx */
  ECX = (pop32());
  /* 10371525 je 0x10371553 */
  if (C.zf) goto L_10371553;
  /* 10371527 push 0x10376540 */
  push32((uint32_t)(0x10376540u));
  /* 1037152c call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371532u);
  /* 10371532 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371534 pop ecx */
  ECX = (pop32());
  /* 10371535 jne 0x10371553 */
  if (!C.zf) goto L_10371553;
  /* 10371537 push ebx */
  push32((uint32_t)(EBX));
  /* 10371538 push ebp */
  push32((uint32_t)(EBP));
  /* 10371539 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x1037153fu);
  /* 1037153f push 0x1037615c */
  push32((uint32_t)(0x1037615cu));
  /* 10371544 call dword ptr [0x103750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c4))), 0x1037154au);
  /* 1037154a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037154d call dword ptr [0x103750e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e4))), 0x10371553u);
L_10371553:;
  /* 10371553 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371555 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x1037155bu);
  /* 1037155b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1037155d pop ecx */
  ECX = (pop32());
  /* 1037155e je 0x1037158d */
  if (C.zf) goto L_1037158d;
  /* 10371560 push 0x103764a0 */
  push32((uint32_t)(0x103764a0u));
  /* 10371565 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037156bu);
  /* 1037156b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037156d pop ecx */
  ECX = (pop32());
  /* 1037156e jne 0x1037158d */
  if (!C.zf) goto L_1037158d;
  /* 10371570 push ebx */
  push32((uint32_t)(EBX));
  /* 10371571 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371573 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10371579u);
  /* 10371579 push 0x10376154 */
  push32((uint32_t)(0x10376154u));
  /* 1037157e call dword ptr [0x103750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c4))), 0x10371584u);
  /* 10371584 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371587 call dword ptr [0x103750f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f4))), 0x1037158du);
L_1037158d:;
  /* 1037158d push 2 */
  push32((uint32_t)(0x2u));
  /* 1037158f call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371595u);
  /* 10371595 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371597 pop ecx */
  ECX = (pop32());
  /* 10371598 je 0x103715c9 */
  if (C.zf) goto L_103715c9;
  /* 1037159a push ebx */
  push32((uint32_t)(EBX));
  /* 1037159b push 0x103764a8 */
  push32((uint32_t)(0x103764a8u));
  /* 103715a0 call dword ptr [0x103750f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f8))), 0x103715a6u);
  /* 103715a6 pop ecx */
  ECX = (pop32());
  /* 103715a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103715a9 pop ecx */
  ECX = (pop32());
  /* 103715aa jne 0x103715c9 */
  if (!C.zf) goto L_103715c9;
  /* 103715ac push ebx */
  push32((uint32_t)(EBX));
  /* 103715ad push 2 */
  push32((uint32_t)(0x2u));
  /* 103715af call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x103715b5u);
  /* 103715b5 push 0x1037614c */
  push32((uint32_t)(0x1037614cu));
  /* 103715ba call dword ptr [0x103750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c4))), 0x103715c0u);
  /* 103715c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103715c3 call dword ptr [0x103750f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f4))), 0x103715c9u);
L_103715c9:;
  /* 103715c9 push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 103715ce push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 103715d3 call dword ptr [0x103750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f0))), 0x103715d9u);
  /* 103715d9 pop ecx */
  ECX = (pop32());
  /* 103715da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103715dc pop ecx */
  ECX = (pop32());
  /* 103715dd jle 0x10371606 */
  if ((C.zf||C.sf!=C.of)) goto L_10371606;
  /* 103715df push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 103715e4 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103715eau);
  /* 103715ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103715ec pop ecx */
  ECX = (pop32());
  /* 103715ed jle 0x10371606 */
  if ((C.zf||C.sf!=C.of)) goto L_10371606;
  /* 103715ef push ebx */
  push32((uint32_t)(EBX));
  /* 103715f0 push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 103715f5 call esi */
  call_ind((uint32_t)(ESI), 0x103715f7u);
  /* 103715f7 push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 103715fc push ebp */
  push32((uint32_t)(EBP));
  /* 103715fd call dword ptr [0x10375100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375100))), 0x10371603u);
  /* 10371603 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371606:;
  /* 10371606 push 3 */
  push32((uint32_t)(0x3u));
  /* 10371608 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x1037160eu);
  /* 1037160e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371610 pop ecx */
  ECX = (pop32());
  /* 10371611 je 0x10371652 */
  if (C.zf) goto L_10371652;
  /* 10371613 push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 10371618 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037161eu);
  /* 1037161e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371620 pop ecx */
  ECX = (pop32());
  /* 10371621 jle 0x10371652 */
  if ((C.zf||C.sf!=C.of)) goto L_10371652;
  /* 10371623 push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 10371628 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037162eu);
  /* 1037162e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371630 pop ecx */
  ECX = (pop32());
  /* 10371631 jne 0x10371652 */
  if (!C.zf) goto L_10371652;
  /* 10371633 push ebx */
  push32((uint32_t)(EBX));
  /* 10371634 push 3 */
  push32((uint32_t)(0x3u));
  /* 10371636 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x1037163cu);
  /* 1037163c push ebx */
  push32((uint32_t)(EBX));
  /* 1037163d push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 10371642 call esi */
  call_ind((uint32_t)(ESI), 0x10371644u);
  /* 10371644 push ebx */
  push32((uint32_t)(EBX));
  /* 10371645 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10371647 push 0x10376600 */
  push32((uint32_t)(0x10376600u));
  /* 1037164c push ebp */
  push32((uint32_t)(EBP));
  /* 1037164d call edi */
  call_ind((uint32_t)(EDI), 0x1037164fu);
  /* 1037164f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371652:;
  /* 10371652 push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 10371657 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 1037165c call dword ptr [0x103750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f0))), 0x10371662u);
  /* 10371662 pop ecx */
  ECX = (pop32());
  /* 10371663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371665 pop ecx */
  ECX = (pop32());
  /* 10371666 jle 0x1037168f */
  if ((C.zf||C.sf!=C.of)) goto L_1037168f;
  /* 10371668 push 0x10376598 */
  push32((uint32_t)(0x10376598u));
  /* 1037166d call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371673u);
  /* 10371673 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371675 pop ecx */
  ECX = (pop32());
  /* 10371676 jle 0x1037168f */
  if ((C.zf||C.sf!=C.of)) goto L_1037168f;
  /* 10371678 push ebx */
  push32((uint32_t)(EBX));
  /* 10371679 push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 1037167e call esi */
  call_ind((uint32_t)(ESI), 0x10371680u);
  /* 10371680 push 0x10376598 */
  push32((uint32_t)(0x10376598u));
  /* 10371685 push ebp */
  push32((uint32_t)(EBP));
  /* 10371686 call dword ptr [0x10375100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375100))), 0x1037168cu);
  /* 1037168c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1037168f:;
  /* 1037168f push 4 */
  push32((uint32_t)(0x4u));
  /* 10371691 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371697u);
  /* 10371697 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371699 pop ecx */
  ECX = (pop32());
  /* 1037169a je 0x103716de */
  if (C.zf) goto L_103716de;
  /* 1037169c push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 103716a1 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103716a7u);
  /* 103716a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103716a9 pop ecx */
  ECX = (pop32());
  /* 103716aa jle 0x103716de */
  if ((C.zf||C.sf!=C.of)) goto L_103716de;
  /* 103716ac push 0x10376598 */
  push32((uint32_t)(0x10376598u));
  /* 103716b1 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103716b7u);
  /* 103716b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103716b9 pop ecx */
  ECX = (pop32());
  /* 103716ba jne 0x103716de */
  if (!C.zf) goto L_103716de;
  /* 103716bc push ebx */
  push32((uint32_t)(EBX));
  /* 103716bd push 4 */
  push32((uint32_t)(0x4u));
  /* 103716bf call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x103716c5u);
  /* 103716c5 push ebx */
  push32((uint32_t)(EBX));
  /* 103716c6 push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 103716cb call esi */
  call_ind((uint32_t)(ESI), 0x103716cdu);
  /* 103716cd push ebx */
  push32((uint32_t)(EBX));
  /* 103716ce push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 103716d3 push 0x10376628 */
  push32((uint32_t)(0x10376628u));
  /* 103716d8 push ebp */
  push32((uint32_t)(EBP));
  /* 103716d9 call edi */
  call_ind((uint32_t)(EDI), 0x103716dbu);
  /* 103716db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103716de:;
  /* 103716de push 6 */
  push32((uint32_t)(0x6u));
  /* 103716e0 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x103716e6u);
  /* 103716e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103716e8 pop ecx */
  ECX = (pop32());
  /* 103716e9 je 0x10371742 */
  if (C.zf) goto L_10371742;
  /* 103716eb push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 103716f0 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103716f6u);
  /* 103716f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103716f8 pop ecx */
  ECX = (pop32());
  /* 103716f9 je 0x1037170b */
  if (C.zf) goto L_1037170b;
  /* 103716fb push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 10371700 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371706u);
  /* 10371706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371708 pop ecx */
  ECX = (pop32());
  /* 10371709 jne 0x10371742 */
  if (!C.zf) goto L_10371742;
L_1037170b:;
  /* 1037170b push ebx */
  push32((uint32_t)(EBX));
  /* 1037170c push 6 */
  push32((uint32_t)(0x6u));
  /* 1037170e call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10371714u);
  /* 10371714 push ebx */
  push32((uint32_t)(EBX));
  /* 10371715 push 0x103764d0 */
  push32((uint32_t)(0x103764d0u));
  /* 1037171a call esi */
  call_ind((uint32_t)(ESI), 0x1037171cu);
  /* 1037171c push ebx */
  push32((uint32_t)(EBX));
  /* 1037171d push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1037171f push 0x103765e8 */
  push32((uint32_t)(0x103765e8u));
  /* 10371724 push ebp */
  push32((uint32_t)(EBP));
  /* 10371725 call edi */
  call_ind((uint32_t)(EDI), 0x10371727u);
  /* 10371727 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371729 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1037172b push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 10371730 push ebp */
  push32((uint32_t)(EBP));
  /* 10371731 call edi */
  call_ind((uint32_t)(EDI), 0x10371733u);
  /* 10371733 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371735 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10371737 push 0x103765f8 */
  push32((uint32_t)(0x103765f8u));
  /* 1037173c push ebp */
  push32((uint32_t)(EBP));
  /* 1037173d call edi */
  call_ind((uint32_t)(EDI), 0x1037173fu);
  /* 1037173f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371742:;
  /* 10371742 push 7 */
  push32((uint32_t)(0x7u));
  /* 10371744 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x1037174au);
  /* 1037174a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1037174c pop ecx */
  ECX = (pop32());
  /* 1037174d je 0x103717af */
  if (C.zf) goto L_103717af;
  /* 1037174f push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 10371754 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037175au);
  /* 1037175a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037175c pop ecx */
  ECX = (pop32());
  /* 1037175d je 0x1037176f */
  if (C.zf) goto L_1037176f;
  /* 1037175f push 0x10376598 */
  push32((uint32_t)(0x10376598u));
  /* 10371764 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037176au);
  /* 1037176a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037176c pop ecx */
  ECX = (pop32());
  /* 1037176d jne 0x103717af */
  if (!C.zf) goto L_103717af;
L_1037176f:;
  /* 1037176f push ebx */
  push32((uint32_t)(EBX));
  /* 10371770 push 7 */
  push32((uint32_t)(0x7u));
  /* 10371772 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10371778u);
  /* 10371778 push ebx */
  push32((uint32_t)(EBX));
  /* 10371779 push 0x10376518 */
  push32((uint32_t)(0x10376518u));
  /* 1037177e call esi */
  call_ind((uint32_t)(ESI), 0x10371780u);
  /* 10371780 push ebx */
  push32((uint32_t)(EBX));
  /* 10371781 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 10371786 push 0x10376618 */
  push32((uint32_t)(0x10376618u));
  /* 1037178b push ebp */
  push32((uint32_t)(EBP));
  /* 1037178c call edi */
  call_ind((uint32_t)(EDI), 0x1037178eu);
  /* 1037178e push 2 */
  push32((uint32_t)(0x2u));
  /* 10371790 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 10371795 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 1037179a push ebp */
  push32((uint32_t)(EBP));
  /* 1037179b call edi */
  call_ind((uint32_t)(EDI), 0x1037179du);
  /* 1037179d push 2 */
  push32((uint32_t)(0x2u));
  /* 1037179f push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 103717a4 push 0x10376638 */
  push32((uint32_t)(0x10376638u));
  /* 103717a9 push ebp */
  push32((uint32_t)(EBP));
  /* 103717aa call edi */
  call_ind((uint32_t)(EDI), 0x103717acu);
  /* 103717ac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103717af:;
  /* 103717af push ebp */
  push32((uint32_t)(EBP));
  /* 103717b0 call dword ptr [0x10375104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375104))), 0x103717b6u);
  /* 103717b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103717b8 pop ecx */
  ECX = (pop32());
  /* 103717b9 je 0x10371879 */
  if (C.zf) goto L_10371879;
  /* 103717bf push ebx */
  push32((uint32_t)(EBX));
  /* 103717c0 push 0x103764d8 */
  push32((uint32_t)(0x103764d8u));
  /* 103717c5 call esi */
  call_ind((uint32_t)(ESI), 0x103717c7u);
  /* 103717c7 push ebx */
  push32((uint32_t)(EBX));
  /* 103717c8 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103717ca push 0x103765e8 */
  push32((uint32_t)(0x103765e8u));
  /* 103717cf push ebp */
  push32((uint32_t)(EBP));
  /* 103717d0 call edi */
  call_ind((uint32_t)(EDI), 0x103717d2u);
  /* 103717d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103717d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103717d6 push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 103717db push ebp */
  push32((uint32_t)(EBP));
  /* 103717dc call edi */
  call_ind((uint32_t)(EDI), 0x103717deu);
  /* 103717de push 2 */
  push32((uint32_t)(0x2u));
  /* 103717e0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103717e2 push 0x10376608 */
  push32((uint32_t)(0x10376608u));
  /* 103717e7 push ebp */
  push32((uint32_t)(EBP));
  /* 103717e8 call edi */
  call_ind((uint32_t)(EDI), 0x103717eau);
  /* 103717ea push ebx */
  push32((uint32_t)(EBX));
  /* 103717eb push 0x10376520 */
  push32((uint32_t)(0x10376520u));
  /* 103717f0 call esi */
  call_ind((uint32_t)(ESI), 0x103717f2u);
  /* 103717f2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103717f5 push ebx */
  push32((uint32_t)(EBX));
  /* 103717f6 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 103717f8 push 0x103765e8 */
  push32((uint32_t)(0x103765e8u));
  /* 103717fd push ebp */
  push32((uint32_t)(EBP));
  /* 103717fe call edi */
  call_ind((uint32_t)(EDI), 0x10371800u);
  /* 10371800 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371802 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10371804 push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 10371809 push ebp */
  push32((uint32_t)(EBP));
  /* 1037180a call edi */
  call_ind((uint32_t)(EDI), 0x1037180cu);
  /* 1037180c push 2 */
  push32((uint32_t)(0x2u));
  /* 1037180e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10371810 push 0x10376610 */
  push32((uint32_t)(0x10376610u));
  /* 10371815 push ebp */
  push32((uint32_t)(EBP));
  /* 10371816 call edi */
  call_ind((uint32_t)(EDI), 0x10371818u);
  /* 10371818 push ebx */
  push32((uint32_t)(EBX));
  /* 10371819 push 0x10376528 */
  push32((uint32_t)(0x10376528u));
  /* 1037181e call esi */
  call_ind((uint32_t)(ESI), 0x10371820u);
  /* 10371820 push ebx */
  push32((uint32_t)(EBX));
  /* 10371821 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10371826 push 0x10376618 */
  push32((uint32_t)(0x10376618u));
  /* 1037182b push ebp */
  push32((uint32_t)(EBP));
  /* 1037182c call edi */
  call_ind((uint32_t)(EDI), 0x1037182eu);
  /* 1037182e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371831 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371833 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10371838 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 1037183d push ebp */
  push32((uint32_t)(EBP));
  /* 1037183e call edi */
  call_ind((uint32_t)(EDI), 0x10371840u);
  /* 10371840 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371842 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10371847 push 0x10376628 */
  push32((uint32_t)(0x10376628u));
  /* 1037184c push ebp */
  push32((uint32_t)(EBP));
  /* 1037184d call edi */
  call_ind((uint32_t)(EDI), 0x1037184fu);
  /* 1037184f push ebx */
  push32((uint32_t)(EBX));
  /* 10371850 call dword ptr [0x103750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c8))), 0x10371856u);
  /* 10371856 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1037185c mov ecx, 0x76c */
  ECX = (0x76cu);
  /* 10371861 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10371863 push ecx */
  push32((uint32_t)(ECX));
  /* 10371864 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371866 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x1037186cu);
  /* 1037186c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1037186e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10371870 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x10371876u);
  /* 10371876 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371879:;
  /* 10371879 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1037187b call dword ptr [0x103750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750fc))), 0x10371881u);
  /* 10371881 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371883 pop ecx */
  ECX = (pop32());
  /* 10371884 je 0x10371939 */
  if (C.zf) goto L_10371939;
  /* 1037188a push 0x10376520 */
  push32((uint32_t)(0x10376520u));
  /* 1037188f call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371895u);
  /* 10371895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371897 pop ecx */
  ECX = (pop32());
  /* 10371898 jle 0x103718da */
  if ((C.zf||C.sf!=C.of)) goto L_103718da;
  /* 1037189a push 0x10376530 */
  push32((uint32_t)(0x10376530u));
  /* 1037189f call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103718a5u);
  /* 103718a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103718a7 pop ecx */
  ECX = (pop32());
  /* 103718a8 jle 0x103718da */
  if ((C.zf||C.sf!=C.of)) goto L_103718da;
  /* 103718aa push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 103718af push 0x10376520 */
  push32((uint32_t)(0x10376520u));
  /* 103718b4 push 0x103765e8 */
  push32((uint32_t)(0x103765e8u));
  /* 103718b9 push 0x10376678 */
  push32((uint32_t)(0x10376678u));
  /* 103718be call dword ptr [0x1037510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037510c))), 0x103718c4u);
  /* 103718c4 push ebx */
  push32((uint32_t)(EBX));
  /* 103718c5 push 0x10376530 */
  push32((uint32_t)(0x10376530u));
  /* 103718ca call esi */
  call_ind((uint32_t)(ESI), 0x103718ccu);
  /* 103718cc push ebx */
  push32((uint32_t)(EBX));
  /* 103718cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103718cf push 0x10376678 */
  push32((uint32_t)(0x10376678u));
  /* 103718d4 push ebp */
  push32((uint32_t)(EBP));
  /* 103718d5 call edi */
  call_ind((uint32_t)(EDI), 0x103718d7u);
  /* 103718d7 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103718da:;
  /* 103718da push 0x10376528 */
  push32((uint32_t)(0x10376528u));
  /* 103718df call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103718e5u);
  /* 103718e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103718e7 pop ecx */
  ECX = (pop32());
  /* 103718e8 jle 0x1037192d */
  if ((C.zf||C.sf!=C.of)) goto L_1037192d;
  /* 103718ea push 0x10376538 */
  push32((uint32_t)(0x10376538u));
  /* 103718ef call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103718f5u);
  /* 103718f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103718f7 pop ecx */
  ECX = (pop32());
  /* 103718f8 jle 0x1037192d */
  if ((C.zf||C.sf!=C.of)) goto L_1037192d;
  /* 103718fa push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 103718ff push 0x10376528 */
  push32((uint32_t)(0x10376528u));
  /* 10371904 push 0x10376618 */
  push32((uint32_t)(0x10376618u));
  /* 10371909 push 0x10376680 */
  push32((uint32_t)(0x10376680u));
  /* 1037190e call dword ptr [0x1037510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037510c))), 0x10371914u);
  /* 10371914 push ebx */
  push32((uint32_t)(EBX));
  /* 10371915 push 0x10376538 */
  push32((uint32_t)(0x10376538u));
  /* 1037191a call esi */
  call_ind((uint32_t)(ESI), 0x1037191cu);
  /* 1037191c push ebx */
  push32((uint32_t)(EBX));
  /* 1037191d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10371922 push 0x10376680 */
  push32((uint32_t)(0x10376680u));
  /* 10371927 push ebp */
  push32((uint32_t)(EBP));
  /* 10371928 call edi */
  call_ind((uint32_t)(EDI), 0x1037192au);
  /* 1037192a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1037192d:;
  /* 1037192d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1037192f push 0xb */
  push32((uint32_t)(0xbu));
  /* 10371931 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x10371937u);
  /* 10371937 pop ecx */
  ECX = (pop32());
  /* 10371938 pop ecx */
  ECX = (pop32());
L_10371939:;
  /* 10371939 push 2 */
  push32((uint32_t)(0x2u));
  /* 1037193b call dword ptr [0x10375104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375104))), 0x10371941u);
  /* 10371941 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371943 pop ecx */
  ECX = (pop32());
  /* 10371944 je 0x1037199a */
  if (C.zf) goto L_1037199a;
  /* 10371946 push ebx */
  push32((uint32_t)(EBX));
  /* 10371947 push 0x10376580 */
  push32((uint32_t)(0x10376580u));
  /* 1037194c call esi */
  call_ind((uint32_t)(ESI), 0x1037194eu);
  /* 1037194e push ebx */
  push32((uint32_t)(EBX));
  /* 1037194f push 0xaa */
  push32((uint32_t)(0xaau));
  /* 10371954 push 0x10376618 */
  push32((uint32_t)(0x10376618u));
  /* 10371959 push ebp */
  push32((uint32_t)(EBP));
  /* 1037195a call edi */
  call_ind((uint32_t)(EDI), 0x1037195cu);
  /* 1037195c push 2 */
  push32((uint32_t)(0x2u));
  /* 1037195e push 0xaa */
  push32((uint32_t)(0xaau));
  /* 10371963 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 10371968 push ebp */
  push32((uint32_t)(EBP));
  /* 10371969 call edi */
  call_ind((uint32_t)(EDI), 0x1037196bu);
  /* 1037196b push 2 */
  push32((uint32_t)(0x2u));
  /* 1037196d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10371972 push 0x10376608 */
  push32((uint32_t)(0x10376608u));
  /* 10371977 push ebp */
  push32((uint32_t)(EBP));
  /* 10371978 call edi */
  call_ind((uint32_t)(EDI), 0x1037197au);
  /* 1037197a push ebx */
  push32((uint32_t)(EBX));
  /* 1037197b call dword ptr [0x103750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c8))), 0x10371981u);
  /* 10371981 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10371987 mov ecx, 0x76c */
  ECX = (0x76cu);
  /* 1037198c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1037198e push ecx */
  push32((uint32_t)(ECX));
  /* 1037198f push 3 */
  push32((uint32_t)(0x3u));
  /* 10371991 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x10371997u);
  /* 10371997 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1037199a:;
  /* 1037199a push 3 */
  push32((uint32_t)(0x3u));
  /* 1037199c call dword ptr [0x10375104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375104))), 0x103719a2u);
  /* 103719a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103719a4 pop ecx */
  ECX = (pop32());
  /* 103719a5 je 0x103719f0 */
  if (C.zf) goto L_103719f0;
  /* 103719a7 push ebx */
  push32((uint32_t)(EBX));
  /* 103719a8 push 0x103764e0 */
  push32((uint32_t)(0x103764e0u));
  /* 103719ad call esi */
  call_ind((uint32_t)(ESI), 0x103719afu);
  /* 103719af push ebx */
  push32((uint32_t)(EBX));
  /* 103719b0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103719b2 push 0x103765f8 */
  push32((uint32_t)(0x103765f8u));
  /* 103719b7 push ebp */
  push32((uint32_t)(EBP));
  /* 103719b8 call edi */
  call_ind((uint32_t)(EDI), 0x103719bau);
  /* 103719ba push ebx */
  push32((uint32_t)(EBX));
  /* 103719bb push 0x10376568 */
  push32((uint32_t)(0x10376568u));
  /* 103719c0 call esi */
  call_ind((uint32_t)(ESI), 0x103719c2u);
  /* 103719c2 push ebx */
  push32((uint32_t)(EBX));
  /* 103719c3 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 103719c8 push 0x10376638 */
  push32((uint32_t)(0x10376638u));
  /* 103719cd push ebp */
  push32((uint32_t)(EBP));
  /* 103719ce call edi */
  call_ind((uint32_t)(EDI), 0x103719d0u);
  /* 103719d0 push ebx */
  push32((uint32_t)(EBX));
  /* 103719d1 call dword ptr [0x103750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c8))), 0x103719d7u);
  /* 103719d7 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103719dd mov ecx, 0x76c */
  ECX = (0x76cu);
  /* 103719e2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103719e4 push ecx */
  push32((uint32_t)(ECX));
  /* 103719e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 103719e7 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x103719edu);
  /* 103719ed add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103719f0:;
  /* 103719f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 103719f2 call dword ptr [0x10375104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375104))), 0x103719f8u);
  /* 103719f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103719fa pop ecx */
  ECX = (pop32());
  /* 103719fb je 0x10371ab9 */
  if (C.zf) goto L_10371ab9;
  /* 10371a01 push ebx */
  push32((uint32_t)(EBX));
  /* 10371a02 push 0x10376510 */
  push32((uint32_t)(0x10376510u));
  /* 10371a07 call esi */
  call_ind((uint32_t)(ESI), 0x10371a09u);
  /* 10371a09 push ebx */
  push32((uint32_t)(EBX));
  /* 10371a0a push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10371a0c push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 10371a11 push ebp */
  push32((uint32_t)(EBP));
  /* 10371a12 call edi */
  call_ind((uint32_t)(EDI), 0x10371a14u);
  /* 10371a14 push ebx */
  push32((uint32_t)(EBX));
  /* 10371a15 push 0x10376590 */
  push32((uint32_t)(0x10376590u));
  /* 10371a1a call esi */
  call_ind((uint32_t)(ESI), 0x10371a1cu);
  /* 10371a1c push ebx */
  push32((uint32_t)(EBX));
  /* 10371a1d push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10371a22 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 10371a27 push ebp */
  push32((uint32_t)(EBP));
  /* 10371a28 call edi */
  call_ind((uint32_t)(EDI), 0x10371a2au);
  /* 10371a2a push ebx */
  push32((uint32_t)(EBX));
  /* 10371a2b push 0x103764f8 */
  push32((uint32_t)(0x103764f8u));
  /* 10371a30 call esi */
  call_ind((uint32_t)(ESI), 0x10371a32u);
  /* 10371a32 push ebx */
  push32((uint32_t)(EBX));
  /* 10371a33 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10371a35 push 0x103765e8 */
  push32((uint32_t)(0x103765e8u));
  /* 10371a3a push ebp */
  push32((uint32_t)(EBP));
  /* 10371a3b call edi */
  call_ind((uint32_t)(EDI), 0x10371a3du);
  /* 10371a3d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371a42 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10371a44 push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 10371a49 push ebp */
  push32((uint32_t)(EBP));
  /* 10371a4a call edi */
  call_ind((uint32_t)(EDI), 0x10371a4cu);
  /* 10371a4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10371a4e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10371a50 push 0x10376600 */
  push32((uint32_t)(0x10376600u));
  /* 10371a55 push ebp */
  push32((uint32_t)(EBP));
  /* 10371a56 call edi */
  call_ind((uint32_t)(EDI), 0x10371a58u);
  /* 10371a58 push ebx */
  push32((uint32_t)(EBX));
  /* 10371a59 push 0x10376548 */
  push32((uint32_t)(0x10376548u));
  /* 10371a5e call esi */
  call_ind((uint32_t)(ESI), 0x10371a60u);
  /* 10371a60 push ebx */
  push32((uint32_t)(EBX));
  /* 10371a61 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10371a66 push 0x10376618 */
  push32((uint32_t)(0x10376618u));
  /* 10371a6b push ebp */
  push32((uint32_t)(EBP));
  /* 10371a6c call edi */
  call_ind((uint32_t)(EDI), 0x10371a6eu);
  /* 10371a6e push 2 */
  push32((uint32_t)(0x2u));
  /* 10371a70 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10371a75 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 10371a7a push ebp */
  push32((uint32_t)(EBP));
  /* 10371a7b call edi */
  call_ind((uint32_t)(EDI), 0x10371a7du);
  /* 10371a7d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371a80 push 2 */
  push32((uint32_t)(0x2u));
  /* 10371a82 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10371a87 push 0x10376640 */
  push32((uint32_t)(0x10376640u));
  /* 10371a8c push ebp */
  push32((uint32_t)(EBP));
  /* 10371a8d call edi */
  call_ind((uint32_t)(EDI), 0x10371a8fu);
  /* 10371a8f push ebx */
  push32((uint32_t)(EBX));
  /* 10371a90 call dword ptr [0x103750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c8))), 0x10371a96u);
  /* 10371a96 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10371a9c mov ecx, 0x76c */
  ECX = (0x76cu);
  /* 10371aa1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10371aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10371aa4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10371aa6 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x10371aacu);
  /* 10371aac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10371aae push 0xc */
  push32((uint32_t)(0xcu));
  /* 10371ab0 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x10371ab6u);
  /* 10371ab6 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371ab9:;
  /* 10371ab9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10371abb call dword ptr [0x103750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750fc))), 0x10371ac1u);
  /* 10371ac1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371ac3 pop ecx */
  ECX = (pop32());
  /* 10371ac4 je 0x10371b79 */
  if (C.zf) goto L_10371b79;
  /* 10371aca push 0x103764f8 */
  push32((uint32_t)(0x103764f8u));
  /* 10371acf call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371ad5u);
  /* 10371ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371ad7 pop ecx */
  ECX = (pop32());
  /* 10371ad8 jle 0x10371b1a */
  if ((C.zf||C.sf!=C.of)) goto L_10371b1a;
  /* 10371ada push 0x10376500 */
  push32((uint32_t)(0x10376500u));
  /* 10371adf call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371ae5u);
  /* 10371ae5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371ae7 pop ecx */
  ECX = (pop32());
  /* 10371ae8 jle 0x10371b1a */
  if ((C.zf||C.sf!=C.of)) goto L_10371b1a;
  /* 10371aea push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10371aef push 0x103764f8 */
  push32((uint32_t)(0x103764f8u));
  /* 10371af4 push 0x103765e8 */
  push32((uint32_t)(0x103765e8u));
  /* 10371af9 push 0x10376678 */
  push32((uint32_t)(0x10376678u));
  /* 10371afe call dword ptr [0x1037510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037510c))), 0x10371b04u);
  /* 10371b04 push ebx */
  push32((uint32_t)(EBX));
  /* 10371b05 push 0x10376500 */
  push32((uint32_t)(0x10376500u));
  /* 10371b0a call esi */
  call_ind((uint32_t)(ESI), 0x10371b0cu);
  /* 10371b0c push ebx */
  push32((uint32_t)(EBX));
  /* 10371b0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10371b0f push 0x10376678 */
  push32((uint32_t)(0x10376678u));
  /* 10371b14 push ebp */
  push32((uint32_t)(EBP));
  /* 10371b15 call edi */
  call_ind((uint32_t)(EDI), 0x10371b17u);
  /* 10371b17 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371b1a:;
  /* 10371b1a push 0x10376548 */
  push32((uint32_t)(0x10376548u));
  /* 10371b1f call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371b25u);
  /* 10371b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371b27 pop ecx */
  ECX = (pop32());
  /* 10371b28 jle 0x10371b6d */
  if ((C.zf||C.sf!=C.of)) goto L_10371b6d;
  /* 10371b2a push 0x10376560 */
  push32((uint32_t)(0x10376560u));
  /* 10371b2f call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371b35u);
  /* 10371b35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371b37 pop ecx */
  ECX = (pop32());
  /* 10371b38 jle 0x10371b6d */
  if ((C.zf||C.sf!=C.of)) goto L_10371b6d;
  /* 10371b3a push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10371b3f push 0x10376548 */
  push32((uint32_t)(0x10376548u));
  /* 10371b44 push 0x10376618 */
  push32((uint32_t)(0x10376618u));
  /* 10371b49 push 0x10376680 */
  push32((uint32_t)(0x10376680u));
  /* 10371b4e call dword ptr [0x1037510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037510c))), 0x10371b54u);
  /* 10371b54 push ebx */
  push32((uint32_t)(EBX));
  /* 10371b55 push 0x10376560 */
  push32((uint32_t)(0x10376560u));
  /* 10371b5a call esi */
  call_ind((uint32_t)(ESI), 0x10371b5cu);
  /* 10371b5c push ebx */
  push32((uint32_t)(EBX));
  /* 10371b5d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10371b62 push 0x10376680 */
  push32((uint32_t)(0x10376680u));
  /* 10371b67 push ebp */
  push32((uint32_t)(EBP));
  /* 10371b68 call edi */
  call_ind((uint32_t)(EDI), 0x10371b6au);
  /* 10371b6a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371b6d:;
  /* 10371b6d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10371b6f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10371b71 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x10371b77u);
  /* 10371b77 pop ecx */
  ECX = (pop32());
  /* 10371b78 pop ecx */
  ECX = (pop32());
L_10371b79:;
  /* 10371b79 push 0x10376510 */
  push32((uint32_t)(0x10376510u));
  /* 10371b7e push 0x103765f0 */
  push32((uint32_t)(0x103765f0u));
  /* 10371b83 call dword ptr [0x103750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f0))), 0x10371b89u);
  /* 10371b89 pop ecx */
  ECX = (pop32());
  /* 10371b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371b8c pop ecx */
  ECX = (pop32());
  /* 10371b8d jle 0x10371bb6 */
  if ((C.zf||C.sf!=C.of)) goto L_10371bb6;
  /* 10371b8f push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 10371b94 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371b9au);
  /* 10371b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371b9c pop ecx */
  ECX = (pop32());
  /* 10371b9d jle 0x10371bb6 */
  if ((C.zf||C.sf!=C.of)) goto L_10371bb6;
  /* 10371b9f push ebx */
  push32((uint32_t)(EBX));
  /* 10371ba0 push 0x10376510 */
  push32((uint32_t)(0x10376510u));
  /* 10371ba5 call esi */
  call_ind((uint32_t)(ESI), 0x10371ba7u);
  /* 10371ba7 push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 10371bac push ebp */
  push32((uint32_t)(EBP));
  /* 10371bad call dword ptr [0x10375100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375100))), 0x10371bb3u);
  /* 10371bb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371bb6:;
  /* 10371bb6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10371bb8 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371bbeu);
  /* 10371bbe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371bc0 pop ecx */
  ECX = (pop32());
  /* 10371bc1 je 0x10371c02 */
  if (C.zf) goto L_10371c02;
  /* 10371bc3 push 0x10376510 */
  push32((uint32_t)(0x10376510u));
  /* 10371bc8 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371bceu);
  /* 10371bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371bd0 pop ecx */
  ECX = (pop32());
  /* 10371bd1 jle 0x10371c02 */
  if ((C.zf||C.sf!=C.of)) goto L_10371c02;
  /* 10371bd3 push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 10371bd8 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371bdeu);
  /* 10371bde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371be0 pop ecx */
  ECX = (pop32());
  /* 10371be1 jne 0x10371c02 */
  if (!C.zf) goto L_10371c02;
  /* 10371be3 push ebx */
  push32((uint32_t)(EBX));
  /* 10371be4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10371be6 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10371becu);
  /* 10371bec push ebx */
  push32((uint32_t)(EBX));
  /* 10371bed push 0x10376510 */
  push32((uint32_t)(0x10376510u));
  /* 10371bf2 call esi */
  call_ind((uint32_t)(ESI), 0x10371bf4u);
  /* 10371bf4 push ebx */
  push32((uint32_t)(EBX));
  /* 10371bf5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10371bf7 push 0x10376610 */
  push32((uint32_t)(0x10376610u));
  /* 10371bfc push ebp */
  push32((uint32_t)(EBP));
  /* 10371bfd call edi */
  call_ind((uint32_t)(EDI), 0x10371bffu);
  /* 10371bff add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371c02:;
  /* 10371c02 push 0x10376590 */
  push32((uint32_t)(0x10376590u));
  /* 10371c07 push 0x10376620 */
  push32((uint32_t)(0x10376620u));
  /* 10371c0c call dword ptr [0x103750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f0))), 0x10371c12u);
  /* 10371c12 pop ecx */
  ECX = (pop32());
  /* 10371c13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371c15 pop ecx */
  ECX = (pop32());
  /* 10371c16 jle 0x10371c3f */
  if ((C.zf||C.sf!=C.of)) goto L_10371c3f;
  /* 10371c18 push 0x10376598 */
  push32((uint32_t)(0x10376598u));
  /* 10371c1d call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371c23u);
  /* 10371c23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371c25 pop ecx */
  ECX = (pop32());
  /* 10371c26 jle 0x10371c3f */
  if ((C.zf||C.sf!=C.of)) goto L_10371c3f;
  /* 10371c28 push ebx */
  push32((uint32_t)(EBX));
  /* 10371c29 push 0x10376590 */
  push32((uint32_t)(0x10376590u));
  /* 10371c2e call esi */
  call_ind((uint32_t)(ESI), 0x10371c30u);
  /* 10371c30 push 0x10376598 */
  push32((uint32_t)(0x10376598u));
  /* 10371c35 push ebp */
  push32((uint32_t)(EBP));
  /* 10371c36 call dword ptr [0x10375100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375100))), 0x10371c3cu);
  /* 10371c3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371c3f:;
  /* 10371c3f push 9 */
  push32((uint32_t)(0x9u));
  /* 10371c41 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371c47u);
  /* 10371c47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371c49 pop ecx */
  ECX = (pop32());
  /* 10371c4a je 0x10371c8e */
  if (C.zf) goto L_10371c8e;
  /* 10371c4c push 0x10376590 */
  push32((uint32_t)(0x10376590u));
  /* 10371c51 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371c57u);
  /* 10371c57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371c59 pop ecx */
  ECX = (pop32());
  /* 10371c5a jle 0x10371c8e */
  if ((C.zf||C.sf!=C.of)) goto L_10371c8e;
  /* 10371c5c push 0x10376598 */
  push32((uint32_t)(0x10376598u));
  /* 10371c61 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371c67u);
  /* 10371c67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371c69 pop ecx */
  ECX = (pop32());
  /* 10371c6a jne 0x10371c8e */
  if (!C.zf) goto L_10371c8e;
  /* 10371c6c push ebx */
  push32((uint32_t)(EBX));
  /* 10371c6d push 9 */
  push32((uint32_t)(0x9u));
  /* 10371c6f call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10371c75u);
  /* 10371c75 push ebx */
  push32((uint32_t)(EBX));
  /* 10371c76 push 0x10376590 */
  push32((uint32_t)(0x10376590u));
  /* 10371c7b call esi */
  call_ind((uint32_t)(ESI), 0x10371c7du);
  /* 10371c7d push ebx */
  push32((uint32_t)(EBX));
  /* 10371c7e push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10371c83 push 0x10376640 */
  push32((uint32_t)(0x10376640u));
  /* 10371c88 push ebp */
  push32((uint32_t)(EBP));
  /* 10371c89 call edi */
  call_ind((uint32_t)(EDI), 0x10371c8bu);
  /* 10371c8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371c8e:;
  /* 10371c8e push 5 */
  push32((uint32_t)(0x5u));
  /* 10371c90 call dword ptr [0x10375104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375104))), 0x10371c96u);
  /* 10371c96 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371c98 pop ecx */
  ECX = (pop32());
  /* 10371c99 je 0x10371d46 */
  if (C.zf) goto L_10371d46;
  /* 10371c9f push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10371ca4 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371caau);
  /* 10371caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371cac pop ecx */
  ECX = (pop32());
  /* 10371cad jle 0x10371ceb */
  if ((C.zf||C.sf!=C.of)) goto L_10371ceb;
  /* 10371caf push 0x10376558 */
  push32((uint32_t)(0x10376558u));
  /* 10371cb4 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371cbau);
  /* 10371cba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371cbc pop ecx */
  ECX = (pop32());
  /* 10371cbd jle 0x10371ceb */
  if ((C.zf||C.sf!=C.of)) goto L_10371ceb;
  /* 10371cbf push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 10371cc4 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371ccau);
  /* 10371cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371ccc pop ecx */
  ECX = (pop32());
  /* 10371ccd jle 0x10371ceb */
  if ((C.zf||C.sf!=C.of)) goto L_10371ceb;
  /* 10371ccf push 0x10376588 */
  push32((uint32_t)(0x10376588u));
  /* 10371cd4 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371cdau);
  /* 10371cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371cdc pop ecx */
  ECX = (pop32());
  /* 10371cdd jle 0x10371ceb */
  if ((C.zf||C.sf!=C.of)) goto L_10371ceb;
  /* 10371cdf push 0x10376144 */
  push32((uint32_t)(0x10376144u));
  /* 10371ce4 call dword ptr [0x103750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c4))), 0x10371ceau);
  /* 10371cea pop ecx */
  ECX = (pop32());
L_10371ceb:;
  /* 10371ceb push ebx */
  push32((uint32_t)(EBX));
  /* 10371cec push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10371cf1 call esi */
  call_ind((uint32_t)(ESI), 0x10371cf3u);
  /* 10371cf3 push ebx */
  push32((uint32_t)(EBX));
  /* 10371cf4 push ebx */
  push32((uint32_t)(EBX));
  /* 10371cf5 push 0x10376648 */
  push32((uint32_t)(0x10376648u));
  /* 10371cfa push ebp */
  push32((uint32_t)(EBP));
  /* 10371cfb call dword ptr [0x10375110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375110))), 0x10371d01u);
  /* 10371d01 push ebx */
  push32((uint32_t)(EBX));
  /* 10371d02 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 10371d07 call esi */
  call_ind((uint32_t)(ESI), 0x10371d09u);
  /* 10371d09 push ebx */
  push32((uint32_t)(EBX));
  /* 10371d0a push ebx */
  push32((uint32_t)(EBX));
  /* 10371d0b push 0x10376650 */
  push32((uint32_t)(0x10376650u));
  /* 10371d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10371d11 call dword ptr [0x10375110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375110))), 0x10371d17u);
  /* 10371d17 push ebx */
  push32((uint32_t)(EBX));
  /* 10371d18 push 0x10376508 */
  push32((uint32_t)(0x10376508u));
  /* 10371d1d call esi */
  call_ind((uint32_t)(ESI), 0x10371d1fu);
  /* 10371d1f push ebx */
  push32((uint32_t)(EBX));
  /* 10371d20 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10371d22 push 0x103765f8 */
  push32((uint32_t)(0x103765f8u));
  /* 10371d27 push ebp */
  push32((uint32_t)(EBP));
  /* 10371d28 call edi */
  call_ind((uint32_t)(EDI), 0x10371d2au);
  /* 10371d2a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371d2d push ebx */
  push32((uint32_t)(EBX));
  /* 10371d2e push 0x10376578 */
  push32((uint32_t)(0x10376578u));
  /* 10371d33 call esi */
  call_ind((uint32_t)(ESI), 0x10371d35u);
  /* 10371d35 push ebx */
  push32((uint32_t)(EBX));
  /* 10371d36 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10371d3b push 0x10376638 */
  push32((uint32_t)(0x10376638u));
  /* 10371d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10371d41 call edi */
  call_ind((uint32_t)(EDI), 0x10371d43u);
  /* 10371d43 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371d46:;
  /* 10371d46 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10371d48 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371d4eu);
  /* 10371d4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371d50 pop ecx */
  ECX = (pop32());
  /* 10371d51 je 0x10371d69 */
  if (C.zf) goto L_10371d69;
  /* 10371d53 push 0x10376508 */
  push32((uint32_t)(0x10376508u));
  /* 10371d58 push 0x103765f8 */
  push32((uint32_t)(0x103765f8u));
  /* 10371d5d call dword ptr [0x103750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f0))), 0x10371d63u);
  /* 10371d63 pop ecx */
  ECX = (pop32());
  /* 10371d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371d66 pop ecx */
  ECX = (pop32());
  /* 10371d67 jg 0x10371d79 */
  if ((!C.zf&&C.sf==C.of)) goto L_10371d79;
L_10371d69:;
  /* 10371d69 push 0x10376508 */
  push32((uint32_t)(0x10376508u));
  /* 10371d6e call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371d74u);
  /* 10371d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371d76 pop ecx */
  ECX = (pop32());
  /* 10371d77 jne 0x10371ddb */
  if (!C.zf) goto L_10371ddb;
L_10371d79:;
  /* 10371d79 push ebx */
  push32((uint32_t)(EBX));
  /* 10371d7a push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10371d7c call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10371d82u);
  /* 10371d82 push ebx */
  push32((uint32_t)(EBX));
  /* 10371d83 push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 10371d88 call esi */
  call_ind((uint32_t)(ESI), 0x10371d8au);
  /* 10371d8a push ebp */
  push32((uint32_t)(EBP));
  /* 10371d8b push 0x103764c8 */
  push32((uint32_t)(0x103764c8u));
  /* 10371d90 call esi */
  call_ind((uint32_t)(ESI), 0x10371d92u);
  /* 10371d92 push ebp */
  push32((uint32_t)(EBP));
  /* 10371d93 push 0x103764d0 */
  push32((uint32_t)(0x103764d0u));
  /* 10371d98 call esi */
  call_ind((uint32_t)(ESI), 0x10371d9au);
  /* 10371d9a push ebp */
  push32((uint32_t)(EBP));
  /* 10371d9b push 0x103764d8 */
  push32((uint32_t)(0x103764d8u));
  /* 10371da0 call esi */
  call_ind((uint32_t)(ESI), 0x10371da2u);
  /* 10371da2 push ebp */
  push32((uint32_t)(EBP));
  /* 10371da3 push 0x103764e0 */
  push32((uint32_t)(0x103764e0u));
  /* 10371da8 call esi */
  call_ind((uint32_t)(ESI), 0x10371daau);
  /* 10371daa push ebp */
  push32((uint32_t)(EBP));
  /* 10371dab push 0x103764f8 */
  push32((uint32_t)(0x103764f8u));
  /* 10371db0 call esi */
  call_ind((uint32_t)(ESI), 0x10371db2u);
  /* 10371db2 push ebp */
  push32((uint32_t)(EBP));
  /* 10371db3 push 0x10376508 */
  push32((uint32_t)(0x10376508u));
  /* 10371db8 call esi */
  call_ind((uint32_t)(ESI), 0x10371dbau);
  /* 10371dba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371dbd push ebp */
  push32((uint32_t)(EBP));
  /* 10371dbe push 0x10376510 */
  push32((uint32_t)(0x10376510u));
  /* 10371dc3 call esi */
  call_ind((uint32_t)(ESI), 0x10371dc5u);
  /* 10371dc5 push ebp */
  push32((uint32_t)(EBP));
  /* 10371dc6 push 0x10376520 */
  push32((uint32_t)(0x10376520u));
  /* 10371dcb call esi */
  call_ind((uint32_t)(ESI), 0x10371dcdu);
  /* 10371dcd push ebx */
  push32((uint32_t)(EBX));
  /* 10371dce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10371dd0 push 0x10376608 */
  push32((uint32_t)(0x10376608u));
  /* 10371dd5 push ebp */
  push32((uint32_t)(EBP));
  /* 10371dd6 call edi */
  call_ind((uint32_t)(EDI), 0x10371dd8u);
  /* 10371dd8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371ddb:;
  /* 10371ddb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10371ddd call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371de3u);
  /* 10371de3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371de5 pop ecx */
  ECX = (pop32());
  /* 10371de6 je 0x10371dfe */
  if (C.zf) goto L_10371dfe;
  /* 10371de8 push 0x10376578 */
  push32((uint32_t)(0x10376578u));
  /* 10371ded push 0x10376638 */
  push32((uint32_t)(0x10376638u));
  /* 10371df2 call dword ptr [0x103750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f0))), 0x10371df8u);
  /* 10371df8 pop ecx */
  ECX = (pop32());
  /* 10371df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371dfb pop ecx */
  ECX = (pop32());
  /* 10371dfc jg 0x10371e0e */
  if ((!C.zf&&C.sf==C.of)) goto L_10371e0e;
L_10371dfe:;
  /* 10371dfe push 0x10376578 */
  push32((uint32_t)(0x10376578u));
  /* 10371e03 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371e09u);
  /* 10371e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371e0b pop ecx */
  ECX = (pop32());
  /* 10371e0c jne 0x10371e6b */
  if (!C.zf) goto L_10371e6b;
L_10371e0e:;
  /* 10371e0e push ebx */
  push32((uint32_t)(EBX));
  /* 10371e0f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10371e11 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10371e17u);
  /* 10371e17 push ebx */
  push32((uint32_t)(EBX));
  /* 10371e18 push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 10371e1d call esi */
  call_ind((uint32_t)(ESI), 0x10371e1fu);
  /* 10371e1f push ebp */
  push32((uint32_t)(EBP));
  /* 10371e20 push 0x10376568 */
  push32((uint32_t)(0x10376568u));
  /* 10371e25 call esi */
  call_ind((uint32_t)(ESI), 0x10371e27u);
  /* 10371e27 push ebp */
  push32((uint32_t)(EBP));
  /* 10371e28 push 0x10376580 */
  push32((uint32_t)(0x10376580u));
  /* 10371e2d call esi */
  call_ind((uint32_t)(ESI), 0x10371e2fu);
  /* 10371e2f push ebp */
  push32((uint32_t)(EBP));
  /* 10371e30 push 0x10376518 */
  push32((uint32_t)(0x10376518u));
  /* 10371e35 call esi */
  call_ind((uint32_t)(ESI), 0x10371e37u);
  /* 10371e37 push ebp */
  push32((uint32_t)(EBP));
  /* 10371e38 push 0x10376528 */
  push32((uint32_t)(0x10376528u));
  /* 10371e3d call esi */
  call_ind((uint32_t)(ESI), 0x10371e3fu);
  /* 10371e3f push ebp */
  push32((uint32_t)(EBP));
  /* 10371e40 push 0x10376548 */
  push32((uint32_t)(0x10376548u));
  /* 10371e45 call esi */
  call_ind((uint32_t)(ESI), 0x10371e47u);
  /* 10371e47 push ebp */
  push32((uint32_t)(EBP));
  /* 10371e48 push 0x10376578 */
  push32((uint32_t)(0x10376578u));
  /* 10371e4d call esi */
  call_ind((uint32_t)(ESI), 0x10371e4fu);
  /* 10371e4f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371e52 push ebp */
  push32((uint32_t)(EBP));
  /* 10371e53 push 0x10376590 */
  push32((uint32_t)(0x10376590u));
  /* 10371e58 call esi */
  call_ind((uint32_t)(ESI), 0x10371e5au);
  /* 10371e5a push ebx */
  push32((uint32_t)(EBX));
  /* 10371e5b push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10371e60 push 0x10376608 */
  push32((uint32_t)(0x10376608u));
  /* 10371e65 push ebp */
  push32((uint32_t)(EBP));
  /* 10371e66 call edi */
  call_ind((uint32_t)(EDI), 0x10371e68u);
  /* 10371e68 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10371e6b:;
  /* 10371e6b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10371e6d call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10371e73u);
  /* 10371e73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10371e75 pop ecx */
  ECX = (pop32());
  /* 10371e76 je 0x10372020 */
  if (C.zf) goto L_10372020;
  /* 10371e7c push 0x103764c0 */
  push32((uint32_t)(0x103764c0u));
  /* 10371e81 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371e87u);
  /* 10371e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371e89 pop ecx */
  ECX = (pop32());
  /* 10371e8a jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371e90 push 0x10376500 */
  push32((uint32_t)(0x10376500u));
  /* 10371e95 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371e9bu);
  /* 10371e9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371e9d pop ecx */
  ECX = (pop32());
  /* 10371e9e jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371ea4 push 0x103764d0 */
  push32((uint32_t)(0x103764d0u));
  /* 10371ea9 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371eafu);
  /* 10371eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371eb1 pop ecx */
  ECX = (pop32());
  /* 10371eb2 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371eb8 push 0x103764d8 */
  push32((uint32_t)(0x103764d8u));
  /* 10371ebd call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371ec3u);
  /* 10371ec3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371ec5 pop ecx */
  ECX = (pop32());
  /* 10371ec6 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371ecc push 0x103764e0 */
  push32((uint32_t)(0x103764e0u));
  /* 10371ed1 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371ed7u);
  /* 10371ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371ed9 pop ecx */
  ECX = (pop32());
  /* 10371eda jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371ee0 push 0x103764f8 */
  push32((uint32_t)(0x103764f8u));
  /* 10371ee5 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371eebu);
  /* 10371eeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371eed pop ecx */
  ECX = (pop32());
  /* 10371eee jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371ef4 push 0x10376508 */
  push32((uint32_t)(0x10376508u));
  /* 10371ef9 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371effu);
  /* 10371eff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371f01 pop ecx */
  ECX = (pop32());
  /* 10371f02 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371f08 push 0x10376510 */
  push32((uint32_t)(0x10376510u));
  /* 10371f0d call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371f13u);
  /* 10371f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371f15 pop ecx */
  ECX = (pop32());
  /* 10371f16 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371f1c push 0x10376520 */
  push32((uint32_t)(0x10376520u));
  /* 10371f21 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371f27u);
  /* 10371f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371f29 pop ecx */
  ECX = (pop32());
  /* 10371f2a jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371f30 push 0x10376550 */
  push32((uint32_t)(0x10376550u));
  /* 10371f35 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371f3bu);
  /* 10371f3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371f3d pop ecx */
  ECX = (pop32());
  /* 10371f3e jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371f44 push 0x10376568 */
  push32((uint32_t)(0x10376568u));
  /* 10371f49 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371f4fu);
  /* 10371f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371f51 pop ecx */
  ECX = (pop32());
  /* 10371f52 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371f58 push 0x10376580 */
  push32((uint32_t)(0x10376580u));
  /* 10371f5d call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371f63u);
  /* 10371f63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371f65 pop ecx */
  ECX = (pop32());
  /* 10371f66 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371f6c push 0x10376518 */
  push32((uint32_t)(0x10376518u));
  /* 10371f71 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371f77u);
  /* 10371f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371f79 pop ecx */
  ECX = (pop32());
  /* 10371f7a jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371f80 push 0x10376528 */
  push32((uint32_t)(0x10376528u));
  /* 10371f85 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371f8bu);
  /* 10371f8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371f8d pop ecx */
  ECX = (pop32());
  /* 10371f8e jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371f94 push 0x10376548 */
  push32((uint32_t)(0x10376548u));
  /* 10371f99 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371f9fu);
  /* 10371f9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371fa1 pop ecx */
  ECX = (pop32());
  /* 10371fa2 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371fa4 push 0x10376560 */
  push32((uint32_t)(0x10376560u));
  /* 10371fa9 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371fafu);
  /* 10371faf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371fb1 pop ecx */
  ECX = (pop32());
  /* 10371fb2 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371fb4 push 0x10376578 */
  push32((uint32_t)(0x10376578u));
  /* 10371fb9 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371fbfu);
  /* 10371fbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371fc1 pop ecx */
  ECX = (pop32());
  /* 10371fc2 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371fc4 push 0x10376590 */
  push32((uint32_t)(0x10376590u));
  /* 10371fc9 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10371fcfu);
  /* 10371fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371fd1 pop ecx */
  ECX = (pop32());
  /* 10371fd2 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371fd4 push ebx */
  push32((uint32_t)(EBX));
  /* 10371fd5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10371fd7 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10371fddu);
  /* 10371fdd push 0x1037613c */
  push32((uint32_t)(0x1037613cu));
  /* 10371fe2 call dword ptr [0x103750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c4))), 0x10371fe8u);
  /* 10371fe8 push ebx */
  push32((uint32_t)(EBX));
  /* 10371fe9 call dword ptr [0x103750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c8))), 0x10371fefu);
  /* 10371fef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10371ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10371ff4 jne 0x10372020 */
  if (!C.zf) goto L_10372020;
  /* 10371ff6 push ebx */
  push32((uint32_t)(EBX));
  /* 10371ff7 push 0x10376668 */
  push32((uint32_t)(0x10376668u));
  /* 10371ffc push ebx */
  push32((uint32_t)(EBX));
  /* 10371ffd push 0x103764e8 */
  push32((uint32_t)(0x103764e8u));
  /* 10372002 push 0x10376630 */
  push32((uint32_t)(0x10376630u));
  /* 10372007 push 0x10376670 */
  push32((uint32_t)(0x10376670u));
  /* 1037200c call dword ptr [0x10375108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375108))), 0x10372012u);
  /* 10372012 push 0x10376134 */
  push32((uint32_t)(0x10376134u));
  /* 10372017 call dword ptr [0x103750c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750c4))), 0x1037201du);
  /* 1037201d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10372020:;
  /* 10372020 push 0xa */
  push32((uint32_t)(0xau));
  /* 10372022 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10372028u);
  /* 10372028 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1037202a pop ecx */
  ECX = (pop32());
  /* 1037202b je 0x10372076 */
  if (C.zf) goto L_10372076;
  /* 1037202d push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372032 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10372038u);
  /* 10372038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037203a pop ecx */
  ECX = (pop32());
  /* 1037203b jle 0x10372076 */
  if ((C.zf||C.sf!=C.of)) goto L_10372076;
  /* 1037203d push ebx */
  push32((uint32_t)(EBX));
  /* 1037203e push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372043 call esi */
  call_ind((uint32_t)(ESI), 0x10372045u);
  /* 10372045 push ebp */
  push32((uint32_t)(EBP));
  /* 10372046 call dword ptr [0x10375118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375118))), 0x1037204cu);
  /* 1037204c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037204f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10372051 je 0x10372076 */
  if (C.zf) goto L_10372076;
  /* 10372053 push ebx */
  push32((uint32_t)(EBX));
  /* 10372054 push 0xa */
  push32((uint32_t)(0xau));
  /* 10372056 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x1037205cu);
  /* 1037205c push ebx */
  push32((uint32_t)(EBX));
  /* 1037205d push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372062 call esi */
  call_ind((uint32_t)(ESI), 0x10372064u);
  /* 10372064 push ebp */
  push32((uint32_t)(EBP));
  /* 10372065 push 0x10376558 */
  push32((uint32_t)(0x10376558u));
  /* 1037206a call esi */
  call_ind((uint32_t)(ESI), 0x1037206cu);
  /* 1037206c push ebp */
  push32((uint32_t)(EBP));
  /* 1037206d call dword ptr [0x1037511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037511c))), 0x10372073u);
  /* 10372073 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10372076:;
  /* 10372076 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10372078 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x1037207eu);
  /* 1037207e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10372080 pop ecx */
  ECX = (pop32());
  /* 10372081 je 0x103720f7 */
  if (C.zf) goto L_103720f7;
  /* 10372083 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10372085 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x1037208bu);
  /* 1037208b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1037208d pop ecx */
  ECX = (pop32());
  /* 1037208e je 0x103720f7 */
  if (C.zf) goto L_103720f7;
  /* 10372090 push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372095 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037209bu);
  /* 1037209b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037209d pop ecx */
  ECX = (pop32());
  /* 1037209e jle 0x103720f7 */
  if ((C.zf||C.sf!=C.of)) goto L_103720f7;
  /* 103720a0 push ebx */
  push32((uint32_t)(EBX));
  /* 103720a1 push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 103720a6 call esi */
  call_ind((uint32_t)(ESI), 0x103720a8u);
  /* 103720a8 push 0x10376558 */
  push32((uint32_t)(0x10376558u));
  /* 103720ad call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103720b3u);
  /* 103720b3 push ebp */
  push32((uint32_t)(EBP));
  /* 103720b4 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 103720b8 call dword ptr [0x10375114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375114))), 0x103720beu);
  /* 103720be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103720c1 cmp eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103720c5 jne 0x103720f7 */
  if (!C.zf) goto L_103720f7;
  /* 103720c7 push ebx */
  push32((uint32_t)(EBX));
  /* 103720c8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 103720ca call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x103720d0u);
  /* 103720d0 push ebx */
  push32((uint32_t)(EBX));
  /* 103720d1 push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 103720d6 call esi */
  call_ind((uint32_t)(ESI), 0x103720d8u);
  /* 103720d8 push ebx */
  push32((uint32_t)(EBX));
  /* 103720d9 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103720de push 0x10376658 */
  push32((uint32_t)(0x10376658u));
  /* 103720e3 push ebp */
  push32((uint32_t)(EBP));
  /* 103720e4 call dword ptr [0x10375110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375110))), 0x103720eau);
  /* 103720ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 103720ec push 0xd */
  push32((uint32_t)(0xdu));
  /* 103720ee call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x103720f4u);
  /* 103720f4 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103720f7:;
  /* 103720f7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 103720f9 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x103720ffu);
  /* 103720ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10372101 pop ecx */
  ECX = (pop32());
  /* 10372102 je 0x10372152 */
  if (C.zf) goto L_10372152;
  /* 10372104 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10372106 call dword ptr [0x103750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750fc))), 0x1037210cu);
  /* 1037210c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1037210e pop ecx */
  ECX = (pop32());
  /* 1037210f je 0x10372152 */
  if (C.zf) goto L_10372152;
  /* 10372111 push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372116 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037211cu);
  /* 1037211c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037211e pop ecx */
  ECX = (pop32());
  /* 1037211f jle 0x10372152 */
  if ((C.zf||C.sf!=C.of)) goto L_10372152;
  /* 10372121 push ebx */
  push32((uint32_t)(EBX));
  /* 10372122 push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372127 call esi */
  call_ind((uint32_t)(ESI), 0x10372129u);
  /* 10372129 push ebp */
  push32((uint32_t)(EBP));
  /* 1037212a call dword ptr [0x10375118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375118))), 0x10372130u);
  /* 10372130 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10372133 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10372135 je 0x10372152 */
  if (C.zf) goto L_10372152;
  /* 10372137 push ebx */
  push32((uint32_t)(EBX));
  /* 10372138 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1037213a call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10372140u);
  /* 10372140 push ebx */
  push32((uint32_t)(EBX));
  /* 10372141 push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372146 call esi */
  call_ind((uint32_t)(ESI), 0x10372148u);
  /* 10372148 push ebp */
  push32((uint32_t)(EBP));
  /* 10372149 call dword ptr [0x10375124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375124))), 0x1037214fu);
  /* 1037214f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10372152:;
  /* 10372152 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10372154 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x1037215au);
  /* 1037215a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1037215c pop ecx */
  ECX = (pop32());
  /* 1037215d je 0x103721b4 */
  if (C.zf) goto L_103721b4;
  /* 1037215f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10372161 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10372167u);
  /* 10372167 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10372169 pop ecx */
  ECX = (pop32());
  /* 1037216a jne 0x103721b4 */
  if (!C.zf) goto L_103721b4;
  /* 1037216c push ebx */
  push32((uint32_t)(EBX));
  /* 1037216d push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372172 call esi */
  call_ind((uint32_t)(ESI), 0x10372174u);
  /* 10372174 push ebp */
  push32((uint32_t)(EBP));
  /* 10372175 call dword ptr [0x10375114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375114))), 0x1037217bu);
  /* 1037217b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037217e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372180 je 0x10372192 */
  if (C.zf) goto L_10372192;
  /* 10372182 push 0x103765c0 */
  push32((uint32_t)(0x103765c0u));
  /* 10372187 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037218du);
  /* 1037218d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037218f pop ecx */
  ECX = (pop32());
  /* 10372190 jne 0x103721b4 */
  if (!C.zf) goto L_103721b4;
L_10372192:;
  /* 10372192 push ebx */
  push32((uint32_t)(EBX));
  /* 10372193 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10372195 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x1037219bu);
  /* 1037219b push ebx */
  push32((uint32_t)(EBX));
  /* 1037219c push 0x10376558 */
  push32((uint32_t)(0x10376558u));
  /* 103721a1 call esi */
  call_ind((uint32_t)(ESI), 0x103721a3u);
  /* 103721a3 push ebx */
  push32((uint32_t)(EBX));
  /* 103721a4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103721a9 push 0x10376608 */
  push32((uint32_t)(0x10376608u));
  /* 103721ae push ebp */
  push32((uint32_t)(EBP));
  /* 103721af call edi */
  call_ind((uint32_t)(EDI), 0x103721b1u);
  /* 103721b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103721b4:;
  /* 103721b4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103721b6 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x103721bcu);
  /* 103721bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103721be pop ecx */
  ECX = (pop32());
  /* 103721bf je 0x1037220a */
  if (C.zf) goto L_1037220a;
  /* 103721c1 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 103721c6 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103721ccu);
  /* 103721cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103721ce pop ecx */
  ECX = (pop32());
  /* 103721cf jle 0x1037220a */
  if ((C.zf||C.sf!=C.of)) goto L_1037220a;
  /* 103721d1 push ebx */
  push32((uint32_t)(EBX));
  /* 103721d2 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 103721d7 call esi */
  call_ind((uint32_t)(ESI), 0x103721d9u);
  /* 103721d9 push ebp */
  push32((uint32_t)(EBP));
  /* 103721da call dword ptr [0x10375118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375118))), 0x103721e0u);
  /* 103721e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103721e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103721e5 je 0x1037220a */
  if (C.zf) goto L_1037220a;
  /* 103721e7 push ebx */
  push32((uint32_t)(EBX));
  /* 103721e8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 103721ea call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x103721f0u);
  /* 103721f0 push ebx */
  push32((uint32_t)(EBX));
  /* 103721f1 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 103721f6 call esi */
  call_ind((uint32_t)(ESI), 0x103721f8u);
  /* 103721f8 push ebp */
  push32((uint32_t)(EBP));
  /* 103721f9 push 0x10376588 */
  push32((uint32_t)(0x10376588u));
  /* 103721fe call esi */
  call_ind((uint32_t)(ESI), 0x10372200u);
  /* 10372200 push ebp */
  push32((uint32_t)(EBP));
  /* 10372201 call dword ptr [0x1037511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037511c))), 0x10372207u);
  /* 10372207 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1037220a:;
  /* 1037220a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1037220c call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10372212u);
  /* 10372212 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10372214 pop ecx */
  ECX = (pop32());
  /* 10372215 je 0x1037228b */
  if (C.zf) goto L_1037228b;
  /* 10372217 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10372219 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x1037221fu);
  /* 1037221f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10372221 pop ecx */
  ECX = (pop32());
  /* 10372222 je 0x1037228b */
  if (C.zf) goto L_1037228b;
  /* 10372224 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 10372229 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x1037222fu);
  /* 1037222f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372231 pop ecx */
  ECX = (pop32());
  /* 10372232 jle 0x1037228b */
  if ((C.zf||C.sf!=C.of)) goto L_1037228b;
  /* 10372234 push ebx */
  push32((uint32_t)(EBX));
  /* 10372235 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 1037223a call esi */
  call_ind((uint32_t)(ESI), 0x1037223cu);
  /* 1037223c push 0x10376588 */
  push32((uint32_t)(0x10376588u));
  /* 10372241 call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10372247u);
  /* 10372247 push ebp */
  push32((uint32_t)(EBP));
  /* 10372248 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 1037224c call dword ptr [0x10375114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375114))), 0x10372252u);
  /* 10372252 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10372255 cmp eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372259 jne 0x1037228b */
  if (!C.zf) goto L_1037228b;
  /* 1037225b push ebx */
  push32((uint32_t)(EBX));
  /* 1037225c push 0xf */
  push32((uint32_t)(0xfu));
  /* 1037225e call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x10372264u);
  /* 10372264 push ebx */
  push32((uint32_t)(EBX));
  /* 10372265 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 1037226a call esi */
  call_ind((uint32_t)(ESI), 0x1037226cu);
  /* 1037226c push ebx */
  push32((uint32_t)(EBX));
  /* 1037226d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10372272 push 0x10376658 */
  push32((uint32_t)(0x10376658u));
  /* 10372277 push ebp */
  push32((uint32_t)(EBP));
  /* 10372278 call dword ptr [0x10375110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375110))), 0x1037227eu);
  /* 1037227e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10372280 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10372282 call dword ptr [0x103750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750e8))), 0x10372288u);
  /* 10372288 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1037228b:;
  /* 1037228b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1037228d call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x10372293u);
  /* 10372293 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10372295 pop ecx */
  ECX = (pop32());
  /* 10372296 je 0x103722e6 */
  if (C.zf) goto L_103722e6;
  /* 10372298 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1037229a call dword ptr [0x103750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750fc))), 0x103722a0u);
  /* 103722a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103722a2 pop ecx */
  ECX = (pop32());
  /* 103722a3 je 0x103722e6 */
  if (C.zf) goto L_103722e6;
  /* 103722a5 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 103722aa call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x103722b0u);
  /* 103722b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103722b2 pop ecx */
  ECX = (pop32());
  /* 103722b3 jle 0x103722e6 */
  if ((C.zf||C.sf!=C.of)) goto L_103722e6;
  /* 103722b5 push ebx */
  push32((uint32_t)(EBX));
  /* 103722b6 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 103722bb call esi */
  call_ind((uint32_t)(ESI), 0x103722bdu);
  /* 103722bd push ebp */
  push32((uint32_t)(EBP));
  /* 103722be call dword ptr [0x10375118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375118))), 0x103722c4u);
  /* 103722c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103722c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103722c9 je 0x103722e6 */
  if (C.zf) goto L_103722e6;
  /* 103722cb push ebx */
  push32((uint32_t)(EBX));
  /* 103722cc push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103722ce call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x103722d4u);
  /* 103722d4 push ebx */
  push32((uint32_t)(EBX));
  /* 103722d5 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 103722da call esi */
  call_ind((uint32_t)(ESI), 0x103722dcu);
  /* 103722dc push ebp */
  push32((uint32_t)(EBP));
  /* 103722dd call dword ptr [0x10375124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375124))), 0x103722e3u);
  /* 103722e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103722e6:;
  /* 103722e6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103722e8 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x103722eeu);
  /* 103722ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103722f0 pop ecx */
  ECX = (pop32());
  /* 103722f1 je 0x10372348 */
  if (C.zf) goto L_10372348;
  /* 103722f3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 103722f5 call dword ptr [0x103750b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750b0))), 0x103722fbu);
  /* 103722fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103722fd pop ecx */
  ECX = (pop32());
  /* 103722fe jne 0x10372348 */
  if (!C.zf) goto L_10372348;
  /* 10372300 push ebx */
  push32((uint32_t)(EBX));
  /* 10372301 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 10372306 call esi */
  call_ind((uint32_t)(ESI), 0x10372308u);
  /* 10372308 push ebp */
  push32((uint32_t)(EBP));
  /* 10372309 call dword ptr [0x10375114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375114))), 0x1037230fu);
  /* 1037230f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10372312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372314 je 0x10372326 */
  if (C.zf) goto L_10372326;
  /* 10372316 push 0x10376570 */
  push32((uint32_t)(0x10376570u));
  /* 1037231b call dword ptr [0x103750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750ec))), 0x10372321u);
  /* 10372321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372323 pop ecx */
  ECX = (pop32());
  /* 10372324 jne 0x10372348 */
  if (!C.zf) goto L_10372348;
L_10372326:;
  /* 10372326 push ebx */
  push32((uint32_t)(EBX));
  /* 10372327 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10372329 call dword ptr [0x103750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750bc))), 0x1037232fu);
  /* 1037232f push ebx */
  push32((uint32_t)(EBX));
  /* 10372330 push 0x10376588 */
  push32((uint32_t)(0x10376588u));
  /* 10372335 call esi */
  call_ind((uint32_t)(ESI), 0x10372337u);
  /* 10372337 push ebx */
  push32((uint32_t)(EBX));
  /* 10372338 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1037233d push 0x10376608 */
  push32((uint32_t)(0x10376608u));
  /* 10372342 push ebp */
  push32((uint32_t)(EBP));
  /* 10372343 call edi */
  call_ind((uint32_t)(EDI), 0x10372345u);
  /* 10372345 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10372348:;
  /* 10372348 push ebp */
  push32((uint32_t)(EBP));
  /* 10372349 push 0x103765a8 */
  push32((uint32_t)(0x103765a8u));
  /* 1037234e call dword ptr [0x103750f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f8))), 0x10372354u);
  /* 10372354 mov edi, dword ptr [0x10375128] */
  EDI = (r32((uint32_t)(0x10375128)));
  /* 1037235a pop ecx */
  ECX = (pop32());
  /* 1037235b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037235d pop ecx */
  ECX = (pop32());
  /* 1037235e jle 0x1037237a */
  if ((C.zf||C.sf!=C.of)) goto L_1037237a;
  /* 10372360 push ebp */
  push32((uint32_t)(EBP));
  /* 10372361 call edi */
  call_ind((uint32_t)(EDI), 0x10372363u);
  /* 10372363 push ebx */
  push32((uint32_t)(EBX));
  /* 10372364 push 0x103765a8 */
  push32((uint32_t)(0x103765a8u));
  /* 10372369 push ebp */
  push32((uint32_t)(EBP));
  /* 1037236a call dword ptr [0x10375120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375120))), 0x10372370u);
  /* 10372370 push ebp */
  push32((uint32_t)(EBP));
  /* 10372371 call dword ptr [0x103750d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750d0))), 0x10372377u);
  /* 10372377 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1037237a:;
  /* 1037237a push ebx */
  push32((uint32_t)(EBX));
  /* 1037237b push 0x103765a0 */
  push32((uint32_t)(0x103765a0u));
  /* 10372380 call dword ptr [0x103750f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f8))), 0x10372386u);
  /* 10372386 pop ecx */
  ECX = (pop32());
  /* 10372387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372389 pop ecx */
  ECX = (pop32());
  /* 1037238a jle 0x103723bb */
  if ((C.zf||C.sf!=C.of)) goto L_103723bb;
  /* 1037238c push ebx */
  push32((uint32_t)(EBX));
  /* 1037238d push 0x103764f0 */
  push32((uint32_t)(0x103764f0u));
  /* 10372392 push ebx */
  push32((uint32_t)(EBX));
  /* 10372393 call dword ptr [0x10375130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375130))), 0x10372399u);
  /* 10372399 push ebx */
  push32((uint32_t)(EBX));
  /* 1037239a call edi */
  call_ind((uint32_t)(EDI), 0x1037239cu);
  /* 1037239c push ebx */
  push32((uint32_t)(EBX));
  /* 1037239d push 0x103765a0 */
  push32((uint32_t)(0x103765a0u));
  /* 103723a2 push ebx */
  push32((uint32_t)(EBX));
  /* 103723a3 call dword ptr [0x10375120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375120))), 0x103723a9u);
  /* 103723a9 push ebx */
  push32((uint32_t)(EBX));
  /* 103723aa call dword ptr [0x103750d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750d0))), 0x103723b0u);
  /* 103723b0 push ebx */
  push32((uint32_t)(EBX));
  /* 103723b1 push 0x103764f0 */
  push32((uint32_t)(0x103764f0u));
  /* 103723b6 call esi */
  call_ind((uint32_t)(ESI), 0x103723b8u);
  /* 103723b8 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103723bb:;
  /* 103723bb push ebp */
  push32((uint32_t)(EBP));
  /* 103723bc push 0x103765b8 */
  push32((uint32_t)(0x103765b8u));
  /* 103723c1 call dword ptr [0x103750f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f8))), 0x103723c7u);
  /* 103723c7 pop ecx */
  ECX = (pop32());
  /* 103723c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103723ca pop ecx */
  ECX = (pop32());
  /* 103723cb jle 0x103723e7 */
  if ((C.zf||C.sf!=C.of)) goto L_103723e7;
  /* 103723cd push ebp */
  push32((uint32_t)(EBP));
  /* 103723ce call edi */
  call_ind((uint32_t)(EDI), 0x103723d0u);
  /* 103723d0 push ebx */
  push32((uint32_t)(EBX));
  /* 103723d1 push 0x103765b8 */
  push32((uint32_t)(0x103765b8u));
  /* 103723d6 push ebp */
  push32((uint32_t)(EBP));
  /* 103723d7 call dword ptr [0x10375120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375120))), 0x103723ddu);
  /* 103723dd push ebp */
  push32((uint32_t)(EBP));
  /* 103723de call dword ptr [0x103750d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750d0))), 0x103723e4u);
  /* 103723e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103723e7:;
  /* 103723e7 push ebp */
  push32((uint32_t)(EBP));
  /* 103723e8 push 0x103764b0 */
  push32((uint32_t)(0x103764b0u));
  /* 103723ed call dword ptr [0x103750f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f8))), 0x103723f3u);
  /* 103723f3 pop ecx */
  ECX = (pop32());
  /* 103723f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103723f6 pop ecx */
  ECX = (pop32());
  /* 103723f7 jle 0x10372413 */
  if ((C.zf||C.sf!=C.of)) goto L_10372413;
  /* 103723f9 push ebp */
  push32((uint32_t)(EBP));
  /* 103723fa call edi */
  call_ind((uint32_t)(EDI), 0x103723fcu);
  /* 103723fc push ebx */
  push32((uint32_t)(EBX));
  /* 103723fd push 0x103764b0 */
  push32((uint32_t)(0x103764b0u));
  /* 10372402 push ebp */
  push32((uint32_t)(EBP));
  /* 10372403 call dword ptr [0x10375120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375120))), 0x10372409u);
  /* 10372409 push ebp */
  push32((uint32_t)(EBP));
  /* 1037240a call dword ptr [0x103750d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750d0))), 0x10372410u);
  /* 10372410 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10372413:;
  /* 10372413 mov ebp, 0x103764b8 */
  EBP = (0x103764b8u);
  /* 10372418 push ebx */
  push32((uint32_t)(EBX));
  /* 10372419 push ebp */
  push32((uint32_t)(EBP));
  /* 1037241a call dword ptr [0x103750f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750f8))), 0x10372420u);
  /* 10372420 pop ecx */
  ECX = (pop32());
  /* 10372421 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372423 pop ecx */
  ECX = (pop32());
  /* 10372424 jle 0x10372451 */
  if ((C.zf||C.sf!=C.of)) goto L_10372451;
  /* 10372426 push ebx */
  push32((uint32_t)(EBX));
  /* 10372427 push 0x103764f0 */
  push32((uint32_t)(0x103764f0u));
  /* 1037242c push ebx */
  push32((uint32_t)(EBX));
  /* 1037242d call dword ptr [0x10375130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375130))), 0x10372433u);
  /* 10372433 push ebx */
  push32((uint32_t)(EBX));
  /* 10372434 call edi */
  call_ind((uint32_t)(EDI), 0x10372436u);
  /* 10372436 push ebx */
  push32((uint32_t)(EBX));
  /* 10372437 push ebp */
  push32((uint32_t)(EBP));
  /* 10372438 push ebx */
  push32((uint32_t)(EBX));
  /* 10372439 call dword ptr [0x10375120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375120))), 0x1037243fu);
  /* 1037243f push ebx */
  push32((uint32_t)(EBX));
  /* 10372440 call dword ptr [0x103750d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750d0))), 0x10372446u);
  /* 10372446 push ebx */
  push32((uint32_t)(EBX));
  /* 10372447 push 0x103764f0 */
  push32((uint32_t)(0x103764f0u));
  /* 1037244c call esi */
  call_ind((uint32_t)(ESI), 0x1037244eu);
  /* 1037244e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10372451:;
  /* 10372451 pop edi */
  EDI = (pop32());
  /* 10372452 pop esi */
  ESI = (pop32());
  /* 10372453 pop ebp */
  EBP = (pop32());
  /* 10372454 pop ebx */
  EBX = (pop32());
  /* 10372455 pop ecx */
  ECX = (pop32());
  /* 10372456 ret  */
  ESPCHK(0x10371345u, _esp0);
  ESP += 4; return;
}

/* FUN_10002457 @ 0x10372457 (217 bytes, 57 insns) */
void f_10372457(void) {
  FTRACE(0x10372457u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372457 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1037245b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037245e jne 0x103724ec */
  if (!C.zf) goto L_103724ec;
  /* 10372464 call dword ptr [0x10375090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375090))), 0x1037246au);
  /* 1037246a push 1 */
  push32((uint32_t)(0x1u));
  /* 1037246c mov dword ptr [0x103766a4], eax */
  w32((uint32_t)(0x103766a4), (EAX));
  /* 10372471 call 0x10372e8b */
  push32(0x10372476u); f_10372e8b();
  /* 10372476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372478 pop ecx */
  ECX = (pop32());
  /* 10372479 je 0x103724b7 */
  if (C.zf) goto L_103724b7;
  /* 1037247b mov eax, dword ptr [0x103766a4] */
  EAX = (r32((uint32_t)(0x103766a4)));
  /* 10372480 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10372482 mov cl, byte ptr [0x103766a5] */
  CL = (r8((uint32_t)(0x103766a5)));
  /* 10372488 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1037248d shr dword ptr [0x103766a4], 0x10 */
  w32((uint32_t)(0x103766a4), (sh_shr((uint32_t)(r32((uint32_t)(0x103766a4))), (0x10u)&0x1f, 32)));
  /* 10372494 mov dword ptr [0x103766ac], eax */
  w32((uint32_t)(0x103766ac), (EAX));
  /* 10372499 mov dword ptr [0x103766b0], ecx */
  w32((uint32_t)(0x103766b0), (ECX));
  /* 1037249f shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103724a2 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103724a4 mov dword ptr [0x103766a8], eax */
  w32((uint32_t)(0x103766a8), (EAX));
  /* 103724a9 call 0x1037271e */
  push32(0x103724aeu); f_1037271e();
  /* 103724ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103724b0 jne 0x103724bb */
  if (!C.zf) goto L_103724bb;
  /* 103724b2 call 0x10372ec7 */
  push32(0x103724b7u); f_10372ec7();
L_103724b7:;
  /* 103724b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103724b9 jmp 0x1037252d */
  goto L_1037252d;
L_103724bb:;
  /* 103724bb call dword ptr [0x1037508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037508c))), 0x103724c1u);
  /* 103724c1 mov dword ptr [0x10376bf8], eax */
  w32((uint32_t)(0x10376bf8), (EAX));
  /* 103724c6 call 0x10372d59 */
  push32(0x103724cbu); f_10372d59();
  /* 103724cb mov dword ptr [0x10376690], eax */
  w32((uint32_t)(0x10376690), (EAX));
  /* 103724d0 call 0x10372843 */
  push32(0x103724d5u); f_10372843();
  /* 103724d5 call 0x10372b0c */
  push32(0x103724dau); f_10372b0c();
  /* 103724da call 0x10372a53 */
  push32(0x103724dfu); f_10372a53();
  /* 103724df call 0x10372600 */
  push32(0x103724e4u); f_10372600();
  /* 103724e4 inc dword ptr [0x1037668c] */
  { uint32_t _r=(r32((uint32_t)(0x1037668c)))+1; w32((uint32_t)(0x1037668c), (_r)); fl_inc(_r,32); }
  /* 103724ea jmp 0x1037252a */
  goto L_1037252a;
L_103724ec:;
  /* 103724ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103724ee cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103724f0 jne 0x1037251e */
  if (!C.zf) goto L_1037251e;
  /* 103724f2 cmp dword ptr [0x1037668c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1037668c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103724f8 jle 0x103724b7 */
  if ((C.zf||C.sf!=C.of)) goto L_103724b7;
  /* 103724fa dec dword ptr [0x1037668c] */
  { uint32_t _r=(r32((uint32_t)(0x1037668c)))-1; w32((uint32_t)(0x1037668c), (_r)); fl_dec(_r,32); }
  /* 10372500 cmp dword ptr [0x103766dc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x103766dc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372506 jne 0x1037250d */
  if (!C.zf) goto L_1037250d;
  /* 10372508 call 0x1037263e */
  push32(0x1037250du); f_1037263e();
L_1037250d:;
  /* 1037250d call 0x103729ff */
  push32(0x10372512u); f_103729ff();
  /* 10372512 call 0x10372772 */
  push32(0x10372517u); f_10372772();
  /* 10372517 call 0x10372ec7 */
  push32(0x1037251cu); f_10372ec7();
  /* 1037251c jmp 0x1037252a */
  goto L_1037252a;
L_1037251e:;
  /* 1037251e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372521 jne 0x1037252a */
  if (!C.zf) goto L_1037252a;
  /* 10372523 push ecx */
  push32((uint32_t)(ECX));
  /* 10372524 call 0x103727a3 */
  push32(0x10372529u); f_103727a3();
  /* 10372529 pop ecx */
  ECX = (pop32());
L_1037252a:;
  /* 1037252a push 1 */
  push32((uint32_t)(0x1u));
  /* 1037252c pop eax */
  EAX = (pop32());
L_1037252d:;
  /* 1037252d ret 0xc */
  ESPCHK(0x10372457u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10372530 (157 bytes, 73 insns) */
void f_10372530(void) {
  FTRACE(0x10372530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372530 push ebp */
  push32((uint32_t)(EBP));
  /* 10372531 mov ebp, esp */
  EBP = (ESP);
  /* 10372533 push ebx */
  push32((uint32_t)(EBX));
  /* 10372534 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10372537 push esi */
  push32((uint32_t)(ESI));
  /* 10372538 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1037253b push edi */
  push32((uint32_t)(EDI));
  /* 1037253c mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1037253f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372541 jne 0x1037254c */
  if (!C.zf) goto L_1037254c;
  /* 10372543 cmp dword ptr [0x1037668c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1037668c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037254a jmp 0x10372572 */
  goto L_10372572;
L_1037254c:;
  /* 1037254c cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037254f je 0x10372556 */
  if (C.zf) goto L_10372556;
  /* 10372551 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372554 jne 0x10372578 */
  if (!C.zf) goto L_10372578;
L_10372556:;
  /* 10372556 mov eax, dword ptr [0x10376bfc] */
  EAX = (r32((uint32_t)(0x10376bfc)));
  /* 1037255b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037255d je 0x10372568 */
  if (C.zf) goto L_10372568;
  /* 1037255f push edi */
  push32((uint32_t)(EDI));
  /* 10372560 push esi */
  push32((uint32_t)(ESI));
  /* 10372561 push ebx */
  push32((uint32_t)(EBX));
  /* 10372562 call eax */
  call_ind((uint32_t)(EAX), 0x10372564u);
  /* 10372564 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372566 je 0x10372574 */
  if (C.zf) goto L_10372574;
L_10372568:;
  /* 10372568 push edi */
  push32((uint32_t)(EDI));
  /* 10372569 push esi */
  push32((uint32_t)(ESI));
  /* 1037256a push ebx */
  push32((uint32_t)(EBX));
  /* 1037256b call 0x10372457 */
  push32(0x10372570u); f_10372457();
  /* 10372570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10372572:;
  /* 10372572 jne 0x10372578 */
  if (!C.zf) goto L_10372578;
L_10372574:;
  /* 10372574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10372576 jmp 0x103725c6 */
  goto L_103725c6;
L_10372578:;
  /* 10372578 push edi */
  push32((uint32_t)(EDI));
  /* 10372579 push esi */
  push32((uint32_t)(ESI));
  /* 1037257a push ebx */
  push32((uint32_t)(EBX));
  /* 1037257b call 0x10371000 */
  push32(0x10372580u); f_10371000();
  /* 10372580 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372583 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10372586 jne 0x10372594 */
  if (!C.zf) goto L_10372594;
  /* 10372588 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037258a jne 0x103725c3 */
  if (!C.zf) goto L_103725c3;
  /* 1037258c push edi */
  push32((uint32_t)(EDI));
  /* 1037258d push eax */
  push32((uint32_t)(EAX));
  /* 1037258e push ebx */
  push32((uint32_t)(EBX));
  /* 1037258f call 0x10372457 */
  push32(0x10372594u); f_10372457();
L_10372594:;
  /* 10372594 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372596 je 0x1037259d */
  if (C.zf) goto L_1037259d;
  /* 10372598 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037259b jne 0x103725c3 */
  if (!C.zf) goto L_103725c3;
L_1037259d:;
  /* 1037259d push edi */
  push32((uint32_t)(EDI));
  /* 1037259e push esi */
  push32((uint32_t)(ESI));
  /* 1037259f push ebx */
  push32((uint32_t)(EBX));
  /* 103725a0 call 0x10372457 */
  push32(0x103725a5u); f_10372457();
  /* 103725a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103725a7 jne 0x103725ac */
  if (!C.zf) goto L_103725ac;
  /* 103725a9 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_103725ac:;
  /* 103725ac cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103725b0 je 0x103725c3 */
  if (C.zf) goto L_103725c3;
  /* 103725b2 mov eax, dword ptr [0x10376bfc] */
  EAX = (r32((uint32_t)(0x10376bfc)));
  /* 103725b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103725b9 je 0x103725c3 */
  if (C.zf) goto L_103725c3;
  /* 103725bb push edi */
  push32((uint32_t)(EDI));
  /* 103725bc push esi */
  push32((uint32_t)(ESI));
  /* 103725bd push ebx */
  push32((uint32_t)(EBX));
  /* 103725be call eax */
  call_ind((uint32_t)(EAX), 0x103725c0u);
  /* 103725c0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_103725c3:;
  /* 103725c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_103725c6:;
  /* 103725c6 pop edi */
  EDI = (pop32());
  /* 103725c7 pop esi */
  ESI = (pop32());
  /* 103725c8 pop ebx */
  EBX = (pop32());
  /* 103725c9 pop ebp */
  EBP = (pop32());
  /* 103725ca ret 0xc */
  ESPCHK(0x10372530u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x103725cd (48 bytes, 15 insns) */
void f_103725cd(void) {
  FTRACE(0x103725cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103725cd mov eax, dword ptr [0x10376698] */
  EAX = (r32((uint32_t)(0x10376698)));
  /* 103725d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103725d5 je 0x103725e4 */
  if (C.zf) goto L_103725e4;
  /* 103725d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103725d9 jne 0x103725e9 */
  if (!C.zf) goto L_103725e9;
  /* 103725db cmp dword ptr [0x1037669c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1037669c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103725e2 jne 0x103725e9 */
  if (!C.zf) goto L_103725e9;
L_103725e4:;
  /* 103725e4 call 0x10372f3c */
  push32(0x103725e9u); f_10372f3c();
L_103725e9:;
  /* 103725e9 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 103725ed call 0x10372f75 */
  push32(0x103725f2u); f_10372f75();
  /* 103725f2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 103725f7 call dword ptr [0x10376174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10376174))), 0x103725fdu);
  /* 103725fd pop ecx */
  ECX = (pop32());
  /* 103725fe pop ecx */
  ECX = (pop32());
  /* 103725ff ret  */
  ESPCHK(0x103725cdu, _esp0);
  ESP += 4; return;
}

/* FUN_10002600 @ 0x10372600 (45 bytes, 12 insns) */
void f_10372600(void) {
  FTRACE(0x10372600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372600 mov eax, dword ptr [0x10376bf4] */
  EAX = (r32((uint32_t)(0x10376bf4)));
  /* 10372605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372607 je 0x1037260b */
  if (C.zf) goto L_1037260b;
  /* 10372609 call eax */
  call_ind((uint32_t)(EAX), 0x1037260bu);
L_1037260b:;
  /* 1037260b push 0x10376010 */
  push32((uint32_t)(0x10376010u));
  /* 10372610 push 0x10376008 */
  push32((uint32_t)(0x10376008u));
  /* 10372615 call 0x10372704 */
  push32(0x1037261au); f_10372704();
  /* 1037261a push 0x10376004 */
  push32((uint32_t)(0x10376004u));
  /* 1037261f push 0x10376000 */
  push32((uint32_t)(0x10376000u));
  /* 10372624 call 0x10372704 */
  push32(0x10372629u); f_10372704();
  /* 10372629 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037262c ret  */
  ESPCHK(0x10372600u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x1037262d (17 bytes, 6 insns) */
void f_1037262d(void) {
  FTRACE(0x1037262du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1037262d push 0 */
  push32((uint32_t)(0x0u));
  /* 1037262f push 1 */
  push32((uint32_t)(0x1u));
  /* 10372631 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10372635 call 0x1037264d */
  push32(0x1037263au); f_1037264d();
  /* 1037263a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037263d ret  */
  ESPCHK(0x1037262du, _esp0);
  ESP += 4; return;
}

/* FUN_1000263e @ 0x1037263e (15 bytes, 6 insns) */
void f_1037263e(void) {
  FTRACE(0x1037263eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1037263e push 1 */
  push32((uint32_t)(0x1u));
  /* 10372640 push 0 */
  push32((uint32_t)(0x0u));
  /* 10372642 push 0 */
  push32((uint32_t)(0x0u));
  /* 10372644 call 0x1037264d */
  push32(0x10372649u); f_1037264d();
  /* 10372649 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037264c ret  */
  ESPCHK(0x1037263eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000264d @ 0x1037264d (163 bytes, 53 insns) */
void f_1037264d(void) {
  FTRACE(0x1037264du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1037264d push edi */
  push32((uint32_t)(EDI));
  /* 1037264e call 0x103726f2 */
  push32(0x10372653u); f_103726f2();
  /* 10372653 push 1 */
  push32((uint32_t)(0x1u));
  /* 10372655 pop edi */
  EDI = (pop32());
  /* 10372656 cmp dword ptr [0x103766e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x103766e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037265c jne 0x1037266f */
  if (!C.zf) goto L_1037266f;
  /* 1037265e push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10372662 call dword ptr [0x10375000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375000))), 0x10372668u);
  /* 10372668 push eax */
  push32((uint32_t)(EAX));
  /* 10372669 call dword ptr [0x10375098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375098))), 0x1037266fu);
L_1037266f:;
  /* 1037266f cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372674 push ebx */
  push32((uint32_t)(EBX));
  /* 10372675 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10372679 mov dword ptr [0x103766dc], edi */
  w32((uint32_t)(0x103766dc), (EDI));
  /* 1037267f mov byte ptr [0x103766d8], bl */
  w8((uint32_t)(0x103766d8), (BL));
  /* 10372685 jne 0x103726c3 */
  if (!C.zf) goto L_103726c3;
  /* 10372687 mov eax, dword ptr [0x10376bf0] */
  EAX = (r32((uint32_t)(0x10376bf0)));
  /* 1037268c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037268e je 0x103726b2 */
  if (C.zf) goto L_103726b2;
  /* 10372690 mov ecx, dword ptr [0x10376bec] */
  ECX = (r32((uint32_t)(0x10376bec)));
  /* 10372696 push esi */
  push32((uint32_t)(ESI));
  /* 10372697 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 1037269a cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037269c jb 0x103726b1 */
  if (C.cf) goto L_103726b1;
L_1037269e:;
  /* 1037269e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103726a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103726a2 je 0x103726a6 */
  if (C.zf) goto L_103726a6;
  /* 103726a4 call eax */
  call_ind((uint32_t)(EAX), 0x103726a6u);
L_103726a6:;
  /* 103726a6 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103726a9 cmp esi, dword ptr [0x10376bf0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10376bf0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103726af jae 0x1037269e */
  if (!C.cf) goto L_1037269e;
L_103726b1:;
  /* 103726b1 pop esi */
  ESI = (pop32());
L_103726b2:;
  /* 103726b2 push 0x10376018 */
  push32((uint32_t)(0x10376018u));
  /* 103726b7 push 0x10376014 */
  push32((uint32_t)(0x10376014u));
  /* 103726bc call 0x10372704 */
  push32(0x103726c1u); f_10372704();
  /* 103726c1 pop ecx */
  ECX = (pop32());
  /* 103726c2 pop ecx */
  ECX = (pop32());
L_103726c3:;
  /* 103726c3 push 0x10376020 */
  push32((uint32_t)(0x10376020u));
  /* 103726c8 push 0x1037601c */
  push32((uint32_t)(0x1037601cu));
  /* 103726cd call 0x10372704 */
  push32(0x103726d2u); f_10372704();
  /* 103726d2 pop ecx */
  ECX = (pop32());
  /* 103726d3 pop ecx */
  ECX = (pop32());
  /* 103726d4 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 103726d6 pop ebx */
  EBX = (pop32());
  /* 103726d7 je 0x103726e0 */
  if (C.zf) goto L_103726e0;
  /* 103726d9 call 0x103726fb */
  push32(0x103726deu); f_103726fb();
  /* 103726de pop edi */
  EDI = (pop32());
  /* 103726df ret  */
  ESPCHK(0x1037264du, _esp0);
  ESP += 4; return;
L_103726e0:;
  /* 103726e0 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 103726e4 mov dword ptr [0x103766e0], edi */
  w32((uint32_t)(0x103766e0), (EDI));
  /* 103726ea call dword ptr [0x10375094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375094))), 0x103726f0u);
  /* 103726f0 pop edi */
  EDI = (pop32());
  /* 103726f1 ret  */
  ESPCHK(0x1037264du, _esp0);
  ESP += 4; return;
}

/* FUN_100026f2 @ 0x103726f2 (9 bytes, 4 insns) */
void f_103726f2(void) {
  FTRACE(0x103726f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103726f2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 103726f4 call 0x1037315d */
  push32(0x103726f9u); f_1037315d();
  /* 103726f9 pop ecx */
  ECX = (pop32());
  /* 103726fa ret  */
  ESPCHK(0x103726f2u, _esp0);
  ESP += 4; return;
}

/* FUN_100026fb @ 0x103726fb (9 bytes, 4 insns) */
void f_103726fb(void) {
  FTRACE(0x103726fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103726fb push 0xd */
  push32((uint32_t)(0xdu));
  /* 103726fd call 0x103731be */
  push32(0x10372702u); f_103731be();
  /* 10372702 pop ecx */
  ECX = (pop32());
  /* 10372703 ret  */
  ESPCHK(0x103726fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10002704 @ 0x10372704 (26 bytes, 12 insns) */
void f_10372704(void) {
  FTRACE(0x10372704u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372704 push esi */
  push32((uint32_t)(ESI));
  /* 10372705 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10372709:;
  /* 10372709 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037270d jae 0x1037271c */
  if (!C.cf) goto L_1037271c;
  /* 1037270f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10372711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372713 je 0x10372717 */
  if (C.zf) goto L_10372717;
  /* 10372715 call eax */
  call_ind((uint32_t)(EAX), 0x10372717u);
L_10372717:;
  /* 10372717 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1037271a jmp 0x10372709 */
  goto L_10372709;
L_1037271c:;
  /* 1037271c pop esi */
  ESI = (pop32());
  /* 1037271d ret  */
  ESPCHK(0x10372704u, _esp0);
  ESP += 4; return;
}

/* FUN_1000271e @ 0x1037271e (84 bytes, 32 insns) */
void f_1037271e(void) {
  FTRACE(0x1037271eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1037271e push esi */
  push32((uint32_t)(ESI));
  /* 1037271f call 0x103730c8 */
  push32(0x10372724u); f_103730c8();
  /* 10372724 call dword ptr [0x103750a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750a0))), 0x1037272au);
  /* 1037272a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037272d mov dword ptr [0x10376178], eax */
  w32((uint32_t)(0x10376178), (EAX));
  /* 10372732 je 0x1037276e */
  if (C.zf) goto L_1037276e;
  /* 10372734 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10372736 push 1 */
  push32((uint32_t)(0x1u));
  /* 10372738 call 0x103731d3 */
  push32(0x1037273du); f_103731d3();
  /* 1037273d mov esi, eax */
  ESI = (EAX);
  /* 1037273f pop ecx */
  ECX = (pop32());
  /* 10372740 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372742 pop ecx */
  ECX = (pop32());
  /* 10372743 je 0x1037276e */
  if (C.zf) goto L_1037276e;
  /* 10372745 push esi */
  push32((uint32_t)(ESI));
  /* 10372746 push dword ptr [0x10376178] */
  push32((uint32_t)(r32((uint32_t)(0x10376178))));
  /* 1037274c call dword ptr [0x1037509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037509c))), 0x10372752u);
  /* 10372752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372754 je 0x1037276e */
  if (C.zf) goto L_1037276e;
  /* 10372756 push esi */
  push32((uint32_t)(ESI));
  /* 10372757 call 0x10372790 */
  push32(0x1037275cu); f_10372790();
  /* 1037275c pop ecx */
  ECX = (pop32());
  /* 1037275d call dword ptr [0x10375004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375004))), 0x10372763u);
  /* 10372763 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10372767 push 1 */
  push32((uint32_t)(0x1u));
  /* 10372769 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1037276b pop eax */
  EAX = (pop32());
  /* 1037276c pop esi */
  ESI = (pop32());
  /* 1037276d ret  */
  ESPCHK(0x1037271eu, _esp0);
  ESP += 4; return;
L_1037276e:;
  /* 1037276e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10372770 pop esi */
  ESI = (pop32());
  /* 10372771 ret  */
  ESPCHK(0x1037271eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002772 @ 0x10372772 (30 bytes, 8 insns) */
void f_10372772(void) {
  FTRACE(0x10372772u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372772 call 0x103730f1 */
  push32(0x10372777u); f_103730f1();
  /* 10372777 mov eax, dword ptr [0x10376178] */
  EAX = (r32((uint32_t)(0x10376178)));
  /* 1037277c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037277f je 0x1037278f */
  if (C.zf) goto L_1037278f;
  /* 10372781 push eax */
  push32((uint32_t)(EAX));
  /* 10372782 call dword ptr [0x103750a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750a4))), 0x10372788u);
  /* 10372788 or dword ptr [0x10376178], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10376178)))|(0xffffffffu); w32((uint32_t)(0x10376178), (_r)); fl_logic(_r,32); }
L_1037278f:;
  /* 1037278f ret  */
  ESPCHK(0x10372772u, _esp0);
  ESP += 4; return;
}

/* FUN_10002790 @ 0x10372790 (19 bytes, 4 insns) */
void f_10372790(void) {
  FTRACE(0x10372790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372790 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10372794 mov dword ptr [eax + 0x50], 0x103762f8 */
  w32((uint32_t)(EAX + 0x50), (0x103762f8u));
  /* 1037279b mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 103727a2 ret  */
  ESPCHK(0x10372790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027a3 @ 0x103727a3 (160 bytes, 62 insns) */
void f_103727a3(void) {
  FTRACE(0x103727a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103727a3 mov eax, dword ptr [0x10376178] */
  EAX = (r32((uint32_t)(0x10376178)));
  /* 103727a8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103727ab je 0x10372842 */
  if (C.zf) goto L_10372842;
  /* 103727b1 push esi */
  push32((uint32_t)(ESI));
  /* 103727b2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 103727b6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103727b8 jne 0x103727c7 */
  if (!C.zf) goto L_103727c7;
  /* 103727ba push eax */
  push32((uint32_t)(EAX));
  /* 103727bb call dword ptr [0x103750a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103750a8))), 0x103727c1u);
  /* 103727c1 mov esi, eax */
  ESI = (EAX);
  /* 103727c3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103727c5 je 0x10372833 */
  if (C.zf) goto L_10372833;
L_103727c7:;
  /* 103727c7 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 103727ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103727cc je 0x103727d5 */
  if (C.zf) goto L_103727d5;
  /* 103727ce push eax */
  push32((uint32_t)(EAX));
  /* 103727cf call 0x10373260 */
  push32(0x103727d4u); f_10373260();
  /* 103727d4 pop ecx */
  ECX = (pop32());
L_103727d5:;
  /* 103727d5 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 103727d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103727da je 0x103727e3 */
  if (C.zf) goto L_103727e3;
  /* 103727dc push eax */
  push32((uint32_t)(EAX));
  /* 103727dd call 0x10373260 */
  push32(0x103727e2u); f_10373260();
  /* 103727e2 pop ecx */
  ECX = (pop32());
L_103727e3:;
  /* 103727e3 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 103727e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103727e8 je 0x103727f1 */
  if (C.zf) goto L_103727f1;
  /* 103727ea push eax */
  push32((uint32_t)(EAX));
  /* 103727eb call 0x10373260 */
  push32(0x103727f0u); f_10373260();
  /* 103727f0 pop ecx */
  ECX = (pop32());
L_103727f1:;
  /* 103727f1 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 103727f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103727f6 je 0x103727ff */
  if (C.zf) goto L_103727ff;
  /* 103727f8 push eax */
  push32((uint32_t)(EAX));
  /* 103727f9 call 0x10373260 */
  push32(0x103727feu); f_10373260();
  /* 103727fe pop ecx */
  ECX = (pop32());
L_103727ff:;
  /* 103727ff mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10372802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372804 je 0x1037280d */
  if (C.zf) goto L_1037280d;
  /* 10372806 push eax */
  push32((uint32_t)(EAX));
  /* 10372807 call 0x10373260 */
  push32(0x1037280cu); f_10373260();
  /* 1037280c pop ecx */
  ECX = (pop32());
L_1037280d:;
  /* 1037280d mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10372810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372812 je 0x1037281b */
  if (C.zf) goto L_1037281b;
  /* 10372814 push eax */
  push32((uint32_t)(EAX));
  /* 10372815 call 0x10373260 */
  push32(0x1037281au); f_10373260();
  /* 1037281a pop ecx */
  ECX = (pop32());
L_1037281b:;
  /* 1037281b mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1037281e cmp eax, 0x103762f8 */
  { uint32_t _a=(EAX),_b=(0x103762f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372823 je 0x1037282c */
  if (C.zf) goto L_1037282c;
  /* 10372825 push eax */
  push32((uint32_t)(EAX));
  /* 10372826 call 0x10373260 */
  push32(0x1037282bu); f_10373260();
  /* 1037282b pop ecx */
  ECX = (pop32());
L_1037282c:;
  /* 1037282c push esi */
  push32((uint32_t)(ESI));
  /* 1037282d call 0x10373260 */
  push32(0x10372832u); f_10373260();
  /* 10372832 pop ecx */
  ECX = (pop32());
L_10372833:;
  /* 10372833 push 0 */
  push32((uint32_t)(0x0u));
  /* 10372835 push dword ptr [0x10376178] */
  push32((uint32_t)(r32((uint32_t)(0x10376178))));
  /* 1037283b call dword ptr [0x1037509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037509c))), 0x10372841u);
  /* 10372841 pop esi */
  ESI = (pop32());
L_10372842:;
  /* 10372842 ret  */
  ESPCHK(0x103727a3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002843 @ 0x10372843 (444 bytes, 150 insns) */
void f_10372843(void) {
  FTRACE(0x10372843u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372843 push ebp */
  push32((uint32_t)(EBP));
  /* 10372844 mov ebp, esp */
  EBP = (ESP);
  /* 10372846 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10372849 push ebx */
  push32((uint32_t)(EBX));
  /* 1037284a push esi */
  push32((uint32_t)(ESI));
  /* 1037284b push edi */
  push32((uint32_t)(EDI));
  /* 1037284c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10372851 call 0x103732a8 */
  push32(0x10372856u); f_103732a8();
  /* 10372856 mov esi, eax */
  ESI = (EAX);
  /* 10372858 pop ecx */
  ECX = (pop32());
  /* 10372859 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1037285b jne 0x10372865 */
  if (!C.zf) goto L_10372865;
  /* 1037285d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1037285f call 0x103725cd */
  push32(0x10372864u); f_103725cd();
  /* 10372864 pop ecx */
  ECX = (pop32());
L_10372865:;
  /* 10372865 mov dword ptr [0x10376ae0], esi */
  w32((uint32_t)(0x10376ae0), (ESI));
  /* 1037286b mov dword ptr [0x10376be0], 0x20 */
  w32((uint32_t)(0x10376be0), (0x20u));
  /* 10372875 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_1037287b:;
  /* 1037287b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037287d jae 0x1037289d */
  if (!C.cf) goto L_1037289d;
  /* 1037287f and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10372883 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10372886 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1037288a mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1037288e mov eax, dword ptr [0x10376ae0] */
  EAX = (r32((uint32_t)(0x10376ae0)));
  /* 10372893 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372896 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1037289b jmp 0x1037287b */
  goto L_1037287b;
L_1037289d:;
  /* 1037289d lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 103728a0 push eax */
  push32((uint32_t)(EAX));
  /* 103728a1 call dword ptr [0x10375084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375084))), 0x103728a7u);
  /* 103728a7 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 103728ac je 0x10372983 */
  if (C.zf) goto L_10372983;
  /* 103728b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 103728b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103728b7 je 0x10372983 */
  if (C.zf) goto L_10372983;
  /* 103728bd mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 103728bf lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 103728c2 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 103728c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103728c8 mov eax, 0x800 */
  EAX = (0x800u);
  /* 103728cd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103728cf jl 0x103728d3 */
  if ((C.sf!=C.of)) goto L_103728d3;
  /* 103728d1 mov edi, eax */
  EDI = (EAX);
L_103728d3:;
  /* 103728d3 cmp dword ptr [0x10376be0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10376be0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103728d9 jge 0x10372931 */
  if ((C.sf==C.of)) goto L_10372931;
  /* 103728db mov esi, 0x10376ae4 */
  ESI = (0x10376ae4u);
L_103728e0:;
  /* 103728e0 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103728e5 call 0x103732a8 */
  push32(0x103728eau); f_103732a8();
  /* 103728ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103728ec pop ecx */
  ECX = (pop32());
  /* 103728ed je 0x1037292b */
  if (C.zf) goto L_1037292b;
  /* 103728ef add dword ptr [0x10376be0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10376be0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10376be0), (_r)); fl_add(_a,_b,_r,32); }
  /* 103728f6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 103728f8 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_103728fe:;
  /* 103728fe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372900 jae 0x1037291e */
  if (!C.cf) goto L_1037291e;
  /* 10372902 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10372906 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10372909 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1037290d mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10372911 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10372913 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10372916 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1037291c jmp 0x103728fe */
  goto L_103728fe;
L_1037291e:;
  /* 1037291e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372921 cmp dword ptr [0x10376be0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10376be0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372927 jl 0x103728e0 */
  if ((C.sf!=C.of)) goto L_103728e0;
  /* 10372929 jmp 0x10372931 */
  goto L_10372931;
L_1037292b:;
  /* 1037292b mov edi, dword ptr [0x10376be0] */
  EDI = (r32((uint32_t)(0x10376be0)));
L_10372931:;
  /* 10372931 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10372933 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10372935 jle 0x10372983 */
  if ((C.zf||C.sf!=C.of)) goto L_10372983;
L_10372937:;
  /* 10372937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1037293a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1037293c cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037293f je 0x10372979 */
  if (C.zf) goto L_10372979;
  /* 10372941 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10372943 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10372945 je 0x10372979 */
  if (C.zf) goto L_10372979;
  /* 10372947 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10372949 jne 0x10372956 */
  if (!C.zf) goto L_10372956;
  /* 1037294b push ecx */
  push32((uint32_t)(ECX));
  /* 1037294c call dword ptr [0x1037507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037507c))), 0x10372952u);
  /* 10372952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372954 je 0x10372979 */
  if (C.zf) goto L_10372979;
L_10372956:;
  /* 10372956 mov ecx, esi */
  ECX = (ESI);
  /* 10372958 mov eax, esi */
  EAX = (ESI);
  /* 1037295a sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1037295d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10372960 mov ecx, dword ptr [ecx*4 + 0x10376ae0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10376ae0)));
  /* 10372967 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1037296a lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1037296d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10372970 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10372972 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10372974 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10372976 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10372979:;
  /* 10372979 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1037297d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1037297e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1037297f cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372981 jl 0x10372937 */
  if ((C.sf!=C.of)) goto L_10372937;
L_10372983:;
  /* 10372983 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10372985:;
  /* 10372985 mov ecx, dword ptr [0x10376ae0] */
  ECX = (r32((uint32_t)(0x10376ae0)));
  /* 1037298b lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1037298e cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372992 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10372995 jne 0x103729e4 */
  if (!C.zf) goto L_103729e4;
  /* 10372997 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10372999 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 1037299d jne 0x103729a4 */
  if (!C.zf) goto L_103729a4;
  /* 1037299f push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 103729a1 pop eax */
  EAX = (pop32());
  /* 103729a2 jmp 0x103729ae */
  goto L_103729ae;
L_103729a4:;
  /* 103729a4 mov eax, ebx */
  EAX = (EBX);
  /* 103729a6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 103729a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103729a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103729ab add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_103729ae:;
  /* 103729ae push eax */
  push32((uint32_t)(EAX));
  /* 103729af call dword ptr [0x10375080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375080))), 0x103729b5u);
  /* 103729b5 mov edi, eax */
  EDI = (EAX);
  /* 103729b7 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103729ba je 0x103729d3 */
  if (C.zf) goto L_103729d3;
  /* 103729bc push edi */
  push32((uint32_t)(EDI));
  /* 103729bd call dword ptr [0x1037507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037507c))), 0x103729c3u);
  /* 103729c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103729c5 je 0x103729d3 */
  if (C.zf) goto L_103729d3;
  /* 103729c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103729cc mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 103729ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103729d1 jne 0x103729d9 */
  if (!C.zf) goto L_103729d9;
L_103729d3:;
  /* 103729d3 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 103729d7 jmp 0x103729e8 */
  goto L_103729e8;
L_103729d9:;
  /* 103729d9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103729dc jne 0x103729e8 */
  if (!C.zf) goto L_103729e8;
  /* 103729de or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 103729e2 jmp 0x103729e8 */
  goto L_103729e8;
L_103729e4:;
  /* 103729e4 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_103729e8:;
  /* 103729e8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103729e9 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103729ec jl 0x10372985 */
  if ((C.sf!=C.of)) goto L_10372985;
  /* 103729ee push dword ptr [0x10376be0] */
  push32((uint32_t)(r32((uint32_t)(0x10376be0))));
  /* 103729f4 call dword ptr [0x10375088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375088))), 0x103729fau);
  /* 103729fa pop edi */
  EDI = (pop32());
  /* 103729fb pop esi */
  ESI = (pop32());
  /* 103729fc pop ebx */
  EBX = (pop32());
  /* 103729fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103729fe ret  */
  ESPCHK(0x10372843u, _esp0);
  ESP += 4; return;
}

/* FUN_100029ff @ 0x103729ff (84 bytes, 33 insns) */
void f_103729ff(void) {
  FTRACE(0x103729ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103729ff push ebx */
  push32((uint32_t)(EBX));
  /* 10372a00 push esi */
  push32((uint32_t)(ESI));
  /* 10372a01 push edi */
  push32((uint32_t)(EDI));
  /* 10372a02 mov esi, 0x10376ae0 */
  ESI = (0x10376ae0u);
L_10372a07:;
  /* 10372a07 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10372a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372a0b je 0x10372a44 */
  if (C.zf) goto L_10372a44;
  /* 10372a0d mov edi, eax */
  EDI = (EAX);
  /* 10372a0f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10372a14 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372a16 jae 0x10372a39 */
  if (!C.cf) goto L_10372a39;
  /* 10372a18 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10372a1b:;
  /* 10372a1b cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372a1f je 0x10372a28 */
  if (C.zf) goto L_10372a28;
  /* 10372a21 push ebx */
  push32((uint32_t)(EBX));
  /* 10372a22 call dword ptr [0x10375074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375074))), 0x10372a28u);
L_10372a28:;
  /* 10372a28 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10372a2a add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372a2d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10372a32 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10372a35 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372a37 jb 0x10372a1b */
  if (C.cf) goto L_10372a1b;
L_10372a39:;
  /* 10372a39 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10372a3b call 0x10373260 */
  push32(0x10372a40u); f_10373260();
  /* 10372a40 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10372a43 pop ecx */
  ECX = (pop32());
L_10372a44:;
  /* 10372a44 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372a47 cmp esi, 0x10376be0 */
  { uint32_t _a=(ESI),_b=(0x10376be0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372a4d jl 0x10372a07 */
  if ((C.sf!=C.of)) goto L_10372a07;
  /* 10372a4f pop edi */
  EDI = (pop32());
  /* 10372a50 pop esi */
  ESI = (pop32());
  /* 10372a51 pop ebx */
  EBX = (pop32());
  /* 10372a52 ret  */
  ESPCHK(0x103729ffu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a53 @ 0x10372a53 (185 bytes, 71 insns) */
void f_10372a53(void) {
  FTRACE(0x10372a53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372a53 push ebx */
  push32((uint32_t)(EBX));
  /* 10372a54 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10372a56 cmp dword ptr [0x10376be8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10376be8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372a5c push esi */
  push32((uint32_t)(ESI));
  /* 10372a5d push edi */
  push32((uint32_t)(EDI));
  /* 10372a5e jne 0x10372a65 */
  if (!C.zf) goto L_10372a65;
  /* 10372a60 call 0x10373883 */
  push32(0x10372a65u); f_10373883();
L_10372a65:;
  /* 10372a65 mov esi, dword ptr [0x10376690] */
  ESI = (r32((uint32_t)(0x10376690)));
  /* 10372a6b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10372a6d:;
  /* 10372a6d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10372a6f cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372a71 je 0x10372a85 */
  if (C.zf) goto L_10372a85;
  /* 10372a73 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372a75 je 0x10372a78 */
  if (C.zf) goto L_10372a78;
  /* 10372a77 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10372a78:;
  /* 10372a78 push esi */
  push32((uint32_t)(ESI));
  /* 10372a79 call 0x10373430 */
  push32(0x10372a7eu); f_10373430();
  /* 10372a7e pop ecx */
  ECX = (pop32());
  /* 10372a7f lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10372a83 jmp 0x10372a6d */
  goto L_10372a6d;
L_10372a85:;
  /* 10372a85 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10372a8c push eax */
  push32((uint32_t)(EAX));
  /* 10372a8d call 0x103732a8 */
  push32(0x10372a92u); f_103732a8();
  /* 10372a92 mov esi, eax */
  ESI = (EAX);
  /* 10372a94 pop ecx */
  ECX = (pop32());
  /* 10372a95 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372a97 mov dword ptr [0x103766c0], esi */
  w32((uint32_t)(0x103766c0), (ESI));
  /* 10372a9d jne 0x10372aa7 */
  if (!C.zf) goto L_10372aa7;
  /* 10372a9f push 9 */
  push32((uint32_t)(0x9u));
  /* 10372aa1 call 0x103725cd */
  push32(0x10372aa6u); f_103725cd();
  /* 10372aa6 pop ecx */
  ECX = (pop32());
L_10372aa7:;
  /* 10372aa7 mov edi, dword ptr [0x10376690] */
  EDI = (r32((uint32_t)(0x10376690)));
  /* 10372aad cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372aaf je 0x10372aea */
  if (C.zf) goto L_10372aea;
  /* 10372ab1 push ebp */
  push32((uint32_t)(EBP));
L_10372ab2:;
  /* 10372ab2 push edi */
  push32((uint32_t)(EDI));
  /* 10372ab3 call 0x10373430 */
  push32(0x10372ab8u); f_10373430();
  /* 10372ab8 mov ebp, eax */
  EBP = (EAX);
  /* 10372aba pop ecx */
  ECX = (pop32());
  /* 10372abb inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10372abc cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372abf je 0x10372ae3 */
  if (C.zf) goto L_10372ae3;
  /* 10372ac1 push ebp */
  push32((uint32_t)(EBP));
  /* 10372ac2 call 0x103732a8 */
  push32(0x10372ac7u); f_103732a8();
  /* 10372ac7 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372ac9 pop ecx */
  ECX = (pop32());
  /* 10372aca mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10372acc jne 0x10372ad6 */
  if (!C.zf) goto L_10372ad6;
  /* 10372ace push 9 */
  push32((uint32_t)(0x9u));
  /* 10372ad0 call 0x103725cd */
  push32(0x10372ad5u); f_103725cd();
  /* 10372ad5 pop ecx */
  ECX = (pop32());
L_10372ad6:;
  /* 10372ad6 push edi */
  push32((uint32_t)(EDI));
  /* 10372ad7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10372ad9 call 0x10373340 */
  push32(0x10372adeu); f_10373340();
  /* 10372ade pop ecx */
  ECX = (pop32());
  /* 10372adf add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372ae2 pop ecx */
  ECX = (pop32());
L_10372ae3:;
  /* 10372ae3 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372ae5 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372ae7 jne 0x10372ab2 */
  if (!C.zf) goto L_10372ab2;
  /* 10372ae9 pop ebp */
  EBP = (pop32());
L_10372aea:;
  /* 10372aea push dword ptr [0x10376690] */
  push32((uint32_t)(r32((uint32_t)(0x10376690))));
  /* 10372af0 call 0x10373260 */
  push32(0x10372af5u); f_10373260();
  /* 10372af5 pop ecx */
  ECX = (pop32());
  /* 10372af6 mov dword ptr [0x10376690], ebx */
  w32((uint32_t)(0x10376690), (EBX));
  /* 10372afc mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10372afe pop edi */
  EDI = (pop32());
  /* 10372aff pop esi */
  ESI = (pop32());
  /* 10372b00 mov dword ptr [0x10376be4], 1 */
  w32((uint32_t)(0x10376be4), (0x1u));
  /* 10372b0a pop ebx */
  EBX = (pop32());
  /* 10372b0b ret  */
  ESPCHK(0x10372a53u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b0c @ 0x10372b0c (153 bytes, 62 insns) */
void f_10372b0c(void) {
  FTRACE(0x10372b0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372b0c push ebp */
  push32((uint32_t)(EBP));
  /* 10372b0d mov ebp, esp */
  EBP = (ESP);
  /* 10372b0f push ecx */
  push32((uint32_t)(ECX));
  /* 10372b10 push ecx */
  push32((uint32_t)(ECX));
  /* 10372b11 push ebx */
  push32((uint32_t)(EBX));
  /* 10372b12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10372b14 cmp dword ptr [0x10376be8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10376be8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372b1a push esi */
  push32((uint32_t)(ESI));
  /* 10372b1b push edi */
  push32((uint32_t)(EDI));
  /* 10372b1c jne 0x10372b23 */
  if (!C.zf) goto L_10372b23;
  /* 10372b1e call 0x10373883 */
  push32(0x10372b23u); f_10373883();
L_10372b23:;
  /* 10372b23 mov esi, 0x103766e4 */
  ESI = (0x103766e4u);
  /* 10372b28 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10372b2d push esi */
  push32((uint32_t)(ESI));
  /* 10372b2e push ebx */
  push32((uint32_t)(EBX));
  /* 10372b2f call dword ptr [0x10375070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375070))), 0x10372b35u);
  /* 10372b35 mov eax, dword ptr [0x10376bf8] */
  EAX = (r32((uint32_t)(0x10376bf8)));
  /* 10372b3a mov dword ptr [0x103766d0], esi */
  w32((uint32_t)(0x103766d0), (ESI));
  /* 10372b40 mov edi, esi */
  EDI = (ESI);
  /* 10372b42 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372b44 je 0x10372b48 */
  if (C.zf) goto L_10372b48;
  /* 10372b46 mov edi, eax */
  EDI = (EAX);
L_10372b48:;
  /* 10372b48 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10372b4b push eax */
  push32((uint32_t)(EAX));
  /* 10372b4c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10372b4f push eax */
  push32((uint32_t)(EAX));
  /* 10372b50 push ebx */
  push32((uint32_t)(EBX));
  /* 10372b51 push ebx */
  push32((uint32_t)(EBX));
  /* 10372b52 push edi */
  push32((uint32_t)(EDI));
  /* 10372b53 call 0x10372ba5 */
  push32(0x10372b58u); f_10372ba5();
  /* 10372b58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10372b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10372b5e lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10372b61 push eax */
  push32((uint32_t)(EAX));
  /* 10372b62 call 0x103732a8 */
  push32(0x10372b67u); f_103732a8();
  /* 10372b67 mov esi, eax */
  ESI = (EAX);
  /* 10372b69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10372b6c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372b6e jne 0x10372b78 */
  if (!C.zf) goto L_10372b78;
  /* 10372b70 push 8 */
  push32((uint32_t)(0x8u));
  /* 10372b72 call 0x103725cd */
  push32(0x10372b77u); f_103725cd();
  /* 10372b77 pop ecx */
  ECX = (pop32());
L_10372b78:;
  /* 10372b78 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10372b7b push eax */
  push32((uint32_t)(EAX));
  /* 10372b7c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10372b7f push eax */
  push32((uint32_t)(EAX));
  /* 10372b80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10372b83 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10372b86 push eax */
  push32((uint32_t)(EAX));
  /* 10372b87 push esi */
  push32((uint32_t)(ESI));
  /* 10372b88 push edi */
  push32((uint32_t)(EDI));
  /* 10372b89 call 0x10372ba5 */
  push32(0x10372b8eu); f_10372ba5();
  /* 10372b8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10372b91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10372b94 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10372b95 mov dword ptr [0x103766b8], esi */
  w32((uint32_t)(0x103766b8), (ESI));
  /* 10372b9b pop edi */
  EDI = (pop32());
  /* 10372b9c pop esi */
  ESI = (pop32());
  /* 10372b9d mov dword ptr [0x103766b4], eax */
  w32((uint32_t)(0x103766b4), (EAX));
  /* 10372ba2 pop ebx */
  EBX = (pop32());
  /* 10372ba3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10372ba4 ret  */
  ESPCHK(0x10372b0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba5 @ 0x10372ba5 (436 bytes, 187 insns) */
void f_10372ba5(void) {
  FTRACE(0x10372ba5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372ba5 push ebp */
  push32((uint32_t)(EBP));
  /* 10372ba6 mov ebp, esp */
  EBP = (ESP);
  /* 10372ba8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10372bab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10372bae push ebx */
  push32((uint32_t)(EBX));
  /* 10372baf push esi */
  push32((uint32_t)(ESI));
  /* 10372bb0 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10372bb3 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10372bb6 push edi */
  push32((uint32_t)(EDI));
  /* 10372bb7 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10372bba mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10372bc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10372bc3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10372bc5 je 0x10372bcf */
  if (C.zf) goto L_10372bcf;
  /* 10372bc7 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10372bc9 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372bcc mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10372bcf:;
  /* 10372bcf cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372bd2 jne 0x10372c18 */
  if (!C.zf) goto L_10372c18;
L_10372bd4:;
  /* 10372bd4 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10372bd7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372bd8 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372bdb je 0x10372c06 */
  if (C.zf) goto L_10372c06;
  /* 10372bdd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10372bdf je 0x10372c06 */
  if (C.zf) goto L_10372c06;
  /* 10372be1 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10372be4 test byte ptr [edx + 0x103769c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x103769c1)))&(0x4u); fl_logic(_r,8); }
  /* 10372beb je 0x10372bf9 */
  if (C.zf) goto L_10372bf9;
  /* 10372bed inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10372bef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372bf1 je 0x10372bf9 */
  if (C.zf) goto L_10372bf9;
  /* 10372bf3 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10372bf5 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10372bf7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10372bf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10372bf9:;
  /* 10372bf9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10372bfb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372bfd je 0x10372bd4 */
  if (C.zf) goto L_10372bd4;
  /* 10372bff mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10372c01 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10372c03 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10372c04 jmp 0x10372bd4 */
  goto L_10372bd4;
L_10372c06:;
  /* 10372c06 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10372c08 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372c0a je 0x10372c10 */
  if (C.zf) goto L_10372c10;
  /* 10372c0c and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10372c0f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10372c10:;
  /* 10372c10 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372c13 jne 0x10372c5b */
  if (!C.zf) goto L_10372c5b;
  /* 10372c15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372c16 jmp 0x10372c5b */
  goto L_10372c5b;
L_10372c18:;
  /* 10372c18 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10372c1a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372c1c je 0x10372c23 */
  if (C.zf) goto L_10372c23;
  /* 10372c1e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10372c20 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10372c22 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10372c23:;
  /* 10372c23 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10372c25 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372c26 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10372c29 test byte ptr [ebx + 0x103769c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x103769c1)))&(0x4u); fl_logic(_r,8); }
  /* 10372c30 je 0x10372c3e */
  if (C.zf) goto L_10372c3e;
  /* 10372c32 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10372c34 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372c36 je 0x10372c3d */
  if (C.zf) goto L_10372c3d;
  /* 10372c38 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10372c3a mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10372c3c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10372c3d:;
  /* 10372c3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10372c3e:;
  /* 10372c3e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372c41 je 0x10372c4c */
  if (C.zf) goto L_10372c4c;
  /* 10372c43 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10372c45 je 0x10372c50 */
  if (C.zf) goto L_10372c50;
  /* 10372c47 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372c4a jne 0x10372c18 */
  if (!C.zf) goto L_10372c18;
L_10372c4c:;
  /* 10372c4c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10372c4e jne 0x10372c53 */
  if (!C.zf) goto L_10372c53;
L_10372c50:;
  /* 10372c50 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10372c51 jmp 0x10372c5b */
  goto L_10372c5b;
L_10372c53:;
  /* 10372c53 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372c55 je 0x10372c5b */
  if (C.zf) goto L_10372c5b;
  /* 10372c57 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10372c5b:;
  /* 10372c5b and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10372c5f:;
  /* 10372c5f cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372c62 je 0x10372d48 */
  if (C.zf) goto L_10372d48;
L_10372c68:;
  /* 10372c68 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10372c6a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372c6d je 0x10372c74 */
  if (C.zf) goto L_10372c74;
  /* 10372c6f cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372c72 jne 0x10372c77 */
  if (!C.zf) goto L_10372c77;
L_10372c74:;
  /* 10372c74 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372c75 jmp 0x10372c68 */
  goto L_10372c68;
L_10372c77:;
  /* 10372c77 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372c7a je 0x10372d48 */
  if (C.zf) goto L_10372d48;
  /* 10372c80 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10372c82 je 0x10372c8c */
  if (C.zf) goto L_10372c8c;
  /* 10372c84 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10372c86 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372c89 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10372c8c:;
  /* 10372c8c mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10372c8f inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10372c91:;
  /* 10372c91 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10372c98 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10372c9a:;
  /* 10372c9a cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372c9d jne 0x10372ca3 */
  if (!C.zf) goto L_10372ca3;
  /* 10372c9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372ca0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10372ca1 jmp 0x10372c9a */
  goto L_10372c9a;
L_10372ca3:;
  /* 10372ca3 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372ca6 jne 0x10372cd4 */
  if (!C.zf) goto L_10372cd4;
  /* 10372ca8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10372cab jne 0x10372cd2 */
  if (!C.zf) goto L_10372cd2;
  /* 10372cad xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10372caf cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372cb2 je 0x10372cc1 */
  if (C.zf) goto L_10372cc1;
  /* 10372cb4 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372cb8 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10372cbb jne 0x10372cc1 */
  if (!C.zf) goto L_10372cc1;
  /* 10372cbd mov eax, edx */
  EAX = (EDX);
  /* 10372cbf jmp 0x10372cc4 */
  goto L_10372cc4;
L_10372cc1:;
  /* 10372cc1 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10372cc4:;
  /* 10372cc4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10372cc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10372cc9 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372ccc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10372ccf mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10372cd2:;
  /* 10372cd2 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10372cd4:;
  /* 10372cd4 mov edx, ebx */
  EDX = (EBX);
  /* 10372cd6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10372cd7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10372cd9 je 0x10372ce9 */
  if (C.zf) goto L_10372ce9;
  /* 10372cdb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10372cdc:;
  /* 10372cdc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372cde je 0x10372ce4 */
  if (C.zf) goto L_10372ce4;
  /* 10372ce0 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10372ce3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10372ce4:;
  /* 10372ce4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10372ce6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10372ce7 jne 0x10372cdc */
  if (!C.zf) goto L_10372cdc;
L_10372ce9:;
  /* 10372ce9 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10372ceb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10372ced je 0x10372d39 */
  if (C.zf) goto L_10372d39;
  /* 10372cef cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372cf3 jne 0x10372cff */
  if (!C.zf) goto L_10372cff;
  /* 10372cf5 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372cf8 je 0x10372d39 */
  if (C.zf) goto L_10372d39;
  /* 10372cfa cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372cfd je 0x10372d39 */
  if (C.zf) goto L_10372d39;
L_10372cff:;
  /* 10372cff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372d03 je 0x10372d33 */
  if (C.zf) goto L_10372d33;
  /* 10372d05 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372d07 je 0x10372d22 */
  if (C.zf) goto L_10372d22;
  /* 10372d09 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10372d0c test byte ptr [ebx + 0x103769c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x103769c1)))&(0x4u); fl_logic(_r,8); }
  /* 10372d13 je 0x10372d1b */
  if (C.zf) goto L_10372d1b;
  /* 10372d15 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10372d17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10372d18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372d19 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10372d1b:;
  /* 10372d1b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10372d1d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10372d1f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10372d20 jmp 0x10372d31 */
  goto L_10372d31;
L_10372d22:;
  /* 10372d22 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10372d25 test byte ptr [edx + 0x103769c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x103769c1)))&(0x4u); fl_logic(_r,8); }
  /* 10372d2c je 0x10372d31 */
  if (C.zf) goto L_10372d31;
  /* 10372d2e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372d2f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10372d31:;
  /* 10372d31 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10372d33:;
  /* 10372d33 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372d34 jmp 0x10372c91 */
  goto L_10372c91;
L_10372d39:;
  /* 10372d39 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10372d3b je 0x10372d41 */
  if (C.zf) goto L_10372d41;
  /* 10372d3d and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10372d40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10372d41:;
  /* 10372d41 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10372d43 jmp 0x10372c5f */
  goto L_10372c5f;
L_10372d48:;
  /* 10372d48 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10372d4a je 0x10372d4f */
  if (C.zf) goto L_10372d4f;
  /* 10372d4c and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10372d4f:;
  /* 10372d4f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10372d52 pop edi */
  EDI = (pop32());
  /* 10372d53 pop esi */
  ESI = (pop32());
  /* 10372d54 pop ebx */
  EBX = (pop32());
  /* 10372d55 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10372d57 pop ebp */
  EBP = (pop32());
  /* 10372d58 ret  */
  ESPCHK(0x10372ba5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d59 @ 0x10372d59 (306 bytes, 132 insns) */
void f_10372d59(void) {
  FTRACE(0x10372d59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372d59 push ecx */
  push32((uint32_t)(ECX));
  /* 10372d5a push ecx */
  push32((uint32_t)(ECX));
  /* 10372d5b mov eax, dword ptr [0x103767e8] */
  EAX = (r32((uint32_t)(0x103767e8)));
  /* 10372d60 push ebx */
  push32((uint32_t)(EBX));
  /* 10372d61 push ebp */
  push32((uint32_t)(EBP));
  /* 10372d62 mov ebp, dword ptr [0x1037505c] */
  EBP = (r32((uint32_t)(0x1037505c)));
  /* 10372d68 push esi */
  push32((uint32_t)(ESI));
  /* 10372d69 push edi */
  push32((uint32_t)(EDI));
  /* 10372d6a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10372d6c xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10372d6e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10372d70 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372d72 jne 0x10372da7 */
  if (!C.zf) goto L_10372da7;
  /* 10372d74 call ebp */
  call_ind((uint32_t)(EBP), 0x10372d76u);
  /* 10372d76 mov esi, eax */
  ESI = (EAX);
  /* 10372d78 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372d7a je 0x10372d88 */
  if (C.zf) goto L_10372d88;
  /* 10372d7c mov dword ptr [0x103767e8], 1 */
  w32((uint32_t)(0x103767e8), (0x1u));
  /* 10372d86 jmp 0x10372db0 */
  goto L_10372db0;
L_10372d88:;
  /* 10372d88 call dword ptr [0x1037506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037506c))), 0x10372d8eu);
  /* 10372d8e mov edi, eax */
  EDI = (EAX);
  /* 10372d90 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372d92 je 0x10372e82 */
  if (C.zf) goto L_10372e82;
  /* 10372d98 mov dword ptr [0x103767e8], 2 */
  w32((uint32_t)(0x103767e8), (0x2u));
  /* 10372da2 jmp 0x10372e36 */
  goto L_10372e36;
L_10372da7:;
  /* 10372da7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372daa jne 0x10372e31 */
  if (!C.zf) goto L_10372e31;
L_10372db0:;
  /* 10372db0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372db2 jne 0x10372dc0 */
  if (!C.zf) goto L_10372dc0;
  /* 10372db4 call ebp */
  call_ind((uint32_t)(EBP), 0x10372db6u);
  /* 10372db6 mov esi, eax */
  ESI = (EAX);
  /* 10372db8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372dba je 0x10372e82 */
  if (C.zf) goto L_10372e82;
L_10372dc0:;
  /* 10372dc0 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10372dc3 mov eax, esi */
  EAX = (ESI);
  /* 10372dc5 je 0x10372dd5 */
  if (C.zf) goto L_10372dd5;
L_10372dc7:;
  /* 10372dc7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372dc8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372dc9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10372dcc jne 0x10372dc7 */
  if (!C.zf) goto L_10372dc7;
  /* 10372dce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372dcf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372dd0 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10372dd3 jne 0x10372dc7 */
  if (!C.zf) goto L_10372dc7;
L_10372dd5:;
  /* 10372dd5 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10372dd7 mov edi, dword ptr [0x10375064] */
  EDI = (r32((uint32_t)(0x10375064)));
  /* 10372ddd sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10372ddf push ebx */
  push32((uint32_t)(EBX));
  /* 10372de0 push ebx */
  push32((uint32_t)(EBX));
  /* 10372de1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372de2 push ebx */
  push32((uint32_t)(EBX));
  /* 10372de3 push ebx */
  push32((uint32_t)(EBX));
  /* 10372de4 push eax */
  push32((uint32_t)(EAX));
  /* 10372de5 push esi */
  push32((uint32_t)(ESI));
  /* 10372de6 push ebx */
  push32((uint32_t)(EBX));
  /* 10372de7 push ebx */
  push32((uint32_t)(EBX));
  /* 10372de8 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10372dec call edi */
  call_ind((uint32_t)(EDI), 0x10372deeu);
  /* 10372dee mov ebp, eax */
  EBP = (EAX);
  /* 10372df0 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372df2 je 0x10372e26 */
  if (C.zf) goto L_10372e26;
  /* 10372df4 push ebp */
  push32((uint32_t)(EBP));
  /* 10372df5 call 0x103732a8 */
  push32(0x10372dfau); f_103732a8();
  /* 10372dfa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372dfc pop ecx */
  ECX = (pop32());
  /* 10372dfd mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10372e01 je 0x10372e26 */
  if (C.zf) goto L_10372e26;
  /* 10372e03 push ebx */
  push32((uint32_t)(EBX));
  /* 10372e04 push ebx */
  push32((uint32_t)(EBX));
  /* 10372e05 push ebp */
  push32((uint32_t)(EBP));
  /* 10372e06 push eax */
  push32((uint32_t)(EAX));
  /* 10372e07 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10372e0b push esi */
  push32((uint32_t)(ESI));
  /* 10372e0c push ebx */
  push32((uint32_t)(EBX));
  /* 10372e0d push ebx */
  push32((uint32_t)(EBX));
  /* 10372e0e call edi */
  call_ind((uint32_t)(EDI), 0x10372e10u);
  /* 10372e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372e12 jne 0x10372e22 */
  if (!C.zf) goto L_10372e22;
  /* 10372e14 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10372e18 call 0x10373260 */
  push32(0x10372e1du); f_10373260();
  /* 10372e1d pop ecx */
  ECX = (pop32());
  /* 10372e1e mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10372e22:;
  /* 10372e22 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10372e26:;
  /* 10372e26 push esi */
  push32((uint32_t)(ESI));
  /* 10372e27 call dword ptr [0x10375068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375068))), 0x10372e2du);
  /* 10372e2d mov eax, ebx */
  EAX = (EBX);
  /* 10372e2f jmp 0x10372e84 */
  goto L_10372e84;
L_10372e31:;
  /* 10372e31 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372e34 jne 0x10372e82 */
  if (!C.zf) goto L_10372e82;
L_10372e36:;
  /* 10372e36 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372e38 jne 0x10372e46 */
  if (!C.zf) goto L_10372e46;
  /* 10372e3a call dword ptr [0x1037506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037506c))), 0x10372e40u);
  /* 10372e40 mov edi, eax */
  EDI = (EAX);
  /* 10372e42 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372e44 je 0x10372e82 */
  if (C.zf) goto L_10372e82;
L_10372e46:;
  /* 10372e46 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372e48 mov eax, edi */
  EAX = (EDI);
  /* 10372e4a je 0x10372e56 */
  if (C.zf) goto L_10372e56;
L_10372e4c:;
  /* 10372e4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372e4d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372e4f jne 0x10372e4c */
  if (!C.zf) goto L_10372e4c;
  /* 10372e51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372e52 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10372e54 jne 0x10372e4c */
  if (!C.zf) goto L_10372e4c;
L_10372e56:;
  /* 10372e56 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10372e58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10372e59 mov ebp, eax */
  EBP = (EAX);
  /* 10372e5b push ebp */
  push32((uint32_t)(EBP));
  /* 10372e5c call 0x103732a8 */
  push32(0x10372e61u); f_103732a8();
  /* 10372e61 mov esi, eax */
  ESI = (EAX);
  /* 10372e63 pop ecx */
  ECX = (pop32());
  /* 10372e64 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372e66 jne 0x10372e6c */
  if (!C.zf) goto L_10372e6c;
  /* 10372e68 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10372e6a jmp 0x10372e77 */
  goto L_10372e77;
L_10372e6c:;
  /* 10372e6c push ebp */
  push32((uint32_t)(EBP));
  /* 10372e6d push edi */
  push32((uint32_t)(EDI));
  /* 10372e6e push esi */
  push32((uint32_t)(ESI));
  /* 10372e6f call 0x103738a0 */
  push32(0x10372e74u); f_103738a0();
  /* 10372e74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10372e77:;
  /* 10372e77 push edi */
  push32((uint32_t)(EDI));
  /* 10372e78 call dword ptr [0x10375078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375078))), 0x10372e7eu);
  /* 10372e7e mov eax, esi */
  EAX = (ESI);
  /* 10372e80 jmp 0x10372e84 */
  goto L_10372e84;
L_10372e82:;
  /* 10372e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10372e84:;
  /* 10372e84 pop edi */
  EDI = (pop32());
  /* 10372e85 pop esi */
  ESI = (pop32());
  /* 10372e86 pop ebp */
  EBP = (pop32());
  /* 10372e87 pop ebx */
  EBX = (pop32());
  /* 10372e88 pop ecx */
  ECX = (pop32());
  /* 10372e89 pop ecx */
  ECX = (pop32());
  /* 10372e8a ret  */
  ESPCHK(0x10372d59u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e8b @ 0x10372e8b (60 bytes, 20 insns) */
void f_10372e8b(void) {
  FTRACE(0x10372e8bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372e8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10372e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10372e8f cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372e93 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10372e98 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10372e9b push eax */
  push32((uint32_t)(EAX));
  /* 10372e9c call dword ptr [0x10375060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375060))), 0x10372ea2u);
  /* 10372ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372ea4 mov dword ptr [0x10376ac8], eax */
  w32((uint32_t)(0x10376ac8), (EAX));
  /* 10372ea9 je 0x10372ec0 */
  if (C.zf) goto L_10372ec0;
  /* 10372eab call 0x10373bd5 */
  push32(0x10372eb0u); f_10373bd5();
  /* 10372eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372eb2 jne 0x10372ec3 */
  if (!C.zf) goto L_10372ec3;
  /* 10372eb4 push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 10372eba call dword ptr [0x10375058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375058))), 0x10372ec0u);
L_10372ec0:;
  /* 10372ec0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10372ec2 ret  */
  ESPCHK(0x10372e8bu, _esp0);
  ESP += 4; return;
L_10372ec3:;
  /* 10372ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10372ec5 pop eax */
  EAX = (pop32());
  /* 10372ec6 ret  */
  ESPCHK(0x10372e8bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec7 @ 0x10372ec7 (117 bytes, 38 insns) */
void f_10372ec7(void) {
  FTRACE(0x10372ec7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372ec7 push ebx */
  push32((uint32_t)(EBX));
  /* 10372ec8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10372eca cmp dword ptr [0x103768a0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x103768a0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10372ed1 mov ebp, dword ptr [0x1037504c] */
  EBP = (r32((uint32_t)(0x1037504c)));
  /* 10372ed7 jle 0x10372f1d */
  if ((C.zf||C.sf!=C.of)) goto L_10372f1d;
  /* 10372ed9 mov eax, dword ptr [0x103768a4] */
  EAX = (r32((uint32_t)(0x103768a4)));
  /* 10372ede push esi */
  push32((uint32_t)(ESI));
  /* 10372edf push edi */
  push32((uint32_t)(EDI));
  /* 10372ee0 mov edi, dword ptr [0x10375050] */
  EDI = (r32((uint32_t)(0x10375050)));
  /* 10372ee6 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10372ee9:;
  /* 10372ee9 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10372eee push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10372ef3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10372ef5 call edi */
  call_ind((uint32_t)(EDI), 0x10372ef7u);
  /* 10372ef7 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10372efc push 0 */
  push32((uint32_t)(0x0u));
  /* 10372efe push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10372f00 call edi */
  call_ind((uint32_t)(EDI), 0x10372f02u);
  /* 10372f02 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10372f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10372f07 push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 10372f0d call ebp */
  call_ind((uint32_t)(EBP), 0x10372f0fu);
  /* 10372f0f add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10372f12 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10372f13 cmp ebx, dword ptr [0x103768a0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x103768a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372f19 jl 0x10372ee9 */
  if ((C.sf!=C.of)) goto L_10372ee9;
  /* 10372f1b pop edi */
  EDI = (pop32());
  /* 10372f1c pop esi */
  ESI = (pop32());
L_10372f1d:;
  /* 10372f1d push dword ptr [0x103768a4] */
  push32((uint32_t)(r32((uint32_t)(0x103768a4))));
  /* 10372f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10372f25 push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 10372f2b call ebp */
  call_ind((uint32_t)(EBP), 0x10372f2du);
  /* 10372f2d push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 10372f33 call dword ptr [0x10375058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375058))), 0x10372f39u);
  /* 10372f39 pop ebp */
  EBP = (pop32());
  /* 10372f3a pop ebx */
  EBX = (pop32());
  /* 10372f3b ret  */
  ESPCHK(0x10372ec7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f3c @ 0x10372f3c (57 bytes, 18 insns) */
void f_10372f3c(void) {
  FTRACE(0x10372f3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372f3c mov eax, dword ptr [0x10376698] */
  EAX = (r32((uint32_t)(0x10376698)));
  /* 10372f41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372f44 je 0x10372f53 */
  if (C.zf) goto L_10372f53;
  /* 10372f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372f48 jne 0x10372f74 */
  if (!C.zf) goto L_10372f74;
  /* 10372f4a cmp dword ptr [0x1037669c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1037669c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372f51 jne 0x10372f74 */
  if (!C.zf) goto L_10372f74;
L_10372f53:;
  /* 10372f53 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10372f58 call 0x10372f75 */
  push32(0x10372f5du); f_10372f75();
  /* 10372f5d mov eax, dword ptr [0x103767ec] */
  EAX = (r32((uint32_t)(0x103767ec)));
  /* 10372f62 pop ecx */
  ECX = (pop32());
  /* 10372f63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372f65 je 0x10372f69 */
  if (C.zf) goto L_10372f69;
  /* 10372f67 call eax */
  call_ind((uint32_t)(EAX), 0x10372f69u);
L_10372f69:;
  /* 10372f69 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10372f6e call 0x10372f75 */
  push32(0x10372f73u); f_10372f75();
  /* 10372f73 pop ecx */
  ECX = (pop32());
L_10372f74:;
  /* 10372f74 ret  */
  ESPCHK(0x10372f3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002f75 @ 0x10372f75 (339 bytes, 100 insns) */
void f_10372f75(void) {
  FTRACE(0x10372f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10372f75 push ebp */
  push32((uint32_t)(EBP));
  /* 10372f76 mov ebp, esp */
  EBP = (ESP);
  /* 10372f78 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10372f7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10372f81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10372f83 mov eax, 0x103761a8 */
  EAX = (0x103761a8u);
L_10372f88:;
  /* 10372f88 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372f8a je 0x10372f97 */
  if (C.zf) goto L_10372f97;
  /* 10372f8c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10372f8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10372f90 cmp eax, 0x10376238 */
  { uint32_t _a=(EAX),_b=(0x10376238u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372f95 jl 0x10372f88 */
  if ((C.sf!=C.of)) goto L_10372f88;
L_10372f97:;
  /* 10372f97 push esi */
  push32((uint32_t)(ESI));
  /* 10372f98 mov esi, ecx */
  ESI = (ECX);
  /* 10372f9a shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10372f9d cmp edx, dword ptr [esi + 0x103761a8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x103761a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372fa3 jne 0x103730c5 */
  if (!C.zf) goto L_103730c5;
  /* 10372fa9 mov eax, dword ptr [0x10376698] */
  EAX = (r32((uint32_t)(0x10376698)));
  /* 10372fae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372fb1 je 0x1037309f */
  if (C.zf) goto L_1037309f;
  /* 10372fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372fb9 jne 0x10372fc8 */
  if (!C.zf) goto L_10372fc8;
  /* 10372fbb cmp dword ptr [0x1037669c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1037669c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372fc2 je 0x1037309f */
  if (C.zf) goto L_1037309f;
L_10372fc8:;
  /* 10372fc8 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10372fce je 0x103730c5 */
  if (C.zf) goto L_103730c5;
  /* 10372fd4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10372fda push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10372fdf push eax */
  push32((uint32_t)(EAX));
  /* 10372fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10372fe2 call dword ptr [0x10375070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375070))), 0x10372fe8u);
  /* 10372fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10372fea jne 0x10372fff */
  if (!C.zf) goto L_10372fff;
  /* 10372fec lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10372ff2 push 0x10375430 */
  push32((uint32_t)(0x10375430u));
  /* 10372ff7 push eax */
  push32((uint32_t)(EAX));
  /* 10372ff8 call 0x10373340 */
  push32(0x10372ffdu); f_10373340();
  /* 10372ffd pop ecx */
  ECX = (pop32());
  /* 10372ffe pop ecx */
  ECX = (pop32());
L_10372fff:;
  /* 10372fff lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10373005 push edi */
  push32((uint32_t)(EDI));
  /* 10373006 push eax */
  push32((uint32_t)(EAX));
  /* 10373007 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 1037300d call 0x10373430 */
  push32(0x10373012u); f_10373430();
  /* 10373012 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10373013 pop ecx */
  ECX = (pop32());
  /* 10373014 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373017 jbe 0x10373042 */
  if ((C.cf||C.zf)) goto L_10373042;
  /* 10373019 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1037301f push eax */
  push32((uint32_t)(EAX));
  /* 10373020 call 0x10373430 */
  push32(0x10373025u); f_10373430();
  /* 10373025 mov edi, eax */
  EDI = (EAX);
  /* 10373027 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1037302d sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373030 push 3 */
  push32((uint32_t)(0x3u));
  /* 10373032 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10373034 push 0x1037542c */
  push32((uint32_t)(0x1037542cu));
  /* 10373039 push edi */
  push32((uint32_t)(EDI));
  /* 1037303a call 0x103744b0 */
  push32(0x1037303fu); f_103744b0();
  /* 1037303f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10373042:;
  /* 10373042 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10373048 push 0x10375410 */
  push32((uint32_t)(0x10375410u));
  /* 1037304d push eax */
  push32((uint32_t)(EAX));
  /* 1037304e call 0x10373340 */
  push32(0x10373053u); f_10373340();
  /* 10373053 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10373059 push edi */
  push32((uint32_t)(EDI));
  /* 1037305a push eax */
  push32((uint32_t)(EAX));
  /* 1037305b call 0x10373350 */
  push32(0x10373060u); f_10373350();
  /* 10373060 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10373066 push 0x1037540c */
  push32((uint32_t)(0x1037540cu));
  /* 1037306b push eax */
  push32((uint32_t)(EAX));
  /* 1037306c call 0x10373350 */
  push32(0x10373071u); f_10373350();
  /* 10373071 push dword ptr [esi + 0x103761ac] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x103761ac))));
  /* 10373077 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1037307d push eax */
  push32((uint32_t)(EAX));
  /* 1037307e call 0x10373350 */
  push32(0x10373083u); f_10373350();
  /* 10373083 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10373088 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1037308e push 0x103753e4 */
  push32((uint32_t)(0x103753e4u));
  /* 10373093 push eax */
  push32((uint32_t)(EAX));
  /* 10373094 call 0x1037441e */
  push32(0x10373099u); f_1037441e();
  /* 10373099 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037309c pop edi */
  EDI = (pop32());
  /* 1037309d jmp 0x103730c5 */
  goto L_103730c5;
L_1037309f:;
  /* 1037309f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 103730a2 lea esi, [esi + 0x103761ac] */
  ESI = ((uint32_t)(ESI + 0x103761ac));
  /* 103730a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103730aa push eax */
  push32((uint32_t)(EAX));
  /* 103730ab push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103730ad call 0x10373430 */
  push32(0x103730b2u); f_10373430();
  /* 103730b2 pop ecx */
  ECX = (pop32());
  /* 103730b3 push eax */
  push32((uint32_t)(EAX));
  /* 103730b4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103730b6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103730b8 call dword ptr [0x10375080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375080))), 0x103730beu);
  /* 103730be push eax */
  push32((uint32_t)(EAX));
  /* 103730bf call dword ptr [0x10375054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375054))), 0x103730c5u);
L_103730c5:;
  /* 103730c5 pop esi */
  ESI = (pop32());
  /* 103730c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103730c7 ret  */
  ESPCHK(0x10372f75u, _esp0);
  ESP += 4; return;
}

/* FUN_100030c8 @ 0x103730c8 (41 bytes, 12 insns) */
void f_103730c8(void) {
  FTRACE(0x103730c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103730c8 push esi */
  push32((uint32_t)(ESI));
  /* 103730c9 mov esi, dword ptr [0x10375044] */
  ESI = (r32((uint32_t)(0x10375044)));
  /* 103730cf push dword ptr [0x1037627c] */
  push32((uint32_t)(r32((uint32_t)(0x1037627c))));
  /* 103730d5 call esi */
  call_ind((uint32_t)(ESI), 0x103730d7u);
  /* 103730d7 push dword ptr [0x1037626c] */
  push32((uint32_t)(r32((uint32_t)(0x1037626c))));
  /* 103730dd call esi */
  call_ind((uint32_t)(ESI), 0x103730dfu);
  /* 103730df push dword ptr [0x1037625c] */
  push32((uint32_t)(r32((uint32_t)(0x1037625c))));
  /* 103730e5 call esi */
  call_ind((uint32_t)(ESI), 0x103730e7u);
  /* 103730e7 push dword ptr [0x1037623c] */
  push32((uint32_t)(r32((uint32_t)(0x1037623c))));
  /* 103730ed call esi */
  call_ind((uint32_t)(ESI), 0x103730efu);
  /* 103730ef pop esi */
  ESI = (pop32());
  /* 103730f0 ret  */
  ESPCHK(0x103730c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100030f1 @ 0x103730f1 (108 bytes, 34 insns) */
void f_103730f1(void) {
  FTRACE(0x103730f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103730f1 push esi */
  push32((uint32_t)(ESI));
  /* 103730f2 push edi */
  push32((uint32_t)(EDI));
  /* 103730f3 mov edi, dword ptr [0x10375074] */
  EDI = (r32((uint32_t)(0x10375074)));
  /* 103730f9 mov esi, 0x10376238 */
  ESI = (0x10376238u);
L_103730fe:;
  /* 103730fe mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10373100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10373102 je 0x1037312f */
  if (C.zf) goto L_1037312f;
  /* 10373104 cmp esi, 0x1037627c */
  { uint32_t _a=(ESI),_b=(0x1037627cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037310a je 0x1037312f */
  if (C.zf) goto L_1037312f;
  /* 1037310c cmp esi, 0x1037626c */
  { uint32_t _a=(ESI),_b=(0x1037626cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373112 je 0x1037312f */
  if (C.zf) goto L_1037312f;
  /* 10373114 cmp esi, 0x1037625c */
  { uint32_t _a=(ESI),_b=(0x1037625cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037311a je 0x1037312f */
  if (C.zf) goto L_1037312f;
  /* 1037311c cmp esi, 0x1037623c */
  { uint32_t _a=(ESI),_b=(0x1037623cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373122 je 0x1037312f */
  if (C.zf) goto L_1037312f;
  /* 10373124 push eax */
  push32((uint32_t)(EAX));
  /* 10373125 call edi */
  call_ind((uint32_t)(EDI), 0x10373127u);
  /* 10373127 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10373129 call 0x10373260 */
  push32(0x1037312eu); f_10373260();
  /* 1037312e pop ecx */
  ECX = (pop32());
L_1037312f:;
  /* 1037312f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10373132 cmp esi, 0x103762f8 */
  { uint32_t _a=(ESI),_b=(0x103762f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373138 jl 0x103730fe */
  if ((C.sf!=C.of)) goto L_103730fe;
  /* 1037313a push dword ptr [0x1037625c] */
  push32((uint32_t)(r32((uint32_t)(0x1037625c))));
  /* 10373140 call edi */
  call_ind((uint32_t)(EDI), 0x10373142u);
  /* 10373142 push dword ptr [0x1037626c] */
  push32((uint32_t)(r32((uint32_t)(0x1037626c))));
  /* 10373148 call edi */
  call_ind((uint32_t)(EDI), 0x1037314au);
  /* 1037314a push dword ptr [0x1037627c] */
  push32((uint32_t)(r32((uint32_t)(0x1037627c))));
  /* 10373150 call edi */
  call_ind((uint32_t)(EDI), 0x10373152u);
  /* 10373152 push dword ptr [0x1037623c] */
  push32((uint32_t)(r32((uint32_t)(0x1037623c))));
  /* 10373158 call edi */
  call_ind((uint32_t)(EDI), 0x1037315au);
  /* 1037315a pop edi */
  EDI = (pop32());
  /* 1037315b pop esi */
  ESI = (pop32());
  /* 1037315c ret  */
  ESPCHK(0x103730f1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000315d @ 0x1037315d (97 bytes, 37 insns) */
void f_1037315d(void) {
  FTRACE(0x1037315du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1037315d push ebp */
  push32((uint32_t)(EBP));
  /* 1037315e mov ebp, esp */
  EBP = (ESP);
  /* 10373160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373163 push esi */
  push32((uint32_t)(ESI));
  /* 10373164 cmp dword ptr [eax*4 + 0x10376238], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10376238))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037316c lea esi, [eax*4 + 0x10376238] */
  ESI = ((uint32_t)(EAX*4 + 0x10376238));
  /* 10373173 jne 0x103731b3 */
  if (!C.zf) goto L_103731b3;
  /* 10373175 push edi */
  push32((uint32_t)(EDI));
  /* 10373176 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10373178 call 0x103732a8 */
  push32(0x1037317du); f_103732a8();
  /* 1037317d mov edi, eax */
  EDI = (EAX);
  /* 1037317f pop ecx */
  ECX = (pop32());
  /* 10373180 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10373182 jne 0x1037318c */
  if (!C.zf) goto L_1037318c;
  /* 10373184 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10373186 call 0x103725cd */
  push32(0x1037318bu); f_103725cd();
  /* 1037318b pop ecx */
  ECX = (pop32());
L_1037318c:;
  /* 1037318c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1037318e call 0x1037315d */
  push32(0x10373193u); f_1037315d();
  /* 10373193 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373196 pop ecx */
  ECX = (pop32());
  /* 10373197 push edi */
  push32((uint32_t)(EDI));
  /* 10373198 jne 0x103731a4 */
  if (!C.zf) goto L_103731a4;
  /* 1037319a call dword ptr [0x10375044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375044))), 0x103731a0u);
  /* 103731a0 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 103731a2 jmp 0x103731aa */
  goto L_103731aa;
L_103731a4:;
  /* 103731a4 call 0x10373260 */
  push32(0x103731a9u); f_10373260();
  /* 103731a9 pop ecx */
  ECX = (pop32());
L_103731aa:;
  /* 103731aa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103731ac call 0x103731be */
  push32(0x103731b1u); f_103731be();
  /* 103731b1 pop ecx */
  ECX = (pop32());
  /* 103731b2 pop edi */
  EDI = (pop32());
L_103731b3:;
  /* 103731b3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103731b5 call dword ptr [0x10375040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375040))), 0x103731bbu);
  /* 103731bb pop esi */
  ESI = (pop32());
  /* 103731bc pop ebp */
  EBP = (pop32());
  /* 103731bd ret  */
  ESPCHK(0x1037315du, _esp0);
  ESP += 4; return;
}

/* FUN_100031be @ 0x103731be (21 bytes, 7 insns) */
void f_103731be(void) {
  FTRACE(0x103731beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103731be push ebp */
  push32((uint32_t)(EBP));
  /* 103731bf mov ebp, esp */
  EBP = (ESP);
  /* 103731c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103731c4 push dword ptr [eax*4 + 0x10376238] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10376238))));
  /* 103731cb call dword ptr [0x10375048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375048))), 0x103731d1u);
  /* 103731d1 pop ebp */
  EBP = (pop32());
  /* 103731d2 ret  */
  ESPCHK(0x103731beu, _esp0);
  ESP += 4; return;
}

/* FUN_100031d3 @ 0x103731d3 (141 bytes, 56 insns) */
void f_103731d3(void) {
  FTRACE(0x103731d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103731d3 push ebx */
  push32((uint32_t)(EBX));
  /* 103731d4 push esi */
  push32((uint32_t)(ESI));
  /* 103731d5 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 103731d9 push edi */
  push32((uint32_t)(EDI));
  /* 103731da imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103731df cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103731e2 mov ebx, esi */
  EBX = (ESI);
  /* 103731e4 ja 0x103731f3 */
  if ((!C.cf&&!C.zf)) goto L_103731f3;
  /* 103731e6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103731e8 jne 0x103731ed */
  if (!C.zf) goto L_103731ed;
  /* 103731ea push 1 */
  push32((uint32_t)(0x1u));
  /* 103731ec pop esi */
  ESI = (pop32());
L_103731ed:;
  /* 103731ed add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103731f0 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_103731f3:;
  /* 103731f3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103731f5 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103731f8 ja 0x10373234 */
  if ((!C.cf&&!C.zf)) goto L_10373234;
  /* 103731fa cmp ebx, dword ptr [0x10376480] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10376480))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373200 ja 0x1037321f */
  if ((!C.cf&&!C.zf)) goto L_1037321f;
  /* 10373202 push 9 */
  push32((uint32_t)(0x9u));
  /* 10373204 call 0x1037315d */
  push32(0x10373209u); f_1037315d();
  /* 10373209 push ebx */
  push32((uint32_t)(EBX));
  /* 1037320a call 0x10373f69 */
  push32(0x1037320fu); f_10373f69();
  /* 1037320f push 9 */
  push32((uint32_t)(0x9u));
  /* 10373211 mov edi, eax */
  EDI = (EAX);
  /* 10373213 call 0x103731be */
  push32(0x10373218u); f_103731be();
  /* 10373218 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037321b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1037321d jne 0x1037324a */
  if (!C.zf) goto L_1037324a;
L_1037321f:;
  /* 1037321f push esi */
  push32((uint32_t)(ESI));
  /* 10373220 push 8 */
  push32((uint32_t)(0x8u));
  /* 10373222 push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 10373228 call dword ptr [0x1037503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037503c))), 0x1037322eu);
  /* 1037322e mov edi, eax */
  EDI = (EAX);
  /* 10373230 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10373232 jne 0x10373256 */
  if (!C.zf) goto L_10373256;
L_10373234:;
  /* 10373234 cmp dword ptr [0x10376864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10376864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037323b je 0x10373256 */
  if (C.zf) goto L_10373256;
  /* 1037323d push esi */
  push32((uint32_t)(ESI));
  /* 1037323e call 0x10374608 */
  push32(0x10373243u); f_10374608();
  /* 10373243 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10373245 pop ecx */
  ECX = (pop32());
  /* 10373246 je 0x1037325c */
  if (C.zf) goto L_1037325c;
  /* 10373248 jmp 0x103731f3 */
  goto L_103731f3;
L_1037324a:;
  /* 1037324a push ebx */
  push32((uint32_t)(EBX));
  /* 1037324b push 0 */
  push32((uint32_t)(0x0u));
  /* 1037324d push edi */
  push32((uint32_t)(EDI));
  /* 1037324e call 0x103745b0 */
  push32(0x10373253u); f_103745b0();
  /* 10373253 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10373256:;
  /* 10373256 mov eax, edi */
  EAX = (EDI);
L_10373258:;
  /* 10373258 pop edi */
  EDI = (pop32());
  /* 10373259 pop esi */
  ESI = (pop32());
  /* 1037325a pop ebx */
  EBX = (pop32());
  /* 1037325b ret  */
  ESPCHK(0x103731d3u, _esp0);
  ESP += 4; return;
L_1037325c:;
  /* 1037325c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1037325e jmp 0x10373258 */
  goto L_10373258;
}

/* FUN_10003260 @ 0x10373260 (72 bytes, 29 insns) */
void f_10373260(void) {
  FTRACE(0x10373260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373260 push esi */
  push32((uint32_t)(ESI));
  /* 10373261 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10373265 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10373267 je 0x103732a6 */
  if (C.zf) goto L_103732a6;
  /* 10373269 push 9 */
  push32((uint32_t)(0x9u));
  /* 1037326b call 0x1037315d */
  push32(0x10373270u); f_1037315d();
  /* 10373270 push esi */
  push32((uint32_t)(ESI));
  /* 10373271 call 0x10373c13 */
  push32(0x10373276u); f_10373c13();
  /* 10373276 pop ecx */
  ECX = (pop32());
  /* 10373277 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10373279 pop ecx */
  ECX = (pop32());
  /* 1037327a je 0x1037328f */
  if (C.zf) goto L_1037328f;
  /* 1037327c push esi */
  push32((uint32_t)(ESI));
  /* 1037327d push eax */
  push32((uint32_t)(EAX));
  /* 1037327e call 0x10373c3e */
  push32(0x10373283u); f_10373c3e();
  /* 10373283 push 9 */
  push32((uint32_t)(0x9u));
  /* 10373285 call 0x103731be */
  push32(0x1037328au); f_103731be();
  /* 1037328a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037328d pop esi */
  ESI = (pop32());
  /* 1037328e ret  */
  ESPCHK(0x10373260u, _esp0);
  ESP += 4; return;
L_1037328f:;
  /* 1037328f push 9 */
  push32((uint32_t)(0x9u));
  /* 10373291 call 0x103731be */
  push32(0x10373296u); f_103731be();
  /* 10373296 pop ecx */
  ECX = (pop32());
  /* 10373297 push esi */
  push32((uint32_t)(ESI));
  /* 10373298 push 0 */
  push32((uint32_t)(0x0u));
  /* 1037329a push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 103732a0 call dword ptr [0x1037504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037504c))), 0x103732a6u);
L_103732a6:;
  /* 103732a6 pop esi */
  ESI = (pop32());
  /* 103732a7 ret  */
  ESPCHK(0x10373260u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x103732a8 (18 bytes, 6 insns) */
void f_103732a8(void) {
  FTRACE(0x103732a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103732a8 push dword ptr [0x10376864] */
  push32((uint32_t)(r32((uint32_t)(0x10376864))));
  /* 103732ae push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 103732b2 call 0x103732ba */
  push32(0x103732b7u); f_103732ba();
  /* 103732b7 pop ecx */
  ECX = (pop32());
  /* 103732b8 pop ecx */
  ECX = (pop32());
  /* 103732b9 ret  */
  ESPCHK(0x103732a8u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x103732ba (44 bytes, 16 insns) */
void f_103732ba(void) {
  FTRACE(0x103732bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103732ba cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103732bf ja 0x103732e3 */
  if ((!C.cf&&!C.zf)) goto L_103732e3;
L_103732c1:;
  /* 103732c1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 103732c5 call 0x103732e6 */
  push32(0x103732cau); f_103732e6();
  /* 103732ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103732cc pop ecx */
  ECX = (pop32());
  /* 103732cd jne 0x103732e5 */
  if (!C.zf) goto L_103732e5;
  /* 103732cf cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103732d3 je 0x103732e5 */
  if (C.zf) goto L_103732e5;
  /* 103732d5 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 103732d9 call 0x10374608 */
  push32(0x103732deu); f_10374608();
  /* 103732de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103732e0 pop ecx */
  ECX = (pop32());
  /* 103732e1 jne 0x103732c1 */
  if (!C.zf) goto L_103732c1;
L_103732e3:;
  /* 103732e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103732e5:;
  /* 103732e5 ret  */
  ESPCHK(0x103732bau, _esp0);
  ESP += 4; return;
}

/* FUN_100032e6 @ 0x103732e6 (78 bytes, 30 insns) */
void f_103732e6(void) {
  FTRACE(0x103732e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103732e6 push esi */
  push32((uint32_t)(ESI));
  /* 103732e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 103732eb cmp esi, dword ptr [0x10376480] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10376480))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103732f1 push edi */
  push32((uint32_t)(EDI));
  /* 103732f2 ja 0x10373315 */
  if ((!C.cf&&!C.zf)) goto L_10373315;
  /* 103732f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 103732f6 call 0x1037315d */
  push32(0x103732fbu); f_1037315d();
  /* 103732fb push esi */
  push32((uint32_t)(ESI));
  /* 103732fc call 0x10373f69 */
  push32(0x10373301u); f_10373f69();
  /* 10373301 push 9 */
  push32((uint32_t)(0x9u));
  /* 10373303 mov edi, eax */
  EDI = (EAX);
  /* 10373305 call 0x103731be */
  push32(0x1037330au); f_103731be();
  /* 1037330a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1037330d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1037330f je 0x10373315 */
  if (C.zf) goto L_10373315;
  /* 10373311 mov eax, edi */
  EAX = (EDI);
  /* 10373313 jmp 0x10373331 */
  goto L_10373331;
L_10373315:;
  /* 10373315 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10373317 jne 0x1037331c */
  if (!C.zf) goto L_1037331c;
  /* 10373319 push 1 */
  push32((uint32_t)(0x1u));
  /* 1037331b pop esi */
  ESI = (pop32());
L_1037331c:;
  /* 1037331c add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1037331f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10373322 push esi */
  push32((uint32_t)(ESI));
  /* 10373323 push 0 */
  push32((uint32_t)(0x0u));
  /* 10373325 push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 1037332b call dword ptr [0x1037503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037503c))), 0x10373331u);
L_10373331:;
  /* 10373331 pop edi */
  EDI = (pop32());
  /* 10373332 pop esi */
  ESI = (pop32());
  /* 10373333 ret  */
  ESPCHK(0x103732e6u, _esp0);
  ESP += 4; return;
}

/* FUN_10003340 @ 0x10373340 (7 bytes, 3 insns) */
void f_10373340(void) {
  FTRACE(0x10373340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373340 push edi */
  push32((uint32_t)(EDI));
  /* 10373341 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10373345 jmp 0x103733b1 */
  jmp_ind(0x103733b1u); return;
}

/* FUN_10003350 @ 0x10373350 (224 bytes, 84 insns) */
void f_10373350(void) {
  FTRACE(0x10373350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373350 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10373354 push edi */
  push32((uint32_t)(EDI));
  /* 10373355 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1037335b je 0x1037336c */
  if (C.zf) goto L_1037336c;
L_1037335d:;
  /* 1037335d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1037335f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10373360 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10373362 je 0x1037339f */
  if (C.zf) goto L_1037339f;
  /* 10373364 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1037336a jne 0x1037335d */
  if (!C.zf) goto L_1037335d;
L_1037336c:;
  /* 1037336c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1037336e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10373373 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373375 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10373378 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1037337a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1037337d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10373382 je 0x1037336c */
  if (C.zf) goto L_1037336c;
  /* 10373384 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10373387 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10373389 je 0x103733ae */
  if (C.zf) goto L_103733ae;
  /* 1037338b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1037338d je 0x103733a9 */
  if (C.zf) goto L_103733a9;
  /* 1037338f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10373394 je 0x103733a4 */
  if (C.zf) goto L_103733a4;
  /* 10373396 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1037339b je 0x1037339f */
  if (C.zf) goto L_1037339f;
  /* 1037339d jmp 0x1037336c */
  goto L_1037336c;
L_1037339f:;
  /* 1037339f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 103733a2 jmp 0x103733b1 */
  goto L_103733b1;
L_103733a4:;
  /* 103733a4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 103733a7 jmp 0x103733b1 */
  goto L_103733b1;
L_103733a9:;
  /* 103733a9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 103733ac jmp 0x103733b1 */
  goto L_103733b1;
L_103733ae:;
  /* 103733ae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_103733b1:;
  /* 103733b1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103733b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103733bb je 0x103733d6 */
  if (C.zf) goto L_103733d6;
L_103733bd:;
  /* 103733bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103733bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103733c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103733c2 je 0x10373428 */
  if (C.zf) goto L_10373428;
  /* 103733c4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 103733c6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103733c7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103733cd jne 0x103733bd */
  if (!C.zf) goto L_103733bd;
  /* 103733cf jmp 0x103733d6 */
  goto L_103733d6;
L_103733d1:;
  /* 103733d1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 103733d3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103733d6:;
  /* 103733d6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103733db mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 103733dd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103733df xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103733e2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103733e4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103733e6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103733e9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103733ee je 0x103733d1 */
  if (C.zf) goto L_103733d1;
  /* 103733f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103733f2 je 0x10373428 */
  if (C.zf) goto L_10373428;
  /* 103733f4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 103733f6 je 0x1037341f */
  if (C.zf) goto L_1037341f;
  /* 103733f8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 103733fe je 0x10373412 */
  if (C.zf) goto L_10373412;
  /* 10373400 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10373406 je 0x1037340a */
  if (C.zf) goto L_1037340a;
  /* 10373408 jmp 0x103733d1 */
  goto L_103733d1;
L_1037340a:;
  /* 1037340a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1037340c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10373410 pop edi */
  EDI = (pop32());
  /* 10373411 ret  */
  ESPCHK(0x10373350u, _esp0);
  ESP += 4; return;
L_10373412:;
  /* 10373412 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10373415 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10373419 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1037341d pop edi */
  EDI = (pop32());
  /* 1037341e ret  */
  ESPCHK(0x10373350u, _esp0);
  ESP += 4; return;
L_1037341f:;
  /* 1037341f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10373422 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10373426 pop edi */
  EDI = (pop32());
  /* 10373427 ret  */
  ESPCHK(0x10373350u, _esp0);
  ESP += 4; return;
L_10373428:;
  /* 10373428 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1037342a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1037342e pop edi */
  EDI = (pop32());
  /* 1037342f ret  */
  ESPCHK(0x10373350u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10373430 (123 bytes, 44 insns) */
void f_10373430(void) {
  FTRACE(0x10373430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373430 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10373434 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1037343a je 0x10373450 */
  if (C.zf) goto L_10373450;
L_1037343c:;
  /* 1037343c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1037343e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1037343f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10373441 je 0x10373483 */
  if (C.zf) goto L_10373483;
  /* 10373443 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10373449 jne 0x1037343c */
  if (!C.zf) goto L_1037343c;
  /* 1037344b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10373450:;
  /* 10373450 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10373452 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10373457 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373459 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1037345c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1037345e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373461 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10373466 je 0x10373450 */
  if (C.zf) goto L_10373450;
  /* 10373468 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1037346b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1037346d je 0x103734a1 */
  if (C.zf) goto L_103734a1;
  /* 1037346f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10373471 je 0x10373497 */
  if (C.zf) goto L_10373497;
  /* 10373473 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10373478 je 0x1037348d */
  if (C.zf) goto L_1037348d;
  /* 1037347a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1037347f je 0x10373483 */
  if (C.zf) goto L_10373483;
  /* 10373481 jmp 0x10373450 */
  goto L_10373450;
L_10373483:;
  /* 10373483 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10373486 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1037348a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1037348c ret  */
  ESPCHK(0x10373430u, _esp0);
  ESP += 4; return;
L_1037348d:;
  /* 1037348d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10373490 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10373494 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373496 ret  */
  ESPCHK(0x10373430u, _esp0);
  ESP += 4; return;
L_10373497:;
  /* 10373497 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1037349a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1037349e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103734a0 ret  */
  ESPCHK(0x10373430u, _esp0);
  ESP += 4; return;
L_103734a1:;
  /* 103734a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 103734a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103734a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103734aa ret  */
  ESPCHK(0x10373430u, _esp0);
  ESP += 4; return;
}

/* FUN_100034ab @ 0x103734ab (429 bytes, 143 insns) */
void f_103734ab(void) {
  FTRACE(0x103734abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103734ab push ebp */
  push32((uint32_t)(EBP));
  /* 103734ac mov ebp, esp */
  EBP = (ESP);
  /* 103734ae sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103734b1 push ebx */
  push32((uint32_t)(EBX));
  /* 103734b2 push esi */
  push32((uint32_t)(ESI));
  /* 103734b3 push edi */
  push32((uint32_t)(EDI));
  /* 103734b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 103734b6 call 0x1037315d */
  push32(0x103734bbu); f_1037315d();
  /* 103734bb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103734be call 0x10373658 */
  push32(0x103734c3u); f_10373658();
  /* 103734c3 mov ebx, eax */
  EBX = (EAX);
  /* 103734c5 pop ecx */
  ECX = (pop32());
  /* 103734c6 cmp ebx, dword ptr [0x103768a8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x103768a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103734cc pop ecx */
  ECX = (pop32());
  /* 103734cd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 103734d0 jne 0x103734d9 */
  if (!C.zf) goto L_103734d9;
L_103734d2:;
  /* 103734d2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103734d4 jmp 0x10373649 */
  goto L_10373649;
L_103734d9:;
  /* 103734d9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 103734db je 0x10373637 */
  if (C.zf) goto L_10373637;
  /* 103734e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103734e3 mov eax, 0x10376388 */
  EAX = (0x10376388u);
L_103734e8:;
  /* 103734e8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103734ea je 0x10373560 */
  if (C.zf) goto L_10373560;
  /* 103734ec add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103734ef inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 103734f0 cmp eax, 0x10376478 */
  { uint32_t _a=(EAX),_b=(0x10376478u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103734f5 jl 0x103734e8 */
  if ((C.sf!=C.of)) goto L_103734e8;
  /* 103734f7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 103734fa push eax */
  push32((uint32_t)(EAX));
  /* 103734fb push ebx */
  push32((uint32_t)(EBX));
  /* 103734fc call dword ptr [0x10375034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375034))), 0x10373502u);
  /* 10373502 push 1 */
  push32((uint32_t)(0x1u));
  /* 10373504 pop esi */
  ESI = (pop32());
  /* 10373505 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373507 jne 0x1037362e */
  if (!C.zf) goto L_1037362e;
  /* 1037350d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1037350f and dword ptr [0x10376ac4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10376ac4)))&(0x0u); w32((uint32_t)(0x10376ac4), (_r)); fl_logic(_r,32); }
  /* 10373516 pop ecx */
  ECX = (pop32());
  /* 10373517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10373519 mov edi, 0x103769c0 */
  EDI = (0x103769c0u);
  /* 1037351e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373521 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10373523 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10373524 mov dword ptr [0x103768a8], ebx */
  w32((uint32_t)(0x103768a8), (EBX));
  /* 1037352a jbe 0x1037361b */
  if ((C.cf||C.zf)) goto L_1037361b;
  /* 10373530 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10373534 je 0x103735f6 */
  if (C.zf) goto L_103735f6;
  /* 1037353a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1037353d:;
  /* 1037353d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1037353f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10373541 je 0x103735f6 */
  if (C.zf) goto L_103735f6;
  /* 10373547 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1037354b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1037354e:;
  /* 1037354e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373550 ja 0x103735ea */
  if ((!C.cf&&!C.zf)) goto L_103735ea;
  /* 10373556 or byte ptr [eax + 0x103769c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103769c1)))|(0x4u); w8((uint32_t)(EAX + 0x103769c1), (_r)); fl_logic(_r,8); }
  /* 1037355d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1037355e jmp 0x1037354e */
  goto L_1037354e;
L_10373560:;
  /* 10373560 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10373564 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10373566 pop ecx */
  ECX = (pop32());
  /* 10373567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10373569 mov edi, 0x103769c0 */
  EDI = (0x103769c0u);
  /* 1037356e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10373571 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10373573 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10373576 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10373577 lea ebx, [esi + 0x10376398] */
  EBX = ((uint32_t)(ESI + 0x10376398));
L_1037357d:;
  /* 1037357d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10373580 mov ecx, ebx */
  ECX = (EBX);
  /* 10373582 je 0x103735b0 */
  if (C.zf) goto L_103735b0;
L_10373584:;
  /* 10373584 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10373587 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10373589 je 0x103735b0 */
  if (C.zf) goto L_103735b0;
  /* 1037358b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1037358e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10373591 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373593 ja 0x103735a9 */
  if ((!C.cf&&!C.zf)) goto L_103735a9;
  /* 10373595 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10373598 mov dl, byte ptr [edx + 0x10376380] */
  DL = (r8((uint32_t)(EDX + 0x10376380)));
L_1037359e:;
  /* 1037359e or byte ptr [eax + 0x103769c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103769c1)))|(DL); w8((uint32_t)(EAX + 0x103769c1), (_r)); fl_logic(_r,8); }
  /* 103735a4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103735a5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103735a7 jbe 0x1037359e */
  if ((C.cf||C.zf)) goto L_1037359e;
L_103735a9:;
  /* 103735a9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103735aa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103735ab cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103735ae jne 0x10373584 */
  if (!C.zf) goto L_10373584;
L_103735b0:;
  /* 103735b0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 103735b3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 103735b6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103735ba jb 0x1037357d */
  if (C.cf) goto L_1037357d;
  /* 103735bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103735bf mov dword ptr [0x103768bc], 1 */
  w32((uint32_t)(0x103768bc), (0x1u));
  /* 103735c9 push eax */
  push32((uint32_t)(EAX));
  /* 103735ca mov dword ptr [0x103768a8], eax */
  w32((uint32_t)(0x103768a8), (EAX));
  /* 103735cf call 0x103736a2 */
  push32(0x103735d4u); f_103736a2();
  /* 103735d4 lea esi, [esi + 0x1037638c] */
  ESI = ((uint32_t)(ESI + 0x1037638c));
  /* 103735da mov edi, 0x103768b0 */
  EDI = (0x103768b0u);
  /* 103735df movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103735e0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103735e1 pop ecx */
  ECX = (pop32());
  /* 103735e2 mov dword ptr [0x10376ac4], eax */
  w32((uint32_t)(0x10376ac4), (EAX));
  /* 103735e7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 103735e8 jmp 0x1037363c */
  goto L_1037363c;
L_103735ea:;
  /* 103735ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103735eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103735ec cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103735f0 jne 0x1037353d */
  if (!C.zf) goto L_1037353d;
L_103735f6:;
  /* 103735f6 mov eax, esi */
  EAX = (ESI);
L_103735f8:;
  /* 103735f8 or byte ptr [eax + 0x103769c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103769c1)))|(0x8u); w8((uint32_t)(EAX + 0x103769c1), (_r)); fl_logic(_r,8); }
  /* 103735ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10373600 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373605 jb 0x103735f8 */
  if (C.cf) goto L_103735f8;
  /* 10373607 push ebx */
  push32((uint32_t)(EBX));
  /* 10373608 call 0x103736a2 */
  push32(0x1037360du); f_103736a2();
  /* 1037360d pop ecx */
  ECX = (pop32());
  /* 1037360e mov dword ptr [0x10376ac4], eax */
  w32((uint32_t)(0x10376ac4), (EAX));
  /* 10373613 mov dword ptr [0x103768bc], esi */
  w32((uint32_t)(0x103768bc), (ESI));
  /* 10373619 jmp 0x10373622 */
  goto L_10373622;
L_1037361b:;
  /* 1037361b and dword ptr [0x103768bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103768bc)))&(0x0u); w32((uint32_t)(0x103768bc), (_r)); fl_logic(_r,32); }
L_10373622:;
  /* 10373622 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10373624 mov edi, 0x103768b0 */
  EDI = (0x103768b0u);
  /* 10373629 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1037362a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1037362b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1037362c jmp 0x1037363c */
  goto L_1037363c;
L_1037362e:;
  /* 1037362e cmp dword ptr [0x10376850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10376850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373635 je 0x10373646 */
  if (C.zf) goto L_10373646;
L_10373637:;
  /* 10373637 call 0x103736d5 */
  push32(0x1037363cu); f_103736d5();
L_1037363c:;
  /* 1037363c call 0x103736fe */
  push32(0x10373641u); f_103736fe();
  /* 10373641 jmp 0x103734d2 */
  goto L_103734d2;
L_10373646:;
  /* 10373646 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10373649:;
  /* 10373649 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1037364b call 0x103731be */
  push32(0x10373650u); f_103731be();
  /* 10373650 pop ecx */
  ECX = (pop32());
  /* 10373651 mov eax, esi */
  EAX = (ESI);
  /* 10373653 pop edi */
  EDI = (pop32());
  /* 10373654 pop esi */
  ESI = (pop32());
  /* 10373655 pop ebx */
  EBX = (pop32());
  /* 10373656 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373657 ret  */
  ESPCHK(0x103734abu, _esp0);
  ESP += 4; return;
}

/* FUN_10003658 @ 0x10373658 (74 bytes, 15 insns) */
void f_10373658(void) {
  FTRACE(0x10373658u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373658 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1037365c and dword ptr [0x10376850], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10376850)))&(0x0u); w32((uint32_t)(0x10376850), (_r)); fl_logic(_r,32); }
  /* 10373663 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373666 jne 0x10373678 */
  if (!C.zf) goto L_10373678;
  /* 10373668 mov dword ptr [0x10376850], 1 */
  w32((uint32_t)(0x10376850), (0x1u));
  /* 10373672 jmp dword ptr [0x10375038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10375038)))); return;
L_10373678:;
  /* 10373678 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037367b jne 0x1037368d */
  if (!C.zf) goto L_1037368d;
  /* 1037367d mov dword ptr [0x10376850], 1 */
  w32((uint32_t)(0x10376850), (0x1u));
  /* 10373687 jmp dword ptr [0x10375030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10375030)))); return;
L_1037368d:;
  /* 1037368d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373690 jne 0x103736a1 */
  if (!C.zf) goto L_103736a1;
  /* 10373692 mov eax, dword ptr [0x10376880] */
  EAX = (r32((uint32_t)(0x10376880)));
  /* 10373697 mov dword ptr [0x10376850], 1 */
  w32((uint32_t)(0x10376850), (0x1u));
L_103736a1:;
  /* 103736a1 ret  */
  ESPCHK(0x10373658u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a2 @ 0x103736a2 (51 bytes, 19 insns) */
void f_103736a2(void) {
  FTRACE(0x103736a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103736a2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 103736a6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103736ab je 0x103736cf */
  if (C.zf) goto L_103736cf;
  /* 103736ad sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103736b0 je 0x103736c9 */
  if (C.zf) goto L_103736c9;
  /* 103736b2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103736b5 je 0x103736c3 */
  if (C.zf) goto L_103736c3;
  /* 103736b7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 103736b8 je 0x103736bd */
  if (C.zf) goto L_103736bd;
  /* 103736ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103736bc ret  */
  ESPCHK(0x103736a2u, _esp0);
  ESP += 4; return;
L_103736bd:;
  /* 103736bd mov eax, 0x404 */
  EAX = (0x404u);
  /* 103736c2 ret  */
  ESPCHK(0x103736a2u, _esp0);
  ESP += 4; return;
L_103736c3:;
  /* 103736c3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 103736c8 ret  */
  ESPCHK(0x103736a2u, _esp0);
  ESP += 4; return;
L_103736c9:;
  /* 103736c9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 103736ce ret  */
  ESPCHK(0x103736a2u, _esp0);
  ESP += 4; return;
L_103736cf:;
  /* 103736cf mov eax, 0x411 */
  EAX = (0x411u);
  /* 103736d4 ret  */
  ESPCHK(0x103736a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d5 @ 0x103736d5 (41 bytes, 17 insns) */
void f_103736d5(void) {
  FTRACE(0x103736d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103736d5 push edi */
  push32((uint32_t)(EDI));
  /* 103736d6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103736d8 pop ecx */
  ECX = (pop32());
  /* 103736d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103736db mov edi, 0x103769c0 */
  EDI = (0x103769c0u);
  /* 103736e0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103736e2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103736e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103736e5 mov edi, 0x103768b0 */
  EDI = (0x103768b0u);
  /* 103736ea mov dword ptr [0x103768a8], eax */
  w32((uint32_t)(0x103768a8), (EAX));
  /* 103736ef mov dword ptr [0x103768bc], eax */
  w32((uint32_t)(0x103768bc), (EAX));
  /* 103736f4 mov dword ptr [0x10376ac4], eax */
  w32((uint32_t)(0x10376ac4), (EAX));
  /* 103736f9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103736fa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103736fb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 103736fc pop edi */
  EDI = (pop32());
  /* 103736fd ret  */
  ESPCHK(0x103736d5u, _esp0);
  ESP += 4; return;
}

/* FUN_100036fe @ 0x103736fe (389 bytes, 124 insns) */
void f_103736fe(void) {
  FTRACE(0x103736feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103736fe push ebp */
  push32((uint32_t)(EBP));
  /* 103736ff mov ebp, esp */
  EBP = (ESP);
  /* 10373701 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373707 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1037370a push esi */
  push32((uint32_t)(ESI));
  /* 1037370b push eax */
  push32((uint32_t)(EAX));
  /* 1037370c push dword ptr [0x103768a8] */
  push32((uint32_t)(r32((uint32_t)(0x103768a8))));
  /* 10373712 call dword ptr [0x10375034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375034))), 0x10373718u);
  /* 10373718 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037371b jne 0x10373837 */
  if (!C.zf) goto L_10373837;
  /* 10373721 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10373723 mov esi, 0x100 */
  ESI = (0x100u);
L_10373728:;
  /* 10373728 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1037372f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10373730 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373732 jb 0x10373728 */
  if (C.cf) goto L_10373728;
  /* 10373734 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10373737 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1037373e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10373740 je 0x10373779 */
  if (C.zf) goto L_10373779;
  /* 10373742 push ebx */
  push32((uint32_t)(EBX));
  /* 10373743 push edi */
  push32((uint32_t)(EDI));
  /* 10373744 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10373747:;
  /* 10373747 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1037374a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1037374d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037374f ja 0x1037376e */
  if ((!C.cf&&!C.zf)) goto L_1037376e;
  /* 10373751 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373753 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1037375a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1037375b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10373760 mov ebx, ecx */
  EBX = (ECX);
  /* 10373762 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10373765 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10373767 mov ecx, ebx */
  ECX = (EBX);
  /* 10373769 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1037376c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1037376e:;
  /* 1037376e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1037376f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10373770 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10373773 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10373775 jne 0x10373747 */
  if (!C.zf) goto L_10373747;
  /* 10373777 pop edi */
  EDI = (pop32());
  /* 10373778 pop ebx */
  EBX = (pop32());
L_10373779:;
  /* 10373779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1037377b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10373781 push dword ptr [0x10376ac4] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac4))));
  /* 10373787 push dword ptr [0x103768a8] */
  push32((uint32_t)(r32((uint32_t)(0x103768a8))));
  /* 1037378d push eax */
  push32((uint32_t)(EAX));
  /* 1037378e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10373794 push esi */
  push32((uint32_t)(ESI));
  /* 10373795 push eax */
  push32((uint32_t)(EAX));
  /* 10373796 push 1 */
  push32((uint32_t)(0x1u));
  /* 10373798 call 0x10374872 */
  push32(0x1037379du); f_10374872();
  /* 1037379d push 0 */
  push32((uint32_t)(0x0u));
  /* 1037379f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 103737a5 push dword ptr [0x103768a8] */
  push32((uint32_t)(r32((uint32_t)(0x103768a8))));
  /* 103737ab push esi */
  push32((uint32_t)(ESI));
  /* 103737ac push eax */
  push32((uint32_t)(EAX));
  /* 103737ad lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 103737b3 push esi */
  push32((uint32_t)(ESI));
  /* 103737b4 push eax */
  push32((uint32_t)(EAX));
  /* 103737b5 push esi */
  push32((uint32_t)(ESI));
  /* 103737b6 push dword ptr [0x10376ac4] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac4))));
  /* 103737bc call 0x10374623 */
  push32(0x103737c1u); f_10374623();
  /* 103737c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103737c3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 103737c9 push dword ptr [0x103768a8] */
  push32((uint32_t)(r32((uint32_t)(0x103768a8))));
  /* 103737cf push esi */
  push32((uint32_t)(ESI));
  /* 103737d0 push eax */
  push32((uint32_t)(EAX));
  /* 103737d1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 103737d7 push esi */
  push32((uint32_t)(ESI));
  /* 103737d8 push eax */
  push32((uint32_t)(EAX));
  /* 103737d9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 103737de push dword ptr [0x10376ac4] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac4))));
  /* 103737e4 call 0x10374623 */
  push32(0x103737e9u); f_10374623();
  /* 103737e9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103737ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103737ee lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_103737f4:;
  /* 103737f4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 103737f7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 103737fa je 0x10373812 */
  if (C.zf) goto L_10373812;
  /* 103737fc or byte ptr [eax + 0x103769c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103769c1)))|(0x10u); w8((uint32_t)(EAX + 0x103769c1), (_r)); fl_logic(_r,8); }
  /* 10373803 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1037380a:;
  /* 1037380a mov byte ptr [eax + 0x103768c0], dl */
  w8((uint32_t)(EAX + 0x103768c0), (DL));
  /* 10373810 jmp 0x1037382e */
  goto L_1037382e;
L_10373812:;
  /* 10373812 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10373815 je 0x10373827 */
  if (C.zf) goto L_10373827;
  /* 10373817 or byte ptr [eax + 0x103769c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103769c1)))|(0x20u); w8((uint32_t)(EAX + 0x103769c1), (_r)); fl_logic(_r,8); }
  /* 1037381e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10373825 jmp 0x1037380a */
  goto L_1037380a;
L_10373827:;
  /* 10373827 and byte ptr [eax + 0x103768c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103768c0)))&(0x0u); w8((uint32_t)(EAX + 0x103768c0), (_r)); fl_logic(_r,8); }
L_1037382e:;
  /* 1037382e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1037382f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10373830 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10373831 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373833 jb 0x103737f4 */
  if (C.cf) goto L_103737f4;
  /* 10373835 jmp 0x10373880 */
  goto L_10373880;
L_10373837:;
  /* 10373837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10373839 mov esi, 0x100 */
  ESI = (0x100u);
L_1037383e:;
  /* 1037383e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373841 jb 0x1037385c */
  if (C.cf) goto L_1037385c;
  /* 10373843 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373846 ja 0x1037385c */
  if ((!C.cf&&!C.zf)) goto L_1037385c;
  /* 10373848 or byte ptr [eax + 0x103769c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103769c1)))|(0x10u); w8((uint32_t)(EAX + 0x103769c1), (_r)); fl_logic(_r,8); }
  /* 1037384f mov cl, al */
  CL = (AL);
  /* 10373851 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10373854:;
  /* 10373854 mov byte ptr [eax + 0x103768c0], cl */
  w8((uint32_t)(EAX + 0x103768c0), (CL));
  /* 1037385a jmp 0x1037387b */
  goto L_1037387b;
L_1037385c:;
  /* 1037385c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037385f jb 0x10373874 */
  if (C.cf) goto L_10373874;
  /* 10373861 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373864 ja 0x10373874 */
  if ((!C.cf&&!C.zf)) goto L_10373874;
  /* 10373866 or byte ptr [eax + 0x103769c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103769c1)))|(0x20u); w8((uint32_t)(EAX + 0x103769c1), (_r)); fl_logic(_r,8); }
  /* 1037386d mov cl, al */
  CL = (AL);
  /* 1037386f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10373872 jmp 0x10373854 */
  goto L_10373854;
L_10373874:;
  /* 10373874 and byte ptr [eax + 0x103768c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x103768c0)))&(0x0u); w8((uint32_t)(EAX + 0x103768c0), (_r)); fl_logic(_r,8); }
L_1037387b:;
  /* 1037387b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1037387c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037387e jb 0x1037383e */
  if (C.cf) goto L_1037383e;
L_10373880:;
  /* 10373880 pop esi */
  ESI = (pop32());
  /* 10373881 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373882 ret  */
  ESPCHK(0x103736feu, _esp0);
  ESP += 4; return;
}

/* FUN_10003883 @ 0x10373883 (28 bytes, 7 insns) */
void f_10373883(void) {
  FTRACE(0x10373883u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373883 cmp dword ptr [0x10376be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10376be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037388a jne 0x1037389e */
  if (!C.zf) goto L_1037389e;
  /* 1037388c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1037388e call 0x103734ab */
  push32(0x10373893u); f_103734ab();
  /* 10373893 pop ecx */
  ECX = (pop32());
  /* 10373894 mov dword ptr [0x10376be8], 1 */
  w32((uint32_t)(0x10376be8), (0x1u));
L_1037389e:;
  /* 1037389e ret  */
  ESPCHK(0x10373883u, _esp0);
  ESP += 4; return;
}

/* FUN_100038a0 @ 0x103738a0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_103738a0(void) {
  FTRACE(0x103738a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103738a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103738a1 mov ebp, esp */
  EBP = (ESP);
  /* 103738a3 push edi */
  push32((uint32_t)(EDI));
  /* 103738a4 push esi */
  push32((uint32_t)(ESI));
  /* 103738a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103738a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103738ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103738ae mov eax, ecx */
  EAX = (ECX);
  /* 103738b0 mov edx, ecx */
  EDX = (ECX);
  /* 103738b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103738b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103738b6 jbe 0x103738c0 */
  if ((C.cf||C.zf)) goto L_103738c0;
  /* 103738b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103738ba jb 0x10373a38 */
  if (C.cf) goto L_10373a38;
L_103738c0:;
  /* 103738c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103738c6 jne 0x103738dc */
  if (!C.zf) goto L_103738dc;
  /* 103738c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103738cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103738ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103738d1 jb 0x103738fc */
  if (C.cf) goto L_103738fc;
  /* 103738d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103738d5 jmp dword ptr [edx*4 + 0x103739e8] */
  switch (EDX) {
    case 0: goto L_103739f8;
    case 1: goto L_10373a00;
    case 2: goto L_10373a0c;
    case 3: goto L_10373a20;
    default: x86_unimpl("switch@0x103738d5 out of table"); return;
  }
L_103738dc:;
  /* 103738dc mov eax, edi */
  EAX = (EDI);
  /* 103738de mov edx, 3 */
  EDX = (0x3u);
  /* 103738e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103738e6 jb 0x103738f4 */
  if (C.cf) goto L_103738f4;
  /* 103738e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103738eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103738ed jmp dword ptr [eax*4 + 0x10373900] */
  switch (EAX) {
    case 1: goto L_10373910;
    case 2: goto L_1037393c;
    case 3: goto L_10373960;
    default: x86_unimpl("switch@0x103738ed out of table"); return;
  }
L_103738f4:;
  /* 103738f4 jmp dword ptr [ecx*4 + 0x103739f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x103739f8)))); return;
  /* 103738fb nop  */
  /* nop */
L_103738fc:;
  /* 103738fc jmp dword ptr [ecx*4 + 0x1037397c] */
  switch (ECX) {
    case 0: goto L_103739df;
    case 1: goto L_103739cc;
    case 2: goto L_103739c4;
    case 3: goto L_103739bc;
    case 4: goto L_103739b4;
    case 5: goto L_103739ac;
    case 6: goto L_103739a4;
    case 7: goto L_1037399c;
    default: x86_unimpl("switch@0x103738fc out of table"); return;
  }
  /* 10373903 nop  */
  /* nop */
L_10373910:;
  /* 10373910 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10373912 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10373914 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10373916 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10373919 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1037391c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1037391f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10373922 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10373925 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10373928 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1037392b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037392e jb 0x103738fc */
  if (C.cf) goto L_103738fc;
  /* 10373930 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10373932 jmp dword ptr [edx*4 + 0x103739e8] */
  switch (EDX) {
    case 0: goto L_103739f8;
    case 1: goto L_10373a00;
    case 2: goto L_10373a0c;
    case 3: goto L_10373a20;
    default: x86_unimpl("switch@0x10373932 out of table"); return;
  }
  /* 10373939 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1037393c:;
  /* 1037393c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1037393e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10373940 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10373942 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10373945 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10373948 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1037394b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1037394e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10373951 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373954 jb 0x103738fc */
  if (C.cf) goto L_103738fc;
  /* 10373956 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10373958 jmp dword ptr [edx*4 + 0x103739e8] */
  switch (EDX) {
    case 0: goto L_103739f8;
    case 1: goto L_10373a00;
    case 2: goto L_10373a0c;
    case 3: goto L_10373a20;
    default: x86_unimpl("switch@0x10373958 out of table"); return;
  }
  /* 1037395f nop  */
  /* nop */
L_10373960:;
  /* 10373960 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10373962 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10373964 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10373966 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10373967 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1037396a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1037396b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037396e jb 0x103738fc */
  if (C.cf) goto L_103738fc;
  /* 10373970 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10373972 jmp dword ptr [edx*4 + 0x103739e8] */
  switch (EDX) {
    case 0: goto L_103739f8;
    case 1: goto L_10373a00;
    case 2: goto L_10373a0c;
    case 3: goto L_10373a20;
    default: x86_unimpl("switch@0x10373972 out of table"); return;
  }
  /* 10373979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1037399c:;
  /* 1037399c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 103739a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_103739a4:;
  /* 103739a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 103739a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_103739ac:;
  /* 103739ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 103739b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_103739b4:;
  /* 103739b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 103739b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_103739bc:;
  /* 103739bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 103739c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_103739c4:;
  /* 103739c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 103739c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_103739cc:;
  /* 103739cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 103739d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 103739d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103739db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103739dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103739df:;
  /* 103739df jmp dword ptr [edx*4 + 0x103739e8] */
  switch (EDX) {
    case 0: goto L_103739f8;
    case 1: goto L_10373a00;
    case 2: goto L_10373a0c;
    case 3: goto L_10373a20;
    default: x86_unimpl("switch@0x103739df out of table"); return;
  }
  /* 103739e6 mov edi, edi */
  EDI = (EDI);
L_103739f8:;
  /* 103739f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103739fb pop esi */
  ESI = (pop32());
  /* 103739fc pop edi */
  EDI = (pop32());
  /* 103739fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103739fe ret  */
  ESPCHK(0x103738a0u, _esp0);
  ESP += 4; return;
  /* 103739ff nop  */
  /* nop */
L_10373a00:;
  /* 10373a00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10373a02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10373a04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373a07 pop esi */
  ESI = (pop32());
  /* 10373a08 pop edi */
  EDI = (pop32());
  /* 10373a09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373a0a ret  */
  ESPCHK(0x103738a0u, _esp0);
  ESP += 4; return;
  /* 10373a0b nop  */
  /* nop */
L_10373a0c:;
  /* 10373a0c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10373a0e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10373a10 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10373a13 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10373a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373a19 pop esi */
  ESI = (pop32());
  /* 10373a1a pop edi */
  EDI = (pop32());
  /* 10373a1b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373a1c ret  */
  ESPCHK(0x103738a0u, _esp0);
  ESP += 4; return;
  /* 10373a1d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10373a20:;
  /* 10373a20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10373a22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10373a24 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10373a27 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10373a2a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10373a2d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10373a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373a33 pop esi */
  ESI = (pop32());
  /* 10373a34 pop edi */
  EDI = (pop32());
  /* 10373a35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373a36 ret  */
  ESPCHK(0x103738a0u, _esp0);
  ESP += 4; return;
  /* 10373a37 nop  */
  /* nop */
L_10373a38:;
  /* 10373a38 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10373a3c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10373a40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10373a46 jne 0x10373a6c */
  if (!C.zf) goto L_10373a6c;
  /* 10373a48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10373a4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10373a4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373a51 jb 0x10373a60 */
  if (C.cf) goto L_10373a60;
  /* 10373a53 std  */
  C.df=1;
  /* 10373a54 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10373a56 cld  */
  C.df=0;
  /* 10373a57 jmp dword ptr [edx*4 + 0x10373b80] */
  switch (EDX) {
    case 0: goto L_10373b90;
    case 1: goto L_10373b98;
    case 2: goto L_10373ba8;
    case 3: goto L_10373bbc;
    default: x86_unimpl("switch@0x10373a57 out of table"); return;
  }
  /* 10373a5e mov edi, edi */
  EDI = (EDI);
L_10373a60:;
  /* 10373a60 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10373a62 jmp dword ptr [ecx*4 + 0x10373b30] */
  switch (ECX) {
    case 0: goto L_10373b77;
    default: x86_unimpl("switch@0x10373a62 out of table"); return;
  }
  /* 10373a69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10373a6c:;
  /* 10373a6c mov eax, edi */
  EAX = (EDI);
  /* 10373a6e mov edx, 3 */
  EDX = (0x3u);
  /* 10373a73 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373a76 jb 0x10373a84 */
  if (C.cf) goto L_10373a84;
  /* 10373a78 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10373a7b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373a7d jmp dword ptr [eax*4 + 0x10373a88] */
  switch (EAX) {
    case 1: goto L_10373a98;
    case 2: goto L_10373ab8;
    case 3: goto L_10373ae0;
    default: x86_unimpl("switch@0x10373a7d out of table"); return;
  }
L_10373a84:;
  /* 10373a84 jmp dword ptr [ecx*4 + 0x10373b80] */
  switch (ECX) {
    case 0: goto L_10373b90;
    case 1: goto L_10373b98;
    case 2: goto L_10373ba8;
    case 3: goto L_10373bbc;
    default: x86_unimpl("switch@0x10373a84 out of table"); return;
  }
  /* 10373a8b nop  */
  /* nop */
L_10373a98:;
  /* 10373a98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10373a9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10373a9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10373aa0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10373aa1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10373aa4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10373aa5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373aa8 jb 0x10373a60 */
  if (C.cf) goto L_10373a60;
  /* 10373aaa std  */
  C.df=1;
  /* 10373aab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10373aad cld  */
  C.df=0;
  /* 10373aae jmp dword ptr [edx*4 + 0x10373b80] */
  switch (EDX) {
    case 0: goto L_10373b90;
    case 1: goto L_10373b98;
    case 2: goto L_10373ba8;
    case 3: goto L_10373bbc;
    default: x86_unimpl("switch@0x10373aae out of table"); return;
  }
  /* 10373ab5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10373ab8:;
  /* 10373ab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10373abb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10373abd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10373ac0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10373ac3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10373ac6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10373ac9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373acc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373acf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373ad2 jb 0x10373a60 */
  if (C.cf) goto L_10373a60;
  /* 10373ad4 std  */
  C.df=1;
  /* 10373ad5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10373ad7 cld  */
  C.df=0;
  /* 10373ad8 jmp dword ptr [edx*4 + 0x10373b80] */
  switch (EDX) {
    case 0: goto L_10373b90;
    case 1: goto L_10373b98;
    case 2: goto L_10373ba8;
    case 3: goto L_10373bbc;
    default: x86_unimpl("switch@0x10373ad8 out of table"); return;
  }
  /* 10373adf nop  */
  /* nop */
L_10373ae0:;
  /* 10373ae0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10373ae3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10373ae5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10373ae8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10373aeb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10373aee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10373af1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10373af4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10373af7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373afa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373afd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373b00 jb 0x10373a60 */
  if (C.cf) goto L_10373a60;
  /* 10373b06 std  */
  C.df=1;
  /* 10373b07 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10373b09 cld  */
  C.df=0;
  /* 10373b0a jmp dword ptr [edx*4 + 0x10373b80] */
  switch (EDX) {
    case 0: goto L_10373b90;
    case 1: goto L_10373b98;
    case 2: goto L_10373ba8;
    case 3: goto L_10373bbc;
    default: x86_unimpl("switch@0x10373b0a out of table"); return;
  }
  /* 10373b11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10373b14 xor al, 0x3b */
  { uint32_t _r=(AL)^(0x3bu); AL = (_r); fl_logic(_r,8); }
  /* 10373b16 aaa  */
  x86_unimpl("aaa @ 0x10373b16");
  /* 10373b17 adc byte ptr [ebx + edi], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10373b1a aaa  */
  x86_unimpl("aaa @ 0x10373b1a");
  /* 10373b1b adc byte ptr [ebx + edi + 0x37], al */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1 + 0x37))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10373b1f adc byte ptr [ebx + edi + 0x37], cl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1 + 0x37))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10373b23 adc byte ptr [ebx + edi + 0x37], dl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1 + 0x37))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10373b27 adc byte ptr [ebx + edi + 0x37], bl */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1 + 0x37))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10373b2b adc byte ptr [ebx + edi + 0x37], ah */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1 + 0x37))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10373b34 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10373b38 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10373b3c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10373b40 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10373b44 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10373b48 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10373b4c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10373b50 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10373b54 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10373b58 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10373b5c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10373b60 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10373b64 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10373b68 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10373b6c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10373b73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10373b75 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10373b77:;
  /* 10373b77 jmp dword ptr [edx*4 + 0x10373b80] */
  switch (EDX) {
    case 0: goto L_10373b90;
    case 1: goto L_10373b98;
    case 2: goto L_10373ba8;
    case 3: goto L_10373bbc;
    default: x86_unimpl("switch@0x10373b77 out of table"); return;
  }
  /* 10373b7e mov edi, edi */
  EDI = (EDI);
L_10373b90:;
  /* 10373b90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373b93 pop esi */
  ESI = (pop32());
  /* 10373b94 pop edi */
  EDI = (pop32());
  /* 10373b95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373b96 ret  */
  ESPCHK(0x103738a0u, _esp0);
  ESP += 4; return;
  /* 10373b97 nop  */
  /* nop */
L_10373b98:;
  /* 10373b98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10373b9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10373b9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373ba1 pop esi */
  ESI = (pop32());
  /* 10373ba2 pop edi */
  EDI = (pop32());
  /* 10373ba3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373ba4 ret  */
  ESPCHK(0x103738a0u, _esp0);
  ESP += 4; return;
  /* 10373ba5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10373ba8:;
  /* 10373ba8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10373bab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10373bae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10373bb1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10373bb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373bb7 pop esi */
  ESI = (pop32());
  /* 10373bb8 pop edi */
  EDI = (pop32());
  /* 10373bb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373bba ret  */
  ESPCHK(0x103738a0u, _esp0);
  ESP += 4; return;
  /* 10373bbb nop  */
  /* nop */
L_10373bbc:;
  /* 10373bbc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10373bbf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10373bc2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10373bc5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10373bc8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10373bcb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10373bce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373bd1 pop esi */
  ESI = (pop32());
  /* 10373bd2 pop edi */
  EDI = (pop32());
  /* 10373bd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373bd4 ret  */
  ESPCHK(0x103738a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bd5 @ 0x10373bd5 (62 bytes, 15 insns) */
void f_10373bd5(void) {
  FTRACE(0x10373bd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373bd5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10373bda push 0 */
  push32((uint32_t)(0x0u));
  /* 10373bdc push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 10373be2 call dword ptr [0x1037503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037503c))), 0x10373be8u);
  /* 10373be8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10373bea mov dword ptr [0x103768a4], eax */
  w32((uint32_t)(0x103768a4), (EAX));
  /* 10373bef jne 0x10373bf2 */
  if (!C.zf) goto L_10373bf2;
  /* 10373bf1 ret  */
  ESPCHK(0x10373bd5u, _esp0);
  ESP += 4; return;
L_10373bf2:;
  /* 10373bf2 and dword ptr [0x1037689c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1037689c)))&(0x0u); w32((uint32_t)(0x1037689c), (_r)); fl_logic(_r,32); }
  /* 10373bf9 and dword ptr [0x103768a0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x103768a0)))&(0x0u); w32((uint32_t)(0x103768a0), (_r)); fl_logic(_r,32); }
  /* 10373c00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10373c02 mov dword ptr [0x10376898], eax */
  w32((uint32_t)(0x10376898), (EAX));
  /* 10373c07 mov dword ptr [0x10376890], 0x10 */
  w32((uint32_t)(0x10376890), (0x10u));
  /* 10373c11 pop eax */
  EAX = (pop32());
  /* 10373c12 ret  */
  ESPCHK(0x10373bd5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c13 @ 0x10373c13 (43 bytes, 14 insns) */
void f_10373c13(void) {
  FTRACE(0x10373c13u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373c13 mov eax, dword ptr [0x103768a0] */
  EAX = (r32((uint32_t)(0x103768a0)));
  /* 10373c18 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10373c1b mov eax, dword ptr [0x103768a4] */
  EAX = (r32((uint32_t)(0x103768a4)));
  /* 10373c20 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10373c23:;
  /* 10373c23 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373c25 jae 0x10373c3b */
  if (!C.cf) goto L_10373c3b;
  /* 10373c27 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10373c2b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373c2e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373c34 jb 0x10373c3d */
  if (C.cf) goto L_10373c3d;
  /* 10373c36 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373c39 jmp 0x10373c23 */
  goto L_10373c23;
L_10373c3b:;
  /* 10373c3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10373c3d:;
  /* 10373c3d ret  */
  ESPCHK(0x10373c13u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c3e @ 0x10373c3e (811 bytes, 264 insns) */
void f_10373c3e(void) {
  FTRACE(0x10373c3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373c3e push ebp */
  push32((uint32_t)(EBP));
  /* 10373c3f mov ebp, esp */
  EBP = (ESP);
  /* 10373c41 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373c44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10373c47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373c4a push ebx */
  push32((uint32_t)(EBX));
  /* 10373c4b push esi */
  push32((uint32_t)(ESI));
  /* 10373c4c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10373c4f mov esi, edx */
  ESI = (EDX);
  /* 10373c51 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373c54 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10373c57 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373c5a push edi */
  push32((uint32_t)(EDI));
  /* 10373c5b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10373c5e mov ecx, esi */
  ECX = (ESI);
  /* 10373c60 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10373c63 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10373c69 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10373c6a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10373c6d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10373c74 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10373c77 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10373c7a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10373c7d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10373c80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10373c83 jne 0x10373d04 */
  if (!C.zf) goto L_10373d04;
  /* 10373c85 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10373c88 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10373c8a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10373c8b pop edi */
  EDI = (pop32());
  /* 10373c8c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10373c8f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373c91 jbe 0x10373c96 */
  if ((C.cf||C.zf)) goto L_10373c96;
  /* 10373c93 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10373c96:;
  /* 10373c96 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10373c9a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373c9e jne 0x10373ce8 */
  if (!C.zf) goto L_10373ce8;
  /* 10373ca0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10373ca3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373ca6 jae 0x10373cc4 */
  if (!C.cf) goto L_10373cc4;
  /* 10373ca8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10373cad shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10373caf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10373cb3 not edi */
  EDI = (~(EDI));
  /* 10373cb5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10373cb9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10373cbb jne 0x10373ce8 */
  if (!C.zf) goto L_10373ce8;
  /* 10373cbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373cc0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10373cc2 jmp 0x10373ce8 */
  goto L_10373ce8;
L_10373cc4:;
  /* 10373cc4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373cc7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10373ccc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10373cce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10373cd1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10373cd5 not edi */
  EDI = (~(EDI));
  /* 10373cd7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10373cde dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10373ce0 jne 0x10373ce8 */
  if (!C.zf) goto L_10373ce8;
  /* 10373ce2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373ce5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10373ce8:;
  /* 10373ce8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10373cec mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10373cf0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10373cf3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10373cf7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10373cfb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373cfe mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10373d01 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10373d04:;
  /* 10373d04 mov edi, ebx */
  EDI = (EBX);
  /* 10373d06 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10373d09 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10373d0a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373d0d jbe 0x10373d12 */
  if ((C.cf||C.zf)) goto L_10373d12;
  /* 10373d0f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10373d11 pop edi */
  EDI = (pop32());
L_10373d12:;
  /* 10373d12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10373d15 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10373d18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10373d1b jne 0x10373dc1 */
  if (!C.zf) goto L_10373dc1;
  /* 10373d21 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373d24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10373d27 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10373d2a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10373d2c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10373d2f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10373d30 pop edx */
  EDX = (pop32());
  /* 10373d31 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373d33 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10373d36 jbe 0x10373d3d */
  if ((C.cf||C.zf)) goto L_10373d3d;
  /* 10373d38 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10373d3b mov ecx, edx */
  ECX = (EDX);
L_10373d3d:;
  /* 10373d3d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373d40 mov edi, ebx */
  EDI = (EBX);
  /* 10373d42 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10373d45 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10373d48 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10373d49 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373d4b jbe 0x10373d4f */
  if ((C.cf||C.zf)) goto L_10373d4f;
  /* 10373d4d mov edi, edx */
  EDI = (EDX);
L_10373d4f:;
  /* 10373d4f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373d51 je 0x10373dbe */
  if (C.zf) goto L_10373dbe;
  /* 10373d53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10373d56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10373d59 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373d5c jne 0x10373da6 */
  if (!C.zf) goto L_10373da6;
  /* 10373d5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10373d61 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373d64 jae 0x10373d82 */
  if (!C.cf) goto L_10373d82;
  /* 10373d66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10373d6b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10373d6d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10373d71 not edx */
  EDX = (~(EDX));
  /* 10373d73 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10373d77 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10373d79 jne 0x10373da6 */
  if (!C.zf) goto L_10373da6;
  /* 10373d7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373d7e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10373d80 jmp 0x10373da6 */
  goto L_10373da6;
L_10373d82:;
  /* 10373d82 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373d85 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10373d8a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10373d8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10373d8f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10373d93 not edx */
  EDX = (~(EDX));
  /* 10373d95 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10373d9c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10373d9e jne 0x10373da6 */
  if (!C.zf) goto L_10373da6;
  /* 10373da0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373da3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10373da6:;
  /* 10373da6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10373da9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10373dac mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10373daf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10373db2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10373db5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10373db8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10373dbb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10373dbe:;
  /* 10373dbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10373dc1:;
  /* 10373dc1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373dc5 jne 0x10373dd0 */
  if (!C.zf) goto L_10373dd0;
  /* 10373dc7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373dca je 0x10373e59 */
  if (C.zf) goto L_10373e59;
L_10373dd0:;
  /* 10373dd0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10373dd3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10373dd6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10373dd9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10373ddc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10373ddf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10373de2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10373de5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10373de8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10373deb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10373dee mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10373df1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373df4 jne 0x10373e59 */
  if (!C.zf) goto L_10373e59;
  /* 10373df6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10373dfa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373dfd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10373e00 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10373e02 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10373e06 jae 0x10373e2d */
  if (!C.cf) goto L_10373e2d;
  /* 10373e08 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10373e0c jne 0x10373e1c */
  if (!C.zf) goto L_10373e1c;
  /* 10373e0e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10373e13 mov ecx, edi */
  ECX = (EDI);
  /* 10373e15 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10373e17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373e1a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10373e1c:;
  /* 10373e1c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10373e21 mov ecx, edi */
  ECX = (EDI);
  /* 10373e23 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10373e25 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10373e29 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10373e2b jmp 0x10373e56 */
  goto L_10373e56;
L_10373e2d:;
  /* 10373e2d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10373e31 jne 0x10373e43 */
  if (!C.zf) goto L_10373e43;
  /* 10373e33 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10373e36 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10373e3b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10373e3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373e40 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10373e43:;
  /* 10373e43 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10373e46 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10373e4b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10373e4d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10373e54 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10373e56:;
  /* 10373e56 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10373e59:;
  /* 10373e59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10373e5c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10373e5e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10373e62 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10373e64 jne 0x10373f64 */
  if (!C.zf) goto L_10373f64;
  /* 10373e6a mov eax, dword ptr [0x1037689c] */
  EAX = (r32((uint32_t)(0x1037689c)));
  /* 10373e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10373e71 je 0x10373f56 */
  if (C.zf) goto L_10373f56;
  /* 10373e77 mov ecx, dword ptr [0x10376894] */
  ECX = (r32((uint32_t)(0x10376894)));
  /* 10373e7d mov edi, dword ptr [0x10375050] */
  EDI = (r32((uint32_t)(0x10375050)));
  /* 10373e83 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10373e86 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373e89 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10373e8e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10373e93 push ebx */
  push32((uint32_t)(EBX));
  /* 10373e94 push ecx */
  push32((uint32_t)(ECX));
  /* 10373e95 call edi */
  call_ind((uint32_t)(EDI), 0x10373e97u);
  /* 10373e97 mov ecx, dword ptr [0x10376894] */
  ECX = (r32((uint32_t)(0x10376894)));
  /* 10373e9d mov eax, dword ptr [0x1037689c] */
  EAX = (r32((uint32_t)(0x1037689c)));
  /* 10373ea2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10373ea7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10373ea9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10373eac mov eax, dword ptr [0x1037689c] */
  EAX = (r32((uint32_t)(0x1037689c)));
  /* 10373eb1 mov ecx, dword ptr [0x10376894] */
  ECX = (r32((uint32_t)(0x10376894)));
  /* 10373eb7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10373eba and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10373ec2 mov eax, dword ptr [0x1037689c] */
  EAX = (r32((uint32_t)(0x1037689c)));
  /* 10373ec7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10373eca dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10373ecd mov eax, dword ptr [0x1037689c] */
  EAX = (r32((uint32_t)(0x1037689c)));
  /* 10373ed2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10373ed5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10373ed9 jne 0x10373ee4 */
  if (!C.zf) goto L_10373ee4;
  /* 10373edb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10373edf mov eax, dword ptr [0x1037689c] */
  EAX = (r32((uint32_t)(0x1037689c)));
L_10373ee4:;
  /* 10373ee4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373ee8 jne 0x10373f56 */
  if (!C.zf) goto L_10373f56;
  /* 10373eea push ebx */
  push32((uint32_t)(EBX));
  /* 10373eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 10373eed push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10373ef0 call edi */
  call_ind((uint32_t)(EDI), 0x10373ef2u);
  /* 10373ef2 mov eax, dword ptr [0x1037689c] */
  EAX = (r32((uint32_t)(0x1037689c)));
  /* 10373ef7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10373efa push 0 */
  push32((uint32_t)(0x0u));
  /* 10373efc push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 10373f02 call dword ptr [0x1037504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037504c))), 0x10373f08u);
  /* 10373f08 mov eax, dword ptr [0x103768a0] */
  EAX = (r32((uint32_t)(0x103768a0)));
  /* 10373f0d mov edx, dword ptr [0x103768a4] */
  EDX = (r32((uint32_t)(0x103768a4)));
  /* 10373f13 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10373f16 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10373f19 mov ecx, eax */
  ECX = (EAX);
  /* 10373f1b mov eax, dword ptr [0x1037689c] */
  EAX = (r32((uint32_t)(0x1037689c)));
  /* 10373f20 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373f22 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10373f26 push ecx */
  push32((uint32_t)(ECX));
  /* 10373f27 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10373f2a push ecx */
  push32((uint32_t)(ECX));
  /* 10373f2b push eax */
  push32((uint32_t)(EAX));
  /* 10373f2c call 0x103749c0 */
  push32(0x10373f31u); f_103749c0();
  /* 10373f31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373f34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10373f37 dec dword ptr [0x103768a0] */
  { uint32_t _r=(r32((uint32_t)(0x103768a0)))-1; w32((uint32_t)(0x103768a0), (_r)); fl_dec(_r,32); }
  /* 10373f3d cmp eax, dword ptr [0x1037689c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1037689c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373f43 jbe 0x10373f48 */
  if ((C.cf||C.zf)) goto L_10373f48;
  /* 10373f45 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10373f48:;
  /* 10373f48 mov ecx, dword ptr [0x103768a4] */
  ECX = (r32((uint32_t)(0x103768a4)));
  /* 10373f4e mov dword ptr [0x10376898], ecx */
  w32((uint32_t)(0x10376898), (ECX));
  /* 10373f54 jmp 0x10373f59 */
  goto L_10373f59;
L_10373f56:;
  /* 10373f56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10373f59:;
  /* 10373f59 mov dword ptr [0x1037689c], eax */
  w32((uint32_t)(0x1037689c), (EAX));
  /* 10373f5e mov dword ptr [0x10376894], esi */
  w32((uint32_t)(0x10376894), (ESI));
L_10373f64:;
  /* 10373f64 pop edi */
  EDI = (pop32());
  /* 10373f65 pop esi */
  ESI = (pop32());
  /* 10373f66 pop ebx */
  EBX = (pop32());
  /* 10373f67 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10373f68 ret  */
  ESPCHK(0x10373c3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f69 @ 0x10373f69 (777 bytes, 275 insns) */
void f_10373f69(void) {
  FTRACE(0x10373f69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10373f69 push ebp */
  push32((uint32_t)(EBP));
  /* 10373f6a mov ebp, esp */
  EBP = (ESP);
  /* 10373f6c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10373f6f mov eax, dword ptr [0x103768a0] */
  EAX = (r32((uint32_t)(0x103768a0)));
  /* 10373f74 mov edx, dword ptr [0x103768a4] */
  EDX = (r32((uint32_t)(0x103768a4)));
  /* 10373f7a push ebx */
  push32((uint32_t)(EBX));
  /* 10373f7b push esi */
  push32((uint32_t)(ESI));
  /* 10373f7c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10373f7f push edi */
  push32((uint32_t)(EDI));
  /* 10373f80 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10373f83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10373f86 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10373f89 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10373f8c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10373f8f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10373f92 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10373f95 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10373f96 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373f99 jge 0x10373fa9 */
  if ((C.sf==C.of)) goto L_10373fa9;
  /* 10373f9b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10373f9e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10373fa0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10373fa4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10373fa7 jmp 0x10373fb9 */
  goto L_10373fb9;
L_10373fa9:;
  /* 10373fa9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373fac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10373faf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10373fb1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10373fb3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10373fb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10373fb9:;
  /* 10373fb9 mov eax, dword ptr [0x10376898] */
  EAX = (r32((uint32_t)(0x10376898)));
  /* 10373fbe mov ebx, eax */
  EBX = (EAX);
  /* 10373fc0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373fc2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10373fc5 jae 0x10373fe0 */
  if (!C.cf) goto L_10373fe0;
L_10373fc7:;
  /* 10373fc7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10373fca mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10373fcc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10373fcf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10373fd1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10373fd3 jne 0x10373fe0 */
  if (!C.zf) goto L_10373fe0;
  /* 10373fd5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373fd8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373fdb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10373fde jb 0x10373fc7 */
  if (C.cf) goto L_10373fc7;
L_10373fe0:;
  /* 10373fe0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373fe3 jne 0x1037405e */
  if (!C.zf) goto L_1037405e;
  /* 10373fe5 mov ebx, edx */
  EBX = (EDX);
L_10373fe7:;
  /* 10373fe7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10373fe9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10373fec jae 0x10374003 */
  if (!C.cf) goto L_10374003;
  /* 10373fee mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10373ff1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10373ff3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10373ff6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10373ff8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10373ffa jne 0x10374001 */
  if (!C.zf) goto L_10374001;
  /* 10373ffc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10373fff jmp 0x10373fe7 */
  goto L_10373fe7;
L_10374001:;
  /* 10374001 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10374003:;
  /* 10374003 jne 0x1037405e */
  if (!C.zf) goto L_1037405e;
L_10374005:;
  /* 10374005 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374008 jae 0x1037401b */
  if (!C.cf) goto L_1037401b;
  /* 1037400a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037400e jne 0x10374018 */
  if (!C.zf) goto L_10374018;
  /* 10374010 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10374013 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10374016 jmp 0x10374005 */
  goto L_10374005;
L_10374018:;
  /* 10374018 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1037401b:;
  /* 1037401b jne 0x10374043 */
  if (!C.zf) goto L_10374043;
  /* 1037401d mov ebx, edx */
  EBX = (EDX);
L_1037401f:;
  /* 1037401f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374021 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10374024 jae 0x10374033 */
  if (!C.cf) goto L_10374033;
  /* 10374026 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037402a jne 0x10374031 */
  if (!C.zf) goto L_10374031;
  /* 1037402c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1037402f jmp 0x1037401f */
  goto L_1037401f;
L_10374031:;
  /* 10374031 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10374033:;
  /* 10374033 jne 0x10374043 */
  if (!C.zf) goto L_10374043;
  /* 10374035 call 0x10374272 */
  push32(0x1037403au); f_10374272();
  /* 1037403a mov ebx, eax */
  EBX = (EAX);
  /* 1037403c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1037403e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10374041 je 0x10374057 */
  if (C.zf) goto L_10374057;
L_10374043:;
  /* 10374043 push ebx */
  push32((uint32_t)(EBX));
  /* 10374044 call 0x10374323 */
  push32(0x10374049u); f_10374323();
  /* 10374049 pop ecx */
  ECX = (pop32());
  /* 1037404a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1037404d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1037404f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10374052 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374055 jne 0x1037405e */
  if (!C.zf) goto L_1037405e;
L_10374057:;
  /* 10374057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10374059 jmp 0x1037426d */
  goto L_1037426d;
L_1037405e:;
  /* 1037405e mov dword ptr [0x10376898], ebx */
  w32((uint32_t)(0x10376898), (EBX));
  /* 10374064 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10374067 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10374069 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037406c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1037406f je 0x10374085 */
  if (C.zf) goto L_10374085;
  /* 10374071 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10374078 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1037407c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1037407f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10374081 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10374083 jne 0x103740bc */
  if (!C.zf) goto L_103740bc;
L_10374085:;
  /* 10374085 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1037408b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1037408e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10374091 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10374094 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10374098 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1037409b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1037409d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 103740a0 jne 0x103740b9 */
  if (!C.zf) goto L_103740b9;
L_103740a2:;
  /* 103740a2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 103740a8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 103740ab and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 103740ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103740b1 mov edi, esi */
  EDI = (ESI);
  /* 103740b3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 103740b5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 103740b7 je 0x103740a2 */
  if (C.zf) goto L_103740a2;
L_103740b9:;
  /* 103740b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_103740bc:;
  /* 103740bc mov ecx, edx */
  ECX = (EDX);
  /* 103740be xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103740c0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103740c6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103740cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 103740d0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 103740d4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 103740d6 jne 0x103740e5 */
  if (!C.zf) goto L_103740e5;
  /* 103740d8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 103740df push 0x20 */
  push32((uint32_t)(0x20u));
  /* 103740e1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 103740e4 pop edi */
  EDI = (pop32());
L_103740e5:;
  /* 103740e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103740e7 jl 0x103740ee */
  if ((C.sf!=C.of)) goto L_103740ee;
  /* 103740e9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 103740eb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103740ec jmp 0x103740e5 */
  goto L_103740e5;
L_103740ee:;
  /* 103740ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103740f1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 103740f5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 103740f7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103740fa mov esi, ecx */
  ESI = (ECX);
  /* 103740fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103740ff sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10374102 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10374103 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374106 jle 0x1037410b */
  if ((C.zf||C.sf!=C.of)) goto L_1037410b;
  /* 10374108 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1037410a pop esi */
  ESI = (pop32());
L_1037410b:;
  /* 1037410b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037410d je 0x10374220 */
  if (C.zf) goto L_10374220;
  /* 10374113 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10374116 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374119 jne 0x1037417c */
  if (!C.zf) goto L_1037417c;
  /* 1037411b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037411e jge 0x1037414b */
  if ((C.sf==C.of)) goto L_1037414b;
  /* 10374120 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10374125 mov ecx, edi */
  ECX = (EDI);
  /* 10374127 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10374129 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1037412c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10374130 not ebx */
  EBX = (~(EBX));
  /* 10374132 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10374135 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10374139 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1037413d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1037413f jne 0x10374179 */
  if (!C.zf) goto L_10374179;
  /* 10374141 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374144 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10374147 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10374149 jmp 0x1037417c */
  goto L_1037417c;
L_1037414b:;
  /* 1037414b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1037414e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10374153 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10374155 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10374158 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1037415c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10374163 not ebx */
  EBX = (~(EBX));
  /* 10374165 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10374167 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10374169 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1037416c jne 0x10374179 */
  if (!C.zf) goto L_10374179;
  /* 1037416e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374171 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10374174 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10374177 jmp 0x1037417c */
  goto L_1037417c;
L_10374179:;
  /* 10374179 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1037417c:;
  /* 1037417c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1037417f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10374182 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374186 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10374189 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1037418c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1037418f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10374192 je 0x1037422c */
  if (C.zf) goto L_1037422c;
  /* 10374198 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1037419b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1037419f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 103741a2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 103741a5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 103741a8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 103741ab mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 103741ae mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103741b1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 103741b4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103741b7 jne 0x1037421d */
  if (!C.zf) goto L_1037421d;
  /* 103741b9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 103741bd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103741c0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 103741c3 jge 0x103741ee */
  if ((C.sf==C.of)) goto L_103741ee;
  /* 103741c5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 103741c7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103741cb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 103741cf jne 0x103741dc */
  if (!C.zf) goto L_103741dc;
  /* 103741d1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 103741d6 mov ecx, esi */
  ECX = (ESI);
  /* 103741d8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 103741da or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_103741dc:;
  /* 103741dc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 103741e1 mov ecx, esi */
  ECX = (ESI);
  /* 103741e3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 103741e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103741e8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 103741ec jmp 0x1037421d */
  goto L_1037421d;
L_103741ee:;
  /* 103741ee inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 103741f0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103741f4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 103741f8 jne 0x10374207 */
  if (!C.zf) goto L_10374207;
  /* 103741fa lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 103741fd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10374202 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10374204 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10374207:;
  /* 10374207 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1037420a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10374211 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10374214 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10374219 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1037421b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1037421d:;
  /* 1037421d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10374220:;
  /* 10374220 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10374222 je 0x1037422f */
  if (C.zf) goto L_1037422f;
  /* 10374224 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10374226 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1037422a jmp 0x1037422f */
  goto L_1037422f;
L_1037422c:;
  /* 1037422c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1037422f:;
  /* 1037422f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10374232 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10374234 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10374237 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10374239 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1037423d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10374240 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10374242 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10374244 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10374247 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10374249 jne 0x10374265 */
  if (!C.zf) goto L_10374265;
  /* 1037424b cmp ebx, dword ptr [0x1037689c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1037689c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374251 jne 0x10374265 */
  if (!C.zf) goto L_10374265;
  /* 10374253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10374256 cmp ecx, dword ptr [0x10376894] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10376894))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037425c jne 0x10374265 */
  if (!C.zf) goto L_10374265;
  /* 1037425e and dword ptr [0x1037689c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1037689c)))&(0x0u); w32((uint32_t)(0x1037689c), (_r)); fl_logic(_r,32); }
L_10374265:;
  /* 10374265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10374268 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1037426a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1037426d:;
  /* 1037426d pop edi */
  EDI = (pop32());
  /* 1037426e pop esi */
  ESI = (pop32());
  /* 1037426f pop ebx */
  EBX = (pop32());
  /* 10374270 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374271 ret  */
  ESPCHK(0x10373f69u, _esp0);
  ESP += 4; return;
}

/* FUN_10004272 @ 0x10374272 (177 bytes, 53 insns) */
void f_10374272(void) {
  FTRACE(0x10374272u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374272 mov eax, dword ptr [0x103768a0] */
  EAX = (r32((uint32_t)(0x103768a0)));
  /* 10374277 mov ecx, dword ptr [0x10376890] */
  ECX = (r32((uint32_t)(0x10376890)));
  /* 1037427d push esi */
  push32((uint32_t)(ESI));
  /* 1037427e push edi */
  push32((uint32_t)(EDI));
  /* 1037427f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10374281 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374283 jne 0x103742b5 */
  if (!C.zf) goto L_103742b5;
  /* 10374285 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10374289 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1037428c push eax */
  push32((uint32_t)(EAX));
  /* 1037428d push dword ptr [0x103768a4] */
  push32((uint32_t)(r32((uint32_t)(0x103768a4))));
  /* 10374293 push edi */
  push32((uint32_t)(EDI));
  /* 10374294 push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 1037429a call dword ptr [0x10375028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375028))), 0x103742a0u);
  /* 103742a0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103742a2 je 0x10374305 */
  if (C.zf) goto L_10374305;
  /* 103742a4 add dword ptr [0x10376890], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10376890))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10376890), (_r)); fl_add(_a,_b,_r,32); }
  /* 103742ab mov dword ptr [0x103768a4], eax */
  w32((uint32_t)(0x103768a4), (EAX));
  /* 103742b0 mov eax, dword ptr [0x103768a0] */
  EAX = (r32((uint32_t)(0x103768a0)));
L_103742b5:;
  /* 103742b5 mov ecx, dword ptr [0x103768a4] */
  ECX = (r32((uint32_t)(0x103768a4)));
  /* 103742bb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 103742c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 103742c2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103742c5 push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 103742cb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 103742ce call dword ptr [0x1037503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037503c))), 0x103742d4u);
  /* 103742d4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103742d6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 103742d9 je 0x10374305 */
  if (C.zf) goto L_10374305;
  /* 103742db push 4 */
  push32((uint32_t)(0x4u));
  /* 103742dd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 103742e2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 103742e7 push edi */
  push32((uint32_t)(EDI));
  /* 103742e8 call dword ptr [0x1037502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037502c))), 0x103742eeu);
  /* 103742ee cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103742f0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 103742f3 jne 0x10374309 */
  if (!C.zf) goto L_10374309;
  /* 103742f5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 103742f8 push edi */
  push32((uint32_t)(EDI));
  /* 103742f9 push dword ptr [0x10376ac8] */
  push32((uint32_t)(r32((uint32_t)(0x10376ac8))));
  /* 103742ff call dword ptr [0x1037504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037504c))), 0x10374305u);
L_10374305:;
  /* 10374305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10374307 jmp 0x10374320 */
  goto L_10374320;
L_10374309:;
  /* 10374309 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1037430d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1037430f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10374312 inc dword ptr [0x103768a0] */
  { uint32_t _r=(r32((uint32_t)(0x103768a0)))+1; w32((uint32_t)(0x103768a0), (_r)); fl_inc(_r,32); }
  /* 10374318 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1037431b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1037431e mov eax, esi */
  EAX = (ESI);
L_10374320:;
  /* 10374320 pop edi */
  EDI = (pop32());
  /* 10374321 pop esi */
  ESI = (pop32());
  /* 10374322 ret  */
  ESPCHK(0x10374272u, _esp0);
  ESP += 4; return;
}

/* FUN_10004323 @ 0x10374323 (251 bytes, 85 insns) */
void f_10374323(void) {
  FTRACE(0x10374323u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374323 push ebp */
  push32((uint32_t)(EBP));
  /* 10374324 mov ebp, esp */
  EBP = (ESP);
  /* 10374326 push ecx */
  push32((uint32_t)(ECX));
  /* 10374327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1037432a push ebx */
  push32((uint32_t)(EBX));
  /* 1037432b push esi */
  push32((uint32_t)(ESI));
  /* 1037432c push edi */
  push32((uint32_t)(EDI));
  /* 1037432d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10374330 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10374333 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10374335:;
  /* 10374335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10374337 jl 0x1037433e */
  if ((C.sf!=C.of)) goto L_1037433e;
  /* 10374339 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1037433b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1037433c jmp 0x10374335 */
  goto L_10374335;
L_1037433e:;
  /* 1037433e mov eax, ebx */
  EAX = (EBX);
  /* 10374340 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10374342 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10374348 pop edx */
  EDX = (pop32());
  /* 10374349 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10374350 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10374353:;
  /* 10374353 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10374356 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10374359 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1037435c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1037435d jne 0x10374353 */
  if (!C.zf) goto L_10374353;
  /* 1037435f mov edi, ebx */
  EDI = (EBX);
  /* 10374361 push 4 */
  push32((uint32_t)(0x4u));
  /* 10374363 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10374366 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374369 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1037436e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10374373 push edi */
  push32((uint32_t)(EDI));
  /* 10374374 call dword ptr [0x1037502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037502c))), 0x1037437au);
  /* 1037437a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037437c jne 0x10374386 */
  if (!C.zf) goto L_10374386;
  /* 1037437e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10374381 jmp 0x10374419 */
  goto L_10374419;
L_10374386:;
  /* 10374386 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1037438c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037438e ja 0x103743cc */
  if ((!C.cf&&!C.zf)) goto L_103743cc;
  /* 10374390 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10374393:;
  /* 10374393 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10374397 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1037439e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 103743a4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 103743ab mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103743ad lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 103743b3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103743b6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 103743c0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103743c5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 103743c8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103743ca jbe 0x10374393 */
  if ((C.cf||C.zf)) goto L_10374393;
L_103743cc:;
  /* 103743cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103743cf lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 103743d2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103743d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103743d9 pop edi */
  EDI = (pop32());
  /* 103743da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103743dd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 103743e0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 103743e3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 103743e6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 103743e9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 103743ee mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 103743f5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 103743f8 mov cl, al */
  CL = (AL);
  /* 103743fa inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 103743fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103743fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374401 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10374404 jne 0x10374409 */
  if (!C.zf) goto L_10374409;
  /* 10374406 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10374409:;
  /* 10374409 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1037440e mov ecx, ebx */
  ECX = (EBX);
  /* 10374410 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10374412 not edx */
  EDX = (~(EDX));
  /* 10374414 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10374417 mov eax, ebx */
  EAX = (EBX);
L_10374419:;
  /* 10374419 pop edi */
  EDI = (pop32());
  /* 1037441a pop esi */
  ESI = (pop32());
  /* 1037441b pop ebx */
  EBX = (pop32());
  /* 1037441c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1037441d ret  */
  ESPCHK(0x10374323u, _esp0);
  ESP += 4; return;
}

/* FUN_1000441e @ 0x1037441e (137 bytes, 50 insns) */
void f_1037441e(void) {
  FTRACE(0x1037441eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1037441e push ebx */
  push32((uint32_t)(EBX));
  /* 1037441f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10374421 cmp dword ptr [0x10376854], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10376854))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374427 push esi */
  push32((uint32_t)(ESI));
  /* 10374428 push edi */
  push32((uint32_t)(EDI));
  /* 10374429 jne 0x1037446d */
  if (!C.zf) goto L_1037446d;
  /* 1037442b push 0x10375478 */
  push32((uint32_t)(0x10375478u));
  /* 10374430 call dword ptr [0x1037501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037501c))), 0x10374436u);
  /* 10374436 mov edi, eax */
  EDI = (EAX);
  /* 10374438 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037443a je 0x103744a3 */
  if (C.zf) goto L_103744a3;
  /* 1037443c mov esi, dword ptr [0x10375020] */
  ESI = (r32((uint32_t)(0x10375020)));
  /* 10374442 push 0x1037546c */
  push32((uint32_t)(0x1037546cu));
  /* 10374447 push edi */
  push32((uint32_t)(EDI));
  /* 10374448 call esi */
  call_ind((uint32_t)(ESI), 0x1037444au);
  /* 1037444a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037444c mov dword ptr [0x10376854], eax */
  w32((uint32_t)(0x10376854), (EAX));
  /* 10374451 je 0x103744a3 */
  if (C.zf) goto L_103744a3;
  /* 10374453 push 0x1037545c */
  push32((uint32_t)(0x1037545cu));
  /* 10374458 push edi */
  push32((uint32_t)(EDI));
  /* 10374459 call esi */
  call_ind((uint32_t)(ESI), 0x1037445bu);
  /* 1037445b push 0x10375448 */
  push32((uint32_t)(0x10375448u));
  /* 10374460 push edi */
  push32((uint32_t)(EDI));
  /* 10374461 mov dword ptr [0x10376858], eax */
  w32((uint32_t)(0x10376858), (EAX));
  /* 10374466 call esi */
  call_ind((uint32_t)(ESI), 0x10374468u);
  /* 10374468 mov dword ptr [0x1037685c], eax */
  w32((uint32_t)(0x1037685c), (EAX));
L_1037446d:;
  /* 1037446d mov eax, dword ptr [0x10376858] */
  EAX = (r32((uint32_t)(0x10376858)));
  /* 10374472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10374474 je 0x1037448c */
  if (C.zf) goto L_1037448c;
  /* 10374476 call eax */
  call_ind((uint32_t)(EAX), 0x10374478u);
  /* 10374478 mov ebx, eax */
  EBX = (EAX);
  /* 1037447a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1037447c je 0x1037448c */
  if (C.zf) goto L_1037448c;
  /* 1037447e mov eax, dword ptr [0x1037685c] */
  EAX = (r32((uint32_t)(0x1037685c)));
  /* 10374483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10374485 je 0x1037448c */
  if (C.zf) goto L_1037448c;
  /* 10374487 push ebx */
  push32((uint32_t)(EBX));
  /* 10374488 call eax */
  call_ind((uint32_t)(EAX), 0x1037448au);
  /* 1037448a mov ebx, eax */
  EBX = (EAX);
L_1037448c:;
  /* 1037448c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10374490 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10374494 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10374498 push ebx */
  push32((uint32_t)(EBX));
  /* 10374499 call dword ptr [0x10376854] */
  call_ind((uint32_t)(r32((uint32_t)(0x10376854))), 0x1037449fu);
L_1037449f:;
  /* 1037449f pop edi */
  EDI = (pop32());
  /* 103744a0 pop esi */
  ESI = (pop32());
  /* 103744a1 pop ebx */
  EBX = (pop32());
  /* 103744a2 ret  */
  ESPCHK(0x1037441eu, _esp0);
  ESP += 4; return;
L_103744a3:;
  /* 103744a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103744a5 jmp 0x1037449f */
  goto L_1037449f;
}

/* _strncpy @ 0x103744b0 (254 bytes, 109 insns) */
void f_103744b0(void) {
  FTRACE(0x103744b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103744b0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103744b4 push edi */
  push32((uint32_t)(EDI));
  /* 103744b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103744b7 je 0x10374533 */
  if (C.zf) goto L_10374533;
  /* 103744b9 push esi */
  push32((uint32_t)(ESI));
  /* 103744ba push ebx */
  push32((uint32_t)(EBX));
  /* 103744bb mov ebx, ecx */
  EBX = (ECX);
  /* 103744bd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 103744c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 103744c7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 103744cb jne 0x103744d4 */
  if (!C.zf) goto L_103744d4;
  /* 103744cd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103744d0 jne 0x10374541 */
  if (!C.zf) goto L_10374541;
  /* 103744d2 jmp 0x103744f5 */
  goto L_103744f5;
L_103744d4:;
  /* 103744d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103744d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103744d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103744d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103744da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103744db je 0x10374502 */
  if (C.zf) goto L_10374502;
  /* 103744dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103744df je 0x1037450a */
  if (C.zf) goto L_1037450a;
  /* 103744e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 103744e7 jne 0x103744d4 */
  if (!C.zf) goto L_103744d4;
  /* 103744e9 mov ebx, ecx */
  EBX = (ECX);
  /* 103744eb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103744ee jne 0x10374541 */
  if (!C.zf) goto L_10374541;
L_103744f0:;
  /* 103744f0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 103744f3 je 0x10374502 */
  if (C.zf) goto L_10374502;
L_103744f5:;
  /* 103744f5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103744f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103744f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103744fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103744fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103744fd je 0x1037452e */
  if (C.zf) goto L_1037452e;
  /* 103744ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10374500 jne 0x103744f5 */
  if (!C.zf) goto L_103744f5;
L_10374502:;
  /* 10374502 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10374506 pop ebx */
  EBX = (pop32());
  /* 10374507 pop esi */
  ESI = (pop32());
  /* 10374508 pop edi */
  EDI = (pop32());
  /* 10374509 ret  */
  ESPCHK(0x103744b0u, _esp0);
  ESP += 4; return;
L_1037450a:;
  /* 1037450a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10374510 je 0x10374524 */
  if (C.zf) goto L_10374524;
L_10374512:;
  /* 10374512 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10374514 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10374515 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10374516 je 0x103745a6 */
  if (C.zf) goto L_103745a6;
  /* 1037451c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10374522 jne 0x10374512 */
  if (!C.zf) goto L_10374512;
L_10374524:;
  /* 10374524 mov ebx, ecx */
  EBX = (ECX);
  /* 10374526 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10374529 jne 0x10374597 */
  if (!C.zf) goto L_10374597;
L_1037452b:;
  /* 1037452b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1037452d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1037452e:;
  /* 1037452e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1037452f jne 0x1037452b */
  if (!C.zf) goto L_1037452b;
  /* 10374531 pop ebx */
  EBX = (pop32());
  /* 10374532 pop esi */
  ESI = (pop32());
L_10374533:;
  /* 10374533 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10374537 pop edi */
  EDI = (pop32());
  /* 10374538 ret  */
  ESPCHK(0x103744b0u, _esp0);
  ESP += 4; return;
L_10374539:;
  /* 10374539 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1037453b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1037453e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1037453f je 0x103744f0 */
  if (C.zf) goto L_103744f0;
L_10374541:;
  /* 10374541 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10374546 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10374548 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1037454a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1037454d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1037454f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10374551 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374554 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10374559 je 0x10374539 */
  if (C.zf) goto L_10374539;
  /* 1037455b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1037455d je 0x1037458b */
  if (C.zf) goto L_1037458b;
  /* 1037455f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10374561 je 0x10374581 */
  if (C.zf) goto L_10374581;
  /* 10374563 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10374569 je 0x10374577 */
  if (C.zf) goto L_10374577;
  /* 1037456b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10374571 jne 0x10374539 */
  if (!C.zf) goto L_10374539;
  /* 10374573 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10374575 jmp 0x1037458f */
  goto L_1037458f;
L_10374577:;
  /* 10374577 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1037457d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1037457f jmp 0x1037458f */
  goto L_1037458f;
L_10374581:;
  /* 10374581 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10374587 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10374589 jmp 0x1037458f */
  goto L_1037458f;
L_1037458b:;
  /* 1037458b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1037458d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1037458f:;
  /* 1037458f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374592 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10374594 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10374595 je 0x103745a1 */
  if (C.zf) goto L_103745a1;
L_10374597:;
  /* 10374597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10374599:;
  /* 10374599 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1037459b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1037459e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1037459f jne 0x10374599 */
  if (!C.zf) goto L_10374599;
L_103745a1:;
  /* 103745a1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 103745a4 jne 0x1037452b */
  if (!C.zf) goto L_1037452b;
L_103745a6:;
  /* 103745a6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103745aa pop ebx */
  EBX = (pop32());
  /* 103745ab pop esi */
  ESI = (pop32());
  /* 103745ac pop edi */
  EDI = (pop32());
  /* 103745ad ret  */
  ESPCHK(0x103744b0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x103745b0 (88 bytes, 40 insns) */
void f_103745b0(void) {
  FTRACE(0x103745b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103745b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 103745b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103745b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103745ba je 0x10374603 */
  if (C.zf) goto L_10374603;
  /* 103745bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103745be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 103745c2 push edi */
  push32((uint32_t)(EDI));
  /* 103745c3 mov edi, ecx */
  EDI = (ECX);
  /* 103745c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103745c8 jb 0x103745f7 */
  if (C.cf) goto L_103745f7;
  /* 103745ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103745cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 103745cf je 0x103745d9 */
  if (C.zf) goto L_103745d9;
  /* 103745d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_103745d3:;
  /* 103745d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103745d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103745d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103745d7 jne 0x103745d3 */
  if (!C.zf) goto L_103745d3;
L_103745d9:;
  /* 103745d9 mov ecx, eax */
  ECX = (EAX);
  /* 103745db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 103745de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103745e0 mov ecx, eax */
  ECX = (EAX);
  /* 103745e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 103745e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103745e7 mov ecx, edx */
  ECX = (EDX);
  /* 103745e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103745ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103745ef je 0x103745f7 */
  if (C.zf) goto L_103745f7;
  /* 103745f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103745f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103745f5 je 0x103745fd */
  if (C.zf) goto L_103745fd;
L_103745f7:;
  /* 103745f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103745f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103745fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 103745fb jne 0x103745f7 */
  if (!C.zf) goto L_103745f7;
L_103745fd:;
  /* 103745fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10374601 pop edi */
  EDI = (pop32());
  /* 10374602 ret  */
  ESPCHK(0x103745b0u, _esp0);
  ESP += 4; return;
L_10374603:;
  /* 10374603 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10374607 ret  */
  ESPCHK(0x103745b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004608 @ 0x10374608 (27 bytes, 13 insns) */
void f_10374608(void) {
  FTRACE(0x10374608u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374608 mov eax, dword ptr [0x10376860] */
  EAX = (r32((uint32_t)(0x10376860)));
  /* 1037460d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037460f je 0x10374620 */
  if (C.zf) goto L_10374620;
  /* 10374611 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10374615 call eax */
  call_ind((uint32_t)(EAX), 0x10374617u);
  /* 10374617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10374619 pop ecx */
  ECX = (pop32());
  /* 1037461a je 0x10374620 */
  if (C.zf) goto L_10374620;
  /* 1037461c push 1 */
  push32((uint32_t)(0x1u));
  /* 1037461e pop eax */
  EAX = (pop32());
  /* 1037461f ret  */
  ESPCHK(0x10374608u, _esp0);
  ESP += 4; return;
L_10374620:;
  /* 10374620 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10374622 ret  */
  ESPCHK(0x10374608u, _esp0);
  ESP += 4; return;
}

/* FUN_10004623 @ 0x10374623 (511 bytes, 193 insns) */
void f_10374623(void) {
  FTRACE(0x10374623u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374623 push ebp */
  push32((uint32_t)(EBP));
  /* 10374624 mov ebp, esp */
  EBP = (ESP);
  /* 10374626 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10374628 push 0x10375490 */
  push32((uint32_t)(0x10375490u));
  /* 1037462d push 0x10374df0 */
  push32((uint32_t)(0x10374df0u));
  /* 10374632 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10374638 push eax */
  push32((uint32_t)(EAX));
  /* 10374639 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10374640 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374643 push ebx */
  push32((uint32_t)(EBX));
  /* 10374644 push esi */
  push32((uint32_t)(ESI));
  /* 10374645 push edi */
  push32((uint32_t)(EDI));
  /* 10374646 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10374649 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1037464b cmp dword ptr [0x10376888], edi */
  { uint32_t _a=(r32((uint32_t)(0x10376888))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374651 jne 0x10374699 */
  if (!C.zf) goto L_10374699;
  /* 10374653 push edi */
  push32((uint32_t)(EDI));
  /* 10374654 push edi */
  push32((uint32_t)(EDI));
  /* 10374655 push 1 */
  push32((uint32_t)(0x1u));
  /* 10374657 pop ebx */
  EBX = (pop32());
  /* 10374658 push ebx */
  push32((uint32_t)(EBX));
  /* 10374659 push 0x10375488 */
  push32((uint32_t)(0x10375488u));
  /* 1037465e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10374663 push esi */
  push32((uint32_t)(ESI));
  /* 10374664 push edi */
  push32((uint32_t)(EDI));
  /* 10374665 call dword ptr [0x10375010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375010))), 0x1037466bu);
  /* 1037466b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1037466d je 0x10374677 */
  if (C.zf) goto L_10374677;
  /* 1037466f mov dword ptr [0x10376888], ebx */
  w32((uint32_t)(0x10376888), (EBX));
  /* 10374675 jmp 0x10374699 */
  goto L_10374699;
L_10374677:;
  /* 10374677 push edi */
  push32((uint32_t)(EDI));
  /* 10374678 push edi */
  push32((uint32_t)(EDI));
  /* 10374679 push ebx */
  push32((uint32_t)(EBX));
  /* 1037467a push 0x10375484 */
  push32((uint32_t)(0x10375484u));
  /* 1037467f push esi */
  push32((uint32_t)(ESI));
  /* 10374680 push edi */
  push32((uint32_t)(EDI));
  /* 10374681 call dword ptr [0x10375014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375014))), 0x10374687u);
  /* 10374687 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10374689 je 0x103747b1 */
  if (C.zf) goto L_103747b1;
  /* 1037468f mov dword ptr [0x10376888], 2 */
  w32((uint32_t)(0x10376888), (0x2u));
L_10374699:;
  /* 10374699 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037469c jle 0x103746ae */
  if ((C.zf||C.sf!=C.of)) goto L_103746ae;
  /* 1037469e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 103746a1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103746a4 call 0x10374847 */
  push32(0x103746a9u); f_10374847();
  /* 103746a9 pop ecx */
  ECX = (pop32());
  /* 103746aa pop ecx */
  ECX = (pop32());
  /* 103746ab mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_103746ae:;
  /* 103746ae mov eax, dword ptr [0x10376888] */
  EAX = (r32((uint32_t)(0x10376888)));
  /* 103746b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103746b6 jne 0x103746d5 */
  if (!C.zf) goto L_103746d5;
  /* 103746b8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 103746bb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 103746be push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 103746c1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103746c4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103746c7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103746ca call dword ptr [0x10375014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375014))), 0x103746d0u);
  /* 103746d0 jmp 0x103747b3 */
  goto L_103747b3;
L_103746d5:;
  /* 103746d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103746d8 jne 0x103747b1 */
  if (!C.zf) goto L_103747b1;
  /* 103746de cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103746e1 jne 0x103746eb */
  if (!C.zf) goto L_103746eb;
  /* 103746e3 mov eax, dword ptr [0x10376880] */
  EAX = (r32((uint32_t)(0x10376880)));
  /* 103746e8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_103746eb:;
  /* 103746eb push edi */
  push32((uint32_t)(EDI));
  /* 103746ec push edi */
  push32((uint32_t)(EDI));
  /* 103746ed push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 103746f0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103746f3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 103746f6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103746f8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103746fa and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103746fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103746fe push eax */
  push32((uint32_t)(EAX));
  /* 103746ff push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10374702 call dword ptr [0x10375024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375024))), 0x10374708u);
  /* 10374708 mov ebx, eax */
  EBX = (EAX);
  /* 1037470a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1037470d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037470f je 0x103747b1 */
  if (C.zf) goto L_103747b1;
  /* 10374715 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10374718 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1037471b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1037471e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10374720 call 0x10374ed0 */
  push32(0x10374725u); f_10374ed0();
  /* 10374725 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10374728 mov eax, esp */
  EAX = (ESP);
  /* 1037472a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1037472d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10374731 jmp 0x10374746 */
  goto L_10374746;
  /* 10374733 push 1 */
  push32((uint32_t)(0x1u));
  /* 10374735 pop eax */
  EAX = (pop32());
  /* 10374736 ret  */
  ESPCHK(0x10374623u, _esp0);
  ESP += 4; return;
  /* 10374737 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1037473a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1037473c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1037473f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10374743 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10374746:;
  /* 10374746 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374749 je 0x103747b1 */
  if (C.zf) goto L_103747b1;
  /* 1037474b push ebx */
  push32((uint32_t)(EBX));
  /* 1037474c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1037474f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10374752 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10374755 push 1 */
  push32((uint32_t)(0x1u));
  /* 10374757 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1037475a call dword ptr [0x10375024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375024))), 0x10374760u);
  /* 10374760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10374762 je 0x103747b1 */
  if (C.zf) goto L_103747b1;
  /* 10374764 push edi */
  push32((uint32_t)(EDI));
  /* 10374765 push edi */
  push32((uint32_t)(EDI));
  /* 10374766 push ebx */
  push32((uint32_t)(EBX));
  /* 10374767 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1037476a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1037476d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10374770 call dword ptr [0x10375010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375010))), 0x10374776u);
  /* 10374776 mov esi, eax */
  ESI = (EAX);
  /* 10374778 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1037477b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037477d je 0x103747b1 */
  if (C.zf) goto L_103747b1;
  /* 1037477f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10374783 je 0x103747c5 */
  if (C.zf) goto L_103747c5;
  /* 10374785 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374788 je 0x10374840 */
  if (C.zf) goto L_10374840;
  /* 1037478e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374791 jg 0x103747b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_103747b1;
  /* 10374793 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10374796 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10374799 push ebx */
  push32((uint32_t)(EBX));
  /* 1037479a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1037479d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103747a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103747a3 call dword ptr [0x10375010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375010))), 0x103747a9u);
  /* 103747a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103747ab jne 0x10374840 */
  if (!C.zf) goto L_10374840;
L_103747b1:;
  /* 103747b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103747b3:;
  /* 103747b3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 103747b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103747b9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103747c0 pop edi */
  EDI = (pop32());
  /* 103747c1 pop esi */
  ESI = (pop32());
  /* 103747c2 pop ebx */
  EBX = (pop32());
  /* 103747c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103747c4 ret  */
  ESPCHK(0x10374623u, _esp0);
  ESP += 4; return;
L_103747c5:;
  /* 103747c5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 103747cc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 103747cf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103747d2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103747d4 call 0x10374ed0 */
  push32(0x103747d9u); f_10374ed0();
  /* 103747d9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103747dc mov ebx, esp */
  EBX = (ESP);
  /* 103747de mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 103747e1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103747e5 jmp 0x103747f9 */
  goto L_103747f9;
  /* 103747e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103747e9 pop eax */
  EAX = (pop32());
  /* 103747ea ret  */
  ESPCHK(0x10374623u, _esp0);
  ESP += 4; return;
  /* 103747eb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103747ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103747f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103747f2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103747f6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_103747f9:;
  /* 103747f9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103747fb je 0x103747b1 */
  if (C.zf) goto L_103747b1;
  /* 103747fd push esi */
  push32((uint32_t)(ESI));
  /* 103747fe push ebx */
  push32((uint32_t)(EBX));
  /* 103747ff push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10374802 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10374805 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10374808 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1037480b call dword ptr [0x10375010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375010))), 0x10374811u);
  /* 10374811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10374813 je 0x103747b1 */
  if (C.zf) goto L_103747b1;
  /* 10374815 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374818 push edi */
  push32((uint32_t)(EDI));
  /* 10374819 push edi */
  push32((uint32_t)(EDI));
  /* 1037481a jne 0x10374820 */
  if (!C.zf) goto L_10374820;
  /* 1037481c push edi */
  push32((uint32_t)(EDI));
  /* 1037481d push edi */
  push32((uint32_t)(EDI));
  /* 1037481e jmp 0x10374826 */
  goto L_10374826;
L_10374820:;
  /* 10374820 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10374823 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10374826:;
  /* 10374826 push esi */
  push32((uint32_t)(ESI));
  /* 10374827 push ebx */
  push32((uint32_t)(EBX));
  /* 10374828 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1037482d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10374830 call dword ptr [0x10375064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375064))), 0x10374836u);
  /* 10374836 mov esi, eax */
  ESI = (EAX);
  /* 10374838 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037483a je 0x103747b1 */
  if (C.zf) goto L_103747b1;
L_10374840:;
  /* 10374840 mov eax, esi */
  EAX = (ESI);
  /* 10374842 jmp 0x103747b3 */
  goto L_103747b3;
}

/* FUN_10004847 @ 0x10374847 (43 bytes, 20 insns) */
void f_10374847(void) {
  FTRACE(0x10374847u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374847 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1037484b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1037484f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10374851 push esi */
  push32((uint32_t)(ESI));
  /* 10374852 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10374855 je 0x10374864 */
  if (C.zf) goto L_10374864;
L_10374857:;
  /* 10374857 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1037485a je 0x10374864 */
  if (C.zf) goto L_10374864;
  /* 1037485c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1037485d mov esi, ecx */
  ESI = (ECX);
  /* 1037485f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10374860 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10374862 jne 0x10374857 */
  if (!C.zf) goto L_10374857;
L_10374864:;
  /* 10374864 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10374867 pop esi */
  ESI = (pop32());
  /* 10374868 jne 0x1037486f */
  if (!C.zf) goto L_1037486f;
  /* 1037486a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1037486e ret  */
  ESPCHK(0x10374847u, _esp0);
  ESP += 4; return;
L_1037486f:;
  /* 1037486f mov eax, edx */
  EAX = (EDX);
  /* 10374871 ret  */
  ESPCHK(0x10374847u, _esp0);
  ESP += 4; return;
}

/* FUN_10004872 @ 0x10374872 (318 bytes, 123 insns) */
void f_10374872(void) {
  FTRACE(0x10374872u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374872 push ebp */
  push32((uint32_t)(EBP));
  /* 10374873 mov ebp, esp */
  EBP = (ESP);
  /* 10374875 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10374877 push 0x103754a8 */
  push32((uint32_t)(0x103754a8u));
  /* 1037487c push 0x10374df0 */
  push32((uint32_t)(0x10374df0u));
  /* 10374881 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10374887 push eax */
  push32((uint32_t)(EAX));
  /* 10374888 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1037488f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374892 push ebx */
  push32((uint32_t)(EBX));
  /* 10374893 push esi */
  push32((uint32_t)(ESI));
  /* 10374894 push edi */
  push32((uint32_t)(EDI));
  /* 10374895 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10374898 mov eax, dword ptr [0x1037688c] */
  EAX = (r32((uint32_t)(0x1037688c)));
  /* 1037489d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1037489f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103748a1 jne 0x103748e1 */
  if (!C.zf) goto L_103748e1;
  /* 103748a3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 103748a6 push eax */
  push32((uint32_t)(EAX));
  /* 103748a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103748a9 pop esi */
  ESI = (pop32());
  /* 103748aa push esi */
  push32((uint32_t)(ESI));
  /* 103748ab push 0x10375488 */
  push32((uint32_t)(0x10375488u));
  /* 103748b0 push esi */
  push32((uint32_t)(ESI));
  /* 103748b1 call dword ptr [0x1037500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037500c))), 0x103748b7u);
  /* 103748b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103748b9 je 0x103748bf */
  if (C.zf) goto L_103748bf;
  /* 103748bb mov eax, esi */
  EAX = (ESI);
  /* 103748bd jmp 0x103748dc */
  goto L_103748dc;
L_103748bf:;
  /* 103748bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 103748c2 push eax */
  push32((uint32_t)(EAX));
  /* 103748c3 push esi */
  push32((uint32_t)(ESI));
  /* 103748c4 push 0x10375484 */
  push32((uint32_t)(0x10375484u));
  /* 103748c9 push esi */
  push32((uint32_t)(ESI));
  /* 103748ca push ebx */
  push32((uint32_t)(EBX));
  /* 103748cb call dword ptr [0x10375018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375018))), 0x103748d1u);
  /* 103748d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103748d3 je 0x103749a7 */
  if (C.zf) goto L_103749a7;
  /* 103748d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 103748db pop eax */
  EAX = (pop32());
L_103748dc:;
  /* 103748dc mov dword ptr [0x1037688c], eax */
  w32((uint32_t)(0x1037688c), (EAX));
L_103748e1:;
  /* 103748e1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103748e4 jne 0x1037490a */
  if (!C.zf) goto L_1037490a;
  /* 103748e6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 103748e9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103748eb jne 0x103748f2 */
  if (!C.zf) goto L_103748f2;
  /* 103748ed mov eax, dword ptr [0x10376870] */
  EAX = (r32((uint32_t)(0x10376870)));
L_103748f2:;
  /* 103748f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 103748f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103748f8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103748fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 103748fe push eax */
  push32((uint32_t)(EAX));
  /* 103748ff call dword ptr [0x10375018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375018))), 0x10374905u);
  /* 10374905 jmp 0x103749a9 */
  goto L_103749a9;
L_1037490a:;
  /* 1037490a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037490d jne 0x103749a7 */
  if (!C.zf) goto L_103749a7;
  /* 10374913 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374916 jne 0x10374920 */
  if (!C.zf) goto L_10374920;
  /* 10374918 mov eax, dword ptr [0x10376880] */
  EAX = (r32((uint32_t)(0x10376880)));
  /* 1037491d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10374920:;
  /* 10374920 push ebx */
  push32((uint32_t)(EBX));
  /* 10374921 push ebx */
  push32((uint32_t)(EBX));
  /* 10374922 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10374925 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10374928 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1037492b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1037492d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1037492f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10374932 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10374933 push eax */
  push32((uint32_t)(EAX));
  /* 10374934 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10374937 call dword ptr [0x10375024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375024))), 0x1037493du);
  /* 1037493d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10374940 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374942 je 0x103749a7 */
  if (C.zf) goto L_103749a7;
  /* 10374944 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10374947 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1037494a mov eax, edi */
  EAX = (EDI);
  /* 1037494c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1037494f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10374951 call 0x10374ed0 */
  push32(0x10374956u); f_10374ed0();
  /* 10374956 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10374959 mov esi, esp */
  ESI = (ESP);
  /* 1037495b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1037495e push edi */
  push32((uint32_t)(EDI));
  /* 1037495f push ebx */
  push32((uint32_t)(EBX));
  /* 10374960 push esi */
  push32((uint32_t)(ESI));
  /* 10374961 call 0x103745b0 */
  push32(0x10374966u); f_103745b0();
  /* 10374966 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10374969 jmp 0x10374976 */
  goto L_10374976;
  /* 1037496b push 1 */
  push32((uint32_t)(0x1u));
  /* 1037496d pop eax */
  EAX = (pop32());
  /* 1037496e ret  */
  ESPCHK(0x10374872u, _esp0);
  ESP += 4; return;
  /* 1037496f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10374972 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10374974 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10374976:;
  /* 10374976 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1037497a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1037497c je 0x103749a7 */
  if (C.zf) goto L_103749a7;
  /* 1037497e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10374981 push esi */
  push32((uint32_t)(ESI));
  /* 10374982 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10374985 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10374988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1037498a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1037498d call dword ptr [0x10375024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10375024))), 0x10374993u);
  /* 10374993 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374995 je 0x103749a7 */
  if (C.zf) goto L_103749a7;
  /* 10374997 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1037499a push eax */
  push32((uint32_t)(EAX));
  /* 1037499b push esi */
  push32((uint32_t)(ESI));
  /* 1037499c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1037499f call dword ptr [0x1037500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1037500c))), 0x103749a5u);
  /* 103749a5 jmp 0x103749a9 */
  goto L_103749a9;
L_103749a7:;
  /* 103749a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103749a9:;
  /* 103749a9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 103749ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103749af mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 103749b6 pop edi */
  EDI = (pop32());
  /* 103749b7 pop esi */
  ESI = (pop32());
  /* 103749b8 pop ebx */
  EBX = (pop32());
  /* 103749b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103749ba ret  */
  ESPCHK(0x10374872u, _esp0);
  ESP += 4; return;
}

/* FUN_100049c0 @ 0x103749c0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_103749c0(void) {
  FTRACE(0x103749c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103749c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103749c1 mov ebp, esp */
  EBP = (ESP);
  /* 103749c3 push edi */
  push32((uint32_t)(EDI));
  /* 103749c4 push esi */
  push32((uint32_t)(ESI));
  /* 103749c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 103749c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103749cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 103749ce mov eax, ecx */
  EAX = (ECX);
  /* 103749d0 mov edx, ecx */
  EDX = (ECX);
  /* 103749d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103749d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103749d6 jbe 0x103749e0 */
  if ((C.cf||C.zf)) goto L_103749e0;
  /* 103749d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103749da jb 0x10374b58 */
  if (C.cf) goto L_10374b58;
L_103749e0:;
  /* 103749e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103749e6 jne 0x103749fc */
  if (!C.zf) goto L_103749fc;
  /* 103749e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103749eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103749ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103749f1 jb 0x10374a1c */
  if (C.cf) goto L_10374a1c;
  /* 103749f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103749f5 jmp dword ptr [edx*4 + 0x10374b08] */
  switch (EDX) {
    case 0: goto L_10374b18;
    case 1: goto L_10374b20;
    case 2: goto L_10374b2c;
    case 3: goto L_10374b40;
    default: x86_unimpl("switch@0x103749f5 out of table"); return;
  }
L_103749fc:;
  /* 103749fc mov eax, edi */
  EAX = (EDI);
  /* 103749fe mov edx, 3 */
  EDX = (0x3u);
  /* 10374a03 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374a06 jb 0x10374a14 */
  if (C.cf) goto L_10374a14;
  /* 10374a08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10374a0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10374a0d jmp dword ptr [eax*4 + 0x10374a20] */
  switch (EAX) {
    case 1: goto L_10374a30;
    case 2: goto L_10374a5c;
    case 3: goto L_10374a80;
    default: x86_unimpl("switch@0x10374a0d out of table"); return;
  }
L_10374a14:;
  /* 10374a14 jmp dword ptr [ecx*4 + 0x10374b18] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10374b18)))); return;
  /* 10374a1b nop  */
  /* nop */
L_10374a1c:;
  /* 10374a1c jmp dword ptr [ecx*4 + 0x10374a9c] */
  switch (ECX) {
    case 0: goto L_10374aff;
    case 1: goto L_10374aec;
    case 2: goto L_10374ae4;
    case 3: goto L_10374adc;
    case 4: goto L_10374ad4;
    case 5: goto L_10374acc;
    case 6: goto L_10374ac4;
    case 7: goto L_10374abc;
    default: x86_unimpl("switch@0x10374a1c out of table"); return;
  }
  /* 10374a23 nop  */
  /* nop */
L_10374a30:;
  /* 10374a30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10374a32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10374a34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10374a36 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10374a39 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10374a3c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10374a3f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10374a42 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10374a45 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374a48 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374a4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374a4e jb 0x10374a1c */
  if (C.cf) goto L_10374a1c;
  /* 10374a50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10374a52 jmp dword ptr [edx*4 + 0x10374b08] */
  switch (EDX) {
    case 0: goto L_10374b18;
    case 1: goto L_10374b20;
    case 2: goto L_10374b2c;
    case 3: goto L_10374b40;
    default: x86_unimpl("switch@0x10374a52 out of table"); return;
  }
  /* 10374a59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10374a5c:;
  /* 10374a5c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10374a5e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10374a60 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10374a62 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10374a65 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10374a68 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10374a6b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374a6e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374a71 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374a74 jb 0x10374a1c */
  if (C.cf) goto L_10374a1c;
  /* 10374a76 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10374a78 jmp dword ptr [edx*4 + 0x10374b08] */
  switch (EDX) {
    case 0: goto L_10374b18;
    case 1: goto L_10374b20;
    case 2: goto L_10374b2c;
    case 3: goto L_10374b40;
    default: x86_unimpl("switch@0x10374a78 out of table"); return;
  }
  /* 10374a7f nop  */
  /* nop */
L_10374a80:;
  /* 10374a80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10374a82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10374a84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10374a86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10374a87 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10374a8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10374a8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374a8e jb 0x10374a1c */
  if (C.cf) goto L_10374a1c;
  /* 10374a90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10374a92 jmp dword ptr [edx*4 + 0x10374b08] */
  switch (EDX) {
    case 0: goto L_10374b18;
    case 1: goto L_10374b20;
    case 2: goto L_10374b2c;
    case 3: goto L_10374b40;
    default: x86_unimpl("switch@0x10374a92 out of table"); return;
  }
  /* 10374a99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10374abc:;
  /* 10374abc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10374ac0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10374ac4:;
  /* 10374ac4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10374ac8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10374acc:;
  /* 10374acc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10374ad0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10374ad4:;
  /* 10374ad4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10374ad8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10374adc:;
  /* 10374adc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10374ae0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10374ae4:;
  /* 10374ae4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10374ae8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10374aec:;
  /* 10374aec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10374af0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10374af4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10374afb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374afd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10374aff:;
  /* 10374aff jmp dword ptr [edx*4 + 0x10374b08] */
  switch (EDX) {
    case 0: goto L_10374b18;
    case 1: goto L_10374b20;
    case 2: goto L_10374b2c;
    case 3: goto L_10374b40;
    default: x86_unimpl("switch@0x10374aff out of table"); return;
  }
  /* 10374b06 mov edi, edi */
  EDI = (EDI);
L_10374b18:;
  /* 10374b18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374b1b pop esi */
  ESI = (pop32());
  /* 10374b1c pop edi */
  EDI = (pop32());
  /* 10374b1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374b1e ret  */
  ESPCHK(0x103749c0u, _esp0);
  ESP += 4; return;
  /* 10374b1f nop  */
  /* nop */
L_10374b20:;
  /* 10374b20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10374b22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10374b24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374b27 pop esi */
  ESI = (pop32());
  /* 10374b28 pop edi */
  EDI = (pop32());
  /* 10374b29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374b2a ret  */
  ESPCHK(0x103749c0u, _esp0);
  ESP += 4; return;
  /* 10374b2b nop  */
  /* nop */
L_10374b2c:;
  /* 10374b2c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10374b2e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10374b30 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10374b33 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10374b36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374b39 pop esi */
  ESI = (pop32());
  /* 10374b3a pop edi */
  EDI = (pop32());
  /* 10374b3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374b3c ret  */
  ESPCHK(0x103749c0u, _esp0);
  ESP += 4; return;
  /* 10374b3d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10374b40:;
  /* 10374b40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10374b42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10374b44 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10374b47 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10374b4a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10374b4d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10374b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374b53 pop esi */
  ESI = (pop32());
  /* 10374b54 pop edi */
  EDI = (pop32());
  /* 10374b55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374b56 ret  */
  ESPCHK(0x103749c0u, _esp0);
  ESP += 4; return;
  /* 10374b57 nop  */
  /* nop */
L_10374b58:;
  /* 10374b58 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10374b5c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10374b60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10374b66 jne 0x10374b8c */
  if (!C.zf) goto L_10374b8c;
  /* 10374b68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10374b6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10374b6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374b71 jb 0x10374b80 */
  if (C.cf) goto L_10374b80;
  /* 10374b73 std  */
  C.df=1;
  /* 10374b74 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10374b76 cld  */
  C.df=0;
  /* 10374b77 jmp dword ptr [edx*4 + 0x10374ca0] */
  switch (EDX) {
    case 0: goto L_10374cb0;
    case 1: goto L_10374cb8;
    case 2: goto L_10374cc8;
    case 3: goto L_10374cdc;
    default: x86_unimpl("switch@0x10374b77 out of table"); return;
  }
  /* 10374b7e mov edi, edi */
  EDI = (EDI);
L_10374b80:;
  /* 10374b80 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10374b82 jmp dword ptr [ecx*4 + 0x10374c50] */
  switch (ECX) {
    case 0: goto L_10374c97;
    default: x86_unimpl("switch@0x10374b82 out of table"); return;
  }
  /* 10374b89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10374b8c:;
  /* 10374b8c mov eax, edi */
  EAX = (EDI);
  /* 10374b8e mov edx, 3 */
  EDX = (0x3u);
  /* 10374b93 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374b96 jb 0x10374ba4 */
  if (C.cf) goto L_10374ba4;
  /* 10374b98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10374b9b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374b9d jmp dword ptr [eax*4 + 0x10374ba8] */
  switch (EAX) {
    case 1: goto L_10374bb8;
    case 2: goto L_10374bd8;
    case 3: goto L_10374c00;
    default: x86_unimpl("switch@0x10374b9d out of table"); return;
  }
L_10374ba4:;
  /* 10374ba4 jmp dword ptr [ecx*4 + 0x10374ca0] */
  switch (ECX) {
    case 0: goto L_10374cb0;
    case 1: goto L_10374cb8;
    case 2: goto L_10374cc8;
    case 3: goto L_10374cdc;
    default: x86_unimpl("switch@0x10374ba4 out of table"); return;
  }
  /* 10374bab nop  */
  /* nop */
L_10374bb8:;
  /* 10374bb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10374bbb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10374bbd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10374bc0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10374bc1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10374bc4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10374bc5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374bc8 jb 0x10374b80 */
  if (C.cf) goto L_10374b80;
  /* 10374bca std  */
  C.df=1;
  /* 10374bcb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10374bcd cld  */
  C.df=0;
  /* 10374bce jmp dword ptr [edx*4 + 0x10374ca0] */
  switch (EDX) {
    case 0: goto L_10374cb0;
    case 1: goto L_10374cb8;
    case 2: goto L_10374cc8;
    case 3: goto L_10374cdc;
    default: x86_unimpl("switch@0x10374bce out of table"); return;
  }
  /* 10374bd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10374bd8:;
  /* 10374bd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10374bdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10374bdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10374be0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10374be3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10374be6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10374be9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374bec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374bef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374bf2 jb 0x10374b80 */
  if (C.cf) goto L_10374b80;
  /* 10374bf4 std  */
  C.df=1;
  /* 10374bf5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10374bf7 cld  */
  C.df=0;
  /* 10374bf8 jmp dword ptr [edx*4 + 0x10374ca0] */
  switch (EDX) {
    case 0: goto L_10374cb0;
    case 1: goto L_10374cb8;
    case 2: goto L_10374cc8;
    case 3: goto L_10374cdc;
    default: x86_unimpl("switch@0x10374bf8 out of table"); return;
  }
  /* 10374bff nop  */
  /* nop */
L_10374c00:;
  /* 10374c00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10374c03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10374c05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10374c08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10374c0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10374c0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10374c11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10374c14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10374c17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374c1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374c1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374c20 jb 0x10374b80 */
  if (C.cf) goto L_10374b80;
  /* 10374c26 std  */
  C.df=1;
  /* 10374c27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10374c29 cld  */
  C.df=0;
  /* 10374c2a jmp dword ptr [edx*4 + 0x10374ca0] */
  switch (EDX) {
    case 0: goto L_10374cb0;
    case 1: goto L_10374cb8;
    case 2: goto L_10374cc8;
    case 3: goto L_10374cdc;
    default: x86_unimpl("switch@0x10374c2a out of table"); return;
  }
  /* 10374c31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10374c34 push esp */
  push32((uint32_t)(ESP));
  /* 10374c35 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 10374c36 aaa  */
  x86_unimpl("aaa @ 0x10374c36");
  /* 10374c37 adc byte ptr [esp + ecx*2 + 0x37], bl */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*2 + 0x37))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*2 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10374c3b adc byte ptr [esp + ecx*2 + 0x37], ah */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*2 + 0x37))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*2 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10374c3f adc byte ptr [esp + ecx*2 + 0x37], ch */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*2 + 0x37))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*2 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10374c43 adc byte ptr [esp + ecx*2 + 0x37], dh */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*2 + 0x37))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*2 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10374c47 adc byte ptr [esp + ecx*2 + 0x37], bh */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*2 + 0x37))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*2 + 0x37), (_r)); fl_add(_a,_b,_r,8); }
  /* 10374c4c test byte ptr [edi + esi + 0x10], cl */
  { uint32_t _r=(r8((uint32_t)(EDI + ESI*1 + 0x10)))&(CL); fl_logic(_r,8); }
  /* 10374c54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10374c58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10374c5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10374c60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10374c64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10374c68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10374c6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10374c70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10374c74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10374c78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10374c7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10374c80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10374c84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10374c88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10374c8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10374c93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10374c95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10374c97:;
  /* 10374c97 jmp dword ptr [edx*4 + 0x10374ca0] */
  switch (EDX) {
    case 0: goto L_10374cb0;
    case 1: goto L_10374cb8;
    case 2: goto L_10374cc8;
    case 3: goto L_10374cdc;
    default: x86_unimpl("switch@0x10374c97 out of table"); return;
  }
  /* 10374c9e mov edi, edi */
  EDI = (EDI);
L_10374cb0:;
  /* 10374cb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374cb3 pop esi */
  ESI = (pop32());
  /* 10374cb4 pop edi */
  EDI = (pop32());
  /* 10374cb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374cb6 ret  */
  ESPCHK(0x103749c0u, _esp0);
  ESP += 4; return;
  /* 10374cb7 nop  */
  /* nop */
L_10374cb8:;
  /* 10374cb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10374cbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10374cbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374cc1 pop esi */
  ESI = (pop32());
  /* 10374cc2 pop edi */
  EDI = (pop32());
  /* 10374cc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374cc4 ret  */
  ESPCHK(0x103749c0u, _esp0);
  ESP += 4; return;
  /* 10374cc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10374cc8:;
  /* 10374cc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10374ccb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10374cce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10374cd1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10374cd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374cd7 pop esi */
  ESI = (pop32());
  /* 10374cd8 pop edi */
  EDI = (pop32());
  /* 10374cd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374cda ret  */
  ESPCHK(0x103749c0u, _esp0);
  ESP += 4; return;
  /* 10374cdb nop  */
  /* nop */
L_10374cdc:;
  /* 10374cdc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10374cdf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10374ce2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10374ce5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10374ce8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10374ceb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10374cee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374cf1 pop esi */
  ESI = (pop32());
  /* 10374cf2 pop edi */
  EDI = (pop32());
  /* 10374cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10374cf4 ret  */
  ESPCHK(0x103749c0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10374cf8 (32 bytes, 18 insns) */
void f_10374cf8(void) {
  FTRACE(0x10374cf8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374cf8 push ebp */
  push32((uint32_t)(EBP));
  /* 10374cf9 mov ebp, esp */
  EBP = (ESP);
  /* 10374cfb push ebx */
  push32((uint32_t)(EBX));
  /* 10374cfc push esi */
  push32((uint32_t)(ESI));
  /* 10374cfd push edi */
  push32((uint32_t)(EDI));
  /* 10374cfe push ebp */
  push32((uint32_t)(EBP));
  /* 10374cff push 0 */
  push32((uint32_t)(0x0u));
  /* 10374d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10374d03 push 0x10374d10 */
  push32((uint32_t)(0x10374d10u));
  /* 10374d08 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10374d0b call 0x10374f00 */
  push32(0x10374d10u); f_10374f00();
  /* 10374d10 pop ebp */
  EBP = (pop32());
  /* 10374d11 pop edi */
  EDI = (pop32());
  /* 10374d12 pop esi */
  ESI = (pop32());
  /* 10374d13 pop ebx */
  EBX = (pop32());
  /* 10374d14 mov esp, ebp */
  ESP = (EBP);
  /* 10374d16 pop ebp */
  EBP = (pop32());
  /* 10374d17 ret  */
  ESPCHK(0x10374cf8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10374d3a (104 bytes, 33 insns) */
void f_10374d3a(void) {
  FTRACE(0x10374d3au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374d3a push ebx */
  push32((uint32_t)(EBX));
  /* 10374d3b push esi */
  push32((uint32_t)(ESI));
  /* 10374d3c push edi */
  push32((uint32_t)(EDI));
  /* 10374d3d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10374d41 push eax */
  push32((uint32_t)(EAX));
  /* 10374d42 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10374d44 push 0x10374d18 */
  push32((uint32_t)(0x10374d18u));
  /* 10374d49 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10374d50 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10374d57:;
  /* 10374d57 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10374d5b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10374d5e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10374d61 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374d64 je 0x10374d94 */
  if (C.zf) goto L_10374d94;
  /* 10374d66 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374d6a je 0x10374d94 */
  if (C.zf) goto L_10374d94;
  /* 10374d6c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10374d6f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10374d72 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10374d76 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10374d79 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374d7e jne 0x10374d92 */
  if (!C.zf) goto L_10374d92;
  /* 10374d80 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10374d85 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10374d89 call 0x10374dce */
  push32(0x10374d8eu); f_10374dce();
  /* 10374d8e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10374d92u);
L_10374d92:;
  /* 10374d92 jmp 0x10374d57 */
  goto L_10374d57;
L_10374d94:;
  /* 10374d94 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10374d9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10374d9e pop edi */
  EDI = (pop32());
  /* 10374d9f pop esi */
  ESI = (pop32());
  /* 10374da0 pop ebx */
  EBX = (pop32());
  /* 10374da1 ret  */
  ESPCHK(0x10374d3au, _esp0);
  ESP += 4; return;
}

/* FUN_10004dce @ 0x10374dce (24 bytes, 10 insns) */
void f_10374dce(void) {
  FTRACE(0x10374dceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374dce push ebx */
  push32((uint32_t)(EBX));
  /* 10374dcf push ecx */
  push32((uint32_t)(ECX));
  /* 10374dd0 mov ebx, 0x10376490 */
  EBX = (0x10376490u);
  /* 10374dd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10374dd8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10374ddb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10374dde mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10374de1 pop ecx */
  ECX = (pop32());
  /* 10374de2 pop ebx */
  EBX = (pop32());
  /* 10374de3 ret 4 */
  ESPCHK(0x10374dceu, _esp0);
  ESP += 8; return;
}

/* FUN_10004ead @ 0x10374ead (27 bytes, 11 insns) */
void f_10374ead(void) {
  FTRACE(0x10374eadu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374ead push ebp */
  push32((uint32_t)(EBP));
  /* 10374eae mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10374eb2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10374eb4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10374eb7 push eax */
  push32((uint32_t)(EAX));
  /* 10374eb8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10374ebb push eax */
  push32((uint32_t)(EAX));
  /* 10374ebc call 0x10374d3a */
  push32(0x10374ec1u); f_10374d3a();
  /* 10374ec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10374ec4 pop ebp */
  EBP = (pop32());
  /* 10374ec5 ret 4 */
  ESPCHK(0x10374eadu, _esp0);
  ESP += 8; return;
}

/* FUN_10004ed0 @ 0x10374ed0 (47 bytes, 17 insns) */
void f_10374ed0(void) {
  FTRACE(0x10374ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 10374ed1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374ed6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10374eda jb 0x10374ef0 */
  if (C.cf) goto L_10374ef0;
L_10374edc:;
  /* 10374edc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374ee2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374ee7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10374ee9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10374eee jae 0x10374edc */
  if (!C.cf) goto L_10374edc;
L_10374ef0:;
  /* 10374ef0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10374ef2 mov eax, esp */
  EAX = (ESP);
  /* 10374ef4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10374ef6 mov esp, ecx */
  ESP = (ECX);
  /* 10374ef8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10374efa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10374efd push eax */
  push32((uint32_t)(EAX));
  /* 10374efe ret  */
  ESPCHK(0x10374ed0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10374f00 (6 bytes, 1 insns) */
void f_10374f00(void) {
  FTRACE(0x10374f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10374f00 jmp dword ptr [0x10375008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10375008)))); return;
}

