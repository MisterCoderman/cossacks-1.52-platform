#include "recomp.h"

/* FUN_10001000 @ 0x10821000 (18 bytes, 7 insns) */
void f_10821000(void) {
  FTRACE(0x10821000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10821000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10821004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10821005 jne 0x1082100c */
  if (!C.zf) goto L_1082100c;
  /* 10821007 call 0x10821012 */
  push32(0x1082100cu); f_10821012();
L_1082100c:;
  /* 1082100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1082100e pop eax */
  EAX = (pop32());
  /* 1082100f ret 0xc */
  ESPCHK(0x10821000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10821012 (1923 bytes, 522 insns) */
void f_10821012(void) {
  FTRACE(0x10821012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10821012 push ebx */
  push32((uint32_t)(EBX));
  /* 10821013 push ebp */
  push32((uint32_t)(EBP));
  /* 10821014 push esi */
  push32((uint32_t)(ESI));
  /* 10821015 mov esi, dword ptr [0x10827178] */
  ESI = (r32((uint32_t)(0x10827178)));
  /* 1082101b push edi */
  push32((uint32_t)(EDI));
  /* 1082101c push 0x10828390 */
  push32((uint32_t)(0x10828390u));
  /* 10821021 push 0x10828bf8 */
  push32((uint32_t)(0x10828bf8u));
  /* 10821026 call esi */
  call_ind((uint32_t)(ESI), 0x10821028u);
  /* 10821028 push 0x1082838c */
  push32((uint32_t)(0x1082838cu));
  /* 1082102d push 0x10828c00 */
  push32((uint32_t)(0x10828c00u));
  /* 10821032 call esi */
  call_ind((uint32_t)(ESI), 0x10821034u);
  /* 10821034 push 0x10828388 */
  push32((uint32_t)(0x10828388u));
  /* 10821039 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 1082103e call esi */
  call_ind((uint32_t)(ESI), 0x10821040u);
  /* 10821040 push 0x10828384 */
  push32((uint32_t)(0x10828384u));
  /* 10821045 push 0x10828c08 */
  push32((uint32_t)(0x10828c08u));
  /* 1082104a call esi */
  call_ind((uint32_t)(ESI), 0x1082104cu);
  /* 1082104c push 0x10828380 */
  push32((uint32_t)(0x10828380u));
  /* 10821051 push 0x10828b00 */
  push32((uint32_t)(0x10828b00u));
  /* 10821056 call esi */
  call_ind((uint32_t)(ESI), 0x10821058u);
  /* 10821058 push 0x1082837c */
  push32((uint32_t)(0x1082837cu));
  /* 1082105d push 0x10828c18 */
  push32((uint32_t)(0x10828c18u));
  /* 10821062 call esi */
  call_ind((uint32_t)(ESI), 0x10821064u);
  /* 10821064 push 0x10828378 */
  push32((uint32_t)(0x10828378u));
  /* 10821069 push 0x10828c28 */
  push32((uint32_t)(0x10828c28u));
  /* 1082106e call esi */
  call_ind((uint32_t)(ESI), 0x10821070u);
  /* 10821070 push 0x10828374 */
  push32((uint32_t)(0x10828374u));
  /* 10821075 push 0x10828c38 */
  push32((uint32_t)(0x10828c38u));
  /* 1082107a call esi */
  call_ind((uint32_t)(ESI), 0x1082107cu);
  /* 1082107c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082107f push 0x10828370 */
  push32((uint32_t)(0x10828370u));
  /* 10821084 push 0x10828b08 */
  push32((uint32_t)(0x10828b08u));
  /* 10821089 call esi */
  call_ind((uint32_t)(ESI), 0x1082108bu);
  /* 1082108b push 0x1082836c */
  push32((uint32_t)(0x1082836cu));
  /* 10821090 push 0x10828c50 */
  push32((uint32_t)(0x10828c50u));
  /* 10821095 call esi */
  call_ind((uint32_t)(ESI), 0x10821097u);
  /* 10821097 push 0x10828368 */
  push32((uint32_t)(0x10828368u));
  /* 1082109c push 0x10828c60 */
  push32((uint32_t)(0x10828c60u));
  /* 108210a1 call esi */
  call_ind((uint32_t)(ESI), 0x108210a3u);
  /* 108210a3 push 0x10828364 */
  push32((uint32_t)(0x10828364u));
  /* 108210a8 push 0x10828c70 */
  push32((uint32_t)(0x10828c70u));
  /* 108210ad call esi */
  call_ind((uint32_t)(ESI), 0x108210afu);
  /* 108210af push 0x10828360 */
  push32((uint32_t)(0x10828360u));
  /* 108210b4 push 0x10828b10 */
  push32((uint32_t)(0x10828b10u));
  /* 108210b9 call esi */
  call_ind((uint32_t)(ESI), 0x108210bbu);
  /* 108210bb push 0x1082835c */
  push32((uint32_t)(0x1082835cu));
  /* 108210c0 push 0x10828b18 */
  push32((uint32_t)(0x10828b18u));
  /* 108210c5 call esi */
  call_ind((uint32_t)(ESI), 0x108210c7u);
  /* 108210c7 push 0x10828358 */
  push32((uint32_t)(0x10828358u));
  /* 108210cc push 0x10828c90 */
  push32((uint32_t)(0x10828c90u));
  /* 108210d1 call esi */
  call_ind((uint32_t)(ESI), 0x108210d3u);
  /* 108210d3 push 0x10828354 */
  push32((uint32_t)(0x10828354u));
  /* 108210d8 push 0x10828b20 */
  push32((uint32_t)(0x10828b20u));
  /* 108210dd call esi */
  call_ind((uint32_t)(ESI), 0x108210dfu);
  /* 108210df add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108210e2 push 0x10828350 */
  push32((uint32_t)(0x10828350u));
  /* 108210e7 push 0x10828b28 */
  push32((uint32_t)(0x10828b28u));
  /* 108210ec call esi */
  call_ind((uint32_t)(ESI), 0x108210eeu);
  /* 108210ee push 0x1082834c */
  push32((uint32_t)(0x1082834cu));
  /* 108210f3 push 0x10828b30 */
  push32((uint32_t)(0x10828b30u));
  /* 108210f8 call esi */
  call_ind((uint32_t)(ESI), 0x108210fau);
  /* 108210fa push 0x10828348 */
  push32((uint32_t)(0x10828348u));
  /* 108210ff push 0x10828c98 */
  push32((uint32_t)(0x10828c98u));
  /* 10821104 call esi */
  call_ind((uint32_t)(ESI), 0x10821106u);
  /* 10821106 push 0x10828344 */
  push32((uint32_t)(0x10828344u));
  /* 1082110b push 0x10828b38 */
  push32((uint32_t)(0x10828b38u));
  /* 10821110 call esi */
  call_ind((uint32_t)(ESI), 0x10821112u);
  /* 10821112 push 0x10828340 */
  push32((uint32_t)(0x10828340u));
  /* 10821117 push 0x10828cb0 */
  push32((uint32_t)(0x10828cb0u));
  /* 1082111c call esi */
  call_ind((uint32_t)(ESI), 0x1082111eu);
  /* 1082111e push 0x1082833c */
  push32((uint32_t)(0x1082833cu));
  /* 10821123 push 0x10828cb8 */
  push32((uint32_t)(0x10828cb8u));
  /* 10821128 call esi */
  call_ind((uint32_t)(ESI), 0x1082112au);
  /* 1082112a push 0x10828338 */
  push32((uint32_t)(0x10828338u));
  /* 1082112f push 0x10828cc0 */
  push32((uint32_t)(0x10828cc0u));
  /* 10821134 call esi */
  call_ind((uint32_t)(ESI), 0x10821136u);
  /* 10821136 push 0x10828334 */
  push32((uint32_t)(0x10828334u));
  /* 1082113b push 0x10828b68 */
  push32((uint32_t)(0x10828b68u));
  /* 10821140 call esi */
  call_ind((uint32_t)(ESI), 0x10821142u);
  /* 10821142 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821145 push 0x10828330 */
  push32((uint32_t)(0x10828330u));
  /* 1082114a push 0x10828b70 */
  push32((uint32_t)(0x10828b70u));
  /* 1082114f call esi */
  call_ind((uint32_t)(ESI), 0x10821151u);
  /* 10821151 push 0x10828328 */
  push32((uint32_t)(0x10828328u));
  /* 10821156 push 0x10828d28 */
  push32((uint32_t)(0x10828d28u));
  /* 1082115b call esi */
  call_ind((uint32_t)(ESI), 0x1082115du);
  /* 1082115d push 0x10828324 */
  push32((uint32_t)(0x10828324u));
  /* 10821162 push 0x10828b80 */
  push32((uint32_t)(0x10828b80u));
  /* 10821167 call esi */
  call_ind((uint32_t)(ESI), 0x10821169u);
  /* 10821169 push 0x10828320 */
  push32((uint32_t)(0x10828320u));
  /* 1082116e push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 10821173 call esi */
  call_ind((uint32_t)(ESI), 0x10821175u);
  /* 10821175 push 0x10828318 */
  push32((uint32_t)(0x10828318u));
  /* 1082117a push 0x10828d98 */
  push32((uint32_t)(0x10828d98u));
  /* 1082117f call esi */
  call_ind((uint32_t)(ESI), 0x10821181u);
  /* 10821181 push 0x10828314 */
  push32((uint32_t)(0x10828314u));
  /* 10821186 push 0x10828b98 */
  push32((uint32_t)(0x10828b98u));
  /* 1082118b call esi */
  call_ind((uint32_t)(ESI), 0x1082118du);
  /* 1082118d push 0x1082830c */
  push32((uint32_t)(0x1082830cu));
  /* 10821192 push 0x10828da8 */
  push32((uint32_t)(0x10828da8u));
  /* 10821197 call esi */
  call_ind((uint32_t)(ESI), 0x10821199u);
  /* 10821199 push 0x10828304 */
  push32((uint32_t)(0x10828304u));
  /* 1082119e push 0x10828db0 */
  push32((uint32_t)(0x10828db0u));
  /* 108211a3 call esi */
  call_ind((uint32_t)(ESI), 0x108211a5u);
  /* 108211a5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108211a8 push 0x108282fc */
  push32((uint32_t)(0x108282fcu));
  /* 108211ad push 0x10828db8 */
  push32((uint32_t)(0x10828db8u));
  /* 108211b2 call esi */
  call_ind((uint32_t)(ESI), 0x108211b4u);
  /* 108211b4 push 0x108282f4 */
  push32((uint32_t)(0x108282f4u));
  /* 108211b9 push 0x10828dc0 */
  push32((uint32_t)(0x10828dc0u));
  /* 108211be call esi */
  call_ind((uint32_t)(ESI), 0x108211c0u);
  /* 108211c0 push 0x108282f0 */
  push32((uint32_t)(0x108282f0u));
  /* 108211c5 push 0x10828ba8 */
  push32((uint32_t)(0x10828ba8u));
  /* 108211ca call esi */
  call_ind((uint32_t)(ESI), 0x108211ccu);
  /* 108211cc push 0x108282e8 */
  push32((uint32_t)(0x108282e8u));
  /* 108211d1 push 0x10828dc8 */
  push32((uint32_t)(0x10828dc8u));
  /* 108211d6 call esi */
  call_ind((uint32_t)(ESI), 0x108211d8u);
  /* 108211d8 push 0x108282e0 */
  push32((uint32_t)(0x108282e0u));
  /* 108211dd push 0x10828dd8 */
  push32((uint32_t)(0x10828dd8u));
  /* 108211e2 call esi */
  call_ind((uint32_t)(ESI), 0x108211e4u);
  /* 108211e4 push 0x108282d8 */
  push32((uint32_t)(0x108282d8u));
  /* 108211e9 push 0x10828de0 */
  push32((uint32_t)(0x10828de0u));
  /* 108211ee call esi */
  call_ind((uint32_t)(ESI), 0x108211f0u);
  /* 108211f0 push 0x108282d4 */
  push32((uint32_t)(0x108282d4u));
  /* 108211f5 push 0x10828bc0 */
  push32((uint32_t)(0x10828bc0u));
  /* 108211fa call esi */
  call_ind((uint32_t)(ESI), 0x108211fcu);
  /* 108211fc push 0x108282cc */
  push32((uint32_t)(0x108282ccu));
  /* 10821201 push 0x10828df0 */
  push32((uint32_t)(0x10828df0u));
  /* 10821206 call esi */
  call_ind((uint32_t)(ESI), 0x10821208u);
  /* 10821208 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082120b push 0x108282c4 */
  push32((uint32_t)(0x108282c4u));
  /* 10821210 push 0x10828e08 */
  push32((uint32_t)(0x10828e08u));
  /* 10821215 call esi */
  call_ind((uint32_t)(ESI), 0x10821217u);
  /* 10821217 push 0x108282bc */
  push32((uint32_t)(0x108282bcu));
  /* 1082121c push 0x10828e18 */
  push32((uint32_t)(0x10828e18u));
  /* 10821221 call esi */
  call_ind((uint32_t)(ESI), 0x10821223u);
  /* 10821223 push 0x108282b4 */
  push32((uint32_t)(0x108282b4u));
  /* 10821228 push 0x10828e28 */
  push32((uint32_t)(0x10828e28u));
  /* 1082122d call esi */
  call_ind((uint32_t)(ESI), 0x1082122fu);
  /* 1082122f push 0x108282ac */
  push32((uint32_t)(0x108282acu));
  /* 10821234 push 0x10828e30 */
  push32((uint32_t)(0x10828e30u));
  /* 10821239 call esi */
  call_ind((uint32_t)(ESI), 0x1082123bu);
  /* 1082123b push 0x108282a4 */
  push32((uint32_t)(0x108282a4u));
  /* 10821240 push 0x10828e40 */
  push32((uint32_t)(0x10828e40u));
  /* 10821245 call esi */
  call_ind((uint32_t)(ESI), 0x10821247u);
  /* 10821247 push 0x1082829c */
  push32((uint32_t)(0x1082829cu));
  /* 1082124c push 0x10828e58 */
  push32((uint32_t)(0x10828e58u));
  /* 10821251 call esi */
  call_ind((uint32_t)(ESI), 0x10821253u);
  /* 10821253 push 0x10828298 */
  push32((uint32_t)(0x10828298u));
  /* 10821258 push 0x10828bd0 */
  push32((uint32_t)(0x10828bd0u));
  /* 1082125d call esi */
  call_ind((uint32_t)(ESI), 0x1082125fu);
  /* 1082125f push 0x10828290 */
  push32((uint32_t)(0x10828290u));
  /* 10821264 push 0x10828e38 */
  push32((uint32_t)(0x10828e38u));
  /* 10821269 call esi */
  call_ind((uint32_t)(ESI), 0x1082126bu);
  /* 1082126b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082126e push 0x10828288 */
  push32((uint32_t)(0x10828288u));
  /* 10821273 push 0x10828e50 */
  push32((uint32_t)(0x10828e50u));
  /* 10821278 call esi */
  call_ind((uint32_t)(ESI), 0x1082127au);
  /* 1082127a push 0x10828284 */
  push32((uint32_t)(0x10828284u));
  /* 1082127f push 0x10828be0 */
  push32((uint32_t)(0x10828be0u));
  /* 10821284 call esi */
  call_ind((uint32_t)(ESI), 0x10821286u);
  /* 10821286 push 0x1082827c */
  push32((uint32_t)(0x1082827cu));
  /* 1082128b push 0x10828e70 */
  push32((uint32_t)(0x10828e70u));
  /* 10821290 call esi */
  call_ind((uint32_t)(ESI), 0x10821292u);
  /* 10821292 push 0x10828278 */
  push32((uint32_t)(0x10828278u));
  /* 10821297 push 0x10828be8 */
  push32((uint32_t)(0x10828be8u));
  /* 1082129c call esi */
  call_ind((uint32_t)(ESI), 0x1082129eu);
  /* 1082129e push 0x10828270 */
  push32((uint32_t)(0x10828270u));
  /* 108212a3 push 0x10828e78 */
  push32((uint32_t)(0x10828e78u));
  /* 108212a8 call esi */
  call_ind((uint32_t)(ESI), 0x108212aau);
  /* 108212aa push 0x10828268 */
  push32((uint32_t)(0x10828268u));
  /* 108212af push 0x10828e80 */
  push32((uint32_t)(0x10828e80u));
  /* 108212b4 call esi */
  call_ind((uint32_t)(ESI), 0x108212b6u);
  /* 108212b6 push 0x10828260 */
  push32((uint32_t)(0x10828260u));
  /* 108212bb push 0x10828e88 */
  push32((uint32_t)(0x10828e88u));
  /* 108212c0 call esi */
  call_ind((uint32_t)(ESI), 0x108212c2u);
  /* 108212c2 push 0x10828258 */
  push32((uint32_t)(0x10828258u));
  /* 108212c7 push 0x10828e90 */
  push32((uint32_t)(0x10828e90u));
  /* 108212cc call esi */
  call_ind((uint32_t)(ESI), 0x108212ceu);
  /* 108212ce add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108212d1 push 0x10828250 */
  push32((uint32_t)(0x10828250u));
  /* 108212d6 push 0x10828e98 */
  push32((uint32_t)(0x10828e98u));
  /* 108212db call esi */
  call_ind((uint32_t)(ESI), 0x108212ddu);
  /* 108212dd push 0x1082824c */
  push32((uint32_t)(0x1082824cu));
  /* 108212e2 push 0x10828b90 */
  push32((uint32_t)(0x10828b90u));
  /* 108212e7 call esi */
  call_ind((uint32_t)(ESI), 0x108212e9u);
  /* 108212e9 push 0x10828248 */
  push32((uint32_t)(0x10828248u));
  /* 108212ee push 0x10828ba0 */
  push32((uint32_t)(0x10828ba0u));
  /* 108212f3 call esi */
  call_ind((uint32_t)(ESI), 0x108212f5u);
  /* 108212f5 push 0x10828244 */
  push32((uint32_t)(0x10828244u));
  /* 108212fa push 0x10828bb8 */
  push32((uint32_t)(0x10828bb8u));
  /* 108212ff call esi */
  call_ind((uint32_t)(ESI), 0x10821301u);
  /* 10821301 push 0x1082823c */
  push32((uint32_t)(0x1082823cu));
  /* 10821306 push 0x10828de8 */
  push32((uint32_t)(0x10828de8u));
  /* 1082130b call esi */
  call_ind((uint32_t)(ESI), 0x1082130du);
  /* 1082130d push 0x10828234 */
  push32((uint32_t)(0x10828234u));
  /* 10821312 push 0x10828e00 */
  push32((uint32_t)(0x10828e00u));
  /* 10821317 call esi */
  call_ind((uint32_t)(ESI), 0x10821319u);
  /* 10821319 push 0x10828230 */
  push32((uint32_t)(0x10828230u));
  /* 1082131e push 0x10828bd8 */
  push32((uint32_t)(0x10828bd8u));
  /* 10821323 call esi */
  call_ind((uint32_t)(ESI), 0x10821325u);
  /* 10821325 mov esi, dword ptr [0x1082717c] */
  ESI = (r32((uint32_t)(0x1082717c)));
  /* 1082132b push 0x1082822c */
  push32((uint32_t)(0x1082822cu));
  /* 10821330 push 0x10828c10 */
  push32((uint32_t)(0x10828c10u));
  /* 10821335 call esi */
  call_ind((uint32_t)(ESI), 0x10821337u);
  /* 10821337 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082133a push 0x10828228 */
  push32((uint32_t)(0x10828228u));
  /* 1082133f push 0x10828c20 */
  push32((uint32_t)(0x10828c20u));
  /* 10821344 call esi */
  call_ind((uint32_t)(ESI), 0x10821346u);
  /* 10821346 push 0x10828224 */
  push32((uint32_t)(0x10828224u));
  /* 1082134b push 0x10828df8 */
  push32((uint32_t)(0x10828df8u));
  /* 10821350 call esi */
  call_ind((uint32_t)(ESI), 0x10821352u);
  /* 10821352 push 0x10828220 */
  push32((uint32_t)(0x10828220u));
  /* 10821357 push 0x10828e10 */
  push32((uint32_t)(0x10828e10u));
  /* 1082135c call esi */
  call_ind((uint32_t)(ESI), 0x1082135eu);
  /* 1082135e push 0x1082821c */
  push32((uint32_t)(0x1082821cu));
  /* 10821363 push 0x10828e20 */
  push32((uint32_t)(0x10828e20u));
  /* 10821368 call esi */
  call_ind((uint32_t)(ESI), 0x1082136au);
  /* 1082136a push 0x10828218 */
  push32((uint32_t)(0x10828218u));
  /* 1082136f push 0x10828c30 */
  push32((uint32_t)(0x10828c30u));
  /* 10821374 call esi */
  call_ind((uint32_t)(ESI), 0x10821376u);
  /* 10821376 push 0x10828214 */
  push32((uint32_t)(0x10828214u));
  /* 1082137b push 0x10828e48 */
  push32((uint32_t)(0x10828e48u));
  /* 10821380 call esi */
  call_ind((uint32_t)(ESI), 0x10821382u);
  /* 10821382 push 0x10828210 */
  push32((uint32_t)(0x10828210u));
  /* 10821387 push 0x10828e60 */
  push32((uint32_t)(0x10828e60u));
  /* 1082138c call esi */
  call_ind((uint32_t)(ESI), 0x1082138eu);
  /* 1082138e push 0x1082820c */
  push32((uint32_t)(0x1082820cu));
  /* 10821393 push 0x10828e68 */
  push32((uint32_t)(0x10828e68u));
  /* 10821398 call esi */
  call_ind((uint32_t)(ESI), 0x1082139au);
  /* 1082139a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082139d push 0x10828208 */
  push32((uint32_t)(0x10828208u));
  /* 108213a2 push 0x10828c40 */
  push32((uint32_t)(0x10828c40u));
  /* 108213a7 call esi */
  call_ind((uint32_t)(ESI), 0x108213a9u);
  /* 108213a9 push 0x10828204 */
  push32((uint32_t)(0x10828204u));
  /* 108213ae push 0x10828c48 */
  push32((uint32_t)(0x10828c48u));
  /* 108213b3 call esi */
  call_ind((uint32_t)(ESI), 0x108213b5u);
  /* 108213b5 push 0x10828200 */
  push32((uint32_t)(0x10828200u));
  /* 108213ba push 0x10828c58 */
  push32((uint32_t)(0x10828c58u));
  /* 108213bf call esi */
  call_ind((uint32_t)(ESI), 0x108213c1u);
  /* 108213c1 push 0x108281fc */
  push32((uint32_t)(0x108281fcu));
  /* 108213c6 push 0x10828c68 */
  push32((uint32_t)(0x10828c68u));
  /* 108213cb call esi */
  call_ind((uint32_t)(ESI), 0x108213cdu);
  /* 108213cd push 0x108281f8 */
  push32((uint32_t)(0x108281f8u));
  /* 108213d2 push 0x10828ea0 */
  push32((uint32_t)(0x10828ea0u));
  /* 108213d7 call esi */
  call_ind((uint32_t)(ESI), 0x108213d9u);
  /* 108213d9 push 0x108281f4 */
  push32((uint32_t)(0x108281f4u));
  /* 108213de push 0x10828c78 */
  push32((uint32_t)(0x10828c78u));
  /* 108213e3 call esi */
  call_ind((uint32_t)(ESI), 0x108213e5u);
  /* 108213e5 push 0x108281f0 */
  push32((uint32_t)(0x108281f0u));
  /* 108213ea push 0x10828ea8 */
  push32((uint32_t)(0x10828ea8u));
  /* 108213ef call esi */
  call_ind((uint32_t)(ESI), 0x108213f1u);
  /* 108213f1 push 0x108281ec */
  push32((uint32_t)(0x108281ecu));
  /* 108213f6 push 0x10828eb0 */
  push32((uint32_t)(0x10828eb0u));
  /* 108213fb call esi */
  call_ind((uint32_t)(ESI), 0x108213fdu);
  /* 108213fd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821400 push 0x108281e8 */
  push32((uint32_t)(0x108281e8u));
  /* 10821405 push 0x10828eb8 */
  push32((uint32_t)(0x10828eb8u));
  /* 1082140a call esi */
  call_ind((uint32_t)(ESI), 0x1082140cu);
  /* 1082140c push 0x108281e4 */
  push32((uint32_t)(0x108281e4u));
  /* 10821411 push 0x10828c80 */
  push32((uint32_t)(0x10828c80u));
  /* 10821416 call esi */
  call_ind((uint32_t)(ESI), 0x10821418u);
  /* 10821418 push 0x108281e0 */
  push32((uint32_t)(0x108281e0u));
  /* 1082141d push 0x10828ec0 */
  push32((uint32_t)(0x10828ec0u));
  /* 10821422 call esi */
  call_ind((uint32_t)(ESI), 0x10821424u);
  /* 10821424 push 0x108281dc */
  push32((uint32_t)(0x108281dcu));
  /* 10821429 push 0x10828ec8 */
  push32((uint32_t)(0x10828ec8u));
  /* 1082142e call esi */
  call_ind((uint32_t)(ESI), 0x10821430u);
  /* 10821430 push 0x108281d8 */
  push32((uint32_t)(0x108281d8u));
  /* 10821435 push 0x10828ed0 */
  push32((uint32_t)(0x10828ed0u));
  /* 1082143a call esi */
  call_ind((uint32_t)(ESI), 0x1082143cu);
  /* 1082143c push 0x108281d4 */
  push32((uint32_t)(0x108281d4u));
  /* 10821441 push 0x10828ed8 */
  push32((uint32_t)(0x10828ed8u));
  /* 10821446 call esi */
  call_ind((uint32_t)(ESI), 0x10821448u);
  /* 10821448 push 0x108281d0 */
  push32((uint32_t)(0x108281d0u));
  /* 1082144d push 0x10828ee0 */
  push32((uint32_t)(0x10828ee0u));
  /* 10821452 call esi */
  call_ind((uint32_t)(ESI), 0x10821454u);
  /* 10821454 push 0x108281cc */
  push32((uint32_t)(0x108281ccu));
  /* 10821459 push 0x10828ee8 */
  push32((uint32_t)(0x10828ee8u));
  /* 1082145e call esi */
  call_ind((uint32_t)(ESI), 0x10821460u);
  /* 10821460 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821463 push 0x108281c8 */
  push32((uint32_t)(0x108281c8u));
  /* 10821468 push 0x10828ef0 */
  push32((uint32_t)(0x10828ef0u));
  /* 1082146d call esi */
  call_ind((uint32_t)(ESI), 0x1082146fu);
  /* 1082146f push 0x108281c4 */
  push32((uint32_t)(0x108281c4u));
  /* 10821474 push 0x10828d20 */
  push32((uint32_t)(0x10828d20u));
  /* 10821479 call esi */
  call_ind((uint32_t)(ESI), 0x1082147bu);
  /* 1082147b push 0x108281c0 */
  push32((uint32_t)(0x108281c0u));
  /* 10821480 push 0x10828d30 */
  push32((uint32_t)(0x10828d30u));
  /* 10821485 call esi */
  call_ind((uint32_t)(ESI), 0x10821487u);
  /* 10821487 push 0x108281bc */
  push32((uint32_t)(0x108281bcu));
  /* 1082148c push 0x10828d38 */
  push32((uint32_t)(0x10828d38u));
  /* 10821491 call esi */
  call_ind((uint32_t)(ESI), 0x10821493u);
  /* 10821493 push 0x108281b8 */
  push32((uint32_t)(0x108281b8u));
  /* 10821498 push 0x10828d40 */
  push32((uint32_t)(0x10828d40u));
  /* 1082149d call esi */
  call_ind((uint32_t)(ESI), 0x1082149fu);
  /* 1082149f push 0x108281b0 */
  push32((uint32_t)(0x108281b0u));
  /* 108214a4 push 0x10828f38 */
  push32((uint32_t)(0x10828f38u));
  /* 108214a9 call esi */
  call_ind((uint32_t)(ESI), 0x108214abu);
  /* 108214ab push 0x108281ac */
  push32((uint32_t)(0x108281acu));
  /* 108214b0 push 0x10828d50 */
  push32((uint32_t)(0x10828d50u));
  /* 108214b5 call esi */
  call_ind((uint32_t)(ESI), 0x108214b7u);
  /* 108214b7 push 0x108281a4 */
  push32((uint32_t)(0x108281a4u));
  /* 108214bc push 0x10828f40 */
  push32((uint32_t)(0x10828f40u));
  /* 108214c1 call esi */
  call_ind((uint32_t)(ESI), 0x108214c3u);
  /* 108214c3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108214c6 push 0x1082819c */
  push32((uint32_t)(0x1082819cu));
  /* 108214cb push 0x10828f48 */
  push32((uint32_t)(0x10828f48u));
  /* 108214d0 call esi */
  call_ind((uint32_t)(ESI), 0x108214d2u);
  /* 108214d2 push 0x10828194 */
  push32((uint32_t)(0x10828194u));
  /* 108214d7 push 0x10828f50 */
  push32((uint32_t)(0x10828f50u));
  /* 108214dc call esi */
  call_ind((uint32_t)(ESI), 0x108214deu);
  /* 108214de push 0x1082818c */
  push32((uint32_t)(0x1082818cu));
  /* 108214e3 push 0x10828f58 */
  push32((uint32_t)(0x10828f58u));
  /* 108214e8 call esi */
  call_ind((uint32_t)(ESI), 0x108214eau);
  /* 108214ea push 0x10828188 */
  push32((uint32_t)(0x10828188u));
  /* 108214ef push 0x10828d60 */
  push32((uint32_t)(0x10828d60u));
  /* 108214f4 call esi */
  call_ind((uint32_t)(ESI), 0x108214f6u);
  /* 108214f6 push 0x10828180 */
  push32((uint32_t)(0x10828180u));
  /* 108214fb push 0x10828f68 */
  push32((uint32_t)(0x10828f68u));
  /* 10821500 call esi */
  call_ind((uint32_t)(ESI), 0x10821502u);
  /* 10821502 push 0x10828178 */
  push32((uint32_t)(0x10828178u));
  /* 10821507 push 0x10828f78 */
  push32((uint32_t)(0x10828f78u));
  /* 1082150c call esi */
  call_ind((uint32_t)(ESI), 0x1082150eu);
  /* 1082150e push 0x10828170 */
  push32((uint32_t)(0x10828170u));
  /* 10821513 push 0x10828f80 */
  push32((uint32_t)(0x10828f80u));
  /* 10821518 call esi */
  call_ind((uint32_t)(ESI), 0x1082151au);
  /* 1082151a push 0x1082816c */
  push32((uint32_t)(0x1082816cu));
  /* 1082151f push 0x10828d70 */
  push32((uint32_t)(0x10828d70u));
  /* 10821524 call esi */
  call_ind((uint32_t)(ESI), 0x10821526u);
  /* 10821526 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821529 push 0x10828164 */
  push32((uint32_t)(0x10828164u));
  /* 1082152e push 0x10828f90 */
  push32((uint32_t)(0x10828f90u));
  /* 10821533 call esi */
  call_ind((uint32_t)(ESI), 0x10821535u);
  /* 10821535 push 0x1082815c */
  push32((uint32_t)(0x1082815cu));
  /* 1082153a push 0x10828f98 */
  push32((uint32_t)(0x10828f98u));
  /* 1082153f call esi */
  call_ind((uint32_t)(ESI), 0x10821541u);
  /* 10821541 push 0x10828154 */
  push32((uint32_t)(0x10828154u));
  /* 10821546 push 0x10828fa0 */
  push32((uint32_t)(0x10828fa0u));
  /* 1082154b call esi */
  call_ind((uint32_t)(ESI), 0x1082154du);
  /* 1082154d push 0x1082814c */
  push32((uint32_t)(0x1082814cu));
  /* 10821552 push 0x10828fa8 */
  push32((uint32_t)(0x10828fa8u));
  /* 10821557 call esi */
  call_ind((uint32_t)(ESI), 0x10821559u);
  /* 10821559 push 0x10828144 */
  push32((uint32_t)(0x10828144u));
  /* 1082155e push 0x10828fb0 */
  push32((uint32_t)(0x10828fb0u));
  /* 10821563 call esi */
  call_ind((uint32_t)(ESI), 0x10821565u);
  /* 10821565 push 0x10828140 */
  push32((uint32_t)(0x10828140u));
  /* 1082156a push 0x10828d80 */
  push32((uint32_t)(0x10828d80u));
  /* 1082156f call esi */
  call_ind((uint32_t)(ESI), 0x10821571u);
  /* 10821571 push 0x1082813c */
  push32((uint32_t)(0x1082813cu));
  /* 10821576 push 0x10828d90 */
  push32((uint32_t)(0x10828d90u));
  /* 1082157b call esi */
  call_ind((uint32_t)(ESI), 0x1082157du);
  /* 1082157d push 0x10828138 */
  push32((uint32_t)(0x10828138u));
  /* 10821582 push 0x10828da0 */
  push32((uint32_t)(0x10828da0u));
  /* 10821587 call esi */
  call_ind((uint32_t)(ESI), 0x10821589u);
  /* 10821589 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082158c push 0x10828134 */
  push32((uint32_t)(0x10828134u));
  /* 10821591 push 0x10828d48 */
  push32((uint32_t)(0x10828d48u));
  /* 10821596 call esi */
  call_ind((uint32_t)(ESI), 0x10821598u);
  /* 10821598 push 0x10828130 */
  push32((uint32_t)(0x10828130u));
  /* 1082159d push 0x10828d58 */
  push32((uint32_t)(0x10828d58u));
  /* 108215a2 call esi */
  call_ind((uint32_t)(ESI), 0x108215a4u);
  /* 108215a4 push 0x10828128 */
  push32((uint32_t)(0x10828128u));
  /* 108215a9 push 0x10828f60 */
  push32((uint32_t)(0x10828f60u));
  /* 108215ae call esi */
  call_ind((uint32_t)(ESI), 0x108215b0u);
  /* 108215b0 push 0x10828120 */
  push32((uint32_t)(0x10828120u));
  /* 108215b5 push 0x10828f70 */
  push32((uint32_t)(0x10828f70u));
  /* 108215ba call esi */
  call_ind((uint32_t)(ESI), 0x108215bcu);
  /* 108215bc push 0x1082811c */
  push32((uint32_t)(0x1082811cu));
  /* 108215c1 push 0x10828d68 */
  push32((uint32_t)(0x10828d68u));
  /* 108215c6 call esi */
  call_ind((uint32_t)(ESI), 0x108215c8u);
  /* 108215c8 push 0x10828114 */
  push32((uint32_t)(0x10828114u));
  /* 108215cd push 0x10828f88 */
  push32((uint32_t)(0x10828f88u));
  /* 108215d2 call esi */
  call_ind((uint32_t)(ESI), 0x108215d4u);
  /* 108215d4 push 0x10828110 */
  push32((uint32_t)(0x10828110u));
  /* 108215d9 push 0x10828d78 */
  push32((uint32_t)(0x10828d78u));
  /* 108215de call esi */
  call_ind((uint32_t)(ESI), 0x108215e0u);
  /* 108215e0 push 0x1082810c */
  push32((uint32_t)(0x1082810cu));
  /* 108215e5 push 0x10828d88 */
  push32((uint32_t)(0x10828d88u));
  /* 108215ea call esi */
  call_ind((uint32_t)(ESI), 0x108215ecu);
  /* 108215ec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108215ef push 0x10828dd0 */
  push32((uint32_t)(0x10828dd0u));
  /* 108215f4 call dword ptr [0x10827180] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827180))), 0x108215fau);
  /* 108215fa mov esi, dword ptr [0x10827184] */
  ESI = (r32((uint32_t)(0x10827184)));
  /* 10821600 mov dword ptr [esp], 0x108280f8 */
  w32((uint32_t)(ESP), (0x108280f8u));
  /* 10821607 push 0x10828d10 */
  push32((uint32_t)(0x10828d10u));
  /* 1082160c call esi */
  call_ind((uint32_t)(ESI), 0x1082160eu);
  /* 1082160e push 0x108280e0 */
  push32((uint32_t)(0x108280e0u));
  /* 10821613 push 0x10828ad0 */
  push32((uint32_t)(0x10828ad0u));
  /* 10821618 call esi */
  call_ind((uint32_t)(ESI), 0x1082161au);
  /* 1082161a push 0x108280cc */
  push32((uint32_t)(0x108280ccu));
  /* 1082161f push 0x10828ae0 */
  push32((uint32_t)(0x10828ae0u));
  /* 10821624 call esi */
  call_ind((uint32_t)(ESI), 0x10821626u);
  /* 10821626 push 0x108280b8 */
  push32((uint32_t)(0x108280b8u));
  /* 1082162b push 0x10828cd8 */
  push32((uint32_t)(0x10828cd8u));
  /* 10821630 call esi */
  call_ind((uint32_t)(ESI), 0x10821632u);
  /* 10821632 mov ebx, 0x10828cd0 */
  EBX = (0x10828cd0u);
  /* 10821637 push 0x108280ac */
  push32((uint32_t)(0x108280acu));
  /* 1082163c push ebx */
  push32((uint32_t)(EBX));
  /* 1082163d call esi */
  call_ind((uint32_t)(ESI), 0x1082163fu);
  /* 1082163f push 0x1082809c */
  push32((uint32_t)(0x1082809cu));
  /* 10821644 push 0x10828ce8 */
  push32((uint32_t)(0x10828ce8u));
  /* 10821649 call esi */
  call_ind((uint32_t)(ESI), 0x1082164bu);
  /* 1082164b push 0x1082808c */
  push32((uint32_t)(0x1082808cu));
  /* 10821650 push 0x10828d18 */
  push32((uint32_t)(0x10828d18u));
  /* 10821655 call esi */
  call_ind((uint32_t)(ESI), 0x10821657u);
  /* 10821657 push 0x1082807c */
  push32((uint32_t)(0x1082807cu));
  /* 1082165c push 0x10828d00 */
  push32((uint32_t)(0x10828d00u));
  /* 10821661 call esi */
  call_ind((uint32_t)(ESI), 0x10821663u);
  /* 10821663 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821666 push 0x1082806c */
  push32((uint32_t)(0x1082806cu));
  /* 1082166b push 0x10828d08 */
  push32((uint32_t)(0x10828d08u));
  /* 10821670 call esi */
  call_ind((uint32_t)(ESI), 0x10821672u);
  /* 10821672 mov esi, dword ptr [0x10827188] */
  ESI = (r32((uint32_t)(0x10827188)));
  /* 10821678 push 0x10828064 */
  push32((uint32_t)(0x10828064u));
  /* 1082167d push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 10821682 call esi */
  call_ind((uint32_t)(ESI), 0x10821684u);
  /* 10821684 push 0x1082805c */
  push32((uint32_t)(0x1082805cu));
  /* 10821689 push 0x10828ae8 */
  push32((uint32_t)(0x10828ae8u));
  /* 1082168e call esi */
  call_ind((uint32_t)(ESI), 0x10821690u);
  /* 10821690 push 0x10828054 */
  push32((uint32_t)(0x10828054u));
  /* 10821695 push 0x10828cf0 */
  push32((uint32_t)(0x10828cf0u));
  /* 1082169a call esi */
  call_ind((uint32_t)(ESI), 0x1082169cu);
  /* 1082169c mov esi, dword ptr [0x1082718c] */
  ESI = (r32((uint32_t)(0x1082718c)));
  /* 108216a2 push 4 */
  push32((uint32_t)(0x4u));
  /* 108216a4 pop ebp */
  EBP = (pop32());
  /* 108216a5 push ebp */
  push32((uint32_t)(EBP));
  /* 108216a6 push 0x10828ef8 */
  push32((uint32_t)(0x10828ef8u));
  /* 108216ab call esi */
  call_ind((uint32_t)(ESI), 0x108216adu);
  /* 108216ad push ebp */
  push32((uint32_t)(EBP));
  /* 108216ae push 0x10828ce0 */
  push32((uint32_t)(0x10828ce0u));
  /* 108216b3 call esi */
  call_ind((uint32_t)(ESI), 0x108216b5u);
  /* 108216b5 push ebp */
  push32((uint32_t)(EBP));
  /* 108216b6 push 0x10828cc8 */
  push32((uint32_t)(0x10828cc8u));
  /* 108216bb call esi */
  call_ind((uint32_t)(ESI), 0x108216bdu);
  /* 108216bd push ebp */
  push32((uint32_t)(EBP));
  /* 108216be push 0x10828af0 */
  push32((uint32_t)(0x10828af0u));
  /* 108216c3 call esi */
  call_ind((uint32_t)(ESI), 0x108216c5u);
  /* 108216c5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108216c8 push ebp */
  push32((uint32_t)(EBP));
  /* 108216c9 push 0x10828f2c */
  push32((uint32_t)(0x10828f2cu));
  /* 108216ce call esi */
  call_ind((uint32_t)(ESI), 0x108216d0u);
  /* 108216d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 108216d2 pop edi */
  EDI = (pop32());
  /* 108216d3 push edi */
  push32((uint32_t)(EDI));
  /* 108216d4 push 0x10828ca0 */
  push32((uint32_t)(0x10828ca0u));
  /* 108216d9 call esi */
  call_ind((uint32_t)(ESI), 0x108216dbu);
  /* 108216db push edi */
  push32((uint32_t)(EDI));
  /* 108216dc push 0x10828ca8 */
  push32((uint32_t)(0x10828ca8u));
  /* 108216e1 call esi */
  call_ind((uint32_t)(ESI), 0x108216e3u);
  /* 108216e3 push edi */
  push32((uint32_t)(EDI));
  /* 108216e4 push 0x10828bc8 */
  push32((uint32_t)(0x10828bc8u));
  /* 108216e9 call esi */
  call_ind((uint32_t)(ESI), 0x108216ebu);
  /* 108216eb push edi */
  push32((uint32_t)(EDI));
  /* 108216ec push 0x10828b40 */
  push32((uint32_t)(0x10828b40u));
  /* 108216f1 call esi */
  call_ind((uint32_t)(ESI), 0x108216f3u);
  /* 108216f3 push edi */
  push32((uint32_t)(EDI));
  /* 108216f4 push 0x10828b60 */
  push32((uint32_t)(0x10828b60u));
  /* 108216f9 call esi */
  call_ind((uint32_t)(ESI), 0x108216fbu);
  /* 108216fb push edi */
  push32((uint32_t)(EDI));
  /* 108216fc push 0x10828b48 */
  push32((uint32_t)(0x10828b48u));
  /* 10821701 call esi */
  call_ind((uint32_t)(ESI), 0x10821703u);
  /* 10821703 push edi */
  push32((uint32_t)(EDI));
  /* 10821704 push 0x10828b78 */
  push32((uint32_t)(0x10828b78u));
  /* 10821709 call esi */
  call_ind((uint32_t)(ESI), 0x1082170bu);
  /* 1082170b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082170e push edi */
  push32((uint32_t)(EDI));
  /* 1082170f push 0x10828b50 */
  push32((uint32_t)(0x10828b50u));
  /* 10821714 call esi */
  call_ind((uint32_t)(ESI), 0x10821716u);
  /* 10821716 push edi */
  push32((uint32_t)(EDI));
  /* 10821717 push 0x10828bb0 */
  push32((uint32_t)(0x10828bb0u));
  /* 1082171c call esi */
  call_ind((uint32_t)(ESI), 0x1082171eu);
  /* 1082171e push edi */
  push32((uint32_t)(EDI));
  /* 1082171f push 0x10828b58 */
  push32((uint32_t)(0x10828b58u));
  /* 10821724 call esi */
  call_ind((uint32_t)(ESI), 0x10821726u);
  /* 10821726 push edi */
  push32((uint32_t)(EDI));
  /* 10821727 push 0x10828bf0 */
  push32((uint32_t)(0x10828bf0u));
  /* 1082172c call esi */
  call_ind((uint32_t)(ESI), 0x1082172eu);
  /* 1082172e mov esi, dword ptr [0x10827190] */
  ESI = (r32((uint32_t)(0x10827190)));
  /* 10821734 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10821736 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10821738 push edi */
  push32((uint32_t)(EDI));
  /* 10821739 call esi */
  call_ind((uint32_t)(ESI), 0x1082173bu);
  /* 1082173b push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1082173d push 1 */
  push32((uint32_t)(0x1u));
  /* 1082173f call esi */
  call_ind((uint32_t)(ESI), 0x10821741u);
  /* 10821741 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10821743 push 3 */
  push32((uint32_t)(0x3u));
  /* 10821745 call esi */
  call_ind((uint32_t)(ESI), 0x10821747u);
  /* 10821747 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10821749 push ebp */
  push32((uint32_t)(EBP));
  /* 1082174a call esi */
  call_ind((uint32_t)(ESI), 0x1082174cu);
  /* 1082174c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082174f push 0x68 */
  push32((uint32_t)(0x68u));
  /* 10821751 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821753 call esi */
  call_ind((uint32_t)(ESI), 0x10821755u);
  /* 10821755 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10821757 push 6 */
  push32((uint32_t)(0x6u));
  /* 10821759 call esi */
  call_ind((uint32_t)(ESI), 0x1082175bu);
  /* 1082175b mov esi, dword ptr [0x10827194] */
  ESI = (r32((uint32_t)(0x10827194)));
  /* 10821761 push 0x10828048 */
  push32((uint32_t)(0x10828048u));
  /* 10821766 push 1 */
  push32((uint32_t)(0x1u));
  /* 10821768 call esi */
  call_ind((uint32_t)(ESI), 0x1082176au);
  /* 1082176a push 0x10828040 */
  push32((uint32_t)(0x10828040u));
  /* 1082176f push 3 */
  push32((uint32_t)(0x3u));
  /* 10821771 call esi */
  call_ind((uint32_t)(ESI), 0x10821773u);
  /* 10821773 push 0x10828038 */
  push32((uint32_t)(0x10828038u));
  /* 10821778 push ebp */
  push32((uint32_t)(EBP));
  /* 10821779 call esi */
  call_ind((uint32_t)(ESI), 0x1082177bu);
  /* 1082177b push 0x10828030 */
  push32((uint32_t)(0x10828030u));
  /* 10821780 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821782 call esi */
  call_ind((uint32_t)(ESI), 0x10821784u);
  /* 10821784 push edi */
  push32((uint32_t)(EDI));
  /* 10821785 push ebx */
  push32((uint32_t)(EBX));
  /* 10821786 push edi */
  push32((uint32_t)(EDI));
  /* 10821787 call dword ptr [0x10827198] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827198))), 0x1082178du);
  /* 1082178d add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821790 pop edi */
  EDI = (pop32());
  /* 10821791 pop esi */
  ESI = (pop32());
  /* 10821792 pop ebp */
  EBP = (pop32());
  /* 10821793 pop ebx */
  EBX = (pop32());
  /* 10821794 ret  */
  ESPCHK(0x10821012u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10821795 (9673 bytes, 3148 insns) */
void f_10821795(void) {
  FTRACE(0x10821795u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10821795 push ecx */
  push32((uint32_t)(ECX));
  /* 10821796 push ebx */
  push32((uint32_t)(EBX));
  /* 10821797 push ebp */
  push32((uint32_t)(EBP));
  /* 10821798 push esi */
  push32((uint32_t)(ESI));
  /* 10821799 push edi */
  push32((uint32_t)(EDI));
  /* 1082179a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1082179c call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108217a2u);
  /* 108217a2 mov esi, dword ptr [0x108270d4] */
  ESI = (r32((uint32_t)(0x108270d4)));
  /* 108217a8 mov edi, dword ptr [0x108270d0] */
  EDI = (r32((uint32_t)(0x108270d0)));
  /* 108217ae mov ebp, dword ptr [0x108270cc] */
  EBP = (r32((uint32_t)(0x108270cc)));
  /* 108217b4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 108217b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108217b8 pop ecx */
  ECX = (pop32());
  /* 108217b9 je 0x10821ade */
  if (C.zf) goto L_10821ade;
  /* 108217bf push ebx */
  push32((uint32_t)(EBX));
  /* 108217c0 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108217c6u);
  /* 108217c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108217c8 pop ecx */
  ECX = (pop32());
  /* 108217c9 jne 0x10821832 */
  if (!C.zf) goto L_10821832;
  /* 108217cb push ebx */
  push32((uint32_t)(EBX));
  /* 108217cc push 0x10828d78 */
  push32((uint32_t)(0x10828d78u));
  /* 108217d1 push ebx */
  push32((uint32_t)(EBX));
  /* 108217d2 push 0x10828ad0 */
  push32((uint32_t)(0x10828ad0u));
  /* 108217d7 push 0x10828cf0 */
  push32((uint32_t)(0x10828cf0u));
  /* 108217dc push 0x10828bc8 */
  push32((uint32_t)(0x10828bc8u));
  /* 108217e1 call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x108217e7u);
  /* 108217e7 push ebx */
  push32((uint32_t)(EBX));
  /* 108217e8 push 0x10828bd8 */
  push32((uint32_t)(0x10828bd8u));
  /* 108217ed call esi */
  call_ind((uint32_t)(ESI), 0x108217efu);
  /* 108217ef push 5 */
  push32((uint32_t)(0x5u));
  /* 108217f1 call dword ptr [0x108270c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c0))), 0x108217f7u);
  /* 108217f7 push ebx */
  push32((uint32_t)(EBX));
  /* 108217f8 push 0x10828e50 */
  push32((uint32_t)(0x10828e50u));
  /* 108217fd call esi */
  call_ind((uint32_t)(ESI), 0x108217ffu);
  /* 108217ff push 5 */
  push32((uint32_t)(0x5u));
  /* 10821801 call dword ptr [0x108270c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c0))), 0x10821807u);
  /* 10821807 push 0x10828798 */
  push32((uint32_t)(0x10828798u));
  /* 1082180c call edi */
  call_ind((uint32_t)(EDI), 0x1082180eu);
  /* 1082180e push 1 */
  push32((uint32_t)(0x1u));
  /* 10821810 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821812 push 0x10828d40 */
  push32((uint32_t)(0x10828d40u));
  /* 10821817 call dword ptr [0x108270bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270bc))), 0x1082181du);
  /* 1082181d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821820 push 2 */
  push32((uint32_t)(0x2u));
  /* 10821822 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821824 push 0x10828d70 */
  push32((uint32_t)(0x10828d70u));
  /* 10821829 call dword ptr [0x108270bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270bc))), 0x1082182fu);
  /* 1082182f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821832:;
  /* 10821832 push ebx */
  push32((uint32_t)(EBX));
  /* 10821833 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10821838 call esi */
  call_ind((uint32_t)(ESI), 0x1082183au);
  /* 1082183a push ebx */
  push32((uint32_t)(EBX));
  /* 1082183b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1082183d mov dword ptr [0x10828af0], 0xa */
  w32((uint32_t)(0x10828af0), (0xau));
  /* 10821847 mov dword ptr [0x10828f2c], ebx */
  w32((uint32_t)(0x10828f2c), (EBX));
  /* 1082184d mov dword ptr [0x10828ef8], ebx */
  w32((uint32_t)(0x10828ef8), (EBX));
  /* 10821853 mov dword ptr [0x10828ce0], ebx */
  w32((uint32_t)(0x10828ce0), (EBX));
  /* 10821859 mov dword ptr [0x10828cc8], ebx */
  w32((uint32_t)(0x10828cc8), (EBX));
  /* 1082185f call ebp */
  call_ind((uint32_t)(EBP), 0x10821861u);
  /* 10821861 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10821866 push 3 */
  push32((uint32_t)(0x3u));
  /* 10821868 push ebx */
  push32((uint32_t)(EBX));
  /* 10821869 call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x1082186fu);
  /* 1082186f push ebx */
  push32((uint32_t)(EBX));
  /* 10821870 push ebx */
  push32((uint32_t)(EBX));
  /* 10821871 push ebx */
  push32((uint32_t)(EBX));
  /* 10821872 call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x10821878u);
  /* 10821878 push ebx */
  push32((uint32_t)(EBX));
  /* 10821879 push 2 */
  push32((uint32_t)(0x2u));
  /* 1082187b push ebx */
  push32((uint32_t)(EBX));
  /* 1082187c call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x10821882u);
  /* 10821882 push 1 */
  push32((uint32_t)(0x1u));
  /* 10821884 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082188au);
  /* 1082188a push 7 */
  push32((uint32_t)(0x7u));
  /* 1082188c pop ecx */
  ECX = (pop32());
  /* 1082188d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082188f imul ecx, ecx, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7d0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10821895 push ecx */
  push32((uint32_t)(ECX));
  /* 10821896 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821898 push ebx */
  push32((uint32_t)(EBX));
  /* 10821899 call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x1082189fu);
  /* 1082189f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108218a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108218a4 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108218aau);
  /* 108218aa push 7 */
  push32((uint32_t)(0x7u));
  /* 108218ac pop ecx */
  ECX = (pop32());
  /* 108218ad sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108218af imul ecx, ecx, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7d0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108218b5 push ecx */
  push32((uint32_t)(ECX));
  /* 108218b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 108218b8 push ebx */
  push32((uint32_t)(EBX));
  /* 108218b9 call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x108218bfu);
  /* 108218bf push ebx */
  push32((uint32_t)(EBX));
  /* 108218c0 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108218c6u);
  /* 108218c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108218c9 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108218cb je 0x108218f7 */
  if (C.zf) goto L_108218f7;
  /* 108218cd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 108218ce je 0x108218f0 */
  if (C.zf) goto L_108218f0;
  /* 108218d0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 108218d1 je 0x108218e9 */
  if (C.zf) goto L_108218e9;
  /* 108218d3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 108218d4 jne 0x10821924 */
  if (!C.zf) goto L_10821924;
  /* 108218d6 push 0x96 */
  push32((uint32_t)(0x96u));
L_108218db:;
  /* 108218db push 1 */
  push32((uint32_t)(0x1u));
  /* 108218dd push ebx */
  push32((uint32_t)(EBX));
  /* 108218de call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x108218e4u);
  /* 108218e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108218e7 jmp 0x10821924 */
  goto L_10821924;
L_108218e9:;
  /* 108218e9 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 108218ee jmp 0x108218db */
  goto L_108218db;
L_108218f0:;
  /* 108218f0 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 108218f5 jmp 0x108218db */
  goto L_108218db;
L_108218f7:;
  /* 108218f7 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 108218fc push 1 */
  push32((uint32_t)(0x1u));
  /* 108218fe push ebx */
  push32((uint32_t)(EBX));
  /* 108218ff call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x10821905u);
  /* 10821905 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 1082190a push 5 */
  push32((uint32_t)(0x5u));
  /* 1082190c push ebx */
  push32((uint32_t)(EBX));
  /* 1082190d call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x10821913u);
  /* 10821913 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10821918 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082191a push ebx */
  push32((uint32_t)(EBX));
  /* 1082191b call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x10821921u);
  /* 10821921 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821924:;
  /* 10821924 push 0x10828790 */
  push32((uint32_t)(0x10828790u));
  /* 10821929 call edi */
  call_ind((uint32_t)(EDI), 0x1082192bu);
  /* 1082192b mov dword ptr [esp], 0x10828c18 */
  w32((uint32_t)(ESP), (0x10828c18u));
  /* 10821932 call dword ptr [0x108270b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b4))), 0x10821938u);
  /* 10821938 mov dword ptr [esp], 0x10828c28 */
  w32((uint32_t)(ESP), (0x10828c28u));
  /* 1082193f call dword ptr [0x108270c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c8))), 0x10821945u);
  /* 10821945 mov dword ptr [esp], 0x10828c38 */
  w32((uint32_t)(ESP), (0x10828c38u));
  /* 1082194c call dword ptr [0x108270c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c4))), 0x10821952u);
  /* 10821952 push ebx */
  push32((uint32_t)(EBX));
  /* 10821953 push 0x10828b30 */
  push32((uint32_t)(0x10828b30u));
  /* 10821958 call esi */
  call_ind((uint32_t)(ESI), 0x1082195au);
  /* 1082195a push ebx */
  push32((uint32_t)(EBX));
  /* 1082195b push 4 */
  push32((uint32_t)(0x4u));
  /* 1082195d call dword ptr [0x108270b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b0))), 0x10821963u);
  /* 10821963 push ebx */
  push32((uint32_t)(EBX));
  /* 10821964 push 0x10828c50 */
  push32((uint32_t)(0x10828c50u));
  /* 10821969 call esi */
  call_ind((uint32_t)(ESI), 0x1082196bu);
  /* 1082196b push ebx */
  push32((uint32_t)(EBX));
  /* 1082196c push 0x10828e48 */
  push32((uint32_t)(0x10828e48u));
  /* 10821971 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821973 call dword ptr [0x108270dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270dc))), 0x10821979u);
  /* 10821979 push ebx */
  push32((uint32_t)(EBX));
  /* 1082197a push 0x10828c60 */
  push32((uint32_t)(0x10828c60u));
  /* 1082197f call esi */
  call_ind((uint32_t)(ESI), 0x10821981u);
  /* 10821981 push ebx */
  push32((uint32_t)(EBX));
  /* 10821982 push 0x10828e60 */
  push32((uint32_t)(0x10828e60u));
  /* 10821987 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821989 call dword ptr [0x108270dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270dc))), 0x1082198fu);
  /* 1082198f push ebx */
  push32((uint32_t)(EBX));
  /* 10821990 push 0x10828c70 */
  push32((uint32_t)(0x10828c70u));
  /* 10821995 call esi */
  call_ind((uint32_t)(ESI), 0x10821997u);
  /* 10821997 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082199a push ebx */
  push32((uint32_t)(EBX));
  /* 1082199b push 0x10828e68 */
  push32((uint32_t)(0x10828e68u));
  /* 108219a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 108219a2 call dword ptr [0x108270dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270dc))), 0x108219a8u);
  /* 108219a8 push ebx */
  push32((uint32_t)(EBX));
  /* 108219a9 push 0x10828b98 */
  push32((uint32_t)(0x10828b98u));
  /* 108219ae call esi */
  call_ind((uint32_t)(ESI), 0x108219b0u);
  /* 108219b0 push ebx */
  push32((uint32_t)(EBX));
  /* 108219b1 push 0x10828d50 */
  push32((uint32_t)(0x10828d50u));
  /* 108219b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 108219b8 call dword ptr [0x108270dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270dc))), 0x108219beu);
  /* 108219be push ebx */
  push32((uint32_t)(EBX));
  /* 108219bf push 0x10828db8 */
  push32((uint32_t)(0x10828db8u));
  /* 108219c4 call esi */
  call_ind((uint32_t)(ESI), 0x108219c6u);
  /* 108219c6 push ebx */
  push32((uint32_t)(EBX));
  /* 108219c7 push 0x10828f50 */
  push32((uint32_t)(0x10828f50u));
  /* 108219cc push 4 */
  push32((uint32_t)(0x4u));
  /* 108219ce call dword ptr [0x108270dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270dc))), 0x108219d4u);
  /* 108219d4 push ebx */
  push32((uint32_t)(EBX));
  /* 108219d5 push 0x10828dc0 */
  push32((uint32_t)(0x10828dc0u));
  /* 108219da call esi */
  call_ind((uint32_t)(ESI), 0x108219dcu);
  /* 108219dc push ebx */
  push32((uint32_t)(EBX));
  /* 108219dd push 0x10828f58 */
  push32((uint32_t)(0x10828f58u));
  /* 108219e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 108219e4 call dword ptr [0x108270dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270dc))), 0x108219eau);
  /* 108219ea add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108219ed push ebx */
  push32((uint32_t)(EBX));
  /* 108219ee push 0x10828dd8 */
  push32((uint32_t)(0x10828dd8u));
  /* 108219f3 call esi */
  call_ind((uint32_t)(ESI), 0x108219f5u);
  /* 108219f5 push 6 */
  push32((uint32_t)(0x6u));
  /* 108219f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 108219f9 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x108219ffu);
  /* 108219ff push ebx */
  push32((uint32_t)(EBX));
  /* 10821a00 push 0x10828bd0 */
  push32((uint32_t)(0x10828bd0u));
  /* 10821a05 call esi */
  call_ind((uint32_t)(ESI), 0x10821a07u);
  /* 10821a07 push 6 */
  push32((uint32_t)(0x6u));
  /* 10821a09 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821a0b call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10821a11u);
  /* 10821a11 push 0x10828788 */
  push32((uint32_t)(0x10828788u));
  /* 10821a16 push 0x10828348 */
  push32((uint32_t)(0x10828348u));
  /* 10821a1b call dword ptr [0x108270e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e4))), 0x10821a21u);
  /* 10821a21 push 0x10828780 */
  push32((uint32_t)(0x10828780u));
  /* 10821a26 push 0x10828348 */
  push32((uint32_t)(0x10828348u));
  /* 10821a2b call dword ptr [0x108270e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e4))), 0x10821a31u);
  /* 10821a31 push ebx */
  push32((uint32_t)(EBX));
  /* 10821a32 push 0x10828ea0 */
  push32((uint32_t)(0x10828ea0u));
  /* 10821a37 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821a39 push 0x10828ce8 */
  push32((uint32_t)(0x10828ce8u));
  /* 10821a3e push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 10821a43 push 0x10828b40 */
  push32((uint32_t)(0x10828b40u));
  /* 10821a48 call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10821a4eu);
  /* 10821a4e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821a51 push ebx */
  push32((uint32_t)(EBX));
  /* 10821a52 push 0x10828c48 */
  push32((uint32_t)(0x10828c48u));
  /* 10821a57 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821a59 push 0x10828d00 */
  push32((uint32_t)(0x10828d00u));
  /* 10821a5e push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 10821a63 push 0x10828b48 */
  push32((uint32_t)(0x10828b48u));
  /* 10821a68 call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10821a6eu);
  /* 10821a6e push ebx */
  push32((uint32_t)(EBX));
  /* 10821a6f push 0x10828f68 */
  push32((uint32_t)(0x10828f68u));
  /* 10821a74 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821a76 push 0x10828ce8 */
  push32((uint32_t)(0x10828ce8u));
  /* 10821a7b push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 10821a80 push 0x10828b50 */
  push32((uint32_t)(0x10828b50u));
  /* 10821a85 call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10821a8bu);
  /* 10821a8b push ebx */
  push32((uint32_t)(EBX));
  /* 10821a8c push 0x10828f80 */
  push32((uint32_t)(0x10828f80u));
  /* 10821a91 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821a93 push 0x10828d00 */
  push32((uint32_t)(0x10828d00u));
  /* 10821a98 push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 10821a9d push 0x10828b58 */
  push32((uint32_t)(0x10828b58u));
  /* 10821aa2 call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10821aa8u);
  /* 10821aa8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821aab push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10821aad call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10821ab3u);
  /* 10821ab3 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10821ab5 call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10821abbu);
  /* 10821abb push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10821abd call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10821ac3u);
  /* 10821ac3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10821ac5 call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10821acbu);
  /* 10821acb push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10821acd call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10821ad3u);
  /* 10821ad3 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10821ad5 call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10821adbu);
  /* 10821adb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821ade:;
  /* 10821ade cmp dword ptr [0x10828ce0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10828ce0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10821ae4 jle 0x10821b16 */
  if ((C.zf||C.sf!=C.of)) goto L_10821b16;
  /* 10821ae6 push 0x10828d98 */
  push32((uint32_t)(0x10828d98u));
  /* 10821aeb call dword ptr [0x108270ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270ec))), 0x10821af1u);
  /* 10821af1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821af3 pop ecx */
  ECX = (pop32());
  /* 10821af4 je 0x10821b16 */
  if (C.zf) goto L_10821b16;
  /* 10821af6 dec dword ptr [0x10828ce0] */
  { uint32_t _r=(r32((uint32_t)(0x10828ce0)))-1; w32((uint32_t)(0x10828ce0), (_r)); fl_dec(_r,32); }
  /* 10821afc push 8 */
  push32((uint32_t)(0x8u));
  /* 10821afe push 0x10828dd0 */
  push32((uint32_t)(0x10828dd0u));
  /* 10821b03 push 0x10828d10 */
  push32((uint32_t)(0x10828d10u));
  /* 10821b08 push 0x10828d98 */
  push32((uint32_t)(0x10828d98u));
  /* 10821b0d call dword ptr [0x108270f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f0))), 0x10821b13u);
  /* 10821b13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821b16:;
  /* 10821b16 cmp dword ptr [0x10828cc8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10828cc8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10821b1c jle 0x10821b4e */
  if ((C.zf||C.sf!=C.of)) goto L_10821b4e;
  /* 10821b1e push 0x10828d98 */
  push32((uint32_t)(0x10828d98u));
  /* 10821b23 call dword ptr [0x108270ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270ec))), 0x10821b29u);
  /* 10821b29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821b2b pop ecx */
  ECX = (pop32());
  /* 10821b2c je 0x10821b4e */
  if (C.zf) goto L_10821b4e;
  /* 10821b2e dec dword ptr [0x10828cc8] */
  { uint32_t _r=(r32((uint32_t)(0x10828cc8)))-1; w32((uint32_t)(0x10828cc8), (_r)); fl_dec(_r,32); }
  /* 10821b34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10821b36 push 0x10828dd0 */
  push32((uint32_t)(0x10828dd0u));
  /* 10821b3b push 0x10828ad0 */
  push32((uint32_t)(0x10828ad0u));
  /* 10821b40 push 0x10828d98 */
  push32((uint32_t)(0x10828d98u));
  /* 10821b45 call dword ptr [0x108270f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f0))), 0x10821b4bu);
  /* 10821b4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821b4e:;
  /* 10821b4e push 4 */
  push32((uint32_t)(0x4u));
  /* 10821b50 push 0x10828dd0 */
  push32((uint32_t)(0x10828dd0u));
  /* 10821b55 call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10821b5bu);
  /* 10821b5b pop ecx */
  ECX = (pop32());
  /* 10821b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821b5e pop ecx */
  ECX = (pop32());
  /* 10821b5f jle 0x10821b83 */
  if ((C.zf||C.sf!=C.of)) goto L_10821b83;
  /* 10821b61 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821b63 call dword ptr [0x108270f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f8))), 0x10821b69u);
  /* 10821b69 push ebx */
  push32((uint32_t)(EBX));
  /* 10821b6a push 0x10828dd0 */
  push32((uint32_t)(0x10828dd0u));
  /* 10821b6f push 4 */
  push32((uint32_t)(0x4u));
  /* 10821b71 call dword ptr [0x108270fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270fc))), 0x10821b77u);
  /* 10821b77 push ebx */
  push32((uint32_t)(EBX));
  /* 10821b78 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821b7a call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10821b80u);
  /* 10821b80 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821b83:;
  /* 10821b83 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821b85 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821b8bu);
  /* 10821b8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821b8d pop ecx */
  ECX = (pop32());
  /* 10821b8e je 0x10821bca */
  if (C.zf) goto L_10821bca;
  /* 10821b90 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10821b95 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10821b9bu);
  /* 10821b9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821b9d pop ecx */
  ECX = (pop32());
  /* 10821b9e jne 0x10821bca */
  if (!C.zf) goto L_10821bca;
  /* 10821ba0 push ebx */
  push32((uint32_t)(EBX));
  /* 10821ba1 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821ba3 call ebp */
  call_ind((uint32_t)(EBP), 0x10821ba5u);
  /* 10821ba5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10821ba7 push ebx */
  push32((uint32_t)(EBX));
  /* 10821ba8 call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x10821baeu);
  /* 10821bae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821bb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821bb3 jle 0x10821bbc */
  if ((C.zf||C.sf!=C.of)) goto L_10821bbc;
  /* 10821bb5 push 0x10828778 */
  push32((uint32_t)(0x10828778u));
  /* 10821bba jmp 0x10821bc1 */
  goto L_10821bc1;
L_10821bbc:;
  /* 10821bbc push 0x1082876c */
  push32((uint32_t)(0x1082876cu));
L_10821bc1:;
  /* 10821bc1 call edi */
  call_ind((uint32_t)(EDI), 0x10821bc3u);
  /* 10821bc3 pop ecx */
  ECX = (pop32());
  /* 10821bc4 call dword ptr [0x10827108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827108))), 0x10821bcau);
L_10821bca:;
  /* 10821bca push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821bcc call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821bd2u);
  /* 10821bd2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821bd4 pop ecx */
  ECX = (pop32());
  /* 10821bd5 je 0x10821c09 */
  if (C.zf) goto L_10821c09;
  /* 10821bd7 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10821bd9 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821bdfu);
  /* 10821bdf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821be1 pop ecx */
  ECX = (pop32());
  /* 10821be2 je 0x10821c09 */
  if (C.zf) goto L_10821c09;
  /* 10821be4 push 0x10828bd0 */
  push32((uint32_t)(0x10828bd0u));
  /* 10821be9 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10821befu);
  /* 10821bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821bf1 pop ecx */
  ECX = (pop32());
  /* 10821bf2 jne 0x10821c09 */
  if (!C.zf) goto L_10821c09;
  /* 10821bf4 push ebx */
  push32((uint32_t)(EBX));
  /* 10821bf5 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821bf7 call ebp */
  call_ind((uint32_t)(EBP), 0x10821bf9u);
  /* 10821bf9 push 0x10828764 */
  push32((uint32_t)(0x10828764u));
  /* 10821bfe call edi */
  call_ind((uint32_t)(EDI), 0x10821c00u);
  /* 10821c00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821c03 call dword ptr [0x10827108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827108))), 0x10821c09u);
L_10821c09:;
  /* 10821c09 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821c0b call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821c11u);
  /* 10821c11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821c13 pop ecx */
  ECX = (pop32());
  /* 10821c14 je 0x10821c48 */
  if (C.zf) goto L_10821c48;
  /* 10821c16 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10821c18 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821c1eu);
  /* 10821c1e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821c20 pop ecx */
  ECX = (pop32());
  /* 10821c21 je 0x10821c48 */
  if (C.zf) goto L_10821c48;
  /* 10821c23 push 0x10828be0 */
  push32((uint32_t)(0x10828be0u));
  /* 10821c28 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10821c2eu);
  /* 10821c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821c30 pop ecx */
  ECX = (pop32());
  /* 10821c31 jne 0x10821c48 */
  if (!C.zf) goto L_10821c48;
  /* 10821c33 push ebx */
  push32((uint32_t)(EBX));
  /* 10821c34 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821c36 call ebp */
  call_ind((uint32_t)(EBP), 0x10821c38u);
  /* 10821c38 push 0x10828758 */
  push32((uint32_t)(0x10828758u));
  /* 10821c3d call edi */
  call_ind((uint32_t)(EDI), 0x10821c3fu);
  /* 10821c3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821c42 call dword ptr [0x10827108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827108))), 0x10821c48u);
L_10821c48:;
  /* 10821c48 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821c4a call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821c50u);
  /* 10821c50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821c52 pop ecx */
  ECX = (pop32());
  /* 10821c53 je 0x10821c87 */
  if (C.zf) goto L_10821c87;
  /* 10821c55 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10821c57 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821c5du);
  /* 10821c5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821c5f pop ecx */
  ECX = (pop32());
  /* 10821c60 je 0x10821c87 */
  if (C.zf) goto L_10821c87;
  /* 10821c62 push 0x10828e18 */
  push32((uint32_t)(0x10828e18u));
  /* 10821c67 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10821c6du);
  /* 10821c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821c6f pop ecx */
  ECX = (pop32());
  /* 10821c70 jne 0x10821c87 */
  if (!C.zf) goto L_10821c87;
  /* 10821c72 push ebx */
  push32((uint32_t)(EBX));
  /* 10821c73 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821c75 call ebp */
  call_ind((uint32_t)(EBP), 0x10821c77u);
  /* 10821c77 push 0x1082874c */
  push32((uint32_t)(0x1082874cu));
  /* 10821c7c call edi */
  call_ind((uint32_t)(EDI), 0x10821c7eu);
  /* 10821c7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821c81 call dword ptr [0x10827108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827108))), 0x10821c87u);
L_10821c87:;
  /* 10821c87 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821c89 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821c8fu);
  /* 10821c8f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821c91 pop ecx */
  ECX = (pop32());
  /* 10821c92 je 0x10821cc6 */
  if (C.zf) goto L_10821cc6;
  /* 10821c94 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10821c96 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821c9cu);
  /* 10821c9c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821c9e pop ecx */
  ECX = (pop32());
  /* 10821c9f je 0x10821cc6 */
  if (C.zf) goto L_10821cc6;
  /* 10821ca1 push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 10821ca6 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10821cacu);
  /* 10821cac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821cae pop ecx */
  ECX = (pop32());
  /* 10821caf jne 0x10821cc6 */
  if (!C.zf) goto L_10821cc6;
  /* 10821cb1 push ebx */
  push32((uint32_t)(EBX));
  /* 10821cb2 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10821cb4 call ebp */
  call_ind((uint32_t)(EBP), 0x10821cb6u);
  /* 10821cb6 push 0x10828740 */
  push32((uint32_t)(0x10828740u));
  /* 10821cbb call edi */
  call_ind((uint32_t)(EDI), 0x10821cbdu);
  /* 10821cbd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821cc0 call dword ptr [0x10827108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827108))), 0x10821cc6u);
L_10821cc6:;
  /* 10821cc6 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10821cc8 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821cceu);
  /* 10821cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821cd0 pop ecx */
  ECX = (pop32());
  /* 10821cd1 je 0x10821cf5 */
  if (C.zf) goto L_10821cf5;
  /* 10821cd3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10821cd5 call dword ptr [0x1082710c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082710c))), 0x10821cdbu);
  /* 10821cdb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821cdd pop ecx */
  ECX = (pop32());
  /* 10821cde je 0x10821cf5 */
  if (C.zf) goto L_10821cf5;
  /* 10821ce0 push ebx */
  push32((uint32_t)(EBX));
  /* 10821ce1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10821ce3 call ebp */
  call_ind((uint32_t)(EBP), 0x10821ce5u);
  /* 10821ce5 push 0x10828738 */
  push32((uint32_t)(0x10828738u));
  /* 10821cea call edi */
  call_ind((uint32_t)(EDI), 0x10821cecu);
  /* 10821cec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821cef call dword ptr [0x10827110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827110))), 0x10821cf5u);
L_10821cf5:;
  /* 10821cf5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821cf7 push 0x10828bf8 */
  push32((uint32_t)(0x10828bf8u));
  /* 10821cfc call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10821d02u);
  /* 10821d02 pop ecx */
  ECX = (pop32());
  /* 10821d03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821d05 pop ecx */
  ECX = (pop32());
  /* 10821d06 jle 0x10821d21 */
  if ((C.zf||C.sf!=C.of)) goto L_10821d21;
  /* 10821d08 push ebx */
  push32((uint32_t)(EBX));
  /* 10821d09 push 0x10828bf8 */
  push32((uint32_t)(0x10828bf8u));
  /* 10821d0e push 5 */
  push32((uint32_t)(0x5u));
  /* 10821d10 call dword ptr [0x108270fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270fc))), 0x10821d16u);
  /* 10821d16 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821d18 call dword ptr [0x108270c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c0))), 0x10821d1eu);
  /* 10821d1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821d21:;
  /* 10821d21 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821d23 push 0x10828c00 */
  push32((uint32_t)(0x10828c00u));
  /* 10821d28 call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10821d2eu);
  /* 10821d2e pop ecx */
  ECX = (pop32());
  /* 10821d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821d31 pop ecx */
  ECX = (pop32());
  /* 10821d32 jle 0x10821d4d */
  if ((C.zf||C.sf!=C.of)) goto L_10821d4d;
  /* 10821d34 push ebx */
  push32((uint32_t)(EBX));
  /* 10821d35 push 0x10828c00 */
  push32((uint32_t)(0x10828c00u));
  /* 10821d3a push 5 */
  push32((uint32_t)(0x5u));
  /* 10821d3c call dword ptr [0x108270fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270fc))), 0x10821d42u);
  /* 10821d42 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821d44 call dword ptr [0x108270c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c0))), 0x10821d4au);
  /* 10821d4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821d4d:;
  /* 10821d4d push 1 */
  push32((uint32_t)(0x1u));
  /* 10821d4f call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821d55u);
  /* 10821d55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821d57 pop ecx */
  ECX = (pop32());
  /* 10821d58 je 0x10821e35 */
  if (C.zf) goto L_10821e35;
  /* 10821d5e push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10821d63 push 0x10828c10 */
  push32((uint32_t)(0x10828c10u));
  /* 10821d68 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10821d6eu);
  /* 10821d6e pop ecx */
  ECX = (pop32());
  /* 10821d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821d71 pop ecx */
  ECX = (pop32());
  /* 10821d72 jle 0x10821e35 */
  if ((C.zf||C.sf!=C.of)) goto L_10821e35;
  /* 10821d78 push 0x10828c08 */
  push32((uint32_t)(0x10828c08u));
  /* 10821d7d call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10821d83u);
  /* 10821d83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821d85 pop ecx */
  ECX = (pop32());
  /* 10821d86 jle 0x10821e35 */
  if ((C.zf||C.sf!=C.of)) goto L_10821e35;
  /* 10821d8c push ebx */
  push32((uint32_t)(EBX));
  /* 10821d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10821d8f call ebp */
  call_ind((uint32_t)(EBP), 0x10821d91u);
  /* 10821d91 push 0x10828730 */
  push32((uint32_t)(0x10828730u));
  /* 10821d96 call edi */
  call_ind((uint32_t)(EDI), 0x10821d98u);
  /* 10821d98 push 1 */
  push32((uint32_t)(0x1u));
  /* 10821d9a push ebx */
  push32((uint32_t)(EBX));
  /* 10821d9b call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x10821da1u);
  /* 10821da1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821da4 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10821da7 jle 0x10821dee */
  if ((C.zf||C.sf!=C.of)) goto L_10821dee;
  /* 10821da9 push 0x10828720 */
  push32((uint32_t)(0x10828720u));
  /* 10821dae push ebx */
  push32((uint32_t)(EBX));
  /* 10821daf push 0x10828718 */
  push32((uint32_t)(0x10828718u));
  /* 10821db4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10821db6 call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x10821dbcu);
  /* 10821dbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821dbf sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10821dc1 je 0x10821dc6 */
  if (C.zf) goto L_10821dc6;
  /* 10821dc3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10821dc4 jmp 0x10821e06 */
  goto L_10821e06;
L_10821dc6:;
  /* 10821dc6 push 0x10828710 */
  push32((uint32_t)(0x10828710u));
  /* 10821dcb call edi */
  call_ind((uint32_t)(EDI), 0x10821dcdu);
  /* 10821dcd push -0x32 */
  push32((uint32_t)(0xffffffceu));
  /* 10821dcf push 1 */
  push32((uint32_t)(0x1u));
  /* 10821dd1 push ebx */
  push32((uint32_t)(EBX));
  /* 10821dd2 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10821dd8u);
  /* 10821dd8 push ebx */
  push32((uint32_t)(EBX));
  /* 10821dd9 push 0x10828c08 */
  push32((uint32_t)(0x10828c08u));
  /* 10821dde call esi */
  call_ind((uint32_t)(ESI), 0x10821de0u);
  /* 10821de0 push ebx */
  push32((uint32_t)(EBX));
  /* 10821de1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821de3 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10821de9u);
  /* 10821de9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821dec jmp 0x10821e35 */
  goto L_10821e35;
L_10821dee:;
  /* 10821dee push 0x10828704 */
  push32((uint32_t)(0x10828704u));
  /* 10821df3 push ebx */
  push32((uint32_t)(EBX));
  /* 10821df4 push 0x10828718 */
  push32((uint32_t)(0x10828718u));
  /* 10821df9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10821dfb call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x10821e01u);
  /* 10821e01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10821e06:;
  /* 10821e06 je 0x10821e19 */
  if (C.zf) goto L_10821e19;
  /* 10821e08 push 0x108286fc */
  push32((uint32_t)(0x108286fcu));
  /* 10821e0d call edi */
  call_ind((uint32_t)(EDI), 0x10821e0fu);
  /* 10821e0f push ebx */
  push32((uint32_t)(EBX));
  /* 10821e10 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10821e12 call ebp */
  call_ind((uint32_t)(EBP), 0x10821e14u);
  /* 10821e14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821e17 jmp 0x10821e35 */
  goto L_10821e35;
L_10821e19:;
  /* 10821e19 push 0x108286f4 */
  push32((uint32_t)(0x108286f4u));
  /* 10821e1e call edi */
  call_ind((uint32_t)(EDI), 0x10821e20u);
  /* 10821e20 push ebx */
  push32((uint32_t)(EBX));
  /* 10821e21 push 0x10828c08 */
  push32((uint32_t)(0x10828c08u));
  /* 10821e26 call esi */
  call_ind((uint32_t)(ESI), 0x10821e28u);
  /* 10821e28 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821e2a push 4 */
  push32((uint32_t)(0x4u));
  /* 10821e2c call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10821e32u);
  /* 10821e32 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821e35:;
  /* 10821e35 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10821e37 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821e3du);
  /* 10821e3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821e3f pop ecx */
  ECX = (pop32());
  /* 10821e40 je 0x10821e73 */
  if (C.zf) goto L_10821e73;
  /* 10821e42 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10821e44 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821e4au);
  /* 10821e4a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821e4c pop ecx */
  ECX = (pop32());
  /* 10821e4d jne 0x10821e73 */
  if (!C.zf) goto L_10821e73;
  /* 10821e4f push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10821e54 push 0x10828c10 */
  push32((uint32_t)(0x10828c10u));
  /* 10821e59 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10821e5fu);
  /* 10821e5f pop ecx */
  ECX = (pop32());
  /* 10821e60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821e62 pop ecx */
  ECX = (pop32());
  /* 10821e63 jne 0x10821e73 */
  if (!C.zf) goto L_10821e73;
  /* 10821e65 push 1 */
  push32((uint32_t)(0x1u));
  /* 10821e67 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10821e69 call ebp */
  call_ind((uint32_t)(EBP), 0x10821e6bu);
  /* 10821e6b push ebx */
  push32((uint32_t)(EBX));
  /* 10821e6c push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10821e6e call ebp */
  call_ind((uint32_t)(EBP), 0x10821e70u);
  /* 10821e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821e73:;
  /* 10821e73 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10821e75 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821e7bu);
  /* 10821e7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821e7d pop ecx */
  ECX = (pop32());
  /* 10821e7e jne 0x10821f55 */
  if (!C.zf) goto L_10821f55;
  /* 10821e84 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10821e89 push 0x10828c10 */
  push32((uint32_t)(0x10828c10u));
  /* 10821e8e call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10821e94u);
  /* 10821e94 pop ecx */
  ECX = (pop32());
  /* 10821e95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821e97 pop ecx */
  ECX = (pop32());
  /* 10821e98 jle 0x10821f55 */
  if ((C.zf||C.sf!=C.of)) goto L_10821f55;
  /* 10821e9e push 0x10828c08 */
  push32((uint32_t)(0x10828c08u));
  /* 10821ea3 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10821ea9u);
  /* 10821ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821eab pop ecx */
  ECX = (pop32());
  /* 10821eac jle 0x10821f55 */
  if ((C.zf||C.sf!=C.of)) goto L_10821f55;
  /* 10821eb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10821eb4 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10821eb6 call ebp */
  call_ind((uint32_t)(EBP), 0x10821eb8u);
  /* 10821eb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10821eba push ebx */
  push32((uint32_t)(EBX));
  /* 10821ebb call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x10821ec1u);
  /* 10821ec1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821ec4 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10821ec7 jle 0x10821f0e */
  if ((C.zf||C.sf!=C.of)) goto L_10821f0e;
  /* 10821ec9 push 0x10828720 */
  push32((uint32_t)(0x10828720u));
  /* 10821ece push ebx */
  push32((uint32_t)(EBX));
  /* 10821ecf push 0x108286ec */
  push32((uint32_t)(0x108286ecu));
  /* 10821ed4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10821ed6 call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x10821edcu);
  /* 10821edc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821edf sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10821ee1 je 0x10821ee6 */
  if (C.zf) goto L_10821ee6;
  /* 10821ee3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10821ee4 jmp 0x10821f26 */
  goto L_10821f26;
L_10821ee6:;
  /* 10821ee6 push 0x10828710 */
  push32((uint32_t)(0x10828710u));
  /* 10821eeb call edi */
  call_ind((uint32_t)(EDI), 0x10821eedu);
  /* 10821eed push -0x32 */
  push32((uint32_t)(0xffffffceu));
  /* 10821eef push 1 */
  push32((uint32_t)(0x1u));
  /* 10821ef1 push ebx */
  push32((uint32_t)(EBX));
  /* 10821ef2 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10821ef8u);
  /* 10821ef8 push ebx */
  push32((uint32_t)(EBX));
  /* 10821ef9 push 0x10828c08 */
  push32((uint32_t)(0x10828c08u));
  /* 10821efe call esi */
  call_ind((uint32_t)(ESI), 0x10821f00u);
  /* 10821f00 push ebx */
  push32((uint32_t)(EBX));
  /* 10821f01 push 4 */
  push32((uint32_t)(0x4u));
  /* 10821f03 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10821f09u);
  /* 10821f09 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821f0c jmp 0x10821f55 */
  goto L_10821f55;
L_10821f0e:;
  /* 10821f0e push 0x10828704 */
  push32((uint32_t)(0x10828704u));
  /* 10821f13 push ebx */
  push32((uint32_t)(EBX));
  /* 10821f14 push 0x108286ec */
  push32((uint32_t)(0x108286ecu));
  /* 10821f19 push 9 */
  push32((uint32_t)(0x9u));
  /* 10821f1b call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x10821f21u);
  /* 10821f21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821f24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10821f26:;
  /* 10821f26 je 0x10821f39 */
  if (C.zf) goto L_10821f39;
  /* 10821f28 push 0x108286fc */
  push32((uint32_t)(0x108286fcu));
  /* 10821f2d call edi */
  call_ind((uint32_t)(EDI), 0x10821f2fu);
  /* 10821f2f push ebx */
  push32((uint32_t)(EBX));
  /* 10821f30 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10821f32 call ebp */
  call_ind((uint32_t)(EBP), 0x10821f34u);
  /* 10821f34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10821f37 jmp 0x10821f55 */
  goto L_10821f55;
L_10821f39:;
  /* 10821f39 push 0x108286f4 */
  push32((uint32_t)(0x108286f4u));
  /* 10821f3e call edi */
  call_ind((uint32_t)(EDI), 0x10821f40u);
  /* 10821f40 push ebx */
  push32((uint32_t)(EBX));
  /* 10821f41 push 0x10828c08 */
  push32((uint32_t)(0x10828c08u));
  /* 10821f46 call esi */
  call_ind((uint32_t)(ESI), 0x10821f48u);
  /* 10821f48 push 5 */
  push32((uint32_t)(0x5u));
  /* 10821f4a push 4 */
  push32((uint32_t)(0x4u));
  /* 10821f4c call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10821f52u);
  /* 10821f52 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821f55:;
  /* 10821f55 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10821f5a call dword ptr [0x10827120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827120))), 0x10821f60u);
  /* 10821f60 cmp dword ptr [0x10828af0], eax */
  { uint32_t _a=(r32((uint32_t)(0x10828af0))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10821f66 pop ecx */
  ECX = (pop32());
  /* 10821f67 jg 0x10821fc3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10821fc3;
  /* 10821f69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10821f6b call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10821f71u);
  /* 10821f71 push 8 */
  push32((uint32_t)(0x8u));
  /* 10821f73 pop ecx */
  ECX = (pop32());
  /* 10821f74 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10821f76 mov eax, dword ptr [0x10828af0] */
  EAX = (r32((uint32_t)(0x10828af0)));
  /* 10821f7b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10821f7c idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10821f7e mov ecx, dword ptr [0x10828af0] */
  ECX = (r32((uint32_t)(0x10828af0)));
  /* 10821f84 mov dword ptr [esp], 0x108286e4 */
  w32((uint32_t)(ESP), (0x108286e4u));
  /* 10821f8b lea eax, [ecx + eax + 0xa] */
  EAX = ((uint32_t)(ECX + EAX*1 + 0xa));
  /* 10821f8f mov dword ptr [0x10828af0], eax */
  w32((uint32_t)(0x10828af0), (EAX));
  /* 10821f94 call edi */
  call_ind((uint32_t)(EDI), 0x10821f96u);
  /* 10821f96 mov dword ptr [esp], 0x10828f00 */
  w32((uint32_t)(ESP), (0x10828f00u));
  /* 10821f9d push ebx */
  push32((uint32_t)(EBX));
  /* 10821f9e push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10821fa3 call dword ptr [0x10827124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827124))), 0x10821fa9u);
  /* 10821fa9 inc byte ptr [0x10828f08] */
  { uint32_t _r=(r8((uint32_t)(0x10828f08)))+1; w8((uint32_t)(0x10828f08), (_r)); fl_inc(_r,8); }
  /* 10821faf inc byte ptr [0x10828f09] */
  { uint32_t _r=(r8((uint32_t)(0x10828f09)))+1; w8((uint32_t)(0x10828f09), (_r)); fl_inc(_r,8); }
  /* 10821fb5 push 0x10828f00 */
  push32((uint32_t)(0x10828f00u));
  /* 10821fba call dword ptr [0x10827128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827128))), 0x10821fc0u);
  /* 10821fc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10821fc3:;
  /* 10821fc3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10821fc5 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10821fcbu);
  /* 10821fcb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10821fcd pop ecx */
  ECX = (pop32());
  /* 10821fce je 0x1082207d */
  if (C.zf) goto L_1082207d;
  /* 10821fd4 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10821fd9 push 0x10828c20 */
  push32((uint32_t)(0x10828c20u));
  /* 10821fde call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10821fe4u);
  /* 10821fe4 pop ecx */
  ECX = (pop32());
  /* 10821fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10821fe7 pop ecx */
  ECX = (pop32());
  /* 10821fe8 jle 0x1082207d */
  if ((C.zf||C.sf!=C.of)) goto L_1082207d;
  /* 10821fee push ebx */
  push32((uint32_t)(EBX));
  /* 10821fef push 3 */
  push32((uint32_t)(0x3u));
  /* 10821ff1 call ebp */
  call_ind((uint32_t)(EBP), 0x10821ff3u);
  /* 10821ff3 push 0x108286d4 */
  push32((uint32_t)(0x108286d4u));
  /* 10821ff8 push ebx */
  push32((uint32_t)(EBX));
  /* 10821ff9 push 0x108286cc */
  push32((uint32_t)(0x108286ccu));
  /* 10821ffe push 9 */
  push32((uint32_t)(0x9u));
  /* 10822000 call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x10822006u);
  /* 10822006 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822009 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082200b je 0x1082203f */
  if (C.zf) goto L_1082203f;
  /* 1082200d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1082200e push ebx */
  push32((uint32_t)(EBX));
  /* 1082200f push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10822011 je 0x10822021 */
  if (C.zf) goto L_10822021;
  /* 10822013 call ebp */
  call_ind((uint32_t)(EBP), 0x10822015u);
  /* 10822015 push 0x108286c4 */
  push32((uint32_t)(0x108286c4u));
  /* 1082201a call edi */
  call_ind((uint32_t)(EDI), 0x1082201cu);
  /* 1082201c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082201f jmp 0x1082205a */
  goto L_1082205a;
L_10822021:;
  /* 10822021 call ebp */
  call_ind((uint32_t)(EBP), 0x10822023u);
  /* 10822023 push 0x108286bc */
  push32((uint32_t)(0x108286bcu));
  /* 10822028 call dword ptr [0x1082712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082712c))), 0x1082202eu);
  /* 1082202e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822031 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822033 jne 0x1082203f */
  if (!C.zf) goto L_1082203f;
  /* 10822035 push 0x108286c4 */
  push32((uint32_t)(0x108286c4u));
  /* 1082203a call edi */
  call_ind((uint32_t)(EDI), 0x1082203cu);
  /* 1082203c pop ecx */
  ECX = (pop32());
  /* 1082203d jmp 0x1082205a */
  goto L_1082205a;
L_1082203f:;
  /* 1082203f push 0x108286b4 */
  push32((uint32_t)(0x108286b4u));
  /* 10822044 call edi */
  call_ind((uint32_t)(EDI), 0x10822046u);
  /* 10822046 push ebx */
  push32((uint32_t)(EBX));
  /* 10822047 push 0x10828b08 */
  push32((uint32_t)(0x10828b08u));
  /* 1082204c call esi */
  call_ind((uint32_t)(ESI), 0x1082204eu);
  /* 1082204e push ebx */
  push32((uint32_t)(EBX));
  /* 1082204f push 4 */
  push32((uint32_t)(0x4u));
  /* 10822051 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10822057u);
  /* 10822057 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082205a:;
  /* 1082205a push ebx */
  push32((uint32_t)(EBX));
  /* 1082205b push 0x10828b10 */
  push32((uint32_t)(0x10828b10u));
  /* 10822060 call esi */
  call_ind((uint32_t)(ESI), 0x10822062u);
  /* 10822062 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822064 push 0x10828b18 */
  push32((uint32_t)(0x10828b18u));
  /* 10822069 call esi */
  call_ind((uint32_t)(ESI), 0x1082206bu);
  /* 1082206b push ebx */
  push32((uint32_t)(EBX));
  /* 1082206c push ebx */
  push32((uint32_t)(EBX));
  /* 1082206d push 0x10828c20 */
  push32((uint32_t)(0x10828c20u));
  /* 10822072 push 5 */
  push32((uint32_t)(0x5u));
  /* 10822074 call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x1082207au);
  /* 1082207a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082207d:;
  /* 1082207d push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1082207f call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822085u);
  /* 10822085 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822087 pop ecx */
  ECX = (pop32());
  /* 10822088 je 0x108220e7 */
  if (C.zf) goto L_108220e7;
  /* 1082208a push 0x10828b10 */
  push32((uint32_t)(0x10828b10u));
  /* 1082208f call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822095u);
  /* 10822095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822097 pop ecx */
  ECX = (pop32());
  /* 10822098 jne 0x108220e7 */
  if (!C.zf) goto L_108220e7;
  /* 1082209a push 0x10828b18 */
  push32((uint32_t)(0x10828b18u));
  /* 1082209f call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108220a5u);
  /* 108220a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108220a7 pop ecx */
  ECX = (pop32());
  /* 108220a8 jne 0x108220e7 */
  if (!C.zf) goto L_108220e7;
  /* 108220aa push 0x10828b00 */
  push32((uint32_t)(0x10828b00u));
  /* 108220af call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108220b5u);
  /* 108220b5 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108220b8 pop ecx */
  ECX = (pop32());
  /* 108220b9 jle 0x108220e7 */
  if ((C.zf||C.sf!=C.of)) goto L_108220e7;
  /* 108220bb push ebx */
  push32((uint32_t)(EBX));
  /* 108220bc push 0x35 */
  push32((uint32_t)(0x35u));
  /* 108220be call ebp */
  call_ind((uint32_t)(EBP), 0x108220c0u);
  /* 108220c0 push 0x108286ac */
  push32((uint32_t)(0x108286acu));
  /* 108220c5 call edi */
  call_ind((uint32_t)(EDI), 0x108220c7u);
  /* 108220c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108220c9 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108220cfu);
  /* 108220cf push 7 */
  push32((uint32_t)(0x7u));
  /* 108220d1 pop ecx */
  ECX = (pop32());
  /* 108220d2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108220d4 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108220da push ecx */
  push32((uint32_t)(ECX));
  /* 108220db push 3 */
  push32((uint32_t)(0x3u));
  /* 108220dd push ebx */
  push32((uint32_t)(EBX));
  /* 108220de call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108220e4u);
  /* 108220e4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108220e7:;
  /* 108220e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 108220e9 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108220efu);
  /* 108220ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108220f1 pop ecx */
  ECX = (pop32());
  /* 108220f2 je 0x1082214c */
  if (C.zf) goto L_1082214c;
  /* 108220f4 push 3 */
  push32((uint32_t)(0x3u));
  /* 108220f6 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108220fcu);
  /* 108220fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108220fe pop ecx */
  ECX = (pop32());
  /* 108220ff je 0x1082214c */
  if (C.zf) goto L_1082214c;
  /* 10822101 push 0x10828b10 */
  push32((uint32_t)(0x10828b10u));
  /* 10822106 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x1082210cu);
  /* 1082210c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082210f pop ecx */
  ECX = (pop32());
  /* 10822110 jne 0x1082214c */
  if (!C.zf) goto L_1082214c;
  /* 10822112 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822117 push 0x10828c40 */
  push32((uint32_t)(0x10828c40u));
  /* 1082211c call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822122u);
  /* 10822122 pop ecx */
  ECX = (pop32());
  /* 10822123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822125 pop ecx */
  ECX = (pop32());
  /* 10822126 jle 0x1082214c */
  if ((C.zf||C.sf!=C.of)) goto L_1082214c;
  /* 10822128 push ebx */
  push32((uint32_t)(EBX));
  /* 10822129 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082212b call ebp */
  call_ind((uint32_t)(EBP), 0x1082212du);
  /* 1082212d push 0x108286a4 */
  push32((uint32_t)(0x108286a4u));
  /* 10822132 call edi */
  call_ind((uint32_t)(EDI), 0x10822134u);
  /* 10822134 push ebx */
  push32((uint32_t)(EBX));
  /* 10822135 push 0x10828b10 */
  push32((uint32_t)(0x10828b10u));
  /* 1082213a call esi */
  call_ind((uint32_t)(ESI), 0x1082213cu);
  /* 1082213c push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822141 push 5 */
  push32((uint32_t)(0x5u));
  /* 10822143 call dword ptr [0x10827134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827134))), 0x10822149u);
  /* 10822149 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082214c:;
  /* 1082214c push 5 */
  push32((uint32_t)(0x5u));
  /* 1082214e call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822154u);
  /* 10822154 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822156 pop ecx */
  ECX = (pop32());
  /* 10822157 je 0x10822287 */
  if (C.zf) goto L_10822287;
  /* 1082215d push 0x10828c90 */
  push32((uint32_t)(0x10828c90u));
  /* 10822162 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822168u);
  /* 10822168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082216a pop ecx */
  ECX = (pop32());
  /* 1082216b jne 0x10822287 */
  if (!C.zf) goto L_10822287;
  /* 10822171 push ebx */
  push32((uint32_t)(EBX));
  /* 10822172 push 0x10828c48 */
  push32((uint32_t)(0x10828c48u));
  /* 10822177 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x1082217du);
  /* 1082217d pop ecx */
  ECX = (pop32());
  /* 1082217e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822180 pop ecx */
  ECX = (pop32());
  /* 10822181 jle 0x10822287 */
  if ((C.zf||C.sf!=C.of)) goto L_10822287;
  /* 10822187 push ebx */
  push32((uint32_t)(EBX));
  /* 10822188 push 5 */
  push32((uint32_t)(0x5u));
  /* 1082218a call ebp */
  call_ind((uint32_t)(EBP), 0x1082218cu);
  /* 1082218c push 3 */
  push32((uint32_t)(0x3u));
  /* 1082218e call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822194u);
  /* 10822194 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822197 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822199 jne 0x1082222b */
  if (!C.zf) goto L_1082222b;
  /* 1082219f push 0x10828b08 */
  push32((uint32_t)(0x10828b08u));
  /* 108221a4 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108221aau);
  /* 108221aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108221ac pop ecx */
  ECX = (pop32());
  /* 108221ad jle 0x1082222b */
  if ((C.zf||C.sf!=C.of)) goto L_1082222b;
  /* 108221af push 0x10828698 */
  push32((uint32_t)(0x10828698u));
  /* 108221b4 push ebx */
  push32((uint32_t)(EBX));
  /* 108221b5 push 0x10828690 */
  push32((uint32_t)(0x10828690u));
  /* 108221ba push 9 */
  push32((uint32_t)(0x9u));
  /* 108221bc call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x108221c2u);
  /* 108221c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108221c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108221c7 jne 0x108221dc */
  if (!C.zf) goto L_108221dc;
  /* 108221c9 push 0x10828688 */
  push32((uint32_t)(0x10828688u));
  /* 108221ce call edi */
  call_ind((uint32_t)(EDI), 0x108221d0u);
  /* 108221d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108221d2 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108221d8u);
  /* 108221d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 108221da jmp 0x1082223c */
  goto L_1082223c;
L_108221dc:;
  /* 108221dc push 0x10828680 */
  push32((uint32_t)(0x10828680u));
  /* 108221e1 call edi */
  call_ind((uint32_t)(EDI), 0x108221e3u);
  /* 108221e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108221e5 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108221ebu);
  /* 108221eb push 0xc */
  push32((uint32_t)(0xcu));
  /* 108221ed pop ecx */
  ECX = (pop32());
  /* 108221ee sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108221f0 imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108221f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108221f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108221f6 push ebx */
  push32((uint32_t)(EBX));
  /* 108221f7 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108221fdu);
  /* 108221fd push ebx */
  push32((uint32_t)(EBX));
  /* 108221fe push 0x10828b08 */
  push32((uint32_t)(0x10828b08u));
  /* 10822203 call esi */
  call_ind((uint32_t)(ESI), 0x10822205u);
  /* 10822205 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822207 push ebx */
  push32((uint32_t)(EBX));
  /* 10822208 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x1082220eu);
  /* 1082220e push ebx */
  push32((uint32_t)(EBX));
  /* 1082220f push 0x10828b08 */
  push32((uint32_t)(0x10828b08u));
  /* 10822214 call esi */
  call_ind((uint32_t)(ESI), 0x10822216u);
  /* 10822216 push ebx */
  push32((uint32_t)(EBX));
  /* 10822217 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10822219 push 0x10828c20 */
  push32((uint32_t)(0x10828c20u));
  /* 1082221e push 4 */
  push32((uint32_t)(0x4u));
  /* 10822220 call dword ptr [0x1082713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082713c))), 0x10822226u);
  /* 10822226 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822229 jmp 0x1082224f */
  goto L_1082224f;
L_1082222b:;
  /* 1082222b push 0x10828678 */
  push32((uint32_t)(0x10828678u));
  /* 10822230 call edi */
  call_ind((uint32_t)(EDI), 0x10822232u);
  /* 10822232 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822234 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082223au);
  /* 1082223a push 0xc */
  push32((uint32_t)(0xcu));
L_1082223c:;
  /* 1082223c pop ecx */
  ECX = (pop32());
  /* 1082223d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082223f imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10822242 push ecx */
  push32((uint32_t)(ECX));
  /* 10822243 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822245 push ebx */
  push32((uint32_t)(EBX));
  /* 10822246 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x1082224cu);
  /* 1082224c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082224f:;
  /* 1082224f push 4 */
  push32((uint32_t)(0x4u));
  /* 10822251 call dword ptr [0x108270f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f8))), 0x10822257u);
  /* 10822257 push ebx */
  push32((uint32_t)(EBX));
  /* 10822258 push 0x10828b48 */
  push32((uint32_t)(0x10828b48u));
  /* 1082225d call esi */
  call_ind((uint32_t)(ESI), 0x1082225fu);
  /* 1082225f push 4 */
  push32((uint32_t)(0x4u));
  /* 10822261 call dword ptr [0x10827140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827140))), 0x10822267u);
  /* 10822267 push ebx */
  push32((uint32_t)(EBX));
  /* 10822268 push 0x10828c48 */
  push32((uint32_t)(0x10828c48u));
  /* 1082226d push 4 */
  push32((uint32_t)(0x4u));
  /* 1082226f push 0x10828d08 */
  push32((uint32_t)(0x10828d08u));
  /* 10822274 push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 10822279 push 0x10828b78 */
  push32((uint32_t)(0x10828b78u));
  /* 1082227e call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10822284u);
  /* 10822284 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822287:;
  /* 10822287 push 6 */
  push32((uint32_t)(0x6u));
  /* 10822289 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x1082228fu);
  /* 1082228f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822291 pop ecx */
  ECX = (pop32());
  /* 10822292 je 0x108223b4 */
  if (C.zf) goto L_108223b4;
  /* 10822298 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 1082229d push 0x10828c58 */
  push32((uint32_t)(0x10828c58u));
  /* 108222a2 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x108222a8u);
  /* 108222a8 pop ecx */
  ECX = (pop32());
  /* 108222a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108222ab pop ecx */
  ECX = (pop32());
  /* 108222ac jle 0x108223b4 */
  if ((C.zf||C.sf!=C.of)) goto L_108223b4;
  /* 108222b2 push ebx */
  push32((uint32_t)(EBX));
  /* 108222b3 push 6 */
  push32((uint32_t)(0x6u));
  /* 108222b5 call ebp */
  call_ind((uint32_t)(EBP), 0x108222b7u);
  /* 108222b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 108222b9 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108222bfu);
  /* 108222bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108222c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108222c4 je 0x108222fc */
  if (C.zf) goto L_108222fc;
  /* 108222c6 push 0x10828670 */
  push32((uint32_t)(0x10828670u));
L_108222cb:;
  /* 108222cb call edi */
  call_ind((uint32_t)(EDI), 0x108222cdu);
  /* 108222cd push ebx */
  push32((uint32_t)(EBX));
  /* 108222ce push 0x10828b20 */
  push32((uint32_t)(0x10828b20u));
  /* 108222d3 call esi */
  call_ind((uint32_t)(ESI), 0x108222d5u);
  /* 108222d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 108222d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108222d9 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x108222dfu);
  /* 108222df push ebx */
  push32((uint32_t)(EBX));
  /* 108222e0 push 0x10828b20 */
  push32((uint32_t)(0x10828b20u));
  /* 108222e5 call esi */
  call_ind((uint32_t)(ESI), 0x108222e7u);
  /* 108222e7 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 108222ec push 5 */
  push32((uint32_t)(0x5u));
  /* 108222ee call dword ptr [0x10827134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827134))), 0x108222f4u);
  /* 108222f4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108222f7 jmp 0x108223b4 */
  goto L_108223b4;
L_108222fc:;
  /* 108222fc push 1 */
  push32((uint32_t)(0x1u));
  /* 108222fe push ebx */
  push32((uint32_t)(EBX));
  /* 108222ff call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x10822305u);
  /* 10822305 pop ecx */
  ECX = (pop32());
  /* 10822306 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822309 pop ecx */
  ECX = (pop32());
  /* 1082230a jge 0x10822352 */
  if ((C.sf==C.of)) goto L_10822352;
  /* 1082230c push 0x10828660 */
  push32((uint32_t)(0x10828660u));
L_10822311:;
  /* 10822311 push ebx */
  push32((uint32_t)(EBX));
  /* 10822312 push 0x10828658 */
  push32((uint32_t)(0x10828658u));
  /* 10822317 push 9 */
  push32((uint32_t)(0x9u));
  /* 10822319 call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x1082231fu);
  /* 1082231f push 0x10828650 */
  push32((uint32_t)(0x10828650u));
  /* 10822324 call edi */
  call_ind((uint32_t)(EDI), 0x10822326u);
  /* 10822326 push ebx */
  push32((uint32_t)(EBX));
  /* 10822327 push 0x10828b20 */
  push32((uint32_t)(0x10828b20u));
  /* 1082232c call esi */
  call_ind((uint32_t)(ESI), 0x1082232eu);
  /* 1082232e push 5 */
  push32((uint32_t)(0x5u));
  /* 10822330 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822332 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10822338u);
  /* 10822338 push ebx */
  push32((uint32_t)(EBX));
  /* 10822339 push 0x10828b20 */
  push32((uint32_t)(0x10828b20u));
  /* 1082233e call esi */
  call_ind((uint32_t)(ESI), 0x10822340u);
  /* 10822340 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822345 push 5 */
  push32((uint32_t)(0x5u));
  /* 10822347 call dword ptr [0x10827134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827134))), 0x1082234du);
  /* 1082234d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822350 jmp 0x108223b4 */
  goto L_108223b4;
L_10822352:;
  /* 10822352 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822354 push ebx */
  push32((uint32_t)(EBX));
  /* 10822355 call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x1082235bu);
  /* 1082235b pop ecx */
  ECX = (pop32());
  /* 1082235c cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082235f pop ecx */
  ECX = (pop32());
  /* 10822360 jge 0x10822369 */
  if ((C.sf==C.of)) goto L_10822369;
  /* 10822362 push 0x1082863c */
  push32((uint32_t)(0x1082863cu));
  /* 10822367 jmp 0x10822311 */
  goto L_10822311;
L_10822369:;
  /* 10822369 push 0x10828620 */
  push32((uint32_t)(0x10828620u));
  /* 1082236e push ebx */
  push32((uint32_t)(EBX));
  /* 1082236f push 0x10828658 */
  push32((uint32_t)(0x10828658u));
  /* 10822374 push 9 */
  push32((uint32_t)(0x9u));
  /* 10822376 call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x1082237cu);
  /* 1082237c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082237f cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822382 je 0x1082238e */
  if (C.zf) goto L_1082238e;
  /* 10822384 push 0x10828650 */
  push32((uint32_t)(0x10828650u));
  /* 10822389 jmp 0x108222cb */
  goto L_108222cb;
L_1082238e:;
  /* 1082238e push 0x10828618 */
  push32((uint32_t)(0x10828618u));
  /* 10822393 call edi */
  call_ind((uint32_t)(EDI), 0x10822395u);
  /* 10822395 push ebx */
  push32((uint32_t)(EBX));
  /* 10822396 push 0x10828b20 */
  push32((uint32_t)(0x10828b20u));
  /* 1082239b call esi */
  call_ind((uint32_t)(ESI), 0x1082239du);
  /* 1082239d push ebx */
  push32((uint32_t)(EBX));
  /* 1082239e push 1 */
  push32((uint32_t)(0x1u));
  /* 108223a0 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x108223a6u);
  /* 108223a6 push -0x64 */
  push32((uint32_t)(0xffffff9cu));
  /* 108223a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108223aa push ebx */
  push32((uint32_t)(EBX));
  /* 108223ab call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108223b1u);
  /* 108223b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108223b4:;
  /* 108223b4 push 7 */
  push32((uint32_t)(0x7u));
  /* 108223b6 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108223bcu);
  /* 108223bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108223be pop ecx */
  ECX = (pop32());
  /* 108223bf je 0x108223f7 */
  if (C.zf) goto L_108223f7;
  /* 108223c1 push ebx */
  push32((uint32_t)(EBX));
  /* 108223c2 push 0x10828c68 */
  push32((uint32_t)(0x10828c68u));
  /* 108223c7 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108223cdu);
  /* 108223cd pop ecx */
  ECX = (pop32());
  /* 108223ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108223d0 pop ecx */
  ECX = (pop32());
  /* 108223d1 jle 0x108223f7 */
  if ((C.zf||C.sf!=C.of)) goto L_108223f7;
  /* 108223d3 push ebx */
  push32((uint32_t)(EBX));
  /* 108223d4 push 7 */
  push32((uint32_t)(0x7u));
  /* 108223d6 call ebp */
  call_ind((uint32_t)(EBP), 0x108223d8u);
  /* 108223d8 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 108223dd push 0x10828c68 */
  push32((uint32_t)(0x10828c68u));
  /* 108223e2 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x108223e8u);
  /* 108223e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108223eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108223ed jle 0x108223f7 */
  if ((C.zf||C.sf!=C.of)) goto L_108223f7;
  /* 108223ef push 0x10828610 */
  push32((uint32_t)(0x10828610u));
  /* 108223f4 call edi */
  call_ind((uint32_t)(EDI), 0x108223f6u);
  /* 108223f6 pop ecx */
  ECX = (pop32());
L_108223f7:;
  /* 108223f7 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 108223f9 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108223ffu);
  /* 108223ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822401 pop ecx */
  ECX = (pop32());
  /* 10822402 je 0x10822488 */
  if (C.zf) goto L_10822488;
  /* 10822408 push 0x10828b28 */
  push32((uint32_t)(0x10828b28u));
  /* 1082240d call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822413u);
  /* 10822413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822415 pop ecx */
  ECX = (pop32());
  /* 10822416 jne 0x10822488 */
  if (!C.zf) goto L_10822488;
  /* 10822418 push ebx */
  push32((uint32_t)(EBX));
  /* 10822419 push 0x10828ea0 */
  push32((uint32_t)(0x10828ea0u));
  /* 1082241e call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822424u);
  /* 10822424 pop ecx */
  ECX = (pop32());
  /* 10822425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822427 pop ecx */
  ECX = (pop32());
  /* 10822428 jle 0x10822488 */
  if ((C.zf||C.sf!=C.of)) goto L_10822488;
  /* 1082242a push ebx */
  push32((uint32_t)(EBX));
  /* 1082242b push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1082242d call ebp */
  call_ind((uint32_t)(EBP), 0x1082242fu);
  /* 1082242f push 0x10828608 */
  push32((uint32_t)(0x10828608u));
  /* 10822434 call edi */
  call_ind((uint32_t)(EDI), 0x10822436u);
  /* 10822436 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822438 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082243eu);
  /* 1082243e push 4 */
  push32((uint32_t)(0x4u));
  /* 10822440 pop ecx */
  ECX = (pop32());
  /* 10822441 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10822443 imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10822446 push ecx */
  push32((uint32_t)(ECX));
  /* 10822447 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822449 push ebx */
  push32((uint32_t)(EBX));
  /* 1082244a call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10822450u);
  /* 10822450 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822452 call dword ptr [0x108270f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f8))), 0x10822458u);
  /* 10822458 push ebx */
  push32((uint32_t)(EBX));
  /* 10822459 push 0x10828b40 */
  push32((uint32_t)(0x10828b40u));
  /* 1082245e call esi */
  call_ind((uint32_t)(ESI), 0x10822460u);
  /* 10822460 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822462 call dword ptr [0x10827140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827140))), 0x10822468u);
  /* 10822468 push ebx */
  push32((uint32_t)(EBX));
  /* 10822469 push 0x10828ea0 */
  push32((uint32_t)(0x10828ea0u));
  /* 1082246e push 4 */
  push32((uint32_t)(0x4u));
  /* 10822470 push 0x10828d18 */
  push32((uint32_t)(0x10828d18u));
  /* 10822475 push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 1082247a push 0x10828b60 */
  push32((uint32_t)(0x10828b60u));
  /* 1082247f call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10822485u);
  /* 10822485 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822488:;
  /* 10822488 push 8 */
  push32((uint32_t)(0x8u));
  /* 1082248a call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822490u);
  /* 10822490 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822492 pop ecx */
  ECX = (pop32());
  /* 10822493 je 0x108224ba */
  if (C.zf) goto L_108224ba;
  /* 10822495 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 1082249a push 0x10828c78 */
  push32((uint32_t)(0x10828c78u));
  /* 1082249f call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x108224a5u);
  /* 108224a5 pop ecx */
  ECX = (pop32());
  /* 108224a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108224a8 pop ecx */
  ECX = (pop32());
  /* 108224a9 jle 0x108224ba */
  if ((C.zf||C.sf!=C.of)) goto L_108224ba;
  /* 108224ab push ebx */
  push32((uint32_t)(EBX));
  /* 108224ac push 8 */
  push32((uint32_t)(0x8u));
  /* 108224ae call ebp */
  call_ind((uint32_t)(EBP), 0x108224b0u);
  /* 108224b0 push 0x10828600 */
  push32((uint32_t)(0x10828600u));
  /* 108224b5 call edi */
  call_ind((uint32_t)(EDI), 0x108224b7u);
  /* 108224b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108224ba:;
  /* 108224ba push 0x37 */
  push32((uint32_t)(0x37u));
  /* 108224bc call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108224c2u);
  /* 108224c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108224c4 pop ecx */
  ECX = (pop32());
  /* 108224c5 je 0x10822527 */
  if (C.zf) goto L_10822527;
  /* 108224c7 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 108224cc push 0x10828ea8 */
  push32((uint32_t)(0x10828ea8u));
  /* 108224d1 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x108224d7u);
  /* 108224d7 pop ecx */
  ECX = (pop32());
  /* 108224d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108224da pop ecx */
  ECX = (pop32());
  /* 108224db jle 0x10822527 */
  if ((C.zf||C.sf!=C.of)) goto L_10822527;
  /* 108224dd push ebx */
  push32((uint32_t)(EBX));
  /* 108224de push 0x37 */
  push32((uint32_t)(0x37u));
  /* 108224e0 call ebp */
  call_ind((uint32_t)(EBP), 0x108224e2u);
  /* 108224e2 push 0x108285f8 */
  push32((uint32_t)(0x108285f8u));
  /* 108224e7 call edi */
  call_ind((uint32_t)(EDI), 0x108224e9u);
  /* 108224e9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108224eb push 0x10828eb0 */
  push32((uint32_t)(0x10828eb0u));
  /* 108224f0 push 5 */
  push32((uint32_t)(0x5u));
  /* 108224f2 push 0x10828ae0 */
  push32((uint32_t)(0x10828ae0u));
  /* 108224f7 push 0x10828cf0 */
  push32((uint32_t)(0x10828cf0u));
  /* 108224fc push 0x10828ca0 */
  push32((uint32_t)(0x10828ca0u));
  /* 10822501 call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10822507u);
  /* 10822507 push ebx */
  push32((uint32_t)(EBX));
  /* 10822508 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082250eu);
  /* 1082250e imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10822514 mov ecx, 0x259 */
  ECX = (0x259u);
  /* 10822519 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082251b push ecx */
  push32((uint32_t)(ECX));
  /* 1082251c push 9 */
  push32((uint32_t)(0x9u));
  /* 1082251e call dword ptr [0x10827144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827144))), 0x10822524u);
  /* 10822524 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822527:;
  /* 10822527 push 9 */
  push32((uint32_t)(0x9u));
  /* 10822529 call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x1082252fu);
  /* 1082252f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822531 pop ecx */
  ECX = (pop32());
  /* 10822532 je 0x1082254c */
  if (C.zf) goto L_1082254c;
  /* 10822534 push ebx */
  push32((uint32_t)(EBX));
  /* 10822535 push 0x10828ca0 */
  push32((uint32_t)(0x10828ca0u));
  /* 1082253a call esi */
  call_ind((uint32_t)(ESI), 0x1082253cu);
  /* 1082253c push 0x10828c98 */
  push32((uint32_t)(0x10828c98u));
  /* 10822541 push 5 */
  push32((uint32_t)(0x5u));
  /* 10822543 call dword ptr [0x10827134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827134))), 0x10822549u);
  /* 10822549 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082254c:;
  /* 1082254c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1082254e call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822554u);
  /* 10822554 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822556 pop ecx */
  ECX = (pop32());
  /* 10822557 je 0x1082267d */
  if (C.zf) goto L_1082267d;
  /* 1082255d push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1082255f call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822565u);
  /* 10822565 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822567 pop ecx */
  ECX = (pop32());
  /* 10822568 jne 0x1082267d */
  if (!C.zf) goto L_1082267d;
  /* 1082256e push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822573 push 0x10828ea8 */
  push32((uint32_t)(0x10828ea8u));
  /* 10822578 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x1082257eu);
  /* 1082257e pop ecx */
  ECX = (pop32());
  /* 1082257f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822581 pop ecx */
  ECX = (pop32());
  /* 10822582 jle 0x1082267d */
  if ((C.zf||C.sf!=C.of)) goto L_1082267d;
  /* 10822588 push 0x10828b30 */
  push32((uint32_t)(0x10828b30u));
  /* 1082258d call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822593u);
  /* 10822593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822595 pop ecx */
  ECX = (pop32());
  /* 10822596 jle 0x1082263e */
  if ((C.zf||C.sf!=C.of)) goto L_1082263e;
  /* 1082259c push 0x10828c98 */
  push32((uint32_t)(0x10828c98u));
  /* 108225a1 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108225a7u);
  /* 108225a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108225a9 pop ecx */
  ECX = (pop32());
  /* 108225aa jle 0x1082263e */
  if ((C.zf||C.sf!=C.of)) goto L_1082263e;
  /* 108225b0 push 0x10828ca0 */
  push32((uint32_t)(0x10828ca0u));
  /* 108225b5 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108225bbu);
  /* 108225bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108225bd pop ecx */
  ECX = (pop32());
  /* 108225be jne 0x1082263e */
  if (!C.zf) goto L_1082263e;
  /* 108225c0 push ebx */
  push32((uint32_t)(EBX));
  /* 108225c1 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 108225c3 call ebp */
  call_ind((uint32_t)(EBP), 0x108225c5u);
  /* 108225c5 push 0x108285f0 */
  push32((uint32_t)(0x108285f0u));
  /* 108225ca call edi */
  call_ind((uint32_t)(EDI), 0x108225ccu);
  /* 108225cc push ebx */
  push32((uint32_t)(EBX));
  /* 108225cd push 0x10828b30 */
  push32((uint32_t)(0x10828b30u));
  /* 108225d2 call esi */
  call_ind((uint32_t)(ESI), 0x108225d4u);
  /* 108225d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108225d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 108225d8 call dword ptr [0x108270b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b0))), 0x108225deu);
  /* 108225de push 0x10828f00 */
  push32((uint32_t)(0x10828f00u));
  /* 108225e3 push ebx */
  push32((uint32_t)(EBX));
  /* 108225e4 push 0x10828c98 */
  push32((uint32_t)(0x10828c98u));
  /* 108225e9 call dword ptr [0x10827124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827124))), 0x108225efu);
  /* 108225ef mov ax, word ptr [0x10828f04] */
  AX = (r16((uint32_t)(0x10828f04)));
  /* 108225f5 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108225f8 cmp ax, word ptr [0x10828f06] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x10828f06))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 108225ff jae 0x1082267d */
  if (!C.cf) goto L_1082267d;
  /* 10822601 push ebx */
  push32((uint32_t)(EBX));
  /* 10822602 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10822604 call ebp */
  call_ind((uint32_t)(EBP), 0x10822606u);
  /* 10822606 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10822608 push 0x10828eb8 */
  push32((uint32_t)(0x10828eb8u));
  /* 1082260d push 4 */
  push32((uint32_t)(0x4u));
  /* 1082260f push 0x10828cd8 */
  push32((uint32_t)(0x10828cd8u));
  /* 10822614 push 0x10828ae8 */
  push32((uint32_t)(0x10828ae8u));
  /* 10822619 push 0x10828ca8 */
  push32((uint32_t)(0x10828ca8u));
  /* 1082261e call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10822624u);
  /* 10822624 push ebx */
  push32((uint32_t)(EBX));
  /* 10822625 push 0x10828ca8 */
  push32((uint32_t)(0x10828ca8u));
  /* 1082262a call esi */
  call_ind((uint32_t)(ESI), 0x1082262cu);
  /* 1082262c push 0x10828c98 */
  push32((uint32_t)(0x10828c98u));
  /* 10822631 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822633 call dword ptr [0x1082714c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082714c))), 0x10822639u);
  /* 10822639 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082263c jmp 0x1082267d */
  goto L_1082267d;
L_1082263e:;
  /* 1082263e push 0x10828b30 */
  push32((uint32_t)(0x10828b30u));
  /* 10822643 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822649u);
  /* 10822649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082264b pop ecx */
  ECX = (pop32());
  /* 1082264c jle 0x1082267d */
  if ((C.zf||C.sf!=C.of)) goto L_1082267d;
  /* 1082264e push 0x10828c98 */
  push32((uint32_t)(0x10828c98u));
  /* 10822653 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822659u);
  /* 10822659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082265b pop ecx */
  ECX = (pop32());
  /* 1082265c jne 0x1082267d */
  if (!C.zf) goto L_1082267d;
  /* 1082265e push 0x10828ca0 */
  push32((uint32_t)(0x10828ca0u));
  /* 10822663 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822669u);
  /* 10822669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082266b pop ecx */
  ECX = (pop32());
  /* 1082266c jne 0x1082267d */
  if (!C.zf) goto L_1082267d;
  /* 1082266e push ebx */
  push32((uint32_t)(EBX));
  /* 1082266f push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10822671 call ebp */
  call_ind((uint32_t)(EBP), 0x10822673u);
  /* 10822673 push 0x108285e8 */
  push32((uint32_t)(0x108285e8u));
  /* 10822678 call edi */
  call_ind((uint32_t)(EDI), 0x1082267au);
  /* 1082267a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082267d:;
  /* 1082267d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1082267f call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822685u);
  /* 10822685 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822687 pop ecx */
  ECX = (pop32());
  /* 10822688 jne 0x108226d6 */
  if (!C.zf) goto L_108226d6;
  /* 1082268a push 0x10828f00 */
  push32((uint32_t)(0x10828f00u));
  /* 1082268f push ebx */
  push32((uint32_t)(EBX));
  /* 10822690 push 0x10828c98 */
  push32((uint32_t)(0x10828c98u));
  /* 10822695 call dword ptr [0x10827124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827124))), 0x1082269bu);
  /* 1082269b mov ax, word ptr [0x10828f04] */
  AX = (r16((uint32_t)(0x10828f04)));
  /* 108226a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108226a4 cmp ax, word ptr [0x10828f06] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x10828f06))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 108226ab jne 0x108226d6 */
  if (!C.zf) goto L_108226d6;
  /* 108226ad push 0x10828ca8 */
  push32((uint32_t)(0x10828ca8u));
  /* 108226b2 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108226b8u);
  /* 108226b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108226ba pop ecx */
  ECX = (pop32());
  /* 108226bb jle 0x108226d6 */
  if ((C.zf||C.sf!=C.of)) goto L_108226d6;
  /* 108226bd push 1 */
  push32((uint32_t)(0x1u));
  /* 108226bf push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 108226c1 call ebp */
  call_ind((uint32_t)(EBP), 0x108226c3u);
  /* 108226c3 push ebx */
  push32((uint32_t)(EBX));
  /* 108226c4 push 0x10828ca8 */
  push32((uint32_t)(0x10828ca8u));
  /* 108226c9 call esi */
  call_ind((uint32_t)(ESI), 0x108226cbu);
  /* 108226cb push 4 */
  push32((uint32_t)(0x4u));
  /* 108226cd call dword ptr [0x10827140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827140))), 0x108226d3u);
  /* 108226d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108226d6:;
  /* 108226d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 108226d8 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108226deu);
  /* 108226de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108226e0 pop ecx */
  ECX = (pop32());
  /* 108226e1 je 0x10822714 */
  if (C.zf) goto L_10822714;
  /* 108226e3 push ebx */
  push32((uint32_t)(EBX));
  /* 108226e4 push 0x10828c80 */
  push32((uint32_t)(0x10828c80u));
  /* 108226e9 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108226efu);
  /* 108226ef pop ecx */
  ECX = (pop32());
  /* 108226f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108226f2 pop ecx */
  ECX = (pop32());
  /* 108226f3 jle 0x10822714 */
  if ((C.zf||C.sf!=C.of)) goto L_10822714;
  /* 108226f5 push ebx */
  push32((uint32_t)(EBX));
  /* 108226f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 108226f8 call ebp */
  call_ind((uint32_t)(EBP), 0x108226fau);
  /* 108226fa push ebx */
  push32((uint32_t)(EBX));
  /* 108226fb push 0x10828cc0 */
  push32((uint32_t)(0x10828cc0u));
  /* 10822700 call esi */
  call_ind((uint32_t)(ESI), 0x10822702u);
  /* 10822702 push ebx */
  push32((uint32_t)(EBX));
  /* 10822703 push ebx */
  push32((uint32_t)(EBX));
  /* 10822704 push 0x10828ee8 */
  push32((uint32_t)(0x10828ee8u));
  /* 10822709 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082270b call dword ptr [0x1082713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082713c))), 0x10822711u);
  /* 10822711 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822714:;
  /* 10822714 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10822716 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x1082271cu);
  /* 1082271c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1082271e pop ecx */
  ECX = (pop32());
  /* 1082271f je 0x1082274f */
  if (C.zf) goto L_1082274f;
  /* 10822721 push 0x10828cc0 */
  push32((uint32_t)(0x10828cc0u));
  /* 10822726 push 0x10828ee8 */
  push32((uint32_t)(0x10828ee8u));
  /* 1082272b call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822731u);
  /* 10822731 pop ecx */
  ECX = (pop32());
  /* 10822732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822734 pop ecx */
  ECX = (pop32());
  /* 10822735 jle 0x1082274f */
  if ((C.zf||C.sf!=C.of)) goto L_1082274f;
  /* 10822737 push ebx */
  push32((uint32_t)(EBX));
  /* 10822738 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1082273a call ebp */
  call_ind((uint32_t)(EBP), 0x1082273cu);
  /* 1082273c push ebx */
  push32((uint32_t)(EBX));
  /* 1082273d push 0x10828cc0 */
  push32((uint32_t)(0x10828cc0u));
  /* 10822742 call esi */
  call_ind((uint32_t)(ESI), 0x10822744u);
  /* 10822744 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822746 call dword ptr [0x10827140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827140))), 0x1082274cu);
  /* 1082274c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082274f:;
  /* 1082274f push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10822751 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822757u);
  /* 10822757 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822759 pop ecx */
  ECX = (pop32());
  /* 1082275a je 0x108228b7 */
  if (C.zf) goto L_108228b7;
  /* 10822760 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822765 push 0x10828c80 */
  push32((uint32_t)(0x10828c80u));
  /* 1082276a call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822770u);
  /* 10822770 pop ecx */
  ECX = (pop32());
  /* 10822771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822773 pop ecx */
  ECX = (pop32());
  /* 10822774 jle 0x108228b7 */
  if ((C.zf||C.sf!=C.of)) goto L_108228b7;
  /* 1082277a push ebx */
  push32((uint32_t)(EBX));
  /* 1082277b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1082277d call ebp */
  call_ind((uint32_t)(EBP), 0x1082277fu);
  /* 1082277f push 0x108285d4 */
  push32((uint32_t)(0x108285d4u));
  /* 10822784 push ebx */
  push32((uint32_t)(EBX));
  /* 10822785 push 0x108285cc */
  push32((uint32_t)(0x108285ccu));
  /* 1082278a push 9 */
  push32((uint32_t)(0x9u));
  /* 1082278c call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x10822792u);
  /* 10822792 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822795 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822797 mov dword ptr [0x10828c88], eax */
  w32((uint32_t)(0x10828c88), (EAX));
  /* 1082279c je 0x10822843 */
  if (C.zf) goto L_10822843;
  /* 108227a2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108227a5 je 0x108227f7 */
  if (C.zf) goto L_108227f7;
  /* 108227a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108227aa push 0x108285b8 */
  push32((uint32_t)(0x108285b8u));
  /* 108227af push ebx */
  push32((uint32_t)(EBX));
  /* 108227b0 jne 0x108227b9 */
  if (!C.zf) goto L_108227b9;
  /* 108227b2 push 0x108285b0 */
  push32((uint32_t)(0x108285b0u));
  /* 108227b7 jmp 0x108227be */
  goto L_108227be;
L_108227b9:;
  /* 108227b9 push 0x108285a8 */
  push32((uint32_t)(0x108285a8u));
L_108227be:;
  /* 108227be push 9 */
  push32((uint32_t)(0x9u));
  /* 108227c0 call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x108227c6u);
  /* 108227c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108227c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108227cb mov dword ptr [0x10828c88], eax */
  w32((uint32_t)(0x10828c88), (EAX));
  /* 108227d0 je 0x10822832 */
  if (C.zf) goto L_10822832;
  /* 108227d2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108227d5 je 0x108227f7 */
  if (C.zf) goto L_108227f7;
  /* 108227d7 push 0x108285a0 */
  push32((uint32_t)(0x108285a0u));
  /* 108227dc call dword ptr [0x1082712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082712c))), 0x108227e2u);
  /* 108227e2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108227e4 pop ecx */
  ECX = (pop32());
  /* 108227e5 je 0x108228b7 */
  if (C.zf) goto L_108228b7;
  /* 108227eb mov dword ptr [0x10828f2c], 0x2bc */
  w32((uint32_t)(0x10828f2c), (0x2bcu));
  /* 108227f5 jmp 0x1082283c */
  goto L_1082283c;
L_108227f7:;
  /* 108227f7 push 0x10828598 */
  push32((uint32_t)(0x10828598u));
  /* 108227fc call edi */
  call_ind((uint32_t)(EDI), 0x108227feu);
  /* 108227fe push ebx */
  push32((uint32_t)(EBX));
  /* 108227ff push 0x10828cb8 */
  push32((uint32_t)(0x10828cb8u));
  /* 10822804 call esi */
  call_ind((uint32_t)(ESI), 0x10822806u);
  /* 10822806 push 3 */
  push32((uint32_t)(0x3u));
  /* 10822808 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082280a call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10822810u);
  /* 10822810 push ebx */
  push32((uint32_t)(EBX));
  /* 10822811 push 0x10828cb8 */
  push32((uint32_t)(0x10828cb8u));
  /* 10822816 call esi */
  call_ind((uint32_t)(ESI), 0x10822818u);
  /* 10822818 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 1082281d push 3 */
  push32((uint32_t)(0x3u));
  /* 1082281f call dword ptr [0x10827134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827134))), 0x10822825u);
  /* 10822825 push ebx */
  push32((uint32_t)(EBX));
  /* 10822826 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10822828 call ebp */
  call_ind((uint32_t)(EBP), 0x1082282au);
  /* 1082282a add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082282d jmp 0x108228b7 */
  goto L_108228b7;
L_10822832:;
  /* 10822832 mov dword ptr [0x10828f2c], 0x190 */
  w32((uint32_t)(0x10828f2c), (0x190u));
L_1082283c:;
  /* 1082283c push 0x10828590 */
  push32((uint32_t)(0x10828590u));
  /* 10822841 jmp 0x10822848 */
  goto L_10822848;
L_10822843:;
  /* 10822843 push 0x10828588 */
  push32((uint32_t)(0x10828588u));
L_10822848:;
  /* 10822848 call edi */
  call_ind((uint32_t)(EDI), 0x1082284au);
  /* 1082284a push ebx */
  push32((uint32_t)(EBX));
  /* 1082284b push 0x10828cb8 */
  push32((uint32_t)(0x10828cb8u));
  /* 10822850 call esi */
  call_ind((uint32_t)(ESI), 0x10822852u);
  /* 10822852 push ebx */
  push32((uint32_t)(EBX));
  /* 10822853 push ebx */
  push32((uint32_t)(EBX));
  /* 10822854 push 0x10828ec0 */
  push32((uint32_t)(0x10828ec0u));
  /* 10822859 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082285b call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x10822861u);
  /* 10822861 push 2 */
  push32((uint32_t)(0x2u));
  /* 10822863 push ebx */
  push32((uint32_t)(EBX));
  /* 10822864 push 0x10828c48 */
  push32((uint32_t)(0x10828c48u));
  /* 10822869 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082286b call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x10822871u);
  /* 10822871 push 2 */
  push32((uint32_t)(0x2u));
  /* 10822873 push ebx */
  push32((uint32_t)(EBX));
  /* 10822874 push 0x10828ec8 */
  push32((uint32_t)(0x10828ec8u));
  /* 10822879 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082287b call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x10822881u);
  /* 10822881 push 2 */
  push32((uint32_t)(0x2u));
  /* 10822883 push ebx */
  push32((uint32_t)(EBX));
  /* 10822884 push 0x10828ed0 */
  push32((uint32_t)(0x10828ed0u));
  /* 10822889 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082288b call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x10822891u);
  /* 10822891 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822894 push 2 */
  push32((uint32_t)(0x2u));
  /* 10822896 push ebx */
  push32((uint32_t)(EBX));
  /* 10822897 push 0x10828ed8 */
  push32((uint32_t)(0x10828ed8u));
  /* 1082289c push 4 */
  push32((uint32_t)(0x4u));
  /* 1082289e call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x108228a4u);
  /* 108228a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 108228a6 push ebx */
  push32((uint32_t)(EBX));
  /* 108228a7 push 0x10828ee0 */
  push32((uint32_t)(0x10828ee0u));
  /* 108228ac push 4 */
  push32((uint32_t)(0x4u));
  /* 108228ae call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x108228b4u);
  /* 108228b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108228b7:;
  /* 108228b7 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 108228b9 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108228bfu);
  /* 108228bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108228c1 pop ecx */
  ECX = (pop32());
  /* 108228c2 je 0x108229bb */
  if (C.zf) goto L_108229bb;
  /* 108228c8 push 0x10828b38 */
  push32((uint32_t)(0x10828b38u));
  /* 108228cd push 0x10828ee0 */
  push32((uint32_t)(0x10828ee0u));
  /* 108228d2 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x108228d8u);
  /* 108228d8 pop ecx */
  ECX = (pop32());
  /* 108228d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108228db pop ecx */
  ECX = (pop32());
  /* 108228dc jle 0x108229bb */
  if ((C.zf||C.sf!=C.of)) goto L_108229bb;
  /* 108228e2 push 0x10828cb0 */
  push32((uint32_t)(0x10828cb0u));
  /* 108228e7 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108228edu);
  /* 108228ed mov dword ptr [esp], 0x10828cb0 */
  w32((uint32_t)(ESP), (0x10828cb0u));
  /* 108228f4 push 0x10828ee0 */
  push32((uint32_t)(0x10828ee0u));
  /* 108228f9 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 108228fd call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822903u);
  /* 10822903 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822907 pop ecx */
  ECX = (pop32());
  /* 10822908 pop ecx */
  ECX = (pop32());
  /* 10822909 jne 0x108229bb */
  if (!C.zf) goto L_108229bb;
  /* 1082290f push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822914 push 0x10828ee0 */
  push32((uint32_t)(0x10828ee0u));
  /* 10822919 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x1082291fu);
  /* 1082291f pop ecx */
  ECX = (pop32());
  /* 10822920 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822922 pop ecx */
  ECX = (pop32());
  /* 10822923 jle 0x108229bb */
  if ((C.zf||C.sf!=C.of)) goto L_108229bb;
  /* 10822929 push ebx */
  push32((uint32_t)(EBX));
  /* 1082292a push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1082292c call ebp */
  call_ind((uint32_t)(EBP), 0x1082292eu);
  /* 1082292e push 0x10828cb0 */
  push32((uint32_t)(0x10828cb0u));
  /* 10822933 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822939u);
  /* 10822939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082293c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082293e jne 0x10822947 */
  if (!C.zf) goto L_10822947;
  /* 10822940 push 0x10828580 */
  push32((uint32_t)(0x10828580u));
  /* 10822945 jmp 0x10822965 */
  goto L_10822965;
L_10822947:;
  /* 10822947 push 0x10828cb0 */
  push32((uint32_t)(0x10828cb0u));
  /* 1082294c call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822952u);
  /* 10822952 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822955 pop ecx */
  ECX = (pop32());
  /* 10822956 jne 0x10822979 */
  if (!C.zf) goto L_10822979;
  /* 10822958 cmp dword ptr [0x10828f2c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10828f2c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082295e jne 0x1082296a */
  if (!C.zf) goto L_1082296a;
  /* 10822960 push 0x10828578 */
  push32((uint32_t)(0x10828578u));
L_10822965:;
  /* 10822965 call edi */
  call_ind((uint32_t)(EDI), 0x10822967u);
  /* 10822967 pop ecx */
  ECX = (pop32());
  /* 10822968 jmp 0x108229bb */
  goto L_108229bb;
L_1082296a:;
  /* 1082296a push 0x10828570 */
  push32((uint32_t)(0x10828570u));
  /* 1082296f call edi */
  call_ind((uint32_t)(EDI), 0x10822971u);
  /* 10822971 push dword ptr [0x10828f2c] */
  push32((uint32_t)(r32((uint32_t)(0x10828f2c))));
  /* 10822977 jmp 0x108229af */
  goto L_108229af;
L_10822979:;
  /* 10822979 cmp dword ptr [0x10828f2c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10828f2c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082297f jne 0x10822988 */
  if (!C.zf) goto L_10822988;
  /* 10822981 push 0x10828568 */
  push32((uint32_t)(0x10828568u));
  /* 10822986 jmp 0x10822965 */
  goto L_10822965;
L_10822988:;
  /* 10822988 push 0x10828558 */
  push32((uint32_t)(0x10828558u));
  /* 1082298d push ebx */
  push32((uint32_t)(EBX));
  /* 1082298e push 0x10828550 */
  push32((uint32_t)(0x10828550u));
  /* 10822993 push 9 */
  push32((uint32_t)(0x9u));
  /* 10822995 call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x1082299bu);
  /* 1082299b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082299e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108229a1 jne 0x108229bb */
  if (!C.zf) goto L_108229bb;
  /* 108229a3 push 0x10828548 */
  push32((uint32_t)(0x10828548u));
  /* 108229a8 call edi */
  call_ind((uint32_t)(EDI), 0x108229aau);
  /* 108229aa push 0xc8 */
  push32((uint32_t)(0xc8u));
L_108229af:;
  /* 108229af push 1 */
  push32((uint32_t)(0x1u));
  /* 108229b1 push ebx */
  push32((uint32_t)(EBX));
  /* 108229b2 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108229b8u);
  /* 108229b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108229bb:;
  /* 108229bb push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 108229bd call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108229c3u);
  /* 108229c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108229c5 pop ecx */
  ECX = (pop32());
  /* 108229c6 je 0x10822a44 */
  if (C.zf) goto L_10822a44;
  /* 108229c8 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 108229ca call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108229d0u);
  /* 108229d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108229d2 pop ecx */
  ECX = (pop32());
  /* 108229d3 jne 0x10822a44 */
  if (!C.zf) goto L_10822a44;
  /* 108229d5 push 0x10828cb0 */
  push32((uint32_t)(0x10828cb0u));
  /* 108229da call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108229e0u);
  /* 108229e0 mov dword ptr [esp], 0x10828cb0 */
  w32((uint32_t)(ESP), (0x10828cb0u));
  /* 108229e7 push 0x10828ef0 */
  push32((uint32_t)(0x10828ef0u));
  /* 108229ec mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 108229f0 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x108229f6u);
  /* 108229f6 cmp eax, dword ptr [esp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108229fa pop ecx */
  ECX = (pop32());
  /* 108229fb pop ecx */
  ECX = (pop32());
  /* 108229fc jne 0x10822a44 */
  if (!C.zf) goto L_10822a44;
  /* 108229fe push 0x10828cb0 */
  push32((uint32_t)(0x10828cb0u));
  /* 10822a03 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822a09u);
  /* 10822a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822a0b pop ecx */
  ECX = (pop32());
  /* 10822a0c jle 0x10822a44 */
  if ((C.zf||C.sf!=C.of)) goto L_10822a44;
  /* 10822a0e push ebx */
  push32((uint32_t)(EBX));
  /* 10822a0f push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10822a11 call ebp */
  call_ind((uint32_t)(EBP), 0x10822a13u);
  /* 10822a13 push 0x10828540 */
  push32((uint32_t)(0x10828540u));
  /* 10822a18 call edi */
  call_ind((uint32_t)(EDI), 0x10822a1au);
  /* 10822a1a push 0x10828cb0 */
  push32((uint32_t)(0x10828cb0u));
  /* 10822a1f call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822a25u);
  /* 10822a25 imul eax, eax, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x32u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10822a28 push eax */
  push32((uint32_t)(EAX));
  /* 10822a29 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822a2b push ebx */
  push32((uint32_t)(EBX));
  /* 10822a2c call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10822a32u);
  /* 10822a32 push ebx */
  push32((uint32_t)(EBX));
  /* 10822a33 push 0x10828cb0 */
  push32((uint32_t)(0x10828cb0u));
  /* 10822a38 call esi */
  call_ind((uint32_t)(ESI), 0x10822a3au);
  /* 10822a3a push ebx */
  push32((uint32_t)(EBX));
  /* 10822a3b call dword ptr [0x10827140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827140))), 0x10822a41u);
  /* 10822a41 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822a44:;
  /* 10822a44 push 0xa */
  push32((uint32_t)(0xau));
  /* 10822a46 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822a4cu);
  /* 10822a4c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822a4e pop ecx */
  ECX = (pop32());
  /* 10822a4f je 0x10822a63 */
  if (C.zf) goto L_10822a63;
  /* 10822a51 push ebx */
  push32((uint32_t)(EBX));
  /* 10822a52 push 0x10828d20 */
  push32((uint32_t)(0x10828d20u));
  /* 10822a57 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822a5du);
  /* 10822a5d pop ecx */
  ECX = (pop32());
  /* 10822a5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822a60 pop ecx */
  ECX = (pop32());
  /* 10822a61 jg 0x10822a76 */
  if ((!C.zf&&C.sf==C.of)) goto L_10822a76;
L_10822a63:;
  /* 10822a63 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822a65 push 0x10828d20 */
  push32((uint32_t)(0x10828d20u));
  /* 10822a6a call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822a70u);
  /* 10822a70 pop ecx */
  ECX = (pop32());
  /* 10822a71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822a73 pop ecx */
  ECX = (pop32());
  /* 10822a74 jle 0x10822a8a */
  if ((C.zf||C.sf!=C.of)) goto L_10822a8a;
L_10822a76:;
  /* 10822a76 push ebx */
  push32((uint32_t)(EBX));
  /* 10822a77 push 0x10828b68 */
  push32((uint32_t)(0x10828b68u));
  /* 10822a7c call esi */
  call_ind((uint32_t)(ESI), 0x10822a7eu);
  /* 10822a7e push ebx */
  push32((uint32_t)(EBX));
  /* 10822a7f push 5 */
  push32((uint32_t)(0x5u));
  /* 10822a81 call dword ptr [0x10827150] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827150))), 0x10822a87u);
  /* 10822a87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822a8a:;
  /* 10822a8a push 0xb */
  push32((uint32_t)(0xbu));
  /* 10822a8c call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822a92u);
  /* 10822a92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822a94 pop ecx */
  ECX = (pop32());
  /* 10822a95 je 0x10822abd */
  if (C.zf) goto L_10822abd;
  /* 10822a97 push ebx */
  push32((uint32_t)(EBX));
  /* 10822a98 push 0x10828d30 */
  push32((uint32_t)(0x10828d30u));
  /* 10822a9d call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822aa3u);
  /* 10822aa3 pop ecx */
  ECX = (pop32());
  /* 10822aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822aa6 pop ecx */
  ECX = (pop32());
  /* 10822aa7 jle 0x10822abd */
  if ((C.zf||C.sf!=C.of)) goto L_10822abd;
  /* 10822aa9 push ebx */
  push32((uint32_t)(EBX));
  /* 10822aaa push 0x10828d28 */
  push32((uint32_t)(0x10828d28u));
  /* 10822aaf call esi */
  call_ind((uint32_t)(ESI), 0x10822ab1u);
  /* 10822ab1 push ebx */
  push32((uint32_t)(EBX));
  /* 10822ab2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10822ab4 call dword ptr [0x10827150] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827150))), 0x10822abau);
  /* 10822aba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822abd:;
  /* 10822abd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10822abf call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822ac5u);
  /* 10822ac5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822ac7 pop ecx */
  ECX = (pop32());
  /* 10822ac8 je 0x10822b12 */
  if (C.zf) goto L_10822b12;
  /* 10822aca push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822acf push 0x10828d38 */
  push32((uint32_t)(0x10828d38u));
  /* 10822ad4 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822adau);
  /* 10822ada pop ecx */
  ECX = (pop32());
  /* 10822adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822add pop ecx */
  ECX = (pop32());
  /* 10822ade jle 0x10822b12 */
  if ((C.zf||C.sf!=C.of)) goto L_10822b12;
  /* 10822ae0 push 0x10828b80 */
  push32((uint32_t)(0x10828b80u));
  /* 10822ae5 push 0x10828d38 */
  push32((uint32_t)(0x10828d38u));
  /* 10822aea call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822af0u);
  /* 10822af0 pop ecx */
  ECX = (pop32());
  /* 10822af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822af3 pop ecx */
  ECX = (pop32());
  /* 10822af4 jle 0x10822b12 */
  if ((C.zf||C.sf!=C.of)) goto L_10822b12;
  /* 10822af6 push ebx */
  push32((uint32_t)(EBX));
  /* 10822af7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10822af9 call ebp */
  call_ind((uint32_t)(EBP), 0x10822afbu);
  /* 10822afb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10822afd call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822b03u);
  /* 10822b03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822b06 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822b08 je 0x10822b12 */
  if (C.zf) goto L_10822b12;
  /* 10822b0a push 0x10828538 */
  push32((uint32_t)(0x10828538u));
  /* 10822b0f call edi */
  call_ind((uint32_t)(EDI), 0x10822b11u);
  /* 10822b11 pop ecx */
  ECX = (pop32());
L_10822b12:;
  /* 10822b12 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10822b14 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822b1au);
  /* 10822b1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822b1c pop ecx */
  ECX = (pop32());
  /* 10822b1d je 0x10822b6b */
  if (C.zf) goto L_10822b6b;
  /* 10822b1f push ebx */
  push32((uint32_t)(EBX));
  /* 10822b20 push 0x10828b70 */
  push32((uint32_t)(0x10828b70u));
  /* 10822b25 call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10822b2bu);
  /* 10822b2b pop ecx */
  ECX = (pop32());
  /* 10822b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822b2e pop ecx */
  ECX = (pop32());
  /* 10822b2f jle 0x10822b6b */
  if ((C.zf||C.sf!=C.of)) goto L_10822b6b;
  /* 10822b31 push 5 */
  push32((uint32_t)(0x5u));
  /* 10822b33 push 0x10828d30 */
  push32((uint32_t)(0x10828d30u));
  /* 10822b38 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822b3eu);
  /* 10822b3e pop ecx */
  ECX = (pop32());
  /* 10822b3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822b41 pop ecx */
  ECX = (pop32());
  /* 10822b42 jne 0x10822b6b */
  if (!C.zf) goto L_10822b6b;
  /* 10822b44 push ebx */
  push32((uint32_t)(EBX));
  /* 10822b45 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10822b47 call ebp */
  call_ind((uint32_t)(EBP), 0x10822b49u);
  /* 10822b49 push 0x1082852c */
  push32((uint32_t)(0x1082852cu));
  /* 10822b4e call edi */
  call_ind((uint32_t)(EDI), 0x10822b50u);
  /* 10822b50 push ebx */
  push32((uint32_t)(EBX));
  /* 10822b51 call dword ptr [0x108270f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f8))), 0x10822b57u);
  /* 10822b57 push ebx */
  push32((uint32_t)(EBX));
  /* 10822b58 push 0x10828b70 */
  push32((uint32_t)(0x10828b70u));
  /* 10822b5d call esi */
  call_ind((uint32_t)(ESI), 0x10822b5fu);
  /* 10822b5f push 4 */
  push32((uint32_t)(0x4u));
  /* 10822b61 push ebx */
  push32((uint32_t)(EBX));
  /* 10822b62 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10822b68u);
  /* 10822b68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822b6b:;
  /* 10822b6b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10822b6d call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822b73u);
  /* 10822b73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822b75 pop ecx */
  ECX = (pop32());
  /* 10822b76 je 0x10822bdd */
  if (C.zf) goto L_10822bdd;
  /* 10822b78 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10822b7a call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822b80u);
  /* 10822b80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822b82 pop ecx */
  ECX = (pop32());
  /* 10822b83 jne 0x10822bdd */
  if (!C.zf) goto L_10822bdd;
  /* 10822b85 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822b8a push 0x10828d38 */
  push32((uint32_t)(0x10828d38u));
  /* 10822b8f call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822b95u);
  /* 10822b95 pop ecx */
  ECX = (pop32());
  /* 10822b96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822b98 pop ecx */
  ECX = (pop32());
  /* 10822b99 jle 0x10822bdd */
  if ((C.zf||C.sf!=C.of)) goto L_10822bdd;
  /* 10822b9b push 0x10828b80 */
  push32((uint32_t)(0x10828b80u));
  /* 10822ba0 push 0x10828d38 */
  push32((uint32_t)(0x10828d38u));
  /* 10822ba5 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822babu);
  /* 10822bab pop ecx */
  ECX = (pop32());
  /* 10822bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822bae pop ecx */
  ECX = (pop32());
  /* 10822baf jle 0x10822bdd */
  if ((C.zf||C.sf!=C.of)) goto L_10822bdd;
  /* 10822bb1 push ebx */
  push32((uint32_t)(EBX));
  /* 10822bb2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10822bb4 call ebp */
  call_ind((uint32_t)(EBP), 0x10822bb6u);
  /* 10822bb6 push 0x10828520 */
  push32((uint32_t)(0x10828520u));
  /* 10822bbb call edi */
  call_ind((uint32_t)(EDI), 0x10822bbdu);
  /* 10822bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10822bbf call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10822bc5u);
  /* 10822bc5 push 7 */
  push32((uint32_t)(0x7u));
  /* 10822bc7 pop ecx */
  ECX = (pop32());
  /* 10822bc8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10822bca imul ecx, ecx, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xc8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10822bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10822bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822bd3 push ebx */
  push32((uint32_t)(EBX));
  /* 10822bd4 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10822bdau);
  /* 10822bda add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822bdd:;
  /* 10822bdd push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10822bdf call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822be5u);
  /* 10822be5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822be7 pop ecx */
  ECX = (pop32());
  /* 10822be8 jne 0x10822c39 */
  if (!C.zf) goto L_10822c39;
  /* 10822bea push 5 */
  push32((uint32_t)(0x5u));
  /* 10822bec push 0x10828b70 */
  push32((uint32_t)(0x10828b70u));
  /* 10822bf1 call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10822bf7u);
  /* 10822bf7 pop ecx */
  ECX = (pop32());
  /* 10822bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822bfa pop ecx */
  ECX = (pop32());
  /* 10822bfb jle 0x10822c39 */
  if ((C.zf||C.sf!=C.of)) goto L_10822c39;
  /* 10822bfd push 5 */
  push32((uint32_t)(0x5u));
  /* 10822bff call dword ptr [0x108270f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f8))), 0x10822c05u);
  /* 10822c05 push ebx */
  push32((uint32_t)(EBX));
  /* 10822c06 push 0x10828b70 */
  push32((uint32_t)(0x10828b70u));
  /* 10822c0b push 5 */
  push32((uint32_t)(0x5u));
  /* 10822c0d call dword ptr [0x108270fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270fc))), 0x10822c13u);
  /* 10822c13 push 5 */
  push32((uint32_t)(0x5u));
  /* 10822c15 call dword ptr [0x108270c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c0))), 0x10822c1bu);
  /* 10822c1b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10822c1d call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822c23u);
  /* 10822c23 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822c26 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822c28 je 0x10822c39 */
  if (C.zf) goto L_10822c39;
  /* 10822c2a push ebx */
  push32((uint32_t)(EBX));
  /* 10822c2b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10822c2d call ebp */
  call_ind((uint32_t)(EBP), 0x10822c2fu);
  /* 10822c2f push 0x10828514 */
  push32((uint32_t)(0x10828514u));
  /* 10822c34 call edi */
  call_ind((uint32_t)(EDI), 0x10822c36u);
  /* 10822c36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822c39:;
  /* 10822c39 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10822c3b call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822c41u);
  /* 10822c41 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822c43 pop ecx */
  ECX = (pop32());
  /* 10822c44 je 0x10822c70 */
  if (C.zf) goto L_10822c70;
  /* 10822c46 push ebx */
  push32((uint32_t)(EBX));
  /* 10822c47 push 0x10828f40 */
  push32((uint32_t)(0x10828f40u));
  /* 10822c4c call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822c52u);
  /* 10822c52 pop ecx */
  ECX = (pop32());
  /* 10822c53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822c55 pop ecx */
  ECX = (pop32());
  /* 10822c56 jle 0x10822c70 */
  if ((C.zf||C.sf!=C.of)) goto L_10822c70;
  /* 10822c58 push ebx */
  push32((uint32_t)(EBX));
  /* 10822c59 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10822c5b call ebp */
  call_ind((uint32_t)(EBP), 0x10822c5du);
  /* 10822c5d push ebx */
  push32((uint32_t)(EBX));
  /* 10822c5e push 0x10828da8 */
  push32((uint32_t)(0x10828da8u));
  /* 10822c63 call esi */
  call_ind((uint32_t)(ESI), 0x10822c65u);
  /* 10822c65 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822c67 call dword ptr [0x10827154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827154))), 0x10822c6du);
  /* 10822c6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822c70:;
  /* 10822c70 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10822c72 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822c78u);
  /* 10822c78 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822c7a pop ecx */
  ECX = (pop32());
  /* 10822c7b jne 0x10822ca8 */
  if (!C.zf) goto L_10822ca8;
  /* 10822c7d push ebx */
  push32((uint32_t)(EBX));
  /* 10822c7e push 0x10828f40 */
  push32((uint32_t)(0x10828f40u));
  /* 10822c83 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822c89u);
  /* 10822c89 pop ecx */
  ECX = (pop32());
  /* 10822c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822c8c pop ecx */
  ECX = (pop32());
  /* 10822c8d jne 0x10822ca8 */
  if (!C.zf) goto L_10822ca8;
  /* 10822c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10822c91 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10822c93 call ebp */
  call_ind((uint32_t)(EBP), 0x10822c95u);
  /* 10822c95 push ebx */
  push32((uint32_t)(EBX));
  /* 10822c96 push 0x10828da8 */
  push32((uint32_t)(0x10828da8u));
  /* 10822c9b call esi */
  call_ind((uint32_t)(ESI), 0x10822c9du);
  /* 10822c9d push 4 */
  push32((uint32_t)(0x4u));
  /* 10822c9f call dword ptr [0x10827158] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827158))), 0x10822ca5u);
  /* 10822ca5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822ca8:;
  /* 10822ca8 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10822caa call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822cb0u);
  /* 10822cb0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822cb2 pop ecx */
  ECX = (pop32());
  /* 10822cb3 je 0x10822cdf */
  if (C.zf) goto L_10822cdf;
  /* 10822cb5 push ebx */
  push32((uint32_t)(EBX));
  /* 10822cb6 push 0x10828f48 */
  push32((uint32_t)(0x10828f48u));
  /* 10822cbb call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822cc1u);
  /* 10822cc1 pop ecx */
  ECX = (pop32());
  /* 10822cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822cc4 pop ecx */
  ECX = (pop32());
  /* 10822cc5 jle 0x10822cdf */
  if ((C.zf||C.sf!=C.of)) goto L_10822cdf;
  /* 10822cc7 push ebx */
  push32((uint32_t)(EBX));
  /* 10822cc8 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10822cca call ebp */
  call_ind((uint32_t)(EBP), 0x10822cccu);
  /* 10822ccc push ebx */
  push32((uint32_t)(EBX));
  /* 10822ccd push 0x10828db0 */
  push32((uint32_t)(0x10828db0u));
  /* 10822cd2 call esi */
  call_ind((uint32_t)(ESI), 0x10822cd4u);
  /* 10822cd4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822cd6 call dword ptr [0x10827154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827154))), 0x10822cdcu);
  /* 10822cdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822cdf:;
  /* 10822cdf push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10822ce1 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822ce7u);
  /* 10822ce7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822ce9 pop ecx */
  ECX = (pop32());
  /* 10822cea jne 0x10822d17 */
  if (!C.zf) goto L_10822d17;
  /* 10822cec push ebx */
  push32((uint32_t)(EBX));
  /* 10822ced push 0x10828f48 */
  push32((uint32_t)(0x10828f48u));
  /* 10822cf2 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10822cf8u);
  /* 10822cf8 pop ecx */
  ECX = (pop32());
  /* 10822cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822cfb pop ecx */
  ECX = (pop32());
  /* 10822cfc jne 0x10822d17 */
  if (!C.zf) goto L_10822d17;
  /* 10822cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 10822d00 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10822d02 call ebp */
  call_ind((uint32_t)(EBP), 0x10822d04u);
  /* 10822d04 push ebx */
  push32((uint32_t)(EBX));
  /* 10822d05 push 0x10828db0 */
  push32((uint32_t)(0x10828db0u));
  /* 10822d0a call esi */
  call_ind((uint32_t)(ESI), 0x10822d0cu);
  /* 10822d0c push 4 */
  push32((uint32_t)(0x4u));
  /* 10822d0e call dword ptr [0x10827158] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827158))), 0x10822d14u);
  /* 10822d14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822d17:;
  /* 10822d17 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10822d19 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822d1fu);
  /* 10822d1f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822d21 pop ecx */
  ECX = (pop32());
  /* 10822d22 je 0x10822dbd */
  if (C.zf) goto L_10822dbd;
  /* 10822d28 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10822d2a call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822d30u);
  /* 10822d30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822d32 pop ecx */
  ECX = (pop32());
  /* 10822d33 jne 0x10822dbd */
  if (!C.zf) goto L_10822dbd;
  /* 10822d39 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822d3e push 0x10828d40 */
  push32((uint32_t)(0x10828d40u));
  /* 10822d43 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822d49u);
  /* 10822d49 pop ecx */
  ECX = (pop32());
  /* 10822d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822d4c pop ecx */
  ECX = (pop32());
  /* 10822d4d jle 0x10822dbd */
  if ((C.zf||C.sf!=C.of)) goto L_10822dbd;
  /* 10822d4f push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 10822d54 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822d5au);
  /* 10822d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822d5c pop ecx */
  ECX = (pop32());
  /* 10822d5d jle 0x10822dbd */
  if ((C.zf||C.sf!=C.of)) goto L_10822dbd;
  /* 10822d5f push ebx */
  push32((uint32_t)(EBX));
  /* 10822d60 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10822d62 call ebp */
  call_ind((uint32_t)(EBP), 0x10822d64u);
  /* 10822d64 push 0x10828508 */
  push32((uint32_t)(0x10828508u));
  /* 10822d69 call edi */
  call_ind((uint32_t)(EDI), 0x10822d6bu);
  /* 10822d6b push ebx */
  push32((uint32_t)(EBX));
  /* 10822d6c call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10822d72u);
  /* 10822d72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822d75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822d77 jne 0x10822da2 */
  if (!C.zf) goto L_10822da2;
  /* 10822d79 push 0x10828500 */
  push32((uint32_t)(0x10828500u));
  /* 10822d7e call edi */
  call_ind((uint32_t)(EDI), 0x10822d80u);
  /* 10822d80 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822d82 call dword ptr [0x1082715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082715c))), 0x10822d88u);
  /* 10822d88 push 2 */
  push32((uint32_t)(0x2u));
  /* 10822d8a call dword ptr [0x1082715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082715c))), 0x10822d90u);
  /* 10822d90 push 3 */
  push32((uint32_t)(0x3u));
  /* 10822d92 push 4 */
  push32((uint32_t)(0x4u));
  /* 10822d94 push 0x10828d80 */
  push32((uint32_t)(0x10828d80u));
  /* 10822d99 call dword ptr [0x108270bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270bc))), 0x10822d9fu);
  /* 10822d9f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822da2:;
  /* 10822da2 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10822da4 call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10822daau);
  /* 10822daa push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10822dac call dword ptr [0x10827160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827160))), 0x10822db2u);
  /* 10822db2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10822db4 call dword ptr [0x10827160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827160))), 0x10822dbau);
  /* 10822dba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822dbd:;
  /* 10822dbd push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10822dbf call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822dc5u);
  /* 10822dc5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822dc7 pop ecx */
  ECX = (pop32());
  /* 10822dc8 je 0x10822dff */
  if (C.zf) goto L_10822dff;
  /* 10822dca push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822dcf push 0x10828d40 */
  push32((uint32_t)(0x10828d40u));
  /* 10822dd4 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822ddau);
  /* 10822dda pop ecx */
  ECX = (pop32());
  /* 10822ddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822ddd pop ecx */
  ECX = (pop32());
  /* 10822dde jle 0x10822dff */
  if ((C.zf||C.sf!=C.of)) goto L_10822dff;
  /* 10822de0 push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 10822de5 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822debu);
  /* 10822deb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822ded pop ecx */
  ECX = (pop32());
  /* 10822dee jne 0x10822dff */
  if (!C.zf) goto L_10822dff;
  /* 10822df0 push ebx */
  push32((uint32_t)(EBX));
  /* 10822df1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10822df3 call ebp */
  call_ind((uint32_t)(EBP), 0x10822df5u);
  /* 10822df5 push 0x108284f4 */
  push32((uint32_t)(0x108284f4u));
  /* 10822dfa call edi */
  call_ind((uint32_t)(EDI), 0x10822dfcu);
  /* 10822dfc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822dff:;
  /* 10822dff push 0xd */
  push32((uint32_t)(0xdu));
  /* 10822e01 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822e07u);
  /* 10822e07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822e09 pop ecx */
  ECX = (pop32());
  /* 10822e0a je 0x10822e41 */
  if (C.zf) goto L_10822e41;
  /* 10822e0c push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822e11 push 0x10828d40 */
  push32((uint32_t)(0x10828d40u));
  /* 10822e16 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822e1cu);
  /* 10822e1c pop ecx */
  ECX = (pop32());
  /* 10822e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822e1f pop ecx */
  ECX = (pop32());
  /* 10822e20 jle 0x10822e41 */
  if ((C.zf||C.sf!=C.of)) goto L_10822e41;
  /* 10822e22 push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 10822e27 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822e2du);
  /* 10822e2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822e2f pop ecx */
  ECX = (pop32());
  /* 10822e30 jle 0x10822e41 */
  if ((C.zf||C.sf!=C.of)) goto L_10822e41;
  /* 10822e32 push ebx */
  push32((uint32_t)(EBX));
  /* 10822e33 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10822e35 call ebp */
  call_ind((uint32_t)(EBP), 0x10822e37u);
  /* 10822e37 push 0x108284ec */
  push32((uint32_t)(0x108284ecu));
  /* 10822e3c call edi */
  call_ind((uint32_t)(EDI), 0x10822e3eu);
  /* 10822e3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10822e41:;
  /* 10822e41 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10822e43 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822e49u);
  /* 10822e49 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822e4b pop ecx */
  ECX = (pop32());
  /* 10822e4c je 0x10822fe4 */
  if (C.zf) goto L_10822fe4;
  /* 10822e52 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822e57 push 0x10828d40 */
  push32((uint32_t)(0x10828d40u));
  /* 10822e5c call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10822e62u);
  /* 10822e62 pop ecx */
  ECX = (pop32());
  /* 10822e63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822e65 pop ecx */
  ECX = (pop32());
  /* 10822e66 jle 0x10822fe4 */
  if ((C.zf||C.sf!=C.of)) goto L_10822fe4;
  /* 10822e6c push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 10822e71 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822e77u);
  /* 10822e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822e79 pop ecx */
  ECX = (pop32());
  /* 10822e7a jle 0x10822fe4 */
  if ((C.zf||C.sf!=C.of)) goto L_10822fe4;
  /* 10822e80 push 0x10828d98 */
  push32((uint32_t)(0x10828d98u));
  /* 10822e85 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10822e8bu);
  /* 10822e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10822e8d pop ecx */
  ECX = (pop32());
  /* 10822e8e jle 0x10822fe4 */
  if ((C.zf||C.sf!=C.of)) goto L_10822fe4;
  /* 10822e94 push ebx */
  push32((uint32_t)(EBX));
  /* 10822e95 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10822e97 call ebp */
  call_ind((uint32_t)(EBP), 0x10822e99u);
  /* 10822e99 pop ecx */
  ECX = (pop32());
  /* 10822e9a mov byte ptr [0x10828f30], 1 */
  w8((uint32_t)(0x10828f30), (0x1u));
  /* 10822ea1 pop ecx */
  ECX = (pop32());
L_10822ea2:;
  /* 10822ea2 push 0x108284d0 */
  push32((uint32_t)(0x108284d0u));
  /* 10822ea7 push ebx */
  push32((uint32_t)(EBX));
  /* 10822ea8 push 0x108284c8 */
  push32((uint32_t)(0x108284c8u));
  /* 10822ead push 9 */
  push32((uint32_t)(0x9u));
  /* 10822eaf call dword ptr [0x10827118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827118))), 0x10822eb5u);
  /* 10822eb5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822eb8 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10822eba je 0x10822fa6 */
  if (C.zf) goto L_10822fa6;
  /* 10822ec0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10822ec1 je 0x10822f69 */
  if (C.zf) goto L_10822f69;
  /* 10822ec7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10822ec8 je 0x10822f2b */
  if (C.zf) goto L_10822f2b;
  /* 10822eca dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10822ecb je 0x10822ed8 */
  if (C.zf) goto L_10822ed8;
  /* 10822ecd mov byte ptr [0x10828f30], bl */
  w8((uint32_t)(0x10828f30), (BL));
  /* 10822ed3 jmp 0x10822fd2 */
  goto L_10822fd2;
L_10822ed8:;
  /* 10822ed8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822eda push ebx */
  push32((uint32_t)(EBX));
  /* 10822edb call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x10822ee1u);
  /* 10822ee1 pop ecx */
  ECX = (pop32());
  /* 10822ee2 cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822ee7 pop ecx */
  ECX = (pop32());
  /* 10822ee8 jl 0x10822f7b */
  if ((C.sf!=C.of)) goto L_10822f7b;
  /* 10822eee push 0xfffffed4 */
  push32((uint32_t)(0xfffffed4u));
  /* 10822ef3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822ef5 push ebx */
  push32((uint32_t)(EBX));
  /* 10822ef6 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10822efcu);
  /* 10822efc push 0x108284bc */
  push32((uint32_t)(0x108284bcu));
  /* 10822f01 call edi */
  call_ind((uint32_t)(EDI), 0x10822f03u);
  /* 10822f03 push 0x108284a0 */
  push32((uint32_t)(0x108284a0u));
  /* 10822f08 push 0x10828388 */
  push32((uint32_t)(0x10828388u));
  /* 10822f0d call dword ptr [0x108270e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e4))), 0x10822f13u);
  /* 10822f13 push 0x10828484 */
  push32((uint32_t)(0x10828484u));
L_10822f18:;
  /* 10822f18 push 0x10828388 */
  push32((uint32_t)(0x10828388u));
  /* 10822f1d call dword ptr [0x108270e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e4))), 0x10822f23u);
  /* 10822f23 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822f26 jmp 0x10822fd2 */
  goto L_10822fd2;
L_10822f2b:;
  /* 10822f2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10822f2d push ebx */
  push32((uint32_t)(EBX));
  /* 10822f2e call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x10822f34u);
  /* 10822f34 pop ecx */
  ECX = (pop32());
  /* 10822f35 cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822f3a pop ecx */
  ECX = (pop32());
  /* 10822f3b jl 0x10822f7b */
  if ((C.sf!=C.of)) goto L_10822f7b;
  /* 10822f3d push 0xfffffed4 */
  push32((uint32_t)(0xfffffed4u));
  /* 10822f42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822f44 push ebx */
  push32((uint32_t)(EBX));
  /* 10822f45 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10822f4bu);
  /* 10822f4b push 0x108284bc */
  push32((uint32_t)(0x108284bcu));
  /* 10822f50 call edi */
  call_ind((uint32_t)(EDI), 0x10822f52u);
  /* 10822f52 push 0x1082846c */
  push32((uint32_t)(0x1082846cu));
  /* 10822f57 push 0x10828388 */
  push32((uint32_t)(0x10828388u));
  /* 10822f5c call dword ptr [0x108270e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e4))), 0x10822f62u);
  /* 10822f62 push 0x10828454 */
  push32((uint32_t)(0x10828454u));
  /* 10822f67 jmp 0x10822f18 */
  goto L_10822f18;
L_10822f69:;
  /* 10822f69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822f6b push ebx */
  push32((uint32_t)(EBX));
  /* 10822f6c call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x10822f72u);
  /* 10822f72 pop ecx */
  ECX = (pop32());
  /* 10822f73 cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822f78 pop ecx */
  ECX = (pop32());
  /* 10822f79 jge 0x10822f85 */
  if ((C.sf==C.of)) goto L_10822f85;
L_10822f7b:;
  /* 10822f7b push 0x10828448 */
  push32((uint32_t)(0x10828448u));
  /* 10822f80 call edi */
  call_ind((uint32_t)(EDI), 0x10822f82u);
  /* 10822f82 pop ecx */
  ECX = (pop32());
  /* 10822f83 jmp 0x10822fd2 */
  goto L_10822fd2;
L_10822f85:;
  /* 10822f85 push 0x1082843c */
  push32((uint32_t)(0x1082843cu));
  /* 10822f8a call edi */
  call_ind((uint32_t)(EDI), 0x10822f8cu);
  /* 10822f8c push 0xffffff6a */
  push32((uint32_t)(0xffffff6au));
  /* 10822f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822f93 push ebx */
  push32((uint32_t)(EBX));
  /* 10822f94 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10822f9au);
  /* 10822f9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822f9d add dword ptr [0x10828cc8], 5 */
  { uint32_t _a=(r32((uint32_t)(0x10828cc8))),_b=(0x5u),_r=_a+_b; w32((uint32_t)(0x10828cc8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10822fa4 jmp 0x10822fd2 */
  goto L_10822fd2;
L_10822fa6:;
  /* 10822fa6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10822fa8 push ebx */
  push32((uint32_t)(EBX));
  /* 10822fa9 call dword ptr [0x10827104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827104))), 0x10822fafu);
  /* 10822faf pop ecx */
  ECX = (pop32());
  /* 10822fb0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10822fb3 pop ecx */
  ECX = (pop32());
  /* 10822fb4 jl 0x10822f7b */
  if ((C.sf!=C.of)) goto L_10822f7b;
  /* 10822fb6 push 0x1082843c */
  push32((uint32_t)(0x1082843cu));
  /* 10822fbb call edi */
  call_ind((uint32_t)(EDI), 0x10822fbdu);
  /* 10822fbd push -0x64 */
  push32((uint32_t)(0xffffff9cu));
  /* 10822fbf push 1 */
  push32((uint32_t)(0x1u));
  /* 10822fc1 push ebx */
  push32((uint32_t)(EBX));
  /* 10822fc2 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10822fc8u);
  /* 10822fc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10822fcb add dword ptr [0x10828ce0], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x10828ce0))),_b=(0xau),_r=_a+_b; w32((uint32_t)(0x10828ce0), (_r)); fl_add(_a,_b,_r,32); }
L_10822fd2:;
  /* 10822fd2 call dword ptr [0x10827164] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827164))), 0x10822fd8u);
  /* 10822fd8 cmp byte ptr [0x10828f30], bl */
  { uint32_t _a=(r8((uint32_t)(0x10828f30))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10822fde jne 0x10822ea2 */
  if (!C.zf) goto L_10822ea2;
L_10822fe4:;
  /* 10822fe4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10822fe6 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10822fecu);
  /* 10822fec test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10822fee pop ecx */
  ECX = (pop32());
  /* 10822fef jne 0x1082300f */
  if (!C.zf) goto L_1082300f;
  /* 10822ff1 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10822ff6 push 0x10828d40 */
  push32((uint32_t)(0x10828d40u));
  /* 10822ffb call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10823001u);
  /* 10823001 pop ecx */
  ECX = (pop32());
  /* 10823002 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823004 pop ecx */
  ECX = (pop32());
  /* 10823005 jne 0x1082300f */
  if (!C.zf) goto L_1082300f;
  /* 10823007 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823009 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1082300b call ebp */
  call_ind((uint32_t)(EBP), 0x1082300du);
  /* 1082300d pop ecx */
  ECX = (pop32());
  /* 1082300e pop ecx */
  ECX = (pop32());
L_1082300f:;
  /* 1082300f push 0xf */
  push32((uint32_t)(0xfu));
  /* 10823011 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823017u);
  /* 10823017 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823019 pop ecx */
  ECX = (pop32());
  /* 1082301a je 0x1082308c */
  if (C.zf) goto L_1082308c;
  /* 1082301c push ebx */
  push32((uint32_t)(EBX));
  /* 1082301d push 0x10828de0 */
  push32((uint32_t)(0x10828de0u));
  /* 10823022 call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10823028u);
  /* 10823028 pop ecx */
  ECX = (pop32());
  /* 10823029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082302b pop ecx */
  ECX = (pop32());
  /* 1082302c jle 0x1082308c */
  if ((C.zf||C.sf!=C.of)) goto L_1082308c;
  /* 1082302e push 5 */
  push32((uint32_t)(0x5u));
  /* 10823030 push 0x10828d60 */
  push32((uint32_t)(0x10828d60u));
  /* 10823035 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x1082303bu);
  /* 1082303b pop ecx */
  ECX = (pop32());
  /* 1082303c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082303e pop ecx */
  ECX = (pop32());
  /* 1082303f jne 0x1082308c */
  if (!C.zf) goto L_1082308c;
  /* 10823041 push ebx */
  push32((uint32_t)(EBX));
  /* 10823042 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10823044 call ebp */
  call_ind((uint32_t)(EBP), 0x10823046u);
  /* 10823046 push ebx */
  push32((uint32_t)(EBX));
  /* 10823047 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082304du);
  /* 1082304d push 7 */
  push32((uint32_t)(0x7u));
  /* 1082304f pop ecx */
  ECX = (pop32());
  /* 10823050 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823052 imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823055 push ecx */
  push32((uint32_t)(ECX));
  /* 10823056 push 0x10828434 */
  push32((uint32_t)(0x10828434u));
  /* 1082305b call dword ptr [0x10827168] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827168))), 0x10823061u);
  /* 10823061 push ebx */
  push32((uint32_t)(EBX));
  /* 10823062 push 0x10828de0 */
  push32((uint32_t)(0x10828de0u));
  /* 10823067 call esi */
  call_ind((uint32_t)(ESI), 0x10823069u);
  /* 10823069 push ebx */
  push32((uint32_t)(EBX));
  /* 1082306a call dword ptr [0x108270c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c0))), 0x10823070u);
  /* 10823070 push ebx */
  push32((uint32_t)(EBX));
  /* 10823071 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823077u);
  /* 10823077 push 7 */
  push32((uint32_t)(0x7u));
  /* 10823079 pop ecx */
  ECX = (pop32());
  /* 1082307a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082307c imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1082307f push ecx */
  push32((uint32_t)(ECX));
  /* 10823080 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823082 push ebx */
  push32((uint32_t)(EBX));
  /* 10823083 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10823089u);
  /* 10823089 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082308c:;
  /* 1082308c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1082308e call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823094u);
  /* 10823094 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823096 pop ecx */
  ECX = (pop32());
  /* 10823097 je 0x1082313c */
  if (C.zf) goto L_1082313c;
  /* 1082309d push ebx */
  push32((uint32_t)(EBX));
  /* 1082309e push 0x10828f68 */
  push32((uint32_t)(0x10828f68u));
  /* 108230a3 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108230a9u);
  /* 108230a9 pop ecx */
  ECX = (pop32());
  /* 108230aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108230ac pop ecx */
  ECX = (pop32());
  /* 108230ad jle 0x1082313c */
  if ((C.zf||C.sf!=C.of)) goto L_1082313c;
  /* 108230b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 108230b5 push 0x10828f68 */
  push32((uint32_t)(0x10828f68u));
  /* 108230ba call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108230c0u);
  /* 108230c0 pop ecx */
  ECX = (pop32());
  /* 108230c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108230c3 pop ecx */
  ECX = (pop32());
  /* 108230c4 jne 0x1082313c */
  if (!C.zf) goto L_1082313c;
  /* 108230c6 push ebx */
  push32((uint32_t)(EBX));
  /* 108230c7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 108230c9 call ebp */
  call_ind((uint32_t)(EBP), 0x108230cbu);
  /* 108230cb push 0x10828428 */
  push32((uint32_t)(0x10828428u));
  /* 108230d0 call edi */
  call_ind((uint32_t)(EDI), 0x108230d2u);
  /* 108230d2 push ebx */
  push32((uint32_t)(EBX));
  /* 108230d3 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108230d9u);
  /* 108230d9 push 8 */
  push32((uint32_t)(0x8u));
  /* 108230db pop ecx */
  ECX = (pop32());
  /* 108230dc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108230de imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108230e1 push ecx */
  push32((uint32_t)(ECX));
  /* 108230e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108230e4 push ebx */
  push32((uint32_t)(EBX));
  /* 108230e5 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108230ebu);
  /* 108230eb push ebx */
  push32((uint32_t)(EBX));
  /* 108230ec call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108230f2u);
  /* 108230f2 push 0xc */
  push32((uint32_t)(0xcu));
  /* 108230f4 pop ecx */
  ECX = (pop32());
  /* 108230f5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108230f7 imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108230fa push ecx */
  push32((uint32_t)(ECX));
  /* 108230fb push 3 */
  push32((uint32_t)(0x3u));
  /* 108230fd push ebx */
  push32((uint32_t)(EBX));
  /* 108230fe call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10823104u);
  /* 10823104 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823106 call dword ptr [0x108270f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f8))), 0x1082310cu);
  /* 1082310c push ebx */
  push32((uint32_t)(EBX));
  /* 1082310d push 0x10828b50 */
  push32((uint32_t)(0x10828b50u));
  /* 10823112 call esi */
  call_ind((uint32_t)(ESI), 0x10823114u);
  /* 10823114 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823116 call dword ptr [0x10827140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827140))), 0x1082311cu);
  /* 1082311c push ebx */
  push32((uint32_t)(EBX));
  /* 1082311d push 0x10828f68 */
  push32((uint32_t)(0x10828f68u));
  /* 10823122 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823124 push 0x10828d18 */
  push32((uint32_t)(0x10828d18u));
  /* 10823129 push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 1082312e push 0x10828bb0 */
  push32((uint32_t)(0x10828bb0u));
  /* 10823133 call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10823139u);
  /* 10823139 add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082313c:;
  /* 1082313c push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1082313e call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823144u);
  /* 10823144 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823146 pop ecx */
  ECX = (pop32());
  /* 10823147 je 0x108231de */
  if (C.zf) goto L_108231de;
  /* 1082314d push ebx */
  push32((uint32_t)(EBX));
  /* 1082314e push 0x10828f78 */
  push32((uint32_t)(0x10828f78u));
  /* 10823153 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823159u);
  /* 10823159 pop ecx */
  ECX = (pop32());
  /* 1082315a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082315c pop ecx */
  ECX = (pop32());
  /* 1082315d jle 0x108231de */
  if ((C.zf||C.sf!=C.of)) goto L_108231de;
  /* 1082315f push 0x10828ba8 */
  push32((uint32_t)(0x10828ba8u));
  /* 10823164 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x1082316au);
  /* 1082316a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082316c pop ecx */
  ECX = (pop32());
  /* 1082316d jne 0x108231de */
  if (!C.zf) goto L_108231de;
  /* 1082316f push ebx */
  push32((uint32_t)(EBX));
  /* 10823170 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10823172 call ebp */
  call_ind((uint32_t)(EBP), 0x10823174u);
  /* 10823174 push ebx */
  push32((uint32_t)(EBX));
  /* 10823175 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082317bu);
  /* 1082317b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082317e push 7 */
  push32((uint32_t)(0x7u));
  /* 10823180 pop ecx */
  ECX = (pop32());
  /* 10823181 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823183 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823189 push ecx */
  push32((uint32_t)(ECX));
  /* 1082318a push ebx */
  push32((uint32_t)(EBX));
  /* 1082318b call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823191u);
  /* 10823191 pop ecx */
  ECX = (pop32());
  /* 10823192 push 9 */
  push32((uint32_t)(0x9u));
  /* 10823194 pop ecx */
  ECX = (pop32());
  /* 10823195 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823197 imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1082319a push ecx */
  push32((uint32_t)(ECX));
  /* 1082319b push 0x1082841c */
  push32((uint32_t)(0x1082841cu));
  /* 108231a0 call dword ptr [0x10827168] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827168))), 0x108231a6u);
  /* 108231a6 push ebx */
  push32((uint32_t)(EBX));
  /* 108231a7 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108231adu);
  /* 108231ad push 9 */
  push32((uint32_t)(0x9u));
  /* 108231af pop ecx */
  ECX = (pop32());
  /* 108231b0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108231b2 imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108231b5 push ecx */
  push32((uint32_t)(ECX));
  /* 108231b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108231b8 push ebx */
  push32((uint32_t)(EBX));
  /* 108231b9 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108231bfu);
  /* 108231bf push ebx */
  push32((uint32_t)(EBX));
  /* 108231c0 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108231c6u);
  /* 108231c6 push 7 */
  push32((uint32_t)(0x7u));
  /* 108231c8 pop ecx */
  ECX = (pop32());
  /* 108231c9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108231cb imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108231d1 push ecx */
  push32((uint32_t)(ECX));
  /* 108231d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 108231d4 push ebx */
  push32((uint32_t)(EBX));
  /* 108231d5 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108231dbu);
  /* 108231db add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108231de:;
  /* 108231de push ebx */
  push32((uint32_t)(EBX));
  /* 108231df push 0x10828d88 */
  push32((uint32_t)(0x10828d88u));
  /* 108231e4 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108231eau);
  /* 108231ea pop ecx */
  ECX = (pop32());
  /* 108231eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108231ed pop ecx */
  ECX = (pop32());
  /* 108231ee jle 0x1082322a */
  if ((C.zf||C.sf!=C.of)) goto L_1082322a;
  /* 108231f0 push 5 */
  push32((uint32_t)(0x5u));
  /* 108231f2 push 0x10828d88 */
  push32((uint32_t)(0x10828d88u));
  /* 108231f7 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108231fdu);
  /* 108231fd pop ecx */
  ECX = (pop32());
  /* 108231fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823200 pop ecx */
  ECX = (pop32());
  /* 10823201 jne 0x1082322a */
  if (!C.zf) goto L_1082322a;
  /* 10823203 push 6 */
  push32((uint32_t)(0x6u));
  /* 10823205 push 0x10828dd8 */
  push32((uint32_t)(0x10828dd8u));
  /* 1082320a call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10823210u);
  /* 10823210 pop ecx */
  ECX = (pop32());
  /* 10823211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823213 pop ecx */
  ECX = (pop32());
  /* 10823214 jle 0x1082322a */
  if ((C.zf||C.sf!=C.of)) goto L_1082322a;
  /* 10823216 push ebx */
  push32((uint32_t)(EBX));
  /* 10823217 push 0x10828dd8 */
  push32((uint32_t)(0x10828dd8u));
  /* 1082321c call esi */
  call_ind((uint32_t)(ESI), 0x1082321eu);
  /* 1082321e push ebx */
  push32((uint32_t)(EBX));
  /* 1082321f push 6 */
  push32((uint32_t)(0x6u));
  /* 10823221 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10823227u);
  /* 10823227 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082322a:;
  /* 1082322a push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1082322c call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823232u);
  /* 10823232 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823234 pop ecx */
  ECX = (pop32());
  /* 10823235 je 0x108232ea */
  if (C.zf) goto L_108232ea;
  /* 1082323b push 0x10828dc8 */
  push32((uint32_t)(0x10828dc8u));
  /* 10823240 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10823246u);
  /* 10823246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823248 pop ecx */
  ECX = (pop32());
  /* 10823249 jne 0x108232ea */
  if (!C.zf) goto L_108232ea;
  /* 1082324f push ebx */
  push32((uint32_t)(EBX));
  /* 10823250 push 0x10828dd8 */
  push32((uint32_t)(0x10828dd8u));
  /* 10823255 call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x1082325bu);
  /* 1082325b pop ecx */
  ECX = (pop32());
  /* 1082325c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082325e pop ecx */
  ECX = (pop32());
  /* 1082325f jle 0x108232ea */
  if ((C.zf||C.sf!=C.of)) goto L_108232ea;
  /* 10823265 push ebx */
  push32((uint32_t)(EBX));
  /* 10823266 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10823268 call ebp */
  call_ind((uint32_t)(EBP), 0x1082326au);
  /* 1082326a push ebx */
  push32((uint32_t)(EBX));
  /* 1082326b call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823271u);
  /* 10823271 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823274 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10823276 pop ecx */
  ECX = (pop32());
  /* 10823277 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823279 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1082327f push ecx */
  push32((uint32_t)(ECX));
  /* 10823280 push ebx */
  push32((uint32_t)(EBX));
  /* 10823281 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823287u);
  /* 10823287 pop ecx */
  ECX = (pop32());
  /* 10823288 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082328a pop ecx */
  ECX = (pop32());
  /* 1082328b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082328d imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823290 push ecx */
  push32((uint32_t)(ECX));
  /* 10823291 push 0x10828410 */
  push32((uint32_t)(0x10828410u));
  /* 10823296 call dword ptr [0x10827168] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827168))), 0x1082329cu);
  /* 1082329c push ebx */
  push32((uint32_t)(EBX));
  /* 1082329d call dword ptr [0x108270f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f8))), 0x108232a3u);
  /* 108232a3 push ebx */
  push32((uint32_t)(EBX));
  /* 108232a4 push 0x10828dd8 */
  push32((uint32_t)(0x10828dd8u));
  /* 108232a9 call esi */
  call_ind((uint32_t)(ESI), 0x108232abu);
  /* 108232ab push ebx */
  push32((uint32_t)(EBX));
  /* 108232ac call dword ptr [0x108270c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270c0))), 0x108232b2u);
  /* 108232b2 push ebx */
  push32((uint32_t)(EBX));
  /* 108232b3 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108232b9u);
  /* 108232b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 108232bb pop ecx */
  ECX = (pop32());
  /* 108232bc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108232be imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108232c1 push ecx */
  push32((uint32_t)(ECX));
  /* 108232c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108232c4 push ebx */
  push32((uint32_t)(EBX));
  /* 108232c5 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108232cbu);
  /* 108232cb push ebx */
  push32((uint32_t)(EBX));
  /* 108232cc call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108232d2u);
  /* 108232d2 push 0xc */
  push32((uint32_t)(0xcu));
  /* 108232d4 pop ecx */
  ECX = (pop32());
  /* 108232d5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108232d7 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108232dd push ecx */
  push32((uint32_t)(ECX));
  /* 108232de push 3 */
  push32((uint32_t)(0x3u));
  /* 108232e0 push ebx */
  push32((uint32_t)(EBX));
  /* 108232e1 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108232e7u);
  /* 108232e7 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108232ea:;
  /* 108232ea push 0x4a */
  push32((uint32_t)(0x4au));
  /* 108232ec call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108232f2u);
  /* 108232f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108232f4 pop ecx */
  ECX = (pop32());
  /* 108232f5 je 0x10823393 */
  if (C.zf) goto L_10823393;
  /* 108232fb push ebx */
  push32((uint32_t)(EBX));
  /* 108232fc push 0x10828f80 */
  push32((uint32_t)(0x10828f80u));
  /* 10823301 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823307u);
  /* 10823307 pop ecx */
  ECX = (pop32());
  /* 10823308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082330a pop ecx */
  ECX = (pop32());
  /* 1082330b jle 0x10823393 */
  if ((C.zf||C.sf!=C.of)) goto L_10823393;
  /* 10823311 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823313 push 0x10828f80 */
  push32((uint32_t)(0x10828f80u));
  /* 10823318 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x1082331eu);
  /* 1082331e pop ecx */
  ECX = (pop32());
  /* 1082331f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823321 pop ecx */
  ECX = (pop32());
  /* 10823322 jne 0x10823393 */
  if (!C.zf) goto L_10823393;
  /* 10823324 push ebx */
  push32((uint32_t)(EBX));
  /* 10823325 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10823327 call ebp */
  call_ind((uint32_t)(EBP), 0x10823329u);
  /* 10823329 push 0x10828404 */
  push32((uint32_t)(0x10828404u));
  /* 1082332e call edi */
  call_ind((uint32_t)(EDI), 0x10823330u);
  /* 10823330 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10823335 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823337 push ebx */
  push32((uint32_t)(EBX));
  /* 10823338 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x1082333eu);
  /* 1082333e push 1 */
  push32((uint32_t)(0x1u));
  /* 10823340 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823346u);
  /* 10823346 push 7 */
  push32((uint32_t)(0x7u));
  /* 10823348 pop ecx */
  ECX = (pop32());
  /* 10823349 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082334b imul ecx, ecx, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xc8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823351 push ecx */
  push32((uint32_t)(ECX));
  /* 10823352 push 3 */
  push32((uint32_t)(0x3u));
  /* 10823354 push ebx */
  push32((uint32_t)(EBX));
  /* 10823355 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x1082335bu);
  /* 1082335b push 4 */
  push32((uint32_t)(0x4u));
  /* 1082335d call dword ptr [0x108270f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f8))), 0x10823363u);
  /* 10823363 push ebx */
  push32((uint32_t)(EBX));
  /* 10823364 push 0x10828b58 */
  push32((uint32_t)(0x10828b58u));
  /* 10823369 call esi */
  call_ind((uint32_t)(ESI), 0x1082336bu);
  /* 1082336b push 4 */
  push32((uint32_t)(0x4u));
  /* 1082336d call dword ptr [0x10827140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827140))), 0x10823373u);
  /* 10823373 push ebx */
  push32((uint32_t)(EBX));
  /* 10823374 push 0x10828f80 */
  push32((uint32_t)(0x10828f80u));
  /* 10823379 push 4 */
  push32((uint32_t)(0x4u));
  /* 1082337b push 0x10828d08 */
  push32((uint32_t)(0x10828d08u));
  /* 10823380 push 0x10828cf8 */
  push32((uint32_t)(0x10828cf8u));
  /* 10823385 push 0x10828bf0 */
  push32((uint32_t)(0x10828bf0u));
  /* 1082338a call dword ptr [0x1082719c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082719c))), 0x10823390u);
  /* 10823390 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823393:;
  /* 10823393 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10823395 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x1082339bu);
  /* 1082339b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1082339d pop ecx */
  ECX = (pop32());
  /* 1082339e je 0x108233e6 */
  if (C.zf) goto L_108233e6;
  /* 108233a0 push ebx */
  push32((uint32_t)(EBX));
  /* 108233a1 push 0x10828f90 */
  push32((uint32_t)(0x10828f90u));
  /* 108233a6 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108233acu);
  /* 108233ac pop ecx */
  ECX = (pop32());
  /* 108233ad cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108233b0 pop ecx */
  ECX = (pop32());
  /* 108233b1 jle 0x108233e6 */
  if ((C.zf||C.sf!=C.of)) goto L_108233e6;
  /* 108233b3 push 0x10828df0 */
  push32((uint32_t)(0x10828df0u));
  /* 108233b8 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108233beu);
  /* 108233be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108233c1 pop ecx */
  ECX = (pop32());
  /* 108233c2 jle 0x108233e6 */
  if ((C.zf||C.sf!=C.of)) goto L_108233e6;
  /* 108233c4 push ebx */
  push32((uint32_t)(EBX));
  /* 108233c5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 108233c7 call ebp */
  call_ind((uint32_t)(EBP), 0x108233c9u);
  /* 108233c9 push ebx */
  push32((uint32_t)(EBX));
  /* 108233ca push 0x10828e30 */
  push32((uint32_t)(0x10828e30u));
  /* 108233cf call esi */
  call_ind((uint32_t)(ESI), 0x108233d1u);
  /* 108233d1 push 5 */
  push32((uint32_t)(0x5u));
  /* 108233d3 call dword ptr [0x10827154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827154))), 0x108233d9u);
  /* 108233d9 push 0xf */
  push32((uint32_t)(0xfu));
  /* 108233db push 1 */
  push32((uint32_t)(0x1u));
  /* 108233dd call dword ptr [0x10827144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827144))), 0x108233e3u);
  /* 108233e3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108233e6:;
  /* 108233e6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 108233e8 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108233eeu);
  /* 108233ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108233f0 pop ecx */
  ECX = (pop32());
  /* 108233f1 je 0x1082345b */
  if (C.zf) goto L_1082345b;
  /* 108233f3 push ebx */
  push32((uint32_t)(EBX));
  /* 108233f4 push 0x10828fa0 */
  push32((uint32_t)(0x10828fa0u));
  /* 108233f9 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108233ffu);
  /* 108233ff pop ecx */
  ECX = (pop32());
  /* 10823400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823402 pop ecx */
  ECX = (pop32());
  /* 10823403 jle 0x1082345b */
  if ((C.zf||C.sf!=C.of)) goto L_1082345b;
  /* 10823405 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823407 push 0x10828fa0 */
  push32((uint32_t)(0x10828fa0u));
  /* 1082340c call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823412u);
  /* 10823412 pop ecx */
  ECX = (pop32());
  /* 10823413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823415 pop ecx */
  ECX = (pop32());
  /* 10823416 jne 0x1082345b */
  if (!C.zf) goto L_1082345b;
  /* 10823418 push 0x10828df0 */
  push32((uint32_t)(0x10828df0u));
  /* 1082341d call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10823423u);
  /* 10823423 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823426 pop ecx */
  ECX = (pop32());
  /* 10823427 jle 0x1082345b */
  if ((C.zf||C.sf!=C.of)) goto L_1082345b;
  /* 10823429 push ebx */
  push32((uint32_t)(EBX));
  /* 1082342a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1082342c call ebp */
  call_ind((uint32_t)(EBP), 0x1082342eu);
  /* 1082342e push ebx */
  push32((uint32_t)(EBX));
  /* 1082342f push 0x10828e30 */
  push32((uint32_t)(0x10828e30u));
  /* 10823434 call esi */
  call_ind((uint32_t)(ESI), 0x10823436u);
  /* 10823436 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823438 call dword ptr [0x10827154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827154))), 0x1082343eu);
  /* 1082343e push ebx */
  push32((uint32_t)(EBX));
  /* 1082343f push 0x10828e58 */
  push32((uint32_t)(0x10828e58u));
  /* 10823444 call esi */
  call_ind((uint32_t)(ESI), 0x10823446u);
  /* 10823446 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823448 call dword ptr [0x10827154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827154))), 0x1082344eu);
  /* 1082344e push 0xf */
  push32((uint32_t)(0xfu));
  /* 10823450 push 3 */
  push32((uint32_t)(0x3u));
  /* 10823452 call dword ptr [0x10827144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827144))), 0x10823458u);
  /* 10823458 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082345b:;
  /* 1082345b push 1 */
  push32((uint32_t)(0x1u));
  /* 1082345d call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x10823463u);
  /* 10823463 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823465 pop ecx */
  ECX = (pop32());
  /* 10823466 je 0x10823486 */
  if (C.zf) goto L_10823486;
  /* 10823468 push ebx */
  push32((uint32_t)(EBX));
  /* 10823469 push 0x10828df0 */
  push32((uint32_t)(0x10828df0u));
  /* 1082346e call esi */
  call_ind((uint32_t)(ESI), 0x10823470u);
  /* 10823470 push ebx */
  push32((uint32_t)(EBX));
  /* 10823471 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10823476 push 0x10828f90 */
  push32((uint32_t)(0x10828f90u));
  /* 1082347b push 5 */
  push32((uint32_t)(0x5u));
  /* 1082347d call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x10823483u);
  /* 10823483 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823486:;
  /* 10823486 push 3 */
  push32((uint32_t)(0x3u));
  /* 10823488 call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x1082348eu);
  /* 1082348e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823490 pop ecx */
  ECX = (pop32());
  /* 10823491 je 0x108234d6 */
  if (C.zf) goto L_108234d6;
  /* 10823493 push ebx */
  push32((uint32_t)(EBX));
  /* 10823494 push 0x10828df0 */
  push32((uint32_t)(0x10828df0u));
  /* 10823499 call esi */
  call_ind((uint32_t)(ESI), 0x1082349bu);
  /* 1082349b push ebx */
  push32((uint32_t)(EBX));
  /* 1082349c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108234a1 push 0x10828f90 */
  push32((uint32_t)(0x10828f90u));
  /* 108234a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 108234a8 call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x108234aeu);
  /* 108234ae push 2 */
  push32((uint32_t)(0x2u));
  /* 108234b0 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 108234b5 push 0x10828fb0 */
  push32((uint32_t)(0x10828fb0u));
  /* 108234ba push 5 */
  push32((uint32_t)(0x5u));
  /* 108234bc call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x108234c2u);
  /* 108234c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108234c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108234c6 push 0x10828fa0 */
  push32((uint32_t)(0x10828fa0u));
  /* 108234cb push 5 */
  push32((uint32_t)(0x5u));
  /* 108234cd call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x108234d3u);
  /* 108234d3 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108234d6:;
  /* 108234d6 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 108234d8 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108234deu);
  /* 108234de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108234e0 pop ecx */
  ECX = (pop32());
  /* 108234e1 je 0x10823529 */
  if (C.zf) goto L_10823529;
  /* 108234e3 push ebx */
  push32((uint32_t)(EBX));
  /* 108234e4 push 0x10828f98 */
  push32((uint32_t)(0x10828f98u));
  /* 108234e9 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x108234efu);
  /* 108234ef pop ecx */
  ECX = (pop32());
  /* 108234f0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108234f3 pop ecx */
  ECX = (pop32());
  /* 108234f4 jle 0x10823529 */
  if ((C.zf||C.sf!=C.of)) goto L_10823529;
  /* 108234f6 push 0x10828e08 */
  push32((uint32_t)(0x10828e08u));
  /* 108234fb call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10823501u);
  /* 10823501 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823504 pop ecx */
  ECX = (pop32());
  /* 10823505 jle 0x10823529 */
  if ((C.zf||C.sf!=C.of)) goto L_10823529;
  /* 10823507 push ebx */
  push32((uint32_t)(EBX));
  /* 10823508 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1082350a call ebp */
  call_ind((uint32_t)(EBP), 0x1082350cu);
  /* 1082350c push ebx */
  push32((uint32_t)(EBX));
  /* 1082350d push 0x10828e40 */
  push32((uint32_t)(0x10828e40u));
  /* 10823512 call esi */
  call_ind((uint32_t)(ESI), 0x10823514u);
  /* 10823514 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823516 call dword ptr [0x10827154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827154))), 0x1082351cu);
  /* 1082351c push 0xf */
  push32((uint32_t)(0xfu));
  /* 1082351e push 2 */
  push32((uint32_t)(0x2u));
  /* 10823520 call dword ptr [0x10827144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827144))), 0x10823526u);
  /* 10823526 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823529:;
  /* 10823529 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1082352b call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823531u);
  /* 10823531 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823533 pop ecx */
  ECX = (pop32());
  /* 10823534 je 0x1082358e */
  if (C.zf) goto L_1082358e;
  /* 10823536 push ebx */
  push32((uint32_t)(EBX));
  /* 10823537 push 0x10828fa8 */
  push32((uint32_t)(0x10828fa8u));
  /* 1082353c call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823542u);
  /* 10823542 pop ecx */
  ECX = (pop32());
  /* 10823543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823545 pop ecx */
  ECX = (pop32());
  /* 10823546 jle 0x1082358e */
  if ((C.zf||C.sf!=C.of)) goto L_1082358e;
  /* 10823548 push 5 */
  push32((uint32_t)(0x5u));
  /* 1082354a push 0x10828fa8 */
  push32((uint32_t)(0x10828fa8u));
  /* 1082354f call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823555u);
  /* 10823555 pop ecx */
  ECX = (pop32());
  /* 10823556 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823558 pop ecx */
  ECX = (pop32());
  /* 10823559 jne 0x1082358e */
  if (!C.zf) goto L_1082358e;
  /* 1082355b push 0x10828e08 */
  push32((uint32_t)(0x10828e08u));
  /* 10823560 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10823566u);
  /* 10823566 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823569 pop ecx */
  ECX = (pop32());
  /* 1082356a jle 0x1082358e */
  if ((C.zf||C.sf!=C.of)) goto L_1082358e;
  /* 1082356c push ebx */
  push32((uint32_t)(EBX));
  /* 1082356d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1082356f call ebp */
  call_ind((uint32_t)(EBP), 0x10823571u);
  /* 10823571 push ebx */
  push32((uint32_t)(EBX));
  /* 10823572 push 0x10828e30 */
  push32((uint32_t)(0x10828e30u));
  /* 10823577 call esi */
  call_ind((uint32_t)(ESI), 0x10823579u);
  /* 10823579 push 5 */
  push32((uint32_t)(0x5u));
  /* 1082357b call dword ptr [0x10827154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827154))), 0x10823581u);
  /* 10823581 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10823583 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823585 call dword ptr [0x10827144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827144))), 0x1082358bu);
  /* 1082358b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082358e:;
  /* 1082358e push 2 */
  push32((uint32_t)(0x2u));
  /* 10823590 call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x10823596u);
  /* 10823596 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823598 pop ecx */
  ECX = (pop32());
  /* 10823599 je 0x108235b5 */
  if (C.zf) goto L_108235b5;
  /* 1082359b push ebx */
  push32((uint32_t)(EBX));
  /* 1082359c push 0x10828e08 */
  push32((uint32_t)(0x10828e08u));
  /* 108235a1 call esi */
  call_ind((uint32_t)(ESI), 0x108235a3u);
  /* 108235a3 push ebx */
  push32((uint32_t)(EBX));
  /* 108235a4 push ebx */
  push32((uint32_t)(EBX));
  /* 108235a5 push 0x10828f98 */
  push32((uint32_t)(0x10828f98u));
  /* 108235aa push 5 */
  push32((uint32_t)(0x5u));
  /* 108235ac call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x108235b2u);
  /* 108235b2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108235b5:;
  /* 108235b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 108235b7 call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x108235bdu);
  /* 108235bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108235bf pop ecx */
  ECX = (pop32());
  /* 108235c0 je 0x108235f4 */
  if (C.zf) goto L_108235f4;
  /* 108235c2 push ebx */
  push32((uint32_t)(EBX));
  /* 108235c3 push 0x10828df0 */
  push32((uint32_t)(0x10828df0u));
  /* 108235c8 call esi */
  call_ind((uint32_t)(ESI), 0x108235cau);
  /* 108235ca push ebx */
  push32((uint32_t)(EBX));
  /* 108235cb push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108235d0 push 0x10828f90 */
  push32((uint32_t)(0x10828f90u));
  /* 108235d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 108235d7 call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x108235ddu);
  /* 108235dd push 2 */
  push32((uint32_t)(0x2u));
  /* 108235df push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108235e4 push 0x10828fa8 */
  push32((uint32_t)(0x10828fa8u));
  /* 108235e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 108235eb call dword ptr [0x10827130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827130))), 0x108235f1u);
  /* 108235f1 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108235f4:;
  /* 108235f4 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 108235f6 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108235fcu);
  /* 108235fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108235fe pop ecx */
  ECX = (pop32());
  /* 108235ff je 0x10823622 */
  if (C.zf) goto L_10823622;
  /* 10823601 push ebx */
  push32((uint32_t)(EBX));
  /* 10823602 push 0x10828e18 */
  push32((uint32_t)(0x10828e18u));
  /* 10823607 call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x1082360du);
  /* 1082360d pop ecx */
  ECX = (pop32());
  /* 1082360e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823610 pop ecx */
  ECX = (pop32());
  /* 10823611 jle 0x10823622 */
  if ((C.zf||C.sf!=C.of)) goto L_10823622;
  /* 10823613 push ebx */
  push32((uint32_t)(EBX));
  /* 10823614 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10823616 call ebp */
  call_ind((uint32_t)(EBP), 0x10823618u);
  /* 10823618 push 0x108283fc */
  push32((uint32_t)(0x108283fcu));
  /* 1082361d call edi */
  call_ind((uint32_t)(EDI), 0x1082361fu);
  /* 1082361f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823622:;
  /* 10823622 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10823624 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x1082362au);
  /* 1082362a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1082362c pop ecx */
  ECX = (pop32());
  /* 1082362d je 0x108236c2 */
  if (C.zf) goto L_108236c2;
  /* 10823633 push ebx */
  push32((uint32_t)(EBX));
  /* 10823634 push 0x10828e28 */
  push32((uint32_t)(0x10828e28u));
  /* 10823639 call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x1082363fu);
  /* 1082363f pop ecx */
  ECX = (pop32());
  /* 10823640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823642 pop ecx */
  ECX = (pop32());
  /* 10823643 jle 0x108236c2 */
  if ((C.zf||C.sf!=C.of)) goto L_108236c2;
  /* 10823645 push ebx */
  push32((uint32_t)(EBX));
  /* 10823646 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10823648 call ebp */
  call_ind((uint32_t)(EBP), 0x1082364au);
  /* 1082364a push 1 */
  push32((uint32_t)(0x1u));
  /* 1082364c call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823652u);
  /* 10823652 push 6 */
  push32((uint32_t)(0x6u));
  /* 10823654 pop ecx */
  ECX = (pop32());
  /* 10823655 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823657 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1082365d push ecx */
  push32((uint32_t)(ECX));
  /* 1082365e push 1 */
  push32((uint32_t)(0x1u));
  /* 10823660 push ebx */
  push32((uint32_t)(EBX));
  /* 10823661 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10823667u);
  /* 10823667 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823669 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082366fu);
  /* 1082366f push 0xa */
  push32((uint32_t)(0xau));
  /* 10823671 pop ecx */
  ECX = (pop32());
  /* 10823672 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823674 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1082367a push ecx */
  push32((uint32_t)(ECX));
  /* 1082367b push ebx */
  push32((uint32_t)(EBX));
  /* 1082367c push ebx */
  push32((uint32_t)(EBX));
  /* 1082367d call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x10823683u);
  /* 10823683 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823685 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082368bu);
  /* 1082368b push 0xa */
  push32((uint32_t)(0xau));
  /* 1082368d pop ecx */
  ECX = (pop32());
  /* 1082368e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823690 imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823696 push ecx */
  push32((uint32_t)(ECX));
  /* 10823697 push 2 */
  push32((uint32_t)(0x2u));
  /* 10823699 push ebx */
  push32((uint32_t)(EBX));
  /* 1082369a call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x108236a0u);
  /* 108236a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108236a2 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108236a8u);
  /* 108236a8 push 6 */
  push32((uint32_t)(0x6u));
  /* 108236aa pop ecx */
  ECX = (pop32());
  /* 108236ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108236ad imul ecx, ecx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1f4u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108236b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108236b4 push 0x108283f0 */
  push32((uint32_t)(0x108283f0u));
  /* 108236b9 call dword ptr [0x10827168] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827168))), 0x108236bfu);
  /* 108236bf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108236c2:;
  /* 108236c2 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 108236c4 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108236cau);
  /* 108236ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108236cc pop ecx */
  ECX = (pop32());
  /* 108236cd je 0x10823710 */
  if (C.zf) goto L_10823710;
  /* 108236cf push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 108236d1 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108236d7u);
  /* 108236d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108236d9 pop ecx */
  ECX = (pop32());
  /* 108236da jne 0x10823710 */
  if (!C.zf) goto L_10823710;
  /* 108236dc push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 108236de call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108236e4u);
  /* 108236e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108236e6 pop ecx */
  ECX = (pop32());
  /* 108236e7 jne 0x10823710 */
  if (!C.zf) goto L_10823710;
  /* 108236e9 push ebx */
  push32((uint32_t)(EBX));
  /* 108236ea push 0x4d */
  push32((uint32_t)(0x4du));
  /* 108236ec call ebp */
  call_ind((uint32_t)(EBP), 0x108236eeu);
  /* 108236ee push 0x108283e4 */
  push32((uint32_t)(0x108283e4u));
  /* 108236f3 call edi */
  call_ind((uint32_t)(EDI), 0x108236f5u);
  /* 108236f5 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 108236f7 call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x108236fdu);
  /* 108236fd push 0x43 */
  push32((uint32_t)(0x43u));
  /* 108236ff call dword ptr [0x10827160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827160))), 0x10823705u);
  /* 10823705 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10823707 call dword ptr [0x10827160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827160))), 0x1082370du);
  /* 1082370d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823710:;
  /* 10823710 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10823712 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823718u);
  /* 10823718 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1082371a pop ecx */
  ECX = (pop32());
  /* 1082371b je 0x108238aa */
  if (C.zf) goto L_108238aa;
  /* 10823721 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10823726 push 0x10828d80 */
  push32((uint32_t)(0x10828d80u));
  /* 1082372b call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10823731u);
  /* 10823731 pop ecx */
  ECX = (pop32());
  /* 10823732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823734 pop ecx */
  ECX = (pop32());
  /* 10823735 jle 0x108238aa */
  if ((C.zf||C.sf!=C.of)) goto L_108238aa;
  /* 1082373b push 5 */
  push32((uint32_t)(0x5u));
  /* 1082373d push 0x10828d80 */
  push32((uint32_t)(0x10828d80u));
  /* 10823742 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823748u);
  /* 10823748 pop ecx */
  ECX = (pop32());
  /* 10823749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082374b pop ecx */
  ECX = (pop32());
  /* 1082374c jne 0x108238aa */
  if (!C.zf) goto L_108238aa;
  /* 10823752 push ebx */
  push32((uint32_t)(EBX));
  /* 10823753 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10823755 call ebp */
  call_ind((uint32_t)(EBP), 0x10823757u);
  /* 10823757 push ebx */
  push32((uint32_t)(EBX));
  /* 10823758 push 0x10828bd0 */
  push32((uint32_t)(0x10828bd0u));
  /* 1082375d call esi */
  call_ind((uint32_t)(ESI), 0x1082375fu);
  /* 1082375f push ebx */
  push32((uint32_t)(EBX));
  /* 10823760 push 6 */
  push32((uint32_t)(0x6u));
  /* 10823762 call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10823768u);
  /* 10823768 push 0x108283dc */
  push32((uint32_t)(0x108283dcu));
  /* 1082376d call edi */
  call_ind((uint32_t)(EDI), 0x1082376fu);
  /* 1082376f push ebx */
  push32((uint32_t)(EBX));
  /* 10823770 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823776u);
  /* 10823776 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082377b jne 0x1082379e */
  if (!C.zf) goto L_1082379e;
  /* 1082377d push 0x108283d4 */
  push32((uint32_t)(0x108283d4u));
  /* 10823782 call edi */
  call_ind((uint32_t)(EDI), 0x10823784u);
  /* 10823784 push 3 */
  push32((uint32_t)(0x3u));
  /* 10823786 call dword ptr [0x1082715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082715c))), 0x1082378cu);
  /* 1082378c push 4 */
  push32((uint32_t)(0x4u));
  /* 1082378e push 4 */
  push32((uint32_t)(0x4u));
  /* 10823790 push 0x10828d90 */
  push32((uint32_t)(0x10828d90u));
  /* 10823795 call dword ptr [0x108270bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270bc))), 0x1082379bu);
  /* 1082379b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082379e:;
  /* 1082379e push ebx */
  push32((uint32_t)(EBX));
  /* 1082379f call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108237a5u);
  /* 108237a5 imul eax, eax, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x64u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108237a8 mov ecx, 0x12d */
  ECX = (0x12du);
  /* 108237ad sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108237af push ecx */
  push32((uint32_t)(ECX));
  /* 108237b0 push 8 */
  push32((uint32_t)(0x8u));
  /* 108237b2 call dword ptr [0x10827144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827144))), 0x108237b8u);
  /* 108237b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108237ba call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108237c0u);
  /* 108237c0 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108237c3 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108237c9 push eax */
  push32((uint32_t)(EAX));
  /* 108237ca push 1 */
  push32((uint32_t)(0x1u));
  /* 108237cc push 3 */
  push32((uint32_t)(0x3u));
  /* 108237ce call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x108237d4u);
  /* 108237d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108237d6 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108237dcu);
  /* 108237dc add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108237df imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108237e5 push eax */
  push32((uint32_t)(EAX));
  /* 108237e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 108237e8 push 3 */
  push32((uint32_t)(0x3u));
  /* 108237ea call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x108237f0u);
  /* 108237f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108237f2 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x108237f8u);
  /* 108237f8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108237fb imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823801 push eax */
  push32((uint32_t)(EAX));
  /* 10823802 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823804 push 3 */
  push32((uint32_t)(0x3u));
  /* 10823806 call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x1082380cu);
  /* 1082380c push 1 */
  push32((uint32_t)(0x1u));
  /* 1082380e call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823814u);
  /* 10823814 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10823817 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082381a imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823820 push eax */
  push32((uint32_t)(EAX));
  /* 10823821 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823823 push 3 */
  push32((uint32_t)(0x3u));
  /* 10823825 call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x1082382bu);
  /* 1082382b push 1 */
  push32((uint32_t)(0x1u));
  /* 1082382d call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823833u);
  /* 10823833 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10823836 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1082383c push eax */
  push32((uint32_t)(EAX));
  /* 1082383d push ebx */
  push32((uint32_t)(EBX));
  /* 1082383e push 3 */
  push32((uint32_t)(0x3u));
  /* 10823840 call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x10823846u);
  /* 10823846 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823848 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082384eu);
  /* 1082384e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10823851 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823857 push eax */
  push32((uint32_t)(EAX));
  /* 10823858 push 2 */
  push32((uint32_t)(0x2u));
  /* 1082385a push 3 */
  push32((uint32_t)(0x3u));
  /* 1082385c call dword ptr [0x108270b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b8))), 0x10823862u);
  /* 10823862 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823864 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x1082386au);
  /* 1082386a push eax */
  push32((uint32_t)(EAX));
  /* 1082386b push ebx */
  push32((uint32_t)(EBX));
  /* 1082386c push 1 */
  push32((uint32_t)(0x1u));
  /* 1082386e push 1 */
  push32((uint32_t)(0x1u));
  /* 10823870 push 0x108283c8 */
  push32((uint32_t)(0x108283c8u));
  /* 10823875 push 3 */
  push32((uint32_t)(0x3u));
  /* 10823877 call dword ptr [0x1082716c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082716c))), 0x1082387du);
  /* 1082387d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823880 push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 10823885 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x1082388bu);
  /* 1082388b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082388d pop ecx */
  ECX = (pop32());
  /* 1082388e jle 0x108238aa */
  if ((C.zf||C.sf!=C.of)) goto L_108238aa;
  /* 10823890 push ebx */
  push32((uint32_t)(EBX));
  /* 10823891 push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 10823896 call esi */
  call_ind((uint32_t)(ESI), 0x10823898u);
  /* 10823898 push ebx */
  push32((uint32_t)(EBX));
  /* 10823899 push ebx */
  push32((uint32_t)(EBX));
  /* 1082389a push 0x10828f38 */
  push32((uint32_t)(0x10828f38u));
  /* 1082389f push 4 */
  push32((uint32_t)(0x4u));
  /* 108238a1 call dword ptr [0x1082713c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082713c))), 0x108238a7u);
  /* 108238a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108238aa:;
  /* 108238aa push 8 */
  push32((uint32_t)(0x8u));
  /* 108238ac call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x108238b2u);
  /* 108238b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108238b4 pop ecx */
  ECX = (pop32());
  /* 108238b5 je 0x108238d9 */
  if (C.zf) goto L_108238d9;
  /* 108238b7 push ebx */
  push32((uint32_t)(EBX));
  /* 108238b8 push 0x10828e50 */
  push32((uint32_t)(0x10828e50u));
  /* 108238bd call esi */
  call_ind((uint32_t)(ESI), 0x108238bfu);
  /* 108238bf push 1 */
  push32((uint32_t)(0x1u));
  /* 108238c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 108238c3 call dword ptr [0x108270b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270b0))), 0x108238c9u);
  /* 108238c9 push 0x10828bd0 */
  push32((uint32_t)(0x10828bd0u));
  /* 108238ce push 5 */
  push32((uint32_t)(0x5u));
  /* 108238d0 call dword ptr [0x10827134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827134))), 0x108238d6u);
  /* 108238d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108238d9:;
  /* 108238d9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 108238db call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x108238e1u);
  /* 108238e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108238e3 pop ecx */
  ECX = (pop32());
  /* 108238e4 jne 0x1082393c */
  if (!C.zf) goto L_1082393c;
  /* 108238e6 push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 108238eb push 0x10828f38 */
  push32((uint32_t)(0x10828f38u));
  /* 108238f0 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x108238f6u);
  /* 108238f6 pop ecx */
  ECX = (pop32());
  /* 108238f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108238f9 pop ecx */
  ECX = (pop32());
  /* 108238fa jle 0x1082393c */
  if ((C.zf||C.sf!=C.of)) goto L_1082393c;
  /* 108238fc push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 108238fe call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823904u);
  /* 10823904 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823906 pop ecx */
  ECX = (pop32());
  /* 10823907 je 0x10823929 */
  if (C.zf) goto L_10823929;
  /* 10823909 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1082390b call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10823911u);
  /* 10823911 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10823913 call dword ptr [0x10827160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827160))), 0x10823919u);
  /* 10823919 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1082391b call dword ptr [0x10827160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827160))), 0x10823921u);
  /* 10823921 push ebx */
  push32((uint32_t)(EBX));
  /* 10823922 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10823924 call ebp */
  call_ind((uint32_t)(EBP), 0x10823926u);
  /* 10823926 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823929:;
  /* 10823929 push ebx */
  push32((uint32_t)(EBX));
  /* 1082392a push 0x10828b88 */
  push32((uint32_t)(0x10828b88u));
  /* 1082392f call esi */
  call_ind((uint32_t)(ESI), 0x10823931u);
  /* 10823931 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823933 call dword ptr [0x10827140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827140))), 0x10823939u);
  /* 10823939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082393c:;
  /* 1082393c push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1082393e call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823944u);
  /* 10823944 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823946 pop ecx */
  ECX = (pop32());
  /* 10823947 je 0x10823994 */
  if (C.zf) goto L_10823994;
  /* 10823949 push ebx */
  push32((uint32_t)(EBX));
  /* 1082394a push 0x10828e38 */
  push32((uint32_t)(0x10828e38u));
  /* 1082394f call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10823955u);
  /* 10823955 pop ecx */
  ECX = (pop32());
  /* 10823956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823958 pop ecx */
  ECX = (pop32());
  /* 10823959 jle 0x10823994 */
  if ((C.zf||C.sf!=C.of)) goto L_10823994;
  /* 1082395b push ebx */
  push32((uint32_t)(EBX));
  /* 1082395c push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1082395e call ebp */
  call_ind((uint32_t)(EBP), 0x10823960u);
  /* 10823960 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10823965 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823967 push ebx */
  push32((uint32_t)(EBX));
  /* 10823968 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x1082396eu);
  /* 1082396e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10823973 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823975 push ebx */
  push32((uint32_t)(EBX));
  /* 10823976 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x1082397cu);
  /* 1082397c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10823981 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823983 push ebx */
  push32((uint32_t)(EBX));
  /* 10823984 call dword ptr [0x1082711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082711c))), 0x1082398au);
  /* 1082398a push 0x108283bc */
  push32((uint32_t)(0x108283bcu));
  /* 1082398f call edi */
  call_ind((uint32_t)(EDI), 0x10823991u);
  /* 10823991 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823994:;
  /* 10823994 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10823996 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x1082399cu);
  /* 1082399c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1082399e pop ecx */
  ECX = (pop32());
  /* 1082399f je 0x10823a13 */
  if (C.zf) goto L_10823a13;
  /* 108239a1 push 0x10828e18 */
  push32((uint32_t)(0x10828e18u));
  /* 108239a6 push 0x10828d68 */
  push32((uint32_t)(0x10828d68u));
  /* 108239ab call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x108239b1u);
  /* 108239b1 pop ecx */
  ECX = (pop32());
  /* 108239b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108239b4 pop ecx */
  ECX = (pop32());
  /* 108239b5 jle 0x10823a13 */
  if ((C.zf||C.sf!=C.of)) goto L_10823a13;
  /* 108239b7 push ebx */
  push32((uint32_t)(EBX));
  /* 108239b8 push 0x10828e18 */
  push32((uint32_t)(0x10828e18u));
  /* 108239bd call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x108239c3u);
  /* 108239c3 pop ecx */
  ECX = (pop32());
  /* 108239c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108239c6 pop ecx */
  ECX = (pop32());
  /* 108239c7 jle 0x10823a13 */
  if ((C.zf||C.sf!=C.of)) goto L_10823a13;
  /* 108239c9 push 0x10828e00 */
  push32((uint32_t)(0x10828e00u));
  /* 108239ce call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108239d4u);
  /* 108239d4 cmp eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108239d7 pop ecx */
  ECX = (pop32());
  /* 108239d8 jne 0x10823a13 */
  if (!C.zf) goto L_10823a13;
  /* 108239da push 0x10828bb8 */
  push32((uint32_t)(0x10828bb8u));
  /* 108239df call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x108239e5u);
  /* 108239e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108239e7 pop ecx */
  ECX = (pop32());
  /* 108239e8 jle 0x10823a13 */
  if ((C.zf||C.sf!=C.of)) goto L_10823a13;
  /* 108239ea push ebx */
  push32((uint32_t)(EBX));
  /* 108239eb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 108239ed call ebp */
  call_ind((uint32_t)(EBP), 0x108239efu);
  /* 108239ef push 0x108283b4 */
  push32((uint32_t)(0x108283b4u));
  /* 108239f4 call edi */
  call_ind((uint32_t)(EDI), 0x108239f6u);
  /* 108239f6 push ebx */
  push32((uint32_t)(EBX));
  /* 108239f7 push 0x10828de8 */
  push32((uint32_t)(0x10828de8u));
  /* 108239fc call esi */
  call_ind((uint32_t)(ESI), 0x108239feu);
  /* 108239fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10823a00 call dword ptr [0x10827154] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827154))), 0x10823a06u);
  /* 10823a06 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10823a08 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10823a0a call dword ptr [0x10827144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827144))), 0x10823a10u);
  /* 10823a10 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823a13:;
  /* 10823a13 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10823a15 call dword ptr [0x10827170] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827170))), 0x10823a1bu);
  /* 10823a1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823a1d pop ecx */
  ECX = (pop32());
  /* 10823a1e je 0x10823a56 */
  if (C.zf) goto L_10823a56;
  /* 10823a20 push 0x10828bb8 */
  push32((uint32_t)(0x10828bb8u));
  /* 10823a25 call dword ptr [0x10827100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827100))), 0x10823a2bu);
  /* 10823a2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823a2d pop ecx */
  ECX = (pop32());
  /* 10823a2e jle 0x10823a56 */
  if ((C.zf||C.sf!=C.of)) goto L_10823a56;
  /* 10823a30 push ebx */
  push32((uint32_t)(EBX));
  /* 10823a31 push 0x10828f88 */
  push32((uint32_t)(0x10828f88u));
  /* 10823a36 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823a3cu);
  /* 10823a3c pop ecx */
  ECX = (pop32());
  /* 10823a3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823a3f pop ecx */
  ECX = (pop32());
  /* 10823a40 jle 0x10823a56 */
  if ((C.zf||C.sf!=C.of)) goto L_10823a56;
  /* 10823a42 push ebx */
  push32((uint32_t)(EBX));
  /* 10823a43 push 0x10828f88 */
  push32((uint32_t)(0x10828f88u));
  /* 10823a48 push 0x10828bb8 */
  push32((uint32_t)(0x10828bb8u));
  /* 10823a4d call dword ptr [0x10827174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827174))), 0x10823a53u);
  /* 10823a53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823a56:;
  /* 10823a56 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10823a58 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823a5eu);
  /* 10823a5e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823a60 pop ecx */
  ECX = (pop32());
  /* 10823a61 je 0x10823aac */
  if (C.zf) goto L_10823aac;
  /* 10823a63 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10823a68 push 0x10828d58 */
  push32((uint32_t)(0x10828d58u));
  /* 10823a6d call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10823a73u);
  /* 10823a73 pop ecx */
  ECX = (pop32());
  /* 10823a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823a76 pop ecx */
  ECX = (pop32());
  /* 10823a77 jg 0x10823aa5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10823aa5;
  /* 10823a79 push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10823a7e push 0x10828f60 */
  push32((uint32_t)(0x10828f60u));
  /* 10823a83 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10823a89u);
  /* 10823a89 pop ecx */
  ECX = (pop32());
  /* 10823a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823a8c pop ecx */
  ECX = (pop32());
  /* 10823a8d jg 0x10823aa5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10823aa5;
  /* 10823a8f push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10823a94 push 0x10828f70 */
  push32((uint32_t)(0x10828f70u));
  /* 10823a99 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10823a9fu);
  /* 10823a9f pop ecx */
  ECX = (pop32());
  /* 10823aa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823aa2 pop ecx */
  ECX = (pop32());
  /* 10823aa3 jle 0x10823aac */
  if ((C.zf||C.sf!=C.of)) goto L_10823aac;
L_10823aa5:;
  /* 10823aa5 push ebx */
  push32((uint32_t)(EBX));
  /* 10823aa6 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10823aa8 call ebp */
  call_ind((uint32_t)(EBP), 0x10823aaau);
  /* 10823aaa pop ecx */
  ECX = (pop32());
  /* 10823aab pop ecx */
  ECX = (pop32());
L_10823aac:;
  /* 10823aac push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10823aae call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823ab4u);
  /* 10823ab4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823ab6 pop ecx */
  ECX = (pop32());
  /* 10823ab7 je 0x10823b65 */
  if (C.zf) goto L_10823b65;
  /* 10823abd push 0x10828af8 */
  push32((uint32_t)(0x10828af8u));
  /* 10823ac2 push 0x10828d90 */
  push32((uint32_t)(0x10828d90u));
  /* 10823ac7 call dword ptr [0x10827114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827114))), 0x10823acdu);
  /* 10823acd pop ecx */
  ECX = (pop32());
  /* 10823ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823ad0 pop ecx */
  ECX = (pop32());
  /* 10823ad1 jle 0x10823b65 */
  if ((C.zf||C.sf!=C.of)) goto L_10823b65;
  /* 10823ad7 push ebx */
  push32((uint32_t)(EBX));
  /* 10823ad8 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10823ada call ebp */
  call_ind((uint32_t)(EBP), 0x10823adcu);
  /* 10823adc push ebx */
  push32((uint32_t)(EBX));
  /* 10823add push 0x10828be0 */
  push32((uint32_t)(0x10828be0u));
  /* 10823ae2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823ae4 call dword ptr [0x108270fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270fc))), 0x10823aeau);
  /* 10823aea push ebx */
  push32((uint32_t)(EBX));
  /* 10823aeb push 4 */
  push32((uint32_t)(0x4u));
  /* 10823aed call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10823af3u);
  /* 10823af3 push ebx */
  push32((uint32_t)(EBX));
  /* 10823af4 push 0x10828e70 */
  push32((uint32_t)(0x10828e70u));
  /* 10823af9 call esi */
  call_ind((uint32_t)(ESI), 0x10823afbu);
  /* 10823afb push ebx */
  push32((uint32_t)(EBX));
  /* 10823afc push 4 */
  push32((uint32_t)(0x4u));
  /* 10823afe call dword ptr [0x108270e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e0))), 0x10823b04u);
  /* 10823b04 push 0x108283ac */
  push32((uint32_t)(0x108283acu));
  /* 10823b09 call edi */
  call_ind((uint32_t)(EDI), 0x10823b0bu);
  /* 10823b0b push ebx */
  push32((uint32_t)(EBX));
  /* 10823b0c call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823b12u);
  /* 10823b12 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823b15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823b17 jne 0x10823b2a */
  if (!C.zf) goto L_10823b2a;
  /* 10823b19 push 0x108283a4 */
  push32((uint32_t)(0x108283a4u));
  /* 10823b1e call edi */
  call_ind((uint32_t)(EDI), 0x10823b20u);
  /* 10823b20 push 4 */
  push32((uint32_t)(0x4u));
  /* 10823b22 call dword ptr [0x1082715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082715c))), 0x10823b28u);
  /* 10823b28 pop ecx */
  ECX = (pop32());
  /* 10823b29 pop ecx */
  ECX = (pop32());
L_10823b2a:;
  /* 10823b2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10823b2c call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823b32u);
  /* 10823b32 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823b34 mov esi, dword ptr [0x10827144] */
  ESI = (r32((uint32_t)(0x10827144)));
  /* 10823b3a pop ecx */
  ECX = (pop32());
  /* 10823b3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823b3d imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10823b44 push 0xa */
  push32((uint32_t)(0xau));
  /* 10823b46 call esi */
  call_ind((uint32_t)(ESI), 0x10823b48u);
  /* 10823b48 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10823b4a call dword ptr [0x108270e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270e8))), 0x10823b50u);
  /* 10823b50 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10823b52 call dword ptr [0x10827160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827160))), 0x10823b58u);
  /* 10823b58 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10823b5a call dword ptr [0x10827160] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827160))), 0x10823b60u);
  /* 10823b60 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823b63 jmp 0x10823b6b */
  goto L_10823b6b;
L_10823b65:;
  /* 10823b65 mov esi, dword ptr [0x10827144] */
  ESI = (r32((uint32_t)(0x10827144)));
L_10823b6b:;
  /* 10823b6b push 0xa */
  push32((uint32_t)(0xau));
  /* 10823b6d call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x10823b73u);
  /* 10823b73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823b75 pop ecx */
  ECX = (pop32());
  /* 10823b76 je 0x10823ba4 */
  if (C.zf) goto L_10823ba4;
  /* 10823b78 push ebx */
  push32((uint32_t)(EBX));
  /* 10823b79 push 0x10828da0 */
  push32((uint32_t)(0x10828da0u));
  /* 10823b7e push 0x10828be8 */
  push32((uint32_t)(0x10828be8u));
  /* 10823b83 call dword ptr [0x10827174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827174))), 0x10823b89u);
  /* 10823b89 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823b8b call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823b91u);
  /* 10823b91 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823b93 pop ecx */
  ECX = (pop32());
  /* 10823b94 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823b96 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823b9c push ecx */
  push32((uint32_t)(ECX));
  /* 10823b9d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10823b9f call esi */
  call_ind((uint32_t)(ESI), 0x10823ba1u);
  /* 10823ba1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823ba4:;
  /* 10823ba4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10823ba6 call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x10823bacu);
  /* 10823bac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823bae pop ecx */
  ECX = (pop32());
  /* 10823baf je 0x10823bdd */
  if (C.zf) goto L_10823bdd;
  /* 10823bb1 push ebx */
  push32((uint32_t)(EBX));
  /* 10823bb2 push 0x10828da0 */
  push32((uint32_t)(0x10828da0u));
  /* 10823bb7 push 0x10828e78 */
  push32((uint32_t)(0x10828e78u));
  /* 10823bbc call dword ptr [0x10827174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827174))), 0x10823bc2u);
  /* 10823bc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823bc4 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823bcau);
  /* 10823bca push 5 */
  push32((uint32_t)(0x5u));
  /* 10823bcc pop ecx */
  ECX = (pop32());
  /* 10823bcd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823bcf imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823bd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10823bd6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10823bd8 call esi */
  call_ind((uint32_t)(ESI), 0x10823bdau);
  /* 10823bda add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823bdd:;
  /* 10823bdd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10823bdf call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x10823be5u);
  /* 10823be5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823be7 pop ecx */
  ECX = (pop32());
  /* 10823be8 je 0x10823c16 */
  if (C.zf) goto L_10823c16;
  /* 10823bea push ebx */
  push32((uint32_t)(EBX));
  /* 10823beb push 0x10828da0 */
  push32((uint32_t)(0x10828da0u));
  /* 10823bf0 push 0x10828e80 */
  push32((uint32_t)(0x10828e80u));
  /* 10823bf5 call dword ptr [0x10827174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827174))), 0x10823bfbu);
  /* 10823bfb push 1 */
  push32((uint32_t)(0x1u));
  /* 10823bfd call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823c03u);
  /* 10823c03 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823c05 pop ecx */
  ECX = (pop32());
  /* 10823c06 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823c08 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823c0e push ecx */
  push32((uint32_t)(ECX));
  /* 10823c0f push 0xd */
  push32((uint32_t)(0xdu));
  /* 10823c11 call esi */
  call_ind((uint32_t)(ESI), 0x10823c13u);
  /* 10823c13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823c16:;
  /* 10823c16 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10823c18 call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x10823c1eu);
  /* 10823c1e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823c20 pop ecx */
  ECX = (pop32());
  /* 10823c21 je 0x10823c4f */
  if (C.zf) goto L_10823c4f;
  /* 10823c23 push ebx */
  push32((uint32_t)(EBX));
  /* 10823c24 push 0x10828da0 */
  push32((uint32_t)(0x10828da0u));
  /* 10823c29 push 0x10828e88 */
  push32((uint32_t)(0x10828e88u));
  /* 10823c2e call dword ptr [0x10827174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827174))), 0x10823c34u);
  /* 10823c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823c36 call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823c3cu);
  /* 10823c3c push 5 */
  push32((uint32_t)(0x5u));
  /* 10823c3e pop ecx */
  ECX = (pop32());
  /* 10823c3f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823c41 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823c47 push ecx */
  push32((uint32_t)(ECX));
  /* 10823c48 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10823c4a call esi */
  call_ind((uint32_t)(ESI), 0x10823c4cu);
  /* 10823c4c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823c4f:;
  /* 10823c4f push 0xe */
  push32((uint32_t)(0xeu));
  /* 10823c51 call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x10823c57u);
  /* 10823c57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823c59 pop ecx */
  ECX = (pop32());
  /* 10823c5a je 0x10823c88 */
  if (C.zf) goto L_10823c88;
  /* 10823c5c push ebx */
  push32((uint32_t)(EBX));
  /* 10823c5d push 0x10828da0 */
  push32((uint32_t)(0x10828da0u));
  /* 10823c62 push 0x10828e90 */
  push32((uint32_t)(0x10828e90u));
  /* 10823c67 call dword ptr [0x10827174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827174))), 0x10823c6du);
  /* 10823c6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10823c6f call dword ptr [0x108271a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108271a0))), 0x10823c75u);
  /* 10823c75 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823c77 pop ecx */
  ECX = (pop32());
  /* 10823c78 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823c7a imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10823c80 push ecx */
  push32((uint32_t)(ECX));
  /* 10823c81 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10823c83 call esi */
  call_ind((uint32_t)(ESI), 0x10823c85u);
  /* 10823c85 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823c88:;
  /* 10823c88 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10823c8a call dword ptr [0x10827148] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827148))), 0x10823c90u);
  /* 10823c90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823c92 pop ecx */
  ECX = (pop32());
  /* 10823c93 je 0x10823ca9 */
  if (C.zf) goto L_10823ca9;
  /* 10823c95 push ebx */
  push32((uint32_t)(EBX));
  /* 10823c96 push 0x10828da0 */
  push32((uint32_t)(0x10828da0u));
  /* 10823c9b push 0x10828e98 */
  push32((uint32_t)(0x10828e98u));
  /* 10823ca0 call dword ptr [0x10827174] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827174))), 0x10823ca6u);
  /* 10823ca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823ca9:;
  /* 10823ca9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10823cab call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823cb1u);
  /* 10823cb1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823cb3 pop ecx */
  ECX = (pop32());
  /* 10823cb4 je 0x10823cfd */
  if (C.zf) goto L_10823cfd;
  /* 10823cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10823cb7 push 0x10828b90 */
  push32((uint32_t)(0x10828b90u));
  /* 10823cbc call dword ptr [0x108270f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270f4))), 0x10823cc2u);
  /* 10823cc2 pop ecx */
  ECX = (pop32());
  /* 10823cc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823cc5 pop ecx */
  ECX = (pop32());
  /* 10823cc6 jle 0x10823cfd */
  if ((C.zf||C.sf!=C.of)) goto L_10823cfd;
  /* 10823cc8 push ebx */
  push32((uint32_t)(EBX));
  /* 10823cc9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10823ccb call ebp */
  call_ind((uint32_t)(EBP), 0x10823ccdu);
  /* 10823ccd mov esi, dword ptr [0x1082711c] */
  ESI = (r32((uint32_t)(0x1082711c)));
  /* 10823cd3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10823cd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823cda push ebx */
  push32((uint32_t)(EBX));
  /* 10823cdb call esi */
  call_ind((uint32_t)(ESI), 0x10823cddu);
  /* 10823cdd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10823ce2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823ce4 push ebx */
  push32((uint32_t)(EBX));
  /* 10823ce5 call esi */
  call_ind((uint32_t)(ESI), 0x10823ce7u);
  /* 10823ce7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10823cec push 4 */
  push32((uint32_t)(0x4u));
  /* 10823cee push ebx */
  push32((uint32_t)(EBX));
  /* 10823cef call esi */
  call_ind((uint32_t)(ESI), 0x10823cf1u);
  /* 10823cf1 push 0x1082839c */
  push32((uint32_t)(0x1082839cu));
  /* 10823cf6 call edi */
  call_ind((uint32_t)(EDI), 0x10823cf8u);
  /* 10823cf8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823cfb jmp 0x10823d03 */
  goto L_10823d03;
L_10823cfd:;
  /* 10823cfd mov esi, dword ptr [0x1082711c] */
  ESI = (r32((uint32_t)(0x1082711c)));
L_10823d03:;
  /* 10823d03 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10823d05 call dword ptr [0x108270d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270d8))), 0x10823d0bu);
  /* 10823d0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10823d0d pop ecx */
  ECX = (pop32());
  /* 10823d0e je 0x10823d58 */
  if (C.zf) goto L_10823d58;
  /* 10823d10 push ebx */
  push32((uint32_t)(EBX));
  /* 10823d11 push 0x10828d48 */
  push32((uint32_t)(0x10828d48u));
  /* 10823d16 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823d1cu);
  /* 10823d1c pop ecx */
  ECX = (pop32());
  /* 10823d1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823d1f pop ecx */
  ECX = (pop32());
  /* 10823d20 jle 0x10823d58 */
  if ((C.zf||C.sf!=C.of)) goto L_10823d58;
  /* 10823d22 push 5 */
  push32((uint32_t)(0x5u));
  /* 10823d24 push 0x10828d48 */
  push32((uint32_t)(0x10828d48u));
  /* 10823d29 call dword ptr [0x10827138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827138))), 0x10823d2fu);
  /* 10823d2f pop ecx */
  ECX = (pop32());
  /* 10823d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823d32 pop ecx */
  ECX = (pop32());
  /* 10823d33 jne 0x10823d58 */
  if (!C.zf) goto L_10823d58;
  /* 10823d35 push ebx */
  push32((uint32_t)(EBX));
  /* 10823d36 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10823d38 call ebp */
  call_ind((uint32_t)(EBP), 0x10823d3au);
  /* 10823d3a push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10823d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10823d41 push ebx */
  push32((uint32_t)(EBX));
  /* 10823d42 call esi */
  call_ind((uint32_t)(ESI), 0x10823d44u);
  /* 10823d44 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10823d49 push 3 */
  push32((uint32_t)(0x3u));
  /* 10823d4b push ebx */
  push32((uint32_t)(EBX));
  /* 10823d4c call esi */
  call_ind((uint32_t)(ESI), 0x10823d4eu);
  /* 10823d4e push 0x10828394 */
  push32((uint32_t)(0x10828394u));
  /* 10823d53 call edi */
  call_ind((uint32_t)(EDI), 0x10823d55u);
  /* 10823d55 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10823d58:;
  /* 10823d58 pop edi */
  EDI = (pop32());
  /* 10823d59 pop esi */
  ESI = (pop32());
  /* 10823d5a pop ebp */
  EBP = (pop32());
  /* 10823d5b pop ebx */
  EBX = (pop32());
  /* 10823d5c pop ecx */
  ECX = (pop32());
  /* 10823d5d ret  */
  ESPCHK(0x10821795u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d5e @ 0x10823d5e (217 bytes, 57 insns) */
void f_10823d5e(void) {
  FTRACE(0x10823d5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10823d5e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10823d62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823d65 jne 0x10823df3 */
  if (!C.zf) goto L_10823df3;
  /* 10823d6b call dword ptr [0x108270a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270a4))), 0x10823d71u);
  /* 10823d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823d73 mov dword ptr [0x10828fd4], eax */
  w32((uint32_t)(0x10828fd4), (EAX));
  /* 10823d78 call 0x10824792 */
  push32(0x10823d7du); f_10824792();
  /* 10823d7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823d7f pop ecx */
  ECX = (pop32());
  /* 10823d80 je 0x10823dbe */
  if (C.zf) goto L_10823dbe;
  /* 10823d82 mov eax, dword ptr [0x10828fd4] */
  EAX = (r32((uint32_t)(0x10828fd4)));
  /* 10823d87 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10823d89 mov cl, byte ptr [0x10828fd5] */
  CL = (r8((uint32_t)(0x10828fd5)));
  /* 10823d8f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10823d94 shr dword ptr [0x10828fd4], 0x10 */
  w32((uint32_t)(0x10828fd4), (sh_shr((uint32_t)(r32((uint32_t)(0x10828fd4))), (0x10u)&0x1f, 32)));
  /* 10823d9b mov dword ptr [0x10828fdc], eax */
  w32((uint32_t)(0x10828fdc), (EAX));
  /* 10823da0 mov dword ptr [0x10828fe0], ecx */
  w32((uint32_t)(0x10828fe0), (ECX));
  /* 10823da6 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10823da9 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10823dab mov dword ptr [0x10828fd8], eax */
  w32((uint32_t)(0x10828fd8), (EAX));
  /* 10823db0 call 0x10824025 */
  push32(0x10823db5u); f_10824025();
  /* 10823db5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823db7 jne 0x10823dc2 */
  if (!C.zf) goto L_10823dc2;
  /* 10823db9 call 0x108247ce */
  push32(0x10823dbeu); f_108247ce();
L_10823dbe:;
  /* 10823dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10823dc0 jmp 0x10823e34 */
  goto L_10823e34;
L_10823dc2:;
  /* 10823dc2 call dword ptr [0x108270a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270a8))), 0x10823dc8u);
  /* 10823dc8 mov dword ptr [0x10829538], eax */
  w32((uint32_t)(0x10829538), (EAX));
  /* 10823dcd call 0x10824660 */
  push32(0x10823dd2u); f_10824660();
  /* 10823dd2 mov dword ptr [0x10828fc0], eax */
  w32((uint32_t)(0x10828fc0), (EAX));
  /* 10823dd7 call 0x1082414a */
  push32(0x10823ddcu); f_1082414a();
  /* 10823ddc call 0x10824413 */
  push32(0x10823de1u); f_10824413();
  /* 10823de1 call 0x1082435a */
  push32(0x10823de6u); f_1082435a();
  /* 10823de6 call 0x10823f07 */
  push32(0x10823debu); f_10823f07();
  /* 10823deb inc dword ptr [0x10828fbc] */
  { uint32_t _r=(r32((uint32_t)(0x10828fbc)))+1; w32((uint32_t)(0x10828fbc), (_r)); fl_inc(_r,32); }
  /* 10823df1 jmp 0x10823e31 */
  goto L_10823e31;
L_10823df3:;
  /* 10823df3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10823df5 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823df7 jne 0x10823e25 */
  if (!C.zf) goto L_10823e25;
  /* 10823df9 cmp dword ptr [0x10828fbc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10828fbc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823dff jle 0x10823dbe */
  if ((C.zf||C.sf!=C.of)) goto L_10823dbe;
  /* 10823e01 dec dword ptr [0x10828fbc] */
  { uint32_t _r=(r32((uint32_t)(0x10828fbc)))-1; w32((uint32_t)(0x10828fbc), (_r)); fl_dec(_r,32); }
  /* 10823e07 cmp dword ptr [0x1082900c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1082900c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823e0d jne 0x10823e14 */
  if (!C.zf) goto L_10823e14;
  /* 10823e0f call 0x10823f45 */
  push32(0x10823e14u); f_10823f45();
L_10823e14:;
  /* 10823e14 call 0x10824306 */
  push32(0x10823e19u); f_10824306();
  /* 10823e19 call 0x10824079 */
  push32(0x10823e1eu); f_10824079();
  /* 10823e1e call 0x108247ce */
  push32(0x10823e23u); f_108247ce();
  /* 10823e23 jmp 0x10823e31 */
  goto L_10823e31;
L_10823e25:;
  /* 10823e25 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823e28 jne 0x10823e31 */
  if (!C.zf) goto L_10823e31;
  /* 10823e2a push ecx */
  push32((uint32_t)(ECX));
  /* 10823e2b call 0x108240aa */
  push32(0x10823e30u); f_108240aa();
  /* 10823e30 pop ecx */
  ECX = (pop32());
L_10823e31:;
  /* 10823e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823e33 pop eax */
  EAX = (pop32());
L_10823e34:;
  /* 10823e34 ret 0xc */
  ESPCHK(0x10823d5eu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10823e37 (157 bytes, 73 insns) */
void f_10823e37(void) {
  FTRACE(0x10823e37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10823e37 push ebp */
  push32((uint32_t)(EBP));
  /* 10823e38 mov ebp, esp */
  EBP = (ESP);
  /* 10823e3a push ebx */
  push32((uint32_t)(EBX));
  /* 10823e3b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10823e3e push esi */
  push32((uint32_t)(ESI));
  /* 10823e3f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10823e42 push edi */
  push32((uint32_t)(EDI));
  /* 10823e43 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10823e46 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10823e48 jne 0x10823e53 */
  if (!C.zf) goto L_10823e53;
  /* 10823e4a cmp dword ptr [0x10828fbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10828fbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823e51 jmp 0x10823e79 */
  goto L_10823e79;
L_10823e53:;
  /* 10823e53 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823e56 je 0x10823e5d */
  if (C.zf) goto L_10823e5d;
  /* 10823e58 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823e5b jne 0x10823e7f */
  if (!C.zf) goto L_10823e7f;
L_10823e5d:;
  /* 10823e5d mov eax, dword ptr [0x1082953c] */
  EAX = (r32((uint32_t)(0x1082953c)));
  /* 10823e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823e64 je 0x10823e6f */
  if (C.zf) goto L_10823e6f;
  /* 10823e66 push edi */
  push32((uint32_t)(EDI));
  /* 10823e67 push esi */
  push32((uint32_t)(ESI));
  /* 10823e68 push ebx */
  push32((uint32_t)(EBX));
  /* 10823e69 call eax */
  call_ind((uint32_t)(EAX), 0x10823e6bu);
  /* 10823e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823e6d je 0x10823e7b */
  if (C.zf) goto L_10823e7b;
L_10823e6f:;
  /* 10823e6f push edi */
  push32((uint32_t)(EDI));
  /* 10823e70 push esi */
  push32((uint32_t)(ESI));
  /* 10823e71 push ebx */
  push32((uint32_t)(EBX));
  /* 10823e72 call 0x10823d5e */
  push32(0x10823e77u); f_10823d5e();
  /* 10823e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10823e79:;
  /* 10823e79 jne 0x10823e7f */
  if (!C.zf) goto L_10823e7f;
L_10823e7b:;
  /* 10823e7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10823e7d jmp 0x10823ecd */
  goto L_10823ecd;
L_10823e7f:;
  /* 10823e7f push edi */
  push32((uint32_t)(EDI));
  /* 10823e80 push esi */
  push32((uint32_t)(ESI));
  /* 10823e81 push ebx */
  push32((uint32_t)(EBX));
  /* 10823e82 call 0x10821000 */
  push32(0x10823e87u); f_10821000();
  /* 10823e87 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823e8a mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10823e8d jne 0x10823e9b */
  if (!C.zf) goto L_10823e9b;
  /* 10823e8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823e91 jne 0x10823eca */
  if (!C.zf) goto L_10823eca;
  /* 10823e93 push edi */
  push32((uint32_t)(EDI));
  /* 10823e94 push eax */
  push32((uint32_t)(EAX));
  /* 10823e95 push ebx */
  push32((uint32_t)(EBX));
  /* 10823e96 call 0x10823d5e */
  push32(0x10823e9bu); f_10823d5e();
L_10823e9b:;
  /* 10823e9b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10823e9d je 0x10823ea4 */
  if (C.zf) goto L_10823ea4;
  /* 10823e9f cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823ea2 jne 0x10823eca */
  if (!C.zf) goto L_10823eca;
L_10823ea4:;
  /* 10823ea4 push edi */
  push32((uint32_t)(EDI));
  /* 10823ea5 push esi */
  push32((uint32_t)(ESI));
  /* 10823ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 10823ea7 call 0x10823d5e */
  push32(0x10823eacu); f_10823d5e();
  /* 10823eac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823eae jne 0x10823eb3 */
  if (!C.zf) goto L_10823eb3;
  /* 10823eb0 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10823eb3:;
  /* 10823eb3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823eb7 je 0x10823eca */
  if (C.zf) goto L_10823eca;
  /* 10823eb9 mov eax, dword ptr [0x1082953c] */
  EAX = (r32((uint32_t)(0x1082953c)));
  /* 10823ebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823ec0 je 0x10823eca */
  if (C.zf) goto L_10823eca;
  /* 10823ec2 push edi */
  push32((uint32_t)(EDI));
  /* 10823ec3 push esi */
  push32((uint32_t)(ESI));
  /* 10823ec4 push ebx */
  push32((uint32_t)(EBX));
  /* 10823ec5 call eax */
  call_ind((uint32_t)(EAX), 0x10823ec7u);
  /* 10823ec7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10823eca:;
  /* 10823eca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10823ecd:;
  /* 10823ecd pop edi */
  EDI = (pop32());
  /* 10823ece pop esi */
  ESI = (pop32());
  /* 10823ecf pop ebx */
  EBX = (pop32());
  /* 10823ed0 pop ebp */
  EBP = (pop32());
  /* 10823ed1 ret 0xc */
  ESPCHK(0x10823e37u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10823ed4 (48 bytes, 15 insns) */
void f_10823ed4(void) {
  FTRACE(0x10823ed4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10823ed4 mov eax, dword ptr [0x10828fc8] */
  EAX = (r32((uint32_t)(0x10828fc8)));
  /* 10823ed9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823edc je 0x10823eeb */
  if (C.zf) goto L_10823eeb;
  /* 10823ede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823ee0 jne 0x10823ef0 */
  if (!C.zf) goto L_10823ef0;
  /* 10823ee2 cmp dword ptr [0x10828fcc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10828fcc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823ee9 jne 0x10823ef0 */
  if (!C.zf) goto L_10823ef0;
L_10823eeb:;
  /* 10823eeb call 0x10824843 */
  push32(0x10823ef0u); f_10824843();
L_10823ef0:;
  /* 10823ef0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10823ef4 call 0x1082487c */
  push32(0x10823ef9u); f_1082487c();
  /* 10823ef9 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10823efe call dword ptr [0x108287a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108287a0))), 0x10823f04u);
  /* 10823f04 pop ecx */
  ECX = (pop32());
  /* 10823f05 pop ecx */
  ECX = (pop32());
  /* 10823f06 ret  */
  ESPCHK(0x10823ed4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f07 @ 0x10823f07 (45 bytes, 12 insns) */
void f_10823f07(void) {
  FTRACE(0x10823f07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10823f07 mov eax, dword ptr [0x10829534] */
  EAX = (r32((uint32_t)(0x10829534)));
  /* 10823f0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823f0e je 0x10823f12 */
  if (C.zf) goto L_10823f12;
  /* 10823f10 call eax */
  call_ind((uint32_t)(EAX), 0x10823f12u);
L_10823f12:;
  /* 10823f12 push 0x10828010 */
  push32((uint32_t)(0x10828010u));
  /* 10823f17 push 0x10828008 */
  push32((uint32_t)(0x10828008u));
  /* 10823f1c call 0x1082400b */
  push32(0x10823f21u); f_1082400b();
  /* 10823f21 push 0x10828004 */
  push32((uint32_t)(0x10828004u));
  /* 10823f26 push 0x10828000 */
  push32((uint32_t)(0x10828000u));
  /* 10823f2b call 0x1082400b */
  push32(0x10823f30u); f_1082400b();
  /* 10823f30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823f33 ret  */
  ESPCHK(0x10823f07u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10823f34 (17 bytes, 6 insns) */
void f_10823f34(void) {
  FTRACE(0x10823f34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10823f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10823f36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823f38 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10823f3c call 0x10823f54 */
  push32(0x10823f41u); f_10823f54();
  /* 10823f41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823f44 ret  */
  ESPCHK(0x10823f34u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f45 @ 0x10823f45 (15 bytes, 6 insns) */
void f_10823f45(void) {
  FTRACE(0x10823f45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10823f45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10823f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10823f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10823f4b call 0x10823f54 */
  push32(0x10823f50u); f_10823f54();
  /* 10823f50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10823f53 ret  */
  ESPCHK(0x10823f45u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f54 @ 0x10823f54 (163 bytes, 53 insns) */
void f_10823f54(void) {
  FTRACE(0x10823f54u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10823f54 push edi */
  push32((uint32_t)(EDI));
  /* 10823f55 call 0x10823ff9 */
  push32(0x10823f5au); f_10823ff9();
  /* 10823f5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10823f5c pop edi */
  EDI = (pop32());
  /* 10823f5d cmp dword ptr [0x10829010], edi */
  { uint32_t _a=(r32((uint32_t)(0x10829010))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823f63 jne 0x10823f76 */
  if (!C.zf) goto L_10823f76;
  /* 10823f65 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10823f69 call dword ptr [0x10827098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827098))), 0x10823f6fu);
  /* 10823f6f push eax */
  push32((uint32_t)(EAX));
  /* 10823f70 call dword ptr [0x1082709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082709c))), 0x10823f76u);
L_10823f76:;
  /* 10823f76 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823f7b push ebx */
  push32((uint32_t)(EBX));
  /* 10823f7c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10823f80 mov dword ptr [0x1082900c], edi */
  w32((uint32_t)(0x1082900c), (EDI));
  /* 10823f86 mov byte ptr [0x10829008], bl */
  w8((uint32_t)(0x10829008), (BL));
  /* 10823f8c jne 0x10823fca */
  if (!C.zf) goto L_10823fca;
  /* 10823f8e mov eax, dword ptr [0x10829530] */
  EAX = (r32((uint32_t)(0x10829530)));
  /* 10823f93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823f95 je 0x10823fb9 */
  if (C.zf) goto L_10823fb9;
  /* 10823f97 mov ecx, dword ptr [0x1082952c] */
  ECX = (r32((uint32_t)(0x1082952c)));
  /* 10823f9d push esi */
  push32((uint32_t)(ESI));
  /* 10823f9e lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10823fa1 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823fa3 jb 0x10823fb8 */
  if (C.cf) goto L_10823fb8;
L_10823fa5:;
  /* 10823fa5 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10823fa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10823fa9 je 0x10823fad */
  if (C.zf) goto L_10823fad;
  /* 10823fab call eax */
  call_ind((uint32_t)(EAX), 0x10823fadu);
L_10823fad:;
  /* 10823fad sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10823fb0 cmp esi, dword ptr [0x10829530] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10829530))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10823fb6 jae 0x10823fa5 */
  if (!C.cf) goto L_10823fa5;
L_10823fb8:;
  /* 10823fb8 pop esi */
  ESI = (pop32());
L_10823fb9:;
  /* 10823fb9 push 0x10828018 */
  push32((uint32_t)(0x10828018u));
  /* 10823fbe push 0x10828014 */
  push32((uint32_t)(0x10828014u));
  /* 10823fc3 call 0x1082400b */
  push32(0x10823fc8u); f_1082400b();
  /* 10823fc8 pop ecx */
  ECX = (pop32());
  /* 10823fc9 pop ecx */
  ECX = (pop32());
L_10823fca:;
  /* 10823fca push 0x10828020 */
  push32((uint32_t)(0x10828020u));
  /* 10823fcf push 0x1082801c */
  push32((uint32_t)(0x1082801cu));
  /* 10823fd4 call 0x1082400b */
  push32(0x10823fd9u); f_1082400b();
  /* 10823fd9 pop ecx */
  ECX = (pop32());
  /* 10823fda pop ecx */
  ECX = (pop32());
  /* 10823fdb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10823fdd pop ebx */
  EBX = (pop32());
  /* 10823fde je 0x10823fe7 */
  if (C.zf) goto L_10823fe7;
  /* 10823fe0 call 0x10824002 */
  push32(0x10823fe5u); f_10824002();
  /* 10823fe5 pop edi */
  EDI = (pop32());
  /* 10823fe6 ret  */
  ESPCHK(0x10823f54u, _esp0);
  ESP += 4; return;
L_10823fe7:;
  /* 10823fe7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10823feb mov dword ptr [0x10829010], edi */
  w32((uint32_t)(0x10829010), (EDI));
  /* 10823ff1 call dword ptr [0x108270a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108270a0))), 0x10823ff7u);
  /* 10823ff7 pop edi */
  EDI = (pop32());
  /* 10823ff8 ret  */
  ESPCHK(0x10823f54u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ff9 @ 0x10823ff9 (9 bytes, 4 insns) */
void f_10823ff9(void) {
  FTRACE(0x10823ff9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10823ff9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10823ffb call 0x10824a64 */
  push32(0x10824000u); f_10824a64();
  /* 10824000 pop ecx */
  ECX = (pop32());
  /* 10824001 ret  */
  ESPCHK(0x10823ff9u, _esp0);
  ESP += 4; return;
}

/* FUN_10004002 @ 0x10824002 (9 bytes, 4 insns) */
void f_10824002(void) {
  FTRACE(0x10824002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824002 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10824004 call 0x10824ac5 */
  push32(0x10824009u); f_10824ac5();
  /* 10824009 pop ecx */
  ECX = (pop32());
  /* 1082400a ret  */
  ESPCHK(0x10824002u, _esp0);
  ESP += 4; return;
}

/* FUN_1000400b @ 0x1082400b (26 bytes, 12 insns) */
void f_1082400b(void) {
  FTRACE(0x1082400bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1082400b push esi */
  push32((uint32_t)(ESI));
  /* 1082400c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10824010:;
  /* 10824010 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824014 jae 0x10824023 */
  if (!C.cf) goto L_10824023;
  /* 10824016 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10824018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082401a je 0x1082401e */
  if (C.zf) goto L_1082401e;
  /* 1082401c call eax */
  call_ind((uint32_t)(EAX), 0x1082401eu);
L_1082401e:;
  /* 1082401e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10824021 jmp 0x10824010 */
  goto L_10824010;
L_10824023:;
  /* 10824023 pop esi */
  ESI = (pop32());
  /* 10824024 ret  */
  ESPCHK(0x1082400bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004025 @ 0x10824025 (84 bytes, 32 insns) */
void f_10824025(void) {
  FTRACE(0x10824025u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824025 push esi */
  push32((uint32_t)(ESI));
  /* 10824026 call 0x108249cf */
  push32(0x1082402bu); f_108249cf();
  /* 1082402b call dword ptr [0x1082708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082708c))), 0x10824031u);
  /* 10824031 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824034 mov dword ptr [0x108287a4], eax */
  w32((uint32_t)(0x108287a4), (EAX));
  /* 10824039 je 0x10824075 */
  if (C.zf) goto L_10824075;
  /* 1082403b push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1082403d push 1 */
  push32((uint32_t)(0x1u));
  /* 1082403f call 0x10824ada */
  push32(0x10824044u); f_10824ada();
  /* 10824044 mov esi, eax */
  ESI = (EAX);
  /* 10824046 pop ecx */
  ECX = (pop32());
  /* 10824047 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824049 pop ecx */
  ECX = (pop32());
  /* 1082404a je 0x10824075 */
  if (C.zf) goto L_10824075;
  /* 1082404c push esi */
  push32((uint32_t)(ESI));
  /* 1082404d push dword ptr [0x108287a4] */
  push32((uint32_t)(r32((uint32_t)(0x108287a4))));
  /* 10824053 call dword ptr [0x10827090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827090))), 0x10824059u);
  /* 10824059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082405b je 0x10824075 */
  if (C.zf) goto L_10824075;
  /* 1082405d push esi */
  push32((uint32_t)(ESI));
  /* 1082405e call 0x10824097 */
  push32(0x10824063u); f_10824097();
  /* 10824063 pop ecx */
  ECX = (pop32());
  /* 10824064 call dword ptr [0x10827094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827094))), 0x1082406au);
  /* 1082406a or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1082406e push 1 */
  push32((uint32_t)(0x1u));
  /* 10824070 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10824072 pop eax */
  EAX = (pop32());
  /* 10824073 pop esi */
  ESI = (pop32());
  /* 10824074 ret  */
  ESPCHK(0x10824025u, _esp0);
  ESP += 4; return;
L_10824075:;
  /* 10824075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824077 pop esi */
  ESI = (pop32());
  /* 10824078 ret  */
  ESPCHK(0x10824025u, _esp0);
  ESP += 4; return;
}

/* FUN_10004079 @ 0x10824079 (30 bytes, 8 insns) */
void f_10824079(void) {
  FTRACE(0x10824079u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824079 call 0x108249f8 */
  push32(0x1082407eu); f_108249f8();
  /* 1082407e mov eax, dword ptr [0x108287a4] */
  EAX = (r32((uint32_t)(0x108287a4)));
  /* 10824083 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824086 je 0x10824096 */
  if (C.zf) goto L_10824096;
  /* 10824088 push eax */
  push32((uint32_t)(EAX));
  /* 10824089 call dword ptr [0x10827088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827088))), 0x1082408fu);
  /* 1082408f or dword ptr [0x108287a4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x108287a4)))|(0xffffffffu); w32((uint32_t)(0x108287a4), (_r)); fl_logic(_r,32); }
L_10824096:;
  /* 10824096 ret  */
  ESPCHK(0x10824079u, _esp0);
  ESP += 4; return;
}

/* FUN_10004097 @ 0x10824097 (19 bytes, 4 insns) */
void f_10824097(void) {
  FTRACE(0x10824097u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824097 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1082409b mov dword ptr [eax + 0x50], 0x10828920 */
  w32((uint32_t)(EAX + 0x50), (0x10828920u));
  /* 108240a2 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 108240a9 ret  */
  ESPCHK(0x10824097u, _esp0);
  ESP += 4; return;
}

/* FUN_100040aa @ 0x108240aa (160 bytes, 62 insns) */
void f_108240aa(void) {
  FTRACE(0x108240aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108240aa mov eax, dword ptr [0x108287a4] */
  EAX = (r32((uint32_t)(0x108287a4)));
  /* 108240af cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108240b2 je 0x10824149 */
  if (C.zf) goto L_10824149;
  /* 108240b8 push esi */
  push32((uint32_t)(ESI));
  /* 108240b9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 108240bd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 108240bf jne 0x108240ce */
  if (!C.zf) goto L_108240ce;
  /* 108240c1 push eax */
  push32((uint32_t)(EAX));
  /* 108240c2 call dword ptr [0x10827084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827084))), 0x108240c8u);
  /* 108240c8 mov esi, eax */
  ESI = (EAX);
  /* 108240ca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 108240cc je 0x1082413a */
  if (C.zf) goto L_1082413a;
L_108240ce:;
  /* 108240ce mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 108240d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108240d3 je 0x108240dc */
  if (C.zf) goto L_108240dc;
  /* 108240d5 push eax */
  push32((uint32_t)(EAX));
  /* 108240d6 call 0x10824b67 */
  push32(0x108240dbu); f_10824b67();
  /* 108240db pop ecx */
  ECX = (pop32());
L_108240dc:;
  /* 108240dc mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 108240df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108240e1 je 0x108240ea */
  if (C.zf) goto L_108240ea;
  /* 108240e3 push eax */
  push32((uint32_t)(EAX));
  /* 108240e4 call 0x10824b67 */
  push32(0x108240e9u); f_10824b67();
  /* 108240e9 pop ecx */
  ECX = (pop32());
L_108240ea:;
  /* 108240ea mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 108240ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108240ef je 0x108240f8 */
  if (C.zf) goto L_108240f8;
  /* 108240f1 push eax */
  push32((uint32_t)(EAX));
  /* 108240f2 call 0x10824b67 */
  push32(0x108240f7u); f_10824b67();
  /* 108240f7 pop ecx */
  ECX = (pop32());
L_108240f8:;
  /* 108240f8 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 108240fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108240fd je 0x10824106 */
  if (C.zf) goto L_10824106;
  /* 108240ff push eax */
  push32((uint32_t)(EAX));
  /* 10824100 call 0x10824b67 */
  push32(0x10824105u); f_10824b67();
  /* 10824105 pop ecx */
  ECX = (pop32());
L_10824106:;
  /* 10824106 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10824109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082410b je 0x10824114 */
  if (C.zf) goto L_10824114;
  /* 1082410d push eax */
  push32((uint32_t)(EAX));
  /* 1082410e call 0x10824b67 */
  push32(0x10824113u); f_10824b67();
  /* 10824113 pop ecx */
  ECX = (pop32());
L_10824114:;
  /* 10824114 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10824117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10824119 je 0x10824122 */
  if (C.zf) goto L_10824122;
  /* 1082411b push eax */
  push32((uint32_t)(EAX));
  /* 1082411c call 0x10824b67 */
  push32(0x10824121u); f_10824b67();
  /* 10824121 pop ecx */
  ECX = (pop32());
L_10824122:;
  /* 10824122 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10824125 cmp eax, 0x10828920 */
  { uint32_t _a=(EAX),_b=(0x10828920u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082412a je 0x10824133 */
  if (C.zf) goto L_10824133;
  /* 1082412c push eax */
  push32((uint32_t)(EAX));
  /* 1082412d call 0x10824b67 */
  push32(0x10824132u); f_10824b67();
  /* 10824132 pop ecx */
  ECX = (pop32());
L_10824133:;
  /* 10824133 push esi */
  push32((uint32_t)(ESI));
  /* 10824134 call 0x10824b67 */
  push32(0x10824139u); f_10824b67();
  /* 10824139 pop ecx */
  ECX = (pop32());
L_1082413a:;
  /* 1082413a push 0 */
  push32((uint32_t)(0x0u));
  /* 1082413c push dword ptr [0x108287a4] */
  push32((uint32_t)(r32((uint32_t)(0x108287a4))));
  /* 10824142 call dword ptr [0x10827090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827090))), 0x10824148u);
  /* 10824148 pop esi */
  ESI = (pop32());
L_10824149:;
  /* 10824149 ret  */
  ESPCHK(0x108240aau, _esp0);
  ESP += 4; return;
}

/* FUN_1000414a @ 0x1082414a (444 bytes, 150 insns) */
void f_1082414a(void) {
  FTRACE(0x1082414au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1082414a push ebp */
  push32((uint32_t)(EBP));
  /* 1082414b mov ebp, esp */
  EBP = (ESP);
  /* 1082414d sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824150 push ebx */
  push32((uint32_t)(EBX));
  /* 10824151 push esi */
  push32((uint32_t)(ESI));
  /* 10824152 push edi */
  push32((uint32_t)(EDI));
  /* 10824153 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10824158 call 0x10824baf */
  push32(0x1082415du); f_10824baf();
  /* 1082415d mov esi, eax */
  ESI = (EAX);
  /* 1082415f pop ecx */
  ECX = (pop32());
  /* 10824160 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824162 jne 0x1082416c */
  if (!C.zf) goto L_1082416c;
  /* 10824164 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10824166 call 0x10823ed4 */
  push32(0x1082416bu); f_10823ed4();
  /* 1082416b pop ecx */
  ECX = (pop32());
L_1082416c:;
  /* 1082416c mov dword ptr [0x10829420], esi */
  w32((uint32_t)(0x10829420), (ESI));
  /* 10824172 mov dword ptr [0x10829520], 0x20 */
  w32((uint32_t)(0x10829520), (0x20u));
  /* 1082417c lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10824182:;
  /* 10824182 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824184 jae 0x108241a4 */
  if (!C.cf) goto L_108241a4;
  /* 10824186 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1082418a or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1082418d and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10824191 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10824195 mov eax, dword ptr [0x10829420] */
  EAX = (r32((uint32_t)(0x10829420)));
  /* 1082419a add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1082419d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108241a2 jmp 0x10824182 */
  goto L_10824182;
L_108241a4:;
  /* 108241a4 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 108241a7 push eax */
  push32((uint32_t)(EAX));
  /* 108241a8 call dword ptr [0x10827074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827074))), 0x108241aeu);
  /* 108241ae cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 108241b3 je 0x1082428a */
  if (C.zf) goto L_1082428a;
  /* 108241b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108241bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108241be je 0x1082428a */
  if (C.zf) goto L_1082428a;
  /* 108241c4 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 108241c6 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 108241c9 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 108241cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108241cf mov eax, 0x800 */
  EAX = (0x800u);
  /* 108241d4 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108241d6 jl 0x108241da */
  if ((C.sf!=C.of)) goto L_108241da;
  /* 108241d8 mov edi, eax */
  EDI = (EAX);
L_108241da:;
  /* 108241da cmp dword ptr [0x10829520], edi */
  { uint32_t _a=(r32((uint32_t)(0x10829520))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108241e0 jge 0x10824238 */
  if ((C.sf==C.of)) goto L_10824238;
  /* 108241e2 mov esi, 0x10829424 */
  ESI = (0x10829424u);
L_108241e7:;
  /* 108241e7 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108241ec call 0x10824baf */
  push32(0x108241f1u); f_10824baf();
  /* 108241f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108241f3 pop ecx */
  ECX = (pop32());
  /* 108241f4 je 0x10824232 */
  if (C.zf) goto L_10824232;
  /* 108241f6 add dword ptr [0x10829520], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10829520))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10829520), (_r)); fl_add(_a,_b,_r,32); }
  /* 108241fd mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 108241ff lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10824205:;
  /* 10824205 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824207 jae 0x10824225 */
  if (!C.cf) goto L_10824225;
  /* 10824209 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1082420d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10824210 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10824214 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10824218 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1082421a add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1082421d add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824223 jmp 0x10824205 */
  goto L_10824205;
L_10824225:;
  /* 10824225 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10824228 cmp dword ptr [0x10829520], edi */
  { uint32_t _a=(r32((uint32_t)(0x10829520))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082422e jl 0x108241e7 */
  if ((C.sf!=C.of)) goto L_108241e7;
  /* 10824230 jmp 0x10824238 */
  goto L_10824238;
L_10824232:;
  /* 10824232 mov edi, dword ptr [0x10829520] */
  EDI = (r32((uint32_t)(0x10829520)));
L_10824238:;
  /* 10824238 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1082423a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1082423c jle 0x1082428a */
  if ((C.zf||C.sf!=C.of)) goto L_1082428a;
L_1082423e:;
  /* 1082423e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10824241 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10824243 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824246 je 0x10824280 */
  if (C.zf) goto L_10824280;
  /* 10824248 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1082424a test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1082424c je 0x10824280 */
  if (C.zf) goto L_10824280;
  /* 1082424e test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10824250 jne 0x1082425d */
  if (!C.zf) goto L_1082425d;
  /* 10824252 push ecx */
  push32((uint32_t)(ECX));
  /* 10824253 call dword ptr [0x10827078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827078))), 0x10824259u);
  /* 10824259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082425b je 0x10824280 */
  if (C.zf) goto L_10824280;
L_1082425d:;
  /* 1082425d mov ecx, esi */
  ECX = (ESI);
  /* 1082425f mov eax, esi */
  EAX = (ESI);
  /* 10824261 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10824264 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10824267 mov ecx, dword ptr [ecx*4 + 0x10829420] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10829420)));
  /* 1082426e lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10824271 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10824274 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10824277 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10824279 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1082427b mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 1082427d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10824280:;
  /* 10824280 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10824284 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10824285 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10824286 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824288 jl 0x1082423e */
  if ((C.sf!=C.of)) goto L_1082423e;
L_1082428a:;
  /* 1082428a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1082428c:;
  /* 1082428c mov ecx, dword ptr [0x10829420] */
  ECX = (r32((uint32_t)(0x10829420)));
  /* 10824292 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10824295 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824299 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1082429c jne 0x108242eb */
  if (!C.zf) goto L_108242eb;
  /* 1082429e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 108242a0 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 108242a4 jne 0x108242ab */
  if (!C.zf) goto L_108242ab;
  /* 108242a6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 108242a8 pop eax */
  EAX = (pop32());
  /* 108242a9 jmp 0x108242b5 */
  goto L_108242b5;
L_108242ab:;
  /* 108242ab mov eax, ebx */
  EAX = (EBX);
  /* 108242ad dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 108242ae neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108242b0 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108242b2 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108242b5:;
  /* 108242b5 push eax */
  push32((uint32_t)(EAX));
  /* 108242b6 call dword ptr [0x1082707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082707c))), 0x108242bcu);
  /* 108242bc mov edi, eax */
  EDI = (EAX);
  /* 108242be cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108242c1 je 0x108242da */
  if (C.zf) goto L_108242da;
  /* 108242c3 push edi */
  push32((uint32_t)(EDI));
  /* 108242c4 call dword ptr [0x10827078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827078))), 0x108242cau);
  /* 108242ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108242cc je 0x108242da */
  if (C.zf) goto L_108242da;
  /* 108242ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108242d3 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 108242d5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108242d8 jne 0x108242e0 */
  if (!C.zf) goto L_108242e0;
L_108242da:;
  /* 108242da or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 108242de jmp 0x108242ef */
  goto L_108242ef;
L_108242e0:;
  /* 108242e0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108242e3 jne 0x108242ef */
  if (!C.zf) goto L_108242ef;
  /* 108242e5 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 108242e9 jmp 0x108242ef */
  goto L_108242ef;
L_108242eb:;
  /* 108242eb or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_108242ef:;
  /* 108242ef inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 108242f0 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108242f3 jl 0x1082428c */
  if ((C.sf!=C.of)) goto L_1082428c;
  /* 108242f5 push dword ptr [0x10829520] */
  push32((uint32_t)(r32((uint32_t)(0x10829520))));
  /* 108242fb call dword ptr [0x10827080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827080))), 0x10824301u);
  /* 10824301 pop edi */
  EDI = (pop32());
  /* 10824302 pop esi */
  ESI = (pop32());
  /* 10824303 pop ebx */
  EBX = (pop32());
  /* 10824304 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10824305 ret  */
  ESPCHK(0x1082414au, _esp0);
  ESP += 4; return;
}

/* FUN_10004306 @ 0x10824306 (84 bytes, 33 insns) */
void f_10824306(void) {
  FTRACE(0x10824306u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824306 push ebx */
  push32((uint32_t)(EBX));
  /* 10824307 push esi */
  push32((uint32_t)(ESI));
  /* 10824308 push edi */
  push32((uint32_t)(EDI));
  /* 10824309 mov esi, 0x10829420 */
  ESI = (0x10829420u);
L_1082430e:;
  /* 1082430e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10824310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10824312 je 0x1082434b */
  if (C.zf) goto L_1082434b;
  /* 10824314 mov edi, eax */
  EDI = (EAX);
  /* 10824316 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1082431b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082431d jae 0x10824340 */
  if (!C.cf) goto L_10824340;
  /* 1082431f lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10824322:;
  /* 10824322 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824326 je 0x1082432f */
  if (C.zf) goto L_1082432f;
  /* 10824328 push ebx */
  push32((uint32_t)(EBX));
  /* 10824329 call dword ptr [0x10827070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827070))), 0x1082432fu);
L_1082432f:;
  /* 1082432f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10824331 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10824334 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824339 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1082433c cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082433e jb 0x10824322 */
  if (C.cf) goto L_10824322;
L_10824340:;
  /* 10824340 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10824342 call 0x10824b67 */
  push32(0x10824347u); f_10824b67();
  /* 10824347 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1082434a pop ecx */
  ECX = (pop32());
L_1082434b:;
  /* 1082434b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1082434e cmp esi, 0x10829520 */
  { uint32_t _a=(ESI),_b=(0x10829520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824354 jl 0x1082430e */
  if ((C.sf!=C.of)) goto L_1082430e;
  /* 10824356 pop edi */
  EDI = (pop32());
  /* 10824357 pop esi */
  ESI = (pop32());
  /* 10824358 pop ebx */
  EBX = (pop32());
  /* 10824359 ret  */
  ESPCHK(0x10824306u, _esp0);
  ESP += 4; return;
}

/* FUN_1000435a @ 0x1082435a (185 bytes, 71 insns) */
void f_1082435a(void) {
  FTRACE(0x1082435au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1082435a push ebx */
  push32((uint32_t)(EBX));
  /* 1082435b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1082435d cmp dword ptr [0x10829528], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10829528))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824363 push esi */
  push32((uint32_t)(ESI));
  /* 10824364 push edi */
  push32((uint32_t)(EDI));
  /* 10824365 jne 0x1082436c */
  if (!C.zf) goto L_1082436c;
  /* 10824367 call 0x10825183 */
  push32(0x1082436cu); f_10825183();
L_1082436c:;
  /* 1082436c mov esi, dword ptr [0x10828fc0] */
  ESI = (r32((uint32_t)(0x10828fc0)));
  /* 10824372 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10824374:;
  /* 10824374 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10824376 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824378 je 0x1082438c */
  if (C.zf) goto L_1082438c;
  /* 1082437a cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1082437c je 0x1082437f */
  if (C.zf) goto L_1082437f;
  /* 1082437e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1082437f:;
  /* 1082437f push esi */
  push32((uint32_t)(ESI));
  /* 10824380 call 0x10824d30 */
  push32(0x10824385u); f_10824d30();
  /* 10824385 pop ecx */
  ECX = (pop32());
  /* 10824386 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1082438a jmp 0x10824374 */
  goto L_10824374;
L_1082438c:;
  /* 1082438c lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10824393 push eax */
  push32((uint32_t)(EAX));
  /* 10824394 call 0x10824baf */
  push32(0x10824399u); f_10824baf();
  /* 10824399 mov esi, eax */
  ESI = (EAX);
  /* 1082439b pop ecx */
  ECX = (pop32());
  /* 1082439c cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082439e mov dword ptr [0x10828ff0], esi */
  w32((uint32_t)(0x10828ff0), (ESI));
  /* 108243a4 jne 0x108243ae */
  if (!C.zf) goto L_108243ae;
  /* 108243a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 108243a8 call 0x10823ed4 */
  push32(0x108243adu); f_10823ed4();
  /* 108243ad pop ecx */
  ECX = (pop32());
L_108243ae:;
  /* 108243ae mov edi, dword ptr [0x10828fc0] */
  EDI = (r32((uint32_t)(0x10828fc0)));
  /* 108243b4 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108243b6 je 0x108243f1 */
  if (C.zf) goto L_108243f1;
  /* 108243b8 push ebp */
  push32((uint32_t)(EBP));
L_108243b9:;
  /* 108243b9 push edi */
  push32((uint32_t)(EDI));
  /* 108243ba call 0x10824d30 */
  push32(0x108243bfu); f_10824d30();
  /* 108243bf mov ebp, eax */
  EBP = (EAX);
  /* 108243c1 pop ecx */
  ECX = (pop32());
  /* 108243c2 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 108243c3 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108243c6 je 0x108243ea */
  if (C.zf) goto L_108243ea;
  /* 108243c8 push ebp */
  push32((uint32_t)(EBP));
  /* 108243c9 call 0x10824baf */
  push32(0x108243ceu); f_10824baf();
  /* 108243ce cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108243d0 pop ecx */
  ECX = (pop32());
  /* 108243d1 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 108243d3 jne 0x108243dd */
  if (!C.zf) goto L_108243dd;
  /* 108243d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 108243d7 call 0x10823ed4 */
  push32(0x108243dcu); f_10823ed4();
  /* 108243dc pop ecx */
  ECX = (pop32());
L_108243dd:;
  /* 108243dd push edi */
  push32((uint32_t)(EDI));
  /* 108243de push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 108243e0 call 0x10824c40 */
  push32(0x108243e5u); f_10824c40();
  /* 108243e5 pop ecx */
  ECX = (pop32());
  /* 108243e6 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108243e9 pop ecx */
  ECX = (pop32());
L_108243ea:;
  /* 108243ea add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108243ec cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108243ee jne 0x108243b9 */
  if (!C.zf) goto L_108243b9;
  /* 108243f0 pop ebp */
  EBP = (pop32());
L_108243f1:;
  /* 108243f1 push dword ptr [0x10828fc0] */
  push32((uint32_t)(r32((uint32_t)(0x10828fc0))));
  /* 108243f7 call 0x10824b67 */
  push32(0x108243fcu); f_10824b67();
  /* 108243fc pop ecx */
  ECX = (pop32());
  /* 108243fd mov dword ptr [0x10828fc0], ebx */
  w32((uint32_t)(0x10828fc0), (EBX));
  /* 10824403 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10824405 pop edi */
  EDI = (pop32());
  /* 10824406 pop esi */
  ESI = (pop32());
  /* 10824407 mov dword ptr [0x10829524], 1 */
  w32((uint32_t)(0x10829524), (0x1u));
  /* 10824411 pop ebx */
  EBX = (pop32());
  /* 10824412 ret  */
  ESPCHK(0x1082435au, _esp0);
  ESP += 4; return;
}

/* FUN_10004413 @ 0x10824413 (153 bytes, 62 insns) */
void f_10824413(void) {
  FTRACE(0x10824413u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824413 push ebp */
  push32((uint32_t)(EBP));
  /* 10824414 mov ebp, esp */
  EBP = (ESP);
  /* 10824416 push ecx */
  push32((uint32_t)(ECX));
  /* 10824417 push ecx */
  push32((uint32_t)(ECX));
  /* 10824418 push ebx */
  push32((uint32_t)(EBX));
  /* 10824419 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1082441b cmp dword ptr [0x10829528], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10829528))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824421 push esi */
  push32((uint32_t)(ESI));
  /* 10824422 push edi */
  push32((uint32_t)(EDI));
  /* 10824423 jne 0x1082442a */
  if (!C.zf) goto L_1082442a;
  /* 10824425 call 0x10825183 */
  push32(0x1082442au); f_10825183();
L_1082442a:;
  /* 1082442a mov esi, 0x10829014 */
  ESI = (0x10829014u);
  /* 1082442f push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10824434 push esi */
  push32((uint32_t)(ESI));
  /* 10824435 push ebx */
  push32((uint32_t)(EBX));
  /* 10824436 call dword ptr [0x1082706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082706c))), 0x1082443cu);
  /* 1082443c mov eax, dword ptr [0x10829538] */
  EAX = (r32((uint32_t)(0x10829538)));
  /* 10824441 mov dword ptr [0x10829000], esi */
  w32((uint32_t)(0x10829000), (ESI));
  /* 10824447 mov edi, esi */
  EDI = (ESI);
  /* 10824449 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1082444b je 0x1082444f */
  if (C.zf) goto L_1082444f;
  /* 1082444d mov edi, eax */
  EDI = (EAX);
L_1082444f:;
  /* 1082444f lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10824452 push eax */
  push32((uint32_t)(EAX));
  /* 10824453 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10824456 push eax */
  push32((uint32_t)(EAX));
  /* 10824457 push ebx */
  push32((uint32_t)(EBX));
  /* 10824458 push ebx */
  push32((uint32_t)(EBX));
  /* 10824459 push edi */
  push32((uint32_t)(EDI));
  /* 1082445a call 0x108244ac */
  push32(0x1082445fu); f_108244ac();
  /* 1082445f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10824462 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10824465 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10824468 push eax */
  push32((uint32_t)(EAX));
  /* 10824469 call 0x10824baf */
  push32(0x1082446eu); f_10824baf();
  /* 1082446e mov esi, eax */
  ESI = (EAX);
  /* 10824470 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10824473 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824475 jne 0x1082447f */
  if (!C.zf) goto L_1082447f;
  /* 10824477 push 8 */
  push32((uint32_t)(0x8u));
  /* 10824479 call 0x10823ed4 */
  push32(0x1082447eu); f_10823ed4();
  /* 1082447e pop ecx */
  ECX = (pop32());
L_1082447f:;
  /* 1082447f lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10824482 push eax */
  push32((uint32_t)(EAX));
  /* 10824483 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10824486 push eax */
  push32((uint32_t)(EAX));
  /* 10824487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1082448a lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 1082448d push eax */
  push32((uint32_t)(EAX));
  /* 1082448e push esi */
  push32((uint32_t)(ESI));
  /* 1082448f push edi */
  push32((uint32_t)(EDI));
  /* 10824490 call 0x108244ac */
  push32(0x10824495u); f_108244ac();
  /* 10824495 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10824498 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082449b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1082449c mov dword ptr [0x10828fe8], esi */
  w32((uint32_t)(0x10828fe8), (ESI));
  /* 108244a2 pop edi */
  EDI = (pop32());
  /* 108244a3 pop esi */
  ESI = (pop32());
  /* 108244a4 mov dword ptr [0x10828fe4], eax */
  w32((uint32_t)(0x10828fe4), (EAX));
  /* 108244a9 pop ebx */
  EBX = (pop32());
  /* 108244aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108244ab ret  */
  ESPCHK(0x10824413u, _esp0);
  ESP += 4; return;
}

/* FUN_100044ac @ 0x108244ac (436 bytes, 187 insns) */
void f_108244ac(void) {
  FTRACE(0x108244acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108244ac push ebp */
  push32((uint32_t)(EBP));
  /* 108244ad mov ebp, esp */
  EBP = (ESP);
  /* 108244af mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108244b2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108244b5 push ebx */
  push32((uint32_t)(EBX));
  /* 108244b6 push esi */
  push32((uint32_t)(ESI));
  /* 108244b7 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 108244ba mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 108244bd push edi */
  push32((uint32_t)(EDI));
  /* 108244be mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 108244c1 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 108244c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108244ca test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 108244cc je 0x108244d6 */
  if (C.zf) goto L_108244d6;
  /* 108244ce mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 108244d0 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108244d3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_108244d6:;
  /* 108244d6 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108244d9 jne 0x1082451f */
  if (!C.zf) goto L_1082451f;
L_108244db:;
  /* 108244db mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 108244de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108244df cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108244e2 je 0x1082450d */
  if (C.zf) goto L_1082450d;
  /* 108244e4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108244e6 je 0x1082450d */
  if (C.zf) goto L_1082450d;
  /* 108244e8 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 108244eb test byte ptr [edx + 0x10829301], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10829301)))&(0x4u); fl_logic(_r,8); }
  /* 108244f2 je 0x10824500 */
  if (C.zf) goto L_10824500;
  /* 108244f4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 108244f6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 108244f8 je 0x10824500 */
  if (C.zf) goto L_10824500;
  /* 108244fa mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 108244fc mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 108244fe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 108244ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10824500:;
  /* 10824500 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10824502 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824504 je 0x108244db */
  if (C.zf) goto L_108244db;
  /* 10824506 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10824508 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1082450a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1082450b jmp 0x108244db */
  goto L_108244db;
L_1082450d:;
  /* 1082450d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1082450f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824511 je 0x10824517 */
  if (C.zf) goto L_10824517;
  /* 10824513 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10824516 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10824517:;
  /* 10824517 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1082451a jne 0x10824562 */
  if (!C.zf) goto L_10824562;
  /* 1082451c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1082451d jmp 0x10824562 */
  goto L_10824562;
L_1082451f:;
  /* 1082451f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10824521 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824523 je 0x1082452a */
  if (C.zf) goto L_1082452a;
  /* 10824525 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10824527 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10824529 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1082452a:;
  /* 1082452a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1082452c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1082452d movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10824530 test byte ptr [ebx + 0x10829301], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10829301)))&(0x4u); fl_logic(_r,8); }
  /* 10824537 je 0x10824545 */
  if (C.zf) goto L_10824545;
  /* 10824539 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1082453b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1082453d je 0x10824544 */
  if (C.zf) goto L_10824544;
  /* 1082453f mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10824541 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10824543 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10824544:;
  /* 10824544 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10824545:;
  /* 10824545 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824548 je 0x10824553 */
  if (C.zf) goto L_10824553;
  /* 1082454a test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1082454c je 0x10824557 */
  if (C.zf) goto L_10824557;
  /* 1082454e cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824551 jne 0x1082451f */
  if (!C.zf) goto L_1082451f;
L_10824553:;
  /* 10824553 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10824555 jne 0x1082455a */
  if (!C.zf) goto L_1082455a;
L_10824557:;
  /* 10824557 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10824558 jmp 0x10824562 */
  goto L_10824562;
L_1082455a:;
  /* 1082455a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1082455c je 0x10824562 */
  if (C.zf) goto L_10824562;
  /* 1082455e and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10824562:;
  /* 10824562 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10824566:;
  /* 10824566 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824569 je 0x1082464f */
  if (C.zf) goto L_1082464f;
L_1082456f:;
  /* 1082456f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10824571 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824574 je 0x1082457b */
  if (C.zf) goto L_1082457b;
  /* 10824576 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824579 jne 0x1082457e */
  if (!C.zf) goto L_1082457e;
L_1082457b:;
  /* 1082457b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1082457c jmp 0x1082456f */
  goto L_1082456f;
L_1082457e:;
  /* 1082457e cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824581 je 0x1082464f */
  if (C.zf) goto L_1082464f;
  /* 10824587 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10824589 je 0x10824593 */
  if (C.zf) goto L_10824593;
  /* 1082458b mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1082458d add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10824590 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10824593:;
  /* 10824593 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10824596 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10824598:;
  /* 10824598 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 1082459f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_108245a1:;
  /* 108245a1 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108245a4 jne 0x108245aa */
  if (!C.zf) goto L_108245aa;
  /* 108245a6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108245a7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 108245a8 jmp 0x108245a1 */
  goto L_108245a1;
L_108245aa:;
  /* 108245aa cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108245ad jne 0x108245db */
  if (!C.zf) goto L_108245db;
  /* 108245af test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 108245b2 jne 0x108245d9 */
  if (!C.zf) goto L_108245d9;
  /* 108245b4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 108245b6 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108245b9 je 0x108245c8 */
  if (C.zf) goto L_108245c8;
  /* 108245bb cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108245bf lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 108245c2 jne 0x108245c8 */
  if (!C.zf) goto L_108245c8;
  /* 108245c4 mov eax, edx */
  EAX = (EDX);
  /* 108245c6 jmp 0x108245cb */
  goto L_108245cb;
L_108245c8:;
  /* 108245c8 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_108245cb:;
  /* 108245cb mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 108245ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108245d0 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108245d3 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 108245d6 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_108245d9:;
  /* 108245d9 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_108245db:;
  /* 108245db mov edx, ebx */
  EDX = (EBX);
  /* 108245dd dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 108245de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108245e0 je 0x108245f0 */
  if (C.zf) goto L_108245f0;
  /* 108245e2 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_108245e3:;
  /* 108245e3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 108245e5 je 0x108245eb */
  if (C.zf) goto L_108245eb;
  /* 108245e7 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 108245ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_108245eb:;
  /* 108245eb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 108245ed dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 108245ee jne 0x108245e3 */
  if (!C.zf) goto L_108245e3;
L_108245f0:;
  /* 108245f0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 108245f2 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108245f4 je 0x10824640 */
  if (C.zf) goto L_10824640;
  /* 108245f6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108245fa jne 0x10824606 */
  if (!C.zf) goto L_10824606;
  /* 108245fc cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108245ff je 0x10824640 */
  if (C.zf) goto L_10824640;
  /* 10824601 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824604 je 0x10824640 */
  if (C.zf) goto L_10824640;
L_10824606:;
  /* 10824606 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082460a je 0x1082463a */
  if (C.zf) goto L_1082463a;
  /* 1082460c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1082460e je 0x10824629 */
  if (C.zf) goto L_10824629;
  /* 10824610 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10824613 test byte ptr [ebx + 0x10829301], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10829301)))&(0x4u); fl_logic(_r,8); }
  /* 1082461a je 0x10824622 */
  if (C.zf) goto L_10824622;
  /* 1082461c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1082461e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1082461f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10824620 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10824622:;
  /* 10824622 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10824624 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10824626 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10824627 jmp 0x10824638 */
  goto L_10824638;
L_10824629:;
  /* 10824629 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1082462c test byte ptr [edx + 0x10829301], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10829301)))&(0x4u); fl_logic(_r,8); }
  /* 10824633 je 0x10824638 */
  if (C.zf) goto L_10824638;
  /* 10824635 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10824636 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10824638:;
  /* 10824638 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1082463a:;
  /* 1082463a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1082463b jmp 0x10824598 */
  goto L_10824598;
L_10824640:;
  /* 10824640 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824642 je 0x10824648 */
  if (C.zf) goto L_10824648;
  /* 10824644 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10824647 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10824648:;
  /* 10824648 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1082464a jmp 0x10824566 */
  goto L_10824566;
L_1082464f:;
  /* 1082464f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10824651 je 0x10824656 */
  if (C.zf) goto L_10824656;
  /* 10824653 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10824656:;
  /* 10824656 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10824659 pop edi */
  EDI = (pop32());
  /* 1082465a pop esi */
  ESI = (pop32());
  /* 1082465b pop ebx */
  EBX = (pop32());
  /* 1082465c inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 1082465e pop ebp */
  EBP = (pop32());
  /* 1082465f ret  */
  ESPCHK(0x108244acu, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x10824660 (306 bytes, 132 insns) */
void f_10824660(void) {
  FTRACE(0x10824660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824660 push ecx */
  push32((uint32_t)(ECX));
  /* 10824661 push ecx */
  push32((uint32_t)(ECX));
  /* 10824662 mov eax, dword ptr [0x10829118] */
  EAX = (r32((uint32_t)(0x10829118)));
  /* 10824667 push ebx */
  push32((uint32_t)(EBX));
  /* 10824668 push ebp */
  push32((uint32_t)(EBP));
  /* 10824669 mov ebp, dword ptr [0x10827058] */
  EBP = (r32((uint32_t)(0x10827058)));
  /* 1082466f push esi */
  push32((uint32_t)(ESI));
  /* 10824670 push edi */
  push32((uint32_t)(EDI));
  /* 10824671 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10824673 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10824675 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10824677 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824679 jne 0x108246ae */
  if (!C.zf) goto L_108246ae;
  /* 1082467b call ebp */
  call_ind((uint32_t)(EBP), 0x1082467du);
  /* 1082467d mov esi, eax */
  ESI = (EAX);
  /* 1082467f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824681 je 0x1082468f */
  if (C.zf) goto L_1082468f;
  /* 10824683 mov dword ptr [0x10829118], 1 */
  w32((uint32_t)(0x10829118), (0x1u));
  /* 1082468d jmp 0x108246b7 */
  goto L_108246b7;
L_1082468f:;
  /* 1082468f call dword ptr [0x1082705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082705c))), 0x10824695u);
  /* 10824695 mov edi, eax */
  EDI = (EAX);
  /* 10824697 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824699 je 0x10824789 */
  if (C.zf) goto L_10824789;
  /* 1082469f mov dword ptr [0x10829118], 2 */
  w32((uint32_t)(0x10829118), (0x2u));
  /* 108246a9 jmp 0x1082473d */
  goto L_1082473d;
L_108246ae:;
  /* 108246ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108246b1 jne 0x10824738 */
  if (!C.zf) goto L_10824738;
L_108246b7:;
  /* 108246b7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108246b9 jne 0x108246c7 */
  if (!C.zf) goto L_108246c7;
  /* 108246bb call ebp */
  call_ind((uint32_t)(EBP), 0x108246bdu);
  /* 108246bd mov esi, eax */
  ESI = (EAX);
  /* 108246bf cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108246c1 je 0x10824789 */
  if (C.zf) goto L_10824789;
L_108246c7:;
  /* 108246c7 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 108246ca mov eax, esi */
  EAX = (ESI);
  /* 108246cc je 0x108246dc */
  if (C.zf) goto L_108246dc;
L_108246ce:;
  /* 108246ce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108246cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108246d0 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 108246d3 jne 0x108246ce */
  if (!C.zf) goto L_108246ce;
  /* 108246d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108246d6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108246d7 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 108246da jne 0x108246ce */
  if (!C.zf) goto L_108246ce;
L_108246dc:;
  /* 108246dc sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108246de mov edi, dword ptr [0x10827060] */
  EDI = (r32((uint32_t)(0x10827060)));
  /* 108246e4 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 108246e6 push ebx */
  push32((uint32_t)(EBX));
  /* 108246e7 push ebx */
  push32((uint32_t)(EBX));
  /* 108246e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 108246e9 push ebx */
  push32((uint32_t)(EBX));
  /* 108246ea push ebx */
  push32((uint32_t)(EBX));
  /* 108246eb push eax */
  push32((uint32_t)(EAX));
  /* 108246ec push esi */
  push32((uint32_t)(ESI));
  /* 108246ed push ebx */
  push32((uint32_t)(EBX));
  /* 108246ee push ebx */
  push32((uint32_t)(EBX));
  /* 108246ef mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 108246f3 call edi */
  call_ind((uint32_t)(EDI), 0x108246f5u);
  /* 108246f5 mov ebp, eax */
  EBP = (EAX);
  /* 108246f7 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108246f9 je 0x1082472d */
  if (C.zf) goto L_1082472d;
  /* 108246fb push ebp */
  push32((uint32_t)(EBP));
  /* 108246fc call 0x10824baf */
  push32(0x10824701u); f_10824baf();
  /* 10824701 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824703 pop ecx */
  ECX = (pop32());
  /* 10824704 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10824708 je 0x1082472d */
  if (C.zf) goto L_1082472d;
  /* 1082470a push ebx */
  push32((uint32_t)(EBX));
  /* 1082470b push ebx */
  push32((uint32_t)(EBX));
  /* 1082470c push ebp */
  push32((uint32_t)(EBP));
  /* 1082470d push eax */
  push32((uint32_t)(EAX));
  /* 1082470e push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10824712 push esi */
  push32((uint32_t)(ESI));
  /* 10824713 push ebx */
  push32((uint32_t)(EBX));
  /* 10824714 push ebx */
  push32((uint32_t)(EBX));
  /* 10824715 call edi */
  call_ind((uint32_t)(EDI), 0x10824717u);
  /* 10824717 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10824719 jne 0x10824729 */
  if (!C.zf) goto L_10824729;
  /* 1082471b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1082471f call 0x10824b67 */
  push32(0x10824724u); f_10824b67();
  /* 10824724 pop ecx */
  ECX = (pop32());
  /* 10824725 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10824729:;
  /* 10824729 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1082472d:;
  /* 1082472d push esi */
  push32((uint32_t)(ESI));
  /* 1082472e call dword ptr [0x10827064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827064))), 0x10824734u);
  /* 10824734 mov eax, ebx */
  EAX = (EBX);
  /* 10824736 jmp 0x1082478b */
  goto L_1082478b;
L_10824738:;
  /* 10824738 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082473b jne 0x10824789 */
  if (!C.zf) goto L_10824789;
L_1082473d:;
  /* 1082473d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082473f jne 0x1082474d */
  if (!C.zf) goto L_1082474d;
  /* 10824741 call dword ptr [0x1082705c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082705c))), 0x10824747u);
  /* 10824747 mov edi, eax */
  EDI = (EAX);
  /* 10824749 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082474b je 0x10824789 */
  if (C.zf) goto L_10824789;
L_1082474d:;
  /* 1082474d cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1082474f mov eax, edi */
  EAX = (EDI);
  /* 10824751 je 0x1082475d */
  if (C.zf) goto L_1082475d;
L_10824753:;
  /* 10824753 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10824754 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824756 jne 0x10824753 */
  if (!C.zf) goto L_10824753;
  /* 10824758 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10824759 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1082475b jne 0x10824753 */
  if (!C.zf) goto L_10824753;
L_1082475d:;
  /* 1082475d sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082475f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10824760 mov ebp, eax */
  EBP = (EAX);
  /* 10824762 push ebp */
  push32((uint32_t)(EBP));
  /* 10824763 call 0x10824baf */
  push32(0x10824768u); f_10824baf();
  /* 10824768 mov esi, eax */
  ESI = (EAX);
  /* 1082476a pop ecx */
  ECX = (pop32());
  /* 1082476b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082476d jne 0x10824773 */
  if (!C.zf) goto L_10824773;
  /* 1082476f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10824771 jmp 0x1082477e */
  goto L_1082477e;
L_10824773:;
  /* 10824773 push ebp */
  push32((uint32_t)(EBP));
  /* 10824774 push edi */
  push32((uint32_t)(EDI));
  /* 10824775 push esi */
  push32((uint32_t)(ESI));
  /* 10824776 call 0x108251a0 */
  push32(0x1082477bu); f_108251a0();
  /* 1082477b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1082477e:;
  /* 1082477e push edi */
  push32((uint32_t)(EDI));
  /* 1082477f call dword ptr [0x10827068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827068))), 0x10824785u);
  /* 10824785 mov eax, esi */
  EAX = (ESI);
  /* 10824787 jmp 0x1082478b */
  goto L_1082478b;
L_10824789:;
  /* 10824789 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1082478b:;
  /* 1082478b pop edi */
  EDI = (pop32());
  /* 1082478c pop esi */
  ESI = (pop32());
  /* 1082478d pop ebp */
  EBP = (pop32());
  /* 1082478e pop ebx */
  EBX = (pop32());
  /* 1082478f pop ecx */
  ECX = (pop32());
  /* 10824790 pop ecx */
  ECX = (pop32());
  /* 10824791 ret  */
  ESPCHK(0x10824660u, _esp0);
  ESP += 4; return;
}

/* FUN_10004792 @ 0x10824792 (60 bytes, 20 insns) */
void f_10824792(void) {
  FTRACE(0x10824792u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824794 push 0 */
  push32((uint32_t)(0x0u));
  /* 10824796 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082479a push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1082479f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 108247a2 push eax */
  push32((uint32_t)(EAX));
  /* 108247a3 call dword ptr [0x10827050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827050))), 0x108247a9u);
  /* 108247a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108247ab mov dword ptr [0x10829408], eax */
  w32((uint32_t)(0x10829408), (EAX));
  /* 108247b0 je 0x108247c7 */
  if (C.zf) goto L_108247c7;
  /* 108247b2 call 0x108254d5 */
  push32(0x108247b7u); f_108254d5();
  /* 108247b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108247b9 jne 0x108247ca */
  if (!C.zf) goto L_108247ca;
  /* 108247bb push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 108247c1 call dword ptr [0x10827054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827054))), 0x108247c7u);
L_108247c7:;
  /* 108247c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108247c9 ret  */
  ESPCHK(0x10824792u, _esp0);
  ESP += 4; return;
L_108247ca:;
  /* 108247ca push 1 */
  push32((uint32_t)(0x1u));
  /* 108247cc pop eax */
  EAX = (pop32());
  /* 108247cd ret  */
  ESPCHK(0x10824792u, _esp0);
  ESP += 4; return;
}

/* FUN_100047ce @ 0x108247ce (117 bytes, 38 insns) */
void f_108247ce(void) {
  FTRACE(0x108247ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108247ce push ebx */
  push32((uint32_t)(EBX));
  /* 108247cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 108247d1 cmp dword ptr [0x108291d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x108291d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108247d7 push ebp */
  push32((uint32_t)(EBP));
  /* 108247d8 mov ebp, dword ptr [0x10827048] */
  EBP = (r32((uint32_t)(0x10827048)));
  /* 108247de jle 0x10824824 */
  if ((C.zf||C.sf!=C.of)) goto L_10824824;
  /* 108247e0 mov eax, dword ptr [0x108291d4] */
  EAX = (r32((uint32_t)(0x108291d4)));
  /* 108247e5 push esi */
  push32((uint32_t)(ESI));
  /* 108247e6 push edi */
  push32((uint32_t)(EDI));
  /* 108247e7 mov edi, dword ptr [0x1082704c] */
  EDI = (r32((uint32_t)(0x1082704c)));
  /* 108247ed lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_108247f0:;
  /* 108247f0 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 108247f5 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 108247fa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 108247fc call edi */
  call_ind((uint32_t)(EDI), 0x108247feu);
  /* 108247fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10824803 push 0 */
  push32((uint32_t)(0x0u));
  /* 10824805 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10824807 call edi */
  call_ind((uint32_t)(EDI), 0x10824809u);
  /* 10824809 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1082480c push 0 */
  push32((uint32_t)(0x0u));
  /* 1082480e push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10824814 call ebp */
  call_ind((uint32_t)(EBP), 0x10824816u);
  /* 10824816 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10824819 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1082481a cmp ebx, dword ptr [0x108291d0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x108291d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824820 jl 0x108247f0 */
  if ((C.sf!=C.of)) goto L_108247f0;
  /* 10824822 pop edi */
  EDI = (pop32());
  /* 10824823 pop esi */
  ESI = (pop32());
L_10824824:;
  /* 10824824 push dword ptr [0x108291d4] */
  push32((uint32_t)(r32((uint32_t)(0x108291d4))));
  /* 1082482a push 0 */
  push32((uint32_t)(0x0u));
  /* 1082482c push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10824832 call ebp */
  call_ind((uint32_t)(EBP), 0x10824834u);
  /* 10824834 push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 1082483a call dword ptr [0x10827054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827054))), 0x10824840u);
  /* 10824840 pop ebp */
  EBP = (pop32());
  /* 10824841 pop ebx */
  EBX = (pop32());
  /* 10824842 ret  */
  ESPCHK(0x108247ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10004843 @ 0x10824843 (57 bytes, 18 insns) */
void f_10824843(void) {
  FTRACE(0x10824843u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824843 mov eax, dword ptr [0x10828fc8] */
  EAX = (r32((uint32_t)(0x10828fc8)));
  /* 10824848 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082484b je 0x1082485a */
  if (C.zf) goto L_1082485a;
  /* 1082484d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082484f jne 0x1082487b */
  if (!C.zf) goto L_1082487b;
  /* 10824851 cmp dword ptr [0x10828fcc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10828fcc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824858 jne 0x1082487b */
  if (!C.zf) goto L_1082487b;
L_1082485a:;
  /* 1082485a push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1082485f call 0x1082487c */
  push32(0x10824864u); f_1082487c();
  /* 10824864 mov eax, dword ptr [0x1082911c] */
  EAX = (r32((uint32_t)(0x1082911c)));
  /* 10824869 pop ecx */
  ECX = (pop32());
  /* 1082486a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1082486c je 0x10824870 */
  if (C.zf) goto L_10824870;
  /* 1082486e call eax */
  call_ind((uint32_t)(EAX), 0x10824870u);
L_10824870:;
  /* 10824870 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10824875 call 0x1082487c */
  push32(0x1082487au); f_1082487c();
  /* 1082487a pop ecx */
  ECX = (pop32());
L_1082487b:;
  /* 1082487b ret  */
  ESPCHK(0x10824843u, _esp0);
  ESP += 4; return;
}

/* FUN_1000487c @ 0x1082487c (339 bytes, 100 insns) */
void f_1082487c(void) {
  FTRACE(0x1082487cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1082487c push ebp */
  push32((uint32_t)(EBP));
  /* 1082487d mov ebp, esp */
  EBP = (ESP);
  /* 1082487f sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10824888 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1082488a mov eax, 0x108287d0 */
  EAX = (0x108287d0u);
L_1082488f:;
  /* 1082488f cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824891 je 0x1082489e */
  if (C.zf) goto L_1082489e;
  /* 10824893 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824896 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10824897 cmp eax, 0x10828860 */
  { uint32_t _a=(EAX),_b=(0x10828860u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082489c jl 0x1082488f */
  if ((C.sf!=C.of)) goto L_1082488f;
L_1082489e:;
  /* 1082489e push esi */
  push32((uint32_t)(ESI));
  /* 1082489f mov esi, ecx */
  ESI = (ECX);
  /* 108248a1 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 108248a4 cmp edx, dword ptr [esi + 0x108287d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x108287d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108248aa jne 0x108249cc */
  if (!C.zf) goto L_108249cc;
  /* 108248b0 mov eax, dword ptr [0x10828fc8] */
  EAX = (r32((uint32_t)(0x10828fc8)));
  /* 108248b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108248b8 je 0x108249a6 */
  if (C.zf) goto L_108249a6;
  /* 108248be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108248c0 jne 0x108248cf */
  if (!C.zf) goto L_108248cf;
  /* 108248c2 cmp dword ptr [0x10828fcc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10828fcc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108248c9 je 0x108249a6 */
  if (C.zf) goto L_108249a6;
L_108248cf:;
  /* 108248cf cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108248d5 je 0x108249cc */
  if (C.zf) goto L_108249cc;
  /* 108248db lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 108248e1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 108248e6 push eax */
  push32((uint32_t)(EAX));
  /* 108248e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108248e9 call dword ptr [0x1082706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082706c))), 0x108248efu);
  /* 108248ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108248f1 jne 0x10824906 */
  if (!C.zf) goto L_10824906;
  /* 108248f3 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 108248f9 push 0x10827480 */
  push32((uint32_t)(0x10827480u));
  /* 108248fe push eax */
  push32((uint32_t)(EAX));
  /* 108248ff call 0x10824c40 */
  push32(0x10824904u); f_10824c40();
  /* 10824904 pop ecx */
  ECX = (pop32());
  /* 10824905 pop ecx */
  ECX = (pop32());
L_10824906:;
  /* 10824906 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1082490c push edi */
  push32((uint32_t)(EDI));
  /* 1082490d push eax */
  push32((uint32_t)(EAX));
  /* 1082490e lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10824914 call 0x10824d30 */
  push32(0x10824919u); f_10824d30();
  /* 10824919 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1082491a pop ecx */
  ECX = (pop32());
  /* 1082491b cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082491e jbe 0x10824949 */
  if ((C.cf||C.zf)) goto L_10824949;
  /* 10824920 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10824926 push eax */
  push32((uint32_t)(EAX));
  /* 10824927 call 0x10824d30 */
  push32(0x1082492cu); f_10824d30();
  /* 1082492c mov edi, eax */
  EDI = (EAX);
  /* 1082492e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10824934 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824937 push 3 */
  push32((uint32_t)(0x3u));
  /* 10824939 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1082493b push 0x1082747c */
  push32((uint32_t)(0x1082747cu));
  /* 10824940 push edi */
  push32((uint32_t)(EDI));
  /* 10824941 call 0x10825db0 */
  push32(0x10824946u); f_10825db0();
  /* 10824946 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10824949:;
  /* 10824949 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1082494f push 0x10827460 */
  push32((uint32_t)(0x10827460u));
  /* 10824954 push eax */
  push32((uint32_t)(EAX));
  /* 10824955 call 0x10824c40 */
  push32(0x1082495au); f_10824c40();
  /* 1082495a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10824960 push edi */
  push32((uint32_t)(EDI));
  /* 10824961 push eax */
  push32((uint32_t)(EAX));
  /* 10824962 call 0x10824c50 */
  push32(0x10824967u); f_10824c50();
  /* 10824967 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1082496d push 0x1082745c */
  push32((uint32_t)(0x1082745cu));
  /* 10824972 push eax */
  push32((uint32_t)(EAX));
  /* 10824973 call 0x10824c50 */
  push32(0x10824978u); f_10824c50();
  /* 10824978 push dword ptr [esi + 0x108287d4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x108287d4))));
  /* 1082497e lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10824984 push eax */
  push32((uint32_t)(EAX));
  /* 10824985 call 0x10824c50 */
  push32(0x1082498au); f_10824c50();
  /* 1082498a push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1082498f lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10824995 push 0x10827434 */
  push32((uint32_t)(0x10827434u));
  /* 1082499a push eax */
  push32((uint32_t)(EAX));
  /* 1082499b call 0x10825d1e */
  push32(0x108249a0u); f_10825d1e();
  /* 108249a0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108249a3 pop edi */
  EDI = (pop32());
  /* 108249a4 jmp 0x108249cc */
  goto L_108249cc;
L_108249a6:;
  /* 108249a6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 108249a9 lea esi, [esi + 0x108287d4] */
  ESI = ((uint32_t)(ESI + 0x108287d4));
  /* 108249af push 0 */
  push32((uint32_t)(0x0u));
  /* 108249b1 push eax */
  push32((uint32_t)(EAX));
  /* 108249b2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 108249b4 call 0x10824d30 */
  push32(0x108249b9u); f_10824d30();
  /* 108249b9 pop ecx */
  ECX = (pop32());
  /* 108249ba push eax */
  push32((uint32_t)(EAX));
  /* 108249bb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 108249bd push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108249bf call dword ptr [0x1082707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082707c))), 0x108249c5u);
  /* 108249c5 push eax */
  push32((uint32_t)(EAX));
  /* 108249c6 call dword ptr [0x10827044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827044))), 0x108249ccu);
L_108249cc:;
  /* 108249cc pop esi */
  ESI = (pop32());
  /* 108249cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108249ce ret  */
  ESPCHK(0x1082487cu, _esp0);
  ESP += 4; return;
}

/* FUN_100049cf @ 0x108249cf (41 bytes, 12 insns) */
void f_108249cf(void) {
  FTRACE(0x108249cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108249cf push esi */
  push32((uint32_t)(ESI));
  /* 108249d0 mov esi, dword ptr [0x10827040] */
  ESI = (r32((uint32_t)(0x10827040)));
  /* 108249d6 push dword ptr [0x108288a4] */
  push32((uint32_t)(r32((uint32_t)(0x108288a4))));
  /* 108249dc call esi */
  call_ind((uint32_t)(ESI), 0x108249deu);
  /* 108249de push dword ptr [0x10828894] */
  push32((uint32_t)(r32((uint32_t)(0x10828894))));
  /* 108249e4 call esi */
  call_ind((uint32_t)(ESI), 0x108249e6u);
  /* 108249e6 push dword ptr [0x10828884] */
  push32((uint32_t)(r32((uint32_t)(0x10828884))));
  /* 108249ec call esi */
  call_ind((uint32_t)(ESI), 0x108249eeu);
  /* 108249ee push dword ptr [0x10828864] */
  push32((uint32_t)(r32((uint32_t)(0x10828864))));
  /* 108249f4 call esi */
  call_ind((uint32_t)(ESI), 0x108249f6u);
  /* 108249f6 pop esi */
  ESI = (pop32());
  /* 108249f7 ret  */
  ESPCHK(0x108249cfu, _esp0);
  ESP += 4; return;
}

/* FUN_100049f8 @ 0x108249f8 (108 bytes, 34 insns) */
void f_108249f8(void) {
  FTRACE(0x108249f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108249f8 push esi */
  push32((uint32_t)(ESI));
  /* 108249f9 push edi */
  push32((uint32_t)(EDI));
  /* 108249fa mov edi, dword ptr [0x10827070] */
  EDI = (r32((uint32_t)(0x10827070)));
  /* 10824a00 mov esi, 0x10828860 */
  ESI = (0x10828860u);
L_10824a05:;
  /* 10824a05 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10824a07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10824a09 je 0x10824a36 */
  if (C.zf) goto L_10824a36;
  /* 10824a0b cmp esi, 0x108288a4 */
  { uint32_t _a=(ESI),_b=(0x108288a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824a11 je 0x10824a36 */
  if (C.zf) goto L_10824a36;
  /* 10824a13 cmp esi, 0x10828894 */
  { uint32_t _a=(ESI),_b=(0x10828894u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824a19 je 0x10824a36 */
  if (C.zf) goto L_10824a36;
  /* 10824a1b cmp esi, 0x10828884 */
  { uint32_t _a=(ESI),_b=(0x10828884u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824a21 je 0x10824a36 */
  if (C.zf) goto L_10824a36;
  /* 10824a23 cmp esi, 0x10828864 */
  { uint32_t _a=(ESI),_b=(0x10828864u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824a29 je 0x10824a36 */
  if (C.zf) goto L_10824a36;
  /* 10824a2b push eax */
  push32((uint32_t)(EAX));
  /* 10824a2c call edi */
  call_ind((uint32_t)(EDI), 0x10824a2eu);
  /* 10824a2e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10824a30 call 0x10824b67 */
  push32(0x10824a35u); f_10824b67();
  /* 10824a35 pop ecx */
  ECX = (pop32());
L_10824a36:;
  /* 10824a36 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10824a39 cmp esi, 0x10828920 */
  { uint32_t _a=(ESI),_b=(0x10828920u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824a3f jl 0x10824a05 */
  if ((C.sf!=C.of)) goto L_10824a05;
  /* 10824a41 push dword ptr [0x10828884] */
  push32((uint32_t)(r32((uint32_t)(0x10828884))));
  /* 10824a47 call edi */
  call_ind((uint32_t)(EDI), 0x10824a49u);
  /* 10824a49 push dword ptr [0x10828894] */
  push32((uint32_t)(r32((uint32_t)(0x10828894))));
  /* 10824a4f call edi */
  call_ind((uint32_t)(EDI), 0x10824a51u);
  /* 10824a51 push dword ptr [0x108288a4] */
  push32((uint32_t)(r32((uint32_t)(0x108288a4))));
  /* 10824a57 call edi */
  call_ind((uint32_t)(EDI), 0x10824a59u);
  /* 10824a59 push dword ptr [0x10828864] */
  push32((uint32_t)(r32((uint32_t)(0x10828864))));
  /* 10824a5f call edi */
  call_ind((uint32_t)(EDI), 0x10824a61u);
  /* 10824a61 pop edi */
  EDI = (pop32());
  /* 10824a62 pop esi */
  ESI = (pop32());
  /* 10824a63 ret  */
  ESPCHK(0x108249f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a64 @ 0x10824a64 (97 bytes, 37 insns) */
void f_10824a64(void) {
  FTRACE(0x10824a64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824a64 push ebp */
  push32((uint32_t)(EBP));
  /* 10824a65 mov ebp, esp */
  EBP = (ESP);
  /* 10824a67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10824a6a push esi */
  push32((uint32_t)(ESI));
  /* 10824a6b cmp dword ptr [eax*4 + 0x10828860], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10828860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824a73 lea esi, [eax*4 + 0x10828860] */
  ESI = ((uint32_t)(EAX*4 + 0x10828860));
  /* 10824a7a jne 0x10824aba */
  if (!C.zf) goto L_10824aba;
  /* 10824a7c push edi */
  push32((uint32_t)(EDI));
  /* 10824a7d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10824a7f call 0x10824baf */
  push32(0x10824a84u); f_10824baf();
  /* 10824a84 mov edi, eax */
  EDI = (EAX);
  /* 10824a86 pop ecx */
  ECX = (pop32());
  /* 10824a87 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10824a89 jne 0x10824a93 */
  if (!C.zf) goto L_10824a93;
  /* 10824a8b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10824a8d call 0x10823ed4 */
  push32(0x10824a92u); f_10823ed4();
  /* 10824a92 pop ecx */
  ECX = (pop32());
L_10824a93:;
  /* 10824a93 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10824a95 call 0x10824a64 */
  push32(0x10824a9au); f_10824a64();
  /* 10824a9a cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824a9d pop ecx */
  ECX = (pop32());
  /* 10824a9e push edi */
  push32((uint32_t)(EDI));
  /* 10824a9f jne 0x10824aab */
  if (!C.zf) goto L_10824aab;
  /* 10824aa1 call dword ptr [0x10827040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827040))), 0x10824aa7u);
  /* 10824aa7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10824aa9 jmp 0x10824ab1 */
  goto L_10824ab1;
L_10824aab:;
  /* 10824aab call 0x10824b67 */
  push32(0x10824ab0u); f_10824b67();
  /* 10824ab0 pop ecx */
  ECX = (pop32());
L_10824ab1:;
  /* 10824ab1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10824ab3 call 0x10824ac5 */
  push32(0x10824ab8u); f_10824ac5();
  /* 10824ab8 pop ecx */
  ECX = (pop32());
  /* 10824ab9 pop edi */
  EDI = (pop32());
L_10824aba:;
  /* 10824aba push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10824abc call dword ptr [0x1082703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082703c))), 0x10824ac2u);
  /* 10824ac2 pop esi */
  ESI = (pop32());
  /* 10824ac3 pop ebp */
  EBP = (pop32());
  /* 10824ac4 ret  */
  ESPCHK(0x10824a64u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac5 @ 0x10824ac5 (21 bytes, 7 insns) */
void f_10824ac5(void) {
  FTRACE(0x10824ac5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824ac5 push ebp */
  push32((uint32_t)(EBP));
  /* 10824ac6 mov ebp, esp */
  EBP = (ESP);
  /* 10824ac8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10824acb push dword ptr [eax*4 + 0x10828860] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10828860))));
  /* 10824ad2 call dword ptr [0x10827038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827038))), 0x10824ad8u);
  /* 10824ad8 pop ebp */
  EBP = (pop32());
  /* 10824ad9 ret  */
  ESPCHK(0x10824ac5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ada @ 0x10824ada (141 bytes, 56 insns) */
void f_10824ada(void) {
  FTRACE(0x10824adau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824ada push ebx */
  push32((uint32_t)(EBX));
  /* 10824adb push esi */
  push32((uint32_t)(ESI));
  /* 10824adc mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10824ae0 push edi */
  push32((uint32_t)(EDI));
  /* 10824ae1 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10824ae6 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824ae9 mov ebx, esi */
  EBX = (ESI);
  /* 10824aeb ja 0x10824afa */
  if ((!C.cf&&!C.zf)) goto L_10824afa;
  /* 10824aed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824aef jne 0x10824af4 */
  if (!C.zf) goto L_10824af4;
  /* 10824af1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10824af3 pop esi */
  ESI = (pop32());
L_10824af4:;
  /* 10824af4 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10824af7 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10824afa:;
  /* 10824afa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10824afc cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824aff ja 0x10824b3b */
  if ((!C.cf&&!C.zf)) goto L_10824b3b;
  /* 10824b01 cmp ebx, dword ptr [0x10828ab0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10828ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824b07 ja 0x10824b26 */
  if ((!C.cf&&!C.zf)) goto L_10824b26;
  /* 10824b09 push 9 */
  push32((uint32_t)(0x9u));
  /* 10824b0b call 0x10824a64 */
  push32(0x10824b10u); f_10824a64();
  /* 10824b10 push ebx */
  push32((uint32_t)(EBX));
  /* 10824b11 call 0x10825869 */
  push32(0x10824b16u); f_10825869();
  /* 10824b16 push 9 */
  push32((uint32_t)(0x9u));
  /* 10824b18 mov edi, eax */
  EDI = (EAX);
  /* 10824b1a call 0x10824ac5 */
  push32(0x10824b1fu); f_10824ac5();
  /* 10824b1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10824b22 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10824b24 jne 0x10824b51 */
  if (!C.zf) goto L_10824b51;
L_10824b26:;
  /* 10824b26 push esi */
  push32((uint32_t)(ESI));
  /* 10824b27 push 8 */
  push32((uint32_t)(0x8u));
  /* 10824b29 push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10824b2f call dword ptr [0x10827034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827034))), 0x10824b35u);
  /* 10824b35 mov edi, eax */
  EDI = (EAX);
  /* 10824b37 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10824b39 jne 0x10824b5d */
  if (!C.zf) goto L_10824b5d;
L_10824b3b:;
  /* 10824b3b cmp dword ptr [0x10829194], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10829194))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824b42 je 0x10824b5d */
  if (C.zf) goto L_10824b5d;
  /* 10824b44 push esi */
  push32((uint32_t)(ESI));
  /* 10824b45 call 0x10825f08 */
  push32(0x10824b4au); f_10825f08();
  /* 10824b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10824b4c pop ecx */
  ECX = (pop32());
  /* 10824b4d je 0x10824b63 */
  if (C.zf) goto L_10824b63;
  /* 10824b4f jmp 0x10824afa */
  goto L_10824afa;
L_10824b51:;
  /* 10824b51 push ebx */
  push32((uint32_t)(EBX));
  /* 10824b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10824b54 push edi */
  push32((uint32_t)(EDI));
  /* 10824b55 call 0x10825eb0 */
  push32(0x10824b5au); f_10825eb0();
  /* 10824b5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10824b5d:;
  /* 10824b5d mov eax, edi */
  EAX = (EDI);
L_10824b5f:;
  /* 10824b5f pop edi */
  EDI = (pop32());
  /* 10824b60 pop esi */
  ESI = (pop32());
  /* 10824b61 pop ebx */
  EBX = (pop32());
  /* 10824b62 ret  */
  ESPCHK(0x10824adau, _esp0);
  ESP += 4; return;
L_10824b63:;
  /* 10824b63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824b65 jmp 0x10824b5f */
  goto L_10824b5f;
}

/* FUN_10004b67 @ 0x10824b67 (72 bytes, 29 insns) */
void f_10824b67(void) {
  FTRACE(0x10824b67u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824b67 push esi */
  push32((uint32_t)(ESI));
  /* 10824b68 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10824b6c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824b6e je 0x10824bad */
  if (C.zf) goto L_10824bad;
  /* 10824b70 push 9 */
  push32((uint32_t)(0x9u));
  /* 10824b72 call 0x10824a64 */
  push32(0x10824b77u); f_10824a64();
  /* 10824b77 push esi */
  push32((uint32_t)(ESI));
  /* 10824b78 call 0x10825513 */
  push32(0x10824b7du); f_10825513();
  /* 10824b7d pop ecx */
  ECX = (pop32());
  /* 10824b7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10824b80 pop ecx */
  ECX = (pop32());
  /* 10824b81 je 0x10824b96 */
  if (C.zf) goto L_10824b96;
  /* 10824b83 push esi */
  push32((uint32_t)(ESI));
  /* 10824b84 push eax */
  push32((uint32_t)(EAX));
  /* 10824b85 call 0x1082553e */
  push32(0x10824b8au); f_1082553e();
  /* 10824b8a push 9 */
  push32((uint32_t)(0x9u));
  /* 10824b8c call 0x10824ac5 */
  push32(0x10824b91u); f_10824ac5();
  /* 10824b91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10824b94 pop esi */
  ESI = (pop32());
  /* 10824b95 ret  */
  ESPCHK(0x10824b67u, _esp0);
  ESP += 4; return;
L_10824b96:;
  /* 10824b96 push 9 */
  push32((uint32_t)(0x9u));
  /* 10824b98 call 0x10824ac5 */
  push32(0x10824b9du); f_10824ac5();
  /* 10824b9d pop ecx */
  ECX = (pop32());
  /* 10824b9e push esi */
  push32((uint32_t)(ESI));
  /* 10824b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10824ba1 push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10824ba7 call dword ptr [0x10827048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827048))), 0x10824badu);
L_10824bad:;
  /* 10824bad pop esi */
  ESI = (pop32());
  /* 10824bae ret  */
  ESPCHK(0x10824b67u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10824baf (18 bytes, 6 insns) */
void f_10824baf(void) {
  FTRACE(0x10824bafu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824baf push dword ptr [0x10829194] */
  push32((uint32_t)(r32((uint32_t)(0x10829194))));
  /* 10824bb5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10824bb9 call 0x10824bc1 */
  push32(0x10824bbeu); f_10824bc1();
  /* 10824bbe pop ecx */
  ECX = (pop32());
  /* 10824bbf pop ecx */
  ECX = (pop32());
  /* 10824bc0 ret  */
  ESPCHK(0x10824bafu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10824bc1 (44 bytes, 16 insns) */
void f_10824bc1(void) {
  FTRACE(0x10824bc1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824bc1 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824bc6 ja 0x10824bea */
  if ((!C.cf&&!C.zf)) goto L_10824bea;
L_10824bc8:;
  /* 10824bc8 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10824bcc call 0x10824bed */
  push32(0x10824bd1u); f_10824bed();
  /* 10824bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10824bd3 pop ecx */
  ECX = (pop32());
  /* 10824bd4 jne 0x10824bec */
  if (!C.zf) goto L_10824bec;
  /* 10824bd6 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824bda je 0x10824bec */
  if (C.zf) goto L_10824bec;
  /* 10824bdc push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10824be0 call 0x10825f08 */
  push32(0x10824be5u); f_10825f08();
  /* 10824be5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10824be7 pop ecx */
  ECX = (pop32());
  /* 10824be8 jne 0x10824bc8 */
  if (!C.zf) goto L_10824bc8;
L_10824bea:;
  /* 10824bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10824bec:;
  /* 10824bec ret  */
  ESPCHK(0x10824bc1u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bed @ 0x10824bed (78 bytes, 30 insns) */
void f_10824bed(void) {
  FTRACE(0x10824bedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824bed push esi */
  push32((uint32_t)(ESI));
  /* 10824bee mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10824bf2 cmp esi, dword ptr [0x10828ab0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10828ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824bf8 push edi */
  push32((uint32_t)(EDI));
  /* 10824bf9 ja 0x10824c1c */
  if ((!C.cf&&!C.zf)) goto L_10824c1c;
  /* 10824bfb push 9 */
  push32((uint32_t)(0x9u));
  /* 10824bfd call 0x10824a64 */
  push32(0x10824c02u); f_10824a64();
  /* 10824c02 push esi */
  push32((uint32_t)(ESI));
  /* 10824c03 call 0x10825869 */
  push32(0x10824c08u); f_10825869();
  /* 10824c08 push 9 */
  push32((uint32_t)(0x9u));
  /* 10824c0a mov edi, eax */
  EDI = (EAX);
  /* 10824c0c call 0x10824ac5 */
  push32(0x10824c11u); f_10824ac5();
  /* 10824c11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10824c14 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10824c16 je 0x10824c1c */
  if (C.zf) goto L_10824c1c;
  /* 10824c18 mov eax, edi */
  EAX = (EDI);
  /* 10824c1a jmp 0x10824c38 */
  goto L_10824c38;
L_10824c1c:;
  /* 10824c1c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10824c1e jne 0x10824c23 */
  if (!C.zf) goto L_10824c23;
  /* 10824c20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10824c22 pop esi */
  ESI = (pop32());
L_10824c23:;
  /* 10824c23 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10824c26 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10824c29 push esi */
  push32((uint32_t)(ESI));
  /* 10824c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10824c2c push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10824c32 call dword ptr [0x10827034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827034))), 0x10824c38u);
L_10824c38:;
  /* 10824c38 pop edi */
  EDI = (pop32());
  /* 10824c39 pop esi */
  ESI = (pop32());
  /* 10824c3a ret  */
  ESPCHK(0x10824bedu, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x10824c40 (7 bytes, 3 insns) */
void f_10824c40(void) {
  FTRACE(0x10824c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824c40 push edi */
  push32((uint32_t)(EDI));
  /* 10824c41 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10824c45 jmp 0x10824cb1 */
  jmp_ind(0x10824cb1u); return;
}

/* FUN_10004c50 @ 0x10824c50 (224 bytes, 84 insns) */
void f_10824c50(void) {
  FTRACE(0x10824c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824c50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10824c54 push edi */
  push32((uint32_t)(EDI));
  /* 10824c55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10824c5b je 0x10824c6c */
  if (C.zf) goto L_10824c6c;
L_10824c5d:;
  /* 10824c5d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10824c5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10824c60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10824c62 je 0x10824c9f */
  if (C.zf) goto L_10824c9f;
  /* 10824c64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10824c6a jne 0x10824c5d */
  if (!C.zf) goto L_10824c5d;
L_10824c6c:;
  /* 10824c6c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10824c6e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10824c73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824c75 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10824c78 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10824c7a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824c7d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10824c82 je 0x10824c6c */
  if (C.zf) goto L_10824c6c;
  /* 10824c84 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10824c87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10824c89 je 0x10824cae */
  if (C.zf) goto L_10824cae;
  /* 10824c8b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10824c8d je 0x10824ca9 */
  if (C.zf) goto L_10824ca9;
  /* 10824c8f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10824c94 je 0x10824ca4 */
  if (C.zf) goto L_10824ca4;
  /* 10824c96 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10824c9b je 0x10824c9f */
  if (C.zf) goto L_10824c9f;
  /* 10824c9d jmp 0x10824c6c */
  goto L_10824c6c;
L_10824c9f:;
  /* 10824c9f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10824ca2 jmp 0x10824cb1 */
  goto L_10824cb1;
L_10824ca4:;
  /* 10824ca4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10824ca7 jmp 0x10824cb1 */
  goto L_10824cb1;
L_10824ca9:;
  /* 10824ca9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10824cac jmp 0x10824cb1 */
  goto L_10824cb1;
L_10824cae:;
  /* 10824cae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10824cb1:;
  /* 10824cb1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10824cb5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10824cbb je 0x10824cd6 */
  if (C.zf) goto L_10824cd6;
L_10824cbd:;
  /* 10824cbd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10824cbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10824cc0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10824cc2 je 0x10824d28 */
  if (C.zf) goto L_10824d28;
  /* 10824cc4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10824cc6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10824cc7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10824ccd jne 0x10824cbd */
  if (!C.zf) goto L_10824cbd;
  /* 10824ccf jmp 0x10824cd6 */
  goto L_10824cd6;
L_10824cd1:;
  /* 10824cd1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10824cd3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10824cd6:;
  /* 10824cd6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10824cdb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10824cdd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824cdf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10824ce2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10824ce4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10824ce6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824ce9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10824cee je 0x10824cd1 */
  if (C.zf) goto L_10824cd1;
  /* 10824cf0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10824cf2 je 0x10824d28 */
  if (C.zf) goto L_10824d28;
  /* 10824cf4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10824cf6 je 0x10824d1f */
  if (C.zf) goto L_10824d1f;
  /* 10824cf8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10824cfe je 0x10824d12 */
  if (C.zf) goto L_10824d12;
  /* 10824d00 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10824d06 je 0x10824d0a */
  if (C.zf) goto L_10824d0a;
  /* 10824d08 jmp 0x10824cd1 */
  goto L_10824cd1;
L_10824d0a:;
  /* 10824d0a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10824d0c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10824d10 pop edi */
  EDI = (pop32());
  /* 10824d11 ret  */
  ESPCHK(0x10824c50u, _esp0);
  ESP += 4; return;
L_10824d12:;
  /* 10824d12 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10824d15 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10824d19 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10824d1d pop edi */
  EDI = (pop32());
  /* 10824d1e ret  */
  ESPCHK(0x10824c50u, _esp0);
  ESP += 4; return;
L_10824d1f:;
  /* 10824d1f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10824d22 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10824d26 pop edi */
  EDI = (pop32());
  /* 10824d27 ret  */
  ESPCHK(0x10824c50u, _esp0);
  ESP += 4; return;
L_10824d28:;
  /* 10824d28 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10824d2a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10824d2e pop edi */
  EDI = (pop32());
  /* 10824d2f ret  */
  ESPCHK(0x10824c50u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10824d30 (123 bytes, 44 insns) */
void f_10824d30(void) {
  FTRACE(0x10824d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824d30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10824d34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10824d3a je 0x10824d50 */
  if (C.zf) goto L_10824d50;
L_10824d3c:;
  /* 10824d3c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10824d3e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10824d3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10824d41 je 0x10824d83 */
  if (C.zf) goto L_10824d83;
  /* 10824d43 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10824d49 jne 0x10824d3c */
  if (!C.zf) goto L_10824d3c;
  /* 10824d4b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10824d50:;
  /* 10824d50 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10824d52 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10824d57 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824d59 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10824d5c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10824d5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824d61 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10824d66 je 0x10824d50 */
  if (C.zf) goto L_10824d50;
  /* 10824d68 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10824d6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10824d6d je 0x10824da1 */
  if (C.zf) goto L_10824da1;
  /* 10824d6f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10824d71 je 0x10824d97 */
  if (C.zf) goto L_10824d97;
  /* 10824d73 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10824d78 je 0x10824d8d */
  if (C.zf) goto L_10824d8d;
  /* 10824d7a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10824d7f je 0x10824d83 */
  if (C.zf) goto L_10824d83;
  /* 10824d81 jmp 0x10824d50 */
  goto L_10824d50;
L_10824d83:;
  /* 10824d83 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10824d86 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10824d8a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824d8c ret  */
  ESPCHK(0x10824d30u, _esp0);
  ESP += 4; return;
L_10824d8d:;
  /* 10824d8d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10824d90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10824d94 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824d96 ret  */
  ESPCHK(0x10824d30u, _esp0);
  ESP += 4; return;
L_10824d97:;
  /* 10824d97 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10824d9a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10824d9e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824da0 ret  */
  ESPCHK(0x10824d30u, _esp0);
  ESP += 4; return;
L_10824da1:;
  /* 10824da1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10824da4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10824da8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824daa ret  */
  ESPCHK(0x10824d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dab @ 0x10824dab (429 bytes, 143 insns) */
void f_10824dab(void) {
  FTRACE(0x10824dabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824dab push ebp */
  push32((uint32_t)(EBP));
  /* 10824dac mov ebp, esp */
  EBP = (ESP);
  /* 10824dae sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824db1 push ebx */
  push32((uint32_t)(EBX));
  /* 10824db2 push esi */
  push32((uint32_t)(ESI));
  /* 10824db3 push edi */
  push32((uint32_t)(EDI));
  /* 10824db4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10824db6 call 0x10824a64 */
  push32(0x10824dbbu); f_10824a64();
  /* 10824dbb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10824dbe call 0x10824f58 */
  push32(0x10824dc3u); f_10824f58();
  /* 10824dc3 mov ebx, eax */
  EBX = (EAX);
  /* 10824dc5 pop ecx */
  ECX = (pop32());
  /* 10824dc6 cmp ebx, dword ptr [0x108291d8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x108291d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824dcc pop ecx */
  ECX = (pop32());
  /* 10824dcd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10824dd0 jne 0x10824dd9 */
  if (!C.zf) goto L_10824dd9;
L_10824dd2:;
  /* 10824dd2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10824dd4 jmp 0x10824f49 */
  goto L_10824f49;
L_10824dd9:;
  /* 10824dd9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10824ddb je 0x10824f37 */
  if (C.zf) goto L_10824f37;
  /* 10824de1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10824de3 mov eax, 0x108289b8 */
  EAX = (0x108289b8u);
L_10824de8:;
  /* 10824de8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824dea je 0x10824e60 */
  if (C.zf) goto L_10824e60;
  /* 10824dec add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824def inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10824df0 cmp eax, 0x10828aa8 */
  { uint32_t _a=(EAX),_b=(0x10828aa8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824df5 jl 0x10824de8 */
  if ((C.sf!=C.of)) goto L_10824de8;
  /* 10824df7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10824dfa push eax */
  push32((uint32_t)(EAX));
  /* 10824dfb push ebx */
  push32((uint32_t)(EBX));
  /* 10824dfc call dword ptr [0x10827030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827030))), 0x10824e02u);
  /* 10824e02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10824e04 pop esi */
  ESI = (pop32());
  /* 10824e05 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824e07 jne 0x10824f2e */
  if (!C.zf) goto L_10824f2e;
  /* 10824e0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10824e0f and dword ptr [0x10829404], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10829404)))&(0x0u); w32((uint32_t)(0x10829404), (_r)); fl_logic(_r,32); }
  /* 10824e16 pop ecx */
  ECX = (pop32());
  /* 10824e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824e19 mov edi, 0x10829300 */
  EDI = (0x10829300u);
  /* 10824e1e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824e21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10824e23 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10824e24 mov dword ptr [0x108291d8], ebx */
  w32((uint32_t)(0x108291d8), (EBX));
  /* 10824e2a jbe 0x10824f1b */
  if ((C.cf||C.zf)) goto L_10824f1b;
  /* 10824e30 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824e34 je 0x10824ef6 */
  if (C.zf) goto L_10824ef6;
  /* 10824e3a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10824e3d:;
  /* 10824e3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10824e3f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10824e41 je 0x10824ef6 */
  if (C.zf) goto L_10824ef6;
  /* 10824e47 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10824e4b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10824e4e:;
  /* 10824e4e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824e50 ja 0x10824eea */
  if ((!C.cf&&!C.zf)) goto L_10824eea;
  /* 10824e56 or byte ptr [eax + 0x10829301], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829301)))|(0x4u); w8((uint32_t)(EAX + 0x10829301), (_r)); fl_logic(_r,8); }
  /* 10824e5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10824e5e jmp 0x10824e4e */
  goto L_10824e4e;
L_10824e60:;
  /* 10824e60 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10824e64 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10824e66 pop ecx */
  ECX = (pop32());
  /* 10824e67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824e69 mov edi, 0x10829300 */
  EDI = (0x10829300u);
  /* 10824e6e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10824e71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10824e73 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10824e76 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10824e77 lea ebx, [esi + 0x108289c8] */
  EBX = ((uint32_t)(ESI + 0x108289c8));
L_10824e7d:;
  /* 10824e7d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824e80 mov ecx, ebx */
  ECX = (EBX);
  /* 10824e82 je 0x10824eb0 */
  if (C.zf) goto L_10824eb0;
L_10824e84:;
  /* 10824e84 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10824e87 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10824e89 je 0x10824eb0 */
  if (C.zf) goto L_10824eb0;
  /* 10824e8b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10824e8e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10824e91 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824e93 ja 0x10824ea9 */
  if ((!C.cf&&!C.zf)) goto L_10824ea9;
  /* 10824e95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10824e98 mov dl, byte ptr [edx + 0x108289b0] */
  DL = (r8((uint32_t)(EDX + 0x108289b0)));
L_10824e9e:;
  /* 10824e9e or byte ptr [eax + 0x10829301], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829301)))|(DL); w8((uint32_t)(EAX + 0x10829301), (_r)); fl_logic(_r,8); }
  /* 10824ea4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10824ea5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824ea7 jbe 0x10824e9e */
  if ((C.cf||C.zf)) goto L_10824e9e;
L_10824ea9:;
  /* 10824ea9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10824eaa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10824eab cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824eae jne 0x10824e84 */
  if (!C.zf) goto L_10824e84;
L_10824eb0:;
  /* 10824eb0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10824eb3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10824eb6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824eba jb 0x10824e7d */
  if (C.cf) goto L_10824e7d;
  /* 10824ebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10824ebf mov dword ptr [0x108291ec], 1 */
  w32((uint32_t)(0x108291ec), (0x1u));
  /* 10824ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10824eca mov dword ptr [0x108291d8], eax */
  w32((uint32_t)(0x108291d8), (EAX));
  /* 10824ecf call 0x10824fa2 */
  push32(0x10824ed4u); f_10824fa2();
  /* 10824ed4 lea esi, [esi + 0x108289bc] */
  ESI = ((uint32_t)(ESI + 0x108289bc));
  /* 10824eda mov edi, 0x108291e0 */
  EDI = (0x108291e0u);
  /* 10824edf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10824ee0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10824ee1 pop ecx */
  ECX = (pop32());
  /* 10824ee2 mov dword ptr [0x10829404], eax */
  w32((uint32_t)(0x10829404), (EAX));
  /* 10824ee7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10824ee8 jmp 0x10824f3c */
  goto L_10824f3c;
L_10824eea:;
  /* 10824eea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10824eeb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10824eec cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10824ef0 jne 0x10824e3d */
  if (!C.zf) goto L_10824e3d;
L_10824ef6:;
  /* 10824ef6 mov eax, esi */
  EAX = (ESI);
L_10824ef8:;
  /* 10824ef8 or byte ptr [eax + 0x10829301], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829301)))|(0x8u); w8((uint32_t)(EAX + 0x10829301), (_r)); fl_logic(_r,8); }
  /* 10824eff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10824f00 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824f05 jb 0x10824ef8 */
  if (C.cf) goto L_10824ef8;
  /* 10824f07 push ebx */
  push32((uint32_t)(EBX));
  /* 10824f08 call 0x10824fa2 */
  push32(0x10824f0du); f_10824fa2();
  /* 10824f0d pop ecx */
  ECX = (pop32());
  /* 10824f0e mov dword ptr [0x10829404], eax */
  w32((uint32_t)(0x10829404), (EAX));
  /* 10824f13 mov dword ptr [0x108291ec], esi */
  w32((uint32_t)(0x108291ec), (ESI));
  /* 10824f19 jmp 0x10824f22 */
  goto L_10824f22;
L_10824f1b:;
  /* 10824f1b and dword ptr [0x108291ec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x108291ec)))&(0x0u); w32((uint32_t)(0x108291ec), (_r)); fl_logic(_r,32); }
L_10824f22:;
  /* 10824f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824f24 mov edi, 0x108291e0 */
  EDI = (0x108291e0u);
  /* 10824f29 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10824f2a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10824f2b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10824f2c jmp 0x10824f3c */
  goto L_10824f3c;
L_10824f2e:;
  /* 10824f2e cmp dword ptr [0x10829180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10829180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824f35 je 0x10824f46 */
  if (C.zf) goto L_10824f46;
L_10824f37:;
  /* 10824f37 call 0x10824fd5 */
  push32(0x10824f3cu); f_10824fd5();
L_10824f3c:;
  /* 10824f3c call 0x10824ffe */
  push32(0x10824f41u); f_10824ffe();
  /* 10824f41 jmp 0x10824dd2 */
  goto L_10824dd2;
L_10824f46:;
  /* 10824f46 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10824f49:;
  /* 10824f49 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10824f4b call 0x10824ac5 */
  push32(0x10824f50u); f_10824ac5();
  /* 10824f50 pop ecx */
  ECX = (pop32());
  /* 10824f51 mov eax, esi */
  EAX = (ESI);
  /* 10824f53 pop edi */
  EDI = (pop32());
  /* 10824f54 pop esi */
  ESI = (pop32());
  /* 10824f55 pop ebx */
  EBX = (pop32());
  /* 10824f56 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10824f57 ret  */
  ESPCHK(0x10824dabu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f58 @ 0x10824f58 (74 bytes, 15 insns) */
void f_10824f58(void) {
  FTRACE(0x10824f58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824f58 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10824f5c and dword ptr [0x10829180], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10829180)))&(0x0u); w32((uint32_t)(0x10829180), (_r)); fl_logic(_r,32); }
  /* 10824f63 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824f66 jne 0x10824f78 */
  if (!C.zf) goto L_10824f78;
  /* 10824f68 mov dword ptr [0x10829180], 1 */
  w32((uint32_t)(0x10829180), (0x1u));
  /* 10824f72 jmp dword ptr [0x10827028] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10827028)))); return;
L_10824f78:;
  /* 10824f78 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824f7b jne 0x10824f8d */
  if (!C.zf) goto L_10824f8d;
  /* 10824f7d mov dword ptr [0x10829180], 1 */
  w32((uint32_t)(0x10829180), (0x1u));
  /* 10824f87 jmp dword ptr [0x1082702c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1082702c)))); return;
L_10824f8d:;
  /* 10824f8d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10824f90 jne 0x10824fa1 */
  if (!C.zf) goto L_10824fa1;
  /* 10824f92 mov eax, dword ptr [0x108291b0] */
  EAX = (r32((uint32_t)(0x108291b0)));
  /* 10824f97 mov dword ptr [0x10829180], 1 */
  w32((uint32_t)(0x10829180), (0x1u));
L_10824fa1:;
  /* 10824fa1 ret  */
  ESPCHK(0x10824f58u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fa2 @ 0x10824fa2 (51 bytes, 19 insns) */
void f_10824fa2(void) {
  FTRACE(0x10824fa2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824fa2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10824fa6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824fab je 0x10824fcf */
  if (C.zf) goto L_10824fcf;
  /* 10824fad sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824fb0 je 0x10824fc9 */
  if (C.zf) goto L_10824fc9;
  /* 10824fb2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10824fb5 je 0x10824fc3 */
  if (C.zf) goto L_10824fc3;
  /* 10824fb7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10824fb8 je 0x10824fbd */
  if (C.zf) goto L_10824fbd;
  /* 10824fba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824fbc ret  */
  ESPCHK(0x10824fa2u, _esp0);
  ESP += 4; return;
L_10824fbd:;
  /* 10824fbd mov eax, 0x404 */
  EAX = (0x404u);
  /* 10824fc2 ret  */
  ESPCHK(0x10824fa2u, _esp0);
  ESP += 4; return;
L_10824fc3:;
  /* 10824fc3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10824fc8 ret  */
  ESPCHK(0x10824fa2u, _esp0);
  ESP += 4; return;
L_10824fc9:;
  /* 10824fc9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10824fce ret  */
  ESPCHK(0x10824fa2u, _esp0);
  ESP += 4; return;
L_10824fcf:;
  /* 10824fcf mov eax, 0x411 */
  EAX = (0x411u);
  /* 10824fd4 ret  */
  ESPCHK(0x10824fa2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd5 @ 0x10824fd5 (41 bytes, 17 insns) */
void f_10824fd5(void) {
  FTRACE(0x10824fd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824fd5 push edi */
  push32((uint32_t)(EDI));
  /* 10824fd6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10824fd8 pop ecx */
  ECX = (pop32());
  /* 10824fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824fdb mov edi, 0x10829300 */
  EDI = (0x10829300u);
  /* 10824fe0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10824fe2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10824fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10824fe5 mov edi, 0x108291e0 */
  EDI = (0x108291e0u);
  /* 10824fea mov dword ptr [0x108291d8], eax */
  w32((uint32_t)(0x108291d8), (EAX));
  /* 10824fef mov dword ptr [0x108291ec], eax */
  w32((uint32_t)(0x108291ec), (EAX));
  /* 10824ff4 mov dword ptr [0x10829404], eax */
  w32((uint32_t)(0x10829404), (EAX));
  /* 10824ff9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10824ffa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10824ffb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10824ffc pop edi */
  EDI = (pop32());
  /* 10824ffd ret  */
  ESPCHK(0x10824fd5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ffe @ 0x10824ffe (389 bytes, 124 insns) */
void f_10824ffe(void) {
  FTRACE(0x10824ffeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10824ffe push ebp */
  push32((uint32_t)(EBP));
  /* 10824fff mov ebp, esp */
  EBP = (ESP);
  /* 10825001 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10825007 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1082500a push esi */
  push32((uint32_t)(ESI));
  /* 1082500b push eax */
  push32((uint32_t)(EAX));
  /* 1082500c push dword ptr [0x108291d8] */
  push32((uint32_t)(r32((uint32_t)(0x108291d8))));
  /* 10825012 call dword ptr [0x10827030] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827030))), 0x10825018u);
  /* 10825018 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082501b jne 0x10825137 */
  if (!C.zf) goto L_10825137;
  /* 10825021 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10825023 mov esi, 0x100 */
  ESI = (0x100u);
L_10825028:;
  /* 10825028 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1082502f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10825030 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825032 jb 0x10825028 */
  if (C.cf) goto L_10825028;
  /* 10825034 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10825037 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1082503e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10825040 je 0x10825079 */
  if (C.zf) goto L_10825079;
  /* 10825042 push ebx */
  push32((uint32_t)(EBX));
  /* 10825043 push edi */
  push32((uint32_t)(EDI));
  /* 10825044 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10825047:;
  /* 10825047 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1082504a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1082504d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082504f ja 0x1082506e */
  if ((!C.cf&&!C.zf)) goto L_1082506e;
  /* 10825051 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10825053 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1082505a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1082505b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10825060 mov ebx, ecx */
  EBX = (ECX);
  /* 10825062 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10825065 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10825067 mov ecx, ebx */
  ECX = (EBX);
  /* 10825069 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1082506c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1082506e:;
  /* 1082506e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1082506f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10825070 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10825073 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10825075 jne 0x10825047 */
  if (!C.zf) goto L_10825047;
  /* 10825077 pop edi */
  EDI = (pop32());
  /* 10825078 pop ebx */
  EBX = (pop32());
L_10825079:;
  /* 10825079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1082507b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10825081 push dword ptr [0x10829404] */
  push32((uint32_t)(r32((uint32_t)(0x10829404))));
  /* 10825087 push dword ptr [0x108291d8] */
  push32((uint32_t)(r32((uint32_t)(0x108291d8))));
  /* 1082508d push eax */
  push32((uint32_t)(EAX));
  /* 1082508e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10825094 push esi */
  push32((uint32_t)(ESI));
  /* 10825095 push eax */
  push32((uint32_t)(EAX));
  /* 10825096 push 1 */
  push32((uint32_t)(0x1u));
  /* 10825098 call 0x10826172 */
  push32(0x1082509du); f_10826172();
  /* 1082509d push 0 */
  push32((uint32_t)(0x0u));
  /* 1082509f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 108250a5 push dword ptr [0x108291d8] */
  push32((uint32_t)(r32((uint32_t)(0x108291d8))));
  /* 108250ab push esi */
  push32((uint32_t)(ESI));
  /* 108250ac push eax */
  push32((uint32_t)(EAX));
  /* 108250ad lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 108250b3 push esi */
  push32((uint32_t)(ESI));
  /* 108250b4 push eax */
  push32((uint32_t)(EAX));
  /* 108250b5 push esi */
  push32((uint32_t)(ESI));
  /* 108250b6 push dword ptr [0x10829404] */
  push32((uint32_t)(r32((uint32_t)(0x10829404))));
  /* 108250bc call 0x10825f23 */
  push32(0x108250c1u); f_10825f23();
  /* 108250c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108250c3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 108250c9 push dword ptr [0x108291d8] */
  push32((uint32_t)(r32((uint32_t)(0x108291d8))));
  /* 108250cf push esi */
  push32((uint32_t)(ESI));
  /* 108250d0 push eax */
  push32((uint32_t)(EAX));
  /* 108250d1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 108250d7 push esi */
  push32((uint32_t)(ESI));
  /* 108250d8 push eax */
  push32((uint32_t)(EAX));
  /* 108250d9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 108250de push dword ptr [0x10829404] */
  push32((uint32_t)(r32((uint32_t)(0x10829404))));
  /* 108250e4 call 0x10825f23 */
  push32(0x108250e9u); f_10825f23();
  /* 108250e9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108250ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108250ee lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_108250f4:;
  /* 108250f4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 108250f7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 108250fa je 0x10825112 */
  if (C.zf) goto L_10825112;
  /* 108250fc or byte ptr [eax + 0x10829301], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829301)))|(0x10u); w8((uint32_t)(EAX + 0x10829301), (_r)); fl_logic(_r,8); }
  /* 10825103 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1082510a:;
  /* 1082510a mov byte ptr [eax + 0x10829200], dl */
  w8((uint32_t)(EAX + 0x10829200), (DL));
  /* 10825110 jmp 0x1082512e */
  goto L_1082512e;
L_10825112:;
  /* 10825112 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10825115 je 0x10825127 */
  if (C.zf) goto L_10825127;
  /* 10825117 or byte ptr [eax + 0x10829301], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829301)))|(0x20u); w8((uint32_t)(EAX + 0x10829301), (_r)); fl_logic(_r,8); }
  /* 1082511e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10825125 jmp 0x1082510a */
  goto L_1082510a;
L_10825127:;
  /* 10825127 and byte ptr [eax + 0x10829200], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829200)))&(0x0u); w8((uint32_t)(EAX + 0x10829200), (_r)); fl_logic(_r,8); }
L_1082512e:;
  /* 1082512e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1082512f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10825130 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10825131 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825133 jb 0x108250f4 */
  if (C.cf) goto L_108250f4;
  /* 10825135 jmp 0x10825180 */
  goto L_10825180;
L_10825137:;
  /* 10825137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10825139 mov esi, 0x100 */
  ESI = (0x100u);
L_1082513e:;
  /* 1082513e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825141 jb 0x1082515c */
  if (C.cf) goto L_1082515c;
  /* 10825143 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825146 ja 0x1082515c */
  if ((!C.cf&&!C.zf)) goto L_1082515c;
  /* 10825148 or byte ptr [eax + 0x10829301], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829301)))|(0x10u); w8((uint32_t)(EAX + 0x10829301), (_r)); fl_logic(_r,8); }
  /* 1082514f mov cl, al */
  CL = (AL);
  /* 10825151 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10825154:;
  /* 10825154 mov byte ptr [eax + 0x10829200], cl */
  w8((uint32_t)(EAX + 0x10829200), (CL));
  /* 1082515a jmp 0x1082517b */
  goto L_1082517b;
L_1082515c:;
  /* 1082515c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082515f jb 0x10825174 */
  if (C.cf) goto L_10825174;
  /* 10825161 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825164 ja 0x10825174 */
  if ((!C.cf&&!C.zf)) goto L_10825174;
  /* 10825166 or byte ptr [eax + 0x10829301], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829301)))|(0x20u); w8((uint32_t)(EAX + 0x10829301), (_r)); fl_logic(_r,8); }
  /* 1082516d mov cl, al */
  CL = (AL);
  /* 1082516f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10825172 jmp 0x10825154 */
  goto L_10825154;
L_10825174:;
  /* 10825174 and byte ptr [eax + 0x10829200], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10829200)))&(0x0u); w8((uint32_t)(EAX + 0x10829200), (_r)); fl_logic(_r,8); }
L_1082517b:;
  /* 1082517b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1082517c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082517e jb 0x1082513e */
  if (C.cf) goto L_1082513e;
L_10825180:;
  /* 10825180 pop esi */
  ESI = (pop32());
  /* 10825181 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10825182 ret  */
  ESPCHK(0x10824ffeu, _esp0);
  ESP += 4; return;
}

/* FUN_10005183 @ 0x10825183 (28 bytes, 7 insns) */
void f_10825183(void) {
  FTRACE(0x10825183u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825183 cmp dword ptr [0x10829528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10829528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082518a jne 0x1082519e */
  if (!C.zf) goto L_1082519e;
  /* 1082518c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1082518e call 0x10824dab */
  push32(0x10825193u); f_10824dab();
  /* 10825193 pop ecx */
  ECX = (pop32());
  /* 10825194 mov dword ptr [0x10829528], 1 */
  w32((uint32_t)(0x10829528), (0x1u));
L_1082519e:;
  /* 1082519e ret  */
  ESPCHK(0x10825183u, _esp0);
  ESP += 4; return;
}

/* FUN_100051a0 @ 0x108251a0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_108251a0(void) {
  FTRACE(0x108251a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108251a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108251a1 mov ebp, esp */
  EBP = (ESP);
  /* 108251a3 push edi */
  push32((uint32_t)(EDI));
  /* 108251a4 push esi */
  push32((uint32_t)(ESI));
  /* 108251a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108251a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108251ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108251ae mov eax, ecx */
  EAX = (ECX);
  /* 108251b0 mov edx, ecx */
  EDX = (ECX);
  /* 108251b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108251b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108251b6 jbe 0x108251c0 */
  if ((C.cf||C.zf)) goto L_108251c0;
  /* 108251b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108251ba jb 0x10825338 */
  if (C.cf) goto L_10825338;
L_108251c0:;
  /* 108251c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108251c6 jne 0x108251dc */
  if (!C.zf) goto L_108251dc;
  /* 108251c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108251cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108251ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108251d1 jb 0x108251fc */
  if (C.cf) goto L_108251fc;
  /* 108251d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108251d5 jmp dword ptr [edx*4 + 0x108252e8] */
  switch (EDX) {
    case 0: goto L_108252f8;
    case 1: goto L_10825300;
    case 2: goto L_1082530c;
    case 3: goto L_10825320;
    default: x86_unimpl("switch@0x108251d5 out of table"); return;
  }
L_108251dc:;
  /* 108251dc mov eax, edi */
  EAX = (EDI);
  /* 108251de mov edx, 3 */
  EDX = (0x3u);
  /* 108251e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108251e6 jb 0x108251f4 */
  if (C.cf) goto L_108251f4;
  /* 108251e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 108251eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108251ed jmp dword ptr [eax*4 + 0x10825200] */
  switch (EAX) {
    case 1: goto L_10825210;
    case 2: goto L_1082523c;
    case 3: goto L_10825260;
    default: x86_unimpl("switch@0x108251ed out of table"); return;
  }
L_108251f4:;
  /* 108251f4 jmp dword ptr [ecx*4 + 0x108252f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x108252f8)))); return;
  /* 108251fb nop  */
  /* nop */
L_108251fc:;
  /* 108251fc jmp dword ptr [ecx*4 + 0x1082527c] */
  switch (ECX) {
    case 0: goto L_108252df;
    case 1: goto L_108252cc;
    case 2: goto L_108252c4;
    case 3: goto L_108252bc;
    case 4: goto L_108252b4;
    case 5: goto L_108252ac;
    case 6: goto L_108252a4;
    case 7: goto L_1082529c;
    default: x86_unimpl("switch@0x108251fc out of table"); return;
  }
  /* 10825203 nop  */
  /* nop */
L_10825210:;
  /* 10825210 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10825212 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10825214 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825216 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10825219 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1082521c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1082521f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10825222 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10825225 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10825228 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1082522b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082522e jb 0x108251fc */
  if (C.cf) goto L_108251fc;
  /* 10825230 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10825232 jmp dword ptr [edx*4 + 0x108252e8] */
  switch (EDX) {
    case 0: goto L_108252f8;
    case 1: goto L_10825300;
    case 2: goto L_1082530c;
    case 3: goto L_10825320;
    default: x86_unimpl("switch@0x10825232 out of table"); return;
  }
  /* 10825239 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1082523c:;
  /* 1082523c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1082523e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10825240 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825242 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10825245 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10825248 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1082524b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1082524e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10825251 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825254 jb 0x108251fc */
  if (C.cf) goto L_108251fc;
  /* 10825256 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10825258 jmp dword ptr [edx*4 + 0x108252e8] */
  switch (EDX) {
    case 0: goto L_108252f8;
    case 1: goto L_10825300;
    case 2: goto L_1082530c;
    case 3: goto L_10825320;
    default: x86_unimpl("switch@0x10825258 out of table"); return;
  }
  /* 1082525f nop  */
  /* nop */
L_10825260:;
  /* 10825260 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10825262 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10825264 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825266 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10825267 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1082526a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1082526b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082526e jb 0x108251fc */
  if (C.cf) goto L_108251fc;
  /* 10825270 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10825272 jmp dword ptr [edx*4 + 0x108252e8] */
  switch (EDX) {
    case 0: goto L_108252f8;
    case 1: goto L_10825300;
    case 2: goto L_1082530c;
    case 3: goto L_10825320;
    default: x86_unimpl("switch@0x10825272 out of table"); return;
  }
  /* 10825279 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1082529c:;
  /* 1082529c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 108252a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_108252a4:;
  /* 108252a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 108252a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_108252ac:;
  /* 108252ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 108252b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_108252b4:;
  /* 108252b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 108252b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_108252bc:;
  /* 108252bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 108252c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_108252c4:;
  /* 108252c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 108252c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_108252cc:;
  /* 108252cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 108252d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 108252d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108252db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108252dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108252df:;
  /* 108252df jmp dword ptr [edx*4 + 0x108252e8] */
  switch (EDX) {
    case 0: goto L_108252f8;
    case 1: goto L_10825300;
    case 2: goto L_1082530c;
    case 3: goto L_10825320;
    default: x86_unimpl("switch@0x108252df out of table"); return;
  }
  /* 108252e6 mov edi, edi */
  EDI = (EDI);
L_108252f8:;
  /* 108252f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108252fb pop esi */
  ESI = (pop32());
  /* 108252fc pop edi */
  EDI = (pop32());
  /* 108252fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108252fe ret  */
  ESPCHK(0x108251a0u, _esp0);
  ESP += 4; return;
  /* 108252ff nop  */
  /* nop */
L_10825300:;
  /* 10825300 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10825302 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825307 pop esi */
  ESI = (pop32());
  /* 10825308 pop edi */
  EDI = (pop32());
  /* 10825309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1082530a ret  */
  ESPCHK(0x108251a0u, _esp0);
  ESP += 4; return;
  /* 1082530b nop  */
  /* nop */
L_1082530c:;
  /* 1082530c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1082530e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825310 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10825313 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10825316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825319 pop esi */
  ESI = (pop32());
  /* 1082531a pop edi */
  EDI = (pop32());
  /* 1082531b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1082531c ret  */
  ESPCHK(0x108251a0u, _esp0);
  ESP += 4; return;
  /* 1082531d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10825320:;
  /* 10825320 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10825322 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825324 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10825327 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1082532a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1082532d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10825330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825333 pop esi */
  ESI = (pop32());
  /* 10825334 pop edi */
  EDI = (pop32());
  /* 10825335 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10825336 ret  */
  ESPCHK(0x108251a0u, _esp0);
  ESP += 4; return;
  /* 10825337 nop  */
  /* nop */
L_10825338:;
  /* 10825338 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1082533c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10825340 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10825346 jne 0x1082536c */
  if (!C.zf) goto L_1082536c;
  /* 10825348 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1082534b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1082534e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825351 jb 0x10825360 */
  if (C.cf) goto L_10825360;
  /* 10825353 std  */
  C.df=1;
  /* 10825354 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10825356 cld  */
  C.df=0;
  /* 10825357 jmp dword ptr [edx*4 + 0x10825480] */
  switch (EDX) {
    case 0: goto L_10825490;
    case 1: goto L_10825498;
    case 2: goto L_108254a8;
    case 3: goto L_108254bc;
    default: x86_unimpl("switch@0x10825357 out of table"); return;
  }
  /* 1082535e mov edi, edi */
  EDI = (EDI);
L_10825360:;
  /* 10825360 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10825362 jmp dword ptr [ecx*4 + 0x10825430] */
  switch (ECX) {
    case 0: goto L_10825477;
    default: x86_unimpl("switch@0x10825362 out of table"); return;
  }
  /* 10825369 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1082536c:;
  /* 1082536c mov eax, edi */
  EAX = (EDI);
  /* 1082536e mov edx, 3 */
  EDX = (0x3u);
  /* 10825373 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825376 jb 0x10825384 */
  if (C.cf) goto L_10825384;
  /* 10825378 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1082537b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082537d jmp dword ptr [eax*4 + 0x10825388] */
  switch (EAX) {
    case 1: goto L_10825398;
    case 2: goto L_108253b8;
    case 3: goto L_108253e0;
    default: x86_unimpl("switch@0x1082537d out of table"); return;
  }
L_10825384:;
  /* 10825384 jmp dword ptr [ecx*4 + 0x10825480] */
  switch (ECX) {
    case 0: goto L_10825490;
    case 1: goto L_10825498;
    case 2: goto L_108254a8;
    case 3: goto L_108254bc;
    default: x86_unimpl("switch@0x10825384 out of table"); return;
  }
  /* 1082538b nop  */
  /* nop */
L_10825398:;
  /* 10825398 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1082539b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1082539d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108253a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 108253a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108253a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 108253a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108253a8 jb 0x10825360 */
  if (C.cf) goto L_10825360;
  /* 108253aa std  */
  C.df=1;
  /* 108253ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108253ad cld  */
  C.df=0;
  /* 108253ae jmp dword ptr [edx*4 + 0x10825480] */
  switch (EDX) {
    case 0: goto L_10825490;
    case 1: goto L_10825498;
    case 2: goto L_108254a8;
    case 3: goto L_108254bc;
    default: x86_unimpl("switch@0x108253ae out of table"); return;
  }
  /* 108253b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108253b8:;
  /* 108253b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108253bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108253bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108253c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108253c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108253c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108253c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108253cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108253cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108253d2 jb 0x10825360 */
  if (C.cf) goto L_10825360;
  /* 108253d4 std  */
  C.df=1;
  /* 108253d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108253d7 cld  */
  C.df=0;
  /* 108253d8 jmp dword ptr [edx*4 + 0x10825480] */
  switch (EDX) {
    case 0: goto L_10825490;
    case 1: goto L_10825498;
    case 2: goto L_108254a8;
    case 3: goto L_108254bc;
    default: x86_unimpl("switch@0x108253d8 out of table"); return;
  }
  /* 108253df nop  */
  /* nop */
L_108253e0:;
  /* 108253e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108253e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108253e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108253e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108253eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108253ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108253f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108253f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108253f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108253fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108253fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825400 jb 0x10825360 */
  if (C.cf) goto L_10825360;
  /* 10825406 std  */
  C.df=1;
  /* 10825407 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10825409 cld  */
  C.df=0;
  /* 1082540a jmp dword ptr [edx*4 + 0x10825480] */
  switch (EDX) {
    case 0: goto L_10825490;
    case 1: goto L_10825498;
    case 2: goto L_108254a8;
    case 3: goto L_108254bc;
    default: x86_unimpl("switch@0x1082540a out of table"); return;
  }
  /* 10825411 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10825414 xor al, 0x54 */
  { uint32_t _r=(AL)^(0x54u); AL = (_r); fl_logic(_r,8); }
  /* 10825416 adc byte ptr [eax], 0x3c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x3cu),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10825419 push esp */
  push32((uint32_t)(ESP));
  /* 1082541a adc byte ptr [eax], 0x44 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x44u),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1082541d push esp */
  push32((uint32_t)(ESP));
  /* 1082541e adc byte ptr [eax], 0x4c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x4cu),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10825421 push esp */
  push32((uint32_t)(ESP));
  /* 10825422 adc byte ptr [eax], 0x54 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x54u),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10825425 push esp */
  push32((uint32_t)(ESP));
  /* 10825426 adc byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10825429 push esp */
  push32((uint32_t)(ESP));
  /* 1082542a adc byte ptr [eax], 0x64 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x64u),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1082542d push esp */
  push32((uint32_t)(ESP));
  /* 10825434 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10825438 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1082543c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10825440 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10825444 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10825448 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1082544c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10825450 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10825454 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10825458 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1082545c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10825460 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10825464 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10825468 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1082546c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10825473 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10825475 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10825477:;
  /* 10825477 jmp dword ptr [edx*4 + 0x10825480] */
  switch (EDX) {
    case 0: goto L_10825490;
    case 1: goto L_10825498;
    case 2: goto L_108254a8;
    case 3: goto L_108254bc;
    default: x86_unimpl("switch@0x10825477 out of table"); return;
  }
  /* 1082547e mov edi, edi */
  EDI = (EDI);
L_10825490:;
  /* 10825490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825493 pop esi */
  ESI = (pop32());
  /* 10825494 pop edi */
  EDI = (pop32());
  /* 10825495 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10825496 ret  */
  ESPCHK(0x108251a0u, _esp0);
  ESP += 4; return;
  /* 10825497 nop  */
  /* nop */
L_10825498:;
  /* 10825498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1082549b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1082549e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108254a1 pop esi */
  ESI = (pop32());
  /* 108254a2 pop edi */
  EDI = (pop32());
  /* 108254a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108254a4 ret  */
  ESPCHK(0x108251a0u, _esp0);
  ESP += 4; return;
  /* 108254a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108254a8:;
  /* 108254a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108254ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108254ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108254b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108254b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108254b7 pop esi */
  ESI = (pop32());
  /* 108254b8 pop edi */
  EDI = (pop32());
  /* 108254b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108254ba ret  */
  ESPCHK(0x108251a0u, _esp0);
  ESP += 4; return;
  /* 108254bb nop  */
  /* nop */
L_108254bc:;
  /* 108254bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108254bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108254c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108254c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108254c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108254cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108254ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108254d1 pop esi */
  ESI = (pop32());
  /* 108254d2 pop edi */
  EDI = (pop32());
  /* 108254d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108254d4 ret  */
  ESPCHK(0x108251a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d5 @ 0x108254d5 (62 bytes, 15 insns) */
void f_108254d5(void) {
  FTRACE(0x108254d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108254d5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 108254da push 0 */
  push32((uint32_t)(0x0u));
  /* 108254dc push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 108254e2 call dword ptr [0x10827034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827034))), 0x108254e8u);
  /* 108254e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108254ea mov dword ptr [0x108291d4], eax */
  w32((uint32_t)(0x108291d4), (EAX));
  /* 108254ef jne 0x108254f2 */
  if (!C.zf) goto L_108254f2;
  /* 108254f1 ret  */
  ESPCHK(0x108254d5u, _esp0);
  ESP += 4; return;
L_108254f2:;
  /* 108254f2 and dword ptr [0x108291cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x108291cc)))&(0x0u); w32((uint32_t)(0x108291cc), (_r)); fl_logic(_r,32); }
  /* 108254f9 and dword ptr [0x108291d0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x108291d0)))&(0x0u); w32((uint32_t)(0x108291d0), (_r)); fl_logic(_r,32); }
  /* 10825500 push 1 */
  push32((uint32_t)(0x1u));
  /* 10825502 mov dword ptr [0x108291c8], eax */
  w32((uint32_t)(0x108291c8), (EAX));
  /* 10825507 mov dword ptr [0x108291c0], 0x10 */
  w32((uint32_t)(0x108291c0), (0x10u));
  /* 10825511 pop eax */
  EAX = (pop32());
  /* 10825512 ret  */
  ESPCHK(0x108254d5u, _esp0);
  ESP += 4; return;
}

/* FUN_10005513 @ 0x10825513 (43 bytes, 14 insns) */
void f_10825513(void) {
  FTRACE(0x10825513u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825513 mov eax, dword ptr [0x108291d0] */
  EAX = (r32((uint32_t)(0x108291d0)));
  /* 10825518 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1082551b mov eax, dword ptr [0x108291d4] */
  EAX = (r32((uint32_t)(0x108291d4)));
  /* 10825520 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10825523:;
  /* 10825523 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825525 jae 0x1082553b */
  if (!C.cf) goto L_1082553b;
  /* 10825527 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1082552b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082552e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825534 jb 0x1082553d */
  if (C.cf) goto L_1082553d;
  /* 10825536 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825539 jmp 0x10825523 */
  goto L_10825523;
L_1082553b:;
  /* 1082553b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1082553d:;
  /* 1082553d ret  */
  ESPCHK(0x10825513u, _esp0);
  ESP += 4; return;
}

/* FUN_1000553e @ 0x1082553e (811 bytes, 264 insns) */
void f_1082553e(void) {
  FTRACE(0x1082553eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1082553e push ebp */
  push32((uint32_t)(EBP));
  /* 1082553f mov ebp, esp */
  EBP = (ESP);
  /* 10825541 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10825544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10825547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1082554a push ebx */
  push32((uint32_t)(EBX));
  /* 1082554b push esi */
  push32((uint32_t)(ESI));
  /* 1082554c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1082554f mov esi, edx */
  ESI = (EDX);
  /* 10825551 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10825554 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10825557 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1082555a push edi */
  push32((uint32_t)(EDI));
  /* 1082555b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 1082555e mov ecx, esi */
  ECX = (ESI);
  /* 10825560 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10825563 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10825569 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1082556a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1082556d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10825574 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10825577 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1082557a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 1082557d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10825580 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10825583 jne 0x10825604 */
  if (!C.zf) goto L_10825604;
  /* 10825585 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10825588 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1082558a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1082558b pop edi */
  EDI = (pop32());
  /* 1082558c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1082558f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825591 jbe 0x10825596 */
  if ((C.cf||C.zf)) goto L_10825596;
  /* 10825593 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10825596:;
  /* 10825596 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1082559a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082559e jne 0x108255e8 */
  if (!C.zf) goto L_108255e8;
  /* 108255a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108255a3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108255a6 jae 0x108255c4 */
  if (!C.cf) goto L_108255c4;
  /* 108255a8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 108255ad shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 108255af lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 108255b3 not edi */
  EDI = (~(EDI));
  /* 108255b5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 108255b9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 108255bb jne 0x108255e8 */
  if (!C.zf) goto L_108255e8;
  /* 108255bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108255c0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 108255c2 jmp 0x108255e8 */
  goto L_108255e8;
L_108255c4:;
  /* 108255c4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108255c7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 108255cc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 108255ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108255d1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 108255d5 not edi */
  EDI = (~(EDI));
  /* 108255d7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 108255de dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 108255e0 jne 0x108255e8 */
  if (!C.zf) goto L_108255e8;
  /* 108255e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108255e5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_108255e8:;
  /* 108255e8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 108255ec mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 108255f0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 108255f3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 108255f7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 108255fb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 108255fe mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10825601 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10825604:;
  /* 10825604 mov edi, ebx */
  EDI = (EBX);
  /* 10825606 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10825609 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1082560a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082560d jbe 0x10825612 */
  if ((C.cf||C.zf)) goto L_10825612;
  /* 1082560f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10825611 pop edi */
  EDI = (pop32());
L_10825612:;
  /* 10825612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825615 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10825618 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1082561b jne 0x108256c1 */
  if (!C.zf) goto L_108256c1;
  /* 10825621 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10825624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825627 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1082562a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1082562c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1082562f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10825630 pop edx */
  EDX = (pop32());
  /* 10825631 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825633 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10825636 jbe 0x1082563d */
  if ((C.cf||C.zf)) goto L_1082563d;
  /* 10825638 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1082563b mov ecx, edx */
  ECX = (EDX);
L_1082563d:;
  /* 1082563d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825640 mov edi, ebx */
  EDI = (EBX);
  /* 10825642 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10825645 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10825648 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10825649 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082564b jbe 0x1082564f */
  if ((C.cf||C.zf)) goto L_1082564f;
  /* 1082564d mov edi, edx */
  EDI = (EDX);
L_1082564f:;
  /* 1082564f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825651 je 0x108256be */
  if (C.zf) goto L_108256be;
  /* 10825653 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10825656 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10825659 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082565c jne 0x108256a6 */
  if (!C.zf) goto L_108256a6;
  /* 1082565e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10825661 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825664 jae 0x10825682 */
  if (!C.cf) goto L_10825682;
  /* 10825666 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1082566b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1082566d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10825671 not edx */
  EDX = (~(EDX));
  /* 10825673 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10825677 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10825679 jne 0x108256a6 */
  if (!C.zf) goto L_108256a6;
  /* 1082567b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1082567e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10825680 jmp 0x108256a6 */
  goto L_108256a6;
L_10825682:;
  /* 10825682 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825685 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1082568a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1082568c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1082568f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10825693 not edx */
  EDX = (~(EDX));
  /* 10825695 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1082569c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1082569e jne 0x108256a6 */
  if (!C.zf) goto L_108256a6;
  /* 108256a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108256a3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_108256a6:;
  /* 108256a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108256a9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108256ac mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 108256af mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108256b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108256b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108256b8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 108256bb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_108256be:;
  /* 108256be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_108256c1:;
  /* 108256c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108256c5 jne 0x108256d0 */
  if (!C.zf) goto L_108256d0;
  /* 108256c7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108256ca je 0x10825759 */
  if (C.zf) goto L_10825759;
L_108256d0:;
  /* 108256d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108256d3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 108256d6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 108256d9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 108256dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108256df lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 108256e2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 108256e5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 108256e8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 108256eb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108256ee mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 108256f1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108256f4 jne 0x10825759 */
  if (!C.zf) goto L_10825759;
  /* 108256f6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 108256fa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108256fd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10825700 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10825702 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10825706 jae 0x1082572d */
  if (!C.cf) goto L_1082572d;
  /* 10825708 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1082570c jne 0x1082571c */
  if (!C.zf) goto L_1082571c;
  /* 1082570e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10825713 mov ecx, edi */
  ECX = (EDI);
  /* 10825715 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10825717 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1082571a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1082571c:;
  /* 1082571c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10825721 mov ecx, edi */
  ECX = (EDI);
  /* 10825723 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10825725 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10825729 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1082572b jmp 0x10825756 */
  goto L_10825756;
L_1082572d:;
  /* 1082572d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10825731 jne 0x10825743 */
  if (!C.zf) goto L_10825743;
  /* 10825733 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10825736 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1082573b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1082573d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825740 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10825743:;
  /* 10825743 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10825746 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1082574b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1082574d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10825754 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10825756:;
  /* 10825756 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10825759:;
  /* 10825759 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1082575c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1082575e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10825762 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10825764 jne 0x10825864 */
  if (!C.zf) goto L_10825864;
  /* 1082576a mov eax, dword ptr [0x108291cc] */
  EAX = (r32((uint32_t)(0x108291cc)));
  /* 1082576f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825771 je 0x10825856 */
  if (C.zf) goto L_10825856;
  /* 10825777 mov ecx, dword ptr [0x108291c4] */
  ECX = (r32((uint32_t)(0x108291c4)));
  /* 1082577d mov edi, dword ptr [0x1082704c] */
  EDI = (r32((uint32_t)(0x1082704c)));
  /* 10825783 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10825786 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825789 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1082578e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10825793 push ebx */
  push32((uint32_t)(EBX));
  /* 10825794 push ecx */
  push32((uint32_t)(ECX));
  /* 10825795 call edi */
  call_ind((uint32_t)(EDI), 0x10825797u);
  /* 10825797 mov ecx, dword ptr [0x108291c4] */
  ECX = (r32((uint32_t)(0x108291c4)));
  /* 1082579d mov eax, dword ptr [0x108291cc] */
  EAX = (r32((uint32_t)(0x108291cc)));
  /* 108257a2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 108257a7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 108257a9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 108257ac mov eax, dword ptr [0x108291cc] */
  EAX = (r32((uint32_t)(0x108291cc)));
  /* 108257b1 mov ecx, dword ptr [0x108291c4] */
  ECX = (r32((uint32_t)(0x108291c4)));
  /* 108257b7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 108257ba and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 108257c2 mov eax, dword ptr [0x108291cc] */
  EAX = (r32((uint32_t)(0x108291cc)));
  /* 108257c7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 108257ca dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 108257cd mov eax, dword ptr [0x108291cc] */
  EAX = (r32((uint32_t)(0x108291cc)));
  /* 108257d2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108257d5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 108257d9 jne 0x108257e4 */
  if (!C.zf) goto L_108257e4;
  /* 108257db and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 108257df mov eax, dword ptr [0x108291cc] */
  EAX = (r32((uint32_t)(0x108291cc)));
L_108257e4:;
  /* 108257e4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108257e8 jne 0x10825856 */
  if (!C.zf) goto L_10825856;
  /* 108257ea push ebx */
  push32((uint32_t)(EBX));
  /* 108257eb push 0 */
  push32((uint32_t)(0x0u));
  /* 108257ed push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 108257f0 call edi */
  call_ind((uint32_t)(EDI), 0x108257f2u);
  /* 108257f2 mov eax, dword ptr [0x108291cc] */
  EAX = (r32((uint32_t)(0x108291cc)));
  /* 108257f7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 108257fa push 0 */
  push32((uint32_t)(0x0u));
  /* 108257fc push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10825802 call dword ptr [0x10827048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827048))), 0x10825808u);
  /* 10825808 mov eax, dword ptr [0x108291d0] */
  EAX = (r32((uint32_t)(0x108291d0)));
  /* 1082580d mov edx, dword ptr [0x108291d4] */
  EDX = (r32((uint32_t)(0x108291d4)));
  /* 10825813 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10825816 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10825819 mov ecx, eax */
  ECX = (EAX);
  /* 1082581b mov eax, dword ptr [0x108291cc] */
  EAX = (r32((uint32_t)(0x108291cc)));
  /* 10825820 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10825822 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10825826 push ecx */
  push32((uint32_t)(ECX));
  /* 10825827 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1082582a push ecx */
  push32((uint32_t)(ECX));
  /* 1082582b push eax */
  push32((uint32_t)(EAX));
  /* 1082582c call 0x108262c0 */
  push32(0x10825831u); f_108262c0();
  /* 10825831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825834 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10825837 dec dword ptr [0x108291d0] */
  { uint32_t _r=(r32((uint32_t)(0x108291d0)))-1; w32((uint32_t)(0x108291d0), (_r)); fl_dec(_r,32); }
  /* 1082583d cmp eax, dword ptr [0x108291cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x108291cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825843 jbe 0x10825848 */
  if ((C.cf||C.zf)) goto L_10825848;
  /* 10825845 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10825848:;
  /* 10825848 mov ecx, dword ptr [0x108291d4] */
  ECX = (r32((uint32_t)(0x108291d4)));
  /* 1082584e mov dword ptr [0x108291c8], ecx */
  w32((uint32_t)(0x108291c8), (ECX));
  /* 10825854 jmp 0x10825859 */
  goto L_10825859;
L_10825856:;
  /* 10825856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10825859:;
  /* 10825859 mov dword ptr [0x108291cc], eax */
  w32((uint32_t)(0x108291cc), (EAX));
  /* 1082585e mov dword ptr [0x108291c4], esi */
  w32((uint32_t)(0x108291c4), (ESI));
L_10825864:;
  /* 10825864 pop edi */
  EDI = (pop32());
  /* 10825865 pop esi */
  ESI = (pop32());
  /* 10825866 pop ebx */
  EBX = (pop32());
  /* 10825867 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10825868 ret  */
  ESPCHK(0x1082553eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005869 @ 0x10825869 (777 bytes, 275 insns) */
void f_10825869(void) {
  FTRACE(0x10825869u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825869 push ebp */
  push32((uint32_t)(EBP));
  /* 1082586a mov ebp, esp */
  EBP = (ESP);
  /* 1082586c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082586f mov eax, dword ptr [0x108291d0] */
  EAX = (r32((uint32_t)(0x108291d0)));
  /* 10825874 mov edx, dword ptr [0x108291d4] */
  EDX = (r32((uint32_t)(0x108291d4)));
  /* 1082587a push ebx */
  push32((uint32_t)(EBX));
  /* 1082587b push esi */
  push32((uint32_t)(ESI));
  /* 1082587c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1082587f push edi */
  push32((uint32_t)(EDI));
  /* 10825880 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10825883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825886 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10825889 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1082588c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1082588f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10825892 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10825895 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10825896 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825899 jge 0x108258a9 */
  if ((C.sf==C.of)) goto L_108258a9;
  /* 1082589b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1082589e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 108258a0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 108258a4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 108258a7 jmp 0x108258b9 */
  goto L_108258b9;
L_108258a9:;
  /* 108258a9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108258ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108258af xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 108258b1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 108258b3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 108258b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108258b9:;
  /* 108258b9 mov eax, dword ptr [0x108291c8] */
  EAX = (r32((uint32_t)(0x108291c8)));
  /* 108258be mov ebx, eax */
  EBX = (EAX);
  /* 108258c0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108258c2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 108258c5 jae 0x108258e0 */
  if (!C.cf) goto L_108258e0;
L_108258c7:;
  /* 108258c7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 108258ca mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 108258cc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 108258cf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 108258d1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 108258d3 jne 0x108258e0 */
  if (!C.zf) goto L_108258e0;
  /* 108258d5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 108258d8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108258db mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 108258de jb 0x108258c7 */
  if (C.cf) goto L_108258c7;
L_108258e0:;
  /* 108258e0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108258e3 jne 0x1082595e */
  if (!C.zf) goto L_1082595e;
  /* 108258e5 mov ebx, edx */
  EBX = (EDX);
L_108258e7:;
  /* 108258e7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108258e9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 108258ec jae 0x10825903 */
  if (!C.cf) goto L_10825903;
  /* 108258ee mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 108258f1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 108258f3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 108258f6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 108258f8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 108258fa jne 0x10825901 */
  if (!C.zf) goto L_10825901;
  /* 108258fc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 108258ff jmp 0x108258e7 */
  goto L_108258e7;
L_10825901:;
  /* 10825901 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10825903:;
  /* 10825903 jne 0x1082595e */
  if (!C.zf) goto L_1082595e;
L_10825905:;
  /* 10825905 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825908 jae 0x1082591b */
  if (!C.cf) goto L_1082591b;
  /* 1082590a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082590e jne 0x10825918 */
  if (!C.zf) goto L_10825918;
  /* 10825910 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825913 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10825916 jmp 0x10825905 */
  goto L_10825905;
L_10825918:;
  /* 10825918 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1082591b:;
  /* 1082591b jne 0x10825943 */
  if (!C.zf) goto L_10825943;
  /* 1082591d mov ebx, edx */
  EBX = (EDX);
L_1082591f:;
  /* 1082591f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825921 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10825924 jae 0x10825933 */
  if (!C.cf) goto L_10825933;
  /* 10825926 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082592a jne 0x10825931 */
  if (!C.zf) goto L_10825931;
  /* 1082592c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1082592f jmp 0x1082591f */
  goto L_1082591f;
L_10825931:;
  /* 10825931 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10825933:;
  /* 10825933 jne 0x10825943 */
  if (!C.zf) goto L_10825943;
  /* 10825935 call 0x10825b72 */
  push32(0x1082593au); f_10825b72();
  /* 1082593a mov ebx, eax */
  EBX = (EAX);
  /* 1082593c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1082593e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10825941 je 0x10825957 */
  if (C.zf) goto L_10825957;
L_10825943:;
  /* 10825943 push ebx */
  push32((uint32_t)(EBX));
  /* 10825944 call 0x10825c23 */
  push32(0x10825949u); f_10825c23();
  /* 10825949 pop ecx */
  ECX = (pop32());
  /* 1082594a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1082594d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1082594f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10825952 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825955 jne 0x1082595e */
  if (!C.zf) goto L_1082595e;
L_10825957:;
  /* 10825957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10825959 jmp 0x10825b6d */
  goto L_10825b6d;
L_1082595e:;
  /* 1082595e mov dword ptr [0x108291c8], ebx */
  w32((uint32_t)(0x108291c8), (EBX));
  /* 10825964 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10825967 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10825969 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082596c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1082596f je 0x10825985 */
  if (C.zf) goto L_10825985;
  /* 10825971 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10825978 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1082597c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1082597f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10825981 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10825983 jne 0x108259bc */
  if (!C.zf) goto L_108259bc;
L_10825985:;
  /* 10825985 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1082598b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1082598e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10825991 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10825994 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10825998 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1082599b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1082599d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 108259a0 jne 0x108259b9 */
  if (!C.zf) goto L_108259b9;
L_108259a2:;
  /* 108259a2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 108259a8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 108259ab and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 108259ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108259b1 mov edi, esi */
  EDI = (ESI);
  /* 108259b3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 108259b5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 108259b7 je 0x108259a2 */
  if (C.zf) goto L_108259a2;
L_108259b9:;
  /* 108259b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_108259bc:;
  /* 108259bc mov ecx, edx */
  ECX = (EDX);
  /* 108259be xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 108259c0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108259c6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 108259cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108259d0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 108259d4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 108259d6 jne 0x108259e5 */
  if (!C.zf) goto L_108259e5;
  /* 108259d8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 108259df push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108259e1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 108259e4 pop edi */
  EDI = (pop32());
L_108259e5:;
  /* 108259e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108259e7 jl 0x108259ee */
  if ((C.sf!=C.of)) goto L_108259ee;
  /* 108259e9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 108259eb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108259ec jmp 0x108259e5 */
  goto L_108259e5;
L_108259ee:;
  /* 108259ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108259f1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 108259f5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 108259f7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108259fa mov esi, ecx */
  ESI = (ECX);
  /* 108259fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108259ff sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10825a02 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10825a03 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825a06 jle 0x10825a0b */
  if ((C.zf||C.sf!=C.of)) goto L_10825a0b;
  /* 10825a08 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10825a0a pop esi */
  ESI = (pop32());
L_10825a0b:;
  /* 10825a0b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825a0d je 0x10825b20 */
  if (C.zf) goto L_10825b20;
  /* 10825a13 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10825a16 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825a19 jne 0x10825a7c */
  if (!C.zf) goto L_10825a7c;
  /* 10825a1b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825a1e jge 0x10825a4b */
  if ((C.sf==C.of)) goto L_10825a4b;
  /* 10825a20 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10825a25 mov ecx, edi */
  ECX = (EDI);
  /* 10825a27 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10825a29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825a2c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10825a30 not ebx */
  EBX = (~(EBX));
  /* 10825a32 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10825a35 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10825a39 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10825a3d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10825a3f jne 0x10825a79 */
  if (!C.zf) goto L_10825a79;
  /* 10825a41 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825a44 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10825a47 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10825a49 jmp 0x10825a7c */
  goto L_10825a7c;
L_10825a4b:;
  /* 10825a4b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10825a4e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10825a53 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10825a55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825a58 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10825a5c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10825a63 not ebx */
  EBX = (~(EBX));
  /* 10825a65 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10825a67 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10825a69 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10825a6c jne 0x10825a79 */
  if (!C.zf) goto L_10825a79;
  /* 10825a6e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825a71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10825a74 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10825a77 jmp 0x10825a7c */
  goto L_10825a7c;
L_10825a79:;
  /* 10825a79 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10825a7c:;
  /* 10825a7c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10825a7f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10825a82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825a86 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10825a89 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10825a8c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10825a8f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10825a92 je 0x10825b2c */
  if (C.zf) goto L_10825b2c;
  /* 10825a98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10825a9b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10825a9f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10825aa2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10825aa5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10825aa8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10825aab mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10825aae mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10825ab1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10825ab4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825ab7 jne 0x10825b1d */
  if (!C.zf) goto L_10825b1d;
  /* 10825ab9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10825abd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825ac0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10825ac3 jge 0x10825aee */
  if ((C.sf==C.of)) goto L_10825aee;
  /* 10825ac5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10825ac7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10825acb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10825acf jne 0x10825adc */
  if (!C.zf) goto L_10825adc;
  /* 10825ad1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10825ad6 mov ecx, esi */
  ECX = (ESI);
  /* 10825ad8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10825ada or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10825adc:;
  /* 10825adc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10825ae1 mov ecx, esi */
  ECX = (ESI);
  /* 10825ae3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10825ae5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825ae8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10825aec jmp 0x10825b1d */
  goto L_10825b1d;
L_10825aee:;
  /* 10825aee inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10825af0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10825af4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10825af8 jne 0x10825b07 */
  if (!C.zf) goto L_10825b07;
  /* 10825afa lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10825afd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10825b02 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10825b04 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10825b07:;
  /* 10825b07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825b0a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10825b11 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10825b14 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10825b19 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10825b1b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10825b1d:;
  /* 10825b1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10825b20:;
  /* 10825b20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10825b22 je 0x10825b2f */
  if (C.zf) goto L_10825b2f;
  /* 10825b24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10825b26 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10825b2a jmp 0x10825b2f */
  goto L_10825b2f;
L_10825b2c:;
  /* 10825b2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10825b2f:;
  /* 10825b2f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10825b32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825b34 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10825b37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10825b39 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10825b3d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10825b40 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10825b42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10825b44 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10825b47 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10825b49 jne 0x10825b65 */
  if (!C.zf) goto L_10825b65;
  /* 10825b4b cmp ebx, dword ptr [0x108291cc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x108291cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825b51 jne 0x10825b65 */
  if (!C.zf) goto L_10825b65;
  /* 10825b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825b56 cmp ecx, dword ptr [0x108291c4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108291c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825b5c jne 0x10825b65 */
  if (!C.zf) goto L_10825b65;
  /* 10825b5e and dword ptr [0x108291cc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x108291cc)))&(0x0u); w32((uint32_t)(0x108291cc), (_r)); fl_logic(_r,32); }
L_10825b65:;
  /* 10825b65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825b68 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10825b6a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10825b6d:;
  /* 10825b6d pop edi */
  EDI = (pop32());
  /* 10825b6e pop esi */
  ESI = (pop32());
  /* 10825b6f pop ebx */
  EBX = (pop32());
  /* 10825b70 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10825b71 ret  */
  ESPCHK(0x10825869u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b72 @ 0x10825b72 (177 bytes, 53 insns) */
void f_10825b72(void) {
  FTRACE(0x10825b72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825b72 mov eax, dword ptr [0x108291d0] */
  EAX = (r32((uint32_t)(0x108291d0)));
  /* 10825b77 mov ecx, dword ptr [0x108291c0] */
  ECX = (r32((uint32_t)(0x108291c0)));
  /* 10825b7d push esi */
  push32((uint32_t)(ESI));
  /* 10825b7e push edi */
  push32((uint32_t)(EDI));
  /* 10825b7f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10825b81 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825b83 jne 0x10825bb5 */
  if (!C.zf) goto L_10825bb5;
  /* 10825b85 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10825b89 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10825b8c push eax */
  push32((uint32_t)(EAX));
  /* 10825b8d push dword ptr [0x108291d4] */
  push32((uint32_t)(r32((uint32_t)(0x108291d4))));
  /* 10825b93 push edi */
  push32((uint32_t)(EDI));
  /* 10825b94 push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10825b9a call dword ptr [0x10827020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827020))), 0x10825ba0u);
  /* 10825ba0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825ba2 je 0x10825c05 */
  if (C.zf) goto L_10825c05;
  /* 10825ba4 add dword ptr [0x108291c0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x108291c0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x108291c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10825bab mov dword ptr [0x108291d4], eax */
  w32((uint32_t)(0x108291d4), (EAX));
  /* 10825bb0 mov eax, dword ptr [0x108291d0] */
  EAX = (r32((uint32_t)(0x108291d0)));
L_10825bb5:;
  /* 10825bb5 mov ecx, dword ptr [0x108291d4] */
  ECX = (r32((uint32_t)(0x108291d4)));
  /* 10825bbb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10825bc0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10825bc2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10825bc5 push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10825bcb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10825bce call dword ptr [0x10827034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827034))), 0x10825bd4u);
  /* 10825bd4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825bd6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10825bd9 je 0x10825c05 */
  if (C.zf) goto L_10825c05;
  /* 10825bdb push 4 */
  push32((uint32_t)(0x4u));
  /* 10825bdd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10825be2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10825be7 push edi */
  push32((uint32_t)(EDI));
  /* 10825be8 call dword ptr [0x10827024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827024))), 0x10825beeu);
  /* 10825bee cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825bf0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10825bf3 jne 0x10825c09 */
  if (!C.zf) goto L_10825c09;
  /* 10825bf5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10825bf8 push edi */
  push32((uint32_t)(EDI));
  /* 10825bf9 push dword ptr [0x10829408] */
  push32((uint32_t)(r32((uint32_t)(0x10829408))));
  /* 10825bff call dword ptr [0x10827048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827048))), 0x10825c05u);
L_10825c05:;
  /* 10825c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10825c07 jmp 0x10825c20 */
  goto L_10825c20;
L_10825c09:;
  /* 10825c09 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10825c0d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10825c0f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10825c12 inc dword ptr [0x108291d0] */
  { uint32_t _r=(r32((uint32_t)(0x108291d0)))+1; w32((uint32_t)(0x108291d0), (_r)); fl_inc(_r,32); }
  /* 10825c18 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10825c1b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10825c1e mov eax, esi */
  EAX = (ESI);
L_10825c20:;
  /* 10825c20 pop edi */
  EDI = (pop32());
  /* 10825c21 pop esi */
  ESI = (pop32());
  /* 10825c22 ret  */
  ESPCHK(0x10825b72u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c23 @ 0x10825c23 (251 bytes, 85 insns) */
void f_10825c23(void) {
  FTRACE(0x10825c23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825c23 push ebp */
  push32((uint32_t)(EBP));
  /* 10825c24 mov ebp, esp */
  EBP = (ESP);
  /* 10825c26 push ecx */
  push32((uint32_t)(ECX));
  /* 10825c27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825c2a push ebx */
  push32((uint32_t)(EBX));
  /* 10825c2b push esi */
  push32((uint32_t)(ESI));
  /* 10825c2c push edi */
  push32((uint32_t)(EDI));
  /* 10825c2d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10825c30 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10825c33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10825c35:;
  /* 10825c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825c37 jl 0x10825c3e */
  if ((C.sf!=C.of)) goto L_10825c3e;
  /* 10825c39 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10825c3b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10825c3c jmp 0x10825c35 */
  goto L_10825c35;
L_10825c3e:;
  /* 10825c3e mov eax, ebx */
  EAX = (EBX);
  /* 10825c40 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10825c42 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10825c48 pop edx */
  EDX = (pop32());
  /* 10825c49 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10825c50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10825c53:;
  /* 10825c53 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10825c56 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10825c59 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825c5c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10825c5d jne 0x10825c53 */
  if (!C.zf) goto L_10825c53;
  /* 10825c5f mov edi, ebx */
  EDI = (EBX);
  /* 10825c61 push 4 */
  push32((uint32_t)(0x4u));
  /* 10825c63 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10825c66 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10825c69 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10825c6e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10825c73 push edi */
  push32((uint32_t)(EDI));
  /* 10825c74 call dword ptr [0x10827024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827024))), 0x10825c7au);
  /* 10825c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825c7c jne 0x10825c86 */
  if (!C.zf) goto L_10825c86;
  /* 10825c7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10825c81 jmp 0x10825d19 */
  goto L_10825d19;
L_10825c86:;
  /* 10825c86 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10825c8c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825c8e ja 0x10825ccc */
  if ((!C.cf&&!C.zf)) goto L_10825ccc;
  /* 10825c90 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10825c93:;
  /* 10825c93 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10825c97 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10825c9e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10825ca4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10825cab mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10825cad lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10825cb3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10825cb6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10825cc0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825cc5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10825cc8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825cca jbe 0x10825c93 */
  if ((C.cf||C.zf)) goto L_10825c93;
L_10825ccc:;
  /* 10825ccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10825ccf lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10825cd2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10825cd9 pop edi */
  EDI = (pop32());
  /* 10825cda mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10825cdd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10825ce0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10825ce3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10825ce6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10825ce9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10825cee mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10825cf5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10825cf8 mov cl, al */
  CL = (AL);
  /* 10825cfa inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10825cfc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10825cfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10825d01 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10825d04 jne 0x10825d09 */
  if (!C.zf) goto L_10825d09;
  /* 10825d06 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10825d09:;
  /* 10825d09 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10825d0e mov ecx, ebx */
  ECX = (EBX);
  /* 10825d10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10825d12 not edx */
  EDX = (~(EDX));
  /* 10825d14 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10825d17 mov eax, ebx */
  EAX = (EBX);
L_10825d19:;
  /* 10825d19 pop edi */
  EDI = (pop32());
  /* 10825d1a pop esi */
  ESI = (pop32());
  /* 10825d1b pop ebx */
  EBX = (pop32());
  /* 10825d1c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10825d1d ret  */
  ESPCHK(0x10825c23u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d1e @ 0x10825d1e (137 bytes, 50 insns) */
void f_10825d1e(void) {
  FTRACE(0x10825d1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825d1e push ebx */
  push32((uint32_t)(EBX));
  /* 10825d1f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10825d21 cmp dword ptr [0x10829184], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10829184))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825d27 push esi */
  push32((uint32_t)(ESI));
  /* 10825d28 push edi */
  push32((uint32_t)(EDI));
  /* 10825d29 jne 0x10825d6d */
  if (!C.zf) goto L_10825d6d;
  /* 10825d2b push 0x108274c8 */
  push32((uint32_t)(0x108274c8u));
  /* 10825d30 call dword ptr [0x10827018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827018))), 0x10825d36u);
  /* 10825d36 mov edi, eax */
  EDI = (EAX);
  /* 10825d38 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825d3a je 0x10825da3 */
  if (C.zf) goto L_10825da3;
  /* 10825d3c mov esi, dword ptr [0x1082701c] */
  ESI = (r32((uint32_t)(0x1082701c)));
  /* 10825d42 push 0x108274bc */
  push32((uint32_t)(0x108274bcu));
  /* 10825d47 push edi */
  push32((uint32_t)(EDI));
  /* 10825d48 call esi */
  call_ind((uint32_t)(ESI), 0x10825d4au);
  /* 10825d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825d4c mov dword ptr [0x10829184], eax */
  w32((uint32_t)(0x10829184), (EAX));
  /* 10825d51 je 0x10825da3 */
  if (C.zf) goto L_10825da3;
  /* 10825d53 push 0x108274ac */
  push32((uint32_t)(0x108274acu));
  /* 10825d58 push edi */
  push32((uint32_t)(EDI));
  /* 10825d59 call esi */
  call_ind((uint32_t)(ESI), 0x10825d5bu);
  /* 10825d5b push 0x10827498 */
  push32((uint32_t)(0x10827498u));
  /* 10825d60 push edi */
  push32((uint32_t)(EDI));
  /* 10825d61 mov dword ptr [0x10829188], eax */
  w32((uint32_t)(0x10829188), (EAX));
  /* 10825d66 call esi */
  call_ind((uint32_t)(ESI), 0x10825d68u);
  /* 10825d68 mov dword ptr [0x1082918c], eax */
  w32((uint32_t)(0x1082918c), (EAX));
L_10825d6d:;
  /* 10825d6d mov eax, dword ptr [0x10829188] */
  EAX = (r32((uint32_t)(0x10829188)));
  /* 10825d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825d74 je 0x10825d8c */
  if (C.zf) goto L_10825d8c;
  /* 10825d76 call eax */
  call_ind((uint32_t)(EAX), 0x10825d78u);
  /* 10825d78 mov ebx, eax */
  EBX = (EAX);
  /* 10825d7a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10825d7c je 0x10825d8c */
  if (C.zf) goto L_10825d8c;
  /* 10825d7e mov eax, dword ptr [0x1082918c] */
  EAX = (r32((uint32_t)(0x1082918c)));
  /* 10825d83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825d85 je 0x10825d8c */
  if (C.zf) goto L_10825d8c;
  /* 10825d87 push ebx */
  push32((uint32_t)(EBX));
  /* 10825d88 call eax */
  call_ind((uint32_t)(EAX), 0x10825d8au);
  /* 10825d8a mov ebx, eax */
  EBX = (EAX);
L_10825d8c:;
  /* 10825d8c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10825d90 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10825d94 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10825d98 push ebx */
  push32((uint32_t)(EBX));
  /* 10825d99 call dword ptr [0x10829184] */
  call_ind((uint32_t)(r32((uint32_t)(0x10829184))), 0x10825d9fu);
L_10825d9f:;
  /* 10825d9f pop edi */
  EDI = (pop32());
  /* 10825da0 pop esi */
  ESI = (pop32());
  /* 10825da1 pop ebx */
  EBX = (pop32());
  /* 10825da2 ret  */
  ESPCHK(0x10825d1eu, _esp0);
  ESP += 4; return;
L_10825da3:;
  /* 10825da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10825da5 jmp 0x10825d9f */
  goto L_10825d9f;
}

/* _strncpy @ 0x10825db0 (254 bytes, 109 insns) */
void f_10825db0(void) {
  FTRACE(0x10825db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825db0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10825db4 push edi */
  push32((uint32_t)(EDI));
  /* 10825db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10825db7 je 0x10825e33 */
  if (C.zf) goto L_10825e33;
  /* 10825db9 push esi */
  push32((uint32_t)(ESI));
  /* 10825dba push ebx */
  push32((uint32_t)(EBX));
  /* 10825dbb mov ebx, ecx */
  EBX = (ECX);
  /* 10825dbd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10825dc1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10825dc7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10825dcb jne 0x10825dd4 */
  if (!C.zf) goto L_10825dd4;
  /* 10825dcd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10825dd0 jne 0x10825e41 */
  if (!C.zf) goto L_10825e41;
  /* 10825dd2 jmp 0x10825df5 */
  goto L_10825df5;
L_10825dd4:;
  /* 10825dd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10825dd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10825dd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825dd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10825dda dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10825ddb je 0x10825e02 */
  if (C.zf) goto L_10825e02;
  /* 10825ddd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10825ddf je 0x10825e0a */
  if (C.zf) goto L_10825e0a;
  /* 10825de1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10825de7 jne 0x10825dd4 */
  if (!C.zf) goto L_10825dd4;
  /* 10825de9 mov ebx, ecx */
  EBX = (ECX);
  /* 10825deb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10825dee jne 0x10825e41 */
  if (!C.zf) goto L_10825e41;
L_10825df0:;
  /* 10825df0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10825df3 je 0x10825e02 */
  if (C.zf) goto L_10825e02;
L_10825df5:;
  /* 10825df5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10825df7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10825df8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825dfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10825dfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10825dfd je 0x10825e2e */
  if (C.zf) goto L_10825e2e;
  /* 10825dff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10825e00 jne 0x10825df5 */
  if (!C.zf) goto L_10825df5;
L_10825e02:;
  /* 10825e02 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10825e06 pop ebx */
  EBX = (pop32());
  /* 10825e07 pop esi */
  ESI = (pop32());
  /* 10825e08 pop edi */
  EDI = (pop32());
  /* 10825e09 ret  */
  ESPCHK(0x10825db0u, _esp0);
  ESP += 4; return;
L_10825e0a:;
  /* 10825e0a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10825e10 je 0x10825e24 */
  if (C.zf) goto L_10825e24;
L_10825e12:;
  /* 10825e12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825e14 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10825e15 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10825e16 je 0x10825ea6 */
  if (C.zf) goto L_10825ea6;
  /* 10825e1c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10825e22 jne 0x10825e12 */
  if (!C.zf) goto L_10825e12;
L_10825e24:;
  /* 10825e24 mov ebx, ecx */
  EBX = (ECX);
  /* 10825e26 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10825e29 jne 0x10825e97 */
  if (!C.zf) goto L_10825e97;
L_10825e2b:;
  /* 10825e2b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825e2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10825e2e:;
  /* 10825e2e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10825e2f jne 0x10825e2b */
  if (!C.zf) goto L_10825e2b;
  /* 10825e31 pop ebx */
  EBX = (pop32());
  /* 10825e32 pop esi */
  ESI = (pop32());
L_10825e33:;
  /* 10825e33 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10825e37 pop edi */
  EDI = (pop32());
  /* 10825e38 ret  */
  ESPCHK(0x10825db0u, _esp0);
  ESP += 4; return;
L_10825e39:;
  /* 10825e39 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10825e3b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10825e3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10825e3f je 0x10825df0 */
  if (C.zf) goto L_10825df0;
L_10825e41:;
  /* 10825e41 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10825e46 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10825e48 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825e4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10825e4d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10825e4f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10825e51 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10825e54 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10825e59 je 0x10825e39 */
  if (C.zf) goto L_10825e39;
  /* 10825e5b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10825e5d je 0x10825e8b */
  if (C.zf) goto L_10825e8b;
  /* 10825e5f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10825e61 je 0x10825e81 */
  if (C.zf) goto L_10825e81;
  /* 10825e63 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10825e69 je 0x10825e77 */
  if (C.zf) goto L_10825e77;
  /* 10825e6b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10825e71 jne 0x10825e39 */
  if (!C.zf) goto L_10825e39;
  /* 10825e73 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10825e75 jmp 0x10825e8f */
  goto L_10825e8f;
L_10825e77:;
  /* 10825e77 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10825e7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10825e7f jmp 0x10825e8f */
  goto L_10825e8f;
L_10825e81:;
  /* 10825e81 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10825e87 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10825e89 jmp 0x10825e8f */
  goto L_10825e8f;
L_10825e8b:;
  /* 10825e8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10825e8d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10825e8f:;
  /* 10825e8f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10825e92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10825e94 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10825e95 je 0x10825ea1 */
  if (C.zf) goto L_10825ea1;
L_10825e97:;
  /* 10825e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10825e99:;
  /* 10825e99 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10825e9b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10825e9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10825e9f jne 0x10825e99 */
  if (!C.zf) goto L_10825e99;
L_10825ea1:;
  /* 10825ea1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10825ea4 jne 0x10825e2b */
  if (!C.zf) goto L_10825e2b;
L_10825ea6:;
  /* 10825ea6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10825eaa pop ebx */
  EBX = (pop32());
  /* 10825eab pop esi */
  ESI = (pop32());
  /* 10825eac pop edi */
  EDI = (pop32());
  /* 10825ead ret  */
  ESPCHK(0x10825db0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10825eb0 (88 bytes, 40 insns) */
void f_10825eb0(void) {
  FTRACE(0x10825eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825eb0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10825eb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10825eb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10825eba je 0x10825f03 */
  if (C.zf) goto L_10825f03;
  /* 10825ebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10825ebe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10825ec2 push edi */
  push32((uint32_t)(EDI));
  /* 10825ec3 mov edi, ecx */
  EDI = (ECX);
  /* 10825ec5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825ec8 jb 0x10825ef7 */
  if (C.cf) goto L_10825ef7;
  /* 10825eca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10825ecc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10825ecf je 0x10825ed9 */
  if (C.zf) goto L_10825ed9;
  /* 10825ed1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10825ed3:;
  /* 10825ed3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825ed5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10825ed6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10825ed7 jne 0x10825ed3 */
  if (!C.zf) goto L_10825ed3;
L_10825ed9:;
  /* 10825ed9 mov ecx, eax */
  ECX = (EAX);
  /* 10825edb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10825ede add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825ee0 mov ecx, eax */
  ECX = (EAX);
  /* 10825ee2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10825ee5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10825ee7 mov ecx, edx */
  ECX = (EDX);
  /* 10825ee9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10825eec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10825eef je 0x10825ef7 */
  if (C.zf) goto L_10825ef7;
  /* 10825ef1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10825ef3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10825ef5 je 0x10825efd */
  if (C.zf) goto L_10825efd;
L_10825ef7:;
  /* 10825ef7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10825ef9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10825efa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10825efb jne 0x10825ef7 */
  if (!C.zf) goto L_10825ef7;
L_10825efd:;
  /* 10825efd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10825f01 pop edi */
  EDI = (pop32());
  /* 10825f02 ret  */
  ESPCHK(0x10825eb0u, _esp0);
  ESP += 4; return;
L_10825f03:;
  /* 10825f03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10825f07 ret  */
  ESPCHK(0x10825eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f08 @ 0x10825f08 (27 bytes, 13 insns) */
void f_10825f08(void) {
  FTRACE(0x10825f08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825f08 mov eax, dword ptr [0x10829190] */
  EAX = (r32((uint32_t)(0x10829190)));
  /* 10825f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825f0f je 0x10825f20 */
  if (C.zf) goto L_10825f20;
  /* 10825f11 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10825f15 call eax */
  call_ind((uint32_t)(EAX), 0x10825f17u);
  /* 10825f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825f19 pop ecx */
  ECX = (pop32());
  /* 10825f1a je 0x10825f20 */
  if (C.zf) goto L_10825f20;
  /* 10825f1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10825f1e pop eax */
  EAX = (pop32());
  /* 10825f1f ret  */
  ESPCHK(0x10825f08u, _esp0);
  ESP += 4; return;
L_10825f20:;
  /* 10825f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10825f22 ret  */
  ESPCHK(0x10825f08u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f23 @ 0x10825f23 (511 bytes, 193 insns) */
void f_10825f23(void) {
  FTRACE(0x10825f23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10825f23 push ebp */
  push32((uint32_t)(EBP));
  /* 10825f24 mov ebp, esp */
  EBP = (ESP);
  /* 10825f26 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10825f28 push 0x108274e0 */
  push32((uint32_t)(0x108274e0u));
  /* 10825f2d push 0x108266f0 */
  push32((uint32_t)(0x108266f0u));
  /* 10825f32 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10825f38 push eax */
  push32((uint32_t)(EAX));
  /* 10825f39 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10825f40 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10825f43 push ebx */
  push32((uint32_t)(EBX));
  /* 10825f44 push esi */
  push32((uint32_t)(ESI));
  /* 10825f45 push edi */
  push32((uint32_t)(EDI));
  /* 10825f46 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10825f49 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10825f4b cmp dword ptr [0x108291b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x108291b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825f51 jne 0x10825f99 */
  if (!C.zf) goto L_10825f99;
  /* 10825f53 push edi */
  push32((uint32_t)(EDI));
  /* 10825f54 push edi */
  push32((uint32_t)(EDI));
  /* 10825f55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10825f57 pop ebx */
  EBX = (pop32());
  /* 10825f58 push ebx */
  push32((uint32_t)(EBX));
  /* 10825f59 push 0x108274d8 */
  push32((uint32_t)(0x108274d8u));
  /* 10825f5e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10825f63 push esi */
  push32((uint32_t)(ESI));
  /* 10825f64 push edi */
  push32((uint32_t)(EDI));
  /* 10825f65 call dword ptr [0x1082700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082700c))), 0x10825f6bu);
  /* 10825f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825f6d je 0x10825f77 */
  if (C.zf) goto L_10825f77;
  /* 10825f6f mov dword ptr [0x108291b8], ebx */
  w32((uint32_t)(0x108291b8), (EBX));
  /* 10825f75 jmp 0x10825f99 */
  goto L_10825f99;
L_10825f77:;
  /* 10825f77 push edi */
  push32((uint32_t)(EDI));
  /* 10825f78 push edi */
  push32((uint32_t)(EDI));
  /* 10825f79 push ebx */
  push32((uint32_t)(EBX));
  /* 10825f7a push 0x108274d4 */
  push32((uint32_t)(0x108274d4u));
  /* 10825f7f push esi */
  push32((uint32_t)(ESI));
  /* 10825f80 push edi */
  push32((uint32_t)(EDI));
  /* 10825f81 call dword ptr [0x10827010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827010))), 0x10825f87u);
  /* 10825f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10825f89 je 0x108260b1 */
  if (C.zf) goto L_108260b1;
  /* 10825f8f mov dword ptr [0x108291b8], 2 */
  w32((uint32_t)(0x108291b8), (0x2u));
L_10825f99:;
  /* 10825f99 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825f9c jle 0x10825fae */
  if ((C.zf||C.sf!=C.of)) goto L_10825fae;
  /* 10825f9e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10825fa1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10825fa4 call 0x10826147 */
  push32(0x10825fa9u); f_10826147();
  /* 10825fa9 pop ecx */
  ECX = (pop32());
  /* 10825faa pop ecx */
  ECX = (pop32());
  /* 10825fab mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10825fae:;
  /* 10825fae mov eax, dword ptr [0x108291b8] */
  EAX = (r32((uint32_t)(0x108291b8)));
  /* 10825fb3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825fb6 jne 0x10825fd5 */
  if (!C.zf) goto L_10825fd5;
  /* 10825fb8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10825fbb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10825fbe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10825fc1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10825fc4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10825fc7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10825fca call dword ptr [0x10827010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827010))), 0x10825fd0u);
  /* 10825fd0 jmp 0x108260b3 */
  goto L_108260b3;
L_10825fd5:;
  /* 10825fd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825fd8 jne 0x108260b1 */
  if (!C.zf) goto L_108260b1;
  /* 10825fde cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10825fe1 jne 0x10825feb */
  if (!C.zf) goto L_10825feb;
  /* 10825fe3 mov eax, dword ptr [0x108291b0] */
  EAX = (r32((uint32_t)(0x108291b0)));
  /* 10825fe8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10825feb:;
  /* 10825feb push edi */
  push32((uint32_t)(EDI));
  /* 10825fec push edi */
  push32((uint32_t)(EDI));
  /* 10825fed push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10825ff0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10825ff3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10825ff6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10825ff8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10825ffa and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10825ffd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10825ffe push eax */
  push32((uint32_t)(EAX));
  /* 10825fff push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10826002 call dword ptr [0x10827014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827014))), 0x10826008u);
  /* 10826008 mov ebx, eax */
  EBX = (EAX);
  /* 1082600a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1082600d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082600f je 0x108260b1 */
  if (C.zf) goto L_108260b1;
  /* 10826015 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10826018 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1082601b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1082601e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10826020 call 0x108267d0 */
  push32(0x10826025u); f_108267d0();
  /* 10826025 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10826028 mov eax, esp */
  EAX = (ESP);
  /* 1082602a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1082602d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10826031 jmp 0x10826046 */
  goto L_10826046;
  /* 10826033 push 1 */
  push32((uint32_t)(0x1u));
  /* 10826035 pop eax */
  EAX = (pop32());
  /* 10826036 ret  */
  ESPCHK(0x10825f23u, _esp0);
  ESP += 4; return;
  /* 10826037 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1082603a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1082603c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1082603f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10826043 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10826046:;
  /* 10826046 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826049 je 0x108260b1 */
  if (C.zf) goto L_108260b1;
  /* 1082604b push ebx */
  push32((uint32_t)(EBX));
  /* 1082604c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1082604f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10826052 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10826055 push 1 */
  push32((uint32_t)(0x1u));
  /* 10826057 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1082605a call dword ptr [0x10827014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827014))), 0x10826060u);
  /* 10826060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10826062 je 0x108260b1 */
  if (C.zf) goto L_108260b1;
  /* 10826064 push edi */
  push32((uint32_t)(EDI));
  /* 10826065 push edi */
  push32((uint32_t)(EDI));
  /* 10826066 push ebx */
  push32((uint32_t)(EBX));
  /* 10826067 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1082606a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1082606d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10826070 call dword ptr [0x1082700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082700c))), 0x10826076u);
  /* 10826076 mov esi, eax */
  ESI = (EAX);
  /* 10826078 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1082607b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082607d je 0x108260b1 */
  if (C.zf) goto L_108260b1;
  /* 1082607f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10826083 je 0x108260c5 */
  if (C.zf) goto L_108260c5;
  /* 10826085 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826088 je 0x10826140 */
  if (C.zf) goto L_10826140;
  /* 1082608e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826091 jg 0x108260b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_108260b1;
  /* 10826093 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10826096 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10826099 push ebx */
  push32((uint32_t)(EBX));
  /* 1082609a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1082609d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 108260a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 108260a3 call dword ptr [0x1082700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082700c))), 0x108260a9u);
  /* 108260a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108260ab jne 0x10826140 */
  if (!C.zf) goto L_10826140;
L_108260b1:;
  /* 108260b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108260b3:;
  /* 108260b3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 108260b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108260b9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108260c0 pop edi */
  EDI = (pop32());
  /* 108260c1 pop esi */
  ESI = (pop32());
  /* 108260c2 pop ebx */
  EBX = (pop32());
  /* 108260c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108260c4 ret  */
  ESPCHK(0x10825f23u, _esp0);
  ESP += 4; return;
L_108260c5:;
  /* 108260c5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108260cc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 108260cf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108260d2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 108260d4 call 0x108267d0 */
  push32(0x108260d9u); f_108267d0();
  /* 108260d9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 108260dc mov ebx, esp */
  EBX = (ESP);
  /* 108260de mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 108260e1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 108260e5 jmp 0x108260f9 */
  goto L_108260f9;
  /* 108260e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108260e9 pop eax */
  EAX = (pop32());
  /* 108260ea ret  */
  ESPCHK(0x10825f23u, _esp0);
  ESP += 4; return;
  /* 108260eb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 108260ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 108260f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 108260f2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 108260f6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_108260f9:;
  /* 108260f9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108260fb je 0x108260b1 */
  if (C.zf) goto L_108260b1;
  /* 108260fd push esi */
  push32((uint32_t)(ESI));
  /* 108260fe push ebx */
  push32((uint32_t)(EBX));
  /* 108260ff push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10826102 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10826105 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10826108 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1082610b call dword ptr [0x1082700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1082700c))), 0x10826111u);
  /* 10826111 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10826113 je 0x108260b1 */
  if (C.zf) goto L_108260b1;
  /* 10826115 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826118 push edi */
  push32((uint32_t)(EDI));
  /* 10826119 push edi */
  push32((uint32_t)(EDI));
  /* 1082611a jne 0x10826120 */
  if (!C.zf) goto L_10826120;
  /* 1082611c push edi */
  push32((uint32_t)(EDI));
  /* 1082611d push edi */
  push32((uint32_t)(EDI));
  /* 1082611e jmp 0x10826126 */
  goto L_10826126;
L_10826120:;
  /* 10826120 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10826123 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10826126:;
  /* 10826126 push esi */
  push32((uint32_t)(ESI));
  /* 10826127 push ebx */
  push32((uint32_t)(EBX));
  /* 10826128 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1082612d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10826130 call dword ptr [0x10827060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827060))), 0x10826136u);
  /* 10826136 mov esi, eax */
  ESI = (EAX);
  /* 10826138 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082613a je 0x108260b1 */
  if (C.zf) goto L_108260b1;
L_10826140:;
  /* 10826140 mov eax, esi */
  EAX = (ESI);
  /* 10826142 jmp 0x108260b3 */
  goto L_108260b3;
}

/* FUN_10006147 @ 0x10826147 (43 bytes, 20 insns) */
void f_10826147(void) {
  FTRACE(0x10826147u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10826147 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1082614b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1082614f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10826151 push esi */
  push32((uint32_t)(ESI));
  /* 10826152 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10826155 je 0x10826164 */
  if (C.zf) goto L_10826164;
L_10826157:;
  /* 10826157 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1082615a je 0x10826164 */
  if (C.zf) goto L_10826164;
  /* 1082615c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1082615d mov esi, ecx */
  ESI = (ECX);
  /* 1082615f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10826160 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10826162 jne 0x10826157 */
  if (!C.zf) goto L_10826157;
L_10826164:;
  /* 10826164 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10826167 pop esi */
  ESI = (pop32());
  /* 10826168 jne 0x1082616f */
  if (!C.zf) goto L_1082616f;
  /* 1082616a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082616e ret  */
  ESPCHK(0x10826147u, _esp0);
  ESP += 4; return;
L_1082616f:;
  /* 1082616f mov eax, edx */
  EAX = (EDX);
  /* 10826171 ret  */
  ESPCHK(0x10826147u, _esp0);
  ESP += 4; return;
}

/* FUN_10006172 @ 0x10826172 (318 bytes, 123 insns) */
void f_10826172(void) {
  FTRACE(0x10826172u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10826172 push ebp */
  push32((uint32_t)(EBP));
  /* 10826173 mov ebp, esp */
  EBP = (ESP);
  /* 10826175 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10826177 push 0x108274f8 */
  push32((uint32_t)(0x108274f8u));
  /* 1082617c push 0x108266f0 */
  push32((uint32_t)(0x108266f0u));
  /* 10826181 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10826187 push eax */
  push32((uint32_t)(EAX));
  /* 10826188 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1082618f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10826192 push ebx */
  push32((uint32_t)(EBX));
  /* 10826193 push esi */
  push32((uint32_t)(ESI));
  /* 10826194 push edi */
  push32((uint32_t)(EDI));
  /* 10826195 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10826198 mov eax, dword ptr [0x108291bc] */
  EAX = (r32((uint32_t)(0x108291bc)));
  /* 1082619d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1082619f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108261a1 jne 0x108261e1 */
  if (!C.zf) goto L_108261e1;
  /* 108261a3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 108261a6 push eax */
  push32((uint32_t)(EAX));
  /* 108261a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108261a9 pop esi */
  ESI = (pop32());
  /* 108261aa push esi */
  push32((uint32_t)(ESI));
  /* 108261ab push 0x108274d8 */
  push32((uint32_t)(0x108274d8u));
  /* 108261b0 push esi */
  push32((uint32_t)(ESI));
  /* 108261b1 call dword ptr [0x10827004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827004))), 0x108261b7u);
  /* 108261b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108261b9 je 0x108261bf */
  if (C.zf) goto L_108261bf;
  /* 108261bb mov eax, esi */
  EAX = (ESI);
  /* 108261bd jmp 0x108261dc */
  goto L_108261dc;
L_108261bf:;
  /* 108261bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 108261c2 push eax */
  push32((uint32_t)(EAX));
  /* 108261c3 push esi */
  push32((uint32_t)(ESI));
  /* 108261c4 push 0x108274d4 */
  push32((uint32_t)(0x108274d4u));
  /* 108261c9 push esi */
  push32((uint32_t)(ESI));
  /* 108261ca push ebx */
  push32((uint32_t)(EBX));
  /* 108261cb call dword ptr [0x10827008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827008))), 0x108261d1u);
  /* 108261d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108261d3 je 0x108262a7 */
  if (C.zf) goto L_108262a7;
  /* 108261d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108261db pop eax */
  EAX = (pop32());
L_108261dc:;
  /* 108261dc mov dword ptr [0x108291bc], eax */
  w32((uint32_t)(0x108291bc), (EAX));
L_108261e1:;
  /* 108261e1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108261e4 jne 0x1082620a */
  if (!C.zf) goto L_1082620a;
  /* 108261e6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 108261e9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108261eb jne 0x108261f2 */
  if (!C.zf) goto L_108261f2;
  /* 108261ed mov eax, dword ptr [0x108291a0] */
  EAX = (r32((uint32_t)(0x108291a0)));
L_108261f2:;
  /* 108261f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 108261f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 108261f8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 108261fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 108261fe push eax */
  push32((uint32_t)(EAX));
  /* 108261ff call dword ptr [0x10827008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827008))), 0x10826205u);
  /* 10826205 jmp 0x108262a9 */
  goto L_108262a9;
L_1082620a:;
  /* 1082620a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082620d jne 0x108262a7 */
  if (!C.zf) goto L_108262a7;
  /* 10826213 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826216 jne 0x10826220 */
  if (!C.zf) goto L_10826220;
  /* 10826218 mov eax, dword ptr [0x108291b0] */
  EAX = (r32((uint32_t)(0x108291b0)));
  /* 1082621d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10826220:;
  /* 10826220 push ebx */
  push32((uint32_t)(EBX));
  /* 10826221 push ebx */
  push32((uint32_t)(EBX));
  /* 10826222 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10826225 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10826228 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1082622b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1082622d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082622f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10826232 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10826233 push eax */
  push32((uint32_t)(EAX));
  /* 10826234 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10826237 call dword ptr [0x10827014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827014))), 0x1082623du);
  /* 1082623d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10826240 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826242 je 0x108262a7 */
  if (C.zf) goto L_108262a7;
  /* 10826244 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10826247 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1082624a mov eax, edi */
  EAX = (EDI);
  /* 1082624c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1082624f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10826251 call 0x108267d0 */
  push32(0x10826256u); f_108267d0();
  /* 10826256 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10826259 mov esi, esp */
  ESI = (ESP);
  /* 1082625b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1082625e push edi */
  push32((uint32_t)(EDI));
  /* 1082625f push ebx */
  push32((uint32_t)(EBX));
  /* 10826260 push esi */
  push32((uint32_t)(ESI));
  /* 10826261 call 0x10825eb0 */
  push32(0x10826266u); f_10825eb0();
  /* 10826266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10826269 jmp 0x10826276 */
  goto L_10826276;
  /* 1082626b push 1 */
  push32((uint32_t)(0x1u));
  /* 1082626d pop eax */
  EAX = (pop32());
  /* 1082626e ret  */
  ESPCHK(0x10826172u, _esp0);
  ESP += 4; return;
  /* 1082626f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10826272 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10826274 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10826276:;
  /* 10826276 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1082627a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082627c je 0x108262a7 */
  if (C.zf) goto L_108262a7;
  /* 1082627e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10826281 push esi */
  push32((uint32_t)(ESI));
  /* 10826282 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10826285 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10826288 push 1 */
  push32((uint32_t)(0x1u));
  /* 1082628a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1082628d call dword ptr [0x10827014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827014))), 0x10826293u);
  /* 10826293 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826295 je 0x108262a7 */
  if (C.zf) goto L_108262a7;
  /* 10826297 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1082629a push eax */
  push32((uint32_t)(EAX));
  /* 1082629b push esi */
  push32((uint32_t)(ESI));
  /* 1082629c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1082629f call dword ptr [0x10827004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10827004))), 0x108262a5u);
  /* 108262a5 jmp 0x108262a9 */
  goto L_108262a9;
L_108262a7:;
  /* 108262a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108262a9:;
  /* 108262a9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 108262ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108262af mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 108262b6 pop edi */
  EDI = (pop32());
  /* 108262b7 pop esi */
  ESI = (pop32());
  /* 108262b8 pop ebx */
  EBX = (pop32());
  /* 108262b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108262ba ret  */
  ESPCHK(0x10826172u, _esp0);
  ESP += 4; return;
}

/* FUN_100062c0 @ 0x108262c0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_108262c0(void) {
  FTRACE(0x108262c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108262c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108262c1 mov ebp, esp */
  EBP = (ESP);
  /* 108262c3 push edi */
  push32((uint32_t)(EDI));
  /* 108262c4 push esi */
  push32((uint32_t)(ESI));
  /* 108262c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 108262c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108262cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 108262ce mov eax, ecx */
  EAX = (ECX);
  /* 108262d0 mov edx, ecx */
  EDX = (ECX);
  /* 108262d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108262d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108262d6 jbe 0x108262e0 */
  if ((C.cf||C.zf)) goto L_108262e0;
  /* 108262d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108262da jb 0x10826458 */
  if (C.cf) goto L_10826458;
L_108262e0:;
  /* 108262e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 108262e6 jne 0x108262fc */
  if (!C.zf) goto L_108262fc;
  /* 108262e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108262eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 108262ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108262f1 jb 0x1082631c */
  if (C.cf) goto L_1082631c;
  /* 108262f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108262f5 jmp dword ptr [edx*4 + 0x10826408] */
  switch (EDX) {
    case 0: goto L_10826418;
    case 1: goto L_10826420;
    case 2: goto L_1082642c;
    case 3: goto L_10826440;
    default: x86_unimpl("switch@0x108262f5 out of table"); return;
  }
L_108262fc:;
  /* 108262fc mov eax, edi */
  EAX = (EDI);
  /* 108262fe mov edx, 3 */
  EDX = (0x3u);
  /* 10826303 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10826306 jb 0x10826314 */
  if (C.cf) goto L_10826314;
  /* 10826308 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1082630b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1082630d jmp dword ptr [eax*4 + 0x10826320] */
  switch (EAX) {
    case 1: goto L_10826330;
    case 2: goto L_1082635c;
    case 3: goto L_10826380;
    default: x86_unimpl("switch@0x1082630d out of table"); return;
  }
L_10826314:;
  /* 10826314 jmp dword ptr [ecx*4 + 0x10826418] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10826418)))); return;
  /* 1082631b nop  */
  /* nop */
L_1082631c:;
  /* 1082631c jmp dword ptr [ecx*4 + 0x1082639c] */
  switch (ECX) {
    case 0: goto L_108263ff;
    case 1: goto L_108263ec;
    case 2: goto L_108263e4;
    case 3: goto L_108263dc;
    case 4: goto L_108263d4;
    case 5: goto L_108263cc;
    case 6: goto L_108263c4;
    case 7: goto L_108263bc;
    default: x86_unimpl("switch@0x1082631c out of table"); return;
  }
  /* 10826323 nop  */
  /* nop */
L_10826330:;
  /* 10826330 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10826332 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10826334 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10826336 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10826339 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1082633c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1082633f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10826342 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10826345 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10826348 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1082634b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082634e jb 0x1082631c */
  if (C.cf) goto L_1082631c;
  /* 10826350 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10826352 jmp dword ptr [edx*4 + 0x10826408] */
  switch (EDX) {
    case 0: goto L_10826418;
    case 1: goto L_10826420;
    case 2: goto L_1082642c;
    case 3: goto L_10826440;
    default: x86_unimpl("switch@0x10826352 out of table"); return;
  }
  /* 10826359 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1082635c:;
  /* 1082635c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1082635e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10826360 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10826362 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10826365 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10826368 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1082636b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1082636e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10826371 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826374 jb 0x1082631c */
  if (C.cf) goto L_1082631c;
  /* 10826376 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10826378 jmp dword ptr [edx*4 + 0x10826408] */
  switch (EDX) {
    case 0: goto L_10826418;
    case 1: goto L_10826420;
    case 2: goto L_1082642c;
    case 3: goto L_10826440;
    default: x86_unimpl("switch@0x10826378 out of table"); return;
  }
  /* 1082637f nop  */
  /* nop */
L_10826380:;
  /* 10826380 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10826382 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10826384 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10826386 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10826387 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1082638a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1082638b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082638e jb 0x1082631c */
  if (C.cf) goto L_1082631c;
  /* 10826390 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10826392 jmp dword ptr [edx*4 + 0x10826408] */
  switch (EDX) {
    case 0: goto L_10826418;
    case 1: goto L_10826420;
    case 2: goto L_1082642c;
    case 3: goto L_10826440;
    default: x86_unimpl("switch@0x10826392 out of table"); return;
  }
  /* 10826399 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108263bc:;
  /* 108263bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 108263c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_108263c4:;
  /* 108263c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 108263c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_108263cc:;
  /* 108263cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 108263d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_108263d4:;
  /* 108263d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 108263d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_108263dc:;
  /* 108263dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 108263e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_108263e4:;
  /* 108263e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 108263e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_108263ec:;
  /* 108263ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 108263f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 108263f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 108263fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108263fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108263ff:;
  /* 108263ff jmp dword ptr [edx*4 + 0x10826408] */
  switch (EDX) {
    case 0: goto L_10826418;
    case 1: goto L_10826420;
    case 2: goto L_1082642c;
    case 3: goto L_10826440;
    default: x86_unimpl("switch@0x108263ff out of table"); return;
  }
  /* 10826406 mov edi, edi */
  EDI = (EDI);
L_10826418:;
  /* 10826418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1082641b pop esi */
  ESI = (pop32());
  /* 1082641c pop edi */
  EDI = (pop32());
  /* 1082641d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1082641e ret  */
  ESPCHK(0x108262c0u, _esp0);
  ESP += 4; return;
  /* 1082641f nop  */
  /* nop */
L_10826420:;
  /* 10826420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10826422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10826424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10826427 pop esi */
  ESI = (pop32());
  /* 10826428 pop edi */
  EDI = (pop32());
  /* 10826429 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1082642a ret  */
  ESPCHK(0x108262c0u, _esp0);
  ESP += 4; return;
  /* 1082642b nop  */
  /* nop */
L_1082642c:;
  /* 1082642c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1082642e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10826430 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10826433 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10826436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10826439 pop esi */
  ESI = (pop32());
  /* 1082643a pop edi */
  EDI = (pop32());
  /* 1082643b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1082643c ret  */
  ESPCHK(0x108262c0u, _esp0);
  ESP += 4; return;
  /* 1082643d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10826440:;
  /* 10826440 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10826442 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10826444 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10826447 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1082644a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1082644d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10826450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10826453 pop esi */
  ESI = (pop32());
  /* 10826454 pop edi */
  EDI = (pop32());
  /* 10826455 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10826456 ret  */
  ESPCHK(0x108262c0u, _esp0);
  ESP += 4; return;
  /* 10826457 nop  */
  /* nop */
L_10826458:;
  /* 10826458 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1082645c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10826460 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10826466 jne 0x1082648c */
  if (!C.zf) goto L_1082648c;
  /* 10826468 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1082646b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1082646e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826471 jb 0x10826480 */
  if (C.cf) goto L_10826480;
  /* 10826473 std  */
  C.df=1;
  /* 10826474 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10826476 cld  */
  C.df=0;
  /* 10826477 jmp dword ptr [edx*4 + 0x108265a0] */
  switch (EDX) {
    case 0: goto L_108265b0;
    case 1: goto L_108265b8;
    case 2: goto L_108265c8;
    case 3: goto L_108265dc;
    default: x86_unimpl("switch@0x10826477 out of table"); return;
  }
  /* 1082647e mov edi, edi */
  EDI = (EDI);
L_10826480:;
  /* 10826480 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10826482 jmp dword ptr [ecx*4 + 0x10826550] */
  switch (ECX) {
    case 0: goto L_10826597;
    default: x86_unimpl("switch@0x10826482 out of table"); return;
  }
  /* 10826489 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1082648c:;
  /* 1082648c mov eax, edi */
  EAX = (EDI);
  /* 1082648e mov edx, 3 */
  EDX = (0x3u);
  /* 10826493 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826496 jb 0x108264a4 */
  if (C.cf) goto L_108264a4;
  /* 10826498 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1082649b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082649d jmp dword ptr [eax*4 + 0x108264a8] */
  switch (EAX) {
    case 1: goto L_108264b8;
    case 2: goto L_108264d8;
    case 3: goto L_10826500;
    default: x86_unimpl("switch@0x1082649d out of table"); return;
  }
L_108264a4:;
  /* 108264a4 jmp dword ptr [ecx*4 + 0x108265a0] */
  switch (ECX) {
    case 0: goto L_108265b0;
    case 1: goto L_108265b8;
    case 2: goto L_108265c8;
    case 3: goto L_108265dc;
    default: x86_unimpl("switch@0x108264a4 out of table"); return;
  }
  /* 108264ab nop  */
  /* nop */
L_108264b8:;
  /* 108264b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108264bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108264bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108264c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 108264c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108264c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 108264c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108264c8 jb 0x10826480 */
  if (C.cf) goto L_10826480;
  /* 108264ca std  */
  C.df=1;
  /* 108264cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108264cd cld  */
  C.df=0;
  /* 108264ce jmp dword ptr [edx*4 + 0x108265a0] */
  switch (EDX) {
    case 0: goto L_108265b0;
    case 1: goto L_108265b8;
    case 2: goto L_108265c8;
    case 3: goto L_108265dc;
    default: x86_unimpl("switch@0x108264ce out of table"); return;
  }
  /* 108264d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108264d8:;
  /* 108264d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108264db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 108264dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108264e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108264e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 108264e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108264e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108264ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108264ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108264f2 jb 0x10826480 */
  if (C.cf) goto L_10826480;
  /* 108264f4 std  */
  C.df=1;
  /* 108264f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 108264f7 cld  */
  C.df=0;
  /* 108264f8 jmp dword ptr [edx*4 + 0x108265a0] */
  switch (EDX) {
    case 0: goto L_108265b0;
    case 1: goto L_108265b8;
    case 2: goto L_108265c8;
    case 3: goto L_108265dc;
    default: x86_unimpl("switch@0x108264f8 out of table"); return;
  }
  /* 108264ff nop  */
  /* nop */
L_10826500:;
  /* 10826500 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10826503 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10826505 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10826508 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1082650b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1082650e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10826511 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10826514 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10826517 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082651a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1082651d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826520 jb 0x10826480 */
  if (C.cf) goto L_10826480;
  /* 10826526 std  */
  C.df=1;
  /* 10826527 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10826529 cld  */
  C.df=0;
  /* 1082652a jmp dword ptr [edx*4 + 0x108265a0] */
  switch (EDX) {
    case 0: goto L_108265b0;
    case 1: goto L_108265b8;
    case 2: goto L_108265c8;
    case 3: goto L_108265dc;
    default: x86_unimpl("switch@0x1082652a out of table"); return;
  }
  /* 10826531 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10826534 push esp */
  push32((uint32_t)(ESP));
  /* 10826535 adc byte ptr gs:[eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10826539 adc byte ptr gs:[eax], 0x64 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x64u),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1082653d adc byte ptr gs:[eax], 0x6c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x6cu),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10826541 adc byte ptr gs:[eax], 0x74 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x74u),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10826545 adc byte ptr gs:[eax], 0x7c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x7cu),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10826549 adc byte ptr gs:[eax], 0x84 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x84u),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10826554 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10826558 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1082655c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10826560 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10826564 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10826568 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1082656c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10826570 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10826574 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10826578 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1082657c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10826580 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10826584 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10826588 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1082658c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10826593 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10826595 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10826597:;
  /* 10826597 jmp dword ptr [edx*4 + 0x108265a0] */
  switch (EDX) {
    case 0: goto L_108265b0;
    case 1: goto L_108265b8;
    case 2: goto L_108265c8;
    case 3: goto L_108265dc;
    default: x86_unimpl("switch@0x10826597 out of table"); return;
  }
  /* 1082659e mov edi, edi */
  EDI = (EDI);
L_108265b0:;
  /* 108265b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108265b3 pop esi */
  ESI = (pop32());
  /* 108265b4 pop edi */
  EDI = (pop32());
  /* 108265b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108265b6 ret  */
  ESPCHK(0x108262c0u, _esp0);
  ESP += 4; return;
  /* 108265b7 nop  */
  /* nop */
L_108265b8:;
  /* 108265b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108265bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108265be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108265c1 pop esi */
  ESI = (pop32());
  /* 108265c2 pop edi */
  EDI = (pop32());
  /* 108265c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108265c4 ret  */
  ESPCHK(0x108262c0u, _esp0);
  ESP += 4; return;
  /* 108265c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_108265c8:;
  /* 108265c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108265cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108265ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108265d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108265d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108265d7 pop esi */
  ESI = (pop32());
  /* 108265d8 pop edi */
  EDI = (pop32());
  /* 108265d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108265da ret  */
  ESPCHK(0x108262c0u, _esp0);
  ESP += 4; return;
  /* 108265db nop  */
  /* nop */
L_108265dc:;
  /* 108265dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 108265df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 108265e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 108265e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 108265e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 108265eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 108265ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108265f1 pop esi */
  ESI = (pop32());
  /* 108265f2 pop edi */
  EDI = (pop32());
  /* 108265f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 108265f4 ret  */
  ESPCHK(0x108262c0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x108265f8 (32 bytes, 18 insns) */
void f_108265f8(void) {
  FTRACE(0x108265f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108265f8 push ebp */
  push32((uint32_t)(EBP));
  /* 108265f9 mov ebp, esp */
  EBP = (ESP);
  /* 108265fb push ebx */
  push32((uint32_t)(EBX));
  /* 108265fc push esi */
  push32((uint32_t)(ESI));
  /* 108265fd push edi */
  push32((uint32_t)(EDI));
  /* 108265fe push ebp */
  push32((uint32_t)(EBP));
  /* 108265ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10826601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10826603 push 0x10826610 */
  push32((uint32_t)(0x10826610u));
  /* 10826608 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1082660b call 0x10826800 */
  push32(0x10826610u); f_10826800();
  /* 10826610 pop ebp */
  EBP = (pop32());
  /* 10826611 pop edi */
  EDI = (pop32());
  /* 10826612 pop esi */
  ESI = (pop32());
  /* 10826613 pop ebx */
  EBX = (pop32());
  /* 10826614 mov esp, ebp */
  ESP = (EBP);
  /* 10826616 pop ebp */
  EBP = (pop32());
  /* 10826617 ret  */
  ESPCHK(0x108265f8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1082663a (104 bytes, 33 insns) */
void f_1082663a(void) {
  FTRACE(0x1082663au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1082663a push ebx */
  push32((uint32_t)(EBX));
  /* 1082663b push esi */
  push32((uint32_t)(ESI));
  /* 1082663c push edi */
  push32((uint32_t)(EDI));
  /* 1082663d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10826641 push eax */
  push32((uint32_t)(EAX));
  /* 10826642 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10826644 push 0x10826618 */
  push32((uint32_t)(0x10826618u));
  /* 10826649 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10826650 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10826657:;
  /* 10826657 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1082665b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1082665e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10826661 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10826664 je 0x10826694 */
  if (C.zf) goto L_10826694;
  /* 10826666 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082666a je 0x10826694 */
  if (C.zf) goto L_10826694;
  /* 1082666c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1082666f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10826672 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10826676 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10826679 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1082667e jne 0x10826692 */
  if (!C.zf) goto L_10826692;
  /* 10826680 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10826685 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10826689 call 0x108266ce */
  push32(0x1082668eu); f_108266ce();
  /* 1082668e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10826692u);
L_10826692:;
  /* 10826692 jmp 0x10826657 */
  goto L_10826657;
L_10826694:;
  /* 10826694 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1082669b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1082669e pop edi */
  EDI = (pop32());
  /* 1082669f pop esi */
  ESI = (pop32());
  /* 108266a0 pop ebx */
  EBX = (pop32());
  /* 108266a1 ret  */
  ESPCHK(0x1082663au, _esp0);
  ESP += 4; return;
}

/* FUN_100066ce @ 0x108266ce (24 bytes, 10 insns) */
void f_108266ce(void) {
  FTRACE(0x108266ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108266ce push ebx */
  push32((uint32_t)(EBX));
  /* 108266cf push ecx */
  push32((uint32_t)(ECX));
  /* 108266d0 mov ebx, 0x10828ac0 */
  EBX = (0x10828ac0u);
  /* 108266d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108266d8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 108266db mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 108266de mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 108266e1 pop ecx */
  ECX = (pop32());
  /* 108266e2 pop ebx */
  EBX = (pop32());
  /* 108266e3 ret 4 */
  ESPCHK(0x108266ceu, _esp0);
  ESP += 8; return;
}

/* FUN_100067ad @ 0x108267ad (27 bytes, 11 insns) */
void f_108267ad(void) {
  FTRACE(0x108267adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108267ad push ebp */
  push32((uint32_t)(EBP));
  /* 108267ae mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 108267b2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 108267b4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 108267b7 push eax */
  push32((uint32_t)(EAX));
  /* 108267b8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 108267bb push eax */
  push32((uint32_t)(EAX));
  /* 108267bc call 0x1082663a */
  push32(0x108267c1u); f_1082663a();
  /* 108267c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108267c4 pop ebp */
  EBP = (pop32());
  /* 108267c5 ret 4 */
  ESPCHK(0x108267adu, _esp0);
  ESP += 8; return;
}

/* FUN_100067d0 @ 0x108267d0 (47 bytes, 17 insns) */
void f_108267d0(void) {
  FTRACE(0x108267d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108267d0 push ecx */
  push32((uint32_t)(ECX));
  /* 108267d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108267d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 108267da jb 0x108267f0 */
  if (C.cf) goto L_108267f0;
L_108267dc:;
  /* 108267dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108267e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108267e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 108267e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108267ee jae 0x108267dc */
  if (!C.cf) goto L_108267dc;
L_108267f0:;
  /* 108267f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108267f2 mov eax, esp */
  EAX = (ESP);
  /* 108267f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 108267f6 mov esp, ecx */
  ESP = (ECX);
  /* 108267f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108267fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 108267fd push eax */
  push32((uint32_t)(EAX));
  /* 108267fe ret  */
  ESPCHK(0x108267d0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10826800 (6 bytes, 1 insns) */
void f_10826800(void) {
  FTRACE(0x10826800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10826800 jmp dword ptr [0x10827000] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10827000)))); return;
}

