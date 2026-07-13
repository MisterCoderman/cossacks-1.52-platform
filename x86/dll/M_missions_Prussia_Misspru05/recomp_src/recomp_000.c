#include "recomp.h"

/* OnInit @ 0x10971000 (767 bytes, 201 insns) */
void f_10971000(void) {
  FTRACE(0x10971000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10971000 push esi */
  push32((uint32_t)(ESI));
  /* 10971001 mov esi, dword ptr [0x10975128] */
  ESI = (r32((uint32_t)(0x10975128)));
  /* 10971007 push 0x1097623c */
  push32((uint32_t)(0x1097623cu));
  /* 1097100c push 0x10976648 */
  push32((uint32_t)(0x10976648u));
  /* 10971011 call esi */
  call_ind((uint32_t)(ESI), 0x10971013u);
  /* 10971013 push 0x10976230 */
  push32((uint32_t)(0x10976230u));
  /* 10971018 push 0x109766a8 */
  push32((uint32_t)(0x109766a8u));
  /* 1097101d call esi */
  call_ind((uint32_t)(ESI), 0x1097101fu);
  /* 1097101f push 0x10976224 */
  push32((uint32_t)(0x10976224u));
  /* 10971024 push 0x109766a0 */
  push32((uint32_t)(0x109766a0u));
  /* 10971029 call esi */
  call_ind((uint32_t)(ESI), 0x1097102bu);
  /* 1097102b push 0x10976218 */
  push32((uint32_t)(0x10976218u));
  /* 10971030 push 0x10976698 */
  push32((uint32_t)(0x10976698u));
  /* 10971035 call esi */
  call_ind((uint32_t)(ESI), 0x10971037u);
  /* 10971037 push 0x1097620c */
  push32((uint32_t)(0x1097620cu));
  /* 1097103c push 0x10976690 */
  push32((uint32_t)(0x10976690u));
  /* 10971041 call esi */
  call_ind((uint32_t)(ESI), 0x10971043u);
  /* 10971043 push 0x10976200 */
  push32((uint32_t)(0x10976200u));
  /* 10971048 push 0x10976688 */
  push32((uint32_t)(0x10976688u));
  /* 1097104d call esi */
  call_ind((uint32_t)(ESI), 0x1097104fu);
  /* 1097104f push 0x109761f8 */
  push32((uint32_t)(0x109761f8u));
  /* 10971054 push 0x10976708 */
  push32((uint32_t)(0x10976708u));
  /* 10971059 call esi */
  call_ind((uint32_t)(ESI), 0x1097105bu);
  /* 1097105b push 0x109761f0 */
  push32((uint32_t)(0x109761f0u));
  /* 10971060 push 0x10976700 */
  push32((uint32_t)(0x10976700u));
  /* 10971065 call esi */
  call_ind((uint32_t)(ESI), 0x10971067u);
  /* 10971067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097106a push 0x109761e4 */
  push32((uint32_t)(0x109761e4u));
  /* 1097106f push 0x109766f8 */
  push32((uint32_t)(0x109766f8u));
  /* 10971074 call esi */
  call_ind((uint32_t)(ESI), 0x10971076u);
  /* 10971076 push 0x109761dc */
  push32((uint32_t)(0x109761dcu));
  /* 1097107b push 0x109766f0 */
  push32((uint32_t)(0x109766f0u));
  /* 10971080 call esi */
  call_ind((uint32_t)(ESI), 0x10971082u);
  /* 10971082 push 0x109761d4 */
  push32((uint32_t)(0x109761d4u));
  /* 10971087 push 0x109766e8 */
  push32((uint32_t)(0x109766e8u));
  /* 1097108c call esi */
  call_ind((uint32_t)(ESI), 0x1097108eu);
  /* 1097108e push 0x109761c8 */
  push32((uint32_t)(0x109761c8u));
  /* 10971093 push 0x10976640 */
  push32((uint32_t)(0x10976640u));
  /* 10971098 call esi */
  call_ind((uint32_t)(ESI), 0x1097109au);
  /* 1097109a push 0x109761c0 */
  push32((uint32_t)(0x109761c0u));
  /* 1097109f push 0x10976638 */
  push32((uint32_t)(0x10976638u));
  /* 109710a4 call esi */
  call_ind((uint32_t)(ESI), 0x109710a6u);
  /* 109710a6 push 0x109761b8 */
  push32((uint32_t)(0x109761b8u));
  /* 109710ab push 0x10976788 */
  push32((uint32_t)(0x10976788u));
  /* 109710b0 call esi */
  call_ind((uint32_t)(ESI), 0x109710b2u);
  /* 109710b2 push 0x109761b0 */
  push32((uint32_t)(0x109761b0u));
  /* 109710b7 push 0x10976770 */
  push32((uint32_t)(0x10976770u));
  /* 109710bc call esi */
  call_ind((uint32_t)(ESI), 0x109710beu);
  /* 109710be push 0x109761a4 */
  push32((uint32_t)(0x109761a4u));
  /* 109710c3 push 0x10976710 */
  push32((uint32_t)(0x10976710u));
  /* 109710c8 call esi */
  call_ind((uint32_t)(ESI), 0x109710cau);
  /* 109710ca mov esi, dword ptr [0x1097512c] */
  ESI = (r32((uint32_t)(0x1097512c)));
  /* 109710d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109710d3 push 0x1097619c */
  push32((uint32_t)(0x1097619cu));
  /* 109710d8 push 0x10976750 */
  push32((uint32_t)(0x10976750u));
  /* 109710dd call esi */
  call_ind((uint32_t)(ESI), 0x109710dfu);
  /* 109710df push 0x10976190 */
  push32((uint32_t)(0x10976190u));
  /* 109710e4 push 0x10976650 */
  push32((uint32_t)(0x10976650u));
  /* 109710e9 call esi */
  call_ind((uint32_t)(ESI), 0x109710ebu);
  /* 109710eb push 0x10976188 */
  push32((uint32_t)(0x10976188u));
  /* 109710f0 push 0x10976758 */
  push32((uint32_t)(0x10976758u));
  /* 109710f5 call esi */
  call_ind((uint32_t)(ESI), 0x109710f7u);
  /* 109710f7 push 0x1097617c */
  push32((uint32_t)(0x1097617cu));
  /* 109710fc push 0x10976658 */
  push32((uint32_t)(0x10976658u));
  /* 10971101 call esi */
  call_ind((uint32_t)(ESI), 0x10971103u);
  /* 10971103 push 0x10976174 */
  push32((uint32_t)(0x10976174u));
  /* 10971108 push 0x10976760 */
  push32((uint32_t)(0x10976760u));
  /* 1097110d call esi */
  call_ind((uint32_t)(ESI), 0x1097110fu);
  /* 1097110f push 0x10976168 */
  push32((uint32_t)(0x10976168u));
  /* 10971114 push 0x10976668 */
  push32((uint32_t)(0x10976668u));
  /* 10971119 call esi */
  call_ind((uint32_t)(ESI), 0x1097111bu);
  /* 1097111b push 0x10976160 */
  push32((uint32_t)(0x10976160u));
  /* 10971120 push 0x10976768 */
  push32((uint32_t)(0x10976768u));
  /* 10971125 call esi */
  call_ind((uint32_t)(ESI), 0x10971127u);
  /* 10971127 push 0x10976154 */
  push32((uint32_t)(0x10976154u));
  /* 1097112c push 0x10976670 */
  push32((uint32_t)(0x10976670u));
  /* 10971131 call esi */
  call_ind((uint32_t)(ESI), 0x10971133u);
  /* 10971133 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971136 push 0x1097614c */
  push32((uint32_t)(0x1097614cu));
  /* 1097113b push 0x10976778 */
  push32((uint32_t)(0x10976778u));
  /* 10971140 call esi */
  call_ind((uint32_t)(ESI), 0x10971142u);
  /* 10971142 push 0x10976144 */
  push32((uint32_t)(0x10976144u));
  /* 10971147 push 0x10976780 */
  push32((uint32_t)(0x10976780u));
  /* 1097114c call esi */
  call_ind((uint32_t)(ESI), 0x1097114eu);
  /* 1097114e push 0x10976138 */
  push32((uint32_t)(0x10976138u));
  /* 10971153 push 0x10976678 */
  push32((uint32_t)(0x10976678u));
  /* 10971158 call esi */
  call_ind((uint32_t)(ESI), 0x1097115au);
  /* 1097115a push 0x10976130 */
  push32((uint32_t)(0x10976130u));
  /* 1097115f push 0x109766b0 */
  push32((uint32_t)(0x109766b0u));
  /* 10971164 call esi */
  call_ind((uint32_t)(ESI), 0x10971166u);
  /* 10971166 push 0x10976128 */
  push32((uint32_t)(0x10976128u));
  /* 1097116b push 0x109766c8 */
  push32((uint32_t)(0x109766c8u));
  /* 10971170 call esi */
  call_ind((uint32_t)(ESI), 0x10971172u);
  /* 10971172 push 0x10976120 */
  push32((uint32_t)(0x10976120u));
  /* 10971177 push 0x109766d0 */
  push32((uint32_t)(0x109766d0u));
  /* 1097117c call esi */
  call_ind((uint32_t)(ESI), 0x1097117eu);
  /* 1097117e push 0x10976118 */
  push32((uint32_t)(0x10976118u));
  /* 10971183 push 0x109766b8 */
  push32((uint32_t)(0x109766b8u));
  /* 10971188 call esi */
  call_ind((uint32_t)(ESI), 0x1097118au);
  /* 1097118a push 0x10976110 */
  push32((uint32_t)(0x10976110u));
  /* 1097118f push 0x109766c0 */
  push32((uint32_t)(0x109766c0u));
  /* 10971194 call esi */
  call_ind((uint32_t)(ESI), 0x10971196u);
  /* 10971196 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971199 push 0x10976108 */
  push32((uint32_t)(0x10976108u));
  /* 1097119e push 0x109766d8 */
  push32((uint32_t)(0x109766d8u));
  /* 109711a3 call esi */
  call_ind((uint32_t)(ESI), 0x109711a5u);
  /* 109711a5 push 0x10976100 */
  push32((uint32_t)(0x10976100u));
  /* 109711aa push 0x10976728 */
  push32((uint32_t)(0x10976728u));
  /* 109711af call esi */
  call_ind((uint32_t)(ESI), 0x109711b1u);
  /* 109711b1 push 0x109760f8 */
  push32((uint32_t)(0x109760f8u));
  /* 109711b6 push 0x10976730 */
  push32((uint32_t)(0x10976730u));
  /* 109711bb call esi */
  call_ind((uint32_t)(ESI), 0x109711bdu);
  /* 109711bd push 0x109760ec */
  push32((uint32_t)(0x109760ecu));
  /* 109711c2 push 0x10976610 */
  push32((uint32_t)(0x10976610u));
  /* 109711c7 call esi */
  call_ind((uint32_t)(ESI), 0x109711c9u);
  /* 109711c9 push 0x109760e0 */
  push32((uint32_t)(0x109760e0u));
  /* 109711ce push 0x10976608 */
  push32((uint32_t)(0x10976608u));
  /* 109711d3 call esi */
  call_ind((uint32_t)(ESI), 0x109711d5u);
  /* 109711d5 push 0x109760d0 */
  push32((uint32_t)(0x109760d0u));
  /* 109711da push 0x10976718 */
  push32((uint32_t)(0x10976718u));
  /* 109711df call esi */
  call_ind((uint32_t)(ESI), 0x109711e1u);
  /* 109711e1 push 0x109760c8 */
  push32((uint32_t)(0x109760c8u));
  /* 109711e6 push 0x10976630 */
  push32((uint32_t)(0x10976630u));
  /* 109711eb call esi */
  call_ind((uint32_t)(ESI), 0x109711edu);
  /* 109711ed push 0x109760bc */
  push32((uint32_t)(0x109760bcu));
  /* 109711f2 push 0x109766e0 */
  push32((uint32_t)(0x109766e0u));
  /* 109711f7 call esi */
  call_ind((uint32_t)(ESI), 0x109711f9u);
  /* 109711f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109711fc push 0x109760b4 */
  push32((uint32_t)(0x109760b4u));
  /* 10971201 push 0x10976628 */
  push32((uint32_t)(0x10976628u));
  /* 10971206 call esi */
  call_ind((uint32_t)(ESI), 0x10971208u);
  /* 10971208 push 0x109760ac */
  push32((uint32_t)(0x109760acu));
  /* 1097120d push 0x10976618 */
  push32((uint32_t)(0x10976618u));
  /* 10971212 call esi */
  call_ind((uint32_t)(ESI), 0x10971214u);
  /* 10971214 push 0x109760a0 */
  push32((uint32_t)(0x109760a0u));
  /* 10971219 push 0x10976748 */
  push32((uint32_t)(0x10976748u));
  /* 1097121e call esi */
  call_ind((uint32_t)(ESI), 0x10971220u);
  /* 10971220 push 0x10976094 */
  push32((uint32_t)(0x10976094u));
  /* 10971225 push 0x10976740 */
  push32((uint32_t)(0x10976740u));
  /* 1097122a call esi */
  call_ind((uint32_t)(ESI), 0x1097122cu);
  /* 1097122c push 0x10976090 */
  push32((uint32_t)(0x10976090u));
  /* 10971231 push 0x10976790 */
  push32((uint32_t)(0x10976790u));
  /* 10971236 call esi */
  call_ind((uint32_t)(ESI), 0x10971238u);
  /* 10971238 push 0x1097608c */
  push32((uint32_t)(0x1097608cu));
  /* 1097123d push 0x10976798 */
  push32((uint32_t)(0x10976798u));
  /* 10971242 call esi */
  call_ind((uint32_t)(ESI), 0x10971244u);
  /* 10971244 push 0x10976088 */
  push32((uint32_t)(0x10976088u));
  /* 10971249 push 0x109767a0 */
  push32((uint32_t)(0x109767a0u));
  /* 1097124e call esi */
  call_ind((uint32_t)(ESI), 0x10971250u);
  /* 10971250 mov esi, dword ptr [0x10975124] */
  ESI = (r32((uint32_t)(0x10975124)));
  /* 10971256 push 0x10976738 */
  push32((uint32_t)(0x10976738u));
  /* 1097125b call esi */
  call_ind((uint32_t)(ESI), 0x1097125du);
  /* 1097125d push 0x10976680 */
  push32((uint32_t)(0x10976680u));
  /* 10971262 call esi */
  call_ind((uint32_t)(ESI), 0x10971264u);
  /* 10971264 mov esi, dword ptr [0x10975134] */
  ESI = (r32((uint32_t)(0x10975134)));
  /* 1097126a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097126d push 0x10976078 */
  push32((uint32_t)(0x10976078u));
  /* 10971272 push 0x10976720 */
  push32((uint32_t)(0x10976720u));
  /* 10971277 call esi */
  call_ind((uint32_t)(ESI), 0x10971279u);
  /* 10971279 push 0x10976068 */
  push32((uint32_t)(0x10976068u));
  /* 1097127e push 0x10976600 */
  push32((uint32_t)(0x10976600u));
  /* 10971283 call esi */
  call_ind((uint32_t)(ESI), 0x10971285u);
  /* 10971285 push 0x10976060 */
  push32((uint32_t)(0x10976060u));
  /* 1097128a push 0x10976660 */
  push32((uint32_t)(0x10976660u));
  /* 1097128f call dword ptr [0x10975138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975138))), 0x10971295u);
  /* 10971295 push 4 */
  push32((uint32_t)(0x4u));
  /* 10971297 push 0x10976620 */
  push32((uint32_t)(0x10976620u));
  /* 1097129c call dword ptr [0x10975130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975130))), 0x109712a2u);
  /* 109712a2 mov esi, dword ptr [0x10975140] */
  ESI = (r32((uint32_t)(0x10975140)));
  /* 109712a8 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 109712aa push 0 */
  push32((uint32_t)(0x0u));
  /* 109712ac call esi */
  call_ind((uint32_t)(ESI), 0x109712aeu);
  /* 109712ae push 0xe */
  push32((uint32_t)(0xeu));
  /* 109712b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109712b2 call esi */
  call_ind((uint32_t)(ESI), 0x109712b4u);
  /* 109712b4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109712b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 109712b8 call esi */
  call_ind((uint32_t)(ESI), 0x109712bau);
  /* 109712ba mov esi, dword ptr [0x10975144] */
  ESI = (r32((uint32_t)(0x10975144)));
  /* 109712c0 push 0x10976054 */
  push32((uint32_t)(0x10976054u));
  /* 109712c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109712c7 call esi */
  call_ind((uint32_t)(ESI), 0x109712c9u);
  /* 109712c9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109712cc push 0x1097604c */
  push32((uint32_t)(0x1097604cu));
  /* 109712d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109712d3 call esi */
  call_ind((uint32_t)(ESI), 0x109712d5u);
  /* 109712d5 push 0x10976040 */
  push32((uint32_t)(0x10976040u));
  /* 109712da push 3 */
  push32((uint32_t)(0x3u));
  /* 109712dc call esi */
  call_ind((uint32_t)(ESI), 0x109712deu);
  /* 109712de push 0x10976038 */
  push32((uint32_t)(0x10976038u));
  /* 109712e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 109712e5 call esi */
  call_ind((uint32_t)(ESI), 0x109712e7u);
  /* 109712e7 push 0x10976030 */
  push32((uint32_t)(0x10976030u));
  /* 109712ec push 5 */
  push32((uint32_t)(0x5u));
  /* 109712ee call esi */
  call_ind((uint32_t)(ESI), 0x109712f0u);
  /* 109712f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109712f2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 109712f4 call dword ptr [0x1097513c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097513c))), 0x109712fau);
  /* 109712fa add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109712fd pop esi */
  ESI = (pop32());
  /* 109712fe ret  */
  ESPCHK(0x10971000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001300 @ 0x10971300 (20 bytes, 6 insns) */
void f_10971300(void) {
  FTRACE(0x10971300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10971300 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10971304 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10971305 jne 0x1097130c */
  if (!C.zf) goto L_1097130c;
  /* 10971307 call 0x10971000 */
  push32(0x1097130cu); f_10971000();
L_1097130c:;
  /* 1097130c mov eax, 1 */
  EAX = (0x1u);
  /* 10971311 ret 0xc */
  ESPCHK(0x10971300u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x10971320 (3265 bytes, 1113 insns) */
void f_10971320(void) {
  FTRACE(0x10971320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10971320 push ebx */
  push32((uint32_t)(EBX));
  /* 10971321 push ebp */
  push32((uint32_t)(EBP));
  /* 10971322 push esi */
  push32((uint32_t)(ESI));
  /* 10971323 push edi */
  push32((uint32_t)(EDI));
  /* 10971324 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971326 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x1097132cu);
  /* 1097132c mov edi, dword ptr [0x1097513c] */
  EDI = (r32((uint32_t)(0x1097513c)));
  /* 10971332 mov esi, dword ptr [0x109750b0] */
  ESI = (r32((uint32_t)(0x109750b0)));
  /* 10971338 mov ebp, dword ptr [0x109750bc] */
  EBP = (r32((uint32_t)(0x109750bc)));
  /* 1097133e mov ebx, dword ptr [0x109750c0] */
  EBX = (r32((uint32_t)(0x109750c0)));
  /* 10971344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971347 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971349 je 0x10971466 */
  if (C.zf) goto L_10971466;
  /* 1097134f push 0 */
  push32((uint32_t)(0x0u));
  /* 10971351 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971353 call edi */
  call_ind((uint32_t)(EDI), 0x10971355u);
  /* 10971355 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971357 call ebp */
  call_ind((uint32_t)(EBP), 0x10971359u);
  /* 10971359 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1097135c mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 10971361 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10971364 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10971367 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1097136a shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1097136d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097136f push ecx */
  push32((uint32_t)(ECX));
  /* 10971370 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971372 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971374 call esi */
  call_ind((uint32_t)(ESI), 0x10971376u);
  /* 10971376 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971378 call ebp */
  call_ind((uint32_t)(EBP), 0x1097137au);
  /* 1097137a mov edx, 0xa */
  EDX = (0xau);
  /* 1097137f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10971381 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10971387 push edx */
  push32((uint32_t)(EDX));
  /* 10971388 push 2 */
  push32((uint32_t)(0x2u));
  /* 1097138a push 0 */
  push32((uint32_t)(0x0u));
  /* 1097138c call esi */
  call_ind((uint32_t)(ESI), 0x1097138eu);
  /* 1097138e push 0 */
  push32((uint32_t)(0x0u));
  /* 10971390 call ebp */
  call_ind((uint32_t)(EBP), 0x10971392u);
  /* 10971392 mov ecx, 0xa */
  ECX = (0xau);
  /* 10971397 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10971399 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1097139f push ecx */
  push32((uint32_t)(ECX));
  /* 109713a0 push 3 */
  push32((uint32_t)(0x3u));
  /* 109713a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109713a4 call esi */
  call_ind((uint32_t)(ESI), 0x109713a6u);
  /* 109713a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109713a8 call ebp */
  call_ind((uint32_t)(EBP), 0x109713aau);
  /* 109713aa mov edx, 0xa */
  EDX = (0xau);
  /* 109713af sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109713b1 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109713b7 push edx */
  push32((uint32_t)(EDX));
  /* 109713b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 109713ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109713bc call esi */
  call_ind((uint32_t)(ESI), 0x109713beu);
  /* 109713be add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109713c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109713c3 call ebp */
  call_ind((uint32_t)(EBP), 0x109713c5u);
  /* 109713c5 mov ecx, 0xa */
  ECX = (0xau);
  /* 109713ca sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109713cc imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109713d2 push ecx */
  push32((uint32_t)(ECX));
  /* 109713d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 109713d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109713d7 call esi */
  call_ind((uint32_t)(ESI), 0x109713d9u);
  /* 109713d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109713db call ebp */
  call_ind((uint32_t)(EBP), 0x109713ddu);
  /* 109713dd mov edx, 0xa */
  EDX = (0xau);
  /* 109713e2 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109713e4 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109713ea push edx */
  push32((uint32_t)(EDX));
  /* 109713eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109713ed push 0 */
  push32((uint32_t)(0x0u));
  /* 109713ef call esi */
  call_ind((uint32_t)(ESI), 0x109713f1u);
  /* 109713f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109713f3 call ebp */
  call_ind((uint32_t)(EBP), 0x109713f5u);
  /* 109713f5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109713f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109713fa jne 0x10971440 */
  if (!C.zf) goto L_10971440;
  /* 109713fc push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10971401 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971403 push eax */
  push32((uint32_t)(EAX));
  /* 10971404 call ebx */
  call_ind((uint32_t)(EBX), 0x10971406u);
  /* 10971406 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1097140b push 1 */
  push32((uint32_t)(0x1u));
  /* 1097140d push 0 */
  push32((uint32_t)(0x0u));
  /* 1097140f call ebx */
  call_ind((uint32_t)(EBX), 0x10971411u);
  /* 10971411 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10971416 push 4 */
  push32((uint32_t)(0x4u));
  /* 10971418 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097141a call ebx */
  call_ind((uint32_t)(EBX), 0x1097141cu);
  /* 1097141c push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10971421 push 5 */
  push32((uint32_t)(0x5u));
  /* 10971423 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971425 call ebx */
  call_ind((uint32_t)(EBX), 0x10971427u);
  /* 10971427 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 1097142c push 2 */
  push32((uint32_t)(0x2u));
  /* 1097142e push 0 */
  push32((uint32_t)(0x0u));
  /* 10971430 call ebx */
  call_ind((uint32_t)(EBX), 0x10971432u);
  /* 10971432 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10971437 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971439 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097143b call ebx */
  call_ind((uint32_t)(EBX), 0x1097143du);
  /* 1097143d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971440:;
  /* 10971440 push 0x109762c4 */
  push32((uint32_t)(0x109762c4u));
  /* 10971445 mov dword ptr [0x10976620], 0 */
  w32((uint32_t)(0x10976620), (0x0u));
  /* 1097144f call dword ptr [0x109750b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b8))), 0x10971455u);
  /* 10971455 mov ebx, dword ptr [0x109750c8] */
  EBX = (r32((uint32_t)(0x109750c8)));
  /* 1097145b push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1097145d call ebx */
  call_ind((uint32_t)(EBX), 0x1097145fu);
  /* 1097145f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10971461 call ebx */
  call_ind((uint32_t)(EBX), 0x10971463u);
  /* 10971463 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971466:;
  /* 10971466 push 0xa */
  push32((uint32_t)(0xau));
  /* 10971468 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x1097146eu);
  /* 1097146e mov ebx, dword ptr [0x109750cc] */
  EBX = (r32((uint32_t)(0x109750cc)));
  /* 10971474 mov ebp, dword ptr [0x109750c4] */
  EBP = (r32((uint32_t)(0x109750c4)));
  /* 1097147a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097147d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1097147f je 0x109714d1 */
  if (C.zf) goto L_109714d1;
  /* 10971481 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971483 push 0x10976750 */
  push32((uint32_t)(0x10976750u));
  /* 10971488 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x1097148eu);
  /* 1097148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971493 jle 0x109714d1 */
  if ((C.zf||C.sf!=C.of)) goto L_109714d1;
  /* 10971495 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971497 push 0xa */
  push32((uint32_t)(0xau));
  /* 10971499 call edi */
  call_ind((uint32_t)(EDI), 0x1097149bu);
  /* 1097149b push 1 */
  push32((uint32_t)(0x1u));
  /* 1097149d call ebx */
  call_ind((uint32_t)(EBX), 0x1097149fu);
  /* 1097149f push 0 */
  push32((uint32_t)(0x0u));
  /* 109714a1 push 0x10976648 */
  push32((uint32_t)(0x10976648u));
  /* 109714a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109714a8 call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x109714aeu);
  /* 109714ae push 0 */
  push32((uint32_t)(0x0u));
  /* 109714b0 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 109714b2 push 0x10976750 */
  push32((uint32_t)(0x10976750u));
  /* 109714b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109714b9 call ebp */
  call_ind((uint32_t)(EBP), 0x109714bbu);
  /* 109714bb push 2 */
  push32((uint32_t)(0x2u));
  /* 109714bd push 0x25 */
  push32((uint32_t)(0x25u));
  /* 109714bf push 0x10976650 */
  push32((uint32_t)(0x10976650u));
  /* 109714c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109714c6 call ebp */
  call_ind((uint32_t)(EBP), 0x109714c8u);
  /* 109714c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109714ca push 0xb */
  push32((uint32_t)(0xbu));
  /* 109714cc call edi */
  call_ind((uint32_t)(EDI), 0x109714ceu);
  /* 109714ce add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109714d1:;
  /* 109714d1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 109714d3 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x109714d9u);
  /* 109714d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109714dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109714de je 0x10971544 */
  if (C.zf) goto L_10971544;
  /* 109714e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 109714e2 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x109714e8u);
  /* 109714e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109714eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109714ed jne 0x10971544 */
  if (!C.zf) goto L_10971544;
  /* 109714ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109714f1 push 0x10976750 */
  push32((uint32_t)(0x10976750u));
  /* 109714f6 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x109714fcu);
  /* 109714fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109714ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971501 jne 0x10971544 */
  if (!C.zf) goto L_10971544;
  /* 10971503 push eax */
  push32((uint32_t)(EAX));
  /* 10971504 push 0x10976650 */
  push32((uint32_t)(0x10976650u));
  /* 10971509 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x1097150fu);
  /* 1097150f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971514 jne 0x10971544 */
  if (!C.zf) goto L_10971544;
  /* 10971516 push eax */
  push32((uint32_t)(EAX));
  /* 10971517 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10971519 call edi */
  call_ind((uint32_t)(EDI), 0x1097151bu);
  /* 1097151b push 1 */
  push32((uint32_t)(0x1u));
  /* 1097151d call ebx */
  call_ind((uint32_t)(EBX), 0x1097151fu);
  /* 1097151f push 0 */
  push32((uint32_t)(0x0u));
  /* 10971521 push 0x10976648 */
  push32((uint32_t)(0x10976648u));
  /* 10971526 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971528 call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x1097152eu);
  /* 1097152e push 0 */
  push32((uint32_t)(0x0u));
  /* 10971530 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971532 push 0x109766b0 */
  push32((uint32_t)(0x109766b0u));
  /* 10971537 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971539 call ebp */
  call_ind((uint32_t)(EBP), 0x1097153bu);
  /* 1097153b push 1 */
  push32((uint32_t)(0x1u));
  /* 1097153d push 0xa */
  push32((uint32_t)(0xau));
  /* 1097153f call edi */
  call_ind((uint32_t)(EDI), 0x10971541u);
  /* 10971541 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971544:;
  /* 10971544 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10971546 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x1097154cu);
  /* 1097154c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097154f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971551 je 0x109715a6 */
  if (C.zf) goto L_109715a6;
  /* 10971553 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971555 push 0x10976758 */
  push32((uint32_t)(0x10976758u));
  /* 1097155a call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x10971560u);
  /* 10971560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971565 jle 0x109715a6 */
  if ((C.zf||C.sf!=C.of)) goto L_109715a6;
  /* 10971567 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971569 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1097156b call edi */
  call_ind((uint32_t)(EDI), 0x1097156du);
  /* 1097156d push 1 */
  push32((uint32_t)(0x1u));
  /* 1097156f call ebx */
  call_ind((uint32_t)(EBX), 0x10971571u);
  /* 10971571 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971573 push 0x109766a8 */
  push32((uint32_t)(0x109766a8u));
  /* 10971578 push 1 */
  push32((uint32_t)(0x1u));
  /* 1097157a call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x10971580u);
  /* 10971580 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971582 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971584 push 0x10976758 */
  push32((uint32_t)(0x10976758u));
  /* 10971589 push 1 */
  push32((uint32_t)(0x1u));
  /* 1097158b call ebp */
  call_ind((uint32_t)(EBP), 0x1097158du);
  /* 1097158d push 2 */
  push32((uint32_t)(0x2u));
  /* 1097158f push 0xeb */
  push32((uint32_t)(0xebu));
  /* 10971594 push 0x10976658 */
  push32((uint32_t)(0x10976658u));
  /* 10971599 push 1 */
  push32((uint32_t)(0x1u));
  /* 1097159b call ebp */
  call_ind((uint32_t)(EBP), 0x1097159du);
  /* 1097159d push 1 */
  push32((uint32_t)(0x1u));
  /* 1097159f push 0xd */
  push32((uint32_t)(0xdu));
  /* 109715a1 call edi */
  call_ind((uint32_t)(EDI), 0x109715a3u);
  /* 109715a3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109715a6:;
  /* 109715a6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109715a8 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x109715aeu);
  /* 109715ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109715b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109715b3 je 0x10971619 */
  if (C.zf) goto L_10971619;
  /* 109715b5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 109715b7 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x109715bdu);
  /* 109715bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109715c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109715c2 jne 0x10971619 */
  if (!C.zf) goto L_10971619;
  /* 109715c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109715c6 push 0x10976758 */
  push32((uint32_t)(0x10976758u));
  /* 109715cb call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x109715d1u);
  /* 109715d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109715d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109715d6 jne 0x10971619 */
  if (!C.zf) goto L_10971619;
  /* 109715d8 push eax */
  push32((uint32_t)(EAX));
  /* 109715d9 push 0x10976658 */
  push32((uint32_t)(0x10976658u));
  /* 109715de call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x109715e4u);
  /* 109715e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109715e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109715e9 jne 0x10971619 */
  if (!C.zf) goto L_10971619;
  /* 109715eb push eax */
  push32((uint32_t)(EAX));
  /* 109715ec push 0xd */
  push32((uint32_t)(0xdu));
  /* 109715ee call edi */
  call_ind((uint32_t)(EDI), 0x109715f0u);
  /* 109715f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109715f2 call ebx */
  call_ind((uint32_t)(EBX), 0x109715f4u);
  /* 109715f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109715f6 push 0x109766a8 */
  push32((uint32_t)(0x109766a8u));
  /* 109715fb push 1 */
  push32((uint32_t)(0x1u));
  /* 109715fd call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x10971603u);
  /* 10971603 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971605 push 0xa */
  push32((uint32_t)(0xau));
  /* 10971607 push 0x109766c8 */
  push32((uint32_t)(0x109766c8u));
  /* 1097160c push 1 */
  push32((uint32_t)(0x1u));
  /* 1097160e call ebp */
  call_ind((uint32_t)(EBP), 0x10971610u);
  /* 10971610 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971612 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10971614 call edi */
  call_ind((uint32_t)(EDI), 0x10971616u);
  /* 10971616 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971619:;
  /* 10971619 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1097161b call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971621u);
  /* 10971621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971624 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971626 je 0x1097167e */
  if (C.zf) goto L_1097167e;
  /* 10971628 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097162a push 0x10976760 */
  push32((uint32_t)(0x10976760u));
  /* 1097162f call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x10971635u);
  /* 10971635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097163a jle 0x1097167e */
  if ((C.zf||C.sf!=C.of)) goto L_1097167e;
  /* 1097163c push 0 */
  push32((uint32_t)(0x0u));
  /* 1097163e push 0xe */
  push32((uint32_t)(0xeu));
  /* 10971640 call edi */
  call_ind((uint32_t)(EDI), 0x10971642u);
  /* 10971642 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971644 call ebx */
  call_ind((uint32_t)(EBX), 0x10971646u);
  /* 10971646 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971648 push 0x109766a0 */
  push32((uint32_t)(0x109766a0u));
  /* 1097164d push 2 */
  push32((uint32_t)(0x2u));
  /* 1097164f call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x10971655u);
  /* 10971655 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971657 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1097165c push 0x10976760 */
  push32((uint32_t)(0x10976760u));
  /* 10971661 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971663 call ebp */
  call_ind((uint32_t)(EBP), 0x10971665u);
  /* 10971665 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971667 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1097166c push 0x10976668 */
  push32((uint32_t)(0x10976668u));
  /* 10971671 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971673 call ebp */
  call_ind((uint32_t)(EBP), 0x10971675u);
  /* 10971675 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971677 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10971679 call edi */
  call_ind((uint32_t)(EDI), 0x1097167bu);
  /* 1097167b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1097167e:;
  /* 1097167e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10971680 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971686u);
  /* 10971686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971689 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1097168b je 0x109716f4 */
  if (C.zf) goto L_109716f4;
  /* 1097168d push 0xe */
  push32((uint32_t)(0xeu));
  /* 1097168f call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971695u);
  /* 10971695 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971698 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1097169a jne 0x109716f4 */
  if (!C.zf) goto L_109716f4;
  /* 1097169c push 0 */
  push32((uint32_t)(0x0u));
  /* 1097169e push 0x10976760 */
  push32((uint32_t)(0x10976760u));
  /* 109716a3 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x109716a9u);
  /* 109716a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109716ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109716ae jne 0x109716f4 */
  if (!C.zf) goto L_109716f4;
  /* 109716b0 push eax */
  push32((uint32_t)(EAX));
  /* 109716b1 push 0x10976668 */
  push32((uint32_t)(0x10976668u));
  /* 109716b6 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x109716bcu);
  /* 109716bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109716bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109716c1 jne 0x109716f4 */
  if (!C.zf) goto L_109716f4;
  /* 109716c3 push eax */
  push32((uint32_t)(EAX));
  /* 109716c4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 109716c6 call edi */
  call_ind((uint32_t)(EDI), 0x109716c8u);
  /* 109716c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109716ca call ebx */
  call_ind((uint32_t)(EBX), 0x109716ccu);
  /* 109716cc push 0 */
  push32((uint32_t)(0x0u));
  /* 109716ce push 0x109766a0 */
  push32((uint32_t)(0x109766a0u));
  /* 109716d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109716d5 call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x109716dbu);
  /* 109716db push 0 */
  push32((uint32_t)(0x0u));
  /* 109716dd push 0x82 */
  push32((uint32_t)(0x82u));
  /* 109716e2 push 0x109766d0 */
  push32((uint32_t)(0x109766d0u));
  /* 109716e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109716e9 call ebp */
  call_ind((uint32_t)(EBP), 0x109716ebu);
  /* 109716eb push 1 */
  push32((uint32_t)(0x1u));
  /* 109716ed push 0xe */
  push32((uint32_t)(0xeu));
  /* 109716ef call edi */
  call_ind((uint32_t)(EDI), 0x109716f1u);
  /* 109716f1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109716f4:;
  /* 109716f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109716f6 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x109716fcu);
  /* 109716fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109716ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971701 je 0x10971756 */
  if (C.zf) goto L_10971756;
  /* 10971703 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971705 push 0x10976768 */
  push32((uint32_t)(0x10976768u));
  /* 1097170a call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x10971710u);
  /* 10971710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971715 jle 0x10971756 */
  if ((C.zf||C.sf!=C.of)) goto L_10971756;
  /* 10971717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971719 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1097171b call edi */
  call_ind((uint32_t)(EDI), 0x1097171du);
  /* 1097171d push 2 */
  push32((uint32_t)(0x2u));
  /* 1097171f call ebx */
  call_ind((uint32_t)(EBX), 0x10971721u);
  /* 10971721 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971723 push 0x10976698 */
  push32((uint32_t)(0x10976698u));
  /* 10971728 push 2 */
  push32((uint32_t)(0x2u));
  /* 1097172a call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x10971730u);
  /* 10971730 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971732 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10971737 push 0x10976768 */
  push32((uint32_t)(0x10976768u));
  /* 1097173c push 2 */
  push32((uint32_t)(0x2u));
  /* 1097173e call ebp */
  call_ind((uint32_t)(EBP), 0x10971740u);
  /* 10971740 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971742 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10971744 push 0x10976670 */
  push32((uint32_t)(0x10976670u));
  /* 10971749 push 2 */
  push32((uint32_t)(0x2u));
  /* 1097174b call ebp */
  call_ind((uint32_t)(EBP), 0x1097174du);
  /* 1097174d push 1 */
  push32((uint32_t)(0x1u));
  /* 1097174f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10971751 call edi */
  call_ind((uint32_t)(EDI), 0x10971753u);
  /* 10971753 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971756:;
  /* 10971756 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10971758 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x1097175eu);
  /* 1097175e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971761 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971763 je 0x109717cc */
  if (C.zf) goto L_109717cc;
  /* 10971765 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10971767 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x1097176du);
  /* 1097176d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971770 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971772 jne 0x109717cc */
  if (!C.zf) goto L_109717cc;
  /* 10971774 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971776 push 0x10976768 */
  push32((uint32_t)(0x10976768u));
  /* 1097177b call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x10971781u);
  /* 10971781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971786 jne 0x109717cc */
  if (!C.zf) goto L_109717cc;
  /* 10971788 push eax */
  push32((uint32_t)(EAX));
  /* 10971789 push 0x10976670 */
  push32((uint32_t)(0x10976670u));
  /* 1097178e call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x10971794u);
  /* 10971794 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971799 jne 0x109717cc */
  if (!C.zf) goto L_109717cc;
  /* 1097179b push eax */
  push32((uint32_t)(EAX));
  /* 1097179c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1097179e call edi */
  call_ind((uint32_t)(EDI), 0x109717a0u);
  /* 109717a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109717a2 call ebx */
  call_ind((uint32_t)(EBX), 0x109717a4u);
  /* 109717a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109717a6 push 0x10976698 */
  push32((uint32_t)(0x10976698u));
  /* 109717ab push 2 */
  push32((uint32_t)(0x2u));
  /* 109717ad call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x109717b3u);
  /* 109717b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109717b5 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109717ba push 0x109766b8 */
  push32((uint32_t)(0x109766b8u));
  /* 109717bf push 2 */
  push32((uint32_t)(0x2u));
  /* 109717c1 call ebp */
  call_ind((uint32_t)(EBP), 0x109717c3u);
  /* 109717c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109717c5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109717c7 call edi */
  call_ind((uint32_t)(EDI), 0x109717c9u);
  /* 109717c9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109717cc:;
  /* 109717cc push 0x12 */
  push32((uint32_t)(0x12u));
  /* 109717ce call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x109717d4u);
  /* 109717d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109717d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109717d9 je 0x1097181e */
  if (C.zf) goto L_1097181e;
  /* 109717db push 0 */
  push32((uint32_t)(0x0u));
  /* 109717dd push 0x10976778 */
  push32((uint32_t)(0x10976778u));
  /* 109717e2 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x109717e8u);
  /* 109717e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109717eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109717ed jle 0x1097181e */
  if ((C.zf||C.sf!=C.of)) goto L_1097181e;
  /* 109717ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109717f1 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 109717f3 call edi */
  call_ind((uint32_t)(EDI), 0x109717f5u);
  /* 109717f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 109717f7 call ebx */
  call_ind((uint32_t)(EBX), 0x109717f9u);
  /* 109717f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109717fb push 0x10976690 */
  push32((uint32_t)(0x10976690u));
  /* 10971800 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971802 call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x10971808u);
  /* 10971808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097180a push 0 */
  push32((uint32_t)(0x0u));
  /* 1097180c push 0x10976778 */
  push32((uint32_t)(0x10976778u));
  /* 10971811 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971813 call ebp */
  call_ind((uint32_t)(EBP), 0x10971815u);
  /* 10971815 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971817 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10971819 call edi */
  call_ind((uint32_t)(EDI), 0x1097181bu);
  /* 1097181b add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1097181e:;
  /* 1097181e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10971820 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971826u);
  /* 10971826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971829 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1097182b je 0x1097187e */
  if (C.zf) goto L_1097187e;
  /* 1097182d push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1097182f call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971835u);
  /* 10971835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971838 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1097183a jne 0x1097187e */
  if (!C.zf) goto L_1097187e;
  /* 1097183c push 0 */
  push32((uint32_t)(0x0u));
  /* 1097183e push 0x10976778 */
  push32((uint32_t)(0x10976778u));
  /* 10971843 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x10971849u);
  /* 10971849 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097184c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097184e jne 0x1097187e */
  if (!C.zf) goto L_1097187e;
  /* 10971850 push eax */
  push32((uint32_t)(EAX));
  /* 10971851 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10971853 call edi */
  call_ind((uint32_t)(EDI), 0x10971855u);
  /* 10971855 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971857 call ebx */
  call_ind((uint32_t)(EBX), 0x10971859u);
  /* 10971859 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097185b push 0x10976690 */
  push32((uint32_t)(0x10976690u));
  /* 10971860 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971862 call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x10971868u);
  /* 10971868 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097186a push 0 */
  push32((uint32_t)(0x0u));
  /* 1097186c push 0x109766c0 */
  push32((uint32_t)(0x109766c0u));
  /* 10971871 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971873 call ebp */
  call_ind((uint32_t)(EBP), 0x10971875u);
  /* 10971875 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971877 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10971879 call edi */
  call_ind((uint32_t)(EDI), 0x1097187bu);
  /* 1097187b add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1097187e:;
  /* 1097187e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10971880 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971886u);
  /* 10971886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971889 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1097188b je 0x109718dd */
  if (C.zf) goto L_109718dd;
  /* 1097188d push 0 */
  push32((uint32_t)(0x0u));
  /* 1097188f push 0x10976780 */
  push32((uint32_t)(0x10976780u));
  /* 10971894 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x1097189au);
  /* 1097189a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097189d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097189f jle 0x109718dd */
  if ((C.zf||C.sf!=C.of)) goto L_109718dd;
  /* 109718a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109718a3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 109718a5 call edi */
  call_ind((uint32_t)(EDI), 0x109718a7u);
  /* 109718a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 109718a9 call ebx */
  call_ind((uint32_t)(EBX), 0x109718abu);
  /* 109718ab push 0 */
  push32((uint32_t)(0x0u));
  /* 109718ad push 0x10976688 */
  push32((uint32_t)(0x10976688u));
  /* 109718b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 109718b4 call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x109718bau);
  /* 109718ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109718bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109718be push 0x10976780 */
  push32((uint32_t)(0x10976780u));
  /* 109718c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 109718c5 call ebp */
  call_ind((uint32_t)(EBP), 0x109718c7u);
  /* 109718c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109718c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109718cb push 0x10976678 */
  push32((uint32_t)(0x10976678u));
  /* 109718d0 push 3 */
  push32((uint32_t)(0x3u));
  /* 109718d2 call ebp */
  call_ind((uint32_t)(EBP), 0x109718d4u);
  /* 109718d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109718d6 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 109718d8 call edi */
  call_ind((uint32_t)(EDI), 0x109718dau);
  /* 109718da add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109718dd:;
  /* 109718dd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 109718df call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x109718e5u);
  /* 109718e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109718e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109718ea je 0x1097193d */
  if (C.zf) goto L_1097193d;
  /* 109718ec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 109718ee call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x109718f4u);
  /* 109718f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109718f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109718f9 jne 0x1097193d */
  if (!C.zf) goto L_1097193d;
  /* 109718fb push 0 */
  push32((uint32_t)(0x0u));
  /* 109718fd push 0x10976780 */
  push32((uint32_t)(0x10976780u));
  /* 10971902 call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x10971908u);
  /* 10971908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097190b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097190d jne 0x1097193d */
  if (!C.zf) goto L_1097193d;
  /* 1097190f push eax */
  push32((uint32_t)(EAX));
  /* 10971910 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10971912 call edi */
  call_ind((uint32_t)(EDI), 0x10971914u);
  /* 10971914 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971916 call ebx */
  call_ind((uint32_t)(EBX), 0x10971918u);
  /* 10971918 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097191a push 0x10976688 */
  push32((uint32_t)(0x10976688u));
  /* 1097191f push 3 */
  push32((uint32_t)(0x3u));
  /* 10971921 call dword ptr [0x109750d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d8))), 0x10971927u);
  /* 10971927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097192b push 0x109766d8 */
  push32((uint32_t)(0x109766d8u));
  /* 10971930 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971932 call ebp */
  call_ind((uint32_t)(EBP), 0x10971934u);
  /* 10971934 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971936 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10971938 call edi */
  call_ind((uint32_t)(EDI), 0x1097193au);
  /* 1097193a add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1097193d:;
  /* 1097193d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1097193f call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971945u);
  /* 10971945 mov ebx, dword ptr [0x109750d0] */
  EBX = (r32((uint32_t)(0x109750d0)));
  /* 1097194b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097194e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971950 je 0x10971ae7 */
  if (C.zf) goto L_10971ae7;
  /* 10971956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971958 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1097195a call edi */
  call_ind((uint32_t)(EDI), 0x1097195cu);
  /* 1097195c push 0 */
  push32((uint32_t)(0x0u));
  /* 1097195e push 0x10976648 */
  push32((uint32_t)(0x10976648u));
  /* 10971963 call ebx */
  call_ind((uint32_t)(EBX), 0x10971965u);
  /* 10971965 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971967 push 0x109766a8 */
  push32((uint32_t)(0x109766a8u));
  /* 1097196c call ebx */
  call_ind((uint32_t)(EBX), 0x1097196eu);
  /* 1097196e push 1 */
  push32((uint32_t)(0x1u));
  /* 10971970 call dword ptr [0x109750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750e0))), 0x10971976u);
  /* 10971976 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971978 push 0x10976698 */
  push32((uint32_t)(0x10976698u));
  /* 1097197d call ebx */
  call_ind((uint32_t)(EBX), 0x1097197fu);
  /* 1097197f push 1 */
  push32((uint32_t)(0x1u));
  /* 10971981 push 0x109766a0 */
  push32((uint32_t)(0x109766a0u));
  /* 10971986 call ebx */
  call_ind((uint32_t)(EBX), 0x10971988u);
  /* 10971988 push 2 */
  push32((uint32_t)(0x2u));
  /* 1097198a call dword ptr [0x109750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750e0))), 0x10971990u);
  /* 10971990 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971992 push 0x10976690 */
  push32((uint32_t)(0x10976690u));
  /* 10971997 call ebx */
  call_ind((uint32_t)(EBX), 0x10971999u);
  /* 10971999 push 1 */
  push32((uint32_t)(0x1u));
  /* 1097199b push 0x10976688 */
  push32((uint32_t)(0x10976688u));
  /* 109719a0 call ebx */
  call_ind((uint32_t)(EBX), 0x109719a2u);
  /* 109719a2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109719a5 push 3 */
  push32((uint32_t)(0x3u));
  /* 109719a7 call dword ptr [0x109750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750e0))), 0x109719adu);
  /* 109719ad push 0 */
  push32((uint32_t)(0x0u));
  /* 109719af push 0x10976640 */
  push32((uint32_t)(0x10976640u));
  /* 109719b4 call ebx */
  call_ind((uint32_t)(EBX), 0x109719b6u);
  /* 109719b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 109719b8 call dword ptr [0x109750e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750e0))), 0x109719beu);
  /* 109719be push 0 */
  push32((uint32_t)(0x0u));
  /* 109719c0 call dword ptr [0x109750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750bc))), 0x109719c6u);
  /* 109719c6 push eax */
  push32((uint32_t)(EAX));
  /* 109719c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109719c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109719cb push 0 */
  push32((uint32_t)(0x0u));
  /* 109719cd push 0x109762b8 */
  push32((uint32_t)(0x109762b8u));
  /* 109719d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109719d4 call dword ptr [0x109750e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750e4))), 0x109719dau);
  /* 109719da push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 109719df push 1 */
  push32((uint32_t)(0x1u));
  /* 109719e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109719e3 call esi */
  call_ind((uint32_t)(ESI), 0x109719e5u);
  /* 109719e5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 109719ea push 2 */
  push32((uint32_t)(0x2u));
  /* 109719ec push 1 */
  push32((uint32_t)(0x1u));
  /* 109719ee call esi */
  call_ind((uint32_t)(ESI), 0x109719f0u);
  /* 109719f0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109719f3 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 109719f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 109719fa push 1 */
  push32((uint32_t)(0x1u));
  /* 109719fc call esi */
  call_ind((uint32_t)(ESI), 0x109719feu);
  /* 109719fe push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10971a03 push 4 */
  push32((uint32_t)(0x4u));
  /* 10971a05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971a07 call esi */
  call_ind((uint32_t)(ESI), 0x10971a09u);
  /* 10971a09 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10971a0e push 5 */
  push32((uint32_t)(0x5u));
  /* 10971a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971a12 call esi */
  call_ind((uint32_t)(ESI), 0x10971a14u);
  /* 10971a14 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10971a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a1b push 1 */
  push32((uint32_t)(0x1u));
  /* 10971a1d call esi */
  call_ind((uint32_t)(ESI), 0x10971a1fu);
  /* 10971a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a21 call dword ptr [0x109750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750bc))), 0x10971a27u);
  /* 10971a27 push eax */
  push32((uint32_t)(EAX));
  /* 10971a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a2e push 0x109762ac */
  push32((uint32_t)(0x109762acu));
  /* 10971a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971a35 call dword ptr [0x109750e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750e4))), 0x10971a3bu);
  /* 10971a3b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971a3e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10971a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971a45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971a47 call esi */
  call_ind((uint32_t)(ESI), 0x10971a49u);
  /* 10971a49 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10971a4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10971a50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971a52 call esi */
  call_ind((uint32_t)(ESI), 0x10971a54u);
  /* 10971a54 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10971a59 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971a5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10971a5d call esi */
  call_ind((uint32_t)(ESI), 0x10971a5fu);
  /* 10971a5f push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10971a64 push 4 */
  push32((uint32_t)(0x4u));
  /* 10971a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971a68 call esi */
  call_ind((uint32_t)(ESI), 0x10971a6au);
  /* 10971a6a push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10971a6f push 5 */
  push32((uint32_t)(0x5u));
  /* 10971a71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971a73 call esi */
  call_ind((uint32_t)(ESI), 0x10971a75u);
  /* 10971a75 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10971a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10971a7e call esi */
  call_ind((uint32_t)(ESI), 0x10971a80u);
  /* 10971a80 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a85 call dword ptr [0x109750bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750bc))), 0x10971a8bu);
  /* 10971a8b push eax */
  push32((uint32_t)(EAX));
  /* 10971a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971a92 push 0x109762a0 */
  push32((uint32_t)(0x109762a0u));
  /* 10971a97 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971a99 call dword ptr [0x109750e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750e4))), 0x10971a9fu);
  /* 10971a9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10971aa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971aa6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971aa8 call esi */
  call_ind((uint32_t)(ESI), 0x10971aaau);
  /* 10971aaa push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10971aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10971ab1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971ab3 call esi */
  call_ind((uint32_t)(ESI), 0x10971ab5u);
  /* 10971ab5 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10971aba push 3 */
  push32((uint32_t)(0x3u));
  /* 10971abc push 3 */
  push32((uint32_t)(0x3u));
  /* 10971abe call esi */
  call_ind((uint32_t)(ESI), 0x10971ac0u);
  /* 10971ac0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971ac3 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10971ac8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10971aca push 3 */
  push32((uint32_t)(0x3u));
  /* 10971acc call esi */
  call_ind((uint32_t)(ESI), 0x10971aceu);
  /* 10971ace push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10971ad3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10971ad5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971ad7 call esi */
  call_ind((uint32_t)(ESI), 0x10971ad9u);
  /* 10971ad9 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10971ade push 0 */
  push32((uint32_t)(0x0u));
  /* 10971ae0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971ae2 call esi */
  call_ind((uint32_t)(ESI), 0x10971ae4u);
  /* 10971ae4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971ae7:;
  /* 10971ae7 mov esi, dword ptr [0x109750b4] */
  ESI = (r32((uint32_t)(0x109750b4)));
  /* 10971aed push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10971aef call esi */
  call_ind((uint32_t)(ESI), 0x10971af1u);
  /* 10971af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971af4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971af6 je 0x10971b32 */
  if (C.zf) goto L_10971b32;
  /* 10971af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971afa push 0x10976610 */
  push32((uint32_t)(0x10976610u));
  /* 10971aff call dword ptr [0x109750d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750d4))), 0x10971b05u);
  /* 10971b05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971b0a jle 0x10971b32 */
  if ((C.zf||C.sf!=C.of)) goto L_10971b32;
  /* 10971b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10971b0e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10971b10 call edi */
  call_ind((uint32_t)(EDI), 0x10971b12u);
  /* 10971b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971b14 push 0x109766f8 */
  push32((uint32_t)(0x109766f8u));
  /* 10971b19 call ebx */
  call_ind((uint32_t)(EBX), 0x10971b1bu);
  /* 10971b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10971b1d push 0xdc */
  push32((uint32_t)(0xdcu));
  /* 10971b22 push 0x10976608 */
  push32((uint32_t)(0x10976608u));
  /* 10971b27 push 5 */
  push32((uint32_t)(0x5u));
  /* 10971b29 call dword ptr [0x109750dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750dc))), 0x10971b2fu);
  /* 10971b2f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971b32:;
  /* 10971b32 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10971b34 call esi */
  call_ind((uint32_t)(ESI), 0x10971b36u);
  /* 10971b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971b39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971b3b je 0x10971c04 */
  if (C.zf) goto L_10971c04;
  /* 10971b41 push 0x109766f8 */
  push32((uint32_t)(0x109766f8u));
  /* 10971b46 push 0x10976608 */
  push32((uint32_t)(0x10976608u));
  /* 10971b4b call dword ptr [0x109750ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750ec))), 0x10971b51u);
  /* 10971b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971b56 jle 0x10971c04 */
  if ((C.zf||C.sf!=C.of)) goto L_10971c04;
  /* 10971b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10971b5e push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10971b60 call edi */
  call_ind((uint32_t)(EDI), 0x10971b62u);
  /* 10971b62 push 0x10976608 */
  push32((uint32_t)(0x10976608u));
  /* 10971b67 call dword ptr [0x109750f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750f0))), 0x10971b6du);
  /* 10971b6d push 0x10976298 */
  push32((uint32_t)(0x10976298u));
  /* 10971b72 call dword ptr [0x109750e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750e8))), 0x10971b78u);
  /* 10971b78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971b7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971b7d je 0x10971bde */
  if (C.zf) goto L_10971bde;
  /* 10971b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10971b81 push 0x109766f0 */
  push32((uint32_t)(0x109766f0u));
  /* 10971b86 call ebx */
  call_ind((uint32_t)(EBX), 0x10971b88u);
  /* 10971b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971b8a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10971b8f push 0x10976728 */
  push32((uint32_t)(0x10976728u));
  /* 10971b94 push 5 */
  push32((uint32_t)(0x5u));
  /* 10971b96 call ebp */
  call_ind((uint32_t)(EBP), 0x10971b98u);
  /* 10971b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971b9a push 0x109766e8 */
  push32((uint32_t)(0x109766e8u));
  /* 10971b9f call ebx */
  call_ind((uint32_t)(EBX), 0x10971ba1u);
  /* 10971ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971ba3 push 0xd7 */
  push32((uint32_t)(0xd7u));
  /* 10971ba8 push 0x10976730 */
  push32((uint32_t)(0x10976730u));
  /* 10971bad push 5 */
  push32((uint32_t)(0x5u));
  /* 10971baf call ebp */
  call_ind((uint32_t)(EBP), 0x10971bb1u);
  /* 10971bb1 push 0xfffff060 */
  push32((uint32_t)(0xfffff060u));
  /* 10971bb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971bb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971bba call dword ptr [0x109750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750c0))), 0x10971bc0u);
  /* 10971bc0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971bc2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971bc4 push 0x10976748 */
  push32((uint32_t)(0x10976748u));
  /* 10971bc9 mov dword ptr [0x10976620], 1 */
  w32((uint32_t)(0x10976620), (0x1u));
  /* 10971bd3 call dword ptr [0x109750f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750f8))), 0x10971bd9u);
  /* 10971bd9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971bdc jmp 0x10971c04 */
  goto L_10971c04;
L_10971bde:;
  /* 10971bde push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10971be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971be2 call dword ptr [0x10975140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975140))), 0x10971be8u);
  /* 10971be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971bea push 0x10976700 */
  push32((uint32_t)(0x10976700u));
  /* 10971bef call ebx */
  call_ind((uint32_t)(EBX), 0x10971bf1u);
  /* 10971bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971bf3 push 0xd2 */
  push32((uint32_t)(0xd2u));
  /* 10971bf8 push 0x10976610 */
  push32((uint32_t)(0x10976610u));
  /* 10971bfd push 5 */
  push32((uint32_t)(0x5u));
  /* 10971bff call ebp */
  call_ind((uint32_t)(EBP), 0x10971c01u);
  /* 10971c01 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971c04:;
  /* 10971c04 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10971c06 call esi */
  call_ind((uint32_t)(ESI), 0x10971c08u);
  /* 10971c08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971c0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971c0d je 0x10971c45 */
  if (C.zf) goto L_10971c45;
  /* 10971c0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10971c11 push 0x10976640 */
  push32((uint32_t)(0x10976640u));
  /* 10971c16 call dword ptr [0x109750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750fc))), 0x10971c1cu);
  /* 10971c1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971c1f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10971c22 jle 0x10971c45 */
  if ((C.zf||C.sf!=C.of)) goto L_10971c45;
  /* 10971c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971c26 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10971c28 call edi */
  call_ind((uint32_t)(EDI), 0x10971c2au);
  /* 10971c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10971c2c push 0x10976640 */
  push32((uint32_t)(0x10976640u));
  /* 10971c31 call ebx */
  call_ind((uint32_t)(EBX), 0x10971c33u);
  /* 10971c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971c35 push 0x10976718 */
  push32((uint32_t)(0x10976718u));
  /* 10971c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10971c3c call dword ptr [0x109750f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750f4))), 0x10971c42u);
  /* 10971c42 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971c45:;
  /* 10971c45 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10971c47 call esi */
  call_ind((uint32_t)(ESI), 0x10971c49u);
  /* 10971c49 mov ebp, dword ptr [0x10975104] */
  EBP = (r32((uint32_t)(0x10975104)));
  /* 10971c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971c52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971c54 je 0x10971c79 */
  if (C.zf) goto L_10971c79;
  /* 10971c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971c58 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10971c5a call edi */
  call_ind((uint32_t)(EDI), 0x10971c5cu);
  /* 10971c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10971c5e push 0x10976630 */
  push32((uint32_t)(0x10976630u));
  /* 10971c63 push 7 */
  push32((uint32_t)(0x7u));
  /* 10971c65 push 0x10976720 */
  push32((uint32_t)(0x10976720u));
  /* 10971c6a push 0x10976660 */
  push32((uint32_t)(0x10976660u));
  /* 10971c6f push 0x10976738 */
  push32((uint32_t)(0x10976738u));
  /* 10971c74 call ebp */
  call_ind((uint32_t)(EBP), 0x10971c76u);
  /* 10971c76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971c79:;
  /* 10971c79 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10971c7b call esi */
  call_ind((uint32_t)(ESI), 0x10971c7du);
  /* 10971c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971c80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971c82 je 0x10971d51 */
  if (C.zf) goto L_10971d51;
  /* 10971c88 mov esi, dword ptr [0x109750d4] */
  ESI = (r32((uint32_t)(0x109750d4)));
  /* 10971c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10971c90 push 0x10976630 */
  push32((uint32_t)(0x10976630u));
  /* 10971c95 call esi */
  call_ind((uint32_t)(ESI), 0x10971c97u);
  /* 10971c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971c9c jle 0x10971d51 */
  if ((C.zf||C.sf!=C.of)) goto L_10971d51;
  /* 10971ca2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10971ca4 push 0x109766e0 */
  push32((uint32_t)(0x109766e0u));
  /* 10971ca9 call esi */
  call_ind((uint32_t)(ESI), 0x10971cabu);
  /* 10971cab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971cae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971cb0 jne 0x10971d51 */
  if (!C.zf) goto L_10971d51;
  /* 10971cb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10971cb8 push 0x109766e0 */
  push32((uint32_t)(0x109766e0u));
  /* 10971cbd call esi */
  call_ind((uint32_t)(ESI), 0x10971cbfu);
  /* 10971cbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971cc4 jne 0x10971d51 */
  if (!C.zf) goto L_10971d51;
  /* 10971cca push eax */
  push32((uint32_t)(EAX));
  /* 10971ccb push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10971ccd call edi */
  call_ind((uint32_t)(EDI), 0x10971ccfu);
  /* 10971ccf mov eax, dword ptr [0x10976620] */
  EAX = (r32((uint32_t)(0x10976620)));
  /* 10971cd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971cd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971cd9 jne 0x10971ced */
  if (!C.zf) goto L_10971ced;
  /* 10971cdb mov esi, dword ptr [0x109750b8] */
  ESI = (r32((uint32_t)(0x109750b8)));
  /* 10971ce1 push 0x10976290 */
  push32((uint32_t)(0x10976290u));
  /* 10971ce6 call esi */
  call_ind((uint32_t)(ESI), 0x10971ce8u);
  /* 10971ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971ceb jmp 0x10971cf3 */
  goto L_10971cf3;
L_10971ced:;
  /* 10971ced mov esi, dword ptr [0x109750b8] */
  ESI = (r32((uint32_t)(0x109750b8)));
L_10971cf3:;
  /* 10971cf3 cmp dword ptr [0x10976620], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10976620))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10971cfa jne 0x10971d06 */
  if (!C.zf) goto L_10971d06;
  /* 10971cfc push 0x10976288 */
  push32((uint32_t)(0x10976288u));
  /* 10971d01 call esi */
  call_ind((uint32_t)(ESI), 0x10971d03u);
  /* 10971d03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971d06:;
  /* 10971d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971d08 push 0x10976738 */
  push32((uint32_t)(0x10976738u));
  /* 10971d0d call ebx */
  call_ind((uint32_t)(EBX), 0x10971d0fu);
  /* 10971d0f push 7 */
  push32((uint32_t)(0x7u));
  /* 10971d11 call dword ptr [0x10975108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975108))), 0x10971d17u);
  /* 10971d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971d19 push 0x10976630 */
  push32((uint32_t)(0x10976630u));
  /* 10971d1e push 7 */
  push32((uint32_t)(0x7u));
  /* 10971d20 push 0x10976600 */
  push32((uint32_t)(0x10976600u));
  /* 10971d25 push 0x10976660 */
  push32((uint32_t)(0x10976660u));
  /* 10971d2a push 0x10976680 */
  push32((uint32_t)(0x10976680u));
  /* 10971d2f call ebp */
  call_ind((uint32_t)(EBP), 0x10971d31u);
  /* 10971d31 mov eax, dword ptr [0x10976620] */
  EAX = (r32((uint32_t)(0x10976620)));
  /* 10971d36 imul eax, eax, 0xfa0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xfa0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10971d3c add eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10971d41 push eax */
  push32((uint32_t)(EAX));
  /* 10971d42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971d46 call dword ptr [0x109750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750c0))), 0x10971d4cu);
  /* 10971d4c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971d4f jmp 0x10971d57 */
  goto L_10971d57;
L_10971d51:;
  /* 10971d51 mov esi, dword ptr [0x109750b8] */
  ESI = (r32((uint32_t)(0x109750b8)));
L_10971d57:;
  /* 10971d57 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10971d59 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971d5fu);
  /* 10971d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971d62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971d64 je 0x10971dbc */
  if (C.zf) goto L_10971dbc;
  /* 10971d66 mov ebp, dword ptr [0x109750d4] */
  EBP = (r32((uint32_t)(0x109750d4)));
  /* 10971d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10971d6e push 0x10976628 */
  push32((uint32_t)(0x10976628u));
  /* 10971d73 call ebp */
  call_ind((uint32_t)(EBP), 0x10971d75u);
  /* 10971d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971d78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971d7a jle 0x10971dc2 */
  if ((C.zf||C.sf!=C.of)) goto L_10971dc2;
  /* 10971d7c push 5 */
  push32((uint32_t)(0x5u));
  /* 10971d7e push 0x10976618 */
  push32((uint32_t)(0x10976618u));
  /* 10971d83 call ebp */
  call_ind((uint32_t)(EBP), 0x10971d85u);
  /* 10971d85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971d88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971d8a jne 0x10971dc2 */
  if (!C.zf) goto L_10971dc2;
  /* 10971d8c push 3 */
  push32((uint32_t)(0x3u));
  /* 10971d8e push 0x10976618 */
  push32((uint32_t)(0x10976618u));
  /* 10971d93 call ebp */
  call_ind((uint32_t)(EBP), 0x10971d95u);
  /* 10971d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971d9a jne 0x10971dc2 */
  if (!C.zf) goto L_10971dc2;
  /* 10971d9c push eax */
  push32((uint32_t)(EAX));
  /* 10971d9d push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10971d9f call edi */
  call_ind((uint32_t)(EDI), 0x10971da1u);
  /* 10971da1 push 0x10976280 */
  push32((uint32_t)(0x10976280u));
  /* 10971da6 call esi */
  call_ind((uint32_t)(ESI), 0x10971da8u);
  /* 10971da8 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10971dad push 3 */
  push32((uint32_t)(0x3u));
  /* 10971daf push 0 */
  push32((uint32_t)(0x0u));
  /* 10971db1 call dword ptr [0x109750c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750c0))), 0x10971db7u);
  /* 10971db7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971dba jmp 0x10971dc2 */
  goto L_10971dc2;
L_10971dbc:;
  /* 10971dbc mov ebp, dword ptr [0x109750d4] */
  EBP = (r32((uint32_t)(0x109750d4)));
L_10971dc2:;
  /* 10971dc2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10971dc4 call dword ptr [0x109750b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750b4))), 0x10971dcau);
  /* 10971dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971dcd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971dcf je 0x10971e6d */
  if (C.zf) goto L_10971e6d;
  /* 10971dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971dd7 push 0x10976748 */
  push32((uint32_t)(0x10976748u));
  /* 10971ddc call ebp */
  call_ind((uint32_t)(EBP), 0x10971ddeu);
  /* 10971dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971de1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971de3 jg 0x10971df5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10971df5;
  /* 10971de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971de7 push 0x10976740 */
  push32((uint32_t)(0x10976740u));
  /* 10971dec call ebp */
  call_ind((uint32_t)(EBP), 0x10971deeu);
  /* 10971dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971df3 jle 0x10971e6d */
  if ((C.zf||C.sf!=C.of)) goto L_10971e6d;
L_10971df5:;
  /* 10971df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971df7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10971df9 call edi */
  call_ind((uint32_t)(EDI), 0x10971dfbu);
  /* 10971dfb push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10971dfd call dword ptr [0x109750c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750c8))), 0x10971e03u);
  /* 10971e03 mov ebp, dword ptr [0x10975100] */
  EBP = (r32((uint32_t)(0x10975100)));
  /* 10971e09 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10971e0b call ebp */
  call_ind((uint32_t)(EBP), 0x10971e0du);
  /* 10971e0d push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10971e0f call ebp */
  call_ind((uint32_t)(EBP), 0x10971e11u);
  /* 10971e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971e13 push 0x10976788 */
  push32((uint32_t)(0x10976788u));
  /* 10971e18 call ebx */
  call_ind((uint32_t)(EBX), 0x10971e1au);
  /* 10971e1a mov ebp, dword ptr [0x10975110] */
  EBP = (r32((uint32_t)(0x10975110)));
  /* 10971e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971e22 push 4 */
  push32((uint32_t)(0x4u));
  /* 10971e24 call ebp */
  call_ind((uint32_t)(EBP), 0x10971e26u);
  /* 10971e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971e28 push 0x10976638 */
  push32((uint32_t)(0x10976638u));
  /* 10971e2d call ebx */
  call_ind((uint32_t)(EBX), 0x10971e2fu);
  /* 10971e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10971e31 push 4 */
  push32((uint32_t)(0x4u));
  /* 10971e33 call ebp */
  call_ind((uint32_t)(EBP), 0x10971e35u);
  /* 10971e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971e37 push 0x10976770 */
  push32((uint32_t)(0x10976770u));
  /* 10971e3c call ebx */
  call_ind((uint32_t)(EBX), 0x10971e3eu);
  /* 10971e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10971e40 push 4 */
  push32((uint32_t)(0x4u));
  /* 10971e42 call ebp */
  call_ind((uint32_t)(EBP), 0x10971e44u);
  /* 10971e44 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971e47 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10971e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971e4b call dword ptr [0x10975140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975140))), 0x10971e51u);
  /* 10971e51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10971e53 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10971e55 call edi */
  call_ind((uint32_t)(EDI), 0x10971e57u);
  /* 10971e57 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 10971e5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10971e5e call dword ptr [0x10975114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975114))), 0x10971e64u);
  /* 10971e64 mov ebp, dword ptr [0x109750d4] */
  EBP = (r32((uint32_t)(0x109750d4)));
  /* 10971e6a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971e6d:;
  /* 10971e6d mov ebx, dword ptr [0x109750b4] */
  EBX = (r32((uint32_t)(0x109750b4)));
  /* 10971e73 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10971e75 call ebx */
  call_ind((uint32_t)(EBX), 0x10971e77u);
  /* 10971e77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971e7a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971e7c je 0x10971e9d */
  if (C.zf) goto L_10971e9d;
  /* 10971e7e push 2 */
  push32((uint32_t)(0x2u));
  /* 10971e80 call dword ptr [0x1097510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097510c))), 0x10971e86u);
  /* 10971e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971e89 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971e8b je 0x10971e9d */
  if (C.zf) goto L_10971e9d;
  /* 10971e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10971e8f push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10971e91 call edi */
  call_ind((uint32_t)(EDI), 0x10971e93u);
  /* 10971e93 push 0x10976278 */
  push32((uint32_t)(0x10976278u));
  /* 10971e98 call esi */
  call_ind((uint32_t)(ESI), 0x10971e9au);
  /* 10971e9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971e9d:;
  /* 10971e9d push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10971e9f call ebx */
  call_ind((uint32_t)(EBX), 0x10971ea1u);
  /* 10971ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971ea4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971ea6 je 0x10971ee8 */
  if (C.zf) goto L_10971ee8;
  /* 10971ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971eaa push 0x10976790 */
  push32((uint32_t)(0x10976790u));
  /* 10971eaf call ebp */
  call_ind((uint32_t)(EBP), 0x10971eb1u);
  /* 10971eb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971eb6 jg 0x10971ed8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10971ed8;
  /* 10971eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971eba push 0x10976798 */
  push32((uint32_t)(0x10976798u));
  /* 10971ebf call ebp */
  call_ind((uint32_t)(EBP), 0x10971ec1u);
  /* 10971ec1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971ec6 jg 0x10971ed8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10971ed8;
  /* 10971ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971eca push 0x109767a0 */
  push32((uint32_t)(0x109767a0u));
  /* 10971ecf call ebp */
  call_ind((uint32_t)(EBP), 0x10971ed1u);
  /* 10971ed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971ed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971ed6 jle 0x10971ee8 */
  if ((C.zf||C.sf!=C.of)) goto L_10971ee8;
L_10971ed8:;
  /* 10971ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971eda push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10971edc call edi */
  call_ind((uint32_t)(EDI), 0x10971edeu);
  /* 10971ede push 0x10976270 */
  push32((uint32_t)(0x10976270u));
  /* 10971ee3 call esi */
  call_ind((uint32_t)(ESI), 0x10971ee5u);
  /* 10971ee5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971ee8:;
  /* 10971ee8 mov ebp, dword ptr [0x109750b4] */
  EBP = (r32((uint32_t)(0x109750b4)));
  /* 10971eee push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10971ef0 call ebp */
  call_ind((uint32_t)(EBP), 0x10971ef2u);
  /* 10971ef2 mov ebx, dword ptr [0x1097511c] */
  EBX = (r32((uint32_t)(0x1097511c)));
  /* 10971ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971efb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971efd je 0x10971f1a */
  if (C.zf) goto L_10971f1a;
  /* 10971eff push 1 */
  push32((uint32_t)(0x1u));
  /* 10971f01 call ebx */
  call_ind((uint32_t)(EBX), 0x10971f03u);
  /* 10971f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f06 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f08 je 0x10971f1a */
  if (C.zf) goto L_10971f1a;
  /* 10971f0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10971f0c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10971f0e call edi */
  call_ind((uint32_t)(EDI), 0x10971f10u);
  /* 10971f10 push 0x10976268 */
  push32((uint32_t)(0x10976268u));
  /* 10971f15 call esi */
  call_ind((uint32_t)(ESI), 0x10971f17u);
  /* 10971f17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971f1a:;
  /* 10971f1a push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10971f1c call ebp */
  call_ind((uint32_t)(EBP), 0x10971f1eu);
  /* 10971f1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f21 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f23 je 0x10971f40 */
  if (C.zf) goto L_10971f40;
  /* 10971f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10971f27 call ebx */
  call_ind((uint32_t)(EBX), 0x10971f29u);
  /* 10971f29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f2c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f2e je 0x10971f40 */
  if (C.zf) goto L_10971f40;
  /* 10971f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971f32 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10971f34 call edi */
  call_ind((uint32_t)(EDI), 0x10971f36u);
  /* 10971f36 push 0x10976260 */
  push32((uint32_t)(0x10976260u));
  /* 10971f3b call esi */
  call_ind((uint32_t)(ESI), 0x10971f3du);
  /* 10971f3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971f40:;
  /* 10971f40 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10971f42 call ebp */
  call_ind((uint32_t)(EBP), 0x10971f44u);
  /* 10971f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f49 je 0x10971f66 */
  if (C.zf) goto L_10971f66;
  /* 10971f4b push 3 */
  push32((uint32_t)(0x3u));
  /* 10971f4d call ebx */
  call_ind((uint32_t)(EBX), 0x10971f4fu);
  /* 10971f4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f52 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f54 je 0x10971f66 */
  if (C.zf) goto L_10971f66;
  /* 10971f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971f58 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10971f5a call edi */
  call_ind((uint32_t)(EDI), 0x10971f5cu);
  /* 10971f5c push 0x10976258 */
  push32((uint32_t)(0x10976258u));
  /* 10971f61 call esi */
  call_ind((uint32_t)(ESI), 0x10971f63u);
  /* 10971f63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10971f66:;
  /* 10971f66 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10971f68 call ebp */
  call_ind((uint32_t)(EBP), 0x10971f6au);
  /* 10971f6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f6f je 0x10971fa8 */
  if (C.zf) goto L_10971fa8;
  /* 10971f71 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10971f73 call ebp */
  call_ind((uint32_t)(EBP), 0x10971f75u);
  /* 10971f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f78 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f7a jne 0x10971fa8 */
  if (!C.zf) goto L_10971fa8;
  /* 10971f7c push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10971f7e call ebp */
  call_ind((uint32_t)(EBP), 0x10971f80u);
  /* 10971f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f85 jne 0x10971fa8 */
  if (!C.zf) goto L_10971fa8;
  /* 10971f87 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10971f89 call ebp */
  call_ind((uint32_t)(EBP), 0x10971f8bu);
  /* 10971f8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971f8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971f90 jne 0x10971fa8 */
  if (!C.zf) goto L_10971fa8;
  /* 10971f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971f94 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10971f96 call edi */
  call_ind((uint32_t)(EDI), 0x10971f98u);
  /* 10971f98 push 0x10976250 */
  push32((uint32_t)(0x10976250u));
  /* 10971f9d call esi */
  call_ind((uint32_t)(ESI), 0x10971f9fu);
  /* 10971f9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971fa2 call dword ptr [0x10975120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975120))), 0x10971fa8u);
L_10971fa8:;
  /* 10971fa8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10971faa call ebp */
  call_ind((uint32_t)(EBP), 0x10971facu);
  /* 10971fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971faf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10971fb1 je 0x10971fdc */
  if (C.zf) goto L_10971fdc;
  /* 10971fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10971fb5 push 0x10976710 */
  push32((uint32_t)(0x10976710u));
  /* 10971fba call dword ptr [0x109750fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750fc))), 0x10971fc0u);
  /* 10971fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10971fc5 jne 0x10971fdc */
  if (!C.zf) goto L_10971fdc;
  /* 10971fc7 push eax */
  push32((uint32_t)(EAX));
  /* 10971fc8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10971fca call edi */
  call_ind((uint32_t)(EDI), 0x10971fccu);
  /* 10971fcc push 0x10976248 */
  push32((uint32_t)(0x10976248u));
  /* 10971fd1 call esi */
  call_ind((uint32_t)(ESI), 0x10971fd3u);
  /* 10971fd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10971fd6 call dword ptr [0x10975118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975118))), 0x10971fdcu);
L_10971fdc:;
  /* 10971fdc pop edi */
  EDI = (pop32());
  /* 10971fdd pop esi */
  ESI = (pop32());
  /* 10971fde pop ebp */
  EBP = (pop32());
  /* 10971fdf pop ebx */
  EBX = (pop32());
  /* 10971fe0 ret  */
  ESPCHK(0x10971320u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ff0 @ 0x10971ff0 (217 bytes, 57 insns) */
void f_10971ff0(void) {
  FTRACE(0x10971ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10971ff0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10971ff4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10971ff7 jne 0x10972085 */
  if (!C.zf) goto L_10972085;
  /* 10971ffd call dword ptr [0x1097508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097508c))), 0x10972003u);
  /* 10972003 push 1 */
  push32((uint32_t)(0x1u));
  /* 10972005 mov dword ptr [0x109767c4], eax */
  w32((uint32_t)(0x109767c4), (EAX));
  /* 1097200a call 0x10972a24 */
  push32(0x1097200fu); f_10972a24();
  /* 1097200f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972011 pop ecx */
  ECX = (pop32());
  /* 10972012 je 0x10972050 */
  if (C.zf) goto L_10972050;
  /* 10972014 mov eax, dword ptr [0x109767c4] */
  EAX = (r32((uint32_t)(0x109767c4)));
  /* 10972019 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1097201b mov cl, byte ptr [0x109767c5] */
  CL = (r8((uint32_t)(0x109767c5)));
  /* 10972021 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10972026 shr dword ptr [0x109767c4], 0x10 */
  w32((uint32_t)(0x109767c4), (sh_shr((uint32_t)(r32((uint32_t)(0x109767c4))), (0x10u)&0x1f, 32)));
  /* 1097202d mov dword ptr [0x109767cc], eax */
  w32((uint32_t)(0x109767cc), (EAX));
  /* 10972032 mov dword ptr [0x109767d0], ecx */
  w32((uint32_t)(0x109767d0), (ECX));
  /* 10972038 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1097203b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1097203d mov dword ptr [0x109767c8], eax */
  w32((uint32_t)(0x109767c8), (EAX));
  /* 10972042 call 0x109722b7 */
  push32(0x10972047u); f_109722b7();
  /* 10972047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972049 jne 0x10972054 */
  if (!C.zf) goto L_10972054;
  /* 1097204b call 0x10972a60 */
  push32(0x10972050u); f_10972a60();
L_10972050:;
  /* 10972050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10972052 jmp 0x109720c6 */
  goto L_109720c6;
L_10972054:;
  /* 10972054 call dword ptr [0x10975088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975088))), 0x1097205au);
  /* 1097205a mov dword ptr [0x10976d18], eax */
  w32((uint32_t)(0x10976d18), (EAX));
  /* 1097205f call 0x109728f2 */
  push32(0x10972064u); f_109728f2();
  /* 10972064 mov dword ptr [0x109767b0], eax */
  w32((uint32_t)(0x109767b0), (EAX));
  /* 10972069 call 0x109723dc */
  push32(0x1097206eu); f_109723dc();
  /* 1097206e call 0x109726a5 */
  push32(0x10972073u); f_109726a5();
  /* 10972073 call 0x109725ec */
  push32(0x10972078u); f_109725ec();
  /* 10972078 call 0x10972199 */
  push32(0x1097207du); f_10972199();
  /* 1097207d inc dword ptr [0x109767ac] */
  { uint32_t _r=(r32((uint32_t)(0x109767ac)))+1; w32((uint32_t)(0x109767ac), (_r)); fl_inc(_r,32); }
  /* 10972083 jmp 0x109720c3 */
  goto L_109720c3;
L_10972085:;
  /* 10972085 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10972087 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972089 jne 0x109720b7 */
  if (!C.zf) goto L_109720b7;
  /* 1097208b cmp dword ptr [0x109767ac], ecx */
  { uint32_t _a=(r32((uint32_t)(0x109767ac))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972091 jle 0x10972050 */
  if ((C.zf||C.sf!=C.of)) goto L_10972050;
  /* 10972093 dec dword ptr [0x109767ac] */
  { uint32_t _r=(r32((uint32_t)(0x109767ac)))-1; w32((uint32_t)(0x109767ac), (_r)); fl_dec(_r,32); }
  /* 10972099 cmp dword ptr [0x109767fc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x109767fc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097209f jne 0x109720a6 */
  if (!C.zf) goto L_109720a6;
  /* 109720a1 call 0x109721d7 */
  push32(0x109720a6u); f_109721d7();
L_109720a6:;
  /* 109720a6 call 0x10972598 */
  push32(0x109720abu); f_10972598();
  /* 109720ab call 0x1097230b */
  push32(0x109720b0u); f_1097230b();
  /* 109720b0 call 0x10972a60 */
  push32(0x109720b5u); f_10972a60();
  /* 109720b5 jmp 0x109720c3 */
  goto L_109720c3;
L_109720b7:;
  /* 109720b7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109720ba jne 0x109720c3 */
  if (!C.zf) goto L_109720c3;
  /* 109720bc push ecx */
  push32((uint32_t)(ECX));
  /* 109720bd call 0x1097233c */
  push32(0x109720c2u); f_1097233c();
  /* 109720c2 pop ecx */
  ECX = (pop32());
L_109720c3:;
  /* 109720c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109720c5 pop eax */
  EAX = (pop32());
L_109720c6:;
  /* 109720c6 ret 0xc */
  ESPCHK(0x10971ff0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x109720c9 (157 bytes, 73 insns) */
void f_109720c9(void) {
  FTRACE(0x109720c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109720c9 push ebp */
  push32((uint32_t)(EBP));
  /* 109720ca mov ebp, esp */
  EBP = (ESP);
  /* 109720cc push ebx */
  push32((uint32_t)(EBX));
  /* 109720cd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 109720d0 push esi */
  push32((uint32_t)(ESI));
  /* 109720d1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109720d4 push edi */
  push32((uint32_t)(EDI));
  /* 109720d5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 109720d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109720da jne 0x109720e5 */
  if (!C.zf) goto L_109720e5;
  /* 109720dc cmp dword ptr [0x109767ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109767ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109720e3 jmp 0x1097210b */
  goto L_1097210b;
L_109720e5:;
  /* 109720e5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109720e8 je 0x109720ef */
  if (C.zf) goto L_109720ef;
  /* 109720ea cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109720ed jne 0x10972111 */
  if (!C.zf) goto L_10972111;
L_109720ef:;
  /* 109720ef mov eax, dword ptr [0x10976d1c] */
  EAX = (r32((uint32_t)(0x10976d1c)));
  /* 109720f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109720f6 je 0x10972101 */
  if (C.zf) goto L_10972101;
  /* 109720f8 push edi */
  push32((uint32_t)(EDI));
  /* 109720f9 push esi */
  push32((uint32_t)(ESI));
  /* 109720fa push ebx */
  push32((uint32_t)(EBX));
  /* 109720fb call eax */
  call_ind((uint32_t)(EAX), 0x109720fdu);
  /* 109720fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109720ff je 0x1097210d */
  if (C.zf) goto L_1097210d;
L_10972101:;
  /* 10972101 push edi */
  push32((uint32_t)(EDI));
  /* 10972102 push esi */
  push32((uint32_t)(ESI));
  /* 10972103 push ebx */
  push32((uint32_t)(EBX));
  /* 10972104 call 0x10971ff0 */
  push32(0x10972109u); f_10971ff0();
  /* 10972109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_1097210b:;
  /* 1097210b jne 0x10972111 */
  if (!C.zf) goto L_10972111;
L_1097210d:;
  /* 1097210d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1097210f jmp 0x1097215f */
  goto L_1097215f;
L_10972111:;
  /* 10972111 push edi */
  push32((uint32_t)(EDI));
  /* 10972112 push esi */
  push32((uint32_t)(ESI));
  /* 10972113 push ebx */
  push32((uint32_t)(EBX));
  /* 10972114 call 0x10971300 */
  push32(0x10972119u); f_10971300();
  /* 10972119 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097211c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1097211f jne 0x1097212d */
  if (!C.zf) goto L_1097212d;
  /* 10972121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972123 jne 0x1097215c */
  if (!C.zf) goto L_1097215c;
  /* 10972125 push edi */
  push32((uint32_t)(EDI));
  /* 10972126 push eax */
  push32((uint32_t)(EAX));
  /* 10972127 push ebx */
  push32((uint32_t)(EBX));
  /* 10972128 call 0x10971ff0 */
  push32(0x1097212du); f_10971ff0();
L_1097212d:;
  /* 1097212d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1097212f je 0x10972136 */
  if (C.zf) goto L_10972136;
  /* 10972131 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972134 jne 0x1097215c */
  if (!C.zf) goto L_1097215c;
L_10972136:;
  /* 10972136 push edi */
  push32((uint32_t)(EDI));
  /* 10972137 push esi */
  push32((uint32_t)(ESI));
  /* 10972138 push ebx */
  push32((uint32_t)(EBX));
  /* 10972139 call 0x10971ff0 */
  push32(0x1097213eu); f_10971ff0();
  /* 1097213e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972140 jne 0x10972145 */
  if (!C.zf) goto L_10972145;
  /* 10972142 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10972145:;
  /* 10972145 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972149 je 0x1097215c */
  if (C.zf) goto L_1097215c;
  /* 1097214b mov eax, dword ptr [0x10976d1c] */
  EAX = (r32((uint32_t)(0x10976d1c)));
  /* 10972150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972152 je 0x1097215c */
  if (C.zf) goto L_1097215c;
  /* 10972154 push edi */
  push32((uint32_t)(EDI));
  /* 10972155 push esi */
  push32((uint32_t)(ESI));
  /* 10972156 push ebx */
  push32((uint32_t)(EBX));
  /* 10972157 call eax */
  call_ind((uint32_t)(EAX), 0x10972159u);
  /* 10972159 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1097215c:;
  /* 1097215c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1097215f:;
  /* 1097215f pop edi */
  EDI = (pop32());
  /* 10972160 pop esi */
  ESI = (pop32());
  /* 10972161 pop ebx */
  EBX = (pop32());
  /* 10972162 pop ebp */
  EBP = (pop32());
  /* 10972163 ret 0xc */
  ESPCHK(0x109720c9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10972166 (48 bytes, 15 insns) */
void f_10972166(void) {
  FTRACE(0x10972166u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972166 mov eax, dword ptr [0x109767b8] */
  EAX = (r32((uint32_t)(0x109767b8)));
  /* 1097216b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097216e je 0x1097217d */
  if (C.zf) goto L_1097217d;
  /* 10972170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972172 jne 0x10972182 */
  if (!C.zf) goto L_10972182;
  /* 10972174 cmp dword ptr [0x109767bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109767bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097217b jne 0x10972182 */
  if (!C.zf) goto L_10972182;
L_1097217d:;
  /* 1097217d call 0x10972ad5 */
  push32(0x10972182u); f_10972ad5();
L_10972182:;
  /* 10972182 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10972186 call 0x10972b0e */
  push32(0x1097218bu); f_10972b0e();
  /* 1097218b push 0xff */
  push32((uint32_t)(0xffu));
  /* 10972190 call dword ptr [0x109762cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109762cc))), 0x10972196u);
  /* 10972196 pop ecx */
  ECX = (pop32());
  /* 10972197 pop ecx */
  ECX = (pop32());
  /* 10972198 ret  */
  ESPCHK(0x10972166u, _esp0);
  ESP += 4; return;
}

/* FUN_10002199 @ 0x10972199 (45 bytes, 12 insns) */
void f_10972199(void) {
  FTRACE(0x10972199u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972199 mov eax, dword ptr [0x10976d14] */
  EAX = (r32((uint32_t)(0x10976d14)));
  /* 1097219e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109721a0 je 0x109721a4 */
  if (C.zf) goto L_109721a4;
  /* 109721a2 call eax */
  call_ind((uint32_t)(EAX), 0x109721a4u);
L_109721a4:;
  /* 109721a4 push 0x10976010 */
  push32((uint32_t)(0x10976010u));
  /* 109721a9 push 0x10976008 */
  push32((uint32_t)(0x10976008u));
  /* 109721ae call 0x1097229d */
  push32(0x109721b3u); f_1097229d();
  /* 109721b3 push 0x10976004 */
  push32((uint32_t)(0x10976004u));
  /* 109721b8 push 0x10976000 */
  push32((uint32_t)(0x10976000u));
  /* 109721bd call 0x1097229d */
  push32(0x109721c2u); f_1097229d();
  /* 109721c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109721c5 ret  */
  ESPCHK(0x10972199u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x109721c6 (17 bytes, 6 insns) */
void f_109721c6(void) {
  FTRACE(0x109721c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109721c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109721c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109721ca push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 109721ce call 0x109721e6 */
  push32(0x109721d3u); f_109721e6();
  /* 109721d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109721d6 ret  */
  ESPCHK(0x109721c6u, _esp0);
  ESP += 4; return;
}

/* FUN_100021d7 @ 0x109721d7 (15 bytes, 6 insns) */
void f_109721d7(void) {
  FTRACE(0x109721d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109721d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109721d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109721db push 0 */
  push32((uint32_t)(0x0u));
  /* 109721dd call 0x109721e6 */
  push32(0x109721e2u); f_109721e6();
  /* 109721e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109721e5 ret  */
  ESPCHK(0x109721d7u, _esp0);
  ESP += 4; return;
}

/* FUN_100021e6 @ 0x109721e6 (163 bytes, 53 insns) */
void f_109721e6(void) {
  FTRACE(0x109721e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109721e6 push edi */
  push32((uint32_t)(EDI));
  /* 109721e7 call 0x1097228b */
  push32(0x109721ecu); f_1097228b();
  /* 109721ec push 1 */
  push32((uint32_t)(0x1u));
  /* 109721ee pop edi */
  EDI = (pop32());
  /* 109721ef cmp dword ptr [0x10976800], edi */
  { uint32_t _a=(r32((uint32_t)(0x10976800))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109721f5 jne 0x10972208 */
  if (!C.zf) goto L_10972208;
  /* 109721f7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 109721fb call dword ptr [0x10975098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975098))), 0x10972201u);
  /* 10972201 push eax */
  push32((uint32_t)(EAX));
  /* 10972202 call dword ptr [0x10975094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975094))), 0x10972208u);
L_10972208:;
  /* 10972208 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097220d push ebx */
  push32((uint32_t)(EBX));
  /* 1097220e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10972212 mov dword ptr [0x109767fc], edi */
  w32((uint32_t)(0x109767fc), (EDI));
  /* 10972218 mov byte ptr [0x109767f8], bl */
  w8((uint32_t)(0x109767f8), (BL));
  /* 1097221e jne 0x1097225c */
  if (!C.zf) goto L_1097225c;
  /* 10972220 mov eax, dword ptr [0x10976d10] */
  EAX = (r32((uint32_t)(0x10976d10)));
  /* 10972225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972227 je 0x1097224b */
  if (C.zf) goto L_1097224b;
  /* 10972229 mov ecx, dword ptr [0x10976d0c] */
  ECX = (r32((uint32_t)(0x10976d0c)));
  /* 1097222f push esi */
  push32((uint32_t)(ESI));
  /* 10972230 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10972233 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972235 jb 0x1097224a */
  if (C.cf) goto L_1097224a;
L_10972237:;
  /* 10972237 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10972239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097223b je 0x1097223f */
  if (C.zf) goto L_1097223f;
  /* 1097223d call eax */
  call_ind((uint32_t)(EAX), 0x1097223fu);
L_1097223f:;
  /* 1097223f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10972242 cmp esi, dword ptr [0x10976d10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10976d10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972248 jae 0x10972237 */
  if (!C.cf) goto L_10972237;
L_1097224a:;
  /* 1097224a pop esi */
  ESI = (pop32());
L_1097224b:;
  /* 1097224b push 0x10976018 */
  push32((uint32_t)(0x10976018u));
  /* 10972250 push 0x10976014 */
  push32((uint32_t)(0x10976014u));
  /* 10972255 call 0x1097229d */
  push32(0x1097225au); f_1097229d();
  /* 1097225a pop ecx */
  ECX = (pop32());
  /* 1097225b pop ecx */
  ECX = (pop32());
L_1097225c:;
  /* 1097225c push 0x10976020 */
  push32((uint32_t)(0x10976020u));
  /* 10972261 push 0x1097601c */
  push32((uint32_t)(0x1097601cu));
  /* 10972266 call 0x1097229d */
  push32(0x1097226bu); f_1097229d();
  /* 1097226b pop ecx */
  ECX = (pop32());
  /* 1097226c pop ecx */
  ECX = (pop32());
  /* 1097226d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1097226f pop ebx */
  EBX = (pop32());
  /* 10972270 je 0x10972279 */
  if (C.zf) goto L_10972279;
  /* 10972272 call 0x10972294 */
  push32(0x10972277u); f_10972294();
  /* 10972277 pop edi */
  EDI = (pop32());
  /* 10972278 ret  */
  ESPCHK(0x109721e6u, _esp0);
  ESP += 4; return;
L_10972279:;
  /* 10972279 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1097227d mov dword ptr [0x10976800], edi */
  w32((uint32_t)(0x10976800), (EDI));
  /* 10972283 call dword ptr [0x10975090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975090))), 0x10972289u);
  /* 10972289 pop edi */
  EDI = (pop32());
  /* 1097228a ret  */
  ESPCHK(0x109721e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000228b @ 0x1097228b (9 bytes, 4 insns) */
void f_1097228b(void) {
  FTRACE(0x1097228bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1097228b push 0xd */
  push32((uint32_t)(0xdu));
  /* 1097228d call 0x10972cf6 */
  push32(0x10972292u); f_10972cf6();
  /* 10972292 pop ecx */
  ECX = (pop32());
  /* 10972293 ret  */
  ESPCHK(0x1097228bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002294 @ 0x10972294 (9 bytes, 4 insns) */
void f_10972294(void) {
  FTRACE(0x10972294u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972294 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10972296 call 0x10972d57 */
  push32(0x1097229bu); f_10972d57();
  /* 1097229b pop ecx */
  ECX = (pop32());
  /* 1097229c ret  */
  ESPCHK(0x10972294u, _esp0);
  ESP += 4; return;
}

/* FUN_1000229d @ 0x1097229d (26 bytes, 12 insns) */
void f_1097229d(void) {
  FTRACE(0x1097229du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1097229d push esi */
  push32((uint32_t)(ESI));
  /* 1097229e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_109722a2:;
  /* 109722a2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109722a6 jae 0x109722b5 */
  if (!C.cf) goto L_109722b5;
  /* 109722a8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 109722aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109722ac je 0x109722b0 */
  if (C.zf) goto L_109722b0;
  /* 109722ae call eax */
  call_ind((uint32_t)(EAX), 0x109722b0u);
L_109722b0:;
  /* 109722b0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109722b3 jmp 0x109722a2 */
  goto L_109722a2;
L_109722b5:;
  /* 109722b5 pop esi */
  ESI = (pop32());
  /* 109722b6 ret  */
  ESPCHK(0x1097229du, _esp0);
  ESP += 4; return;
}

/* FUN_100022b7 @ 0x109722b7 (84 bytes, 32 insns) */
void f_109722b7(void) {
  FTRACE(0x109722b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109722b7 push esi */
  push32((uint32_t)(ESI));
  /* 109722b8 call 0x10972c61 */
  push32(0x109722bdu); f_10972c61();
  /* 109722bd call dword ptr [0x109750a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750a0))), 0x109722c3u);
  /* 109722c3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109722c6 mov dword ptr [0x109762d0], eax */
  w32((uint32_t)(0x109762d0), (EAX));
  /* 109722cb je 0x10972307 */
  if (C.zf) goto L_10972307;
  /* 109722cd push 0x74 */
  push32((uint32_t)(0x74u));
  /* 109722cf push 1 */
  push32((uint32_t)(0x1u));
  /* 109722d1 call 0x10972d6c */
  push32(0x109722d6u); f_10972d6c();
  /* 109722d6 mov esi, eax */
  ESI = (EAX);
  /* 109722d8 pop ecx */
  ECX = (pop32());
  /* 109722d9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109722db pop ecx */
  ECX = (pop32());
  /* 109722dc je 0x10972307 */
  if (C.zf) goto L_10972307;
  /* 109722de push esi */
  push32((uint32_t)(ESI));
  /* 109722df push dword ptr [0x109762d0] */
  push32((uint32_t)(r32((uint32_t)(0x109762d0))));
  /* 109722e5 call dword ptr [0x10975004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975004))), 0x109722ebu);
  /* 109722eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109722ed je 0x10972307 */
  if (C.zf) goto L_10972307;
  /* 109722ef push esi */
  push32((uint32_t)(ESI));
  /* 109722f0 call 0x10972329 */
  push32(0x109722f5u); f_10972329();
  /* 109722f5 pop ecx */
  ECX = (pop32());
  /* 109722f6 call dword ptr [0x10975000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975000))), 0x109722fcu);
  /* 109722fc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10972300 push 1 */
  push32((uint32_t)(0x1u));
  /* 10972302 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10972304 pop eax */
  EAX = (pop32());
  /* 10972305 pop esi */
  ESI = (pop32());
  /* 10972306 ret  */
  ESPCHK(0x109722b7u, _esp0);
  ESP += 4; return;
L_10972307:;
  /* 10972307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10972309 pop esi */
  ESI = (pop32());
  /* 1097230a ret  */
  ESPCHK(0x109722b7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000230b @ 0x1097230b (30 bytes, 8 insns) */
void f_1097230b(void) {
  FTRACE(0x1097230bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1097230b call 0x10972c8a */
  push32(0x10972310u); f_10972c8a();
  /* 10972310 mov eax, dword ptr [0x109762d0] */
  EAX = (r32((uint32_t)(0x109762d0)));
  /* 10972315 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972318 je 0x10972328 */
  if (C.zf) goto L_10972328;
  /* 1097231a push eax */
  push32((uint32_t)(EAX));
  /* 1097231b call dword ptr [0x109750a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750a4))), 0x10972321u);
  /* 10972321 or dword ptr [0x109762d0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x109762d0)))|(0xffffffffu); w32((uint32_t)(0x109762d0), (_r)); fl_logic(_r,32); }
L_10972328:;
  /* 10972328 ret  */
  ESPCHK(0x1097230bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002329 @ 0x10972329 (19 bytes, 4 insns) */
void f_10972329(void) {
  FTRACE(0x10972329u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972329 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1097232d mov dword ptr [eax + 0x50], 0x10976450 */
  w32((uint32_t)(EAX + 0x50), (0x10976450u));
  /* 10972334 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 1097233b ret  */
  ESPCHK(0x10972329u, _esp0);
  ESP += 4; return;
}

/* FUN_1000233c @ 0x1097233c (160 bytes, 62 insns) */
void f_1097233c(void) {
  FTRACE(0x1097233cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1097233c mov eax, dword ptr [0x109762d0] */
  EAX = (r32((uint32_t)(0x109762d0)));
  /* 10972341 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972344 je 0x109723db */
  if (C.zf) goto L_109723db;
  /* 1097234a push esi */
  push32((uint32_t)(ESI));
  /* 1097234b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1097234f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10972351 jne 0x10972360 */
  if (!C.zf) goto L_10972360;
  /* 10972353 push eax */
  push32((uint32_t)(EAX));
  /* 10972354 call dword ptr [0x109750a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109750a8))), 0x1097235au);
  /* 1097235a mov esi, eax */
  ESI = (EAX);
  /* 1097235c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1097235e je 0x109723cc */
  if (C.zf) goto L_109723cc;
L_10972360:;
  /* 10972360 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10972363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972365 je 0x1097236e */
  if (C.zf) goto L_1097236e;
  /* 10972367 push eax */
  push32((uint32_t)(EAX));
  /* 10972368 call 0x10972df9 */
  push32(0x1097236du); f_10972df9();
  /* 1097236d pop ecx */
  ECX = (pop32());
L_1097236e:;
  /* 1097236e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10972371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972373 je 0x1097237c */
  if (C.zf) goto L_1097237c;
  /* 10972375 push eax */
  push32((uint32_t)(EAX));
  /* 10972376 call 0x10972df9 */
  push32(0x1097237bu); f_10972df9();
  /* 1097237b pop ecx */
  ECX = (pop32());
L_1097237c:;
  /* 1097237c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 1097237f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972381 je 0x1097238a */
  if (C.zf) goto L_1097238a;
  /* 10972383 push eax */
  push32((uint32_t)(EAX));
  /* 10972384 call 0x10972df9 */
  push32(0x10972389u); f_10972df9();
  /* 10972389 pop ecx */
  ECX = (pop32());
L_1097238a:;
  /* 1097238a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 1097238d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097238f je 0x10972398 */
  if (C.zf) goto L_10972398;
  /* 10972391 push eax */
  push32((uint32_t)(EAX));
  /* 10972392 call 0x10972df9 */
  push32(0x10972397u); f_10972df9();
  /* 10972397 pop ecx */
  ECX = (pop32());
L_10972398:;
  /* 10972398 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1097239b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097239d je 0x109723a6 */
  if (C.zf) goto L_109723a6;
  /* 1097239f push eax */
  push32((uint32_t)(EAX));
  /* 109723a0 call 0x10972df9 */
  push32(0x109723a5u); f_10972df9();
  /* 109723a5 pop ecx */
  ECX = (pop32());
L_109723a6:;
  /* 109723a6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 109723a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109723ab je 0x109723b4 */
  if (C.zf) goto L_109723b4;
  /* 109723ad push eax */
  push32((uint32_t)(EAX));
  /* 109723ae call 0x10972df9 */
  push32(0x109723b3u); f_10972df9();
  /* 109723b3 pop ecx */
  ECX = (pop32());
L_109723b4:;
  /* 109723b4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 109723b7 cmp eax, 0x10976450 */
  { uint32_t _a=(EAX),_b=(0x10976450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109723bc je 0x109723c5 */
  if (C.zf) goto L_109723c5;
  /* 109723be push eax */
  push32((uint32_t)(EAX));
  /* 109723bf call 0x10972df9 */
  push32(0x109723c4u); f_10972df9();
  /* 109723c4 pop ecx */
  ECX = (pop32());
L_109723c5:;
  /* 109723c5 push esi */
  push32((uint32_t)(ESI));
  /* 109723c6 call 0x10972df9 */
  push32(0x109723cbu); f_10972df9();
  /* 109723cb pop ecx */
  ECX = (pop32());
L_109723cc:;
  /* 109723cc push 0 */
  push32((uint32_t)(0x0u));
  /* 109723ce push dword ptr [0x109762d0] */
  push32((uint32_t)(r32((uint32_t)(0x109762d0))));
  /* 109723d4 call dword ptr [0x10975004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975004))), 0x109723dau);
  /* 109723da pop esi */
  ESI = (pop32());
L_109723db:;
  /* 109723db ret  */
  ESPCHK(0x1097233cu, _esp0);
  ESP += 4; return;
}

/* FUN_100023dc @ 0x109723dc (444 bytes, 150 insns) */
void f_109723dc(void) {
  FTRACE(0x109723dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109723dc push ebp */
  push32((uint32_t)(EBP));
  /* 109723dd mov ebp, esp */
  EBP = (ESP);
  /* 109723df sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109723e2 push ebx */
  push32((uint32_t)(EBX));
  /* 109723e3 push esi */
  push32((uint32_t)(ESI));
  /* 109723e4 push edi */
  push32((uint32_t)(EDI));
  /* 109723e5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 109723ea call 0x10972e41 */
  push32(0x109723efu); f_10972e41();
  /* 109723ef mov esi, eax */
  ESI = (EAX);
  /* 109723f1 pop ecx */
  ECX = (pop32());
  /* 109723f2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109723f4 jne 0x109723fe */
  if (!C.zf) goto L_109723fe;
  /* 109723f6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 109723f8 call 0x10972166 */
  push32(0x109723fdu); f_10972166();
  /* 109723fd pop ecx */
  ECX = (pop32());
L_109723fe:;
  /* 109723fe mov dword ptr [0x10976c00], esi */
  w32((uint32_t)(0x10976c00), (ESI));
  /* 10972404 mov dword ptr [0x10976d00], 0x20 */
  w32((uint32_t)(0x10976d00), (0x20u));
  /* 1097240e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10972414:;
  /* 10972414 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972416 jae 0x10972436 */
  if (!C.cf) goto L_10972436;
  /* 10972418 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1097241c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1097241f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10972423 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10972427 mov eax, dword ptr [0x10976c00] */
  EAX = (r32((uint32_t)(0x10976c00)));
  /* 1097242c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1097242f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10972434 jmp 0x10972414 */
  goto L_10972414;
L_10972436:;
  /* 10972436 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10972439 push eax */
  push32((uint32_t)(EAX));
  /* 1097243a call dword ptr [0x10975084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975084))), 0x10972440u);
  /* 10972440 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10972445 je 0x1097251c */
  if (C.zf) goto L_1097251c;
  /* 1097244b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1097244e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972450 je 0x1097251c */
  if (C.zf) goto L_1097251c;
  /* 10972456 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10972458 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1097245b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 1097245e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10972461 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10972466 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972468 jl 0x1097246c */
  if ((C.sf!=C.of)) goto L_1097246c;
  /* 1097246a mov edi, eax */
  EDI = (EAX);
L_1097246c:;
  /* 1097246c cmp dword ptr [0x10976d00], edi */
  { uint32_t _a=(r32((uint32_t)(0x10976d00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972472 jge 0x109724ca */
  if ((C.sf==C.of)) goto L_109724ca;
  /* 10972474 mov esi, 0x10976c04 */
  ESI = (0x10976c04u);
L_10972479:;
  /* 10972479 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1097247e call 0x10972e41 */
  push32(0x10972483u); f_10972e41();
  /* 10972483 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972485 pop ecx */
  ECX = (pop32());
  /* 10972486 je 0x109724c4 */
  if (C.zf) goto L_109724c4;
  /* 10972488 add dword ptr [0x10976d00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10976d00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10976d00), (_r)); fl_add(_a,_b,_r,32); }
  /* 1097248f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10972491 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10972497:;
  /* 10972497 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972499 jae 0x109724b7 */
  if (!C.cf) goto L_109724b7;
  /* 1097249b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1097249f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 109724a2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 109724a6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 109724aa mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 109724ac add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109724af add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109724b5 jmp 0x10972497 */
  goto L_10972497;
L_109724b7:;
  /* 109724b7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109724ba cmp dword ptr [0x10976d00], edi */
  { uint32_t _a=(r32((uint32_t)(0x10976d00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109724c0 jl 0x10972479 */
  if ((C.sf!=C.of)) goto L_10972479;
  /* 109724c2 jmp 0x109724ca */
  goto L_109724ca;
L_109724c4:;
  /* 109724c4 mov edi, dword ptr [0x10976d00] */
  EDI = (r32((uint32_t)(0x10976d00)));
L_109724ca:;
  /* 109724ca xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 109724cc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109724ce jle 0x1097251c */
  if ((C.zf||C.sf!=C.of)) goto L_1097251c;
L_109724d0:;
  /* 109724d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 109724d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109724d5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109724d8 je 0x10972512 */
  if (C.zf) goto L_10972512;
  /* 109724da mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 109724dc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 109724de je 0x10972512 */
  if (C.zf) goto L_10972512;
  /* 109724e0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 109724e2 jne 0x109724ef */
  if (!C.zf) goto L_109724ef;
  /* 109724e4 push ecx */
  push32((uint32_t)(ECX));
  /* 109724e5 call dword ptr [0x1097507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097507c))), 0x109724ebu);
  /* 109724eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109724ed je 0x10972512 */
  if (C.zf) goto L_10972512;
L_109724ef:;
  /* 109724ef mov ecx, esi */
  ECX = (ESI);
  /* 109724f1 mov eax, esi */
  EAX = (ESI);
  /* 109724f3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 109724f6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 109724f9 mov ecx, dword ptr [ecx*4 + 0x10976c00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10976c00)));
  /* 10972500 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10972503 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10972506 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10972509 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1097250b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1097250d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 1097250f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10972512:;
  /* 10972512 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10972516 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10972517 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10972518 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097251a jl 0x109724d0 */
  if ((C.sf!=C.of)) goto L_109724d0;
L_1097251c:;
  /* 1097251c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1097251e:;
  /* 1097251e mov ecx, dword ptr [0x10976c00] */
  ECX = (r32((uint32_t)(0x10976c00)));
  /* 10972524 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10972527 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097252b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1097252e jne 0x1097257d */
  if (!C.zf) goto L_1097257d;
  /* 10972530 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10972532 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10972536 jne 0x1097253d */
  if (!C.zf) goto L_1097253d;
  /* 10972538 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1097253a pop eax */
  EAX = (pop32());
  /* 1097253b jmp 0x10972547 */
  goto L_10972547;
L_1097253d:;
  /* 1097253d mov eax, ebx */
  EAX = (EBX);
  /* 1097253f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10972540 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10972542 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10972544 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10972547:;
  /* 10972547 push eax */
  push32((uint32_t)(EAX));
  /* 10972548 call dword ptr [0x10975080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975080))), 0x1097254eu);
  /* 1097254e mov edi, eax */
  EDI = (EAX);
  /* 10972550 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972553 je 0x1097256c */
  if (C.zf) goto L_1097256c;
  /* 10972555 push edi */
  push32((uint32_t)(EDI));
  /* 10972556 call dword ptr [0x1097507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097507c))), 0x1097255cu);
  /* 1097255c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097255e je 0x1097256c */
  if (C.zf) goto L_1097256c;
  /* 10972560 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10972565 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10972567 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097256a jne 0x10972572 */
  if (!C.zf) goto L_10972572;
L_1097256c:;
  /* 1097256c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10972570 jmp 0x10972581 */
  goto L_10972581;
L_10972572:;
  /* 10972572 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972575 jne 0x10972581 */
  if (!C.zf) goto L_10972581;
  /* 10972577 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1097257b jmp 0x10972581 */
  goto L_10972581;
L_1097257d:;
  /* 1097257d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10972581:;
  /* 10972581 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10972582 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972585 jl 0x1097251e */
  if ((C.sf!=C.of)) goto L_1097251e;
  /* 10972587 push dword ptr [0x10976d00] */
  push32((uint32_t)(r32((uint32_t)(0x10976d00))));
  /* 1097258d call dword ptr [0x1097509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097509c))), 0x10972593u);
  /* 10972593 pop edi */
  EDI = (pop32());
  /* 10972594 pop esi */
  ESI = (pop32());
  /* 10972595 pop ebx */
  EBX = (pop32());
  /* 10972596 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10972597 ret  */
  ESPCHK(0x109723dcu, _esp0);
  ESP += 4; return;
}

/* FUN_10002598 @ 0x10972598 (84 bytes, 33 insns) */
void f_10972598(void) {
  FTRACE(0x10972598u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972598 push ebx */
  push32((uint32_t)(EBX));
  /* 10972599 push esi */
  push32((uint32_t)(ESI));
  /* 1097259a push edi */
  push32((uint32_t)(EDI));
  /* 1097259b mov esi, 0x10976c00 */
  ESI = (0x10976c00u);
L_109725a0:;
  /* 109725a0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 109725a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109725a4 je 0x109725dd */
  if (C.zf) goto L_109725dd;
  /* 109725a6 mov edi, eax */
  EDI = (EAX);
  /* 109725a8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109725ad cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109725af jae 0x109725d2 */
  if (!C.cf) goto L_109725d2;
  /* 109725b1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_109725b4:;
  /* 109725b4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109725b8 je 0x109725c1 */
  if (C.zf) goto L_109725c1;
  /* 109725ba push ebx */
  push32((uint32_t)(EBX));
  /* 109725bb call dword ptr [0x10975074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975074))), 0x109725c1u);
L_109725c1:;
  /* 109725c1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 109725c3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109725c6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109725cb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109725ce cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109725d0 jb 0x109725b4 */
  if (C.cf) goto L_109725b4;
L_109725d2:;
  /* 109725d2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 109725d4 call 0x10972df9 */
  push32(0x109725d9u); f_10972df9();
  /* 109725d9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 109725dc pop ecx */
  ECX = (pop32());
L_109725dd:;
  /* 109725dd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109725e0 cmp esi, 0x10976d00 */
  { uint32_t _a=(ESI),_b=(0x10976d00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109725e6 jl 0x109725a0 */
  if ((C.sf!=C.of)) goto L_109725a0;
  /* 109725e8 pop edi */
  EDI = (pop32());
  /* 109725e9 pop esi */
  ESI = (pop32());
  /* 109725ea pop ebx */
  EBX = (pop32());
  /* 109725eb ret  */
  ESPCHK(0x10972598u, _esp0);
  ESP += 4; return;
}

/* FUN_100025ec @ 0x109725ec (185 bytes, 71 insns) */
void f_109725ec(void) {
  FTRACE(0x109725ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109725ec push ebx */
  push32((uint32_t)(EBX));
  /* 109725ed xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109725ef cmp dword ptr [0x10976d08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10976d08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109725f5 push esi */
  push32((uint32_t)(ESI));
  /* 109725f6 push edi */
  push32((uint32_t)(EDI));
  /* 109725f7 jne 0x109725fe */
  if (!C.zf) goto L_109725fe;
  /* 109725f9 call 0x10973413 */
  push32(0x109725feu); f_10973413();
L_109725fe:;
  /* 109725fe mov esi, dword ptr [0x109767b0] */
  ESI = (r32((uint32_t)(0x109767b0)));
  /* 10972604 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10972606:;
  /* 10972606 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10972608 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1097260a je 0x1097261e */
  if (C.zf) goto L_1097261e;
  /* 1097260c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1097260e je 0x10972611 */
  if (C.zf) goto L_10972611;
  /* 10972610 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10972611:;
  /* 10972611 push esi */
  push32((uint32_t)(ESI));
  /* 10972612 call 0x10972fc0 */
  push32(0x10972617u); f_10972fc0();
  /* 10972617 pop ecx */
  ECX = (pop32());
  /* 10972618 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1097261c jmp 0x10972606 */
  goto L_10972606;
L_1097261e:;
  /* 1097261e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10972625 push eax */
  push32((uint32_t)(EAX));
  /* 10972626 call 0x10972e41 */
  push32(0x1097262bu); f_10972e41();
  /* 1097262b mov esi, eax */
  ESI = (EAX);
  /* 1097262d pop ecx */
  ECX = (pop32());
  /* 1097262e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972630 mov dword ptr [0x109767e0], esi */
  w32((uint32_t)(0x109767e0), (ESI));
  /* 10972636 jne 0x10972640 */
  if (!C.zf) goto L_10972640;
  /* 10972638 push 9 */
  push32((uint32_t)(0x9u));
  /* 1097263a call 0x10972166 */
  push32(0x1097263fu); f_10972166();
  /* 1097263f pop ecx */
  ECX = (pop32());
L_10972640:;
  /* 10972640 mov edi, dword ptr [0x109767b0] */
  EDI = (r32((uint32_t)(0x109767b0)));
  /* 10972646 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972648 je 0x10972683 */
  if (C.zf) goto L_10972683;
  /* 1097264a push ebp */
  push32((uint32_t)(EBP));
L_1097264b:;
  /* 1097264b push edi */
  push32((uint32_t)(EDI));
  /* 1097264c call 0x10972fc0 */
  push32(0x10972651u); f_10972fc0();
  /* 10972651 mov ebp, eax */
  EBP = (EAX);
  /* 10972653 pop ecx */
  ECX = (pop32());
  /* 10972654 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10972655 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972658 je 0x1097267c */
  if (C.zf) goto L_1097267c;
  /* 1097265a push ebp */
  push32((uint32_t)(EBP));
  /* 1097265b call 0x10972e41 */
  push32(0x10972660u); f_10972e41();
  /* 10972660 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972662 pop ecx */
  ECX = (pop32());
  /* 10972663 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10972665 jne 0x1097266f */
  if (!C.zf) goto L_1097266f;
  /* 10972667 push 9 */
  push32((uint32_t)(0x9u));
  /* 10972669 call 0x10972166 */
  push32(0x1097266eu); f_10972166();
  /* 1097266e pop ecx */
  ECX = (pop32());
L_1097266f:;
  /* 1097266f push edi */
  push32((uint32_t)(EDI));
  /* 10972670 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10972672 call 0x10972ed0 */
  push32(0x10972677u); f_10972ed0();
  /* 10972677 pop ecx */
  ECX = (pop32());
  /* 10972678 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1097267b pop ecx */
  ECX = (pop32());
L_1097267c:;
  /* 1097267c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1097267e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972680 jne 0x1097264b */
  if (!C.zf) goto L_1097264b;
  /* 10972682 pop ebp */
  EBP = (pop32());
L_10972683:;
  /* 10972683 push dword ptr [0x109767b0] */
  push32((uint32_t)(r32((uint32_t)(0x109767b0))));
  /* 10972689 call 0x10972df9 */
  push32(0x1097268eu); f_10972df9();
  /* 1097268e pop ecx */
  ECX = (pop32());
  /* 1097268f mov dword ptr [0x109767b0], ebx */
  w32((uint32_t)(0x109767b0), (EBX));
  /* 10972695 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10972697 pop edi */
  EDI = (pop32());
  /* 10972698 pop esi */
  ESI = (pop32());
  /* 10972699 mov dword ptr [0x10976d04], 1 */
  w32((uint32_t)(0x10976d04), (0x1u));
  /* 109726a3 pop ebx */
  EBX = (pop32());
  /* 109726a4 ret  */
  ESPCHK(0x109725ecu, _esp0);
  ESP += 4; return;
}

/* FUN_100026a5 @ 0x109726a5 (153 bytes, 62 insns) */
void f_109726a5(void) {
  FTRACE(0x109726a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109726a5 push ebp */
  push32((uint32_t)(EBP));
  /* 109726a6 mov ebp, esp */
  EBP = (ESP);
  /* 109726a8 push ecx */
  push32((uint32_t)(ECX));
  /* 109726a9 push ecx */
  push32((uint32_t)(ECX));
  /* 109726aa push ebx */
  push32((uint32_t)(EBX));
  /* 109726ab xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109726ad cmp dword ptr [0x10976d08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10976d08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109726b3 push esi */
  push32((uint32_t)(ESI));
  /* 109726b4 push edi */
  push32((uint32_t)(EDI));
  /* 109726b5 jne 0x109726bc */
  if (!C.zf) goto L_109726bc;
  /* 109726b7 call 0x10973413 */
  push32(0x109726bcu); f_10973413();
L_109726bc:;
  /* 109726bc mov esi, 0x10976804 */
  ESI = (0x10976804u);
  /* 109726c1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 109726c6 push esi */
  push32((uint32_t)(ESI));
  /* 109726c7 push ebx */
  push32((uint32_t)(EBX));
  /* 109726c8 call dword ptr [0x10975070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975070))), 0x109726ceu);
  /* 109726ce mov eax, dword ptr [0x10976d18] */
  EAX = (r32((uint32_t)(0x10976d18)));
  /* 109726d3 mov dword ptr [0x109767f0], esi */
  w32((uint32_t)(0x109767f0), (ESI));
  /* 109726d9 mov edi, esi */
  EDI = (ESI);
  /* 109726db cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109726dd je 0x109726e1 */
  if (C.zf) goto L_109726e1;
  /* 109726df mov edi, eax */
  EDI = (EAX);
L_109726e1:;
  /* 109726e1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109726e4 push eax */
  push32((uint32_t)(EAX));
  /* 109726e5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 109726e8 push eax */
  push32((uint32_t)(EAX));
  /* 109726e9 push ebx */
  push32((uint32_t)(EBX));
  /* 109726ea push ebx */
  push32((uint32_t)(EBX));
  /* 109726eb push edi */
  push32((uint32_t)(EDI));
  /* 109726ec call 0x1097273e */
  push32(0x109726f1u); f_1097273e();
  /* 109726f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109726f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109726f7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 109726fa push eax */
  push32((uint32_t)(EAX));
  /* 109726fb call 0x10972e41 */
  push32(0x10972700u); f_10972e41();
  /* 10972700 mov esi, eax */
  ESI = (EAX);
  /* 10972702 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10972705 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972707 jne 0x10972711 */
  if (!C.zf) goto L_10972711;
  /* 10972709 push 8 */
  push32((uint32_t)(0x8u));
  /* 1097270b call 0x10972166 */
  push32(0x10972710u); f_10972166();
  /* 10972710 pop ecx */
  ECX = (pop32());
L_10972711:;
  /* 10972711 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10972714 push eax */
  push32((uint32_t)(EAX));
  /* 10972715 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10972718 push eax */
  push32((uint32_t)(EAX));
  /* 10972719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1097271c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 1097271f push eax */
  push32((uint32_t)(EAX));
  /* 10972720 push esi */
  push32((uint32_t)(ESI));
  /* 10972721 push edi */
  push32((uint32_t)(EDI));
  /* 10972722 call 0x1097273e */
  push32(0x10972727u); f_1097273e();
  /* 10972727 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1097272a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097272d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1097272e mov dword ptr [0x109767d8], esi */
  w32((uint32_t)(0x109767d8), (ESI));
  /* 10972734 pop edi */
  EDI = (pop32());
  /* 10972735 pop esi */
  ESI = (pop32());
  /* 10972736 mov dword ptr [0x109767d4], eax */
  w32((uint32_t)(0x109767d4), (EAX));
  /* 1097273b pop ebx */
  EBX = (pop32());
  /* 1097273c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1097273d ret  */
  ESPCHK(0x109726a5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000273e @ 0x1097273e (436 bytes, 187 insns) */
void f_1097273e(void) {
  FTRACE(0x1097273eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1097273e push ebp */
  push32((uint32_t)(EBP));
  /* 1097273f mov ebp, esp */
  EBP = (ESP);
  /* 10972741 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10972744 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10972747 push ebx */
  push32((uint32_t)(EBX));
  /* 10972748 push esi */
  push32((uint32_t)(ESI));
  /* 10972749 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1097274c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1097274f push edi */
  push32((uint32_t)(EDI));
  /* 10972750 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10972753 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10972759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1097275c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1097275e je 0x10972768 */
  if (C.zf) goto L_10972768;
  /* 10972760 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10972762 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10972765 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10972768:;
  /* 10972768 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1097276b jne 0x109727b1 */
  if (!C.zf) goto L_109727b1;
L_1097276d:;
  /* 1097276d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10972770 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10972771 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972774 je 0x1097279f */
  if (C.zf) goto L_1097279f;
  /* 10972776 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10972778 je 0x1097279f */
  if (C.zf) goto L_1097279f;
  /* 1097277a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1097277d test byte ptr [edx + 0x10976ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10976ae1)))&(0x4u); fl_logic(_r,8); }
  /* 10972784 je 0x10972792 */
  if (C.zf) goto L_10972792;
  /* 10972786 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10972788 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1097278a je 0x10972792 */
  if (C.zf) goto L_10972792;
  /* 1097278c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1097278e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10972790 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10972791 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10972792:;
  /* 10972792 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10972794 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10972796 je 0x1097276d */
  if (C.zf) goto L_1097276d;
  /* 10972798 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1097279a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1097279c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1097279d jmp 0x1097276d */
  goto L_1097276d;
L_1097279f:;
  /* 1097279f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109727a1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109727a3 je 0x109727a9 */
  if (C.zf) goto L_109727a9;
  /* 109727a5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 109727a8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109727a9:;
  /* 109727a9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109727ac jne 0x109727f4 */
  if (!C.zf) goto L_109727f4;
  /* 109727ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109727af jmp 0x109727f4 */
  goto L_109727f4;
L_109727b1:;
  /* 109727b1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109727b3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109727b5 je 0x109727bc */
  if (C.zf) goto L_109727bc;
  /* 109727b7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109727b9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 109727bb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109727bc:;
  /* 109727bc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109727be inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109727bf movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 109727c2 test byte ptr [ebx + 0x10976ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10976ae1)))&(0x4u); fl_logic(_r,8); }
  /* 109727c9 je 0x109727d7 */
  if (C.zf) goto L_109727d7;
  /* 109727cb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109727cd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109727cf je 0x109727d6 */
  if (C.zf) goto L_109727d6;
  /* 109727d1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 109727d3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 109727d5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109727d6:;
  /* 109727d6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_109727d7:;
  /* 109727d7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109727da je 0x109727e5 */
  if (C.zf) goto L_109727e5;
  /* 109727dc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109727de je 0x109727e9 */
  if (C.zf) goto L_109727e9;
  /* 109727e0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109727e3 jne 0x109727b1 */
  if (!C.zf) goto L_109727b1;
L_109727e5:;
  /* 109727e5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109727e7 jne 0x109727ec */
  if (!C.zf) goto L_109727ec;
L_109727e9:;
  /* 109727e9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 109727ea jmp 0x109727f4 */
  goto L_109727f4;
L_109727ec:;
  /* 109727ec test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109727ee je 0x109727f4 */
  if (C.zf) goto L_109727f4;
  /* 109727f0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_109727f4:;
  /* 109727f4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_109727f8:;
  /* 109727f8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109727fb je 0x109728e1 */
  if (C.zf) goto L_109728e1;
L_10972801:;
  /* 10972801 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10972803 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972806 je 0x1097280d */
  if (C.zf) goto L_1097280d;
  /* 10972808 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1097280b jne 0x10972810 */
  if (!C.zf) goto L_10972810;
L_1097280d:;
  /* 1097280d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1097280e jmp 0x10972801 */
  goto L_10972801;
L_10972810:;
  /* 10972810 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972813 je 0x109728e1 */
  if (C.zf) goto L_109728e1;
  /* 10972819 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1097281b je 0x10972825 */
  if (C.zf) goto L_10972825;
  /* 1097281d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1097281f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10972822 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10972825:;
  /* 10972825 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10972828 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1097282a:;
  /* 1097282a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10972831 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10972833:;
  /* 10972833 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972836 jne 0x1097283c */
  if (!C.zf) goto L_1097283c;
  /* 10972838 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10972839 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1097283a jmp 0x10972833 */
  goto L_10972833;
L_1097283c:;
  /* 1097283c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1097283f jne 0x1097286d */
  if (!C.zf) goto L_1097286d;
  /* 10972841 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10972844 jne 0x1097286b */
  if (!C.zf) goto L_1097286b;
  /* 10972846 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10972848 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097284b je 0x1097285a */
  if (C.zf) goto L_1097285a;
  /* 1097284d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972851 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10972854 jne 0x1097285a */
  if (!C.zf) goto L_1097285a;
  /* 10972856 mov eax, edx */
  EAX = (EDX);
  /* 10972858 jmp 0x1097285d */
  goto L_1097285d;
L_1097285a:;
  /* 1097285a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_1097285d:;
  /* 1097285d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10972860 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10972862 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972865 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10972868 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1097286b:;
  /* 1097286b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_1097286d:;
  /* 1097286d mov edx, ebx */
  EDX = (EBX);
  /* 1097286f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10972870 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10972872 je 0x10972882 */
  if (C.zf) goto L_10972882;
  /* 10972874 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10972875:;
  /* 10972875 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10972877 je 0x1097287d */
  if (C.zf) goto L_1097287d;
  /* 10972879 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1097287c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1097287d:;
  /* 1097287d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1097287f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10972880 jne 0x10972875 */
  if (!C.zf) goto L_10972875;
L_10972882:;
  /* 10972882 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10972884 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10972886 je 0x109728d2 */
  if (C.zf) goto L_109728d2;
  /* 10972888 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097288c jne 0x10972898 */
  if (!C.zf) goto L_10972898;
  /* 1097288e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972891 je 0x109728d2 */
  if (C.zf) goto L_109728d2;
  /* 10972893 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10972896 je 0x109728d2 */
  if (C.zf) goto L_109728d2;
L_10972898:;
  /* 10972898 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097289c je 0x109728cc */
  if (C.zf) goto L_109728cc;
  /* 1097289e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109728a0 je 0x109728bb */
  if (C.zf) goto L_109728bb;
  /* 109728a2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 109728a5 test byte ptr [ebx + 0x10976ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10976ae1)))&(0x4u); fl_logic(_r,8); }
  /* 109728ac je 0x109728b4 */
  if (C.zf) goto L_109728b4;
  /* 109728ae mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 109728b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109728b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109728b2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_109728b4:;
  /* 109728b4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109728b6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 109728b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109728b9 jmp 0x109728ca */
  goto L_109728ca;
L_109728bb:;
  /* 109728bb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 109728be test byte ptr [edx + 0x10976ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10976ae1)))&(0x4u); fl_logic(_r,8); }
  /* 109728c5 je 0x109728ca */
  if (C.zf) goto L_109728ca;
  /* 109728c7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109728c8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_109728ca:;
  /* 109728ca inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_109728cc:;
  /* 109728cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109728cd jmp 0x1097282a */
  goto L_1097282a;
L_109728d2:;
  /* 109728d2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109728d4 je 0x109728da */
  if (C.zf) goto L_109728da;
  /* 109728d6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 109728d9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109728da:;
  /* 109728da inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109728dc jmp 0x109727f8 */
  goto L_109727f8;
L_109728e1:;
  /* 109728e1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109728e3 je 0x109728e8 */
  if (C.zf) goto L_109728e8;
  /* 109728e5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_109728e8:;
  /* 109728e8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109728eb pop edi */
  EDI = (pop32());
  /* 109728ec pop esi */
  ESI = (pop32());
  /* 109728ed pop ebx */
  EBX = (pop32());
  /* 109728ee inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 109728f0 pop ebp */
  EBP = (pop32());
  /* 109728f1 ret  */
  ESPCHK(0x1097273eu, _esp0);
  ESP += 4; return;
}

/* FUN_100028f2 @ 0x109728f2 (306 bytes, 132 insns) */
void f_109728f2(void) {
  FTRACE(0x109728f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109728f2 push ecx */
  push32((uint32_t)(ECX));
  /* 109728f3 push ecx */
  push32((uint32_t)(ECX));
  /* 109728f4 mov eax, dword ptr [0x10976908] */
  EAX = (r32((uint32_t)(0x10976908)));
  /* 109728f9 push ebx */
  push32((uint32_t)(EBX));
  /* 109728fa push ebp */
  push32((uint32_t)(EBP));
  /* 109728fb mov ebp, dword ptr [0x1097505c] */
  EBP = (r32((uint32_t)(0x1097505c)));
  /* 10972901 push esi */
  push32((uint32_t)(ESI));
  /* 10972902 push edi */
  push32((uint32_t)(EDI));
  /* 10972903 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10972905 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10972907 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10972909 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097290b jne 0x10972940 */
  if (!C.zf) goto L_10972940;
  /* 1097290d call ebp */
  call_ind((uint32_t)(EBP), 0x1097290fu);
  /* 1097290f mov esi, eax */
  ESI = (EAX);
  /* 10972911 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972913 je 0x10972921 */
  if (C.zf) goto L_10972921;
  /* 10972915 mov dword ptr [0x10976908], 1 */
  w32((uint32_t)(0x10976908), (0x1u));
  /* 1097291f jmp 0x10972949 */
  goto L_10972949;
L_10972921:;
  /* 10972921 call dword ptr [0x1097506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097506c))), 0x10972927u);
  /* 10972927 mov edi, eax */
  EDI = (EAX);
  /* 10972929 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097292b je 0x10972a1b */
  if (C.zf) goto L_10972a1b;
  /* 10972931 mov dword ptr [0x10976908], 2 */
  w32((uint32_t)(0x10976908), (0x2u));
  /* 1097293b jmp 0x109729cf */
  goto L_109729cf;
L_10972940:;
  /* 10972940 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972943 jne 0x109729ca */
  if (!C.zf) goto L_109729ca;
L_10972949:;
  /* 10972949 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097294b jne 0x10972959 */
  if (!C.zf) goto L_10972959;
  /* 1097294d call ebp */
  call_ind((uint32_t)(EBP), 0x1097294fu);
  /* 1097294f mov esi, eax */
  ESI = (EAX);
  /* 10972951 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972953 je 0x10972a1b */
  if (C.zf) goto L_10972a1b;
L_10972959:;
  /* 10972959 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1097295c mov eax, esi */
  EAX = (ESI);
  /* 1097295e je 0x1097296e */
  if (C.zf) goto L_1097296e;
L_10972960:;
  /* 10972960 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10972961 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10972962 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10972965 jne 0x10972960 */
  if (!C.zf) goto L_10972960;
  /* 10972967 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10972968 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10972969 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1097296c jne 0x10972960 */
  if (!C.zf) goto L_10972960;
L_1097296e:;
  /* 1097296e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10972970 mov edi, dword ptr [0x10975064] */
  EDI = (r32((uint32_t)(0x10975064)));
  /* 10972976 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10972978 push ebx */
  push32((uint32_t)(EBX));
  /* 10972979 push ebx */
  push32((uint32_t)(EBX));
  /* 1097297a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1097297b push ebx */
  push32((uint32_t)(EBX));
  /* 1097297c push ebx */
  push32((uint32_t)(EBX));
  /* 1097297d push eax */
  push32((uint32_t)(EAX));
  /* 1097297e push esi */
  push32((uint32_t)(ESI));
  /* 1097297f push ebx */
  push32((uint32_t)(EBX));
  /* 10972980 push ebx */
  push32((uint32_t)(EBX));
  /* 10972981 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10972985 call edi */
  call_ind((uint32_t)(EDI), 0x10972987u);
  /* 10972987 mov ebp, eax */
  EBP = (EAX);
  /* 10972989 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097298b je 0x109729bf */
  if (C.zf) goto L_109729bf;
  /* 1097298d push ebp */
  push32((uint32_t)(EBP));
  /* 1097298e call 0x10972e41 */
  push32(0x10972993u); f_10972e41();
  /* 10972993 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972995 pop ecx */
  ECX = (pop32());
  /* 10972996 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1097299a je 0x109729bf */
  if (C.zf) goto L_109729bf;
  /* 1097299c push ebx */
  push32((uint32_t)(EBX));
  /* 1097299d push ebx */
  push32((uint32_t)(EBX));
  /* 1097299e push ebp */
  push32((uint32_t)(EBP));
  /* 1097299f push eax */
  push32((uint32_t)(EAX));
  /* 109729a0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 109729a4 push esi */
  push32((uint32_t)(ESI));
  /* 109729a5 push ebx */
  push32((uint32_t)(EBX));
  /* 109729a6 push ebx */
  push32((uint32_t)(EBX));
  /* 109729a7 call edi */
  call_ind((uint32_t)(EDI), 0x109729a9u);
  /* 109729a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109729ab jne 0x109729bb */
  if (!C.zf) goto L_109729bb;
  /* 109729ad push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 109729b1 call 0x10972df9 */
  push32(0x109729b6u); f_10972df9();
  /* 109729b6 pop ecx */
  ECX = (pop32());
  /* 109729b7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_109729bb:;
  /* 109729bb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_109729bf:;
  /* 109729bf push esi */
  push32((uint32_t)(ESI));
  /* 109729c0 call dword ptr [0x10975068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975068))), 0x109729c6u);
  /* 109729c6 mov eax, ebx */
  EAX = (EBX);
  /* 109729c8 jmp 0x10972a1d */
  goto L_10972a1d;
L_109729ca:;
  /* 109729ca cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109729cd jne 0x10972a1b */
  if (!C.zf) goto L_10972a1b;
L_109729cf:;
  /* 109729cf cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109729d1 jne 0x109729df */
  if (!C.zf) goto L_109729df;
  /* 109729d3 call dword ptr [0x1097506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097506c))), 0x109729d9u);
  /* 109729d9 mov edi, eax */
  EDI = (EAX);
  /* 109729db cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109729dd je 0x10972a1b */
  if (C.zf) goto L_10972a1b;
L_109729df:;
  /* 109729df cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109729e1 mov eax, edi */
  EAX = (EDI);
  /* 109729e3 je 0x109729ef */
  if (C.zf) goto L_109729ef;
L_109729e5:;
  /* 109729e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109729e6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109729e8 jne 0x109729e5 */
  if (!C.zf) goto L_109729e5;
  /* 109729ea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109729eb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109729ed jne 0x109729e5 */
  if (!C.zf) goto L_109729e5;
L_109729ef:;
  /* 109729ef sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109729f1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109729f2 mov ebp, eax */
  EBP = (EAX);
  /* 109729f4 push ebp */
  push32((uint32_t)(EBP));
  /* 109729f5 call 0x10972e41 */
  push32(0x109729fau); f_10972e41();
  /* 109729fa mov esi, eax */
  ESI = (EAX);
  /* 109729fc pop ecx */
  ECX = (pop32());
  /* 109729fd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109729ff jne 0x10972a05 */
  if (!C.zf) goto L_10972a05;
  /* 10972a01 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10972a03 jmp 0x10972a10 */
  goto L_10972a10;
L_10972a05:;
  /* 10972a05 push ebp */
  push32((uint32_t)(EBP));
  /* 10972a06 push edi */
  push32((uint32_t)(EDI));
  /* 10972a07 push esi */
  push32((uint32_t)(ESI));
  /* 10972a08 call 0x10973430 */
  push32(0x10972a0du); f_10973430();
  /* 10972a0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10972a10:;
  /* 10972a10 push edi */
  push32((uint32_t)(EDI));
  /* 10972a11 call dword ptr [0x10975078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975078))), 0x10972a17u);
  /* 10972a17 mov eax, esi */
  EAX = (ESI);
  /* 10972a19 jmp 0x10972a1d */
  goto L_10972a1d;
L_10972a1b:;
  /* 10972a1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10972a1d:;
  /* 10972a1d pop edi */
  EDI = (pop32());
  /* 10972a1e pop esi */
  ESI = (pop32());
  /* 10972a1f pop ebp */
  EBP = (pop32());
  /* 10972a20 pop ebx */
  EBX = (pop32());
  /* 10972a21 pop ecx */
  ECX = (pop32());
  /* 10972a22 pop ecx */
  ECX = (pop32());
  /* 10972a23 ret  */
  ESPCHK(0x109728f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a24 @ 0x10972a24 (60 bytes, 20 insns) */
void f_10972a24(void) {
  FTRACE(0x10972a24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10972a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10972a28 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972a2c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10972a31 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10972a34 push eax */
  push32((uint32_t)(EAX));
  /* 10972a35 call dword ptr [0x10975060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975060))), 0x10972a3bu);
  /* 10972a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972a3d mov dword ptr [0x10976be8], eax */
  w32((uint32_t)(0x10976be8), (EAX));
  /* 10972a42 je 0x10972a59 */
  if (C.zf) goto L_10972a59;
  /* 10972a44 call 0x10973765 */
  push32(0x10972a49u); f_10973765();
  /* 10972a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972a4b jne 0x10972a5c */
  if (!C.zf) goto L_10972a5c;
  /* 10972a4d push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10972a53 call dword ptr [0x10975058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975058))), 0x10972a59u);
L_10972a59:;
  /* 10972a59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10972a5b ret  */
  ESPCHK(0x10972a24u, _esp0);
  ESP += 4; return;
L_10972a5c:;
  /* 10972a5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10972a5e pop eax */
  EAX = (pop32());
  /* 10972a5f ret  */
  ESPCHK(0x10972a24u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a60 @ 0x10972a60 (117 bytes, 38 insns) */
void f_10972a60(void) {
  FTRACE(0x10972a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972a60 push ebx */
  push32((uint32_t)(EBX));
  /* 10972a61 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10972a63 cmp dword ptr [0x109769c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x109769c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972a69 push ebp */
  push32((uint32_t)(EBP));
  /* 10972a6a mov ebp, dword ptr [0x1097504c] */
  EBP = (r32((uint32_t)(0x1097504c)));
  /* 10972a70 jle 0x10972ab6 */
  if ((C.zf||C.sf!=C.of)) goto L_10972ab6;
  /* 10972a72 mov eax, dword ptr [0x109769c4] */
  EAX = (r32((uint32_t)(0x109769c4)));
  /* 10972a77 push esi */
  push32((uint32_t)(ESI));
  /* 10972a78 push edi */
  push32((uint32_t)(EDI));
  /* 10972a79 mov edi, dword ptr [0x10975050] */
  EDI = (r32((uint32_t)(0x10975050)));
  /* 10972a7f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10972a82:;
  /* 10972a82 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10972a87 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10972a8c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10972a8e call edi */
  call_ind((uint32_t)(EDI), 0x10972a90u);
  /* 10972a90 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10972a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10972a97 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10972a99 call edi */
  call_ind((uint32_t)(EDI), 0x10972a9bu);
  /* 10972a9b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10972a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10972aa0 push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10972aa6 call ebp */
  call_ind((uint32_t)(EBP), 0x10972aa8u);
  /* 10972aa8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10972aab inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10972aac cmp ebx, dword ptr [0x109769c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x109769c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972ab2 jl 0x10972a82 */
  if ((C.sf!=C.of)) goto L_10972a82;
  /* 10972ab4 pop edi */
  EDI = (pop32());
  /* 10972ab5 pop esi */
  ESI = (pop32());
L_10972ab6:;
  /* 10972ab6 push dword ptr [0x109769c4] */
  push32((uint32_t)(r32((uint32_t)(0x109769c4))));
  /* 10972abc push 0 */
  push32((uint32_t)(0x0u));
  /* 10972abe push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10972ac4 call ebp */
  call_ind((uint32_t)(EBP), 0x10972ac6u);
  /* 10972ac6 push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10972acc call dword ptr [0x10975058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975058))), 0x10972ad2u);
  /* 10972ad2 pop ebp */
  EBP = (pop32());
  /* 10972ad3 pop ebx */
  EBX = (pop32());
  /* 10972ad4 ret  */
  ESPCHK(0x10972a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ad5 @ 0x10972ad5 (57 bytes, 18 insns) */
void f_10972ad5(void) {
  FTRACE(0x10972ad5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972ad5 mov eax, dword ptr [0x109767b8] */
  EAX = (r32((uint32_t)(0x109767b8)));
  /* 10972ada cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972add je 0x10972aec */
  if (C.zf) goto L_10972aec;
  /* 10972adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972ae1 jne 0x10972b0d */
  if (!C.zf) goto L_10972b0d;
  /* 10972ae3 cmp dword ptr [0x109767bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109767bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972aea jne 0x10972b0d */
  if (!C.zf) goto L_10972b0d;
L_10972aec:;
  /* 10972aec push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10972af1 call 0x10972b0e */
  push32(0x10972af6u); f_10972b0e();
  /* 10972af6 mov eax, dword ptr [0x1097690c] */
  EAX = (r32((uint32_t)(0x1097690c)));
  /* 10972afb pop ecx */
  ECX = (pop32());
  /* 10972afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972afe je 0x10972b02 */
  if (C.zf) goto L_10972b02;
  /* 10972b00 call eax */
  call_ind((uint32_t)(EAX), 0x10972b02u);
L_10972b02:;
  /* 10972b02 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10972b07 call 0x10972b0e */
  push32(0x10972b0cu); f_10972b0e();
  /* 10972b0c pop ecx */
  ECX = (pop32());
L_10972b0d:;
  /* 10972b0d ret  */
  ESPCHK(0x10972ad5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b0e @ 0x10972b0e (339 bytes, 100 insns) */
void f_10972b0e(void) {
  FTRACE(0x10972b0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972b0e push ebp */
  push32((uint32_t)(EBP));
  /* 10972b0f mov ebp, esp */
  EBP = (ESP);
  /* 10972b11 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10972b17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10972b1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10972b1c mov eax, 0x10976300 */
  EAX = (0x10976300u);
L_10972b21:;
  /* 10972b21 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972b23 je 0x10972b30 */
  if (C.zf) goto L_10972b30;
  /* 10972b25 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10972b28 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10972b29 cmp eax, 0x10976390 */
  { uint32_t _a=(EAX),_b=(0x10976390u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972b2e jl 0x10972b21 */
  if ((C.sf!=C.of)) goto L_10972b21;
L_10972b30:;
  /* 10972b30 push esi */
  push32((uint32_t)(ESI));
  /* 10972b31 mov esi, ecx */
  ESI = (ECX);
  /* 10972b33 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10972b36 cmp edx, dword ptr [esi + 0x10976300] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10976300))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972b3c jne 0x10972c5e */
  if (!C.zf) goto L_10972c5e;
  /* 10972b42 mov eax, dword ptr [0x109767b8] */
  EAX = (r32((uint32_t)(0x109767b8)));
  /* 10972b47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972b4a je 0x10972c38 */
  if (C.zf) goto L_10972c38;
  /* 10972b50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972b52 jne 0x10972b61 */
  if (!C.zf) goto L_10972b61;
  /* 10972b54 cmp dword ptr [0x109767bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x109767bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972b5b je 0x10972c38 */
  if (C.zf) goto L_10972c38;
L_10972b61:;
  /* 10972b61 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972b67 je 0x10972c5e */
  if (C.zf) goto L_10972c5e;
  /* 10972b6d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10972b73 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10972b78 push eax */
  push32((uint32_t)(EAX));
  /* 10972b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10972b7b call dword ptr [0x10975070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975070))), 0x10972b81u);
  /* 10972b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972b83 jne 0x10972b98 */
  if (!C.zf) goto L_10972b98;
  /* 10972b85 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10972b8b push 0x10975428 */
  push32((uint32_t)(0x10975428u));
  /* 10972b90 push eax */
  push32((uint32_t)(EAX));
  /* 10972b91 call 0x10972ed0 */
  push32(0x10972b96u); f_10972ed0();
  /* 10972b96 pop ecx */
  ECX = (pop32());
  /* 10972b97 pop ecx */
  ECX = (pop32());
L_10972b98:;
  /* 10972b98 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10972b9e push edi */
  push32((uint32_t)(EDI));
  /* 10972b9f push eax */
  push32((uint32_t)(EAX));
  /* 10972ba0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10972ba6 call 0x10972fc0 */
  push32(0x10972babu); f_10972fc0();
  /* 10972bab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10972bac pop ecx */
  ECX = (pop32());
  /* 10972bad cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972bb0 jbe 0x10972bdb */
  if ((C.cf||C.zf)) goto L_10972bdb;
  /* 10972bb2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10972bb8 push eax */
  push32((uint32_t)(EAX));
  /* 10972bb9 call 0x10972fc0 */
  push32(0x10972bbeu); f_10972fc0();
  /* 10972bbe mov edi, eax */
  EDI = (EAX);
  /* 10972bc0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10972bc6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10972bc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10972bcb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10972bcd push 0x10975424 */
  push32((uint32_t)(0x10975424u));
  /* 10972bd2 push edi */
  push32((uint32_t)(EDI));
  /* 10972bd3 call 0x10974040 */
  push32(0x10972bd8u); f_10974040();
  /* 10972bd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10972bdb:;
  /* 10972bdb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10972be1 push 0x10975408 */
  push32((uint32_t)(0x10975408u));
  /* 10972be6 push eax */
  push32((uint32_t)(EAX));
  /* 10972be7 call 0x10972ed0 */
  push32(0x10972becu); f_10972ed0();
  /* 10972bec lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10972bf2 push edi */
  push32((uint32_t)(EDI));
  /* 10972bf3 push eax */
  push32((uint32_t)(EAX));
  /* 10972bf4 call 0x10972ee0 */
  push32(0x10972bf9u); f_10972ee0();
  /* 10972bf9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10972bff push 0x10975404 */
  push32((uint32_t)(0x10975404u));
  /* 10972c04 push eax */
  push32((uint32_t)(EAX));
  /* 10972c05 call 0x10972ee0 */
  push32(0x10972c0au); f_10972ee0();
  /* 10972c0a push dword ptr [esi + 0x10976304] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10976304))));
  /* 10972c10 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10972c16 push eax */
  push32((uint32_t)(EAX));
  /* 10972c17 call 0x10972ee0 */
  push32(0x10972c1cu); f_10972ee0();
  /* 10972c1c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10972c21 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10972c27 push 0x109753dc */
  push32((uint32_t)(0x109753dcu));
  /* 10972c2c push eax */
  push32((uint32_t)(EAX));
  /* 10972c2d call 0x10973fae */
  push32(0x10972c32u); f_10973fae();
  /* 10972c32 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10972c35 pop edi */
  EDI = (pop32());
  /* 10972c36 jmp 0x10972c5e */
  goto L_10972c5e;
L_10972c38:;
  /* 10972c38 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10972c3b lea esi, [esi + 0x10976304] */
  ESI = ((uint32_t)(ESI + 0x10976304));
  /* 10972c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10972c43 push eax */
  push32((uint32_t)(EAX));
  /* 10972c44 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10972c46 call 0x10972fc0 */
  push32(0x10972c4bu); f_10972fc0();
  /* 10972c4b pop ecx */
  ECX = (pop32());
  /* 10972c4c push eax */
  push32((uint32_t)(EAX));
  /* 10972c4d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10972c4f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10972c51 call dword ptr [0x10975080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975080))), 0x10972c57u);
  /* 10972c57 push eax */
  push32((uint32_t)(EAX));
  /* 10972c58 call dword ptr [0x10975054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975054))), 0x10972c5eu);
L_10972c5e:;
  /* 10972c5e pop esi */
  ESI = (pop32());
  /* 10972c5f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10972c60 ret  */
  ESPCHK(0x10972b0eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002c61 @ 0x10972c61 (41 bytes, 12 insns) */
void f_10972c61(void) {
  FTRACE(0x10972c61u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972c61 push esi */
  push32((uint32_t)(ESI));
  /* 10972c62 mov esi, dword ptr [0x10975044] */
  ESI = (r32((uint32_t)(0x10975044)));
  /* 10972c68 push dword ptr [0x109763d4] */
  push32((uint32_t)(r32((uint32_t)(0x109763d4))));
  /* 10972c6e call esi */
  call_ind((uint32_t)(ESI), 0x10972c70u);
  /* 10972c70 push dword ptr [0x109763c4] */
  push32((uint32_t)(r32((uint32_t)(0x109763c4))));
  /* 10972c76 call esi */
  call_ind((uint32_t)(ESI), 0x10972c78u);
  /* 10972c78 push dword ptr [0x109763b4] */
  push32((uint32_t)(r32((uint32_t)(0x109763b4))));
  /* 10972c7e call esi */
  call_ind((uint32_t)(ESI), 0x10972c80u);
  /* 10972c80 push dword ptr [0x10976394] */
  push32((uint32_t)(r32((uint32_t)(0x10976394))));
  /* 10972c86 call esi */
  call_ind((uint32_t)(ESI), 0x10972c88u);
  /* 10972c88 pop esi */
  ESI = (pop32());
  /* 10972c89 ret  */
  ESPCHK(0x10972c61u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c8a @ 0x10972c8a (108 bytes, 34 insns) */
void f_10972c8a(void) {
  FTRACE(0x10972c8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972c8a push esi */
  push32((uint32_t)(ESI));
  /* 10972c8b push edi */
  push32((uint32_t)(EDI));
  /* 10972c8c mov edi, dword ptr [0x10975074] */
  EDI = (r32((uint32_t)(0x10975074)));
  /* 10972c92 mov esi, 0x10976390 */
  ESI = (0x10976390u);
L_10972c97:;
  /* 10972c97 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10972c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972c9b je 0x10972cc8 */
  if (C.zf) goto L_10972cc8;
  /* 10972c9d cmp esi, 0x109763d4 */
  { uint32_t _a=(ESI),_b=(0x109763d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972ca3 je 0x10972cc8 */
  if (C.zf) goto L_10972cc8;
  /* 10972ca5 cmp esi, 0x109763c4 */
  { uint32_t _a=(ESI),_b=(0x109763c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972cab je 0x10972cc8 */
  if (C.zf) goto L_10972cc8;
  /* 10972cad cmp esi, 0x109763b4 */
  { uint32_t _a=(ESI),_b=(0x109763b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972cb3 je 0x10972cc8 */
  if (C.zf) goto L_10972cc8;
  /* 10972cb5 cmp esi, 0x10976394 */
  { uint32_t _a=(ESI),_b=(0x10976394u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972cbb je 0x10972cc8 */
  if (C.zf) goto L_10972cc8;
  /* 10972cbd push eax */
  push32((uint32_t)(EAX));
  /* 10972cbe call edi */
  call_ind((uint32_t)(EDI), 0x10972cc0u);
  /* 10972cc0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10972cc2 call 0x10972df9 */
  push32(0x10972cc7u); f_10972df9();
  /* 10972cc7 pop ecx */
  ECX = (pop32());
L_10972cc8:;
  /* 10972cc8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10972ccb cmp esi, 0x10976450 */
  { uint32_t _a=(ESI),_b=(0x10976450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972cd1 jl 0x10972c97 */
  if ((C.sf!=C.of)) goto L_10972c97;
  /* 10972cd3 push dword ptr [0x109763b4] */
  push32((uint32_t)(r32((uint32_t)(0x109763b4))));
  /* 10972cd9 call edi */
  call_ind((uint32_t)(EDI), 0x10972cdbu);
  /* 10972cdb push dword ptr [0x109763c4] */
  push32((uint32_t)(r32((uint32_t)(0x109763c4))));
  /* 10972ce1 call edi */
  call_ind((uint32_t)(EDI), 0x10972ce3u);
  /* 10972ce3 push dword ptr [0x109763d4] */
  push32((uint32_t)(r32((uint32_t)(0x109763d4))));
  /* 10972ce9 call edi */
  call_ind((uint32_t)(EDI), 0x10972cebu);
  /* 10972ceb push dword ptr [0x10976394] */
  push32((uint32_t)(r32((uint32_t)(0x10976394))));
  /* 10972cf1 call edi */
  call_ind((uint32_t)(EDI), 0x10972cf3u);
  /* 10972cf3 pop edi */
  EDI = (pop32());
  /* 10972cf4 pop esi */
  ESI = (pop32());
  /* 10972cf5 ret  */
  ESPCHK(0x10972c8au, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf6 @ 0x10972cf6 (97 bytes, 37 insns) */
void f_10972cf6(void) {
  FTRACE(0x10972cf6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972cf6 push ebp */
  push32((uint32_t)(EBP));
  /* 10972cf7 mov ebp, esp */
  EBP = (ESP);
  /* 10972cf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10972cfc push esi */
  push32((uint32_t)(ESI));
  /* 10972cfd cmp dword ptr [eax*4 + 0x10976390], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10976390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972d05 lea esi, [eax*4 + 0x10976390] */
  ESI = ((uint32_t)(EAX*4 + 0x10976390));
  /* 10972d0c jne 0x10972d4c */
  if (!C.zf) goto L_10972d4c;
  /* 10972d0e push edi */
  push32((uint32_t)(EDI));
  /* 10972d0f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10972d11 call 0x10972e41 */
  push32(0x10972d16u); f_10972e41();
  /* 10972d16 mov edi, eax */
  EDI = (EAX);
  /* 10972d18 pop ecx */
  ECX = (pop32());
  /* 10972d19 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10972d1b jne 0x10972d25 */
  if (!C.zf) goto L_10972d25;
  /* 10972d1d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10972d1f call 0x10972166 */
  push32(0x10972d24u); f_10972166();
  /* 10972d24 pop ecx */
  ECX = (pop32());
L_10972d25:;
  /* 10972d25 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10972d27 call 0x10972cf6 */
  push32(0x10972d2cu); f_10972cf6();
  /* 10972d2c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972d2f pop ecx */
  ECX = (pop32());
  /* 10972d30 push edi */
  push32((uint32_t)(EDI));
  /* 10972d31 jne 0x10972d3d */
  if (!C.zf) goto L_10972d3d;
  /* 10972d33 call dword ptr [0x10975044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975044))), 0x10972d39u);
  /* 10972d39 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10972d3b jmp 0x10972d43 */
  goto L_10972d43;
L_10972d3d:;
  /* 10972d3d call 0x10972df9 */
  push32(0x10972d42u); f_10972df9();
  /* 10972d42 pop ecx */
  ECX = (pop32());
L_10972d43:;
  /* 10972d43 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10972d45 call 0x10972d57 */
  push32(0x10972d4au); f_10972d57();
  /* 10972d4a pop ecx */
  ECX = (pop32());
  /* 10972d4b pop edi */
  EDI = (pop32());
L_10972d4c:;
  /* 10972d4c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10972d4e call dword ptr [0x10975040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975040))), 0x10972d54u);
  /* 10972d54 pop esi */
  ESI = (pop32());
  /* 10972d55 pop ebp */
  EBP = (pop32());
  /* 10972d56 ret  */
  ESPCHK(0x10972cf6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d57 @ 0x10972d57 (21 bytes, 7 insns) */
void f_10972d57(void) {
  FTRACE(0x10972d57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972d57 push ebp */
  push32((uint32_t)(EBP));
  /* 10972d58 mov ebp, esp */
  EBP = (ESP);
  /* 10972d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10972d5d push dword ptr [eax*4 + 0x10976390] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10976390))));
  /* 10972d64 call dword ptr [0x10975048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975048))), 0x10972d6au);
  /* 10972d6a pop ebp */
  EBP = (pop32());
  /* 10972d6b ret  */
  ESPCHK(0x10972d57u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d6c @ 0x10972d6c (141 bytes, 56 insns) */
void f_10972d6c(void) {
  FTRACE(0x10972d6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972d6c push ebx */
  push32((uint32_t)(EBX));
  /* 10972d6d push esi */
  push32((uint32_t)(ESI));
  /* 10972d6e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10972d72 push edi */
  push32((uint32_t)(EDI));
  /* 10972d73 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10972d78 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972d7b mov ebx, esi */
  EBX = (ESI);
  /* 10972d7d ja 0x10972d8c */
  if ((!C.cf&&!C.zf)) goto L_10972d8c;
  /* 10972d7f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10972d81 jne 0x10972d86 */
  if (!C.zf) goto L_10972d86;
  /* 10972d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10972d85 pop esi */
  ESI = (pop32());
L_10972d86:;
  /* 10972d86 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10972d89 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10972d8c:;
  /* 10972d8c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10972d8e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972d91 ja 0x10972dcd */
  if ((!C.cf&&!C.zf)) goto L_10972dcd;
  /* 10972d93 cmp ebx, dword ptr [0x109765e0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x109765e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972d99 ja 0x10972db8 */
  if ((!C.cf&&!C.zf)) goto L_10972db8;
  /* 10972d9b push 9 */
  push32((uint32_t)(0x9u));
  /* 10972d9d call 0x10972cf6 */
  push32(0x10972da2u); f_10972cf6();
  /* 10972da2 push ebx */
  push32((uint32_t)(EBX));
  /* 10972da3 call 0x10973af9 */
  push32(0x10972da8u); f_10973af9();
  /* 10972da8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10972daa mov edi, eax */
  EDI = (EAX);
  /* 10972dac call 0x10972d57 */
  push32(0x10972db1u); f_10972d57();
  /* 10972db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10972db4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10972db6 jne 0x10972de3 */
  if (!C.zf) goto L_10972de3;
L_10972db8:;
  /* 10972db8 push esi */
  push32((uint32_t)(ESI));
  /* 10972db9 push 8 */
  push32((uint32_t)(0x8u));
  /* 10972dbb push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10972dc1 call dword ptr [0x1097503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097503c))), 0x10972dc7u);
  /* 10972dc7 mov edi, eax */
  EDI = (EAX);
  /* 10972dc9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10972dcb jne 0x10972def */
  if (!C.zf) goto L_10972def;
L_10972dcd:;
  /* 10972dcd cmp dword ptr [0x10976984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10976984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972dd4 je 0x10972def */
  if (C.zf) goto L_10972def;
  /* 10972dd6 push esi */
  push32((uint32_t)(ESI));
  /* 10972dd7 call 0x10974198 */
  push32(0x10972ddcu); f_10974198();
  /* 10972ddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972dde pop ecx */
  ECX = (pop32());
  /* 10972ddf je 0x10972df5 */
  if (C.zf) goto L_10972df5;
  /* 10972de1 jmp 0x10972d8c */
  goto L_10972d8c;
L_10972de3:;
  /* 10972de3 push ebx */
  push32((uint32_t)(EBX));
  /* 10972de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10972de6 push edi */
  push32((uint32_t)(EDI));
  /* 10972de7 call 0x10974140 */
  push32(0x10972decu); f_10974140();
  /* 10972dec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10972def:;
  /* 10972def mov eax, edi */
  EAX = (EDI);
L_10972df1:;
  /* 10972df1 pop edi */
  EDI = (pop32());
  /* 10972df2 pop esi */
  ESI = (pop32());
  /* 10972df3 pop ebx */
  EBX = (pop32());
  /* 10972df4 ret  */
  ESPCHK(0x10972d6cu, _esp0);
  ESP += 4; return;
L_10972df5:;
  /* 10972df5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10972df7 jmp 0x10972df1 */
  goto L_10972df1;
}

/* FUN_10002df9 @ 0x10972df9 (72 bytes, 29 insns) */
void f_10972df9(void) {
  FTRACE(0x10972df9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972df9 push esi */
  push32((uint32_t)(ESI));
  /* 10972dfa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10972dfe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10972e00 je 0x10972e3f */
  if (C.zf) goto L_10972e3f;
  /* 10972e02 push 9 */
  push32((uint32_t)(0x9u));
  /* 10972e04 call 0x10972cf6 */
  push32(0x10972e09u); f_10972cf6();
  /* 10972e09 push esi */
  push32((uint32_t)(ESI));
  /* 10972e0a call 0x109737a3 */
  push32(0x10972e0fu); f_109737a3();
  /* 10972e0f pop ecx */
  ECX = (pop32());
  /* 10972e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972e12 pop ecx */
  ECX = (pop32());
  /* 10972e13 je 0x10972e28 */
  if (C.zf) goto L_10972e28;
  /* 10972e15 push esi */
  push32((uint32_t)(ESI));
  /* 10972e16 push eax */
  push32((uint32_t)(EAX));
  /* 10972e17 call 0x109737ce */
  push32(0x10972e1cu); f_109737ce();
  /* 10972e1c push 9 */
  push32((uint32_t)(0x9u));
  /* 10972e1e call 0x10972d57 */
  push32(0x10972e23u); f_10972d57();
  /* 10972e23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10972e26 pop esi */
  ESI = (pop32());
  /* 10972e27 ret  */
  ESPCHK(0x10972df9u, _esp0);
  ESP += 4; return;
L_10972e28:;
  /* 10972e28 push 9 */
  push32((uint32_t)(0x9u));
  /* 10972e2a call 0x10972d57 */
  push32(0x10972e2fu); f_10972d57();
  /* 10972e2f pop ecx */
  ECX = (pop32());
  /* 10972e30 push esi */
  push32((uint32_t)(ESI));
  /* 10972e31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10972e33 push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10972e39 call dword ptr [0x1097504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097504c))), 0x10972e3fu);
L_10972e3f:;
  /* 10972e3f pop esi */
  ESI = (pop32());
  /* 10972e40 ret  */
  ESPCHK(0x10972df9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10972e41 (18 bytes, 6 insns) */
void f_10972e41(void) {
  FTRACE(0x10972e41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972e41 push dword ptr [0x10976984] */
  push32((uint32_t)(r32((uint32_t)(0x10976984))));
  /* 10972e47 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10972e4b call 0x10972e53 */
  push32(0x10972e50u); f_10972e53();
  /* 10972e50 pop ecx */
  ECX = (pop32());
  /* 10972e51 pop ecx */
  ECX = (pop32());
  /* 10972e52 ret  */
  ESPCHK(0x10972e41u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10972e53 (44 bytes, 16 insns) */
void f_10972e53(void) {
  FTRACE(0x10972e53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972e53 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972e58 ja 0x10972e7c */
  if ((!C.cf&&!C.zf)) goto L_10972e7c;
L_10972e5a:;
  /* 10972e5a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10972e5e call 0x10972e7f */
  push32(0x10972e63u); f_10972e7f();
  /* 10972e63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972e65 pop ecx */
  ECX = (pop32());
  /* 10972e66 jne 0x10972e7e */
  if (!C.zf) goto L_10972e7e;
  /* 10972e68 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972e6c je 0x10972e7e */
  if (C.zf) goto L_10972e7e;
  /* 10972e6e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10972e72 call 0x10974198 */
  push32(0x10972e77u); f_10974198();
  /* 10972e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10972e79 pop ecx */
  ECX = (pop32());
  /* 10972e7a jne 0x10972e5a */
  if (!C.zf) goto L_10972e5a;
L_10972e7c:;
  /* 10972e7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10972e7e:;
  /* 10972e7e ret  */
  ESPCHK(0x10972e53u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e7f @ 0x10972e7f (78 bytes, 30 insns) */
void f_10972e7f(void) {
  FTRACE(0x10972e7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972e7f push esi */
  push32((uint32_t)(ESI));
  /* 10972e80 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10972e84 cmp esi, dword ptr [0x109765e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x109765e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10972e8a push edi */
  push32((uint32_t)(EDI));
  /* 10972e8b ja 0x10972eae */
  if ((!C.cf&&!C.zf)) goto L_10972eae;
  /* 10972e8d push 9 */
  push32((uint32_t)(0x9u));
  /* 10972e8f call 0x10972cf6 */
  push32(0x10972e94u); f_10972cf6();
  /* 10972e94 push esi */
  push32((uint32_t)(ESI));
  /* 10972e95 call 0x10973af9 */
  push32(0x10972e9au); f_10973af9();
  /* 10972e9a push 9 */
  push32((uint32_t)(0x9u));
  /* 10972e9c mov edi, eax */
  EDI = (EAX);
  /* 10972e9e call 0x10972d57 */
  push32(0x10972ea3u); f_10972d57();
  /* 10972ea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10972ea6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10972ea8 je 0x10972eae */
  if (C.zf) goto L_10972eae;
  /* 10972eaa mov eax, edi */
  EAX = (EDI);
  /* 10972eac jmp 0x10972eca */
  goto L_10972eca;
L_10972eae:;
  /* 10972eae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10972eb0 jne 0x10972eb5 */
  if (!C.zf) goto L_10972eb5;
  /* 10972eb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10972eb4 pop esi */
  ESI = (pop32());
L_10972eb5:;
  /* 10972eb5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10972eb8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10972ebb push esi */
  push32((uint32_t)(ESI));
  /* 10972ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 10972ebe push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10972ec4 call dword ptr [0x1097503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097503c))), 0x10972ecau);
L_10972eca:;
  /* 10972eca pop edi */
  EDI = (pop32());
  /* 10972ecb pop esi */
  ESI = (pop32());
  /* 10972ecc ret  */
  ESPCHK(0x10972e7fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ed0 @ 0x10972ed0 (7 bytes, 3 insns) */
void f_10972ed0(void) {
  FTRACE(0x10972ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972ed0 push edi */
  push32((uint32_t)(EDI));
  /* 10972ed1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10972ed5 jmp 0x10972f41 */
  jmp_ind(0x10972f41u); return;
}

/* FUN_10002ee0 @ 0x10972ee0 (224 bytes, 84 insns) */
void f_10972ee0(void) {
  FTRACE(0x10972ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972ee0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10972ee4 push edi */
  push32((uint32_t)(EDI));
  /* 10972ee5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10972eeb je 0x10972efc */
  if (C.zf) goto L_10972efc;
L_10972eed:;
  /* 10972eed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10972eef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10972ef0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10972ef2 je 0x10972f2f */
  if (C.zf) goto L_10972f2f;
  /* 10972ef4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10972efa jne 0x10972eed */
  if (!C.zf) goto L_10972eed;
L_10972efc:;
  /* 10972efc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10972efe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10972f03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10972f05 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10972f08 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10972f0a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10972f0d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10972f12 je 0x10972efc */
  if (C.zf) goto L_10972efc;
  /* 10972f14 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10972f17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10972f19 je 0x10972f3e */
  if (C.zf) goto L_10972f3e;
  /* 10972f1b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10972f1d je 0x10972f39 */
  if (C.zf) goto L_10972f39;
  /* 10972f1f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10972f24 je 0x10972f34 */
  if (C.zf) goto L_10972f34;
  /* 10972f26 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10972f2b je 0x10972f2f */
  if (C.zf) goto L_10972f2f;
  /* 10972f2d jmp 0x10972efc */
  goto L_10972efc;
L_10972f2f:;
  /* 10972f2f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10972f32 jmp 0x10972f41 */
  goto L_10972f41;
L_10972f34:;
  /* 10972f34 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10972f37 jmp 0x10972f41 */
  goto L_10972f41;
L_10972f39:;
  /* 10972f39 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10972f3c jmp 0x10972f41 */
  goto L_10972f41;
L_10972f3e:;
  /* 10972f3e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10972f41:;
  /* 10972f41 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10972f45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10972f4b je 0x10972f66 */
  if (C.zf) goto L_10972f66;
L_10972f4d:;
  /* 10972f4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10972f4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10972f50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10972f52 je 0x10972fb8 */
  if (C.zf) goto L_10972fb8;
  /* 10972f54 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10972f56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10972f57 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10972f5d jne 0x10972f4d */
  if (!C.zf) goto L_10972f4d;
  /* 10972f5f jmp 0x10972f66 */
  goto L_10972f66;
L_10972f61:;
  /* 10972f61 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10972f63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10972f66:;
  /* 10972f66 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10972f6b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10972f6d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10972f6f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10972f72 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10972f74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10972f76 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10972f79 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10972f7e je 0x10972f61 */
  if (C.zf) goto L_10972f61;
  /* 10972f80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10972f82 je 0x10972fb8 */
  if (C.zf) goto L_10972fb8;
  /* 10972f84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10972f86 je 0x10972faf */
  if (C.zf) goto L_10972faf;
  /* 10972f88 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10972f8e je 0x10972fa2 */
  if (C.zf) goto L_10972fa2;
  /* 10972f90 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10972f96 je 0x10972f9a */
  if (C.zf) goto L_10972f9a;
  /* 10972f98 jmp 0x10972f61 */
  goto L_10972f61;
L_10972f9a:;
  /* 10972f9a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10972f9c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10972fa0 pop edi */
  EDI = (pop32());
  /* 10972fa1 ret  */
  ESPCHK(0x10972ee0u, _esp0);
  ESP += 4; return;
L_10972fa2:;
  /* 10972fa2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10972fa5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10972fa9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10972fad pop edi */
  EDI = (pop32());
  /* 10972fae ret  */
  ESPCHK(0x10972ee0u, _esp0);
  ESP += 4; return;
L_10972faf:;
  /* 10972faf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10972fb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10972fb6 pop edi */
  EDI = (pop32());
  /* 10972fb7 ret  */
  ESPCHK(0x10972ee0u, _esp0);
  ESP += 4; return;
L_10972fb8:;
  /* 10972fb8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10972fba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10972fbe pop edi */
  EDI = (pop32());
  /* 10972fbf ret  */
  ESPCHK(0x10972ee0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10972fc0 (123 bytes, 44 insns) */
void f_10972fc0(void) {
  FTRACE(0x10972fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10972fc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10972fc4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10972fca je 0x10972fe0 */
  if (C.zf) goto L_10972fe0;
L_10972fcc:;
  /* 10972fcc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10972fce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10972fcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10972fd1 je 0x10973013 */
  if (C.zf) goto L_10973013;
  /* 10972fd3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10972fd9 jne 0x10972fcc */
  if (!C.zf) goto L_10972fcc;
  /* 10972fdb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10972fe0:;
  /* 10972fe0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10972fe2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10972fe7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10972fe9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10972fec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10972fee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10972ff1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10972ff6 je 0x10972fe0 */
  if (C.zf) goto L_10972fe0;
  /* 10972ff8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10972ffb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10972ffd je 0x10973031 */
  if (C.zf) goto L_10973031;
  /* 10972fff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10973001 je 0x10973027 */
  if (C.zf) goto L_10973027;
  /* 10973003 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10973008 je 0x1097301d */
  if (C.zf) goto L_1097301d;
  /* 1097300a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1097300f je 0x10973013 */
  if (C.zf) goto L_10973013;
  /* 10973011 jmp 0x10972fe0 */
  goto L_10972fe0;
L_10973013:;
  /* 10973013 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10973016 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1097301a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097301c ret  */
  ESPCHK(0x10972fc0u, _esp0);
  ESP += 4; return;
L_1097301d:;
  /* 1097301d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10973020 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10973024 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973026 ret  */
  ESPCHK(0x10972fc0u, _esp0);
  ESP += 4; return;
L_10973027:;
  /* 10973027 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1097302a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1097302e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973030 ret  */
  ESPCHK(0x10972fc0u, _esp0);
  ESP += 4; return;
L_10973031:;
  /* 10973031 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10973034 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10973038 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097303a ret  */
  ESPCHK(0x10972fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000303b @ 0x1097303b (429 bytes, 143 insns) */
void f_1097303b(void) {
  FTRACE(0x1097303bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1097303b push ebp */
  push32((uint32_t)(EBP));
  /* 1097303c mov ebp, esp */
  EBP = (ESP);
  /* 1097303e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973041 push ebx */
  push32((uint32_t)(EBX));
  /* 10973042 push esi */
  push32((uint32_t)(ESI));
  /* 10973043 push edi */
  push32((uint32_t)(EDI));
  /* 10973044 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10973046 call 0x10972cf6 */
  push32(0x1097304bu); f_10972cf6();
  /* 1097304b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1097304e call 0x109731e8 */
  push32(0x10973053u); f_109731e8();
  /* 10973053 mov ebx, eax */
  EBX = (EAX);
  /* 10973055 pop ecx */
  ECX = (pop32());
  /* 10973056 cmp ebx, dword ptr [0x109769c8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x109769c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097305c pop ecx */
  ECX = (pop32());
  /* 1097305d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10973060 jne 0x10973069 */
  if (!C.zf) goto L_10973069;
L_10973062:;
  /* 10973062 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10973064 jmp 0x109731d9 */
  goto L_109731d9;
L_10973069:;
  /* 10973069 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1097306b je 0x109731c7 */
  if (C.zf) goto L_109731c7;
  /* 10973071 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10973073 mov eax, 0x109764e8 */
  EAX = (0x109764e8u);
L_10973078:;
  /* 10973078 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097307a je 0x109730f0 */
  if (C.zf) goto L_109730f0;
  /* 1097307c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1097307f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10973080 cmp eax, 0x109765d8 */
  { uint32_t _a=(EAX),_b=(0x109765d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973085 jl 0x10973078 */
  if ((C.sf!=C.of)) goto L_10973078;
  /* 10973087 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1097308a push eax */
  push32((uint32_t)(EAX));
  /* 1097308b push ebx */
  push32((uint32_t)(EBX));
  /* 1097308c call dword ptr [0x10975034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975034))), 0x10973092u);
  /* 10973092 push 1 */
  push32((uint32_t)(0x1u));
  /* 10973094 pop esi */
  ESI = (pop32());
  /* 10973095 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973097 jne 0x109731be */
  if (!C.zf) goto L_109731be;
  /* 1097309d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1097309f and dword ptr [0x10976be4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10976be4)))&(0x0u); w32((uint32_t)(0x10976be4), (_r)); fl_logic(_r,32); }
  /* 109730a6 pop ecx */
  ECX = (pop32());
  /* 109730a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109730a9 mov edi, 0x10976ae0 */
  EDI = (0x10976ae0u);
  /* 109730ae cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109730b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109730b3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 109730b4 mov dword ptr [0x109769c8], ebx */
  w32((uint32_t)(0x109769c8), (EBX));
  /* 109730ba jbe 0x109731ab */
  if ((C.cf||C.zf)) goto L_109731ab;
  /* 109730c0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109730c4 je 0x10973186 */
  if (C.zf) goto L_10973186;
  /* 109730ca lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_109730cd:;
  /* 109730cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 109730cf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109730d1 je 0x10973186 */
  if (C.zf) goto L_10973186;
  /* 109730d7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 109730db movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_109730de:;
  /* 109730de cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109730e0 ja 0x1097317a */
  if ((!C.cf&&!C.zf)) goto L_1097317a;
  /* 109730e6 or byte ptr [eax + 0x10976ae1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10976ae1)))|(0x4u); w8((uint32_t)(EAX + 0x10976ae1), (_r)); fl_logic(_r,8); }
  /* 109730ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109730ee jmp 0x109730de */
  goto L_109730de;
L_109730f0:;
  /* 109730f0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109730f4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109730f6 pop ecx */
  ECX = (pop32());
  /* 109730f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109730f9 mov edi, 0x10976ae0 */
  EDI = (0x10976ae0u);
  /* 109730fe lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10973101 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10973103 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10973106 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10973107 lea ebx, [esi + 0x109764f8] */
  EBX = ((uint32_t)(ESI + 0x109764f8));
L_1097310d:;
  /* 1097310d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10973110 mov ecx, ebx */
  ECX = (EBX);
  /* 10973112 je 0x10973140 */
  if (C.zf) goto L_10973140;
L_10973114:;
  /* 10973114 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10973117 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10973119 je 0x10973140 */
  if (C.zf) goto L_10973140;
  /* 1097311b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1097311e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10973121 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973123 ja 0x10973139 */
  if ((!C.cf&&!C.zf)) goto L_10973139;
  /* 10973125 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10973128 mov dl, byte ptr [edx + 0x109764e0] */
  DL = (r8((uint32_t)(EDX + 0x109764e0)));
L_1097312e:;
  /* 1097312e or byte ptr [eax + 0x10976ae1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10976ae1)))|(DL); w8((uint32_t)(EAX + 0x10976ae1), (_r)); fl_logic(_r,8); }
  /* 10973134 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10973135 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973137 jbe 0x1097312e */
  if ((C.cf||C.zf)) goto L_1097312e;
L_10973139:;
  /* 10973139 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1097313a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1097313b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1097313e jne 0x10973114 */
  if (!C.zf) goto L_10973114;
L_10973140:;
  /* 10973140 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10973143 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973146 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097314a jb 0x1097310d */
  if (C.cf) goto L_1097310d;
  /* 1097314c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1097314f mov dword ptr [0x109769dc], 1 */
  w32((uint32_t)(0x109769dc), (0x1u));
  /* 10973159 push eax */
  push32((uint32_t)(EAX));
  /* 1097315a mov dword ptr [0x109769c8], eax */
  w32((uint32_t)(0x109769c8), (EAX));
  /* 1097315f call 0x10973232 */
  push32(0x10973164u); f_10973232();
  /* 10973164 lea esi, [esi + 0x109764ec] */
  ESI = ((uint32_t)(ESI + 0x109764ec));
  /* 1097316a mov edi, 0x109769d0 */
  EDI = (0x109769d0u);
  /* 1097316f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10973170 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10973171 pop ecx */
  ECX = (pop32());
  /* 10973172 mov dword ptr [0x10976be4], eax */
  w32((uint32_t)(0x10976be4), (EAX));
  /* 10973177 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10973178 jmp 0x109731cc */
  goto L_109731cc;
L_1097317a:;
  /* 1097317a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1097317b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1097317c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10973180 jne 0x109730cd */
  if (!C.zf) goto L_109730cd;
L_10973186:;
  /* 10973186 mov eax, esi */
  EAX = (ESI);
L_10973188:;
  /* 10973188 or byte ptr [eax + 0x10976ae1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10976ae1)))|(0x8u); w8((uint32_t)(EAX + 0x10976ae1), (_r)); fl_logic(_r,8); }
  /* 1097318f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10973190 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973195 jb 0x10973188 */
  if (C.cf) goto L_10973188;
  /* 10973197 push ebx */
  push32((uint32_t)(EBX));
  /* 10973198 call 0x10973232 */
  push32(0x1097319du); f_10973232();
  /* 1097319d pop ecx */
  ECX = (pop32());
  /* 1097319e mov dword ptr [0x10976be4], eax */
  w32((uint32_t)(0x10976be4), (EAX));
  /* 109731a3 mov dword ptr [0x109769dc], esi */
  w32((uint32_t)(0x109769dc), (ESI));
  /* 109731a9 jmp 0x109731b2 */
  goto L_109731b2;
L_109731ab:;
  /* 109731ab and dword ptr [0x109769dc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x109769dc)))&(0x0u); w32((uint32_t)(0x109769dc), (_r)); fl_logic(_r,32); }
L_109731b2:;
  /* 109731b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109731b4 mov edi, 0x109769d0 */
  EDI = (0x109769d0u);
  /* 109731b9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 109731ba stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 109731bb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 109731bc jmp 0x109731cc */
  goto L_109731cc;
L_109731be:;
  /* 109731be cmp dword ptr [0x10976970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10976970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109731c5 je 0x109731d6 */
  if (C.zf) goto L_109731d6;
L_109731c7:;
  /* 109731c7 call 0x10973265 */
  push32(0x109731ccu); f_10973265();
L_109731cc:;
  /* 109731cc call 0x1097328e */
  push32(0x109731d1u); f_1097328e();
  /* 109731d1 jmp 0x10973062 */
  goto L_10973062;
L_109731d6:;
  /* 109731d6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_109731d9:;
  /* 109731d9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109731db call 0x10972d57 */
  push32(0x109731e0u); f_10972d57();
  /* 109731e0 pop ecx */
  ECX = (pop32());
  /* 109731e1 mov eax, esi */
  EAX = (ESI);
  /* 109731e3 pop edi */
  EDI = (pop32());
  /* 109731e4 pop esi */
  ESI = (pop32());
  /* 109731e5 pop ebx */
  EBX = (pop32());
  /* 109731e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109731e7 ret  */
  ESPCHK(0x1097303bu, _esp0);
  ESP += 4; return;
}

/* FUN_100031e8 @ 0x109731e8 (74 bytes, 15 insns) */
void f_109731e8(void) {
  FTRACE(0x109731e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109731e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 109731ec and dword ptr [0x10976970], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10976970)))&(0x0u); w32((uint32_t)(0x10976970), (_r)); fl_logic(_r,32); }
  /* 109731f3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109731f6 jne 0x10973208 */
  if (!C.zf) goto L_10973208;
  /* 109731f8 mov dword ptr [0x10976970], 1 */
  w32((uint32_t)(0x10976970), (0x1u));
  /* 10973202 jmp dword ptr [0x10975038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10975038)))); return;
L_10973208:;
  /* 10973208 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097320b jne 0x1097321d */
  if (!C.zf) goto L_1097321d;
  /* 1097320d mov dword ptr [0x10976970], 1 */
  w32((uint32_t)(0x10976970), (0x1u));
  /* 10973217 jmp dword ptr [0x10975030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10975030)))); return;
L_1097321d:;
  /* 1097321d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973220 jne 0x10973231 */
  if (!C.zf) goto L_10973231;
  /* 10973222 mov eax, dword ptr [0x109769a0] */
  EAX = (r32((uint32_t)(0x109769a0)));
  /* 10973227 mov dword ptr [0x10976970], 1 */
  w32((uint32_t)(0x10976970), (0x1u));
L_10973231:;
  /* 10973231 ret  */
  ESPCHK(0x109731e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003232 @ 0x10973232 (51 bytes, 19 insns) */
void f_10973232(void) {
  FTRACE(0x10973232u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973232 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10973236 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097323b je 0x1097325f */
  if (C.zf) goto L_1097325f;
  /* 1097323d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973240 je 0x10973259 */
  if (C.zf) goto L_10973259;
  /* 10973242 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973245 je 0x10973253 */
  if (C.zf) goto L_10973253;
  /* 10973247 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10973248 je 0x1097324d */
  if (C.zf) goto L_1097324d;
  /* 1097324a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1097324c ret  */
  ESPCHK(0x10973232u, _esp0);
  ESP += 4; return;
L_1097324d:;
  /* 1097324d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10973252 ret  */
  ESPCHK(0x10973232u, _esp0);
  ESP += 4; return;
L_10973253:;
  /* 10973253 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10973258 ret  */
  ESPCHK(0x10973232u, _esp0);
  ESP += 4; return;
L_10973259:;
  /* 10973259 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1097325e ret  */
  ESPCHK(0x10973232u, _esp0);
  ESP += 4; return;
L_1097325f:;
  /* 1097325f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10973264 ret  */
  ESPCHK(0x10973232u, _esp0);
  ESP += 4; return;
}

/* FUN_10003265 @ 0x10973265 (41 bytes, 17 insns) */
void f_10973265(void) {
  FTRACE(0x10973265u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973265 push edi */
  push32((uint32_t)(EDI));
  /* 10973266 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10973268 pop ecx */
  ECX = (pop32());
  /* 10973269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1097326b mov edi, 0x10976ae0 */
  EDI = (0x10976ae0u);
  /* 10973270 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10973272 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10973273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10973275 mov edi, 0x109769d0 */
  EDI = (0x109769d0u);
  /* 1097327a mov dword ptr [0x109769c8], eax */
  w32((uint32_t)(0x109769c8), (EAX));
  /* 1097327f mov dword ptr [0x109769dc], eax */
  w32((uint32_t)(0x109769dc), (EAX));
  /* 10973284 mov dword ptr [0x10976be4], eax */
  w32((uint32_t)(0x10976be4), (EAX));
  /* 10973289 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1097328a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1097328b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1097328c pop edi */
  EDI = (pop32());
  /* 1097328d ret  */
  ESPCHK(0x10973265u, _esp0);
  ESP += 4; return;
}

/* FUN_1000328e @ 0x1097328e (389 bytes, 124 insns) */
void f_1097328e(void) {
  FTRACE(0x1097328eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1097328e push ebp */
  push32((uint32_t)(EBP));
  /* 1097328f mov ebp, esp */
  EBP = (ESP);
  /* 10973291 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973297 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1097329a push esi */
  push32((uint32_t)(ESI));
  /* 1097329b push eax */
  push32((uint32_t)(EAX));
  /* 1097329c push dword ptr [0x109769c8] */
  push32((uint32_t)(r32((uint32_t)(0x109769c8))));
  /* 109732a2 call dword ptr [0x10975034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975034))), 0x109732a8u);
  /* 109732a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109732ab jne 0x109733c7 */
  if (!C.zf) goto L_109733c7;
  /* 109732b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109732b3 mov esi, 0x100 */
  ESI = (0x100u);
L_109732b8:;
  /* 109732b8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 109732bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109732c0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109732c2 jb 0x109732b8 */
  if (C.cf) goto L_109732b8;
  /* 109732c4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 109732c7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 109732ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109732d0 je 0x10973309 */
  if (C.zf) goto L_10973309;
  /* 109732d2 push ebx */
  push32((uint32_t)(EBX));
  /* 109732d3 push edi */
  push32((uint32_t)(EDI));
  /* 109732d4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_109732d7:;
  /* 109732d7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 109732da movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 109732dd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109732df ja 0x109732fe */
  if ((!C.cf&&!C.zf)) goto L_109732fe;
  /* 109732e1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109732e3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 109732ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109732eb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 109732f0 mov ebx, ecx */
  EBX = (ECX);
  /* 109732f2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109732f5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 109732f7 mov ecx, ebx */
  ECX = (EBX);
  /* 109732f9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 109732fc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_109732fe:;
  /* 109732fe inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 109732ff inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10973300 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10973303 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10973305 jne 0x109732d7 */
  if (!C.zf) goto L_109732d7;
  /* 10973307 pop edi */
  EDI = (pop32());
  /* 10973308 pop ebx */
  EBX = (pop32());
L_10973309:;
  /* 10973309 push 0 */
  push32((uint32_t)(0x0u));
  /* 1097330b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10973311 push dword ptr [0x10976be4] */
  push32((uint32_t)(r32((uint32_t)(0x10976be4))));
  /* 10973317 push dword ptr [0x109769c8] */
  push32((uint32_t)(r32((uint32_t)(0x109769c8))));
  /* 1097331d push eax */
  push32((uint32_t)(EAX));
  /* 1097331e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10973324 push esi */
  push32((uint32_t)(ESI));
  /* 10973325 push eax */
  push32((uint32_t)(EAX));
  /* 10973326 push 1 */
  push32((uint32_t)(0x1u));
  /* 10973328 call 0x10974402 */
  push32(0x1097332du); f_10974402();
  /* 1097332d push 0 */
  push32((uint32_t)(0x0u));
  /* 1097332f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10973335 push dword ptr [0x109769c8] */
  push32((uint32_t)(r32((uint32_t)(0x109769c8))));
  /* 1097333b push esi */
  push32((uint32_t)(ESI));
  /* 1097333c push eax */
  push32((uint32_t)(EAX));
  /* 1097333d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10973343 push esi */
  push32((uint32_t)(ESI));
  /* 10973344 push eax */
  push32((uint32_t)(EAX));
  /* 10973345 push esi */
  push32((uint32_t)(ESI));
  /* 10973346 push dword ptr [0x10976be4] */
  push32((uint32_t)(r32((uint32_t)(0x10976be4))));
  /* 1097334c call 0x109741b3 */
  push32(0x10973351u); f_109741b3();
  /* 10973351 push 0 */
  push32((uint32_t)(0x0u));
  /* 10973353 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10973359 push dword ptr [0x109769c8] */
  push32((uint32_t)(r32((uint32_t)(0x109769c8))));
  /* 1097335f push esi */
  push32((uint32_t)(ESI));
  /* 10973360 push eax */
  push32((uint32_t)(EAX));
  /* 10973361 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10973367 push esi */
  push32((uint32_t)(ESI));
  /* 10973368 push eax */
  push32((uint32_t)(EAX));
  /* 10973369 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1097336e push dword ptr [0x10976be4] */
  push32((uint32_t)(r32((uint32_t)(0x10976be4))));
  /* 10973374 call 0x109741b3 */
  push32(0x10973379u); f_109741b3();
  /* 10973379 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097337c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1097337e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10973384:;
  /* 10973384 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10973387 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1097338a je 0x109733a2 */
  if (C.zf) goto L_109733a2;
  /* 1097338c or byte ptr [eax + 0x10976ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10976ae1)))|(0x10u); w8((uint32_t)(EAX + 0x10976ae1), (_r)); fl_logic(_r,8); }
  /* 10973393 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1097339a:;
  /* 1097339a mov byte ptr [eax + 0x109769e0], dl */
  w8((uint32_t)(EAX + 0x109769e0), (DL));
  /* 109733a0 jmp 0x109733be */
  goto L_109733be;
L_109733a2:;
  /* 109733a2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 109733a5 je 0x109733b7 */
  if (C.zf) goto L_109733b7;
  /* 109733a7 or byte ptr [eax + 0x10976ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10976ae1)))|(0x20u); w8((uint32_t)(EAX + 0x10976ae1), (_r)); fl_logic(_r,8); }
  /* 109733ae mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 109733b5 jmp 0x1097339a */
  goto L_1097339a;
L_109733b7:;
  /* 109733b7 and byte ptr [eax + 0x109769e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x109769e0)))&(0x0u); w8((uint32_t)(EAX + 0x109769e0), (_r)); fl_logic(_r,8); }
L_109733be:;
  /* 109733be inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109733bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109733c0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109733c1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109733c3 jb 0x10973384 */
  if (C.cf) goto L_10973384;
  /* 109733c5 jmp 0x10973410 */
  goto L_10973410;
L_109733c7:;
  /* 109733c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109733c9 mov esi, 0x100 */
  ESI = (0x100u);
L_109733ce:;
  /* 109733ce cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109733d1 jb 0x109733ec */
  if (C.cf) goto L_109733ec;
  /* 109733d3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109733d6 ja 0x109733ec */
  if ((!C.cf&&!C.zf)) goto L_109733ec;
  /* 109733d8 or byte ptr [eax + 0x10976ae1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10976ae1)))|(0x10u); w8((uint32_t)(EAX + 0x10976ae1), (_r)); fl_logic(_r,8); }
  /* 109733df mov cl, al */
  CL = (AL);
  /* 109733e1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_109733e4:;
  /* 109733e4 mov byte ptr [eax + 0x109769e0], cl */
  w8((uint32_t)(EAX + 0x109769e0), (CL));
  /* 109733ea jmp 0x1097340b */
  goto L_1097340b;
L_109733ec:;
  /* 109733ec cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109733ef jb 0x10973404 */
  if (C.cf) goto L_10973404;
  /* 109733f1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109733f4 ja 0x10973404 */
  if ((!C.cf&&!C.zf)) goto L_10973404;
  /* 109733f6 or byte ptr [eax + 0x10976ae1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10976ae1)))|(0x20u); w8((uint32_t)(EAX + 0x10976ae1), (_r)); fl_logic(_r,8); }
  /* 109733fd mov cl, al */
  CL = (AL);
  /* 109733ff sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10973402 jmp 0x109733e4 */
  goto L_109733e4;
L_10973404:;
  /* 10973404 and byte ptr [eax + 0x109769e0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x109769e0)))&(0x0u); w8((uint32_t)(EAX + 0x109769e0), (_r)); fl_logic(_r,8); }
L_1097340b:;
  /* 1097340b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1097340c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097340e jb 0x109733ce */
  if (C.cf) goto L_109733ce;
L_10973410:;
  /* 10973410 pop esi */
  ESI = (pop32());
  /* 10973411 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10973412 ret  */
  ESPCHK(0x1097328eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003413 @ 0x10973413 (28 bytes, 7 insns) */
void f_10973413(void) {
  FTRACE(0x10973413u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973413 cmp dword ptr [0x10976d08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10976d08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097341a jne 0x1097342e */
  if (!C.zf) goto L_1097342e;
  /* 1097341c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1097341e call 0x1097303b */
  push32(0x10973423u); f_1097303b();
  /* 10973423 pop ecx */
  ECX = (pop32());
  /* 10973424 mov dword ptr [0x10976d08], 1 */
  w32((uint32_t)(0x10976d08), (0x1u));
L_1097342e:;
  /* 1097342e ret  */
  ESPCHK(0x10973413u, _esp0);
  ESP += 4; return;
}

/* FUN_10003430 @ 0x10973430 (664 bytes, 265 insns) [15 switch table(s)] */
void f_10973430(void) {
  FTRACE(0x10973430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973430 push ebp */
  push32((uint32_t)(EBP));
  /* 10973431 mov ebp, esp */
  EBP = (ESP);
  /* 10973433 push edi */
  push32((uint32_t)(EDI));
  /* 10973434 push esi */
  push32((uint32_t)(ESI));
  /* 10973435 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10973438 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1097343b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1097343e mov eax, ecx */
  EAX = (ECX);
  /* 10973440 mov edx, ecx */
  EDX = (ECX);
  /* 10973442 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973444 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973446 jbe 0x10973450 */
  if ((C.cf||C.zf)) goto L_10973450;
  /* 10973448 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097344a jb 0x109735c8 */
  if (C.cf) goto L_109735c8;
L_10973450:;
  /* 10973450 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10973456 jne 0x1097346c */
  if (!C.zf) goto L_1097346c;
  /* 10973458 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1097345b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1097345e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973461 jb 0x1097348c */
  if (C.cf) goto L_1097348c;
  /* 10973463 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10973465 jmp dword ptr [edx*4 + 0x10973578] */
  switch (EDX) {
    case 0: goto L_10973588;
    case 1: goto L_10973590;
    case 2: goto L_1097359c;
    case 3: goto L_109735b0;
    default: x86_unimpl("switch@0x10973465 out of table"); return;
  }
L_1097346c:;
  /* 1097346c mov eax, edi */
  EAX = (EDI);
  /* 1097346e mov edx, 3 */
  EDX = (0x3u);
  /* 10973473 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973476 jb 0x10973484 */
  if (C.cf) goto L_10973484;
  /* 10973478 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1097347b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1097347d jmp dword ptr [eax*4 + 0x10973490] */
  switch (EAX) {
    case 1: goto L_109734a0;
    case 2: goto L_109734cc;
    case 3: goto L_109734f0;
    default: x86_unimpl("switch@0x1097347d out of table"); return;
  }
L_10973484:;
  /* 10973484 jmp dword ptr [ecx*4 + 0x10973588] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10973588)))); return;
  /* 1097348b nop  */
  /* nop */
L_1097348c:;
  /* 1097348c jmp dword ptr [ecx*4 + 0x1097350c] */
  switch (ECX) {
    case 0: goto L_1097356f;
    case 1: goto L_1097355c;
    case 2: goto L_10973554;
    case 3: goto L_1097354c;
    case 4: goto L_10973544;
    case 5: goto L_1097353c;
    case 6: goto L_10973534;
    case 7: goto L_1097352c;
    default: x86_unimpl("switch@0x1097348c out of table"); return;
  }
  /* 10973493 nop  */
  /* nop */
L_109734a0:;
  /* 109734a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109734a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109734a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109734a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109734a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109734ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109734af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109734b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109734b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109734b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109734bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109734be jb 0x1097348c */
  if (C.cf) goto L_1097348c;
  /* 109734c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109734c2 jmp dword ptr [edx*4 + 0x10973578] */
  switch (EDX) {
    case 0: goto L_10973588;
    case 1: goto L_10973590;
    case 2: goto L_1097359c;
    case 3: goto L_109735b0;
    default: x86_unimpl("switch@0x109734c2 out of table"); return;
  }
  /* 109734c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109734cc:;
  /* 109734cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109734ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109734d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109734d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109734d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109734d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109734db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109734de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109734e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109734e4 jb 0x1097348c */
  if (C.cf) goto L_1097348c;
  /* 109734e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109734e8 jmp dword ptr [edx*4 + 0x10973578] */
  switch (EDX) {
    case 0: goto L_10973588;
    case 1: goto L_10973590;
    case 2: goto L_1097359c;
    case 3: goto L_109735b0;
    default: x86_unimpl("switch@0x109734e8 out of table"); return;
  }
  /* 109734ef nop  */
  /* nop */
L_109734f0:;
  /* 109734f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109734f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109734f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109734f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109734f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109734fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109734fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109734fe jb 0x1097348c */
  if (C.cf) goto L_1097348c;
  /* 10973500 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10973502 jmp dword ptr [edx*4 + 0x10973578] */
  switch (EDX) {
    case 0: goto L_10973588;
    case 1: goto L_10973590;
    case 2: goto L_1097359c;
    case 3: goto L_109735b0;
    default: x86_unimpl("switch@0x10973502 out of table"); return;
  }
  /* 10973509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1097352c:;
  /* 1097352c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10973530 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10973534:;
  /* 10973534 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10973538 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1097353c:;
  /* 1097353c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10973540 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10973544:;
  /* 10973544 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10973548 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1097354c:;
  /* 1097354c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10973550 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10973554:;
  /* 10973554 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10973558 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1097355c:;
  /* 1097355c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10973560 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10973564 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1097356b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1097356d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1097356f:;
  /* 1097356f jmp dword ptr [edx*4 + 0x10973578] */
  switch (EDX) {
    case 0: goto L_10973588;
    case 1: goto L_10973590;
    case 2: goto L_1097359c;
    case 3: goto L_109735b0;
    default: x86_unimpl("switch@0x1097356f out of table"); return;
  }
  /* 10973576 mov edi, edi */
  EDI = (EDI);
L_10973588:;
  /* 10973588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1097358b pop esi */
  ESI = (pop32());
  /* 1097358c pop edi */
  EDI = (pop32());
  /* 1097358d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1097358e ret  */
  ESPCHK(0x10973430u, _esp0);
  ESP += 4; return;
  /* 1097358f nop  */
  /* nop */
L_10973590:;
  /* 10973590 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10973592 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10973594 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973597 pop esi */
  ESI = (pop32());
  /* 10973598 pop edi */
  EDI = (pop32());
  /* 10973599 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1097359a ret  */
  ESPCHK(0x10973430u, _esp0);
  ESP += 4; return;
  /* 1097359b nop  */
  /* nop */
L_1097359c:;
  /* 1097359c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1097359e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109735a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109735a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109735a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109735a9 pop esi */
  ESI = (pop32());
  /* 109735aa pop edi */
  EDI = (pop32());
  /* 109735ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109735ac ret  */
  ESPCHK(0x10973430u, _esp0);
  ESP += 4; return;
  /* 109735ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109735b0:;
  /* 109735b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109735b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109735b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109735b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109735ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109735bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109735c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109735c3 pop esi */
  ESI = (pop32());
  /* 109735c4 pop edi */
  EDI = (pop32());
  /* 109735c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109735c6 ret  */
  ESPCHK(0x10973430u, _esp0);
  ESP += 4; return;
  /* 109735c7 nop  */
  /* nop */
L_109735c8:;
  /* 109735c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 109735cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 109735d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109735d6 jne 0x109735fc */
  if (!C.zf) goto L_109735fc;
  /* 109735d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109735db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109735de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109735e1 jb 0x109735f0 */
  if (C.cf) goto L_109735f0;
  /* 109735e3 std  */
  C.df=1;
  /* 109735e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109735e6 cld  */
  C.df=0;
  /* 109735e7 jmp dword ptr [edx*4 + 0x10973710] */
  switch (EDX) {
    case 0: goto L_10973720;
    case 1: goto L_10973728;
    case 2: goto L_10973738;
    case 3: goto L_1097374c;
    default: x86_unimpl("switch@0x109735e7 out of table"); return;
  }
  /* 109735ee mov edi, edi */
  EDI = (EDI);
L_109735f0:;
  /* 109735f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109735f2 jmp dword ptr [ecx*4 + 0x109736c0] */
  switch (ECX) {
    case 0: goto L_10973707;
    default: x86_unimpl("switch@0x109735f2 out of table"); return;
  }
  /* 109735f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109735fc:;
  /* 109735fc mov eax, edi */
  EAX = (EDI);
  /* 109735fe mov edx, 3 */
  EDX = (0x3u);
  /* 10973603 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973606 jb 0x10973614 */
  if (C.cf) goto L_10973614;
  /* 10973608 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1097360b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097360d jmp dword ptr [eax*4 + 0x10973618] */
  switch (EAX) {
    case 1: goto L_10973628;
    case 2: goto L_10973648;
    case 3: goto L_10973670;
    default: x86_unimpl("switch@0x1097360d out of table"); return;
  }
L_10973614:;
  /* 10973614 jmp dword ptr [ecx*4 + 0x10973710] */
  switch (ECX) {
    case 0: goto L_10973720;
    case 1: goto L_10973728;
    case 2: goto L_10973738;
    case 3: goto L_1097374c;
    default: x86_unimpl("switch@0x10973614 out of table"); return;
  }
  /* 1097361b nop  */
  /* nop */
L_10973628:;
  /* 10973628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097362b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1097362d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10973630 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10973631 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10973634 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10973635 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973638 jb 0x109735f0 */
  if (C.cf) goto L_109735f0;
  /* 1097363a std  */
  C.df=1;
  /* 1097363b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1097363d cld  */
  C.df=0;
  /* 1097363e jmp dword ptr [edx*4 + 0x10973710] */
  switch (EDX) {
    case 0: goto L_10973720;
    case 1: goto L_10973728;
    case 2: goto L_10973738;
    case 3: goto L_1097374c;
    default: x86_unimpl("switch@0x1097363e out of table"); return;
  }
  /* 10973645 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10973648:;
  /* 10973648 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097364b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1097364d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10973650 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10973653 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10973656 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10973659 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097365c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097365f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973662 jb 0x109735f0 */
  if (C.cf) goto L_109735f0;
  /* 10973664 std  */
  C.df=1;
  /* 10973665 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10973667 cld  */
  C.df=0;
  /* 10973668 jmp dword ptr [edx*4 + 0x10973710] */
  switch (EDX) {
    case 0: goto L_10973720;
    case 1: goto L_10973728;
    case 2: goto L_10973738;
    case 3: goto L_1097374c;
    default: x86_unimpl("switch@0x10973668 out of table"); return;
  }
  /* 1097366f nop  */
  /* nop */
L_10973670:;
  /* 10973670 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10973673 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10973675 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10973678 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1097367b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1097367e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10973681 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10973684 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10973687 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097368a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097368d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973690 jb 0x109735f0 */
  if (C.cf) goto L_109735f0;
  /* 10973696 std  */
  C.df=1;
  /* 10973697 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10973699 cld  */
  C.df=0;
  /* 1097369a jmp dword ptr [edx*4 + 0x10973710] */
  switch (EDX) {
    case 0: goto L_10973720;
    case 1: goto L_10973728;
    case 2: goto L_10973738;
    case 3: goto L_1097374c;
    default: x86_unimpl("switch@0x1097369a out of table"); return;
  }
  /* 109736a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 109736a4 les esi, ptr [esi] */
  x86_unimpl("les @ 0x109736a4");
  /* 109736a6 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109736a7 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109736a9 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109736ab adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109736ad xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109736af adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109736b1 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109736b3 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109736b5 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109736b7 adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109736b9 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109736bb adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109736bd xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109736c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 109736c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 109736cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 109736d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 109736d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 109736d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 109736dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 109736e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 109736e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 109736e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 109736ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 109736f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 109736f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 109736f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 109736fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10973703 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10973705 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10973707:;
  /* 10973707 jmp dword ptr [edx*4 + 0x10973710] */
  switch (EDX) {
    case 0: goto L_10973720;
    case 1: goto L_10973728;
    case 2: goto L_10973738;
    case 3: goto L_1097374c;
    default: x86_unimpl("switch@0x10973707 out of table"); return;
  }
  /* 1097370e mov edi, edi */
  EDI = (EDI);
L_10973720:;
  /* 10973720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973723 pop esi */
  ESI = (pop32());
  /* 10973724 pop edi */
  EDI = (pop32());
  /* 10973725 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10973726 ret  */
  ESPCHK(0x10973430u, _esp0);
  ESP += 4; return;
  /* 10973727 nop  */
  /* nop */
L_10973728:;
  /* 10973728 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097372b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1097372e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973731 pop esi */
  ESI = (pop32());
  /* 10973732 pop edi */
  EDI = (pop32());
  /* 10973733 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10973734 ret  */
  ESPCHK(0x10973430u, _esp0);
  ESP += 4; return;
  /* 10973735 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10973738:;
  /* 10973738 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097373b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1097373e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10973741 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10973744 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973747 pop esi */
  ESI = (pop32());
  /* 10973748 pop edi */
  EDI = (pop32());
  /* 10973749 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1097374a ret  */
  ESPCHK(0x10973430u, _esp0);
  ESP += 4; return;
  /* 1097374b nop  */
  /* nop */
L_1097374c:;
  /* 1097374c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097374f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10973752 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10973755 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10973758 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1097375b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1097375e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973761 pop esi */
  ESI = (pop32());
  /* 10973762 pop edi */
  EDI = (pop32());
  /* 10973763 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10973764 ret  */
  ESPCHK(0x10973430u, _esp0);
  ESP += 4; return;
}

/* FUN_10003765 @ 0x10973765 (62 bytes, 15 insns) */
void f_10973765(void) {
  FTRACE(0x10973765u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973765 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1097376a push 0 */
  push32((uint32_t)(0x0u));
  /* 1097376c push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10973772 call dword ptr [0x1097503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097503c))), 0x10973778u);
  /* 10973778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097377a mov dword ptr [0x109769c4], eax */
  w32((uint32_t)(0x109769c4), (EAX));
  /* 1097377f jne 0x10973782 */
  if (!C.zf) goto L_10973782;
  /* 10973781 ret  */
  ESPCHK(0x10973765u, _esp0);
  ESP += 4; return;
L_10973782:;
  /* 10973782 and dword ptr [0x109769bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x109769bc)))&(0x0u); w32((uint32_t)(0x109769bc), (_r)); fl_logic(_r,32); }
  /* 10973789 and dword ptr [0x109769c0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x109769c0)))&(0x0u); w32((uint32_t)(0x109769c0), (_r)); fl_logic(_r,32); }
  /* 10973790 push 1 */
  push32((uint32_t)(0x1u));
  /* 10973792 mov dword ptr [0x109769b8], eax */
  w32((uint32_t)(0x109769b8), (EAX));
  /* 10973797 mov dword ptr [0x109769b0], 0x10 */
  w32((uint32_t)(0x109769b0), (0x10u));
  /* 109737a1 pop eax */
  EAX = (pop32());
  /* 109737a2 ret  */
  ESPCHK(0x10973765u, _esp0);
  ESP += 4; return;
}

/* FUN_100037a3 @ 0x109737a3 (43 bytes, 14 insns) */
void f_109737a3(void) {
  FTRACE(0x109737a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109737a3 mov eax, dword ptr [0x109769c0] */
  EAX = (r32((uint32_t)(0x109769c0)));
  /* 109737a8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 109737ab mov eax, dword ptr [0x109769c4] */
  EAX = (r32((uint32_t)(0x109769c4)));
  /* 109737b0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_109737b3:;
  /* 109737b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109737b5 jae 0x109737cb */
  if (!C.cf) goto L_109737cb;
  /* 109737b7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 109737bb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109737be cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109737c4 jb 0x109737cd */
  if (C.cf) goto L_109737cd;
  /* 109737c6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109737c9 jmp 0x109737b3 */
  goto L_109737b3;
L_109737cb:;
  /* 109737cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109737cd:;
  /* 109737cd ret  */
  ESPCHK(0x109737a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100037ce @ 0x109737ce (811 bytes, 264 insns) */
void f_109737ce(void) {
  FTRACE(0x109737ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109737ce push ebp */
  push32((uint32_t)(EBP));
  /* 109737cf mov ebp, esp */
  EBP = (ESP);
  /* 109737d1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109737d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109737d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109737da push ebx */
  push32((uint32_t)(EBX));
  /* 109737db push esi */
  push32((uint32_t)(ESI));
  /* 109737dc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 109737df mov esi, edx */
  ESI = (EDX);
  /* 109737e1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109737e4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 109737e7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109737ea push edi */
  push32((uint32_t)(EDI));
  /* 109737eb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 109737ee mov ecx, esi */
  ECX = (ESI);
  /* 109737f0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 109737f3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109737f9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109737fa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 109737fd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10973804 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10973807 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1097380a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 1097380d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10973810 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10973813 jne 0x10973894 */
  if (!C.zf) goto L_10973894;
  /* 10973815 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10973818 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1097381a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1097381b pop edi */
  EDI = (pop32());
  /* 1097381c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1097381f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973821 jbe 0x10973826 */
  if ((C.cf||C.zf)) goto L_10973826;
  /* 10973823 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10973826:;
  /* 10973826 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1097382a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097382e jne 0x10973878 */
  if (!C.zf) goto L_10973878;
  /* 10973830 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10973833 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973836 jae 0x10973854 */
  if (!C.cf) goto L_10973854;
  /* 10973838 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1097383d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1097383f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10973843 not edi */
  EDI = (~(EDI));
  /* 10973845 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10973849 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1097384b jne 0x10973878 */
  if (!C.zf) goto L_10973878;
  /* 1097384d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973850 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10973852 jmp 0x10973878 */
  goto L_10973878;
L_10973854:;
  /* 10973854 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973857 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1097385c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1097385e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10973861 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10973865 not edi */
  EDI = (~(EDI));
  /* 10973867 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1097386e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10973870 jne 0x10973878 */
  if (!C.zf) goto L_10973878;
  /* 10973872 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973875 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10973878:;
  /* 10973878 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1097387c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10973880 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10973883 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10973887 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1097388b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1097388e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10973891 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10973894:;
  /* 10973894 mov edi, ebx */
  EDI = (EBX);
  /* 10973896 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10973899 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1097389a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097389d jbe 0x109738a2 */
  if ((C.cf||C.zf)) goto L_109738a2;
  /* 1097389f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109738a1 pop edi */
  EDI = (pop32());
L_109738a2:;
  /* 109738a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109738a5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 109738a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 109738ab jne 0x10973951 */
  if (!C.zf) goto L_10973951;
  /* 109738b1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109738b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109738b7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 109738ba push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109738bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109738bf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109738c0 pop edx */
  EDX = (pop32());
  /* 109738c1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109738c3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109738c6 jbe 0x109738cd */
  if ((C.cf||C.zf)) goto L_109738cd;
  /* 109738c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 109738cb mov ecx, edx */
  ECX = (EDX);
L_109738cd:;
  /* 109738cd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109738d0 mov edi, ebx */
  EDI = (EBX);
  /* 109738d2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 109738d5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 109738d8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109738d9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109738db jbe 0x109738df */
  if ((C.cf||C.zf)) goto L_109738df;
  /* 109738dd mov edi, edx */
  EDI = (EDX);
L_109738df:;
  /* 109738df cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109738e1 je 0x1097394e */
  if (C.zf) goto L_1097394e;
  /* 109738e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109738e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109738e9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109738ec jne 0x10973936 */
  if (!C.zf) goto L_10973936;
  /* 109738ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109738f1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109738f4 jae 0x10973912 */
  if (!C.cf) goto L_10973912;
  /* 109738f6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109738fb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109738fd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10973901 not edx */
  EDX = (~(EDX));
  /* 10973903 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10973907 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10973909 jne 0x10973936 */
  if (!C.zf) goto L_10973936;
  /* 1097390b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1097390e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10973910 jmp 0x10973936 */
  goto L_10973936;
L_10973912:;
  /* 10973912 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973915 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1097391a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1097391c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1097391f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10973923 not edx */
  EDX = (~(EDX));
  /* 10973925 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1097392c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1097392e jne 0x10973936 */
  if (!C.zf) goto L_10973936;
  /* 10973930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973933 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10973936:;
  /* 10973936 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10973939 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1097393c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1097393f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10973942 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10973945 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10973948 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1097394b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1097394e:;
  /* 1097394e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10973951:;
  /* 10973951 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973955 jne 0x10973960 */
  if (!C.zf) goto L_10973960;
  /* 10973957 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097395a je 0x109739e9 */
  if (C.zf) goto L_109739e9;
L_10973960:;
  /* 10973960 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10973963 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10973966 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10973969 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1097396c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1097396f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10973972 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10973975 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10973978 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1097397b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1097397e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10973981 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973984 jne 0x109739e9 */
  if (!C.zf) goto L_109739e9;
  /* 10973986 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1097398a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097398d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10973990 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10973992 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10973996 jae 0x109739bd */
  if (!C.cf) goto L_109739bd;
  /* 10973998 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1097399c jne 0x109739ac */
  if (!C.zf) goto L_109739ac;
  /* 1097399e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 109739a3 mov ecx, edi */
  ECX = (EDI);
  /* 109739a5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 109739a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109739aa or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_109739ac:;
  /* 109739ac mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 109739b1 mov ecx, edi */
  ECX = (EDI);
  /* 109739b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 109739b5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 109739b9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 109739bb jmp 0x109739e6 */
  goto L_109739e6;
L_109739bd:;
  /* 109739bd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109739c1 jne 0x109739d3 */
  if (!C.zf) goto L_109739d3;
  /* 109739c3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 109739c6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 109739cb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 109739cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109739d0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_109739d3:;
  /* 109739d3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 109739d6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 109739db shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 109739dd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 109739e4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_109739e6:;
  /* 109739e6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_109739e9:;
  /* 109739e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109739ec mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 109739ee mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 109739f2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 109739f4 jne 0x10973af4 */
  if (!C.zf) goto L_10973af4;
  /* 109739fa mov eax, dword ptr [0x109769bc] */
  EAX = (r32((uint32_t)(0x109769bc)));
  /* 109739ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10973a01 je 0x10973ae6 */
  if (C.zf) goto L_10973ae6;
  /* 10973a07 mov ecx, dword ptr [0x109769b4] */
  ECX = (r32((uint32_t)(0x109769b4)));
  /* 10973a0d mov edi, dword ptr [0x10975050] */
  EDI = (r32((uint32_t)(0x10975050)));
  /* 10973a13 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10973a16 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973a19 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10973a1e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10973a23 push ebx */
  push32((uint32_t)(EBX));
  /* 10973a24 push ecx */
  push32((uint32_t)(ECX));
  /* 10973a25 call edi */
  call_ind((uint32_t)(EDI), 0x10973a27u);
  /* 10973a27 mov ecx, dword ptr [0x109769b4] */
  ECX = (r32((uint32_t)(0x109769b4)));
  /* 10973a2d mov eax, dword ptr [0x109769bc] */
  EAX = (r32((uint32_t)(0x109769bc)));
  /* 10973a32 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10973a37 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10973a39 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10973a3c mov eax, dword ptr [0x109769bc] */
  EAX = (r32((uint32_t)(0x109769bc)));
  /* 10973a41 mov ecx, dword ptr [0x109769b4] */
  ECX = (r32((uint32_t)(0x109769b4)));
  /* 10973a47 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10973a4a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10973a52 mov eax, dword ptr [0x109769bc] */
  EAX = (r32((uint32_t)(0x109769bc)));
  /* 10973a57 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10973a5a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10973a5d mov eax, dword ptr [0x109769bc] */
  EAX = (r32((uint32_t)(0x109769bc)));
  /* 10973a62 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10973a65 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10973a69 jne 0x10973a74 */
  if (!C.zf) goto L_10973a74;
  /* 10973a6b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10973a6f mov eax, dword ptr [0x109769bc] */
  EAX = (r32((uint32_t)(0x109769bc)));
L_10973a74:;
  /* 10973a74 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973a78 jne 0x10973ae6 */
  if (!C.zf) goto L_10973ae6;
  /* 10973a7a push ebx */
  push32((uint32_t)(EBX));
  /* 10973a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10973a7d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10973a80 call edi */
  call_ind((uint32_t)(EDI), 0x10973a82u);
  /* 10973a82 mov eax, dword ptr [0x109769bc] */
  EAX = (r32((uint32_t)(0x109769bc)));
  /* 10973a87 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10973a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10973a8c push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10973a92 call dword ptr [0x1097504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097504c))), 0x10973a98u);
  /* 10973a98 mov eax, dword ptr [0x109769c0] */
  EAX = (r32((uint32_t)(0x109769c0)));
  /* 10973a9d mov edx, dword ptr [0x109769c4] */
  EDX = (r32((uint32_t)(0x109769c4)));
  /* 10973aa3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10973aa6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10973aa9 mov ecx, eax */
  ECX = (EAX);
  /* 10973aab mov eax, dword ptr [0x109769bc] */
  EAX = (r32((uint32_t)(0x109769bc)));
  /* 10973ab0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973ab2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10973ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10973ab7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10973aba push ecx */
  push32((uint32_t)(ECX));
  /* 10973abb push eax */
  push32((uint32_t)(EAX));
  /* 10973abc call 0x10974550 */
  push32(0x10973ac1u); f_10974550();
  /* 10973ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973ac4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10973ac7 dec dword ptr [0x109769c0] */
  { uint32_t _r=(r32((uint32_t)(0x109769c0)))-1; w32((uint32_t)(0x109769c0), (_r)); fl_dec(_r,32); }
  /* 10973acd cmp eax, dword ptr [0x109769bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x109769bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973ad3 jbe 0x10973ad8 */
  if ((C.cf||C.zf)) goto L_10973ad8;
  /* 10973ad5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10973ad8:;
  /* 10973ad8 mov ecx, dword ptr [0x109769c4] */
  ECX = (r32((uint32_t)(0x109769c4)));
  /* 10973ade mov dword ptr [0x109769b8], ecx */
  w32((uint32_t)(0x109769b8), (ECX));
  /* 10973ae4 jmp 0x10973ae9 */
  goto L_10973ae9;
L_10973ae6:;
  /* 10973ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10973ae9:;
  /* 10973ae9 mov dword ptr [0x109769bc], eax */
  w32((uint32_t)(0x109769bc), (EAX));
  /* 10973aee mov dword ptr [0x109769b4], esi */
  w32((uint32_t)(0x109769b4), (ESI));
L_10973af4:;
  /* 10973af4 pop edi */
  EDI = (pop32());
  /* 10973af5 pop esi */
  ESI = (pop32());
  /* 10973af6 pop ebx */
  EBX = (pop32());
  /* 10973af7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10973af8 ret  */
  ESPCHK(0x109737ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10003af9 @ 0x10973af9 (777 bytes, 275 insns) */
void f_10973af9(void) {
  FTRACE(0x10973af9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973af9 push ebp */
  push32((uint32_t)(EBP));
  /* 10973afa mov ebp, esp */
  EBP = (ESP);
  /* 10973afc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973aff mov eax, dword ptr [0x109769c0] */
  EAX = (r32((uint32_t)(0x109769c0)));
  /* 10973b04 mov edx, dword ptr [0x109769c4] */
  EDX = (r32((uint32_t)(0x109769c4)));
  /* 10973b0a push ebx */
  push32((uint32_t)(EBX));
  /* 10973b0b push esi */
  push32((uint32_t)(ESI));
  /* 10973b0c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10973b0f push edi */
  push32((uint32_t)(EDI));
  /* 10973b10 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10973b13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973b16 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10973b19 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10973b1c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10973b1f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10973b22 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10973b25 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10973b26 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973b29 jge 0x10973b39 */
  if ((C.sf==C.of)) goto L_10973b39;
  /* 10973b2b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10973b2e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10973b30 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10973b34 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10973b37 jmp 0x10973b49 */
  goto L_10973b49;
L_10973b39:;
  /* 10973b39 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973b3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10973b3f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10973b41 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10973b43 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10973b46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10973b49:;
  /* 10973b49 mov eax, dword ptr [0x109769b8] */
  EAX = (r32((uint32_t)(0x109769b8)));
  /* 10973b4e mov ebx, eax */
  EBX = (EAX);
  /* 10973b50 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973b52 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10973b55 jae 0x10973b70 */
  if (!C.cf) goto L_10973b70;
L_10973b57:;
  /* 10973b57 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10973b5a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10973b5c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10973b5f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10973b61 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10973b63 jne 0x10973b70 */
  if (!C.zf) goto L_10973b70;
  /* 10973b65 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973b68 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973b6b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10973b6e jb 0x10973b57 */
  if (C.cf) goto L_10973b57;
L_10973b70:;
  /* 10973b70 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973b73 jne 0x10973bee */
  if (!C.zf) goto L_10973bee;
  /* 10973b75 mov ebx, edx */
  EBX = (EDX);
L_10973b77:;
  /* 10973b77 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973b79 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10973b7c jae 0x10973b93 */
  if (!C.cf) goto L_10973b93;
  /* 10973b7e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10973b81 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10973b83 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10973b86 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10973b88 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10973b8a jne 0x10973b91 */
  if (!C.zf) goto L_10973b91;
  /* 10973b8c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973b8f jmp 0x10973b77 */
  goto L_10973b77;
L_10973b91:;
  /* 10973b91 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10973b93:;
  /* 10973b93 jne 0x10973bee */
  if (!C.zf) goto L_10973bee;
L_10973b95:;
  /* 10973b95 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973b98 jae 0x10973bab */
  if (!C.cf) goto L_10973bab;
  /* 10973b9a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973b9e jne 0x10973ba8 */
  if (!C.zf) goto L_10973ba8;
  /* 10973ba0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973ba3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10973ba6 jmp 0x10973b95 */
  goto L_10973b95;
L_10973ba8:;
  /* 10973ba8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10973bab:;
  /* 10973bab jne 0x10973bd3 */
  if (!C.zf) goto L_10973bd3;
  /* 10973bad mov ebx, edx */
  EBX = (EDX);
L_10973baf:;
  /* 10973baf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973bb1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10973bb4 jae 0x10973bc3 */
  if (!C.cf) goto L_10973bc3;
  /* 10973bb6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973bba jne 0x10973bc1 */
  if (!C.zf) goto L_10973bc1;
  /* 10973bbc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973bbf jmp 0x10973baf */
  goto L_10973baf;
L_10973bc1:;
  /* 10973bc1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10973bc3:;
  /* 10973bc3 jne 0x10973bd3 */
  if (!C.zf) goto L_10973bd3;
  /* 10973bc5 call 0x10973e02 */
  push32(0x10973bcau); f_10973e02();
  /* 10973bca mov ebx, eax */
  EBX = (EAX);
  /* 10973bcc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10973bce mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10973bd1 je 0x10973be7 */
  if (C.zf) goto L_10973be7;
L_10973bd3:;
  /* 10973bd3 push ebx */
  push32((uint32_t)(EBX));
  /* 10973bd4 call 0x10973eb3 */
  push32(0x10973bd9u); f_10973eb3();
  /* 10973bd9 pop ecx */
  ECX = (pop32());
  /* 10973bda mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10973bdd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10973bdf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10973be2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973be5 jne 0x10973bee */
  if (!C.zf) goto L_10973bee;
L_10973be7:;
  /* 10973be7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10973be9 jmp 0x10973dfd */
  goto L_10973dfd;
L_10973bee:;
  /* 10973bee mov dword ptr [0x109769b8], ebx */
  w32((uint32_t)(0x109769b8), (EBX));
  /* 10973bf4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10973bf7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10973bf9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973bfc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10973bff je 0x10973c15 */
  if (C.zf) goto L_10973c15;
  /* 10973c01 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10973c08 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10973c0c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10973c0f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10973c11 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10973c13 jne 0x10973c4c */
  if (!C.zf) goto L_10973c4c;
L_10973c15:;
  /* 10973c15 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10973c1b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10973c1e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10973c21 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10973c24 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10973c28 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10973c2b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10973c2d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10973c30 jne 0x10973c49 */
  if (!C.zf) goto L_10973c49;
L_10973c32:;
  /* 10973c32 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10973c38 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10973c3b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10973c3e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973c41 mov edi, esi */
  EDI = (ESI);
  /* 10973c43 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10973c45 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10973c47 je 0x10973c32 */
  if (C.zf) goto L_10973c32;
L_10973c49:;
  /* 10973c49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10973c4c:;
  /* 10973c4c mov ecx, edx */
  ECX = (EDX);
  /* 10973c4e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10973c50 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10973c56 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10973c5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10973c60 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10973c64 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10973c66 jne 0x10973c75 */
  if (!C.zf) goto L_10973c75;
  /* 10973c68 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10973c6f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10973c71 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10973c74 pop edi */
  EDI = (pop32());
L_10973c75:;
  /* 10973c75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10973c77 jl 0x10973c7e */
  if ((C.sf!=C.of)) goto L_10973c7e;
  /* 10973c79 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10973c7b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10973c7c jmp 0x10973c75 */
  goto L_10973c75;
L_10973c7e:;
  /* 10973c7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10973c81 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10973c85 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10973c87 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10973c8a mov esi, ecx */
  ESI = (ECX);
  /* 10973c8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10973c8f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10973c92 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10973c93 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973c96 jle 0x10973c9b */
  if ((C.zf||C.sf!=C.of)) goto L_10973c9b;
  /* 10973c98 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10973c9a pop esi */
  ESI = (pop32());
L_10973c9b:;
  /* 10973c9b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973c9d je 0x10973db0 */
  if (C.zf) goto L_10973db0;
  /* 10973ca3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10973ca6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973ca9 jne 0x10973d0c */
  if (!C.zf) goto L_10973d0c;
  /* 10973cab cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973cae jge 0x10973cdb */
  if ((C.sf==C.of)) goto L_10973cdb;
  /* 10973cb0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10973cb5 mov ecx, edi */
  ECX = (EDI);
  /* 10973cb7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10973cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10973cbc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10973cc0 not ebx */
  EBX = (~(EBX));
  /* 10973cc2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10973cc5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10973cc9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10973ccd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10973ccf jne 0x10973d09 */
  if (!C.zf) goto L_10973d09;
  /* 10973cd1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973cd4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10973cd7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10973cd9 jmp 0x10973d0c */
  goto L_10973d0c;
L_10973cdb:;
  /* 10973cdb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10973cde mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10973ce3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10973ce5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10973ce8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10973cec lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10973cf3 not ebx */
  EBX = (~(EBX));
  /* 10973cf5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10973cf7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10973cf9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10973cfc jne 0x10973d09 */
  if (!C.zf) goto L_10973d09;
  /* 10973cfe mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973d01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10973d04 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10973d07 jmp 0x10973d0c */
  goto L_10973d0c;
L_10973d09:;
  /* 10973d09 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10973d0c:;
  /* 10973d0c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10973d0f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10973d12 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973d16 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10973d19 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10973d1c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10973d1f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10973d22 je 0x10973dbc */
  if (C.zf) goto L_10973dbc;
  /* 10973d28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10973d2b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10973d2f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10973d32 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10973d35 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10973d38 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10973d3b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10973d3e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10973d41 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10973d44 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973d47 jne 0x10973dad */
  if (!C.zf) goto L_10973dad;
  /* 10973d49 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10973d4d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973d50 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10973d53 jge 0x10973d7e */
  if ((C.sf==C.of)) goto L_10973d7e;
  /* 10973d55 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10973d57 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10973d5b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10973d5f jne 0x10973d6c */
  if (!C.zf) goto L_10973d6c;
  /* 10973d61 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10973d66 mov ecx, esi */
  ECX = (ESI);
  /* 10973d68 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10973d6a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10973d6c:;
  /* 10973d6c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10973d71 mov ecx, esi */
  ECX = (ESI);
  /* 10973d73 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10973d75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10973d78 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10973d7c jmp 0x10973dad */
  goto L_10973dad;
L_10973d7e:;
  /* 10973d7e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10973d80 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10973d84 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10973d88 jne 0x10973d97 */
  if (!C.zf) goto L_10973d97;
  /* 10973d8a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10973d8d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10973d92 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10973d94 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10973d97:;
  /* 10973d97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10973d9a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10973da1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10973da4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10973da9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10973dab or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10973dad:;
  /* 10973dad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10973db0:;
  /* 10973db0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10973db2 je 0x10973dbf */
  if (C.zf) goto L_10973dbf;
  /* 10973db4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10973db6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10973dba jmp 0x10973dbf */
  goto L_10973dbf;
L_10973dbc:;
  /* 10973dbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10973dbf:;
  /* 10973dbf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10973dc2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973dc4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10973dc7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10973dc9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10973dcd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10973dd0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10973dd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10973dd4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10973dd7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10973dd9 jne 0x10973df5 */
  if (!C.zf) goto L_10973df5;
  /* 10973ddb cmp ebx, dword ptr [0x109769bc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x109769bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973de1 jne 0x10973df5 */
  if (!C.zf) goto L_10973df5;
  /* 10973de3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10973de6 cmp ecx, dword ptr [0x109769b4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x109769b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973dec jne 0x10973df5 */
  if (!C.zf) goto L_10973df5;
  /* 10973dee and dword ptr [0x109769bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x109769bc)))&(0x0u); w32((uint32_t)(0x109769bc), (_r)); fl_logic(_r,32); }
L_10973df5:;
  /* 10973df5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10973df8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10973dfa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10973dfd:;
  /* 10973dfd pop edi */
  EDI = (pop32());
  /* 10973dfe pop esi */
  ESI = (pop32());
  /* 10973dff pop ebx */
  EBX = (pop32());
  /* 10973e00 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10973e01 ret  */
  ESPCHK(0x10973af9u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e02 @ 0x10973e02 (177 bytes, 53 insns) */
void f_10973e02(void) {
  FTRACE(0x10973e02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973e02 mov eax, dword ptr [0x109769c0] */
  EAX = (r32((uint32_t)(0x109769c0)));
  /* 10973e07 mov ecx, dword ptr [0x109769b0] */
  ECX = (r32((uint32_t)(0x109769b0)));
  /* 10973e0d push esi */
  push32((uint32_t)(ESI));
  /* 10973e0e push edi */
  push32((uint32_t)(EDI));
  /* 10973e0f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10973e11 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973e13 jne 0x10973e45 */
  if (!C.zf) goto L_10973e45;
  /* 10973e15 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10973e19 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10973e1c push eax */
  push32((uint32_t)(EAX));
  /* 10973e1d push dword ptr [0x109769c4] */
  push32((uint32_t)(r32((uint32_t)(0x109769c4))));
  /* 10973e23 push edi */
  push32((uint32_t)(EDI));
  /* 10973e24 push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10973e2a call dword ptr [0x10975028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975028))), 0x10973e30u);
  /* 10973e30 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973e32 je 0x10973e95 */
  if (C.zf) goto L_10973e95;
  /* 10973e34 add dword ptr [0x109769b0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x109769b0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x109769b0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10973e3b mov dword ptr [0x109769c4], eax */
  w32((uint32_t)(0x109769c4), (EAX));
  /* 10973e40 mov eax, dword ptr [0x109769c0] */
  EAX = (r32((uint32_t)(0x109769c0)));
L_10973e45:;
  /* 10973e45 mov ecx, dword ptr [0x109769c4] */
  ECX = (r32((uint32_t)(0x109769c4)));
  /* 10973e4b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10973e50 push 8 */
  push32((uint32_t)(0x8u));
  /* 10973e52 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10973e55 push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10973e5b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10973e5e call dword ptr [0x1097503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097503c))), 0x10973e64u);
  /* 10973e64 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973e66 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10973e69 je 0x10973e95 */
  if (C.zf) goto L_10973e95;
  /* 10973e6b push 4 */
  push32((uint32_t)(0x4u));
  /* 10973e6d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10973e72 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10973e77 push edi */
  push32((uint32_t)(EDI));
  /* 10973e78 call dword ptr [0x1097502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097502c))), 0x10973e7eu);
  /* 10973e7e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973e80 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10973e83 jne 0x10973e99 */
  if (!C.zf) goto L_10973e99;
  /* 10973e85 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10973e88 push edi */
  push32((uint32_t)(EDI));
  /* 10973e89 push dword ptr [0x10976be8] */
  push32((uint32_t)(r32((uint32_t)(0x10976be8))));
  /* 10973e8f call dword ptr [0x1097504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097504c))), 0x10973e95u);
L_10973e95:;
  /* 10973e95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10973e97 jmp 0x10973eb0 */
  goto L_10973eb0;
L_10973e99:;
  /* 10973e99 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10973e9d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10973e9f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10973ea2 inc dword ptr [0x109769c0] */
  { uint32_t _r=(r32((uint32_t)(0x109769c0)))+1; w32((uint32_t)(0x109769c0), (_r)); fl_inc(_r,32); }
  /* 10973ea8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10973eab or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10973eae mov eax, esi */
  EAX = (ESI);
L_10973eb0:;
  /* 10973eb0 pop edi */
  EDI = (pop32());
  /* 10973eb1 pop esi */
  ESI = (pop32());
  /* 10973eb2 ret  */
  ESPCHK(0x10973e02u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb3 @ 0x10973eb3 (251 bytes, 85 insns) */
void f_10973eb3(void) {
  FTRACE(0x10973eb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973eb3 push ebp */
  push32((uint32_t)(EBP));
  /* 10973eb4 mov ebp, esp */
  EBP = (ESP);
  /* 10973eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10973eb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973eba push ebx */
  push32((uint32_t)(EBX));
  /* 10973ebb push esi */
  push32((uint32_t)(ESI));
  /* 10973ebc push edi */
  push32((uint32_t)(EDI));
  /* 10973ebd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10973ec0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10973ec3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10973ec5:;
  /* 10973ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10973ec7 jl 0x10973ece */
  if ((C.sf!=C.of)) goto L_10973ece;
  /* 10973ec9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10973ecb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10973ecc jmp 0x10973ec5 */
  goto L_10973ec5;
L_10973ece:;
  /* 10973ece mov eax, ebx */
  EAX = (EBX);
  /* 10973ed0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10973ed2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10973ed8 pop edx */
  EDX = (pop32());
  /* 10973ed9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10973ee0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10973ee3:;
  /* 10973ee3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10973ee6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10973ee9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973eec dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10973eed jne 0x10973ee3 */
  if (!C.zf) goto L_10973ee3;
  /* 10973eef mov edi, ebx */
  EDI = (EBX);
  /* 10973ef1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10973ef3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10973ef6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10973ef9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10973efe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10973f03 push edi */
  push32((uint32_t)(EDI));
  /* 10973f04 call dword ptr [0x1097502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097502c))), 0x10973f0au);
  /* 10973f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10973f0c jne 0x10973f16 */
  if (!C.zf) goto L_10973f16;
  /* 10973f0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10973f11 jmp 0x10973fa9 */
  goto L_10973fa9;
L_10973f16:;
  /* 10973f16 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10973f1c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973f1e ja 0x10973f5c */
  if ((!C.cf&&!C.zf)) goto L_10973f5c;
  /* 10973f20 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10973f23:;
  /* 10973f23 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10973f27 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10973f2e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10973f34 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10973f3b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10973f3d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10973f43 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10973f46 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10973f50 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973f55 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10973f58 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973f5a jbe 0x10973f23 */
  if ((C.cf||C.zf)) goto L_10973f23;
L_10973f5c:;
  /* 10973f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10973f5f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10973f62 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10973f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10973f69 pop edi */
  EDI = (pop32());
  /* 10973f6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10973f6d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10973f70 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10973f73 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10973f76 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10973f79 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10973f7e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10973f85 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10973f88 mov cl, al */
  CL = (AL);
  /* 10973f8a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10973f8c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10973f8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10973f91 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10973f94 jne 0x10973f99 */
  if (!C.zf) goto L_10973f99;
  /* 10973f96 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10973f99:;
  /* 10973f99 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10973f9e mov ecx, ebx */
  ECX = (EBX);
  /* 10973fa0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10973fa2 not edx */
  EDX = (~(EDX));
  /* 10973fa4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10973fa7 mov eax, ebx */
  EAX = (EBX);
L_10973fa9:;
  /* 10973fa9 pop edi */
  EDI = (pop32());
  /* 10973faa pop esi */
  ESI = (pop32());
  /* 10973fab pop ebx */
  EBX = (pop32());
  /* 10973fac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10973fad ret  */
  ESPCHK(0x10973eb3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fae @ 0x10973fae (137 bytes, 50 insns) */
void f_10973fae(void) {
  FTRACE(0x10973faeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10973fae push ebx */
  push32((uint32_t)(EBX));
  /* 10973faf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10973fb1 cmp dword ptr [0x10976974], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10976974))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973fb7 push esi */
  push32((uint32_t)(ESI));
  /* 10973fb8 push edi */
  push32((uint32_t)(EDI));
  /* 10973fb9 jne 0x10973ffd */
  if (!C.zf) goto L_10973ffd;
  /* 10973fbb push 0x10975470 */
  push32((uint32_t)(0x10975470u));
  /* 10973fc0 call dword ptr [0x1097501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097501c))), 0x10973fc6u);
  /* 10973fc6 mov edi, eax */
  EDI = (EAX);
  /* 10973fc8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10973fca je 0x10974033 */
  if (C.zf) goto L_10974033;
  /* 10973fcc mov esi, dword ptr [0x10975020] */
  ESI = (r32((uint32_t)(0x10975020)));
  /* 10973fd2 push 0x10975464 */
  push32((uint32_t)(0x10975464u));
  /* 10973fd7 push edi */
  push32((uint32_t)(EDI));
  /* 10973fd8 call esi */
  call_ind((uint32_t)(ESI), 0x10973fdau);
  /* 10973fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10973fdc mov dword ptr [0x10976974], eax */
  w32((uint32_t)(0x10976974), (EAX));
  /* 10973fe1 je 0x10974033 */
  if (C.zf) goto L_10974033;
  /* 10973fe3 push 0x10975454 */
  push32((uint32_t)(0x10975454u));
  /* 10973fe8 push edi */
  push32((uint32_t)(EDI));
  /* 10973fe9 call esi */
  call_ind((uint32_t)(ESI), 0x10973febu);
  /* 10973feb push 0x10975440 */
  push32((uint32_t)(0x10975440u));
  /* 10973ff0 push edi */
  push32((uint32_t)(EDI));
  /* 10973ff1 mov dword ptr [0x10976978], eax */
  w32((uint32_t)(0x10976978), (EAX));
  /* 10973ff6 call esi */
  call_ind((uint32_t)(ESI), 0x10973ff8u);
  /* 10973ff8 mov dword ptr [0x1097697c], eax */
  w32((uint32_t)(0x1097697c), (EAX));
L_10973ffd:;
  /* 10973ffd mov eax, dword ptr [0x10976978] */
  EAX = (r32((uint32_t)(0x10976978)));
  /* 10974002 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10974004 je 0x1097401c */
  if (C.zf) goto L_1097401c;
  /* 10974006 call eax */
  call_ind((uint32_t)(EAX), 0x10974008u);
  /* 10974008 mov ebx, eax */
  EBX = (EAX);
  /* 1097400a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1097400c je 0x1097401c */
  if (C.zf) goto L_1097401c;
  /* 1097400e mov eax, dword ptr [0x1097697c] */
  EAX = (r32((uint32_t)(0x1097697c)));
  /* 10974013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10974015 je 0x1097401c */
  if (C.zf) goto L_1097401c;
  /* 10974017 push ebx */
  push32((uint32_t)(EBX));
  /* 10974018 call eax */
  call_ind((uint32_t)(EAX), 0x1097401au);
  /* 1097401a mov ebx, eax */
  EBX = (EAX);
L_1097401c:;
  /* 1097401c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10974020 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10974024 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10974028 push ebx */
  push32((uint32_t)(EBX));
  /* 10974029 call dword ptr [0x10976974] */
  call_ind((uint32_t)(r32((uint32_t)(0x10976974))), 0x1097402fu);
L_1097402f:;
  /* 1097402f pop edi */
  EDI = (pop32());
  /* 10974030 pop esi */
  ESI = (pop32());
  /* 10974031 pop ebx */
  EBX = (pop32());
  /* 10974032 ret  */
  ESPCHK(0x10973faeu, _esp0);
  ESP += 4; return;
L_10974033:;
  /* 10974033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10974035 jmp 0x1097402f */
  goto L_1097402f;
}

/* _strncpy @ 0x10974040 (254 bytes, 109 insns) */
void f_10974040(void) {
  FTRACE(0x10974040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974040 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10974044 push edi */
  push32((uint32_t)(EDI));
  /* 10974045 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10974047 je 0x109740c3 */
  if (C.zf) goto L_109740c3;
  /* 10974049 push esi */
  push32((uint32_t)(ESI));
  /* 1097404a push ebx */
  push32((uint32_t)(EBX));
  /* 1097404b mov ebx, ecx */
  EBX = (ECX);
  /* 1097404d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10974051 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10974057 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1097405b jne 0x10974064 */
  if (!C.zf) goto L_10974064;
  /* 1097405d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10974060 jne 0x109740d1 */
  if (!C.zf) goto L_109740d1;
  /* 10974062 jmp 0x10974085 */
  goto L_10974085;
L_10974064:;
  /* 10974064 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10974066 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10974067 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10974069 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1097406a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1097406b je 0x10974092 */
  if (C.zf) goto L_10974092;
  /* 1097406d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1097406f je 0x1097409a */
  if (C.zf) goto L_1097409a;
  /* 10974071 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10974077 jne 0x10974064 */
  if (!C.zf) goto L_10974064;
  /* 10974079 mov ebx, ecx */
  EBX = (ECX);
  /* 1097407b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1097407e jne 0x109740d1 */
  if (!C.zf) goto L_109740d1;
L_10974080:;
  /* 10974080 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10974083 je 0x10974092 */
  if (C.zf) goto L_10974092;
L_10974085:;
  /* 10974085 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10974087 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10974088 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1097408a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1097408b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1097408d je 0x109740be */
  if (C.zf) goto L_109740be;
  /* 1097408f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10974090 jne 0x10974085 */
  if (!C.zf) goto L_10974085;
L_10974092:;
  /* 10974092 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10974096 pop ebx */
  EBX = (pop32());
  /* 10974097 pop esi */
  ESI = (pop32());
  /* 10974098 pop edi */
  EDI = (pop32());
  /* 10974099 ret  */
  ESPCHK(0x10974040u, _esp0);
  ESP += 4; return;
L_1097409a:;
  /* 1097409a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109740a0 je 0x109740b4 */
  if (C.zf) goto L_109740b4;
L_109740a2:;
  /* 109740a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109740a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109740a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109740a6 je 0x10974136 */
  if (C.zf) goto L_10974136;
  /* 109740ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109740b2 jne 0x109740a2 */
  if (!C.zf) goto L_109740a2;
L_109740b4:;
  /* 109740b4 mov ebx, ecx */
  EBX = (ECX);
  /* 109740b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109740b9 jne 0x10974127 */
  if (!C.zf) goto L_10974127;
L_109740bb:;
  /* 109740bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109740bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_109740be:;
  /* 109740be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109740bf jne 0x109740bb */
  if (!C.zf) goto L_109740bb;
  /* 109740c1 pop ebx */
  EBX = (pop32());
  /* 109740c2 pop esi */
  ESI = (pop32());
L_109740c3:;
  /* 109740c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109740c7 pop edi */
  EDI = (pop32());
  /* 109740c8 ret  */
  ESPCHK(0x10974040u, _esp0);
  ESP += 4; return;
L_109740c9:;
  /* 109740c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 109740cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109740ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109740cf je 0x10974080 */
  if (C.zf) goto L_10974080;
L_109740d1:;
  /* 109740d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 109740d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 109740d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109740da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109740dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109740df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 109740e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109740e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 109740e9 je 0x109740c9 */
  if (C.zf) goto L_109740c9;
  /* 109740eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109740ed je 0x1097411b */
  if (C.zf) goto L_1097411b;
  /* 109740ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 109740f1 je 0x10974111 */
  if (C.zf) goto L_10974111;
  /* 109740f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 109740f9 je 0x10974107 */
  if (C.zf) goto L_10974107;
  /* 109740fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10974101 jne 0x109740c9 */
  if (!C.zf) goto L_109740c9;
  /* 10974103 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10974105 jmp 0x1097411f */
  goto L_1097411f;
L_10974107:;
  /* 10974107 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1097410d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1097410f jmp 0x1097411f */
  goto L_1097411f;
L_10974111:;
  /* 10974111 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10974117 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10974119 jmp 0x1097411f */
  goto L_1097411f;
L_1097411b:;
  /* 1097411b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1097411d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1097411f:;
  /* 1097411f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10974122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10974124 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10974125 je 0x10974131 */
  if (C.zf) goto L_10974131;
L_10974127:;
  /* 10974127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10974129:;
  /* 10974129 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1097412b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1097412e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1097412f jne 0x10974129 */
  if (!C.zf) goto L_10974129;
L_10974131:;
  /* 10974131 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10974134 jne 0x109740bb */
  if (!C.zf) goto L_109740bb;
L_10974136:;
  /* 10974136 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1097413a pop ebx */
  EBX = (pop32());
  /* 1097413b pop esi */
  ESI = (pop32());
  /* 1097413c pop edi */
  EDI = (pop32());
  /* 1097413d ret  */
  ESPCHK(0x10974040u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10974140 (88 bytes, 40 insns) */
void f_10974140(void) {
  FTRACE(0x10974140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974140 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10974144 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10974148 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1097414a je 0x10974193 */
  if (C.zf) goto L_10974193;
  /* 1097414c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1097414e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10974152 push edi */
  push32((uint32_t)(EDI));
  /* 10974153 mov edi, ecx */
  EDI = (ECX);
  /* 10974155 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974158 jb 0x10974187 */
  if (C.cf) goto L_10974187;
  /* 1097415a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1097415c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1097415f je 0x10974169 */
  if (C.zf) goto L_10974169;
  /* 10974161 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10974163:;
  /* 10974163 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10974165 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10974166 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10974167 jne 0x10974163 */
  if (!C.zf) goto L_10974163;
L_10974169:;
  /* 10974169 mov ecx, eax */
  ECX = (EAX);
  /* 1097416b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1097416e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10974170 mov ecx, eax */
  ECX = (EAX);
  /* 10974172 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10974175 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10974177 mov ecx, edx */
  ECX = (EDX);
  /* 10974179 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1097417c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1097417f je 0x10974187 */
  if (C.zf) goto L_10974187;
  /* 10974181 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10974183 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10974185 je 0x1097418d */
  if (C.zf) goto L_1097418d;
L_10974187:;
  /* 10974187 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10974189 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1097418a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1097418b jne 0x10974187 */
  if (!C.zf) goto L_10974187;
L_1097418d:;
  /* 1097418d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10974191 pop edi */
  EDI = (pop32());
  /* 10974192 ret  */
  ESPCHK(0x10974140u, _esp0);
  ESP += 4; return;
L_10974193:;
  /* 10974193 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10974197 ret  */
  ESPCHK(0x10974140u, _esp0);
  ESP += 4; return;
}

/* FUN_10004198 @ 0x10974198 (27 bytes, 13 insns) */
void f_10974198(void) {
  FTRACE(0x10974198u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974198 mov eax, dword ptr [0x10976980] */
  EAX = (r32((uint32_t)(0x10976980)));
  /* 1097419d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097419f je 0x109741b0 */
  if (C.zf) goto L_109741b0;
  /* 109741a1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 109741a5 call eax */
  call_ind((uint32_t)(EAX), 0x109741a7u);
  /* 109741a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109741a9 pop ecx */
  ECX = (pop32());
  /* 109741aa je 0x109741b0 */
  if (C.zf) goto L_109741b0;
  /* 109741ac push 1 */
  push32((uint32_t)(0x1u));
  /* 109741ae pop eax */
  EAX = (pop32());
  /* 109741af ret  */
  ESPCHK(0x10974198u, _esp0);
  ESP += 4; return;
L_109741b0:;
  /* 109741b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109741b2 ret  */
  ESPCHK(0x10974198u, _esp0);
  ESP += 4; return;
}

/* FUN_100041b3 @ 0x109741b3 (511 bytes, 193 insns) */
void f_109741b3(void) {
  FTRACE(0x109741b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109741b3 push ebp */
  push32((uint32_t)(EBP));
  /* 109741b4 mov ebp, esp */
  EBP = (ESP);
  /* 109741b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 109741b8 push 0x10975488 */
  push32((uint32_t)(0x10975488u));
  /* 109741bd push 0x10974980 */
  push32((uint32_t)(0x10974980u));
  /* 109741c2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 109741c8 push eax */
  push32((uint32_t)(EAX));
  /* 109741c9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 109741d0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109741d3 push ebx */
  push32((uint32_t)(EBX));
  /* 109741d4 push esi */
  push32((uint32_t)(ESI));
  /* 109741d5 push edi */
  push32((uint32_t)(EDI));
  /* 109741d6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109741d9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 109741db cmp dword ptr [0x109769a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x109769a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109741e1 jne 0x10974229 */
  if (!C.zf) goto L_10974229;
  /* 109741e3 push edi */
  push32((uint32_t)(EDI));
  /* 109741e4 push edi */
  push32((uint32_t)(EDI));
  /* 109741e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109741e7 pop ebx */
  EBX = (pop32());
  /* 109741e8 push ebx */
  push32((uint32_t)(EBX));
  /* 109741e9 push 0x10975480 */
  push32((uint32_t)(0x10975480u));
  /* 109741ee mov esi, 0x100 */
  ESI = (0x100u);
  /* 109741f3 push esi */
  push32((uint32_t)(ESI));
  /* 109741f4 push edi */
  push32((uint32_t)(EDI));
  /* 109741f5 call dword ptr [0x10975010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975010))), 0x109741fbu);
  /* 109741fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109741fd je 0x10974207 */
  if (C.zf) goto L_10974207;
  /* 109741ff mov dword ptr [0x109769a8], ebx */
  w32((uint32_t)(0x109769a8), (EBX));
  /* 10974205 jmp 0x10974229 */
  goto L_10974229;
L_10974207:;
  /* 10974207 push edi */
  push32((uint32_t)(EDI));
  /* 10974208 push edi */
  push32((uint32_t)(EDI));
  /* 10974209 push ebx */
  push32((uint32_t)(EBX));
  /* 1097420a push 0x1097547c */
  push32((uint32_t)(0x1097547cu));
  /* 1097420f push esi */
  push32((uint32_t)(ESI));
  /* 10974210 push edi */
  push32((uint32_t)(EDI));
  /* 10974211 call dword ptr [0x10975014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975014))), 0x10974217u);
  /* 10974217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10974219 je 0x10974341 */
  if (C.zf) goto L_10974341;
  /* 1097421f mov dword ptr [0x109769a8], 2 */
  w32((uint32_t)(0x109769a8), (0x2u));
L_10974229:;
  /* 10974229 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097422c jle 0x1097423e */
  if ((C.zf||C.sf!=C.of)) goto L_1097423e;
  /* 1097422e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10974231 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10974234 call 0x109743d7 */
  push32(0x10974239u); f_109743d7();
  /* 10974239 pop ecx */
  ECX = (pop32());
  /* 1097423a pop ecx */
  ECX = (pop32());
  /* 1097423b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1097423e:;
  /* 1097423e mov eax, dword ptr [0x109769a8] */
  EAX = (r32((uint32_t)(0x109769a8)));
  /* 10974243 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974246 jne 0x10974265 */
  if (!C.zf) goto L_10974265;
  /* 10974248 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1097424b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1097424e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10974251 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10974254 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10974257 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1097425a call dword ptr [0x10975014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975014))), 0x10974260u);
  /* 10974260 jmp 0x10974343 */
  goto L_10974343;
L_10974265:;
  /* 10974265 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974268 jne 0x10974341 */
  if (!C.zf) goto L_10974341;
  /* 1097426e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974271 jne 0x1097427b */
  if (!C.zf) goto L_1097427b;
  /* 10974273 mov eax, dword ptr [0x109769a0] */
  EAX = (r32((uint32_t)(0x109769a0)));
  /* 10974278 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1097427b:;
  /* 1097427b push edi */
  push32((uint32_t)(EDI));
  /* 1097427c push edi */
  push32((uint32_t)(EDI));
  /* 1097427d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10974280 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10974283 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10974286 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10974288 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097428a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1097428d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1097428e push eax */
  push32((uint32_t)(EAX));
  /* 1097428f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10974292 call dword ptr [0x10975024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975024))), 0x10974298u);
  /* 10974298 mov ebx, eax */
  EBX = (EAX);
  /* 1097429a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1097429d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097429f je 0x10974341 */
  if (C.zf) goto L_10974341;
  /* 109742a5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 109742a8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 109742ab add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109742ae and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109742b0 call 0x10974a60 */
  push32(0x109742b5u); f_10974a60();
  /* 109742b5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109742b8 mov eax, esp */
  EAX = (ESP);
  /* 109742ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 109742bd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109742c1 jmp 0x109742d6 */
  goto L_109742d6;
  /* 109742c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109742c5 pop eax */
  EAX = (pop32());
  /* 109742c6 ret  */
  ESPCHK(0x109741b3u, _esp0);
  ESP += 4; return;
  /* 109742c7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109742ca xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 109742cc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 109742cf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109742d3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_109742d6:;
  /* 109742d6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109742d9 je 0x10974341 */
  if (C.zf) goto L_10974341;
  /* 109742db push ebx */
  push32((uint32_t)(EBX));
  /* 109742dc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 109742df push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 109742e2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 109742e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109742e7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 109742ea call dword ptr [0x10975024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975024))), 0x109742f0u);
  /* 109742f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109742f2 je 0x10974341 */
  if (C.zf) goto L_10974341;
  /* 109742f4 push edi */
  push32((uint32_t)(EDI));
  /* 109742f5 push edi */
  push32((uint32_t)(EDI));
  /* 109742f6 push ebx */
  push32((uint32_t)(EBX));
  /* 109742f7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 109742fa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 109742fd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10974300 call dword ptr [0x10975010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975010))), 0x10974306u);
  /* 10974306 mov esi, eax */
  ESI = (EAX);
  /* 10974308 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1097430b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097430d je 0x10974341 */
  if (C.zf) goto L_10974341;
  /* 1097430f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10974313 je 0x10974355 */
  if (C.zf) goto L_10974355;
  /* 10974315 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974318 je 0x109743d0 */
  if (C.zf) goto L_109743d0;
  /* 1097431e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974321 jg 0x10974341 */
  if ((!C.zf&&C.sf==C.of)) goto L_10974341;
  /* 10974323 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10974326 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10974329 push ebx */
  push32((uint32_t)(EBX));
  /* 1097432a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1097432d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10974330 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10974333 call dword ptr [0x10975010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975010))), 0x10974339u);
  /* 10974339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1097433b jne 0x109743d0 */
  if (!C.zf) goto L_109743d0;
L_10974341:;
  /* 10974341 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10974343:;
  /* 10974343 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10974346 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10974349 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10974350 pop edi */
  EDI = (pop32());
  /* 10974351 pop esi */
  ESI = (pop32());
  /* 10974352 pop ebx */
  EBX = (pop32());
  /* 10974353 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10974354 ret  */
  ESPCHK(0x109741b3u, _esp0);
  ESP += 4; return;
L_10974355:;
  /* 10974355 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1097435c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1097435f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10974362 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10974364 call 0x10974a60 */
  push32(0x10974369u); f_10974a60();
  /* 10974369 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1097436c mov ebx, esp */
  EBX = (ESP);
  /* 1097436e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10974371 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10974375 jmp 0x10974389 */
  goto L_10974389;
  /* 10974377 push 1 */
  push32((uint32_t)(0x1u));
  /* 10974379 pop eax */
  EAX = (pop32());
  /* 1097437a ret  */
  ESPCHK(0x109741b3u, _esp0);
  ESP += 4; return;
  /* 1097437b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1097437e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10974380 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10974382 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10974386 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10974389:;
  /* 10974389 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097438b je 0x10974341 */
  if (C.zf) goto L_10974341;
  /* 1097438d push esi */
  push32((uint32_t)(ESI));
  /* 1097438e push ebx */
  push32((uint32_t)(EBX));
  /* 1097438f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10974392 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10974395 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10974398 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1097439b call dword ptr [0x10975010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975010))), 0x109743a1u);
  /* 109743a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109743a3 je 0x10974341 */
  if (C.zf) goto L_10974341;
  /* 109743a5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109743a8 push edi */
  push32((uint32_t)(EDI));
  /* 109743a9 push edi */
  push32((uint32_t)(EDI));
  /* 109743aa jne 0x109743b0 */
  if (!C.zf) goto L_109743b0;
  /* 109743ac push edi */
  push32((uint32_t)(EDI));
  /* 109743ad push edi */
  push32((uint32_t)(EDI));
  /* 109743ae jmp 0x109743b6 */
  goto L_109743b6;
L_109743b0:;
  /* 109743b0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 109743b3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_109743b6:;
  /* 109743b6 push esi */
  push32((uint32_t)(ESI));
  /* 109743b7 push ebx */
  push32((uint32_t)(EBX));
  /* 109743b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 109743bd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 109743c0 call dword ptr [0x10975064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975064))), 0x109743c6u);
  /* 109743c6 mov esi, eax */
  ESI = (EAX);
  /* 109743c8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109743ca je 0x10974341 */
  if (C.zf) goto L_10974341;
L_109743d0:;
  /* 109743d0 mov eax, esi */
  EAX = (ESI);
  /* 109743d2 jmp 0x10974343 */
  goto L_10974343;
}

/* FUN_100043d7 @ 0x109743d7 (43 bytes, 20 insns) */
void f_109743d7(void) {
  FTRACE(0x109743d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109743d7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 109743db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 109743df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109743e1 push esi */
  push32((uint32_t)(ESI));
  /* 109743e2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 109743e5 je 0x109743f4 */
  if (C.zf) goto L_109743f4;
L_109743e7:;
  /* 109743e7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109743ea je 0x109743f4 */
  if (C.zf) goto L_109743f4;
  /* 109743ec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109743ed mov esi, ecx */
  ESI = (ECX);
  /* 109743ef dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109743f0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109743f2 jne 0x109743e7 */
  if (!C.zf) goto L_109743e7;
L_109743f4:;
  /* 109743f4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109743f7 pop esi */
  ESI = (pop32());
  /* 109743f8 jne 0x109743ff */
  if (!C.zf) goto L_109743ff;
  /* 109743fa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109743fe ret  */
  ESPCHK(0x109743d7u, _esp0);
  ESP += 4; return;
L_109743ff:;
  /* 109743ff mov eax, edx */
  EAX = (EDX);
  /* 10974401 ret  */
  ESPCHK(0x109743d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004402 @ 0x10974402 (318 bytes, 123 insns) */
void f_10974402(void) {
  FTRACE(0x10974402u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974402 push ebp */
  push32((uint32_t)(EBP));
  /* 10974403 mov ebp, esp */
  EBP = (ESP);
  /* 10974405 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10974407 push 0x109754a0 */
  push32((uint32_t)(0x109754a0u));
  /* 1097440c push 0x10974980 */
  push32((uint32_t)(0x10974980u));
  /* 10974411 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10974417 push eax */
  push32((uint32_t)(EAX));
  /* 10974418 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1097441f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10974422 push ebx */
  push32((uint32_t)(EBX));
  /* 10974423 push esi */
  push32((uint32_t)(ESI));
  /* 10974424 push edi */
  push32((uint32_t)(EDI));
  /* 10974425 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10974428 mov eax, dword ptr [0x109769ac] */
  EAX = (r32((uint32_t)(0x109769ac)));
  /* 1097442d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1097442f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974431 jne 0x10974471 */
  if (!C.zf) goto L_10974471;
  /* 10974433 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10974436 push eax */
  push32((uint32_t)(EAX));
  /* 10974437 push 1 */
  push32((uint32_t)(0x1u));
  /* 10974439 pop esi */
  ESI = (pop32());
  /* 1097443a push esi */
  push32((uint32_t)(ESI));
  /* 1097443b push 0x10975480 */
  push32((uint32_t)(0x10975480u));
  /* 10974440 push esi */
  push32((uint32_t)(ESI));
  /* 10974441 call dword ptr [0x1097500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097500c))), 0x10974447u);
  /* 10974447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10974449 je 0x1097444f */
  if (C.zf) goto L_1097444f;
  /* 1097444b mov eax, esi */
  EAX = (ESI);
  /* 1097444d jmp 0x1097446c */
  goto L_1097446c;
L_1097444f:;
  /* 1097444f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10974452 push eax */
  push32((uint32_t)(EAX));
  /* 10974453 push esi */
  push32((uint32_t)(ESI));
  /* 10974454 push 0x1097547c */
  push32((uint32_t)(0x1097547cu));
  /* 10974459 push esi */
  push32((uint32_t)(ESI));
  /* 1097445a push ebx */
  push32((uint32_t)(EBX));
  /* 1097445b call dword ptr [0x10975018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975018))), 0x10974461u);
  /* 10974461 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10974463 je 0x10974537 */
  if (C.zf) goto L_10974537;
  /* 10974469 push 2 */
  push32((uint32_t)(0x2u));
  /* 1097446b pop eax */
  EAX = (pop32());
L_1097446c:;
  /* 1097446c mov dword ptr [0x109769ac], eax */
  w32((uint32_t)(0x109769ac), (EAX));
L_10974471:;
  /* 10974471 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974474 jne 0x1097449a */
  if (!C.zf) goto L_1097449a;
  /* 10974476 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10974479 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097447b jne 0x10974482 */
  if (!C.zf) goto L_10974482;
  /* 1097447d mov eax, dword ptr [0x10976990] */
  EAX = (r32((uint32_t)(0x10976990)));
L_10974482:;
  /* 10974482 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10974485 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10974488 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1097448b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1097448e push eax */
  push32((uint32_t)(EAX));
  /* 1097448f call dword ptr [0x10975018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975018))), 0x10974495u);
  /* 10974495 jmp 0x10974539 */
  goto L_10974539;
L_1097449a:;
  /* 1097449a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097449d jne 0x10974537 */
  if (!C.zf) goto L_10974537;
  /* 109744a3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109744a6 jne 0x109744b0 */
  if (!C.zf) goto L_109744b0;
  /* 109744a8 mov eax, dword ptr [0x109769a0] */
  EAX = (r32((uint32_t)(0x109769a0)));
  /* 109744ad mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_109744b0:;
  /* 109744b0 push ebx */
  push32((uint32_t)(EBX));
  /* 109744b1 push ebx */
  push32((uint32_t)(EBX));
  /* 109744b2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 109744b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 109744b8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 109744bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109744bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109744bf and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 109744c2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109744c3 push eax */
  push32((uint32_t)(EAX));
  /* 109744c4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 109744c7 call dword ptr [0x10975024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975024))), 0x109744cdu);
  /* 109744cd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 109744d0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109744d2 je 0x10974537 */
  if (C.zf) goto L_10974537;
  /* 109744d4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 109744d7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 109744da mov eax, edi */
  EAX = (EDI);
  /* 109744dc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109744df and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109744e1 call 0x10974a60 */
  push32(0x109744e6u); f_10974a60();
  /* 109744e6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109744e9 mov esi, esp */
  ESI = (ESP);
  /* 109744eb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 109744ee push edi */
  push32((uint32_t)(EDI));
  /* 109744ef push ebx */
  push32((uint32_t)(EBX));
  /* 109744f0 push esi */
  push32((uint32_t)(ESI));
  /* 109744f1 call 0x10974140 */
  push32(0x109744f6u); f_10974140();
  /* 109744f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109744f9 jmp 0x10974506 */
  goto L_10974506;
  /* 109744fb push 1 */
  push32((uint32_t)(0x1u));
  /* 109744fd pop eax */
  EAX = (pop32());
  /* 109744fe ret  */
  ESPCHK(0x10974402u, _esp0);
  ESP += 4; return;
  /* 109744ff mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10974502 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10974504 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10974506:;
  /* 10974506 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1097450a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097450c je 0x10974537 */
  if (C.zf) goto L_10974537;
  /* 1097450e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10974511 push esi */
  push32((uint32_t)(ESI));
  /* 10974512 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10974515 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10974518 push 1 */
  push32((uint32_t)(0x1u));
  /* 1097451a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1097451d call dword ptr [0x10975024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10975024))), 0x10974523u);
  /* 10974523 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974525 je 0x10974537 */
  if (C.zf) goto L_10974537;
  /* 10974527 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1097452a push eax */
  push32((uint32_t)(EAX));
  /* 1097452b push esi */
  push32((uint32_t)(ESI));
  /* 1097452c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1097452f call dword ptr [0x1097500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1097500c))), 0x10974535u);
  /* 10974535 jmp 0x10974539 */
  goto L_10974539;
L_10974537:;
  /* 10974537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10974539:;
  /* 10974539 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1097453c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1097453f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10974546 pop edi */
  EDI = (pop32());
  /* 10974547 pop esi */
  ESI = (pop32());
  /* 10974548 pop ebx */
  EBX = (pop32());
  /* 10974549 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1097454a ret  */
  ESPCHK(0x10974402u, _esp0);
  ESP += 4; return;
}

/* FUN_10004550 @ 0x10974550 (664 bytes, 268 insns) [15 switch table(s)] */
void f_10974550(void) {
  FTRACE(0x10974550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974550 push ebp */
  push32((uint32_t)(EBP));
  /* 10974551 mov ebp, esp */
  EBP = (ESP);
  /* 10974553 push edi */
  push32((uint32_t)(EDI));
  /* 10974554 push esi */
  push32((uint32_t)(ESI));
  /* 10974555 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10974558 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1097455b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1097455e mov eax, ecx */
  EAX = (ECX);
  /* 10974560 mov edx, ecx */
  EDX = (ECX);
  /* 10974562 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10974564 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974566 jbe 0x10974570 */
  if ((C.cf||C.zf)) goto L_10974570;
  /* 10974568 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097456a jb 0x109746e8 */
  if (C.cf) goto L_109746e8;
L_10974570:;
  /* 10974570 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10974576 jne 0x1097458c */
  if (!C.zf) goto L_1097458c;
  /* 10974578 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1097457b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1097457e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974581 jb 0x109745ac */
  if (C.cf) goto L_109745ac;
  /* 10974583 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10974585 jmp dword ptr [edx*4 + 0x10974698] */
  switch (EDX) {
    case 0: goto L_109746a8;
    case 1: goto L_109746b0;
    case 2: goto L_109746bc;
    case 3: goto L_109746d0;
    default: x86_unimpl("switch@0x10974585 out of table"); return;
  }
L_1097458c:;
  /* 1097458c mov eax, edi */
  EAX = (EDI);
  /* 1097458e mov edx, 3 */
  EDX = (0x3u);
  /* 10974593 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10974596 jb 0x109745a4 */
  if (C.cf) goto L_109745a4;
  /* 10974598 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1097459b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1097459d jmp dword ptr [eax*4 + 0x109745b0] */
  switch (EAX) {
    case 1: goto L_109745c0;
    case 2: goto L_109745ec;
    case 3: goto L_10974610;
    default: x86_unimpl("switch@0x1097459d out of table"); return;
  }
L_109745a4:;
  /* 109745a4 jmp dword ptr [ecx*4 + 0x109746a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x109746a8)))); return;
  /* 109745ab nop  */
  /* nop */
L_109745ac:;
  /* 109745ac jmp dword ptr [ecx*4 + 0x1097462c] */
  switch (ECX) {
    case 0: goto L_1097468f;
    case 1: goto L_1097467c;
    case 2: goto L_10974674;
    case 3: goto L_1097466c;
    case 4: goto L_10974664;
    case 5: goto L_1097465c;
    case 6: goto L_10974654;
    case 7: goto L_1097464c;
    default: x86_unimpl("switch@0x109745ac out of table"); return;
  }
  /* 109745b3 nop  */
  /* nop */
L_109745c0:;
  /* 109745c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109745c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109745c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109745c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109745c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109745cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109745cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109745d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109745d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109745d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109745db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109745de jb 0x109745ac */
  if (C.cf) goto L_109745ac;
  /* 109745e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109745e2 jmp dword ptr [edx*4 + 0x10974698] */
  switch (EDX) {
    case 0: goto L_109746a8;
    case 1: goto L_109746b0;
    case 2: goto L_109746bc;
    case 3: goto L_109746d0;
    default: x86_unimpl("switch@0x109745e2 out of table"); return;
  }
  /* 109745e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109745ec:;
  /* 109745ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109745ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109745f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109745f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109745f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109745f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109745fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109745fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10974601 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974604 jb 0x109745ac */
  if (C.cf) goto L_109745ac;
  /* 10974606 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10974608 jmp dword ptr [edx*4 + 0x10974698] */
  switch (EDX) {
    case 0: goto L_109746a8;
    case 1: goto L_109746b0;
    case 2: goto L_109746bc;
    case 3: goto L_109746d0;
    default: x86_unimpl("switch@0x10974608 out of table"); return;
  }
  /* 1097460f nop  */
  /* nop */
L_10974610:;
  /* 10974610 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10974612 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10974614 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10974616 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10974617 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1097461a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1097461b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097461e jb 0x109745ac */
  if (C.cf) goto L_109745ac;
  /* 10974620 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10974622 jmp dword ptr [edx*4 + 0x10974698] */
  switch (EDX) {
    case 0: goto L_109746a8;
    case 1: goto L_109746b0;
    case 2: goto L_109746bc;
    case 3: goto L_109746d0;
    default: x86_unimpl("switch@0x10974622 out of table"); return;
  }
  /* 10974629 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1097464c:;
  /* 1097464c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10974650 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10974654:;
  /* 10974654 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10974658 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1097465c:;
  /* 1097465c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10974660 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10974664:;
  /* 10974664 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10974668 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1097466c:;
  /* 1097466c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10974670 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10974674:;
  /* 10974674 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10974678 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1097467c:;
  /* 1097467c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10974680 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10974684 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1097468b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1097468d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1097468f:;
  /* 1097468f jmp dword ptr [edx*4 + 0x10974698] */
  switch (EDX) {
    case 0: goto L_109746a8;
    case 1: goto L_109746b0;
    case 2: goto L_109746bc;
    case 3: goto L_109746d0;
    default: x86_unimpl("switch@0x1097468f out of table"); return;
  }
  /* 10974696 mov edi, edi */
  EDI = (EDI);
L_109746a8:;
  /* 109746a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109746ab pop esi */
  ESI = (pop32());
  /* 109746ac pop edi */
  EDI = (pop32());
  /* 109746ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109746ae ret  */
  ESPCHK(0x10974550u, _esp0);
  ESP += 4; return;
  /* 109746af nop  */
  /* nop */
L_109746b0:;
  /* 109746b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109746b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109746b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109746b7 pop esi */
  ESI = (pop32());
  /* 109746b8 pop edi */
  EDI = (pop32());
  /* 109746b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109746ba ret  */
  ESPCHK(0x10974550u, _esp0);
  ESP += 4; return;
  /* 109746bb nop  */
  /* nop */
L_109746bc:;
  /* 109746bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109746be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109746c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109746c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109746c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109746c9 pop esi */
  ESI = (pop32());
  /* 109746ca pop edi */
  EDI = (pop32());
  /* 109746cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109746cc ret  */
  ESPCHK(0x10974550u, _esp0);
  ESP += 4; return;
  /* 109746cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109746d0:;
  /* 109746d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109746d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109746d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109746d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109746da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109746dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109746e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109746e3 pop esi */
  ESI = (pop32());
  /* 109746e4 pop edi */
  EDI = (pop32());
  /* 109746e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109746e6 ret  */
  ESPCHK(0x10974550u, _esp0);
  ESP += 4; return;
  /* 109746e7 nop  */
  /* nop */
L_109746e8:;
  /* 109746e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 109746ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 109746f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109746f6 jne 0x1097471c */
  if (!C.zf) goto L_1097471c;
  /* 109746f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109746fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109746fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974701 jb 0x10974710 */
  if (C.cf) goto L_10974710;
  /* 10974703 std  */
  C.df=1;
  /* 10974704 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10974706 cld  */
  C.df=0;
  /* 10974707 jmp dword ptr [edx*4 + 0x10974830] */
  switch (EDX) {
    case 0: goto L_10974840;
    case 1: goto L_10974848;
    case 2: goto L_10974858;
    case 3: goto L_1097486c;
    default: x86_unimpl("switch@0x10974707 out of table"); return;
  }
  /* 1097470e mov edi, edi */
  EDI = (EDI);
L_10974710:;
  /* 10974710 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10974712 jmp dword ptr [ecx*4 + 0x109747e0] */
  switch (ECX) {
    case 0: goto L_10974827;
    default: x86_unimpl("switch@0x10974712 out of table"); return;
  }
  /* 10974719 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1097471c:;
  /* 1097471c mov eax, edi */
  EAX = (EDI);
  /* 1097471e mov edx, 3 */
  EDX = (0x3u);
  /* 10974723 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974726 jb 0x10974734 */
  if (C.cf) goto L_10974734;
  /* 10974728 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1097472b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097472d jmp dword ptr [eax*4 + 0x10974738] */
  switch (EAX) {
    case 1: goto L_10974748;
    case 2: goto L_10974768;
    case 3: goto L_10974790;
    default: x86_unimpl("switch@0x1097472d out of table"); return;
  }
L_10974734:;
  /* 10974734 jmp dword ptr [ecx*4 + 0x10974830] */
  switch (ECX) {
    case 0: goto L_10974840;
    case 1: goto L_10974848;
    case 2: goto L_10974858;
    case 3: goto L_1097486c;
    default: x86_unimpl("switch@0x10974734 out of table"); return;
  }
  /* 1097473b nop  */
  /* nop */
L_10974748:;
  /* 10974748 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097474b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1097474d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10974750 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10974751 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10974754 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10974755 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974758 jb 0x10974710 */
  if (C.cf) goto L_10974710;
  /* 1097475a std  */
  C.df=1;
  /* 1097475b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1097475d cld  */
  C.df=0;
  /* 1097475e jmp dword ptr [edx*4 + 0x10974830] */
  switch (EDX) {
    case 0: goto L_10974840;
    case 1: goto L_10974848;
    case 2: goto L_10974858;
    case 3: goto L_1097486c;
    default: x86_unimpl("switch@0x1097475e out of table"); return;
  }
  /* 10974765 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10974768:;
  /* 10974768 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097476b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1097476d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10974770 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10974773 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10974776 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10974779 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097477c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1097477f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974782 jb 0x10974710 */
  if (C.cf) goto L_10974710;
  /* 10974784 std  */
  C.df=1;
  /* 10974785 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10974787 cld  */
  C.df=0;
  /* 10974788 jmp dword ptr [edx*4 + 0x10974830] */
  switch (EDX) {
    case 0: goto L_10974840;
    case 1: goto L_10974848;
    case 2: goto L_10974858;
    case 3: goto L_1097486c;
    default: x86_unimpl("switch@0x10974788 out of table"); return;
  }
  /* 1097478f nop  */
  /* nop */
L_10974790:;
  /* 10974790 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10974793 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10974795 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10974798 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1097479b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1097479e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109747a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109747a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109747a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109747aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109747ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109747b0 jb 0x10974710 */
  if (C.cf) goto L_10974710;
  /* 109747b6 std  */
  C.df=1;
  /* 109747b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109747b9 cld  */
  C.df=0;
  /* 109747ba jmp dword ptr [edx*4 + 0x10974830] */
  switch (EDX) {
    case 0: goto L_10974840;
    case 1: goto L_10974848;
    case 2: goto L_10974858;
    case 3: goto L_1097486c;
    default: x86_unimpl("switch@0x109747ba out of table"); return;
  }
  /* 109747c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 109747c4 in al, 0x47 */
  x86_unimpl("in @ 0x109747c4");
  /* 109747c6 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109747c7 adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109747c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109747ca xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109747cb adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109747cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109747ce xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109747cf adc ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109747d1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109747d2 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109747d3 adc byte ptr [eax + ecx*2], al */
  { uint32_t _a=(r8((uint32_t)(EAX + ECX*2))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 109747d6 xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109747d7 adc byte ptr [eax + ecx*2], cl */
  { uint32_t _a=(r8((uint32_t)(EAX + ECX*2))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 109747da xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109747db adc byte ptr [eax + ecx*2], dl */
  { uint32_t _a=(r8((uint32_t)(EAX + ECX*2))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX + ECX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 109747de xchg edi, eax */
  { uint32_t _t=(EDI); EDI = (EAX); EAX = (_t); }
  /* 109747e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 109747e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 109747ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 109747f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 109747f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 109747f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 109747fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10974800 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10974804 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10974808 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1097480c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10974810 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10974814 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10974818 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1097481c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10974823 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10974825 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10974827:;
  /* 10974827 jmp dword ptr [edx*4 + 0x10974830] */
  switch (EDX) {
    case 0: goto L_10974840;
    case 1: goto L_10974848;
    case 2: goto L_10974858;
    case 3: goto L_1097486c;
    default: x86_unimpl("switch@0x10974827 out of table"); return;
  }
  /* 1097482e mov edi, edi */
  EDI = (EDI);
L_10974840:;
  /* 10974840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10974843 pop esi */
  ESI = (pop32());
  /* 10974844 pop edi */
  EDI = (pop32());
  /* 10974845 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10974846 ret  */
  ESPCHK(0x10974550u, _esp0);
  ESP += 4; return;
  /* 10974847 nop  */
  /* nop */
L_10974848:;
  /* 10974848 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097484b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1097484e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10974851 pop esi */
  ESI = (pop32());
  /* 10974852 pop edi */
  EDI = (pop32());
  /* 10974853 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10974854 ret  */
  ESPCHK(0x10974550u, _esp0);
  ESP += 4; return;
  /* 10974855 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10974858:;
  /* 10974858 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097485b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1097485e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10974861 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10974864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10974867 pop esi */
  ESI = (pop32());
  /* 10974868 pop edi */
  EDI = (pop32());
  /* 10974869 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1097486a ret  */
  ESPCHK(0x10974550u, _esp0);
  ESP += 4; return;
  /* 1097486b nop  */
  /* nop */
L_1097486c:;
  /* 1097486c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1097486f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10974872 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10974875 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10974878 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1097487b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1097487e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10974881 pop esi */
  ESI = (pop32());
  /* 10974882 pop edi */
  EDI = (pop32());
  /* 10974883 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10974884 ret  */
  ESPCHK(0x10974550u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10974888 (32 bytes, 18 insns) */
void f_10974888(void) {
  FTRACE(0x10974888u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974888 push ebp */
  push32((uint32_t)(EBP));
  /* 10974889 mov ebp, esp */
  EBP = (ESP);
  /* 1097488b push ebx */
  push32((uint32_t)(EBX));
  /* 1097488c push esi */
  push32((uint32_t)(ESI));
  /* 1097488d push edi */
  push32((uint32_t)(EDI));
  /* 1097488e push ebp */
  push32((uint32_t)(EBP));
  /* 1097488f push 0 */
  push32((uint32_t)(0x0u));
  /* 10974891 push 0 */
  push32((uint32_t)(0x0u));
  /* 10974893 push 0x109748a0 */
  push32((uint32_t)(0x109748a0u));
  /* 10974898 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1097489b call 0x10974a90 */
  push32(0x109748a0u); f_10974a90();
  /* 109748a0 pop ebp */
  EBP = (pop32());
  /* 109748a1 pop edi */
  EDI = (pop32());
  /* 109748a2 pop esi */
  ESI = (pop32());
  /* 109748a3 pop ebx */
  EBX = (pop32());
  /* 109748a4 mov esp, ebp */
  ESP = (EBP);
  /* 109748a6 pop ebp */
  EBP = (pop32());
  /* 109748a7 ret  */
  ESPCHK(0x10974888u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x109748ca (104 bytes, 33 insns) */
void f_109748ca(void) {
  FTRACE(0x109748cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109748ca push ebx */
  push32((uint32_t)(EBX));
  /* 109748cb push esi */
  push32((uint32_t)(ESI));
  /* 109748cc push edi */
  push32((uint32_t)(EDI));
  /* 109748cd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 109748d1 push eax */
  push32((uint32_t)(EAX));
  /* 109748d2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 109748d4 push 0x109748a8 */
  push32((uint32_t)(0x109748a8u));
  /* 109748d9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 109748e0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_109748e7:;
  /* 109748e7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 109748eb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 109748ee mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 109748f1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109748f4 je 0x10974924 */
  if (C.zf) goto L_10974924;
  /* 109748f6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109748fa je 0x10974924 */
  if (C.zf) goto L_10974924;
  /* 109748fc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 109748ff mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10974902 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10974906 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10974909 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1097490e jne 0x10974922 */
  if (!C.zf) goto L_10974922;
  /* 10974910 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10974915 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10974919 call 0x1097495e */
  push32(0x1097491eu); f_1097495e();
  /* 1097491e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10974922u);
L_10974922:;
  /* 10974922 jmp 0x109748e7 */
  goto L_109748e7;
L_10974924:;
  /* 10974924 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1097492b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1097492e pop edi */
  EDI = (pop32());
  /* 1097492f pop esi */
  ESI = (pop32());
  /* 10974930 pop ebx */
  EBX = (pop32());
  /* 10974931 ret  */
  ESPCHK(0x109748cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000495e @ 0x1097495e (24 bytes, 10 insns) */
void f_1097495e(void) {
  FTRACE(0x1097495eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1097495e push ebx */
  push32((uint32_t)(EBX));
  /* 1097495f push ecx */
  push32((uint32_t)(ECX));
  /* 10974960 mov ebx, 0x109765f0 */
  EBX = (0x109765f0u);
  /* 10974965 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10974968 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1097496b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1097496e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10974971 pop ecx */
  ECX = (pop32());
  /* 10974972 pop ebx */
  EBX = (pop32());
  /* 10974973 ret 4 */
  ESPCHK(0x1097495eu, _esp0);
  ESP += 8; return;
}

/* FUN_10004a3d @ 0x10974a3d (27 bytes, 11 insns) */
void f_10974a3d(void) {
  FTRACE(0x10974a3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974a3d push ebp */
  push32((uint32_t)(EBP));
  /* 10974a3e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10974a42 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10974a44 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10974a47 push eax */
  push32((uint32_t)(EAX));
  /* 10974a48 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10974a4b push eax */
  push32((uint32_t)(EAX));
  /* 10974a4c call 0x109748ca */
  push32(0x10974a51u); f_109748ca();
  /* 10974a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10974a54 pop ebp */
  EBP = (pop32());
  /* 10974a55 ret 4 */
  ESPCHK(0x10974a3du, _esp0);
  ESP += 8; return;
}

/* FUN_10004a60 @ 0x10974a60 (47 bytes, 17 insns) */
void f_10974a60(void) {
  FTRACE(0x10974a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974a60 push ecx */
  push32((uint32_t)(ECX));
  /* 10974a61 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974a66 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10974a6a jb 0x10974a80 */
  if (C.cf) goto L_10974a80;
L_10974a6c:;
  /* 10974a6c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10974a72 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10974a77 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10974a79 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10974a7e jae 0x10974a6c */
  if (!C.cf) goto L_10974a6c;
L_10974a80:;
  /* 10974a80 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10974a82 mov eax, esp */
  EAX = (ESP);
  /* 10974a84 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10974a86 mov esp, ecx */
  ESP = (ECX);
  /* 10974a88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10974a8a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10974a8d push eax */
  push32((uint32_t)(EAX));
  /* 10974a8e ret  */
  ESPCHK(0x10974a60u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10974a90 (6 bytes, 1 insns) */
void f_10974a90(void) {
  FTRACE(0x10974a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10974a90 jmp dword ptr [0x10975008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10975008)))); return;
}

