#include "recomp.h"

/* OnInit @ 0x10b81000 (774 bytes, 197 insns) */
void f_10b81000(void) {
  FTRACE(0x10b81000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b81000 push esi */
  push32((uint32_t)(ESI));
  /* 10b81001 mov esi, dword ptr [0x10b8512c] */
  ESI = (r32((uint32_t)(0x10b8512c)));
  /* 10b81007 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8100c push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81011 call esi */
  call_ind((uint32_t)(ESI), 0x10b81013u);
  /* 10b81013 push 0x10b86284 */
  push32((uint32_t)(0x10b86284u));
  /* 10b81018 push 0x10b86940 */
  push32((uint32_t)(0x10b86940u));
  /* 10b8101d call esi */
  call_ind((uint32_t)(ESI), 0x10b8101fu);
  /* 10b8101f push 0x10b86274 */
  push32((uint32_t)(0x10b86274u));
  /* 10b81024 push 0x10b86800 */
  push32((uint32_t)(0x10b86800u));
  /* 10b81029 call esi */
  call_ind((uint32_t)(ESI), 0x10b8102bu);
  /* 10b8102b push 0x10b8626c */
  push32((uint32_t)(0x10b8626cu));
  /* 10b81030 push 0x10b86828 */
  push32((uint32_t)(0x10b86828u));
  /* 10b81035 call esi */
  call_ind((uint32_t)(ESI), 0x10b81037u);
  /* 10b81037 push 0x10b86264 */
  push32((uint32_t)(0x10b86264u));
  /* 10b8103c push 0x10b867d8 */
  push32((uint32_t)(0x10b867d8u));
  /* 10b81041 call esi */
  call_ind((uint32_t)(ESI), 0x10b81043u);
  /* 10b81043 push 0x10b86258 */
  push32((uint32_t)(0x10b86258u));
  /* 10b81048 push 0x10b867b0 */
  push32((uint32_t)(0x10b867b0u));
  /* 10b8104d call esi */
  call_ind((uint32_t)(ESI), 0x10b8104fu);
  /* 10b8104f push 0x10b86250 */
  push32((uint32_t)(0x10b86250u));
  /* 10b81054 push 0x10b86950 */
  push32((uint32_t)(0x10b86950u));
  /* 10b81059 call esi */
  call_ind((uint32_t)(ESI), 0x10b8105bu);
  /* 10b8105b push 0x10b86248 */
  push32((uint32_t)(0x10b86248u));
  /* 10b81060 push 0x10b86900 */
  push32((uint32_t)(0x10b86900u));
  /* 10b81065 call esi */
  call_ind((uint32_t)(ESI), 0x10b81067u);
  /* 10b81067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8106a push 0x10b86240 */
  push32((uint32_t)(0x10b86240u));
  /* 10b8106f push 0x10b868f8 */
  push32((uint32_t)(0x10b868f8u));
  /* 10b81074 call esi */
  call_ind((uint32_t)(ESI), 0x10b81076u);
  /* 10b81076 push 0x10b86234 */
  push32((uint32_t)(0x10b86234u));
  /* 10b8107b push 0x10b868a8 */
  push32((uint32_t)(0x10b868a8u));
  /* 10b81080 call esi */
  call_ind((uint32_t)(ESI), 0x10b81082u);
  /* 10b81082 push 0x10b86228 */
  push32((uint32_t)(0x10b86228u));
  /* 10b81087 push 0x10b868b0 */
  push32((uint32_t)(0x10b868b0u));
  /* 10b8108c call esi */
  call_ind((uint32_t)(ESI), 0x10b8108eu);
  /* 10b8108e push 0x10b86218 */
  push32((uint32_t)(0x10b86218u));
  /* 10b81093 push 0x10b867f8 */
  push32((uint32_t)(0x10b867f8u));
  /* 10b81098 call esi */
  call_ind((uint32_t)(ESI), 0x10b8109au);
  /* 10b8109a push 0x10b86208 */
  push32((uint32_t)(0x10b86208u));
  /* 10b8109f push 0x10b86810 */
  push32((uint32_t)(0x10b86810u));
  /* 10b810a4 call esi */
  call_ind((uint32_t)(ESI), 0x10b810a6u);
  /* 10b810a6 push 0x10b861f8 */
  push32((uint32_t)(0x10b861f8u));
  /* 10b810ab push 0x10b86808 */
  push32((uint32_t)(0x10b86808u));
  /* 10b810b0 call esi */
  call_ind((uint32_t)(ESI), 0x10b810b2u);
  /* 10b810b2 push 0x10b861f0 */
  push32((uint32_t)(0x10b861f0u));
  /* 10b810b7 push 0x10b86848 */
  push32((uint32_t)(0x10b86848u));
  /* 10b810bc call esi */
  call_ind((uint32_t)(ESI), 0x10b810beu);
  /* 10b810be push 0x10b861e4 */
  push32((uint32_t)(0x10b861e4u));
  /* 10b810c3 push 0x10b86928 */
  push32((uint32_t)(0x10b86928u));
  /* 10b810c8 call esi */
  call_ind((uint32_t)(ESI), 0x10b810cau);
  /* 10b810ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b810cd push 0x10b861d8 */
  push32((uint32_t)(0x10b861d8u));
  /* 10b810d2 push 0x10b867c0 */
  push32((uint32_t)(0x10b867c0u));
  /* 10b810d7 call esi */
  call_ind((uint32_t)(ESI), 0x10b810d9u);
  /* 10b810d9 push 0x10b861cc */
  push32((uint32_t)(0x10b861ccu));
  /* 10b810de push 0x10b86830 */
  push32((uint32_t)(0x10b86830u));
  /* 10b810e3 call esi */
  call_ind((uint32_t)(ESI), 0x10b810e5u);
  /* 10b810e5 push 0x10b861c4 */
  push32((uint32_t)(0x10b861c4u));
  /* 10b810ea push 0x10b868d0 */
  push32((uint32_t)(0x10b868d0u));
  /* 10b810ef call esi */
  call_ind((uint32_t)(ESI), 0x10b810f1u);
  /* 10b810f1 push 0x10b861bc */
  push32((uint32_t)(0x10b861bcu));
  /* 10b810f6 push 0x10b867b8 */
  push32((uint32_t)(0x10b867b8u));
  /* 10b810fb call esi */
  call_ind((uint32_t)(ESI), 0x10b810fdu);
  /* 10b810fd push 0x10b861b8 */
  push32((uint32_t)(0x10b861b8u));
  /* 10b81102 push 0x10b86838 */
  push32((uint32_t)(0x10b86838u));
  /* 10b81107 call esi */
  call_ind((uint32_t)(ESI), 0x10b81109u);
  /* 10b81109 push 0x10b861b0 */
  push32((uint32_t)(0x10b861b0u));
  /* 10b8110e push 0x10b867c8 */
  push32((uint32_t)(0x10b867c8u));
  /* 10b81113 call esi */
  call_ind((uint32_t)(ESI), 0x10b81115u);
  /* 10b81115 push 0x10b861a4 */
  push32((uint32_t)(0x10b861a4u));
  /* 10b8111a push 0x10b868e8 */
  push32((uint32_t)(0x10b868e8u));
  /* 10b8111f call esi */
  call_ind((uint32_t)(ESI), 0x10b81121u);
  /* 10b81121 push 0x10b86198 */
  push32((uint32_t)(0x10b86198u));
  /* 10b81126 push 0x10b868f0 */
  push32((uint32_t)(0x10b868f0u));
  /* 10b8112b call esi */
  call_ind((uint32_t)(ESI), 0x10b8112du);
  /* 10b8112d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81130 push 0x10b8618c */
  push32((uint32_t)(0x10b8618cu));
  /* 10b81135 push 0x10b868d8 */
  push32((uint32_t)(0x10b868d8u));
  /* 10b8113a call esi */
  call_ind((uint32_t)(ESI), 0x10b8113cu);
  /* 10b8113c push 0x10b86180 */
  push32((uint32_t)(0x10b86180u));
  /* 10b81141 push 0x10b868e0 */
  push32((uint32_t)(0x10b868e0u));
  /* 10b81146 call esi */
  call_ind((uint32_t)(ESI), 0x10b81148u);
  /* 10b81148 push 0x10b86178 */
  push32((uint32_t)(0x10b86178u));
  /* 10b8114d push 0x10b867d0 */
  push32((uint32_t)(0x10b867d0u));
  /* 10b81152 call esi */
  call_ind((uint32_t)(ESI), 0x10b81154u);
  /* 10b81154 push 0x10b86170 */
  push32((uint32_t)(0x10b86170u));
  /* 10b81159 push 0x10b868a0 */
  push32((uint32_t)(0x10b868a0u));
  /* 10b8115e call esi */
  call_ind((uint32_t)(ESI), 0x10b81160u);
  /* 10b81160 push 0x10b86164 */
  push32((uint32_t)(0x10b86164u));
  /* 10b81165 push 0x10b868c8 */
  push32((uint32_t)(0x10b868c8u));
  /* 10b8116a call esi */
  call_ind((uint32_t)(ESI), 0x10b8116cu);
  /* 10b8116c push 0x10b86158 */
  push32((uint32_t)(0x10b86158u));
  /* 10b81171 push 0x10b868c0 */
  push32((uint32_t)(0x10b868c0u));
  /* 10b81176 call esi */
  call_ind((uint32_t)(ESI), 0x10b81178u);
  /* 10b81178 push 0x10b8614c */
  push32((uint32_t)(0x10b8614cu));
  /* 10b8117d push 0x10b868b8 */
  push32((uint32_t)(0x10b868b8u));
  /* 10b81182 call esi */
  call_ind((uint32_t)(ESI), 0x10b81184u);
  /* 10b81184 push 0x10b86140 */
  push32((uint32_t)(0x10b86140u));
  /* 10b81189 push 0x10b867f0 */
  push32((uint32_t)(0x10b867f0u));
  /* 10b8118e call esi */
  call_ind((uint32_t)(ESI), 0x10b81190u);
  /* 10b81190 mov esi, dword ptr [0x10b85130] */
  ESI = (r32((uint32_t)(0x10b85130)));
  /* 10b81196 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81199 push 0x10b86138 */
  push32((uint32_t)(0x10b86138u));
  /* 10b8119e push 0x10b86880 */
  push32((uint32_t)(0x10b86880u));
  /* 10b811a3 call esi */
  call_ind((uint32_t)(ESI), 0x10b811a5u);
  /* 10b811a5 push 0x10b86130 */
  push32((uint32_t)(0x10b86130u));
  /* 10b811aa push 0x10b86930 */
  push32((uint32_t)(0x10b86930u));
  /* 10b811af call esi */
  call_ind((uint32_t)(ESI), 0x10b811b1u);
  /* 10b811b1 push 0x10b86128 */
  push32((uint32_t)(0x10b86128u));
  /* 10b811b6 push 0x10b867e0 */
  push32((uint32_t)(0x10b867e0u));
  /* 10b811bb call esi */
  call_ind((uint32_t)(ESI), 0x10b811bdu);
  /* 10b811bd push 0x10b86120 */
  push32((uint32_t)(0x10b86120u));
  /* 10b811c2 push 0x10b867e8 */
  push32((uint32_t)(0x10b867e8u));
  /* 10b811c7 call esi */
  call_ind((uint32_t)(ESI), 0x10b811c9u);
  /* 10b811c9 push 0x10b86114 */
  push32((uint32_t)(0x10b86114u));
  /* 10b811ce push 0x10b86860 */
  push32((uint32_t)(0x10b86860u));
  /* 10b811d3 call esi */
  call_ind((uint32_t)(ESI), 0x10b811d5u);
  /* 10b811d5 push 0x10b8610c */
  push32((uint32_t)(0x10b8610cu));
  /* 10b811da push 0x10b86890 */
  push32((uint32_t)(0x10b86890u));
  /* 10b811df call esi */
  call_ind((uint32_t)(ESI), 0x10b811e1u);
  /* 10b811e1 push 0x10b86104 */
  push32((uint32_t)(0x10b86104u));
  /* 10b811e6 push 0x10b86858 */
  push32((uint32_t)(0x10b86858u));
  /* 10b811eb call esi */
  call_ind((uint32_t)(ESI), 0x10b811edu);
  /* 10b811ed push 0x10b860fc */
  push32((uint32_t)(0x10b860fcu));
  /* 10b811f2 push 0x10b86920 */
  push32((uint32_t)(0x10b86920u));
  /* 10b811f7 call esi */
  call_ind((uint32_t)(ESI), 0x10b811f9u);
  /* 10b811f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b811fc push 0x10b860f4 */
  push32((uint32_t)(0x10b860f4u));
  /* 10b81201 push 0x10b86908 */
  push32((uint32_t)(0x10b86908u));
  /* 10b81206 call esi */
  call_ind((uint32_t)(ESI), 0x10b81208u);
  /* 10b81208 push 0x10b860ec */
  push32((uint32_t)(0x10b860ecu));
  /* 10b8120d push 0x10b86910 */
  push32((uint32_t)(0x10b86910u));
  /* 10b81212 call esi */
  call_ind((uint32_t)(ESI), 0x10b81214u);
  /* 10b81214 push 0x10b860e4 */
  push32((uint32_t)(0x10b860e4u));
  /* 10b81219 push 0x10b86918 */
  push32((uint32_t)(0x10b86918u));
  /* 10b8121e call esi */
  call_ind((uint32_t)(ESI), 0x10b81220u);
  /* 10b81220 push 0x10b860d4 */
  push32((uint32_t)(0x10b860d4u));
  /* 10b81225 push 0x10b867a0 */
  push32((uint32_t)(0x10b867a0u));
  /* 10b8122a call esi */
  call_ind((uint32_t)(ESI), 0x10b8122cu);
  /* 10b8122c push 0x10b860c4 */
  push32((uint32_t)(0x10b860c4u));
  /* 10b81231 push 0x10b86790 */
  push32((uint32_t)(0x10b86790u));
  /* 10b81236 call esi */
  call_ind((uint32_t)(ESI), 0x10b81238u);
  /* 10b81238 push 0x10b860b4 */
  push32((uint32_t)(0x10b860b4u));
  /* 10b8123d push 0x10b86798 */
  push32((uint32_t)(0x10b86798u));
  /* 10b81242 call esi */
  call_ind((uint32_t)(ESI), 0x10b81244u);
  /* 10b81244 push 0x10b860a4 */
  push32((uint32_t)(0x10b860a4u));
  /* 10b81249 push 0x10b867a8 */
  push32((uint32_t)(0x10b867a8u));
  /* 10b8124e call esi */
  call_ind((uint32_t)(ESI), 0x10b81250u);
  /* 10b81250 push 0x10b860a0 */
  push32((uint32_t)(0x10b860a0u));
  /* 10b81255 push 0x10b86850 */
  push32((uint32_t)(0x10b86850u));
  /* 10b8125a call esi */
  call_ind((uint32_t)(ESI), 0x10b8125cu);
  /* 10b8125c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8125f push 0x10b8609c */
  push32((uint32_t)(0x10b8609cu));
  /* 10b81264 push 0x10b86938 */
  push32((uint32_t)(0x10b86938u));
  /* 10b81269 call esi */
  call_ind((uint32_t)(ESI), 0x10b8126bu);
  /* 10b8126b push 0x10b86090 */
  push32((uint32_t)(0x10b86090u));
  /* 10b81270 push 0x10b86878 */
  push32((uint32_t)(0x10b86878u));
  /* 10b81275 call esi */
  call_ind((uint32_t)(ESI), 0x10b81277u);
  /* 10b81277 push 0x10b86088 */
  push32((uint32_t)(0x10b86088u));
  /* 10b8127c push 0x10b86820 */
  push32((uint32_t)(0x10b86820u));
  /* 10b81281 call esi */
  call_ind((uint32_t)(ESI), 0x10b81283u);
  /* 10b81283 push 0x10b86080 */
  push32((uint32_t)(0x10b86080u));
  /* 10b81288 push 0x10b86888 */
  push32((uint32_t)(0x10b86888u));
  /* 10b8128d call esi */
  call_ind((uint32_t)(ESI), 0x10b8128fu);
  /* 10b8128f push 0x10b86078 */
  push32((uint32_t)(0x10b86078u));
  /* 10b81294 push 0x10b86948 */
  push32((uint32_t)(0x10b86948u));
  /* 10b81299 call esi */
  call_ind((uint32_t)(ESI), 0x10b8129bu);
  /* 10b8129b push 0x10b86074 */
  push32((uint32_t)(0x10b86074u));
  /* 10b812a0 push 0x10b86840 */
  push32((uint32_t)(0x10b86840u));
  /* 10b812a5 call esi */
  call_ind((uint32_t)(ESI), 0x10b812a7u);
  /* 10b812a7 push 0x10b86060 */
  push32((uint32_t)(0x10b86060u));
  /* 10b812ac push 0x10b86868 */
  push32((uint32_t)(0x10b86868u));
  /* 10b812b1 call dword ptr [0x10b85134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85134))), 0x10b812b7u);
  /* 10b812b7 push 0x10b86054 */
  push32((uint32_t)(0x10b86054u));
  /* 10b812bc push 0x10b86898 */
  push32((uint32_t)(0x10b86898u));
  /* 10b812c1 call dword ptr [0x10b85138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85138))), 0x10b812c7u);
  /* 10b812c7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b812ca push 8 */
  push32((uint32_t)(0x8u));
  /* 10b812cc push 0x10b86818 */
  push32((uint32_t)(0x10b86818u));
  /* 10b812d1 call dword ptr [0x10b8513c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8513c))), 0x10b812d7u);
  /* 10b812d7 mov esi, dword ptr [0x10b85140] */
  ESI = (r32((uint32_t)(0x10b85140)));
  /* 10b812dd push 0x10b8604c */
  push32((uint32_t)(0x10b8604cu));
  /* 10b812e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b812e4 call esi */
  call_ind((uint32_t)(ESI), 0x10b812e6u);
  /* 10b812e6 push 0x10b86044 */
  push32((uint32_t)(0x10b86044u));
  /* 10b812eb push 4 */
  push32((uint32_t)(0x4u));
  /* 10b812ed call esi */
  call_ind((uint32_t)(ESI), 0x10b812efu);
  /* 10b812ef push 0x10b8603c */
  push32((uint32_t)(0x10b8603cu));
  /* 10b812f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b812f6 call esi */
  call_ind((uint32_t)(ESI), 0x10b812f8u);
  /* 10b812f8 push 0x10b86030 */
  push32((uint32_t)(0x10b86030u));
  /* 10b812fd push 6 */
  push32((uint32_t)(0x6u));
  /* 10b812ff call esi */
  call_ind((uint32_t)(ESI), 0x10b81301u);
  /* 10b81301 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81304 pop esi */
  ESI = (pop32());
  /* 10b81305 ret  */
  ESPCHK(0x10b81000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001310 @ 0x10b81310 (20 bytes, 6 insns) */
void f_10b81310(void) {
  FTRACE(0x10b81310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b81310 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b81314 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b81315 jne 0x10b8131c */
  if (!C.zf) goto L_10b8131c;
  /* 10b81317 call 0x10b81000 */
  push32(0x10b8131cu); f_10b81000();
L_10b8131c:;
  /* 10b8131c mov eax, 1 */
  EAX = (0x1u);
  /* 10b81321 ret 0xc */
  ESPCHK(0x10b81310u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x10b81330 (3847 bytes, 1234 insns) */
void f_10b81330(void) {
  FTRACE(0x10b81330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b81330 push ebp */
  push32((uint32_t)(EBP));
  /* 10b81331 push esi */
  push32((uint32_t)(ESI));
  /* 10b81332 mov esi, dword ptr [0x10b850b0] */
  ESI = (r32((uint32_t)(0x10b850b0)));
  /* 10b81338 push edi */
  push32((uint32_t)(EDI));
  /* 10b81339 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10b8133b call esi */
  call_ind((uint32_t)(ESI), 0x10b8133du);
  /* 10b8133d mov ebp, dword ptr [0x10b850b4] */
  EBP = (r32((uint32_t)(0x10b850b4)));
  /* 10b81343 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81346 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81348 je 0x10b81374 */
  if (C.zf) goto L_10b81374;
  /* 10b8134a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8134c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10b8134e call ebp */
  call_ind((uint32_t)(EBP), 0x10b81350u);
  /* 10b81350 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10b81355 push 0x10b86890 */
  push32((uint32_t)(0x10b86890u));
  /* 10b8135a push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8135c push 0x10b86868 */
  push32((uint32_t)(0x10b86868u));
  /* 10b81361 push 0x10b86898 */
  push32((uint32_t)(0x10b86898u));
  /* 10b81366 push 0x10b86818 */
  push32((uint32_t)(0x10b86818u));
  /* 10b8136b call dword ptr [0x10b850b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b8))), 0x10b81371u);
  /* 10b81371 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81374:;
  /* 10b81374 push ebx */
  push32((uint32_t)(EBX));
  /* 10b81375 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81377 call esi */
  call_ind((uint32_t)(ESI), 0x10b81379u);
  /* 10b81379 mov ebx, dword ptr [0x10b850bc] */
  EBX = (r32((uint32_t)(0x10b850bc)));
  /* 10b8137f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81382 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81384 je 0x10b817a8 */
  if (C.zf) goto L_10b817a8;
  /* 10b8138a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8138c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8138e call ebp */
  call_ind((uint32_t)(EBP), 0x10b81390u);
  /* 10b81390 mov esi, dword ptr [0x10b850c0] */
  ESI = (r32((uint32_t)(0x10b850c0)));
  /* 10b81396 push 0x10b868c8 */
  push32((uint32_t)(0x10b868c8u));
  /* 10b8139b call esi */
  call_ind((uint32_t)(ESI), 0x10b8139du);
  /* 10b8139d push 0x10b868c0 */
  push32((uint32_t)(0x10b868c0u));
  /* 10b813a2 call esi */
  call_ind((uint32_t)(ESI), 0x10b813a4u);
  /* 10b813a4 push 0x10b868b8 */
  push32((uint32_t)(0x10b868b8u));
  /* 10b813a9 call esi */
  call_ind((uint32_t)(ESI), 0x10b813abu);
  /* 10b813ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10b813ad call dword ptr [0x10b850c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850c4))), 0x10b813b3u);
  /* 10b813b3 mov esi, dword ptr [0x10b850c8] */
  ESI = (r32((uint32_t)(0x10b850c8)));
  /* 10b813b9 mov edi, dword ptr [0x10b850cc] */
  EDI = (r32((uint32_t)(0x10b850cc)));
  /* 10b813bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b813c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b813c4 jne 0x10b814ab */
  if (!C.zf) goto L_10b814ab;
  /* 10b813ca push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10b813cf push 3 */
  push32((uint32_t)(0x3u));
  /* 10b813d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b813d3 call esi */
  call_ind((uint32_t)(ESI), 0x10b813d5u);
  /* 10b813d5 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10b813da push 1 */
  push32((uint32_t)(0x1u));
  /* 10b813dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b813de call esi */
  call_ind((uint32_t)(ESI), 0x10b813e0u);
  /* 10b813e0 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10b813e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b813e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b813e9 call esi */
  call_ind((uint32_t)(ESI), 0x10b813ebu);
  /* 10b813eb push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10b813f0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b813f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b813f4 call esi */
  call_ind((uint32_t)(ESI), 0x10b813f6u);
  /* 10b813f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b813f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b813fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b813fc call esi */
  call_ind((uint32_t)(ESI), 0x10b813feu);
  /* 10b813fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81400 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b81402 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81404 call esi */
  call_ind((uint32_t)(ESI), 0x10b81406u);
  /* 10b81406 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81409 push 0x10b86450 */
  push32((uint32_t)(0x10b86450u));
  /* 10b8140e push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81413 call edi */
  call_ind((uint32_t)(EDI), 0x10b81415u);
  /* 10b81415 push 0x10b86438 */
  push32((uint32_t)(0x10b86438u));
  /* 10b8141a push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8141f call edi */
  call_ind((uint32_t)(EDI), 0x10b81421u);
  /* 10b81421 push 0x10b86420 */
  push32((uint32_t)(0x10b86420u));
  /* 10b81426 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8142b call edi */
  call_ind((uint32_t)(EDI), 0x10b8142du);
  /* 10b8142d push 0x10b86408 */
  push32((uint32_t)(0x10b86408u));
  /* 10b81432 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81437 call edi */
  call_ind((uint32_t)(EDI), 0x10b81439u);
  /* 10b81439 push 0x10b863f0 */
  push32((uint32_t)(0x10b863f0u));
  /* 10b8143e push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81443 call edi */
  call_ind((uint32_t)(EDI), 0x10b81445u);
  /* 10b81445 push 0x10b863d8 */
  push32((uint32_t)(0x10b863d8u));
  /* 10b8144a push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8144f call edi */
  call_ind((uint32_t)(EDI), 0x10b81451u);
  /* 10b81451 push 0x10b863c0 */
  push32((uint32_t)(0x10b863c0u));
  /* 10b81456 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8145b call edi */
  call_ind((uint32_t)(EDI), 0x10b8145du);
  /* 10b8145d push 0x10b863a8 */
  push32((uint32_t)(0x10b863a8u));
  /* 10b81462 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81467 call edi */
  call_ind((uint32_t)(EDI), 0x10b81469u);
  /* 10b81469 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8146c push 0x10b86390 */
  push32((uint32_t)(0x10b86390u));
  /* 10b81471 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81476 call edi */
  call_ind((uint32_t)(EDI), 0x10b81478u);
  /* 10b81478 push 0x10b8637c */
  push32((uint32_t)(0x10b8637cu));
  /* 10b8147d push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81482 call edi */
  call_ind((uint32_t)(EDI), 0x10b81484u);
  /* 10b81484 push 0x10b86368 */
  push32((uint32_t)(0x10b86368u));
  /* 10b81489 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8148e call edi */
  call_ind((uint32_t)(EDI), 0x10b81490u);
  /* 10b81490 push 0x10b86354 */
  push32((uint32_t)(0x10b86354u));
  /* 10b81495 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8149a call edi */
  call_ind((uint32_t)(EDI), 0x10b8149cu);
  /* 10b8149c push 0x10b86340 */
  push32((uint32_t)(0x10b86340u));
  /* 10b814a1 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b814a6 call edi */
  call_ind((uint32_t)(EDI), 0x10b814a8u);
  /* 10b814a8 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b814ab:;
  /* 10b814ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814ad call dword ptr [0x10b850c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850c4))), 0x10b814b3u);
  /* 10b814b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b814b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b814b9 jne 0x10b81561 */
  if (!C.zf) goto L_10b81561;
  /* 10b814bf push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10b814c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b814c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814c8 call esi */
  call_ind((uint32_t)(ESI), 0x10b814cau);
  /* 10b814ca push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10b814cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10b814d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814d3 call esi */
  call_ind((uint32_t)(ESI), 0x10b814d5u);
  /* 10b814d5 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10b814da push 4 */
  push32((uint32_t)(0x4u));
  /* 10b814dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814de call esi */
  call_ind((uint32_t)(ESI), 0x10b814e0u);
  /* 10b814e0 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10b814e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b814e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814e9 call esi */
  call_ind((uint32_t)(ESI), 0x10b814ebu);
  /* 10b814eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814f1 call esi */
  call_ind((uint32_t)(ESI), 0x10b814f3u);
  /* 10b814f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b814f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b814f9 call esi */
  call_ind((uint32_t)(ESI), 0x10b814fbu);
  /* 10b814fb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b814fe push 0x10b8637c */
  push32((uint32_t)(0x10b8637cu));
  /* 10b81503 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81508 call edi */
  call_ind((uint32_t)(EDI), 0x10b8150au);
  /* 10b8150a push 0x10b86368 */
  push32((uint32_t)(0x10b86368u));
  /* 10b8150f push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81514 call edi */
  call_ind((uint32_t)(EDI), 0x10b81516u);
  /* 10b81516 push 0x10b86450 */
  push32((uint32_t)(0x10b86450u));
  /* 10b8151b push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81520 call edi */
  call_ind((uint32_t)(EDI), 0x10b81522u);
  /* 10b81522 push 0x10b86438 */
  push32((uint32_t)(0x10b86438u));
  /* 10b81527 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8152c call edi */
  call_ind((uint32_t)(EDI), 0x10b8152eu);
  /* 10b8152e push 0x10b86420 */
  push32((uint32_t)(0x10b86420u));
  /* 10b81533 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81538 call edi */
  call_ind((uint32_t)(EDI), 0x10b8153au);
  /* 10b8153a push 0x10b863d8 */
  push32((uint32_t)(0x10b863d8u));
  /* 10b8153f push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81544 call edi */
  call_ind((uint32_t)(EDI), 0x10b81546u);
  /* 10b81546 push 0x10b863c0 */
  push32((uint32_t)(0x10b863c0u));
  /* 10b8154b push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b81550 call edi */
  call_ind((uint32_t)(EDI), 0x10b81552u);
  /* 10b81552 push 0x10b863a8 */
  push32((uint32_t)(0x10b863a8u));
  /* 10b81557 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b8155c call edi */
  call_ind((uint32_t)(EDI), 0x10b8155eu);
  /* 10b8155e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81561:;
  /* 10b81561 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81563 call dword ptr [0x10b850c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850c4))), 0x10b81569u);
  /* 10b81569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8156c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8156f jne 0x10b815e3 */
  if (!C.zf) goto L_10b815e3;
  /* 10b81571 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10b81576 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b81578 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8157a call esi */
  call_ind((uint32_t)(ESI), 0x10b8157cu);
  /* 10b8157c push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10b81581 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81583 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81585 call esi */
  call_ind((uint32_t)(ESI), 0x10b81587u);
  /* 10b81587 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10b8158c push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8158e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81590 call esi */
  call_ind((uint32_t)(ESI), 0x10b81592u);
  /* 10b81592 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10b81597 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b81599 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8159b call esi */
  call_ind((uint32_t)(ESI), 0x10b8159du);
  /* 10b8159d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8159f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b815a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b815a3 call esi */
  call_ind((uint32_t)(ESI), 0x10b815a5u);
  /* 10b815a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b815a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b815a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b815ab call esi */
  call_ind((uint32_t)(ESI), 0x10b815adu);
  /* 10b815ad add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b815b0 push 0x10b86450 */
  push32((uint32_t)(0x10b86450u));
  /* 10b815b5 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b815ba call edi */
  call_ind((uint32_t)(EDI), 0x10b815bcu);
  /* 10b815bc push 0x10b86438 */
  push32((uint32_t)(0x10b86438u));
  /* 10b815c1 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b815c6 call edi */
  call_ind((uint32_t)(EDI), 0x10b815c8u);
  /* 10b815c8 push 0x10b8637c */
  push32((uint32_t)(0x10b8637cu));
  /* 10b815cd push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b815d2 call edi */
  call_ind((uint32_t)(EDI), 0x10b815d4u);
  /* 10b815d4 push 0x10b86368 */
  push32((uint32_t)(0x10b86368u));
  /* 10b815d9 push 0x10b86294 */
  push32((uint32_t)(0x10b86294u));
  /* 10b815de call edi */
  call_ind((uint32_t)(EDI), 0x10b815e0u);
  /* 10b815e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b815e3:;
  /* 10b815e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b815e5 call dword ptr [0x10b850c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850c4))), 0x10b815ebu);
  /* 10b815eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b815ee cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b815f1 jne 0x10b81631 */
  if (!C.zf) goto L_10b81631;
  /* 10b815f3 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 10b815f8 push eax */
  push32((uint32_t)(EAX));
  /* 10b815f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b815fb call esi */
  call_ind((uint32_t)(ESI), 0x10b815fdu);
  /* 10b815fd push 0x36b0 */
  push32((uint32_t)(0x36b0u));
  /* 10b81602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81604 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81606 call esi */
  call_ind((uint32_t)(ESI), 0x10b81608u);
  /* 10b81608 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10b8160d push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8160f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81611 call esi */
  call_ind((uint32_t)(ESI), 0x10b81613u);
  /* 10b81613 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10b81618 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b8161a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8161c call esi */
  call_ind((uint32_t)(ESI), 0x10b8161eu);
  /* 10b8161e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81620 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81622 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81624 call esi */
  call_ind((uint32_t)(ESI), 0x10b81626u);
  /* 10b81626 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81628 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b8162a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8162c call esi */
  call_ind((uint32_t)(ESI), 0x10b8162eu);
  /* 10b8162e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81631:;
  /* 10b81631 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81636 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b81638 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8163a call esi */
  call_ind((uint32_t)(ESI), 0x10b8163cu);
  /* 10b8163c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81641 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81643 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81645 call esi */
  call_ind((uint32_t)(ESI), 0x10b81647u);
  /* 10b81647 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b8164c push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8164e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81650 call esi */
  call_ind((uint32_t)(ESI), 0x10b81652u);
  /* 10b81652 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81657 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b81659 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8165b call esi */
  call_ind((uint32_t)(ESI), 0x10b8165du);
  /* 10b8165d push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81662 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81664 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81666 call esi */
  call_ind((uint32_t)(ESI), 0x10b81668u);
  /* 10b81668 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b8166d push 5 */
  push32((uint32_t)(0x5u));
  /* 10b8166f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81671 call esi */
  call_ind((uint32_t)(ESI), 0x10b81673u);
  /* 10b81673 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81676 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b8167b push 3 */
  push32((uint32_t)(0x3u));
  /* 10b8167d push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8167f call esi */
  call_ind((uint32_t)(ESI), 0x10b81681u);
  /* 10b81681 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81686 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81688 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8168a call esi */
  call_ind((uint32_t)(ESI), 0x10b8168cu);
  /* 10b8168c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81691 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81693 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81695 call esi */
  call_ind((uint32_t)(ESI), 0x10b81697u);
  /* 10b81697 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b8169c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b8169e push 4 */
  push32((uint32_t)(0x4u));
  /* 10b816a0 call esi */
  call_ind((uint32_t)(ESI), 0x10b816a2u);
  /* 10b816a2 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b816a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b816a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b816ab call esi */
  call_ind((uint32_t)(ESI), 0x10b816adu);
  /* 10b816ad push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b816b2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b816b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b816b6 call esi */
  call_ind((uint32_t)(ESI), 0x10b816b8u);
  /* 10b816b8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b816bb push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b816c0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b816c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b816c4 call esi */
  call_ind((uint32_t)(ESI), 0x10b816c6u);
  /* 10b816c6 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b816cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b816cd push 5 */
  push32((uint32_t)(0x5u));
  /* 10b816cf call esi */
  call_ind((uint32_t)(ESI), 0x10b816d1u);
  /* 10b816d1 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b816d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b816d8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b816da call esi */
  call_ind((uint32_t)(ESI), 0x10b816dcu);
  /* 10b816dc push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10b816e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b816e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b816e5 call esi */
  call_ind((uint32_t)(ESI), 0x10b816e7u);
  /* 10b816e7 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b816ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10b816ee push 5 */
  push32((uint32_t)(0x5u));
  /* 10b816f0 call esi */
  call_ind((uint32_t)(ESI), 0x10b816f2u);
  /* 10b816f2 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b816f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b816f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b816fb call esi */
  call_ind((uint32_t)(ESI), 0x10b816fdu);
  /* 10b816fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81700 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81705 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b81707 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81709 call esi */
  call_ind((uint32_t)(ESI), 0x10b8170bu);
  /* 10b8170b push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81710 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81712 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81714 call esi */
  call_ind((uint32_t)(ESI), 0x10b81716u);
  /* 10b81716 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b8171b push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8171d push 6 */
  push32((uint32_t)(0x6u));
  /* 10b8171f call esi */
  call_ind((uint32_t)(ESI), 0x10b81721u);
  /* 10b81721 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81726 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b81728 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b8172a call esi */
  call_ind((uint32_t)(ESI), 0x10b8172cu);
  /* 10b8172c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b81731 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81733 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81735 call esi */
  call_ind((uint32_t)(ESI), 0x10b81737u);
  /* 10b81737 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b8173c push 5 */
  push32((uint32_t)(0x5u));
  /* 10b8173e push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81740 call esi */
  call_ind((uint32_t)(ESI), 0x10b81742u);
  /* 10b81742 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81745 push 0x10b86338 */
  push32((uint32_t)(0x10b86338u));
  /* 10b8174a call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b81750u);
  /* 10b81750 mov esi, dword ptr [0x10b850d4] */
  ESI = (r32((uint32_t)(0x10b850d4)));
  /* 10b81756 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10b81758 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8175a call esi */
  call_ind((uint32_t)(ESI), 0x10b8175cu);
  /* 10b8175c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b8175e push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81760 call esi */
  call_ind((uint32_t)(ESI), 0x10b81762u);
  /* 10b81762 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10b81764 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81766 call esi */
  call_ind((uint32_t)(ESI), 0x10b81768u);
  /* 10b81768 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10b8176a push 6 */
  push32((uint32_t)(0x6u));
  /* 10b8176c call esi */
  call_ind((uint32_t)(ESI), 0x10b8176eu);
  /* 10b8176e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81770 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81772 push 0x10b86890 */
  push32((uint32_t)(0x10b86890u));
  /* 10b81777 call dword ptr [0x10b850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d8))), 0x10b8177du);
  /* 10b8177d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8177f push 0x10b867b0 */
  push32((uint32_t)(0x10b867b0u));
  /* 10b81784 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81786u);
  /* 10b81786 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81788 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8178a call dword ptr [0x10b850dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850dc))), 0x10b81790u);
  /* 10b81790 mov esi, dword ptr [0x10b850e0] */
  ESI = (r32((uint32_t)(0x10b850e0)));
  /* 10b81796 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81799 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10b8179b call esi */
  call_ind((uint32_t)(ESI), 0x10b8179du);
  /* 10b8179d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10b8179f call esi */
  call_ind((uint32_t)(ESI), 0x10b817a1u);
  /* 10b817a1 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10b817a3 call esi */
  call_ind((uint32_t)(ESI), 0x10b817a5u);
  /* 10b817a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b817a8:;
  /* 10b817a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b817aa call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b817b0u);
  /* 10b817b0 mov esi, dword ptr [0x10b850e4] */
  ESI = (r32((uint32_t)(0x10b850e4)));
  /* 10b817b6 mov edi, dword ptr [0x10b850e8] */
  EDI = (r32((uint32_t)(0x10b850e8)));
  /* 10b817bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b817bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b817c1 je 0x10b8180a */
  if (C.zf) goto L_10b8180a;
  /* 10b817c3 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b817c8 push 0x10b86920 */
  push32((uint32_t)(0x10b86920u));
  /* 10b817cd call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b817d3u);
  /* 10b817d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b817d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b817d8 jle 0x10b8180a */
  if ((C.zf||C.sf!=C.of)) goto L_10b8180a;
  /* 10b817da push 0 */
  push32((uint32_t)(0x0u));
  /* 10b817dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10b817de call ebp */
  call_ind((uint32_t)(EBP), 0x10b817e0u);
  /* 10b817e0 push 0x10b86330 */
  push32((uint32_t)(0x10b86330u));
  /* 10b817e5 call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b817ebu);
  /* 10b817eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b817ed push 0x10b86848 */
  push32((uint32_t)(0x10b86848u));
  /* 10b817f2 call ebx */
  call_ind((uint32_t)(EBX), 0x10b817f4u);
  /* 10b817f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b817f6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b817f8 call esi */
  call_ind((uint32_t)(ESI), 0x10b817fau);
  /* 10b817fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b817fc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10b817fe push 0x10b86920 */
  push32((uint32_t)(0x10b86920u));
  /* 10b81803 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81805 call edi */
  call_ind((uint32_t)(EDI), 0x10b81807u);
  /* 10b81807 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b8180a:;
  /* 10b8180a push 3 */
  push32((uint32_t)(0x3u));
  /* 10b8180c call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81812u);
  /* 10b81812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81815 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81817 je 0x10b818ae */
  if (C.zf) goto L_10b818ae;
  /* 10b8181d push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81822 push 0x10b86908 */
  push32((uint32_t)(0x10b86908u));
  /* 10b81827 call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b8182du);
  /* 10b8182d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81832 jle 0x10b818ae */
  if ((C.zf||C.sf!=C.of)) goto L_10b818ae;
  /* 10b81834 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81836 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b81838 call ebp */
  call_ind((uint32_t)(EBP), 0x10b8183au);
  /* 10b8183a push 0x10b86324 */
  push32((uint32_t)(0x10b86324u));
  /* 10b8183f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81841 push 0x10b8631c */
  push32((uint32_t)(0x10b8631cu));
  /* 10b81846 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b81848 call dword ptr [0x10b850f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f0))), 0x10b8184eu);
  /* 10b8184e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81851 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b81854 je 0x10b81877 */
  if (C.zf) goto L_10b81877;
  /* 10b81856 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b81857 jne 0x10b818ae */
  if (!C.zf) goto L_10b818ae;
  /* 10b81859 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8185b push 0x10b867f8 */
  push32((uint32_t)(0x10b867f8u));
  /* 10b81860 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81862u);
  /* 10b81862 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81864 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 10b81869 push 0x10b86908 */
  push32((uint32_t)(0x10b86908u));
  /* 10b8186e push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81870 call edi */
  call_ind((uint32_t)(EDI), 0x10b81872u);
  /* 10b81872 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81875 jmp 0x10b818ae */
  goto L_10b818ae;
L_10b81877:;
  /* 10b81877 push 0xfffff448 */
  push32((uint32_t)(0xfffff448u));
  /* 10b8187c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8187e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81880 call dword ptr [0x10b850f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f4))), 0x10b81886u);
  /* 10b81886 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81888 push 0x10b86928 */
  push32((uint32_t)(0x10b86928u));
  /* 10b8188d call ebx */
  call_ind((uint32_t)(EBX), 0x10b8188fu);
  /* 10b8188f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81891 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81893 call esi */
  call_ind((uint32_t)(ESI), 0x10b81895u);
  /* 10b81895 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81897 push 0x10b86928 */
  push32((uint32_t)(0x10b86928u));
  /* 10b8189c call ebx */
  call_ind((uint32_t)(EBX), 0x10b8189eu);
  /* 10b8189e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b818a0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10b818a2 push 0x10b86908 */
  push32((uint32_t)(0x10b86908u));
  /* 10b818a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b818a9 call edi */
  call_ind((uint32_t)(EDI), 0x10b818abu);
  /* 10b818ab add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b818ae:;
  /* 10b818ae push 4 */
  push32((uint32_t)(0x4u));
  /* 10b818b0 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b818b6u);
  /* 10b818b6 mov edi, dword ptr [0x10b850f8] */
  EDI = (r32((uint32_t)(0x10b850f8)));
  /* 10b818bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b818bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b818c1 je 0x10b818fe */
  if (C.zf) goto L_10b818fe;
  /* 10b818c3 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b818c8 push 0x10b86910 */
  push32((uint32_t)(0x10b86910u));
  /* 10b818cd call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b818d3u);
  /* 10b818d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b818d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b818d8 jle 0x10b818fe */
  if ((C.zf||C.sf!=C.of)) goto L_10b818fe;
  /* 10b818da push 5 */
  push32((uint32_t)(0x5u));
  /* 10b818dc push 0x10b86830 */
  push32((uint32_t)(0x10b86830u));
  /* 10b818e1 call edi */
  call_ind((uint32_t)(EDI), 0x10b818e3u);
  /* 10b818e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b818e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b818e8 jle 0x10b818fe */
  if ((C.zf||C.sf!=C.of)) goto L_10b818fe;
  /* 10b818ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10b818ec push 4 */
  push32((uint32_t)(0x4u));
  /* 10b818ee call ebp */
  call_ind((uint32_t)(EBP), 0x10b818f0u);
  /* 10b818f0 push 0x10b86314 */
  push32((uint32_t)(0x10b86314u));
  /* 10b818f5 call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b818fbu);
  /* 10b818fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b818fe:;
  /* 10b818fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10b81900 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81906u);
  /* 10b81906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81909 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b8190b je 0x10b81945 */
  if (C.zf) goto L_10b81945;
  /* 10b8190d push 5 */
  push32((uint32_t)(0x5u));
  /* 10b8190f push 0x10b86830 */
  push32((uint32_t)(0x10b86830u));
  /* 10b81914 call edi */
  call_ind((uint32_t)(EDI), 0x10b81916u);
  /* 10b81916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8191b jne 0x10b81945 */
  if (!C.zf) goto L_10b81945;
  /* 10b8191d push eax */
  push32((uint32_t)(EAX));
  /* 10b8191e push 5 */
  push32((uint32_t)(0x5u));
  /* 10b81920 call ebp */
  call_ind((uint32_t)(EBP), 0x10b81922u);
  /* 10b81922 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81924 push 0x10b867c8 */
  push32((uint32_t)(0x10b867c8u));
  /* 10b81929 call ebx */
  call_ind((uint32_t)(EBX), 0x10b8192bu);
  /* 10b8192b push 5 */
  push32((uint32_t)(0x5u));
  /* 10b8192d call dword ptr [0x10b850fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850fc))), 0x10b81933u);
  /* 10b81933 mov edi, dword ptr [0x10b850d0] */
  EDI = (r32((uint32_t)(0x10b850d0)));
  /* 10b81939 push 0x10b8630c */
  push32((uint32_t)(0x10b8630cu));
  /* 10b8193e call edi */
  call_ind((uint32_t)(EDI), 0x10b81940u);
  /* 10b81940 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81943 jmp 0x10b8194b */
  goto L_10b8194b;
L_10b81945:;
  /* 10b81945 mov edi, dword ptr [0x10b850d0] */
  EDI = (r32((uint32_t)(0x10b850d0)));
L_10b8194b:;
  /* 10b8194b push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10b8194d call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81953u);
  /* 10b81953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81956 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81958 je 0x10b819ce */
  if (C.zf) goto L_10b819ce;
  /* 10b8195a push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8195c call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81962u);
  /* 10b81962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81965 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81967 je 0x10b819ce */
  if (C.zf) goto L_10b819ce;
  /* 10b81969 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b8196b call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81971u);
  /* 10b81971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81974 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81976 jne 0x10b819ce */
  if (!C.zf) goto L_10b819ce;
  /* 10b81978 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b8197d push 0x10b86910 */
  push32((uint32_t)(0x10b86910u));
  /* 10b81982 call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81988u);
  /* 10b81988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8198b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8198d jle 0x10b819ce */
  if ((C.zf||C.sf!=C.of)) goto L_10b819ce;
  /* 10b8198f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81991 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10b81993 call ebp */
  call_ind((uint32_t)(EBP), 0x10b81995u);
  /* 10b81995 push 0x10b86304 */
  push32((uint32_t)(0x10b86304u));
  /* 10b8199a call edi */
  call_ind((uint32_t)(EDI), 0x10b8199cu);
  /* 10b8199c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8199e push 0x10b867c0 */
  push32((uint32_t)(0x10b867c0u));
  /* 10b819a3 call ebx */
  call_ind((uint32_t)(EBX), 0x10b819a5u);
  /* 10b819a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b819a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b819a9 call esi */
  call_ind((uint32_t)(ESI), 0x10b819abu);
  /* 10b819ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10b819ad push 0x10b867c0 */
  push32((uint32_t)(0x10b867c0u));
  /* 10b819b2 call ebx */
  call_ind((uint32_t)(EBX), 0x10b819b4u);
  /* 10b819b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b819b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b819b8 push 0x10b86798 */
  push32((uint32_t)(0x10b86798u));
  /* 10b819bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b819bf call dword ptr [0x10b850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e8))), 0x10b819c5u);
  /* 10b819c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b819c7 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b819c9 call ebp */
  call_ind((uint32_t)(EBP), 0x10b819cbu);
  /* 10b819cb add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b819ce:;
  /* 10b819ce push 6 */
  push32((uint32_t)(0x6u));
  /* 10b819d0 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b819d6u);
  /* 10b819d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b819d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b819db je 0x10b81a3c */
  if (C.zf) goto L_10b81a3c;
  /* 10b819dd push 5 */
  push32((uint32_t)(0x5u));
  /* 10b819df call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b819e5u);
  /* 10b819e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b819e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b819ea jne 0x10b81a3c */
  if (!C.zf) goto L_10b81a3c;
  /* 10b819ec push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b819f1 push 0x10b86910 */
  push32((uint32_t)(0x10b86910u));
  /* 10b819f6 call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b819fcu);
  /* 10b819fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b819ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81a01 jle 0x10b81a3c */
  if ((C.zf||C.sf!=C.of)) goto L_10b81a3c;
  /* 10b81a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a05 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81a07 call ebp */
  call_ind((uint32_t)(EBP), 0x10b81a09u);
  /* 10b81a09 push 0x10b86304 */
  push32((uint32_t)(0x10b86304u));
  /* 10b81a0e call edi */
  call_ind((uint32_t)(EDI), 0x10b81a10u);
  /* 10b81a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a12 push 0x10b867c0 */
  push32((uint32_t)(0x10b867c0u));
  /* 10b81a17 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81a19u);
  /* 10b81a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a1b push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81a1d call esi */
  call_ind((uint32_t)(ESI), 0x10b81a1fu);
  /* 10b81a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a21 push 0x10b867c0 */
  push32((uint32_t)(0x10b867c0u));
  /* 10b81a26 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81a28u);
  /* 10b81a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a2c push 0x10b86798 */
  push32((uint32_t)(0x10b86798u));
  /* 10b81a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a33 call dword ptr [0x10b850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e8))), 0x10b81a39u);
  /* 10b81a39 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81a3c:;
  /* 10b81a3c push 7 */
  push32((uint32_t)(0x7u));
  /* 10b81a3e call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81a44u);
  /* 10b81a44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81a47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81a49 je 0x10b81b36 */
  if (C.zf) goto L_10b81b36;
  /* 10b81a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a51 push 0x10b86850 */
  push32((uint32_t)(0x10b86850u));
  /* 10b81a56 call dword ptr [0x10b85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85100))), 0x10b81a5cu);
  /* 10b81a5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81a5f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b81a62 jg 0x10b81a7f */
  if ((!C.zf&&C.sf==C.of)) goto L_10b81a7f;
  /* 10b81a64 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81a69 push 0x10b86850 */
  push32((uint32_t)(0x10b86850u));
  /* 10b81a6e call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81a74u);
  /* 10b81a74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81a79 jle 0x10b81b36 */
  if ((C.zf||C.sf!=C.of)) goto L_10b81b36;
L_10b81a7f:;
  /* 10b81a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a81 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b81a83 call ebp */
  call_ind((uint32_t)(EBP), 0x10b81a85u);
  /* 10b81a85 push 0x10b86850 */
  push32((uint32_t)(0x10b86850u));
  /* 10b81a8a call dword ptr [0x10b85104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85104))), 0x10b81a90u);
  /* 10b81a90 push 0x10b862f0 */
  push32((uint32_t)(0x10b862f0u));
  /* 10b81a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81a97 push 0x10b862e8 */
  push32((uint32_t)(0x10b862e8u));
  /* 10b81a9c push 9 */
  push32((uint32_t)(0x9u));
  /* 10b81a9e call dword ptr [0x10b850f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f0))), 0x10b81aa4u);
  /* 10b81aa4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81aa7 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b81aaa je 0x10b81afb */
  if (C.zf) goto L_10b81afb;
  /* 10b81aac dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b81aad je 0x10b81ad3 */
  if (C.zf) goto L_10b81ad3;
  /* 10b81aaf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b81ab0 jne 0x10b81b36 */
  if (!C.zf) goto L_10b81b36;
  /* 10b81ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81ab8 push 0x10b867b8 */
  push32((uint32_t)(0x10b867b8u));
  /* 10b81abd call ebx */
  call_ind((uint32_t)(EBX), 0x10b81abfu);
  /* 10b81abf push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81ac1 push 0x10b86838 */
  push32((uint32_t)(0x10b86838u));
  /* 10b81ac6 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81ac8u);
  /* 10b81ac8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81aca push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81acc call esi */
  call_ind((uint32_t)(ESI), 0x10b81aceu);
  /* 10b81ace add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81ad1 jmp 0x10b81b36 */
  goto L_10b81b36;
L_10b81ad3:;
  /* 10b81ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81ad5 push 0x10b86838 */
  push32((uint32_t)(0x10b86838u));
  /* 10b81ada call ebx */
  call_ind((uint32_t)(EBX), 0x10b81adcu);
  /* 10b81adc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81ade push 0x10b867b8 */
  push32((uint32_t)(0x10b867b8u));
  /* 10b81ae3 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81ae5u);
  /* 10b81ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81ae7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b81ae9 push 0x10b867a0 */
  push32((uint32_t)(0x10b867a0u));
  /* 10b81aee push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81af0 call dword ptr [0x10b850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e8))), 0x10b81af6u);
  /* 10b81af6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81af9 jmp 0x10b81b36 */
  goto L_10b81b36;
L_10b81afb:;
  /* 10b81afb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81afd push 0x10b86838 */
  push32((uint32_t)(0x10b86838u));
  /* 10b81b02 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81b04u);
  /* 10b81b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81b06 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81b08 call esi */
  call_ind((uint32_t)(ESI), 0x10b81b0au);
  /* 10b81b0a push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 10b81b0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81b13 call dword ptr [0x10b850f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f4))), 0x10b81b19u);
  /* 10b81b19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81b1b push 0x10b867b8 */
  push32((uint32_t)(0x10b867b8u));
  /* 10b81b20 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81b22u);
  /* 10b81b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81b26 push 0x10b86798 */
  push32((uint32_t)(0x10b86798u));
  /* 10b81b2b push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81b2d call dword ptr [0x10b850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e8))), 0x10b81b33u);
  /* 10b81b33 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81b36:;
  /* 10b81b36 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b81b38 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81b3eu);
  /* 10b81b3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81b41 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81b43 je 0x10b81b84 */
  if (C.zf) goto L_10b81b84;
  /* 10b81b45 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81b4a push 0x10b86918 */
  push32((uint32_t)(0x10b86918u));
  /* 10b81b4f call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81b55u);
  /* 10b81b55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81b58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81b5a jle 0x10b81b84 */
  if ((C.zf||C.sf!=C.of)) goto L_10b81b84;
  /* 10b81b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81b5e push 8 */
  push32((uint32_t)(0x8u));
  /* 10b81b60 call ebp */
  call_ind((uint32_t)(EBP), 0x10b81b62u);
  /* 10b81b62 push 0x10b862e0 */
  push32((uint32_t)(0x10b862e0u));
  /* 10b81b67 call edi */
  call_ind((uint32_t)(EDI), 0x10b81b69u);
  /* 10b81b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81b6b push 0x10b868d0 */
  push32((uint32_t)(0x10b868d0u));
  /* 10b81b70 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81b72u);
  /* 10b81b72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81b74 push 0x10b86808 */
  push32((uint32_t)(0x10b86808u));
  /* 10b81b79 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81b7bu);
  /* 10b81b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81b7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81b7f call esi */
  call_ind((uint32_t)(ESI), 0x10b81b81u);
  /* 10b81b81 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81b84:;
  /* 10b81b84 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b81b86 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81b8cu);
  /* 10b81b8c mov edi, dword ptr [0x10b85108] */
  EDI = (r32((uint32_t)(0x10b85108)));
  /* 10b81b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81b97 je 0x10b81bdf */
  if (C.zf) goto L_10b81bdf;
  /* 10b81b99 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81b9e push 0x10b867a0 */
  push32((uint32_t)(0x10b867a0u));
  /* 10b81ba3 call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81ba9u);
  /* 10b81ba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81bae jne 0x10b81bc7 */
  if (!C.zf) goto L_10b81bc7;
  /* 10b81bb0 mov esi, dword ptr [0x10b85100] */
  ESI = (r32((uint32_t)(0x10b85100)));
  /* 10b81bb6 push eax */
  push32((uint32_t)(EAX));
  /* 10b81bb7 push 0x10b867a0 */
  push32((uint32_t)(0x10b867a0u));
  /* 10b81bbc call esi */
  call_ind((uint32_t)(ESI), 0x10b81bbeu);
  /* 10b81bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81bc3 jle 0x10b81be5 */
  if ((C.zf||C.sf!=C.of)) goto L_10b81be5;
  /* 10b81bc5 jmp 0x10b81bcd */
  goto L_10b81bcd;
L_10b81bc7:;
  /* 10b81bc7 mov esi, dword ptr [0x10b85100] */
  ESI = (r32((uint32_t)(0x10b85100)));
L_10b81bcd:;
  /* 10b81bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81bcf push 0x10b868e8 */
  push32((uint32_t)(0x10b868e8u));
  /* 10b81bd4 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81bd6u);
  /* 10b81bd6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81bd8 call edi */
  call_ind((uint32_t)(EDI), 0x10b81bdau);
  /* 10b81bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81bdd jmp 0x10b81be5 */
  goto L_10b81be5;
L_10b81bdf:;
  /* 10b81bdf mov esi, dword ptr [0x10b85100] */
  ESI = (r32((uint32_t)(0x10b85100)));
L_10b81be5:;
  /* 10b81be5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b81be7 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81bedu);
  /* 10b81bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81bf0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81bf2 je 0x10b81c2b */
  if (C.zf) goto L_10b81c2b;
  /* 10b81bf4 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81bf9 push 0x10b86790 */
  push32((uint32_t)(0x10b86790u));
  /* 10b81bfe call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81c04u);
  /* 10b81c04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81c07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81c09 jg 0x10b81c1b */
  if ((!C.zf&&C.sf==C.of)) goto L_10b81c1b;
  /* 10b81c0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81c0d push 0x10b86790 */
  push32((uint32_t)(0x10b86790u));
  /* 10b81c12 call esi */
  call_ind((uint32_t)(ESI), 0x10b81c14u);
  /* 10b81c14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81c19 jle 0x10b81c2b */
  if ((C.zf||C.sf!=C.of)) goto L_10b81c2b;
L_10b81c1b:;
  /* 10b81c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81c1d push 0x10b868f0 */
  push32((uint32_t)(0x10b868f0u));
  /* 10b81c22 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81c24u);
  /* 10b81c24 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81c26 call edi */
  call_ind((uint32_t)(EDI), 0x10b81c28u);
  /* 10b81c28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81c2b:;
  /* 10b81c2b push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b81c2d call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81c33u);
  /* 10b81c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81c36 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81c38 je 0x10b81c71 */
  if (C.zf) goto L_10b81c71;
  /* 10b81c3a push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81c3f push 0x10b86798 */
  push32((uint32_t)(0x10b86798u));
  /* 10b81c44 call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81c4au);
  /* 10b81c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81c4f jg 0x10b81c61 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b81c61;
  /* 10b81c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81c53 push 0x10b86798 */
  push32((uint32_t)(0x10b86798u));
  /* 10b81c58 call esi */
  call_ind((uint32_t)(ESI), 0x10b81c5au);
  /* 10b81c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81c5f jle 0x10b81c71 */
  if ((C.zf||C.sf!=C.of)) goto L_10b81c71;
L_10b81c61:;
  /* 10b81c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81c63 push 0x10b868d8 */
  push32((uint32_t)(0x10b868d8u));
  /* 10b81c68 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81c6au);
  /* 10b81c6a push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81c6c call edi */
  call_ind((uint32_t)(EDI), 0x10b81c6eu);
  /* 10b81c6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81c71:;
  /* 10b81c71 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b81c73 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81c79u);
  /* 10b81c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81c7c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81c7e je 0x10b81cbd */
  if (C.zf) goto L_10b81cbd;
  /* 10b81c80 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81c85 push 0x10b867a8 */
  push32((uint32_t)(0x10b867a8u));
  /* 10b81c8a call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81c90u);
  /* 10b81c90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81c95 jg 0x10b81ca7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b81ca7;
  /* 10b81c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81c99 push 0x10b867a8 */
  push32((uint32_t)(0x10b867a8u));
  /* 10b81c9e call esi */
  call_ind((uint32_t)(ESI), 0x10b81ca0u);
  /* 10b81ca0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81ca5 jle 0x10b81cbd */
  if ((C.zf||C.sf!=C.of)) goto L_10b81cbd;
L_10b81ca7:;
  /* 10b81ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81ca9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b81cab call ebp */
  call_ind((uint32_t)(EBP), 0x10b81cadu);
  /* 10b81cad push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81caf push 0x10b868e0 */
  push32((uint32_t)(0x10b868e0u));
  /* 10b81cb4 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81cb6u);
  /* 10b81cb6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81cb8 call edi */
  call_ind((uint32_t)(EDI), 0x10b81cbau);
  /* 10b81cba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81cbd:;
  /* 10b81cbd push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b81cbf call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81cc5u);
  /* 10b81cc5 mov esi, dword ptr [0x10b8510c] */
  ESI = (r32((uint32_t)(0x10b8510c)));
  /* 10b81ccb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81cce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81cd0 je 0x10b81d22 */
  if (C.zf) goto L_10b81d22;
  /* 10b81cd2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b81cd4 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81cdau);
  /* 10b81cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81cdd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81cdf jne 0x10b81d22 */
  if (!C.zf) goto L_10b81d22;
  /* 10b81ce1 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81ce6 push 0x10b867a0 */
  push32((uint32_t)(0x10b867a0u));
  /* 10b81ceb call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81cf1u);
  /* 10b81cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81cf6 je 0x10b81d0c */
  if (C.zf) goto L_10b81d0c;
  /* 10b81cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81cfa push 0x10b867a0 */
  push32((uint32_t)(0x10b867a0u));
  /* 10b81cff call dword ptr [0x10b85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85100))), 0x10b81d05u);
  /* 10b81d05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81d0a jne 0x10b81d22 */
  if (!C.zf) goto L_10b81d22;
L_10b81d0c:;
  /* 10b81d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81d0e push 0x10b868e8 */
  push32((uint32_t)(0x10b868e8u));
  /* 10b81d13 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81d15u);
  /* 10b81d15 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81d17 call esi */
  call_ind((uint32_t)(ESI), 0x10b81d19u);
  /* 10b81d19 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81d1b push 9 */
  push32((uint32_t)(0x9u));
  /* 10b81d1d call ebp */
  call_ind((uint32_t)(EBP), 0x10b81d1fu);
  /* 10b81d1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81d22:;
  /* 10b81d22 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10b81d24 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81d2au);
  /* 10b81d2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81d2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81d2f je 0x10b81d81 */
  if (C.zf) goto L_10b81d81;
  /* 10b81d31 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b81d33 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81d39u);
  /* 10b81d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81d3c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81d3e jne 0x10b81d81 */
  if (!C.zf) goto L_10b81d81;
  /* 10b81d40 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81d45 push 0x10b86790 */
  push32((uint32_t)(0x10b86790u));
  /* 10b81d4a call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81d50u);
  /* 10b81d50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81d53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81d55 je 0x10b81d6b */
  if (C.zf) goto L_10b81d6b;
  /* 10b81d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81d59 push 0x10b86790 */
  push32((uint32_t)(0x10b86790u));
  /* 10b81d5e call dword ptr [0x10b85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85100))), 0x10b81d64u);
  /* 10b81d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81d67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81d69 jne 0x10b81d81 */
  if (!C.zf) goto L_10b81d81;
L_10b81d6b:;
  /* 10b81d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81d6d push 0x10b868f0 */
  push32((uint32_t)(0x10b868f0u));
  /* 10b81d72 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81d74u);
  /* 10b81d74 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81d76 call esi */
  call_ind((uint32_t)(ESI), 0x10b81d78u);
  /* 10b81d78 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81d7a push 0xa */
  push32((uint32_t)(0xau));
  /* 10b81d7c call ebp */
  call_ind((uint32_t)(EBP), 0x10b81d7eu);
  /* 10b81d7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81d81:;
  /* 10b81d81 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10b81d83 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81d89u);
  /* 10b81d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81d8c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81d8e je 0x10b81de0 */
  if (C.zf) goto L_10b81de0;
  /* 10b81d90 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b81d92 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81d98u);
  /* 10b81d98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81d9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81d9d jne 0x10b81de0 */
  if (!C.zf) goto L_10b81de0;
  /* 10b81d9f push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81da4 push 0x10b86798 */
  push32((uint32_t)(0x10b86798u));
  /* 10b81da9 call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81dafu);
  /* 10b81daf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81db2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81db4 je 0x10b81dca */
  if (C.zf) goto L_10b81dca;
  /* 10b81db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81db8 push 0x10b86790 */
  push32((uint32_t)(0x10b86790u));
  /* 10b81dbd call dword ptr [0x10b85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85100))), 0x10b81dc3u);
  /* 10b81dc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81dc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81dc8 jne 0x10b81de0 */
  if (!C.zf) goto L_10b81de0;
L_10b81dca:;
  /* 10b81dca push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81dcc push 0x10b868d8 */
  push32((uint32_t)(0x10b868d8u));
  /* 10b81dd1 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81dd3u);
  /* 10b81dd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81dd5 call esi */
  call_ind((uint32_t)(ESI), 0x10b81dd7u);
  /* 10b81dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81dd9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b81ddb call ebp */
  call_ind((uint32_t)(EBP), 0x10b81dddu);
  /* 10b81ddd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81de0:;
  /* 10b81de0 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10b81de2 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81de8u);
  /* 10b81de8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81deb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81ded je 0x10b81e2e */
  if (C.zf) goto L_10b81e2e;
  /* 10b81def push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10b81df1 call dword ptr [0x10b85110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85110))), 0x10b81df7u);
  /* 10b81df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81dfa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81dfc je 0x10b81e2e */
  if (C.zf) goto L_10b81e2e;
  /* 10b81dfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81e00 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10b81e02 call ebp */
  call_ind((uint32_t)(EBP), 0x10b81e04u);
  /* 10b81e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81e06 push 0x10b86940 */
  push32((uint32_t)(0x10b86940u));
  /* 10b81e0b call ebx */
  call_ind((uint32_t)(EBX), 0x10b81e0du);
  /* 10b81e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81e0f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10b81e11 push 0x10b86840 */
  push32((uint32_t)(0x10b86840u));
  /* 10b81e16 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81e18 call dword ptr [0x10b850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e8))), 0x10b81e1eu);
  /* 10b81e1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81e20 push 0x10b868b0 */
  push32((uint32_t)(0x10b868b0u));
  /* 10b81e25 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81e27u);
  /* 10b81e27 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81e29 call edi */
  call_ind((uint32_t)(EDI), 0x10b81e2bu);
  /* 10b81e2b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81e2e:;
  /* 10b81e2e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b81e30 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81e36u);
  /* 10b81e36 mov esi, dword ptr [0x10b85114] */
  ESI = (r32((uint32_t)(0x10b85114)));
  /* 10b81e3c mov edi, dword ptr [0x10b85118] */
  EDI = (r32((uint32_t)(0x10b85118)));
  /* 10b81e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81e45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81e47 je 0x10b81f87 */
  if (C.zf) goto L_10b81f87;
  /* 10b81e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81e4f push 0x10b86880 */
  push32((uint32_t)(0x10b86880u));
  /* 10b81e54 call dword ptr [0x10b85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85100))), 0x10b81e5au);
  /* 10b81e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81e5d cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b81e60 jg 0x10b81e7d */
  if ((!C.zf&&C.sf==C.of)) goto L_10b81e7d;
  /* 10b81e62 push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b81e67 push 0x10b86880 */
  push32((uint32_t)(0x10b86880u));
  /* 10b81e6c call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b81e72u);
  /* 10b81e72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81e77 jle 0x10b81f87 */
  if ((C.zf||C.sf!=C.of)) goto L_10b81f87;
L_10b81e7d:;
  /* 10b81e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81e7f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b81e81 call ebp */
  call_ind((uint32_t)(EBP), 0x10b81e83u);
  /* 10b81e83 push 0x10b862d8 */
  push32((uint32_t)(0x10b862d8u));
  /* 10b81e88 call dword ptr [0x10b8511c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8511c))), 0x10b81e8eu);
  /* 10b81e8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81e91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81e93 je 0x10b81f00 */
  if (C.zf) goto L_10b81f00;
  /* 10b81e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81e97 push 0x10b86900 */
  push32((uint32_t)(0x10b86900u));
  /* 10b81e9c call ebx */
  call_ind((uint32_t)(EBX), 0x10b81e9eu);
  /* 10b81e9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81ea0 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10b81ea2 push 0x10b867e0 */
  push32((uint32_t)(0x10b867e0u));
  /* 10b81ea7 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81ea9 call dword ptr [0x10b850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e8))), 0x10b81eafu);
  /* 10b81eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81eb1 push 0x10b868f8 */
  push32((uint32_t)(0x10b868f8u));
  /* 10b81eb6 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81eb8u);
  /* 10b81eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81eba push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 10b81ebf push 0x10b867e8 */
  push32((uint32_t)(0x10b867e8u));
  /* 10b81ec4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81ec6 call dword ptr [0x10b850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e8))), 0x10b81eccu);
  /* 10b81ecc push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 10b81ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81ed5 call dword ptr [0x10b850f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f4))), 0x10b81edbu);
  /* 10b81edb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81edd push 0x10b868a8 */
  push32((uint32_t)(0x10b868a8u));
  /* 10b81ee2 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81ee4u);
  /* 10b81ee4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81ee7 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81ee9 call dword ptr [0x10b85108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85108))), 0x10b81eefu);
  /* 10b81eef push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10b81ef4 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10b81ef6 call edi */
  call_ind((uint32_t)(EDI), 0x10b81ef8u);
  /* 10b81ef8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81efb jmp 0x10b81f87 */
  goto L_10b81f87;
L_10b81f00:;
  /* 10b81f00 push 0x10b862d0 */
  push32((uint32_t)(0x10b862d0u));
  /* 10b81f05 call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b81f0bu);
  /* 10b81f0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81f0d push 0x10b868a8 */
  push32((uint32_t)(0x10b868a8u));
  /* 10b81f12 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81f14u);
  /* 10b81f14 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81f16 call dword ptr [0x10b85108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85108))), 0x10b81f1cu);
  /* 10b81f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81f1e push 0x10b86900 */
  push32((uint32_t)(0x10b86900u));
  /* 10b81f23 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81f25u);
  /* 10b81f25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81f27 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81f29 call dword ptr [0x10b850e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e4))), 0x10b81f2fu);
  /* 10b81f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81f31 push 0x10b868f8 */
  push32((uint32_t)(0x10b868f8u));
  /* 10b81f36 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81f38u);
  /* 10b81f38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81f3a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10b81f3c push 0x10b86930 */
  push32((uint32_t)(0x10b86930u));
  /* 10b81f41 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81f43 call esi */
  call_ind((uint32_t)(ESI), 0x10b81f45u);
  /* 10b81f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81f47 push 0x10b868f8 */
  push32((uint32_t)(0x10b868f8u));
  /* 10b81f4c call ebx */
  call_ind((uint32_t)(EBX), 0x10b81f4eu);
  /* 10b81f4e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81f51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81f53 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81f55 call dword ptr [0x10b850e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e4))), 0x10b81f5bu);
  /* 10b81f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81f5d push 0x10b868f8 */
  push32((uint32_t)(0x10b868f8u));
  /* 10b81f62 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81f64u);
  /* 10b81f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81f66 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10b81f68 push 0x10b86930 */
  push32((uint32_t)(0x10b86930u));
  /* 10b81f6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81f6f call esi */
  call_ind((uint32_t)(ESI), 0x10b81f71u);
  /* 10b81f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81f73 push 0x10b867f0 */
  push32((uint32_t)(0x10b867f0u));
  /* 10b81f78 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81f7au);
  /* 10b81f7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81f7c push 6 */
  push32((uint32_t)(0x6u));
  /* 10b81f7e call dword ptr [0x10b850e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e4))), 0x10b81f84u);
  /* 10b81f84 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b81f87:;
  /* 10b81f87 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b81f89 call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b81f8fu);
  /* 10b81f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81f92 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b81f94 je 0x10b8203d */
  if (C.zf) goto L_10b8203d;
  /* 10b81f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81f9c push 0x10b86950 */
  push32((uint32_t)(0x10b86950u));
  /* 10b81fa1 call dword ptr [0x10b850f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f8))), 0x10b81fa7u);
  /* 10b81fa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81faa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81fac jne 0x10b8203d */
  if (!C.zf) goto L_10b8203d;
  /* 10b81fb2 push eax */
  push32((uint32_t)(EAX));
  /* 10b81fb3 push 0x10b86890 */
  push32((uint32_t)(0x10b86890u));
  /* 10b81fb8 call dword ptr [0x10b85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85100))), 0x10b81fbeu);
  /* 10b81fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b81fc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b81fc3 jle 0x10b8203d */
  if ((C.zf||C.sf!=C.of)) goto L_10b8203d;
  /* 10b81fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81fc7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b81fc9 call ebp */
  call_ind((uint32_t)(EBP), 0x10b81fcbu);
  /* 10b81fcb push 0x10b862c8 */
  push32((uint32_t)(0x10b862c8u));
  /* 10b81fd0 call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b81fd6u);
  /* 10b81fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81fd8 push 0x10b86818 */
  push32((uint32_t)(0x10b86818u));
  /* 10b81fdd call ebx */
  call_ind((uint32_t)(EBX), 0x10b81fdfu);
  /* 10b81fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81fe1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b81fe3 call dword ptr [0x10b850e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e4))), 0x10b81fe9u);
  /* 10b81fe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81feb push 0x10b867d8 */
  push32((uint32_t)(0x10b867d8u));
  /* 10b81ff0 call ebx */
  call_ind((uint32_t)(EBX), 0x10b81ff2u);
  /* 10b81ff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b81ff4 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10b81ff6 push 0x10b86858 */
  push32((uint32_t)(0x10b86858u));
  /* 10b81ffb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b81ffd call dword ptr [0x10b850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e8))), 0x10b82003u);
  /* 10b82003 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10b82008 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b8200a call edi */
  call_ind((uint32_t)(EDI), 0x10b8200cu);
  /* 10b8200c push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10b8200e call dword ptr [0x10b850e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e0))), 0x10b82014u);
  /* 10b82014 mov esi, dword ptr [0x10b85120] */
  ESI = (r32((uint32_t)(0x10b85120)));
  /* 10b8201a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8201d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10b8201f call esi */
  call_ind((uint32_t)(ESI), 0x10b82021u);
  /* 10b82021 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10b82023 call esi */
  call_ind((uint32_t)(ESI), 0x10b82025u);
  /* 10b82025 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b82027 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b82029 push 0x10b86820 */
  push32((uint32_t)(0x10b86820u));
  /* 10b8202e call dword ptr [0x10b850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d8))), 0x10b82034u);
  /* 10b82034 mov esi, dword ptr [0x10b85114] */
  ESI = (r32((uint32_t)(0x10b85114)));
  /* 10b8203a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b8203d:;
  /* 10b8203d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b8203f call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b82045u);
  /* 10b82045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82048 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b8204a je 0x10b820b3 */
  if (C.zf) goto L_10b820b3;
  /* 10b8204c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b8204e call dword ptr [0x10b850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850b0))), 0x10b82054u);
  /* 10b82054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82057 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b82059 jne 0x10b820b3 */
  if (!C.zf) goto L_10b820b3;
  /* 10b8205b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8205d push 0x10b867b0 */
  push32((uint32_t)(0x10b867b0u));
  /* 10b82062 call dword ptr [0x10b850f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f8))), 0x10b82068u);
  /* 10b82068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8206b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8206d jne 0x10b820b3 */
  if (!C.zf) goto L_10b820b3;
  /* 10b8206f push eax */
  push32((uint32_t)(EAX));
  /* 10b82070 push 0x10b86878 */
  push32((uint32_t)(0x10b86878u));
  /* 10b82075 call dword ptr [0x10b85100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85100))), 0x10b8207bu);
  /* 10b8207b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8207e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82081 jle 0x10b820b3 */
  if ((C.zf||C.sf!=C.of)) goto L_10b820b3;
  /* 10b82083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82085 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b82087 call ebp */
  call_ind((uint32_t)(EBP), 0x10b82089u);
  /* 10b82089 push 0x10b862c0 */
  push32((uint32_t)(0x10b862c0u));
  /* 10b8208e call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b82094u);
  /* 10b82094 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82096 push 0x10b86828 */
  push32((uint32_t)(0x10b86828u));
  /* 10b8209b call ebx */
  call_ind((uint32_t)(EBX), 0x10b8209du);
  /* 10b8209d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8209f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b820a1 call dword ptr [0x10b850e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850e4))), 0x10b820a7u);
  /* 10b820a7 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10b820ac push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b820ae call edi */
  call_ind((uint32_t)(EDI), 0x10b820b0u);
  /* 10b820b0 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b820b3:;
  /* 10b820b3 mov edi, dword ptr [0x10b850b0] */
  EDI = (r32((uint32_t)(0x10b850b0)));
  /* 10b820b9 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10b820bb call edi */
  call_ind((uint32_t)(EDI), 0x10b820bdu);
  /* 10b820bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b820c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b820c2 je 0x10b82101 */
  if (C.zf) goto L_10b82101;
  /* 10b820c4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b820c6 call dword ptr [0x10b85110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85110))), 0x10b820ccu);
  /* 10b820cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b820cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b820d1 je 0x10b82101 */
  if (C.zf) goto L_10b82101;
  /* 10b820d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b820d5 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10b820d7 call ebp */
  call_ind((uint32_t)(EBP), 0x10b820d9u);
  /* 10b820d9 push 0x10b862b8 */
  push32((uint32_t)(0x10b862b8u));
  /* 10b820de call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b820e4u);
  /* 10b820e4 push 0x10b86858 */
  push32((uint32_t)(0x10b86858u));
  /* 10b820e9 call dword ptr [0x10b85104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85104))), 0x10b820efu);
  /* 10b820ef push 5 */
  push32((uint32_t)(0x5u));
  /* 10b820f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b820f3 push 0x10b86858 */
  push32((uint32_t)(0x10b86858u));
  /* 10b820f8 call dword ptr [0x10b850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d8))), 0x10b820feu);
  /* 10b820fe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b82101:;
  /* 10b82101 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b82103 call edi */
  call_ind((uint32_t)(EDI), 0x10b82105u);
  /* 10b82105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82108 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b8210a je 0x10b8217a */
  if (C.zf) goto L_10b8217a;
  /* 10b8210c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b8210e call dword ptr [0x10b85110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85110))), 0x10b82114u);
  /* 10b82114 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82117 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b82119 je 0x10b8217a */
  if (C.zf) goto L_10b8217a;
  /* 10b8211b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8211d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b8211f call ebp */
  call_ind((uint32_t)(EBP), 0x10b82121u);
  /* 10b82121 mov edi, dword ptr [0x10b850d4] */
  EDI = (r32((uint32_t)(0x10b850d4)));
  /* 10b82127 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b82129 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8212b call edi */
  call_ind((uint32_t)(EDI), 0x10b8212du);
  /* 10b8212d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b8212f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82131 call edi */
  call_ind((uint32_t)(EDI), 0x10b82133u);
  /* 10b82133 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b82135 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b82137 call edi */
  call_ind((uint32_t)(EDI), 0x10b82139u);
  /* 10b82139 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b8213b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8213d call edi */
  call_ind((uint32_t)(EDI), 0x10b8213fu);
  /* 10b8213f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82141 push 0x10b867d0 */
  push32((uint32_t)(0x10b867d0u));
  /* 10b82146 call ebx */
  call_ind((uint32_t)(EBX), 0x10b82148u);
  /* 10b82148 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8214a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10b8214c push 0x10b86888 */
  push32((uint32_t)(0x10b86888u));
  /* 10b82151 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82153 call esi */
  call_ind((uint32_t)(ESI), 0x10b82155u);
  /* 10b82155 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82158 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8215a push 0x10b868a0 */
  push32((uint32_t)(0x10b868a0u));
  /* 10b8215f call ebx */
  call_ind((uint32_t)(EBX), 0x10b82161u);
  /* 10b82161 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82163 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10b82168 push 0x10b86948 */
  push32((uint32_t)(0x10b86948u));
  /* 10b8216d push 4 */
  push32((uint32_t)(0x4u));
  /* 10b8216f call esi */
  call_ind((uint32_t)(ESI), 0x10b82171u);
  /* 10b82171 mov edi, dword ptr [0x10b850b0] */
  EDI = (r32((uint32_t)(0x10b850b0)));
  /* 10b82177 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b8217a:;
  /* 10b8217a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b8217c call edi */
  call_ind((uint32_t)(EDI), 0x10b8217eu);
  /* 10b8217e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82181 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b82183 pop ebx */
  EBX = (pop32());
  /* 10b82184 je 0x10b821b8 */
  if (C.zf) goto L_10b821b8;
  /* 10b82186 push 0x10b86818 */
  push32((uint32_t)(0x10b86818u));
  /* 10b8218b push 0x10b86820 */
  push32((uint32_t)(0x10b86820u));
  /* 10b82190 call dword ptr [0x10b850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850ec))), 0x10b82196u);
  /* 10b82196 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82199 cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8219c jle 0x10b821b8 */
  if ((C.zf||C.sf!=C.of)) goto L_10b821b8;
  /* 10b8219e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b821a0 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b821a2 call ebp */
  call_ind((uint32_t)(EBP), 0x10b821a4u);
  /* 10b821a4 push 0x10b862b0 */
  push32((uint32_t)(0x10b862b0u));
  /* 10b821a9 call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b821afu);
  /* 10b821af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b821b2 call dword ptr [0x10b85124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85124))), 0x10b821b8u);
L_10b821b8:;
  /* 10b821b8 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10b821ba call edi */
  call_ind((uint32_t)(EDI), 0x10b821bcu);
  /* 10b821bc mov esi, dword ptr [0x10b85128] */
  ESI = (r32((uint32_t)(0x10b85128)));
  /* 10b821c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b821c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b821c7 je 0x10b821f2 */
  if (C.zf) goto L_10b821f2;
  /* 10b821c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b821cb push 0x10b86870 */
  push32((uint32_t)(0x10b86870u));
  /* 10b821d0 call dword ptr [0x10b850f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f8))), 0x10b821d6u);
  /* 10b821d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b821d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b821db jne 0x10b821f2 */
  if (!C.zf) goto L_10b821f2;
  /* 10b821dd push eax */
  push32((uint32_t)(EAX));
  /* 10b821de push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10b821e0 call ebp */
  call_ind((uint32_t)(EBP), 0x10b821e2u);
  /* 10b821e2 push 0x10b862a8 */
  push32((uint32_t)(0x10b862a8u));
  /* 10b821e7 call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b821edu);
  /* 10b821ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b821f0 call esi */
  call_ind((uint32_t)(ESI), 0x10b821f2u);
L_10b821f2:;
  /* 10b821f2 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10b821f4 call edi */
  call_ind((uint32_t)(EDI), 0x10b821f6u);
  /* 10b821f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b821f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b821fb je 0x10b82233 */
  if (C.zf) goto L_10b82233;
  /* 10b821fd push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b821ff call edi */
  call_ind((uint32_t)(EDI), 0x10b82201u);
  /* 10b82201 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82204 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b82206 jne 0x10b82233 */
  if (!C.zf) goto L_10b82233;
  /* 10b82208 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8220a push 0x10b86818 */
  push32((uint32_t)(0x10b86818u));
  /* 10b8220f call dword ptr [0x10b850f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850f8))), 0x10b82215u);
  /* 10b82215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82218 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8221b jge 0x10b82233 */
  if ((C.sf==C.of)) goto L_10b82233;
  /* 10b8221d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8221f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10b82221 call ebp */
  call_ind((uint32_t)(EBP), 0x10b82223u);
  /* 10b82223 push 0x10b862a0 */
  push32((uint32_t)(0x10b862a0u));
  /* 10b82228 call dword ptr [0x10b850d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850d0))), 0x10b8222eu);
  /* 10b8222e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82231 call esi */
  call_ind((uint32_t)(ESI), 0x10b82233u);
L_10b82233:;
  /* 10b82233 pop edi */
  EDI = (pop32());
  /* 10b82234 pop esi */
  ESI = (pop32());
  /* 10b82235 pop ebp */
  EBP = (pop32());
  /* 10b82236 ret  */
  ESPCHK(0x10b81330u, _esp0);
  ESP += 4; return;
}

/* FUN_10002240 @ 0x10b82240 (217 bytes, 57 insns) */
void f_10b82240(void) {
  FTRACE(0x10b82240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82240 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b82244 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82247 jne 0x10b822d5 */
  if (!C.zf) goto L_10b822d5;
  /* 10b8224d call dword ptr [0x10b8508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8508c))), 0x10b82253u);
  /* 10b82253 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82255 mov dword ptr [0x10b86974], eax */
  w32((uint32_t)(0x10b86974), (EAX));
  /* 10b8225a call 0x10b82c74 */
  push32(0x10b8225fu); f_10b82c74();
  /* 10b8225f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82261 pop ecx */
  ECX = (pop32());
  /* 10b82262 je 0x10b822a0 */
  if (C.zf) goto L_10b822a0;
  /* 10b82264 mov eax, dword ptr [0x10b86974] */
  EAX = (r32((uint32_t)(0x10b86974)));
  /* 10b82269 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b8226b mov cl, byte ptr [0x10b86975] */
  CL = (r8((uint32_t)(0x10b86975)));
  /* 10b82271 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b82276 shr dword ptr [0x10b86974], 0x10 */
  w32((uint32_t)(0x10b86974), (sh_shr((uint32_t)(r32((uint32_t)(0x10b86974))), (0x10u)&0x1f, 32)));
  /* 10b8227d mov dword ptr [0x10b8697c], eax */
  w32((uint32_t)(0x10b8697c), (EAX));
  /* 10b82282 mov dword ptr [0x10b86980], ecx */
  w32((uint32_t)(0x10b86980), (ECX));
  /* 10b82288 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b8228b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8228d mov dword ptr [0x10b86978], eax */
  w32((uint32_t)(0x10b86978), (EAX));
  /* 10b82292 call 0x10b82507 */
  push32(0x10b82297u); f_10b82507();
  /* 10b82297 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82299 jne 0x10b822a4 */
  if (!C.zf) goto L_10b822a4;
  /* 10b8229b call 0x10b82cb0 */
  push32(0x10b822a0u); f_10b82cb0();
L_10b822a0:;
  /* 10b822a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b822a2 jmp 0x10b82316 */
  goto L_10b82316;
L_10b822a4:;
  /* 10b822a4 call dword ptr [0x10b85088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85088))), 0x10b822aau);
  /* 10b822aa mov dword ptr [0x10b86ed8], eax */
  w32((uint32_t)(0x10b86ed8), (EAX));
  /* 10b822af call 0x10b82b42 */
  push32(0x10b822b4u); f_10b82b42();
  /* 10b822b4 mov dword ptr [0x10b86960], eax */
  w32((uint32_t)(0x10b86960), (EAX));
  /* 10b822b9 call 0x10b8262c */
  push32(0x10b822beu); f_10b8262c();
  /* 10b822be call 0x10b828f5 */
  push32(0x10b822c3u); f_10b828f5();
  /* 10b822c3 call 0x10b8283c */
  push32(0x10b822c8u); f_10b8283c();
  /* 10b822c8 call 0x10b823e9 */
  push32(0x10b822cdu); f_10b823e9();
  /* 10b822cd inc dword ptr [0x10b8695c] */
  { uint32_t _r=(r32((uint32_t)(0x10b8695c)))+1; w32((uint32_t)(0x10b8695c), (_r)); fl_inc(_r,32); }
  /* 10b822d3 jmp 0x10b82313 */
  goto L_10b82313;
L_10b822d5:;
  /* 10b822d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b822d7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b822d9 jne 0x10b82307 */
  if (!C.zf) goto L_10b82307;
  /* 10b822db cmp dword ptr [0x10b8695c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10b8695c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b822e1 jle 0x10b822a0 */
  if ((C.zf||C.sf!=C.of)) goto L_10b822a0;
  /* 10b822e3 dec dword ptr [0x10b8695c] */
  { uint32_t _r=(r32((uint32_t)(0x10b8695c)))-1; w32((uint32_t)(0x10b8695c), (_r)); fl_dec(_r,32); }
  /* 10b822e9 cmp dword ptr [0x10b869ac], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10b869ac))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b822ef jne 0x10b822f6 */
  if (!C.zf) goto L_10b822f6;
  /* 10b822f1 call 0x10b82427 */
  push32(0x10b822f6u); f_10b82427();
L_10b822f6:;
  /* 10b822f6 call 0x10b827e8 */
  push32(0x10b822fbu); f_10b827e8();
  /* 10b822fb call 0x10b8255b */
  push32(0x10b82300u); f_10b8255b();
  /* 10b82300 call 0x10b82cb0 */
  push32(0x10b82305u); f_10b82cb0();
  /* 10b82305 jmp 0x10b82313 */
  goto L_10b82313;
L_10b82307:;
  /* 10b82307 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8230a jne 0x10b82313 */
  if (!C.zf) goto L_10b82313;
  /* 10b8230c push ecx */
  push32((uint32_t)(ECX));
  /* 10b8230d call 0x10b8258c */
  push32(0x10b82312u); f_10b8258c();
  /* 10b82312 pop ecx */
  ECX = (pop32());
L_10b82313:;
  /* 10b82313 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82315 pop eax */
  EAX = (pop32());
L_10b82316:;
  /* 10b82316 ret 0xc */
  ESPCHK(0x10b82240u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10b82319 (157 bytes, 73 insns) */
void f_10b82319(void) {
  FTRACE(0x10b82319u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82319 push ebp */
  push32((uint32_t)(EBP));
  /* 10b8231a mov ebp, esp */
  EBP = (ESP);
  /* 10b8231c push ebx */
  push32((uint32_t)(EBX));
  /* 10b8231d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b82320 push esi */
  push32((uint32_t)(ESI));
  /* 10b82321 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b82324 push edi */
  push32((uint32_t)(EDI));
  /* 10b82325 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10b82328 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b8232a jne 0x10b82335 */
  if (!C.zf) goto L_10b82335;
  /* 10b8232c cmp dword ptr [0x10b8695c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b8695c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82333 jmp 0x10b8235b */
  goto L_10b8235b;
L_10b82335:;
  /* 10b82335 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82338 je 0x10b8233f */
  if (C.zf) goto L_10b8233f;
  /* 10b8233a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8233d jne 0x10b82361 */
  if (!C.zf) goto L_10b82361;
L_10b8233f:;
  /* 10b8233f mov eax, dword ptr [0x10b86edc] */
  EAX = (r32((uint32_t)(0x10b86edc)));
  /* 10b82344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82346 je 0x10b82351 */
  if (C.zf) goto L_10b82351;
  /* 10b82348 push edi */
  push32((uint32_t)(EDI));
  /* 10b82349 push esi */
  push32((uint32_t)(ESI));
  /* 10b8234a push ebx */
  push32((uint32_t)(EBX));
  /* 10b8234b call eax */
  call_ind((uint32_t)(EAX), 0x10b8234du);
  /* 10b8234d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8234f je 0x10b8235d */
  if (C.zf) goto L_10b8235d;
L_10b82351:;
  /* 10b82351 push edi */
  push32((uint32_t)(EDI));
  /* 10b82352 push esi */
  push32((uint32_t)(ESI));
  /* 10b82353 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82354 call 0x10b82240 */
  push32(0x10b82359u); f_10b82240();
  /* 10b82359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10b8235b:;
  /* 10b8235b jne 0x10b82361 */
  if (!C.zf) goto L_10b82361;
L_10b8235d:;
  /* 10b8235d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b8235f jmp 0x10b823af */
  goto L_10b823af;
L_10b82361:;
  /* 10b82361 push edi */
  push32((uint32_t)(EDI));
  /* 10b82362 push esi */
  push32((uint32_t)(ESI));
  /* 10b82363 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82364 call 0x10b81310 */
  push32(0x10b82369u); f_10b81310();
  /* 10b82369 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8236c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b8236f jne 0x10b8237d */
  if (!C.zf) goto L_10b8237d;
  /* 10b82371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82373 jne 0x10b823ac */
  if (!C.zf) goto L_10b823ac;
  /* 10b82375 push edi */
  push32((uint32_t)(EDI));
  /* 10b82376 push eax */
  push32((uint32_t)(EAX));
  /* 10b82377 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82378 call 0x10b82240 */
  push32(0x10b8237du); f_10b82240();
L_10b8237d:;
  /* 10b8237d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b8237f je 0x10b82386 */
  if (C.zf) goto L_10b82386;
  /* 10b82381 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82384 jne 0x10b823ac */
  if (!C.zf) goto L_10b823ac;
L_10b82386:;
  /* 10b82386 push edi */
  push32((uint32_t)(EDI));
  /* 10b82387 push esi */
  push32((uint32_t)(ESI));
  /* 10b82388 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82389 call 0x10b82240 */
  push32(0x10b8238eu); f_10b82240();
  /* 10b8238e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82390 jne 0x10b82395 */
  if (!C.zf) goto L_10b82395;
  /* 10b82392 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10b82395:;
  /* 10b82395 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82399 je 0x10b823ac */
  if (C.zf) goto L_10b823ac;
  /* 10b8239b mov eax, dword ptr [0x10b86edc] */
  EAX = (r32((uint32_t)(0x10b86edc)));
  /* 10b823a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b823a2 je 0x10b823ac */
  if (C.zf) goto L_10b823ac;
  /* 10b823a4 push edi */
  push32((uint32_t)(EDI));
  /* 10b823a5 push esi */
  push32((uint32_t)(ESI));
  /* 10b823a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b823a7 call eax */
  call_ind((uint32_t)(EAX), 0x10b823a9u);
  /* 10b823a9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10b823ac:;
  /* 10b823ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10b823af:;
  /* 10b823af pop edi */
  EDI = (pop32());
  /* 10b823b0 pop esi */
  ESI = (pop32());
  /* 10b823b1 pop ebx */
  EBX = (pop32());
  /* 10b823b2 pop ebp */
  EBP = (pop32());
  /* 10b823b3 ret 0xc */
  ESPCHK(0x10b82319u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10b823b6 (48 bytes, 15 insns) */
void f_10b823b6(void) {
  FTRACE(0x10b823b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b823b6 mov eax, dword ptr [0x10b86968] */
  EAX = (r32((uint32_t)(0x10b86968)));
  /* 10b823bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b823be je 0x10b823cd */
  if (C.zf) goto L_10b823cd;
  /* 10b823c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b823c2 jne 0x10b823d2 */
  if (!C.zf) goto L_10b823d2;
  /* 10b823c4 cmp dword ptr [0x10b8696c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b8696c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b823cb jne 0x10b823d2 */
  if (!C.zf) goto L_10b823d2;
L_10b823cd:;
  /* 10b823cd call 0x10b82d25 */
  push32(0x10b823d2u); f_10b82d25();
L_10b823d2:;
  /* 10b823d2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10b823d6 call 0x10b82d5e */
  push32(0x10b823dbu); f_10b82d5e();
  /* 10b823db push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b823e0 call dword ptr [0x10b86468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b86468))), 0x10b823e6u);
  /* 10b823e6 pop ecx */
  ECX = (pop32());
  /* 10b823e7 pop ecx */
  ECX = (pop32());
  /* 10b823e8 ret  */
  ESPCHK(0x10b823b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100023e9 @ 0x10b823e9 (45 bytes, 12 insns) */
void f_10b823e9(void) {
  FTRACE(0x10b823e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b823e9 mov eax, dword ptr [0x10b86ed4] */
  EAX = (r32((uint32_t)(0x10b86ed4)));
  /* 10b823ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b823f0 je 0x10b823f4 */
  if (C.zf) goto L_10b823f4;
  /* 10b823f2 call eax */
  call_ind((uint32_t)(EAX), 0x10b823f4u);
L_10b823f4:;
  /* 10b823f4 push 0x10b86010 */
  push32((uint32_t)(0x10b86010u));
  /* 10b823f9 push 0x10b86008 */
  push32((uint32_t)(0x10b86008u));
  /* 10b823fe call 0x10b824ed */
  push32(0x10b82403u); f_10b824ed();
  /* 10b82403 push 0x10b86004 */
  push32((uint32_t)(0x10b86004u));
  /* 10b82408 push 0x10b86000 */
  push32((uint32_t)(0x10b86000u));
  /* 10b8240d call 0x10b824ed */
  push32(0x10b82412u); f_10b824ed();
  /* 10b82412 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82415 ret  */
  ESPCHK(0x10b823e9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10b82416 (17 bytes, 6 insns) */
void f_10b82416(void) {
  FTRACE(0x10b82416u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82416 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82418 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8241a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10b8241e call 0x10b82436 */
  push32(0x10b82423u); f_10b82436();
  /* 10b82423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82426 ret  */
  ESPCHK(0x10b82416u, _esp0);
  ESP += 4; return;
}

/* FUN_10002427 @ 0x10b82427 (15 bytes, 6 insns) */
void f_10b82427(void) {
  FTRACE(0x10b82427u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82429 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8242b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8242d call 0x10b82436 */
  push32(0x10b82432u); f_10b82436();
  /* 10b82432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82435 ret  */
  ESPCHK(0x10b82427u, _esp0);
  ESP += 4; return;
}

/* FUN_10002436 @ 0x10b82436 (163 bytes, 53 insns) */
void f_10b82436(void) {
  FTRACE(0x10b82436u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82436 push edi */
  push32((uint32_t)(EDI));
  /* 10b82437 call 0x10b824db */
  push32(0x10b8243cu); f_10b824db();
  /* 10b8243c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8243e pop edi */
  EDI = (pop32());
  /* 10b8243f cmp dword ptr [0x10b869b0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10b869b0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82445 jne 0x10b82458 */
  if (!C.zf) goto L_10b82458;
  /* 10b82447 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10b8244b call dword ptr [0x10b85098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85098))), 0x10b82451u);
  /* 10b82451 push eax */
  push32((uint32_t)(EAX));
  /* 10b82452 call dword ptr [0x10b85094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85094))), 0x10b82458u);
L_10b82458:;
  /* 10b82458 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8245d push ebx */
  push32((uint32_t)(EBX));
  /* 10b8245e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b82462 mov dword ptr [0x10b869ac], edi */
  w32((uint32_t)(0x10b869ac), (EDI));
  /* 10b82468 mov byte ptr [0x10b869a8], bl */
  w8((uint32_t)(0x10b869a8), (BL));
  /* 10b8246e jne 0x10b824ac */
  if (!C.zf) goto L_10b824ac;
  /* 10b82470 mov eax, dword ptr [0x10b86ed0] */
  EAX = (r32((uint32_t)(0x10b86ed0)));
  /* 10b82475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82477 je 0x10b8249b */
  if (C.zf) goto L_10b8249b;
  /* 10b82479 mov ecx, dword ptr [0x10b86ecc] */
  ECX = (r32((uint32_t)(0x10b86ecc)));
  /* 10b8247f push esi */
  push32((uint32_t)(ESI));
  /* 10b82480 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10b82483 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82485 jb 0x10b8249a */
  if (C.cf) goto L_10b8249a;
L_10b82487:;
  /* 10b82487 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b82489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8248b je 0x10b8248f */
  if (C.zf) goto L_10b8248f;
  /* 10b8248d call eax */
  call_ind((uint32_t)(EAX), 0x10b8248fu);
L_10b8248f:;
  /* 10b8248f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b82492 cmp esi, dword ptr [0x10b86ed0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10b86ed0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82498 jae 0x10b82487 */
  if (!C.cf) goto L_10b82487;
L_10b8249a:;
  /* 10b8249a pop esi */
  ESI = (pop32());
L_10b8249b:;
  /* 10b8249b push 0x10b86018 */
  push32((uint32_t)(0x10b86018u));
  /* 10b824a0 push 0x10b86014 */
  push32((uint32_t)(0x10b86014u));
  /* 10b824a5 call 0x10b824ed */
  push32(0x10b824aau); f_10b824ed();
  /* 10b824aa pop ecx */
  ECX = (pop32());
  /* 10b824ab pop ecx */
  ECX = (pop32());
L_10b824ac:;
  /* 10b824ac push 0x10b86020 */
  push32((uint32_t)(0x10b86020u));
  /* 10b824b1 push 0x10b8601c */
  push32((uint32_t)(0x10b8601cu));
  /* 10b824b6 call 0x10b824ed */
  push32(0x10b824bbu); f_10b824ed();
  /* 10b824bb pop ecx */
  ECX = (pop32());
  /* 10b824bc pop ecx */
  ECX = (pop32());
  /* 10b824bd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b824bf pop ebx */
  EBX = (pop32());
  /* 10b824c0 je 0x10b824c9 */
  if (C.zf) goto L_10b824c9;
  /* 10b824c2 call 0x10b824e4 */
  push32(0x10b824c7u); f_10b824e4();
  /* 10b824c7 pop edi */
  EDI = (pop32());
  /* 10b824c8 ret  */
  ESPCHK(0x10b82436u, _esp0);
  ESP += 4; return;
L_10b824c9:;
  /* 10b824c9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10b824cd mov dword ptr [0x10b869b0], edi */
  w32((uint32_t)(0x10b869b0), (EDI));
  /* 10b824d3 call dword ptr [0x10b85090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85090))), 0x10b824d9u);
  /* 10b824d9 pop edi */
  EDI = (pop32());
  /* 10b824da ret  */
  ESPCHK(0x10b82436u, _esp0);
  ESP += 4; return;
}

/* FUN_100024db @ 0x10b824db (9 bytes, 4 insns) */
void f_10b824db(void) {
  FTRACE(0x10b824dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b824db push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b824dd call 0x10b82f46 */
  push32(0x10b824e2u); f_10b82f46();
  /* 10b824e2 pop ecx */
  ECX = (pop32());
  /* 10b824e3 ret  */
  ESPCHK(0x10b824dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100024e4 @ 0x10b824e4 (9 bytes, 4 insns) */
void f_10b824e4(void) {
  FTRACE(0x10b824e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b824e4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b824e6 call 0x10b82fa7 */
  push32(0x10b824ebu); f_10b82fa7();
  /* 10b824eb pop ecx */
  ECX = (pop32());
  /* 10b824ec ret  */
  ESPCHK(0x10b824e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100024ed @ 0x10b824ed (26 bytes, 12 insns) */
void f_10b824ed(void) {
  FTRACE(0x10b824edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b824ed push esi */
  push32((uint32_t)(ESI));
  /* 10b824ee mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10b824f2:;
  /* 10b824f2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b824f6 jae 0x10b82505 */
  if (!C.cf) goto L_10b82505;
  /* 10b824f8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b824fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b824fc je 0x10b82500 */
  if (C.zf) goto L_10b82500;
  /* 10b824fe call eax */
  call_ind((uint32_t)(EAX), 0x10b82500u);
L_10b82500:;
  /* 10b82500 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82503 jmp 0x10b824f2 */
  goto L_10b824f2;
L_10b82505:;
  /* 10b82505 pop esi */
  ESI = (pop32());
  /* 10b82506 ret  */
  ESPCHK(0x10b824edu, _esp0);
  ESP += 4; return;
}

/* FUN_10002507 @ 0x10b82507 (84 bytes, 32 insns) */
void f_10b82507(void) {
  FTRACE(0x10b82507u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82507 push esi */
  push32((uint32_t)(ESI));
  /* 10b82508 call 0x10b82eb1 */
  push32(0x10b8250du); f_10b82eb1();
  /* 10b8250d call dword ptr [0x10b850a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850a0))), 0x10b82513u);
  /* 10b82513 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82516 mov dword ptr [0x10b8646c], eax */
  w32((uint32_t)(0x10b8646c), (EAX));
  /* 10b8251b je 0x10b82557 */
  if (C.zf) goto L_10b82557;
  /* 10b8251d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10b8251f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82521 call 0x10b82fbc */
  push32(0x10b82526u); f_10b82fbc();
  /* 10b82526 mov esi, eax */
  ESI = (EAX);
  /* 10b82528 pop ecx */
  ECX = (pop32());
  /* 10b82529 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b8252b pop ecx */
  ECX = (pop32());
  /* 10b8252c je 0x10b82557 */
  if (C.zf) goto L_10b82557;
  /* 10b8252e push esi */
  push32((uint32_t)(ESI));
  /* 10b8252f push dword ptr [0x10b8646c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8646c))));
  /* 10b82535 call dword ptr [0x10b85000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85000))), 0x10b8253bu);
  /* 10b8253b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8253d je 0x10b82557 */
  if (C.zf) goto L_10b82557;
  /* 10b8253f push esi */
  push32((uint32_t)(ESI));
  /* 10b82540 call 0x10b82579 */
  push32(0x10b82545u); f_10b82579();
  /* 10b82545 pop ecx */
  ECX = (pop32());
  /* 10b82546 call dword ptr [0x10b85004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85004))), 0x10b8254cu);
  /* 10b8254c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10b82550 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82552 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10b82554 pop eax */
  EAX = (pop32());
  /* 10b82555 pop esi */
  ESI = (pop32());
  /* 10b82556 ret  */
  ESPCHK(0x10b82507u, _esp0);
  ESP += 4; return;
L_10b82557:;
  /* 10b82557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b82559 pop esi */
  ESI = (pop32());
  /* 10b8255a ret  */
  ESPCHK(0x10b82507u, _esp0);
  ESP += 4; return;
}

/* FUN_1000255b @ 0x10b8255b (30 bytes, 8 insns) */
void f_10b8255b(void) {
  FTRACE(0x10b8255bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b8255b call 0x10b82eda */
  push32(0x10b82560u); f_10b82eda();
  /* 10b82560 mov eax, dword ptr [0x10b8646c] */
  EAX = (r32((uint32_t)(0x10b8646c)));
  /* 10b82565 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82568 je 0x10b82578 */
  if (C.zf) goto L_10b82578;
  /* 10b8256a push eax */
  push32((uint32_t)(EAX));
  /* 10b8256b call dword ptr [0x10b850a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850a4))), 0x10b82571u);
  /* 10b82571 or dword ptr [0x10b8646c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10b8646c)))|(0xffffffffu); w32((uint32_t)(0x10b8646c), (_r)); fl_logic(_r,32); }
L_10b82578:;
  /* 10b82578 ret  */
  ESPCHK(0x10b8255bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002579 @ 0x10b82579 (19 bytes, 4 insns) */
void f_10b82579(void) {
  FTRACE(0x10b82579u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82579 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b8257d mov dword ptr [eax + 0x50], 0x10b865e8 */
  w32((uint32_t)(EAX + 0x50), (0x10b865e8u));
  /* 10b82584 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10b8258b ret  */
  ESPCHK(0x10b82579u, _esp0);
  ESP += 4; return;
}

/* FUN_1000258c @ 0x10b8258c (160 bytes, 62 insns) */
void f_10b8258c(void) {
  FTRACE(0x10b8258cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b8258c mov eax, dword ptr [0x10b8646c] */
  EAX = (r32((uint32_t)(0x10b8646c)));
  /* 10b82591 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82594 je 0x10b8262b */
  if (C.zf) goto L_10b8262b;
  /* 10b8259a push esi */
  push32((uint32_t)(ESI));
  /* 10b8259b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b8259f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b825a1 jne 0x10b825b0 */
  if (!C.zf) goto L_10b825b0;
  /* 10b825a3 push eax */
  push32((uint32_t)(EAX));
  /* 10b825a4 call dword ptr [0x10b850a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b850a8))), 0x10b825aau);
  /* 10b825aa mov esi, eax */
  ESI = (EAX);
  /* 10b825ac test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b825ae je 0x10b8261c */
  if (C.zf) goto L_10b8261c;
L_10b825b0:;
  /* 10b825b0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10b825b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b825b5 je 0x10b825be */
  if (C.zf) goto L_10b825be;
  /* 10b825b7 push eax */
  push32((uint32_t)(EAX));
  /* 10b825b8 call 0x10b83049 */
  push32(0x10b825bdu); f_10b83049();
  /* 10b825bd pop ecx */
  ECX = (pop32());
L_10b825be:;
  /* 10b825be mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10b825c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b825c3 je 0x10b825cc */
  if (C.zf) goto L_10b825cc;
  /* 10b825c5 push eax */
  push32((uint32_t)(EAX));
  /* 10b825c6 call 0x10b83049 */
  push32(0x10b825cbu); f_10b83049();
  /* 10b825cb pop ecx */
  ECX = (pop32());
L_10b825cc:;
  /* 10b825cc mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10b825cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b825d1 je 0x10b825da */
  if (C.zf) goto L_10b825da;
  /* 10b825d3 push eax */
  push32((uint32_t)(EAX));
  /* 10b825d4 call 0x10b83049 */
  push32(0x10b825d9u); f_10b83049();
  /* 10b825d9 pop ecx */
  ECX = (pop32());
L_10b825da:;
  /* 10b825da mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10b825dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b825df je 0x10b825e8 */
  if (C.zf) goto L_10b825e8;
  /* 10b825e1 push eax */
  push32((uint32_t)(EAX));
  /* 10b825e2 call 0x10b83049 */
  push32(0x10b825e7u); f_10b83049();
  /* 10b825e7 pop ecx */
  ECX = (pop32());
L_10b825e8:;
  /* 10b825e8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10b825eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b825ed je 0x10b825f6 */
  if (C.zf) goto L_10b825f6;
  /* 10b825ef push eax */
  push32((uint32_t)(EAX));
  /* 10b825f0 call 0x10b83049 */
  push32(0x10b825f5u); f_10b83049();
  /* 10b825f5 pop ecx */
  ECX = (pop32());
L_10b825f6:;
  /* 10b825f6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10b825f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b825fb je 0x10b82604 */
  if (C.zf) goto L_10b82604;
  /* 10b825fd push eax */
  push32((uint32_t)(EAX));
  /* 10b825fe call 0x10b83049 */
  push32(0x10b82603u); f_10b83049();
  /* 10b82603 pop ecx */
  ECX = (pop32());
L_10b82604:;
  /* 10b82604 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10b82607 cmp eax, 0x10b865e8 */
  { uint32_t _a=(EAX),_b=(0x10b865e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8260c je 0x10b82615 */
  if (C.zf) goto L_10b82615;
  /* 10b8260e push eax */
  push32((uint32_t)(EAX));
  /* 10b8260f call 0x10b83049 */
  push32(0x10b82614u); f_10b83049();
  /* 10b82614 pop ecx */
  ECX = (pop32());
L_10b82615:;
  /* 10b82615 push esi */
  push32((uint32_t)(ESI));
  /* 10b82616 call 0x10b83049 */
  push32(0x10b8261bu); f_10b83049();
  /* 10b8261b pop ecx */
  ECX = (pop32());
L_10b8261c:;
  /* 10b8261c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8261e push dword ptr [0x10b8646c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8646c))));
  /* 10b82624 call dword ptr [0x10b85000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85000))), 0x10b8262au);
  /* 10b8262a pop esi */
  ESI = (pop32());
L_10b8262b:;
  /* 10b8262b ret  */
  ESPCHK(0x10b8258cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000262c @ 0x10b8262c (444 bytes, 150 insns) */
void f_10b8262c(void) {
  FTRACE(0x10b8262cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b8262c push ebp */
  push32((uint32_t)(EBP));
  /* 10b8262d mov ebp, esp */
  EBP = (ESP);
  /* 10b8262f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b82632 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82633 push esi */
  push32((uint32_t)(ESI));
  /* 10b82634 push edi */
  push32((uint32_t)(EDI));
  /* 10b82635 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b8263a call 0x10b83091 */
  push32(0x10b8263fu); f_10b83091();
  /* 10b8263f mov esi, eax */
  ESI = (EAX);
  /* 10b82641 pop ecx */
  ECX = (pop32());
  /* 10b82642 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b82644 jne 0x10b8264e */
  if (!C.zf) goto L_10b8264e;
  /* 10b82646 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10b82648 call 0x10b823b6 */
  push32(0x10b8264du); f_10b823b6();
  /* 10b8264d pop ecx */
  ECX = (pop32());
L_10b8264e:;
  /* 10b8264e mov dword ptr [0x10b86dc0], esi */
  w32((uint32_t)(0x10b86dc0), (ESI));
  /* 10b82654 mov dword ptr [0x10b86ec0], 0x20 */
  w32((uint32_t)(0x10b86ec0), (0x20u));
  /* 10b8265e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10b82664:;
  /* 10b82664 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82666 jae 0x10b82686 */
  if (!C.cf) goto L_10b82686;
  /* 10b82668 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10b8266c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10b8266f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b82673 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10b82677 mov eax, dword ptr [0x10b86dc0] */
  EAX = (r32((uint32_t)(0x10b86dc0)));
  /* 10b8267c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8267f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82684 jmp 0x10b82664 */
  goto L_10b82664;
L_10b82686:;
  /* 10b82686 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10b82689 push eax */
  push32((uint32_t)(EAX));
  /* 10b8268a call dword ptr [0x10b8507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8507c))), 0x10b82690u);
  /* 10b82690 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10b82695 je 0x10b8276c */
  if (C.zf) goto L_10b8276c;
  /* 10b8269b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b8269e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b826a0 je 0x10b8276c */
  if (C.zf) goto L_10b8276c;
  /* 10b826a6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10b826a8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10b826ab lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10b826ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b826b1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10b826b6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b826b8 jl 0x10b826bc */
  if ((C.sf!=C.of)) goto L_10b826bc;
  /* 10b826ba mov edi, eax */
  EDI = (EAX);
L_10b826bc:;
  /* 10b826bc cmp dword ptr [0x10b86ec0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10b86ec0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b826c2 jge 0x10b8271a */
  if ((C.sf==C.of)) goto L_10b8271a;
  /* 10b826c4 mov esi, 0x10b86dc4 */
  ESI = (0x10b86dc4u);
L_10b826c9:;
  /* 10b826c9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b826ce call 0x10b83091 */
  push32(0x10b826d3u); f_10b83091();
  /* 10b826d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b826d5 pop ecx */
  ECX = (pop32());
  /* 10b826d6 je 0x10b82714 */
  if (C.zf) goto L_10b82714;
  /* 10b826d8 add dword ptr [0x10b86ec0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10b86ec0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10b86ec0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10b826df mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10b826e1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10b826e7:;
  /* 10b826e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b826e9 jae 0x10b82707 */
  if (!C.cf) goto L_10b82707;
  /* 10b826eb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10b826ef or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10b826f2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b826f6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10b826fa mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10b826fc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b826ff add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82705 jmp 0x10b826e7 */
  goto L_10b826e7;
L_10b82707:;
  /* 10b82707 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8270a cmp dword ptr [0x10b86ec0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10b86ec0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82710 jl 0x10b826c9 */
  if ((C.sf!=C.of)) goto L_10b826c9;
  /* 10b82712 jmp 0x10b8271a */
  goto L_10b8271a;
L_10b82714:;
  /* 10b82714 mov edi, dword ptr [0x10b86ec0] */
  EDI = (r32((uint32_t)(0x10b86ec0)));
L_10b8271a:;
  /* 10b8271a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b8271c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b8271e jle 0x10b8276c */
  if ((C.zf||C.sf!=C.of)) goto L_10b8276c;
L_10b82720:;
  /* 10b82720 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b82723 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b82725 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82728 je 0x10b82762 */
  if (C.zf) goto L_10b82762;
  /* 10b8272a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10b8272c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10b8272e je 0x10b82762 */
  if (C.zf) goto L_10b82762;
  /* 10b82730 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10b82732 jne 0x10b8273f */
  if (!C.zf) goto L_10b8273f;
  /* 10b82734 push ecx */
  push32((uint32_t)(ECX));
  /* 10b82735 call dword ptr [0x10b85080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85080))), 0x10b8273bu);
  /* 10b8273b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8273d je 0x10b82762 */
  if (C.zf) goto L_10b82762;
L_10b8273f:;
  /* 10b8273f mov ecx, esi */
  ECX = (ESI);
  /* 10b82741 mov eax, esi */
  EAX = (ESI);
  /* 10b82743 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b82746 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b82749 mov ecx, dword ptr [ecx*4 + 0x10b86dc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10b86dc0)));
  /* 10b82750 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10b82753 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10b82756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b82759 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10b8275b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b8275d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10b8275f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10b82762:;
  /* 10b82762 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10b82766 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b82767 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b82768 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8276a jl 0x10b82720 */
  if ((C.sf!=C.of)) goto L_10b82720;
L_10b8276c:;
  /* 10b8276c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10b8276e:;
  /* 10b8276e mov ecx, dword ptr [0x10b86dc0] */
  ECX = (r32((uint32_t)(0x10b86dc0)));
  /* 10b82774 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10b82777 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8277b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10b8277e jne 0x10b827cd */
  if (!C.zf) goto L_10b827cd;
  /* 10b82780 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b82782 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10b82786 jne 0x10b8278d */
  if (!C.zf) goto L_10b8278d;
  /* 10b82788 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10b8278a pop eax */
  EAX = (pop32());
  /* 10b8278b jmp 0x10b82797 */
  goto L_10b82797;
L_10b8278d:;
  /* 10b8278d mov eax, ebx */
  EAX = (EBX);
  /* 10b8278f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b82790 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b82792 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b82794 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b82797:;
  /* 10b82797 push eax */
  push32((uint32_t)(EAX));
  /* 10b82798 call dword ptr [0x10b85084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85084))), 0x10b8279eu);
  /* 10b8279e mov edi, eax */
  EDI = (EAX);
  /* 10b827a0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b827a3 je 0x10b827bc */
  if (C.zf) goto L_10b827bc;
  /* 10b827a5 push edi */
  push32((uint32_t)(EDI));
  /* 10b827a6 call dword ptr [0x10b85080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85080))), 0x10b827acu);
  /* 10b827ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b827ae je 0x10b827bc */
  if (C.zf) goto L_10b827bc;
  /* 10b827b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b827b5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10b827b7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b827ba jne 0x10b827c2 */
  if (!C.zf) goto L_10b827c2;
L_10b827bc:;
  /* 10b827bc or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10b827c0 jmp 0x10b827d1 */
  goto L_10b827d1;
L_10b827c2:;
  /* 10b827c2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b827c5 jne 0x10b827d1 */
  if (!C.zf) goto L_10b827d1;
  /* 10b827c7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10b827cb jmp 0x10b827d1 */
  goto L_10b827d1;
L_10b827cd:;
  /* 10b827cd or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10b827d1:;
  /* 10b827d1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b827d2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b827d5 jl 0x10b8276e */
  if ((C.sf!=C.of)) goto L_10b8276e;
  /* 10b827d7 push dword ptr [0x10b86ec0] */
  push32((uint32_t)(r32((uint32_t)(0x10b86ec0))));
  /* 10b827dd call dword ptr [0x10b8509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8509c))), 0x10b827e3u);
  /* 10b827e3 pop edi */
  EDI = (pop32());
  /* 10b827e4 pop esi */
  ESI = (pop32());
  /* 10b827e5 pop ebx */
  EBX = (pop32());
  /* 10b827e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b827e7 ret  */
  ESPCHK(0x10b8262cu, _esp0);
  ESP += 4; return;
}

/* FUN_100027e8 @ 0x10b827e8 (84 bytes, 33 insns) */
void f_10b827e8(void) {
  FTRACE(0x10b827e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b827e8 push ebx */
  push32((uint32_t)(EBX));
  /* 10b827e9 push esi */
  push32((uint32_t)(ESI));
  /* 10b827ea push edi */
  push32((uint32_t)(EDI));
  /* 10b827eb mov esi, 0x10b86dc0 */
  ESI = (0x10b86dc0u);
L_10b827f0:;
  /* 10b827f0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b827f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b827f4 je 0x10b8282d */
  if (C.zf) goto L_10b8282d;
  /* 10b827f6 mov edi, eax */
  EDI = (EAX);
  /* 10b827f8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b827fd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b827ff jae 0x10b82822 */
  if (!C.cf) goto L_10b82822;
  /* 10b82801 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10b82804:;
  /* 10b82804 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82808 je 0x10b82811 */
  if (C.zf) goto L_10b82811;
  /* 10b8280a push ebx */
  push32((uint32_t)(EBX));
  /* 10b8280b call dword ptr [0x10b85078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85078))), 0x10b82811u);
L_10b82811:;
  /* 10b82811 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b82813 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82816 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8281b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8281e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82820 jb 0x10b82804 */
  if (C.cf) goto L_10b82804;
L_10b82822:;
  /* 10b82822 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b82824 call 0x10b83049 */
  push32(0x10b82829u); f_10b83049();
  /* 10b82829 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10b8282c pop ecx */
  ECX = (pop32());
L_10b8282d:;
  /* 10b8282d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82830 cmp esi, 0x10b86ec0 */
  { uint32_t _a=(ESI),_b=(0x10b86ec0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82836 jl 0x10b827f0 */
  if ((C.sf!=C.of)) goto L_10b827f0;
  /* 10b82838 pop edi */
  EDI = (pop32());
  /* 10b82839 pop esi */
  ESI = (pop32());
  /* 10b8283a pop ebx */
  EBX = (pop32());
  /* 10b8283b ret  */
  ESPCHK(0x10b827e8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000283c @ 0x10b8283c (185 bytes, 71 insns) */
void f_10b8283c(void) {
  FTRACE(0x10b8283cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b8283c push ebx */
  push32((uint32_t)(EBX));
  /* 10b8283d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b8283f cmp dword ptr [0x10b86ec8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10b86ec8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82845 push esi */
  push32((uint32_t)(ESI));
  /* 10b82846 push edi */
  push32((uint32_t)(EDI));
  /* 10b82847 jne 0x10b8284e */
  if (!C.zf) goto L_10b8284e;
  /* 10b82849 call 0x10b83663 */
  push32(0x10b8284eu); f_10b83663();
L_10b8284e:;
  /* 10b8284e mov esi, dword ptr [0x10b86960] */
  ESI = (r32((uint32_t)(0x10b86960)));
  /* 10b82854 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10b82856:;
  /* 10b82856 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b82858 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b8285a je 0x10b8286e */
  if (C.zf) goto L_10b8286e;
  /* 10b8285c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b8285e je 0x10b82861 */
  if (C.zf) goto L_10b82861;
  /* 10b82860 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10b82861:;
  /* 10b82861 push esi */
  push32((uint32_t)(ESI));
  /* 10b82862 call 0x10b83210 */
  push32(0x10b82867u); f_10b83210();
  /* 10b82867 pop ecx */
  ECX = (pop32());
  /* 10b82868 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10b8286c jmp 0x10b82856 */
  goto L_10b82856;
L_10b8286e:;
  /* 10b8286e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10b82875 push eax */
  push32((uint32_t)(EAX));
  /* 10b82876 call 0x10b83091 */
  push32(0x10b8287bu); f_10b83091();
  /* 10b8287b mov esi, eax */
  ESI = (EAX);
  /* 10b8287d pop ecx */
  ECX = (pop32());
  /* 10b8287e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82880 mov dword ptr [0x10b86990], esi */
  w32((uint32_t)(0x10b86990), (ESI));
  /* 10b82886 jne 0x10b82890 */
  if (!C.zf) goto L_10b82890;
  /* 10b82888 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b8288a call 0x10b823b6 */
  push32(0x10b8288fu); f_10b823b6();
  /* 10b8288f pop ecx */
  ECX = (pop32());
L_10b82890:;
  /* 10b82890 mov edi, dword ptr [0x10b86960] */
  EDI = (r32((uint32_t)(0x10b86960)));
  /* 10b82896 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82898 je 0x10b828d3 */
  if (C.zf) goto L_10b828d3;
  /* 10b8289a push ebp */
  push32((uint32_t)(EBP));
L_10b8289b:;
  /* 10b8289b push edi */
  push32((uint32_t)(EDI));
  /* 10b8289c call 0x10b83210 */
  push32(0x10b828a1u); f_10b83210();
  /* 10b828a1 mov ebp, eax */
  EBP = (EAX);
  /* 10b828a3 pop ecx */
  ECX = (pop32());
  /* 10b828a4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10b828a5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b828a8 je 0x10b828cc */
  if (C.zf) goto L_10b828cc;
  /* 10b828aa push ebp */
  push32((uint32_t)(EBP));
  /* 10b828ab call 0x10b83091 */
  push32(0x10b828b0u); f_10b83091();
  /* 10b828b0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b828b2 pop ecx */
  ECX = (pop32());
  /* 10b828b3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10b828b5 jne 0x10b828bf */
  if (!C.zf) goto L_10b828bf;
  /* 10b828b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b828b9 call 0x10b823b6 */
  push32(0x10b828beu); f_10b823b6();
  /* 10b828be pop ecx */
  ECX = (pop32());
L_10b828bf:;
  /* 10b828bf push edi */
  push32((uint32_t)(EDI));
  /* 10b828c0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b828c2 call 0x10b83120 */
  push32(0x10b828c7u); f_10b83120();
  /* 10b828c7 pop ecx */
  ECX = (pop32());
  /* 10b828c8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b828cb pop ecx */
  ECX = (pop32());
L_10b828cc:;
  /* 10b828cc add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b828ce cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b828d0 jne 0x10b8289b */
  if (!C.zf) goto L_10b8289b;
  /* 10b828d2 pop ebp */
  EBP = (pop32());
L_10b828d3:;
  /* 10b828d3 push dword ptr [0x10b86960] */
  push32((uint32_t)(r32((uint32_t)(0x10b86960))));
  /* 10b828d9 call 0x10b83049 */
  push32(0x10b828deu); f_10b83049();
  /* 10b828de pop ecx */
  ECX = (pop32());
  /* 10b828df mov dword ptr [0x10b86960], ebx */
  w32((uint32_t)(0x10b86960), (EBX));
  /* 10b828e5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10b828e7 pop edi */
  EDI = (pop32());
  /* 10b828e8 pop esi */
  ESI = (pop32());
  /* 10b828e9 mov dword ptr [0x10b86ec4], 1 */
  w32((uint32_t)(0x10b86ec4), (0x1u));
  /* 10b828f3 pop ebx */
  EBX = (pop32());
  /* 10b828f4 ret  */
  ESPCHK(0x10b8283cu, _esp0);
  ESP += 4; return;
}

/* FUN_100028f5 @ 0x10b828f5 (153 bytes, 62 insns) */
void f_10b828f5(void) {
  FTRACE(0x10b828f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b828f5 push ebp */
  push32((uint32_t)(EBP));
  /* 10b828f6 mov ebp, esp */
  EBP = (ESP);
  /* 10b828f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b828f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b828fa push ebx */
  push32((uint32_t)(EBX));
  /* 10b828fb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b828fd cmp dword ptr [0x10b86ec8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10b86ec8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82903 push esi */
  push32((uint32_t)(ESI));
  /* 10b82904 push edi */
  push32((uint32_t)(EDI));
  /* 10b82905 jne 0x10b8290c */
  if (!C.zf) goto L_10b8290c;
  /* 10b82907 call 0x10b83663 */
  push32(0x10b8290cu); f_10b83663();
L_10b8290c:;
  /* 10b8290c mov esi, 0x10b869b4 */
  ESI = (0x10b869b4u);
  /* 10b82911 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b82916 push esi */
  push32((uint32_t)(ESI));
  /* 10b82917 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82918 call dword ptr [0x10b85074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85074))), 0x10b8291eu);
  /* 10b8291e mov eax, dword ptr [0x10b86ed8] */
  EAX = (r32((uint32_t)(0x10b86ed8)));
  /* 10b82923 mov dword ptr [0x10b869a0], esi */
  w32((uint32_t)(0x10b869a0), (ESI));
  /* 10b82929 mov edi, esi */
  EDI = (ESI);
  /* 10b8292b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b8292d je 0x10b82931 */
  if (C.zf) goto L_10b82931;
  /* 10b8292f mov edi, eax */
  EDI = (EAX);
L_10b82931:;
  /* 10b82931 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b82934 push eax */
  push32((uint32_t)(EAX));
  /* 10b82935 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10b82938 push eax */
  push32((uint32_t)(EAX));
  /* 10b82939 push ebx */
  push32((uint32_t)(EBX));
  /* 10b8293a push ebx */
  push32((uint32_t)(EBX));
  /* 10b8293b push edi */
  push32((uint32_t)(EDI));
  /* 10b8293c call 0x10b8298e */
  push32(0x10b82941u); f_10b8298e();
  /* 10b82941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b82944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b82947 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10b8294a push eax */
  push32((uint32_t)(EAX));
  /* 10b8294b call 0x10b83091 */
  push32(0x10b82950u); f_10b83091();
  /* 10b82950 mov esi, eax */
  ESI = (EAX);
  /* 10b82952 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82955 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82957 jne 0x10b82961 */
  if (!C.zf) goto L_10b82961;
  /* 10b82959 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b8295b call 0x10b823b6 */
  push32(0x10b82960u); f_10b823b6();
  /* 10b82960 pop ecx */
  ECX = (pop32());
L_10b82961:;
  /* 10b82961 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b82964 push eax */
  push32((uint32_t)(EAX));
  /* 10b82965 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10b82968 push eax */
  push32((uint32_t)(EAX));
  /* 10b82969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b8296c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10b8296f push eax */
  push32((uint32_t)(EAX));
  /* 10b82970 push esi */
  push32((uint32_t)(ESI));
  /* 10b82971 push edi */
  push32((uint32_t)(EDI));
  /* 10b82972 call 0x10b8298e */
  push32(0x10b82977u); f_10b8298e();
  /* 10b82977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b8297a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8297d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b8297e mov dword ptr [0x10b86988], esi */
  w32((uint32_t)(0x10b86988), (ESI));
  /* 10b82984 pop edi */
  EDI = (pop32());
  /* 10b82985 pop esi */
  ESI = (pop32());
  /* 10b82986 mov dword ptr [0x10b86984], eax */
  w32((uint32_t)(0x10b86984), (EAX));
  /* 10b8298b pop ebx */
  EBX = (pop32());
  /* 10b8298c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b8298d ret  */
  ESPCHK(0x10b828f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000298e @ 0x10b8298e (436 bytes, 187 insns) */
void f_10b8298e(void) {
  FTRACE(0x10b8298eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b8298e push ebp */
  push32((uint32_t)(EBP));
  /* 10b8298f mov ebp, esp */
  EBP = (ESP);
  /* 10b82991 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b82994 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b82997 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82998 push esi */
  push32((uint32_t)(ESI));
  /* 10b82999 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10b8299c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10b8299f push edi */
  push32((uint32_t)(EDI));
  /* 10b829a0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b829a3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10b829a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b829ac test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b829ae je 0x10b829b8 */
  if (C.zf) goto L_10b829b8;
  /* 10b829b0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10b829b2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b829b5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10b829b8:;
  /* 10b829b8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b829bb jne 0x10b82a01 */
  if (!C.zf) goto L_10b82a01;
L_10b829bd:;
  /* 10b829bd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b829c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b829c1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b829c4 je 0x10b829ef */
  if (C.zf) goto L_10b829ef;
  /* 10b829c6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b829c8 je 0x10b829ef */
  if (C.zf) goto L_10b829ef;
  /* 10b829ca movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10b829cd test byte ptr [edx + 0x10b86ca1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10b86ca1)))&(0x4u); fl_logic(_r,8); }
  /* 10b829d4 je 0x10b829e2 */
  if (C.zf) goto L_10b829e2;
  /* 10b829d6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b829d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b829da je 0x10b829e2 */
  if (C.zf) goto L_10b829e2;
  /* 10b829dc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b829de mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b829e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b829e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b829e2:;
  /* 10b829e2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b829e4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b829e6 je 0x10b829bd */
  if (C.zf) goto L_10b829bd;
  /* 10b829e8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b829ea mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b829ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b829ed jmp 0x10b829bd */
  goto L_10b829bd;
L_10b829ef:;
  /* 10b829ef inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b829f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b829f3 je 0x10b829f9 */
  if (C.zf) goto L_10b829f9;
  /* 10b829f5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10b829f8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b829f9:;
  /* 10b829f9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b829fc jne 0x10b82a44 */
  if (!C.zf) goto L_10b82a44;
  /* 10b829fe inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b829ff jmp 0x10b82a44 */
  goto L_10b82a44;
L_10b82a01:;
  /* 10b82a01 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b82a03 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b82a05 je 0x10b82a0c */
  if (C.zf) goto L_10b82a0c;
  /* 10b82a07 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b82a09 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b82a0b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b82a0c:;
  /* 10b82a0c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b82a0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82a0f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10b82a12 test byte ptr [ebx + 0x10b86ca1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10b86ca1)))&(0x4u); fl_logic(_r,8); }
  /* 10b82a19 je 0x10b82a27 */
  if (C.zf) goto L_10b82a27;
  /* 10b82a1b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b82a1d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b82a1f je 0x10b82a26 */
  if (C.zf) goto L_10b82a26;
  /* 10b82a21 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10b82a23 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10b82a25 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b82a26:;
  /* 10b82a26 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b82a27:;
  /* 10b82a27 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82a2a je 0x10b82a35 */
  if (C.zf) goto L_10b82a35;
  /* 10b82a2c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b82a2e je 0x10b82a39 */
  if (C.zf) goto L_10b82a39;
  /* 10b82a30 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82a33 jne 0x10b82a01 */
  if (!C.zf) goto L_10b82a01;
L_10b82a35:;
  /* 10b82a35 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b82a37 jne 0x10b82a3c */
  if (!C.zf) goto L_10b82a3c;
L_10b82a39:;
  /* 10b82a39 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b82a3a jmp 0x10b82a44 */
  goto L_10b82a44;
L_10b82a3c:;
  /* 10b82a3c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b82a3e je 0x10b82a44 */
  if (C.zf) goto L_10b82a44;
  /* 10b82a40 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10b82a44:;
  /* 10b82a44 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10b82a48:;
  /* 10b82a48 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82a4b je 0x10b82b31 */
  if (C.zf) goto L_10b82b31;
L_10b82a51:;
  /* 10b82a51 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b82a53 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82a56 je 0x10b82a5d */
  if (C.zf) goto L_10b82a5d;
  /* 10b82a58 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82a5b jne 0x10b82a60 */
  if (!C.zf) goto L_10b82a60;
L_10b82a5d:;
  /* 10b82a5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82a5e jmp 0x10b82a51 */
  goto L_10b82a51;
L_10b82a60:;
  /* 10b82a60 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82a63 je 0x10b82b31 */
  if (C.zf) goto L_10b82b31;
  /* 10b82a69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b82a6b je 0x10b82a75 */
  if (C.zf) goto L_10b82a75;
  /* 10b82a6d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10b82a6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82a72 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10b82a75:;
  /* 10b82a75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b82a78 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10b82a7a:;
  /* 10b82a7a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10b82a81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10b82a83:;
  /* 10b82a83 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82a86 jne 0x10b82a8c */
  if (!C.zf) goto L_10b82a8c;
  /* 10b82a88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82a89 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b82a8a jmp 0x10b82a83 */
  goto L_10b82a83;
L_10b82a8c:;
  /* 10b82a8c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82a8f jne 0x10b82abd */
  if (!C.zf) goto L_10b82abd;
  /* 10b82a91 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10b82a94 jne 0x10b82abb */
  if (!C.zf) goto L_10b82abb;
  /* 10b82a96 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b82a98 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82a9b je 0x10b82aaa */
  if (C.zf) goto L_10b82aaa;
  /* 10b82a9d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82aa1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10b82aa4 jne 0x10b82aaa */
  if (!C.zf) goto L_10b82aaa;
  /* 10b82aa6 mov eax, edx */
  EAX = (EDX);
  /* 10b82aa8 jmp 0x10b82aad */
  goto L_10b82aad;
L_10b82aaa:;
  /* 10b82aaa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10b82aad:;
  /* 10b82aad mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b82ab0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b82ab2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82ab5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10b82ab8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10b82abb:;
  /* 10b82abb shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10b82abd:;
  /* 10b82abd mov edx, ebx */
  EDX = (EBX);
  /* 10b82abf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b82ac0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b82ac2 je 0x10b82ad2 */
  if (C.zf) goto L_10b82ad2;
  /* 10b82ac4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10b82ac5:;
  /* 10b82ac5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b82ac7 je 0x10b82acd */
  if (C.zf) goto L_10b82acd;
  /* 10b82ac9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10b82acc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b82acd:;
  /* 10b82acd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b82acf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b82ad0 jne 0x10b82ac5 */
  if (!C.zf) goto L_10b82ac5;
L_10b82ad2:;
  /* 10b82ad2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b82ad4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b82ad6 je 0x10b82b22 */
  if (C.zf) goto L_10b82b22;
  /* 10b82ad8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82adc jne 0x10b82ae8 */
  if (!C.zf) goto L_10b82ae8;
  /* 10b82ade cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82ae1 je 0x10b82b22 */
  if (C.zf) goto L_10b82b22;
  /* 10b82ae3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82ae6 je 0x10b82b22 */
  if (C.zf) goto L_10b82b22;
L_10b82ae8:;
  /* 10b82ae8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82aec je 0x10b82b1c */
  if (C.zf) goto L_10b82b1c;
  /* 10b82aee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b82af0 je 0x10b82b0b */
  if (C.zf) goto L_10b82b0b;
  /* 10b82af2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10b82af5 test byte ptr [ebx + 0x10b86ca1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10b86ca1)))&(0x4u); fl_logic(_r,8); }
  /* 10b82afc je 0x10b82b04 */
  if (C.zf) goto L_10b82b04;
  /* 10b82afe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b82b00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b82b01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82b02 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10b82b04:;
  /* 10b82b04 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b82b06 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b82b08 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b82b09 jmp 0x10b82b1a */
  goto L_10b82b1a;
L_10b82b0b:;
  /* 10b82b0b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10b82b0e test byte ptr [edx + 0x10b86ca1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10b86ca1)))&(0x4u); fl_logic(_r,8); }
  /* 10b82b15 je 0x10b82b1a */
  if (C.zf) goto L_10b82b1a;
  /* 10b82b17 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82b18 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10b82b1a:;
  /* 10b82b1a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10b82b1c:;
  /* 10b82b1c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82b1d jmp 0x10b82a7a */
  goto L_10b82a7a;
L_10b82b22:;
  /* 10b82b22 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b82b24 je 0x10b82b2a */
  if (C.zf) goto L_10b82b2a;
  /* 10b82b26 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10b82b29 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b82b2a:;
  /* 10b82b2a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b82b2c jmp 0x10b82a48 */
  goto L_10b82a48;
L_10b82b31:;
  /* 10b82b31 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b82b33 je 0x10b82b38 */
  if (C.zf) goto L_10b82b38;
  /* 10b82b35 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10b82b38:;
  /* 10b82b38 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b82b3b pop edi */
  EDI = (pop32());
  /* 10b82b3c pop esi */
  ESI = (pop32());
  /* 10b82b3d pop ebx */
  EBX = (pop32());
  /* 10b82b3e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10b82b40 pop ebp */
  EBP = (pop32());
  /* 10b82b41 ret  */
  ESPCHK(0x10b8298eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b42 @ 0x10b82b42 (306 bytes, 132 insns) */
void f_10b82b42(void) {
  FTRACE(0x10b82b42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10b82b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10b82b44 mov eax, dword ptr [0x10b86ab8] */
  EAX = (r32((uint32_t)(0x10b86ab8)));
  /* 10b82b49 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82b4a push ebp */
  push32((uint32_t)(EBP));
  /* 10b82b4b mov ebp, dword ptr [0x10b85060] */
  EBP = (r32((uint32_t)(0x10b85060)));
  /* 10b82b51 push esi */
  push32((uint32_t)(ESI));
  /* 10b82b52 push edi */
  push32((uint32_t)(EDI));
  /* 10b82b53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b82b55 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b82b57 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b82b59 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82b5b jne 0x10b82b90 */
  if (!C.zf) goto L_10b82b90;
  /* 10b82b5d call ebp */
  call_ind((uint32_t)(EBP), 0x10b82b5fu);
  /* 10b82b5f mov esi, eax */
  ESI = (EAX);
  /* 10b82b61 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82b63 je 0x10b82b71 */
  if (C.zf) goto L_10b82b71;
  /* 10b82b65 mov dword ptr [0x10b86ab8], 1 */
  w32((uint32_t)(0x10b86ab8), (0x1u));
  /* 10b82b6f jmp 0x10b82b99 */
  goto L_10b82b99;
L_10b82b71:;
  /* 10b82b71 call dword ptr [0x10b85064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85064))), 0x10b82b77u);
  /* 10b82b77 mov edi, eax */
  EDI = (EAX);
  /* 10b82b79 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82b7b je 0x10b82c6b */
  if (C.zf) goto L_10b82c6b;
  /* 10b82b81 mov dword ptr [0x10b86ab8], 2 */
  w32((uint32_t)(0x10b86ab8), (0x2u));
  /* 10b82b8b jmp 0x10b82c1f */
  goto L_10b82c1f;
L_10b82b90:;
  /* 10b82b90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82b93 jne 0x10b82c1a */
  if (!C.zf) goto L_10b82c1a;
L_10b82b99:;
  /* 10b82b99 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82b9b jne 0x10b82ba9 */
  if (!C.zf) goto L_10b82ba9;
  /* 10b82b9d call ebp */
  call_ind((uint32_t)(EBP), 0x10b82b9fu);
  /* 10b82b9f mov esi, eax */
  ESI = (EAX);
  /* 10b82ba1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82ba3 je 0x10b82c6b */
  if (C.zf) goto L_10b82c6b;
L_10b82ba9:;
  /* 10b82ba9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10b82bac mov eax, esi */
  EAX = (ESI);
  /* 10b82bae je 0x10b82bbe */
  if (C.zf) goto L_10b82bbe;
L_10b82bb0:;
  /* 10b82bb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82bb1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82bb2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10b82bb5 jne 0x10b82bb0 */
  if (!C.zf) goto L_10b82bb0;
  /* 10b82bb7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82bb8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82bb9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10b82bbc jne 0x10b82bb0 */
  if (!C.zf) goto L_10b82bb0;
L_10b82bbe:;
  /* 10b82bbe sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b82bc0 mov edi, dword ptr [0x10b85068] */
  EDI = (r32((uint32_t)(0x10b85068)));
  /* 10b82bc6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b82bc8 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bc9 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82bcb push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bcc push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bcd push eax */
  push32((uint32_t)(EAX));
  /* 10b82bce push esi */
  push32((uint32_t)(ESI));
  /* 10b82bcf push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bd0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bd1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10b82bd5 call edi */
  call_ind((uint32_t)(EDI), 0x10b82bd7u);
  /* 10b82bd7 mov ebp, eax */
  EBP = (EAX);
  /* 10b82bd9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82bdb je 0x10b82c0f */
  if (C.zf) goto L_10b82c0f;
  /* 10b82bdd push ebp */
  push32((uint32_t)(EBP));
  /* 10b82bde call 0x10b83091 */
  push32(0x10b82be3u); f_10b83091();
  /* 10b82be3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82be5 pop ecx */
  ECX = (pop32());
  /* 10b82be6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10b82bea je 0x10b82c0f */
  if (C.zf) goto L_10b82c0f;
  /* 10b82bec push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bed push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bee push ebp */
  push32((uint32_t)(EBP));
  /* 10b82bef push eax */
  push32((uint32_t)(EAX));
  /* 10b82bf0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10b82bf4 push esi */
  push32((uint32_t)(ESI));
  /* 10b82bf5 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82bf7 call edi */
  call_ind((uint32_t)(EDI), 0x10b82bf9u);
  /* 10b82bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82bfb jne 0x10b82c0b */
  if (!C.zf) goto L_10b82c0b;
  /* 10b82bfd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10b82c01 call 0x10b83049 */
  push32(0x10b82c06u); f_10b83049();
  /* 10b82c06 pop ecx */
  ECX = (pop32());
  /* 10b82c07 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10b82c0b:;
  /* 10b82c0b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10b82c0f:;
  /* 10b82c0f push esi */
  push32((uint32_t)(ESI));
  /* 10b82c10 call dword ptr [0x10b8506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8506c))), 0x10b82c16u);
  /* 10b82c16 mov eax, ebx */
  EAX = (EBX);
  /* 10b82c18 jmp 0x10b82c6d */
  goto L_10b82c6d;
L_10b82c1a:;
  /* 10b82c1a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82c1d jne 0x10b82c6b */
  if (!C.zf) goto L_10b82c6b;
L_10b82c1f:;
  /* 10b82c1f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82c21 jne 0x10b82c2f */
  if (!C.zf) goto L_10b82c2f;
  /* 10b82c23 call dword ptr [0x10b85064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85064))), 0x10b82c29u);
  /* 10b82c29 mov edi, eax */
  EDI = (EAX);
  /* 10b82c2b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82c2d je 0x10b82c6b */
  if (C.zf) goto L_10b82c6b;
L_10b82c2f:;
  /* 10b82c2f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82c31 mov eax, edi */
  EAX = (EDI);
  /* 10b82c33 je 0x10b82c3f */
  if (C.zf) goto L_10b82c3f;
L_10b82c35:;
  /* 10b82c35 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82c36 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82c38 jne 0x10b82c35 */
  if (!C.zf) goto L_10b82c35;
  /* 10b82c3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82c3b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b82c3d jne 0x10b82c35 */
  if (!C.zf) goto L_10b82c35;
L_10b82c3f:;
  /* 10b82c3f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b82c41 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82c42 mov ebp, eax */
  EBP = (EAX);
  /* 10b82c44 push ebp */
  push32((uint32_t)(EBP));
  /* 10b82c45 call 0x10b83091 */
  push32(0x10b82c4au); f_10b83091();
  /* 10b82c4a mov esi, eax */
  ESI = (EAX);
  /* 10b82c4c pop ecx */
  ECX = (pop32());
  /* 10b82c4d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82c4f jne 0x10b82c55 */
  if (!C.zf) goto L_10b82c55;
  /* 10b82c51 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b82c53 jmp 0x10b82c60 */
  goto L_10b82c60;
L_10b82c55:;
  /* 10b82c55 push ebp */
  push32((uint32_t)(EBP));
  /* 10b82c56 push edi */
  push32((uint32_t)(EDI));
  /* 10b82c57 push esi */
  push32((uint32_t)(ESI));
  /* 10b82c58 call 0x10b83680 */
  push32(0x10b82c5du); f_10b83680();
  /* 10b82c5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b82c60:;
  /* 10b82c60 push edi */
  push32((uint32_t)(EDI));
  /* 10b82c61 call dword ptr [0x10b85070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85070))), 0x10b82c67u);
  /* 10b82c67 mov eax, esi */
  EAX = (ESI);
  /* 10b82c69 jmp 0x10b82c6d */
  goto L_10b82c6d;
L_10b82c6b:;
  /* 10b82c6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b82c6d:;
  /* 10b82c6d pop edi */
  EDI = (pop32());
  /* 10b82c6e pop esi */
  ESI = (pop32());
  /* 10b82c6f pop ebp */
  EBP = (pop32());
  /* 10b82c70 pop ebx */
  EBX = (pop32());
  /* 10b82c71 pop ecx */
  ECX = (pop32());
  /* 10b82c72 pop ecx */
  ECX = (pop32());
  /* 10b82c73 ret  */
  ESPCHK(0x10b82b42u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c74 @ 0x10b82c74 (60 bytes, 20 insns) */
void f_10b82c74(void) {
  FTRACE(0x10b82c74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82c74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b82c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82c78 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82c7c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b82c81 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10b82c84 push eax */
  push32((uint32_t)(EAX));
  /* 10b82c85 call dword ptr [0x10b85058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85058))), 0x10b82c8bu);
  /* 10b82c8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82c8d mov dword ptr [0x10b86da8], eax */
  w32((uint32_t)(0x10b86da8), (EAX));
  /* 10b82c92 je 0x10b82ca9 */
  if (C.zf) goto L_10b82ca9;
  /* 10b82c94 call 0x10b839b5 */
  push32(0x10b82c99u); f_10b839b5();
  /* 10b82c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82c9b jne 0x10b82cac */
  if (!C.zf) goto L_10b82cac;
  /* 10b82c9d push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b82ca3 call dword ptr [0x10b8505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8505c))), 0x10b82ca9u);
L_10b82ca9:;
  /* 10b82ca9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b82cab ret  */
  ESPCHK(0x10b82c74u, _esp0);
  ESP += 4; return;
L_10b82cac:;
  /* 10b82cac push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82cae pop eax */
  EAX = (pop32());
  /* 10b82caf ret  */
  ESPCHK(0x10b82c74u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cb0 @ 0x10b82cb0 (117 bytes, 38 insns) */
void f_10b82cb0(void) {
  FTRACE(0x10b82cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82cb1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b82cb3 cmp dword ptr [0x10b86b70], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10b86b70))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82cb9 push ebp */
  push32((uint32_t)(EBP));
  /* 10b82cba mov ebp, dword ptr [0x10b85050] */
  EBP = (r32((uint32_t)(0x10b85050)));
  /* 10b82cc0 jle 0x10b82d06 */
  if ((C.zf||C.sf!=C.of)) goto L_10b82d06;
  /* 10b82cc2 mov eax, dword ptr [0x10b86b74] */
  EAX = (r32((uint32_t)(0x10b86b74)));
  /* 10b82cc7 push esi */
  push32((uint32_t)(ESI));
  /* 10b82cc8 push edi */
  push32((uint32_t)(EDI));
  /* 10b82cc9 mov edi, dword ptr [0x10b85054] */
  EDI = (r32((uint32_t)(0x10b85054)));
  /* 10b82ccf lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10b82cd2:;
  /* 10b82cd2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b82cd7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10b82cdc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b82cde call edi */
  call_ind((uint32_t)(EDI), 0x10b82ce0u);
  /* 10b82ce0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b82ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82ce7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b82ce9 call edi */
  call_ind((uint32_t)(EDI), 0x10b82cebu);
  /* 10b82ceb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10b82cee push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82cf0 push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b82cf6 call ebp */
  call_ind((uint32_t)(EBP), 0x10b82cf8u);
  /* 10b82cf8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82cfb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b82cfc cmp ebx, dword ptr [0x10b86b70] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10b86b70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82d02 jl 0x10b82cd2 */
  if ((C.sf!=C.of)) goto L_10b82cd2;
  /* 10b82d04 pop edi */
  EDI = (pop32());
  /* 10b82d05 pop esi */
  ESI = (pop32());
L_10b82d06:;
  /* 10b82d06 push dword ptr [0x10b86b74] */
  push32((uint32_t)(r32((uint32_t)(0x10b86b74))));
  /* 10b82d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82d0e push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b82d14 call ebp */
  call_ind((uint32_t)(EBP), 0x10b82d16u);
  /* 10b82d16 push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b82d1c call dword ptr [0x10b8505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8505c))), 0x10b82d22u);
  /* 10b82d22 pop ebp */
  EBP = (pop32());
  /* 10b82d23 pop ebx */
  EBX = (pop32());
  /* 10b82d24 ret  */
  ESPCHK(0x10b82cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d25 @ 0x10b82d25 (57 bytes, 18 insns) */
void f_10b82d25(void) {
  FTRACE(0x10b82d25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82d25 mov eax, dword ptr [0x10b86968] */
  EAX = (r32((uint32_t)(0x10b86968)));
  /* 10b82d2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82d2d je 0x10b82d3c */
  if (C.zf) goto L_10b82d3c;
  /* 10b82d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82d31 jne 0x10b82d5d */
  if (!C.zf) goto L_10b82d5d;
  /* 10b82d33 cmp dword ptr [0x10b8696c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b8696c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82d3a jne 0x10b82d5d */
  if (!C.zf) goto L_10b82d5d;
L_10b82d3c:;
  /* 10b82d3c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10b82d41 call 0x10b82d5e */
  push32(0x10b82d46u); f_10b82d5e();
  /* 10b82d46 mov eax, dword ptr [0x10b86abc] */
  EAX = (r32((uint32_t)(0x10b86abc)));
  /* 10b82d4b pop ecx */
  ECX = (pop32());
  /* 10b82d4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82d4e je 0x10b82d52 */
  if (C.zf) goto L_10b82d52;
  /* 10b82d50 call eax */
  call_ind((uint32_t)(EAX), 0x10b82d52u);
L_10b82d52:;
  /* 10b82d52 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b82d57 call 0x10b82d5e */
  push32(0x10b82d5cu); f_10b82d5e();
  /* 10b82d5c pop ecx */
  ECX = (pop32());
L_10b82d5d:;
  /* 10b82d5d ret  */
  ESPCHK(0x10b82d25u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d5e @ 0x10b82d5e (339 bytes, 100 insns) */
void f_10b82d5e(void) {
  FTRACE(0x10b82d5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82d5e push ebp */
  push32((uint32_t)(EBP));
  /* 10b82d5f mov ebp, esp */
  EBP = (ESP);
  /* 10b82d61 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b82d67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b82d6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b82d6c mov eax, 0x10b86498 */
  EAX = (0x10b86498u);
L_10b82d71:;
  /* 10b82d71 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82d73 je 0x10b82d80 */
  if (C.zf) goto L_10b82d80;
  /* 10b82d75 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82d78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b82d79 cmp eax, 0x10b86528 */
  { uint32_t _a=(EAX),_b=(0x10b86528u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82d7e jl 0x10b82d71 */
  if ((C.sf!=C.of)) goto L_10b82d71;
L_10b82d80:;
  /* 10b82d80 push esi */
  push32((uint32_t)(ESI));
  /* 10b82d81 mov esi, ecx */
  ESI = (ECX);
  /* 10b82d83 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10b82d86 cmp edx, dword ptr [esi + 0x10b86498] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10b86498))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82d8c jne 0x10b82eae */
  if (!C.zf) goto L_10b82eae;
  /* 10b82d92 mov eax, dword ptr [0x10b86968] */
  EAX = (r32((uint32_t)(0x10b86968)));
  /* 10b82d97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82d9a je 0x10b82e88 */
  if (C.zf) goto L_10b82e88;
  /* 10b82da0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82da2 jne 0x10b82db1 */
  if (!C.zf) goto L_10b82db1;
  /* 10b82da4 cmp dword ptr [0x10b8696c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b8696c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82dab je 0x10b82e88 */
  if (C.zf) goto L_10b82e88;
L_10b82db1:;
  /* 10b82db1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82db7 je 0x10b82eae */
  if (C.zf) goto L_10b82eae;
  /* 10b82dbd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b82dc3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b82dc8 push eax */
  push32((uint32_t)(EAX));
  /* 10b82dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82dcb call dword ptr [0x10b85074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85074))), 0x10b82dd1u);
  /* 10b82dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82dd3 jne 0x10b82de8 */
  if (!C.zf) goto L_10b82de8;
  /* 10b82dd5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b82ddb push 0x10b85420 */
  push32((uint32_t)(0x10b85420u));
  /* 10b82de0 push eax */
  push32((uint32_t)(EAX));
  /* 10b82de1 call 0x10b83120 */
  push32(0x10b82de6u); f_10b83120();
  /* 10b82de6 pop ecx */
  ECX = (pop32());
  /* 10b82de7 pop ecx */
  ECX = (pop32());
L_10b82de8:;
  /* 10b82de8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b82dee push edi */
  push32((uint32_t)(EDI));
  /* 10b82def push eax */
  push32((uint32_t)(EAX));
  /* 10b82df0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10b82df6 call 0x10b83210 */
  push32(0x10b82dfbu); f_10b83210();
  /* 10b82dfb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b82dfc pop ecx */
  ECX = (pop32());
  /* 10b82dfd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82e00 jbe 0x10b82e2b */
  if ((C.cf||C.zf)) goto L_10b82e2b;
  /* 10b82e02 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b82e08 push eax */
  push32((uint32_t)(EAX));
  /* 10b82e09 call 0x10b83210 */
  push32(0x10b82e0eu); f_10b83210();
  /* 10b82e0e mov edi, eax */
  EDI = (EAX);
  /* 10b82e10 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b82e16 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b82e19 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b82e1b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82e1d push 0x10b8541c */
  push32((uint32_t)(0x10b8541cu));
  /* 10b82e22 push edi */
  push32((uint32_t)(EDI));
  /* 10b82e23 call 0x10b84290 */
  push32(0x10b82e28u); f_10b84290();
  /* 10b82e28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b82e2b:;
  /* 10b82e2b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b82e31 push 0x10b85400 */
  push32((uint32_t)(0x10b85400u));
  /* 10b82e36 push eax */
  push32((uint32_t)(EAX));
  /* 10b82e37 call 0x10b83120 */
  push32(0x10b82e3cu); f_10b83120();
  /* 10b82e3c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b82e42 push edi */
  push32((uint32_t)(EDI));
  /* 10b82e43 push eax */
  push32((uint32_t)(EAX));
  /* 10b82e44 call 0x10b83130 */
  push32(0x10b82e49u); f_10b83130();
  /* 10b82e49 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b82e4f push 0x10b853fc */
  push32((uint32_t)(0x10b853fcu));
  /* 10b82e54 push eax */
  push32((uint32_t)(EAX));
  /* 10b82e55 call 0x10b83130 */
  push32(0x10b82e5au); f_10b83130();
  /* 10b82e5a push dword ptr [esi + 0x10b8649c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10b8649c))));
  /* 10b82e60 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b82e66 push eax */
  push32((uint32_t)(EAX));
  /* 10b82e67 call 0x10b83130 */
  push32(0x10b82e6cu); f_10b83130();
  /* 10b82e6c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10b82e71 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b82e77 push 0x10b853d4 */
  push32((uint32_t)(0x10b853d4u));
  /* 10b82e7c push eax */
  push32((uint32_t)(EAX));
  /* 10b82e7d call 0x10b841fe */
  push32(0x10b82e82u); f_10b841fe();
  /* 10b82e82 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82e85 pop edi */
  EDI = (pop32());
  /* 10b82e86 jmp 0x10b82eae */
  goto L_10b82eae;
L_10b82e88:;
  /* 10b82e88 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10b82e8b lea esi, [esi + 0x10b8649c] */
  ESI = ((uint32_t)(ESI + 0x10b8649c));
  /* 10b82e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b82e93 push eax */
  push32((uint32_t)(EAX));
  /* 10b82e94 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b82e96 call 0x10b83210 */
  push32(0x10b82e9bu); f_10b83210();
  /* 10b82e9b pop ecx */
  ECX = (pop32());
  /* 10b82e9c push eax */
  push32((uint32_t)(EAX));
  /* 10b82e9d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b82e9f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b82ea1 call dword ptr [0x10b85084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85084))), 0x10b82ea7u);
  /* 10b82ea7 push eax */
  push32((uint32_t)(EAX));
  /* 10b82ea8 call dword ptr [0x10b8504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8504c))), 0x10b82eaeu);
L_10b82eae:;
  /* 10b82eae pop esi */
  ESI = (pop32());
  /* 10b82eaf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b82eb0 ret  */
  ESPCHK(0x10b82d5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002eb1 @ 0x10b82eb1 (41 bytes, 12 insns) */
void f_10b82eb1(void) {
  FTRACE(0x10b82eb1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82eb1 push esi */
  push32((uint32_t)(ESI));
  /* 10b82eb2 mov esi, dword ptr [0x10b85048] */
  ESI = (r32((uint32_t)(0x10b85048)));
  /* 10b82eb8 push dword ptr [0x10b8656c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8656c))));
  /* 10b82ebe call esi */
  call_ind((uint32_t)(ESI), 0x10b82ec0u);
  /* 10b82ec0 push dword ptr [0x10b8655c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8655c))));
  /* 10b82ec6 call esi */
  call_ind((uint32_t)(ESI), 0x10b82ec8u);
  /* 10b82ec8 push dword ptr [0x10b8654c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8654c))));
  /* 10b82ece call esi */
  call_ind((uint32_t)(ESI), 0x10b82ed0u);
  /* 10b82ed0 push dword ptr [0x10b8652c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8652c))));
  /* 10b82ed6 call esi */
  call_ind((uint32_t)(ESI), 0x10b82ed8u);
  /* 10b82ed8 pop esi */
  ESI = (pop32());
  /* 10b82ed9 ret  */
  ESPCHK(0x10b82eb1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eda @ 0x10b82eda (108 bytes, 34 insns) */
void f_10b82eda(void) {
  FTRACE(0x10b82edau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82eda push esi */
  push32((uint32_t)(ESI));
  /* 10b82edb push edi */
  push32((uint32_t)(EDI));
  /* 10b82edc mov edi, dword ptr [0x10b85078] */
  EDI = (r32((uint32_t)(0x10b85078)));
  /* 10b82ee2 mov esi, 0x10b86528 */
  ESI = (0x10b86528u);
L_10b82ee7:;
  /* 10b82ee7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b82ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b82eeb je 0x10b82f18 */
  if (C.zf) goto L_10b82f18;
  /* 10b82eed cmp esi, 0x10b8656c */
  { uint32_t _a=(ESI),_b=(0x10b8656cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82ef3 je 0x10b82f18 */
  if (C.zf) goto L_10b82f18;
  /* 10b82ef5 cmp esi, 0x10b8655c */
  { uint32_t _a=(ESI),_b=(0x10b8655cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82efb je 0x10b82f18 */
  if (C.zf) goto L_10b82f18;
  /* 10b82efd cmp esi, 0x10b8654c */
  { uint32_t _a=(ESI),_b=(0x10b8654cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82f03 je 0x10b82f18 */
  if (C.zf) goto L_10b82f18;
  /* 10b82f05 cmp esi, 0x10b8652c */
  { uint32_t _a=(ESI),_b=(0x10b8652cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82f0b je 0x10b82f18 */
  if (C.zf) goto L_10b82f18;
  /* 10b82f0d push eax */
  push32((uint32_t)(EAX));
  /* 10b82f0e call edi */
  call_ind((uint32_t)(EDI), 0x10b82f10u);
  /* 10b82f10 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b82f12 call 0x10b83049 */
  push32(0x10b82f17u); f_10b83049();
  /* 10b82f17 pop ecx */
  ECX = (pop32());
L_10b82f18:;
  /* 10b82f18 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82f1b cmp esi, 0x10b865e8 */
  { uint32_t _a=(ESI),_b=(0x10b865e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82f21 jl 0x10b82ee7 */
  if ((C.sf!=C.of)) goto L_10b82ee7;
  /* 10b82f23 push dword ptr [0x10b8654c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8654c))));
  /* 10b82f29 call edi */
  call_ind((uint32_t)(EDI), 0x10b82f2bu);
  /* 10b82f2b push dword ptr [0x10b8655c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8655c))));
  /* 10b82f31 call edi */
  call_ind((uint32_t)(EDI), 0x10b82f33u);
  /* 10b82f33 push dword ptr [0x10b8656c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8656c))));
  /* 10b82f39 call edi */
  call_ind((uint32_t)(EDI), 0x10b82f3bu);
  /* 10b82f3b push dword ptr [0x10b8652c] */
  push32((uint32_t)(r32((uint32_t)(0x10b8652c))));
  /* 10b82f41 call edi */
  call_ind((uint32_t)(EDI), 0x10b82f43u);
  /* 10b82f43 pop edi */
  EDI = (pop32());
  /* 10b82f44 pop esi */
  ESI = (pop32());
  /* 10b82f45 ret  */
  ESPCHK(0x10b82edau, _esp0);
  ESP += 4; return;
}

/* FUN_10002f46 @ 0x10b82f46 (97 bytes, 37 insns) */
void f_10b82f46(void) {
  FTRACE(0x10b82f46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82f46 push ebp */
  push32((uint32_t)(EBP));
  /* 10b82f47 mov ebp, esp */
  EBP = (ESP);
  /* 10b82f49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b82f4c push esi */
  push32((uint32_t)(ESI));
  /* 10b82f4d cmp dword ptr [eax*4 + 0x10b86528], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10b86528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82f55 lea esi, [eax*4 + 0x10b86528] */
  ESI = ((uint32_t)(EAX*4 + 0x10b86528));
  /* 10b82f5c jne 0x10b82f9c */
  if (!C.zf) goto L_10b82f9c;
  /* 10b82f5e push edi */
  push32((uint32_t)(EDI));
  /* 10b82f5f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b82f61 call 0x10b83091 */
  push32(0x10b82f66u); f_10b83091();
  /* 10b82f66 mov edi, eax */
  EDI = (EAX);
  /* 10b82f68 pop ecx */
  ECX = (pop32());
  /* 10b82f69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b82f6b jne 0x10b82f75 */
  if (!C.zf) goto L_10b82f75;
  /* 10b82f6d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b82f6f call 0x10b823b6 */
  push32(0x10b82f74u); f_10b823b6();
  /* 10b82f74 pop ecx */
  ECX = (pop32());
L_10b82f75:;
  /* 10b82f75 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b82f77 call 0x10b82f46 */
  push32(0x10b82f7cu); f_10b82f46();
  /* 10b82f7c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82f7f pop ecx */
  ECX = (pop32());
  /* 10b82f80 push edi */
  push32((uint32_t)(EDI));
  /* 10b82f81 jne 0x10b82f8d */
  if (!C.zf) goto L_10b82f8d;
  /* 10b82f83 call dword ptr [0x10b85048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85048))), 0x10b82f89u);
  /* 10b82f89 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10b82f8b jmp 0x10b82f93 */
  goto L_10b82f93;
L_10b82f8d:;
  /* 10b82f8d call 0x10b83049 */
  push32(0x10b82f92u); f_10b83049();
  /* 10b82f92 pop ecx */
  ECX = (pop32());
L_10b82f93:;
  /* 10b82f93 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b82f95 call 0x10b82fa7 */
  push32(0x10b82f9au); f_10b82fa7();
  /* 10b82f9a pop ecx */
  ECX = (pop32());
  /* 10b82f9b pop edi */
  EDI = (pop32());
L_10b82f9c:;
  /* 10b82f9c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b82f9e call dword ptr [0x10b85044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85044))), 0x10b82fa4u);
  /* 10b82fa4 pop esi */
  ESI = (pop32());
  /* 10b82fa5 pop ebp */
  EBP = (pop32());
  /* 10b82fa6 ret  */
  ESPCHK(0x10b82f46u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fa7 @ 0x10b82fa7 (21 bytes, 7 insns) */
void f_10b82fa7(void) {
  FTRACE(0x10b82fa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82fa7 push ebp */
  push32((uint32_t)(EBP));
  /* 10b82fa8 mov ebp, esp */
  EBP = (ESP);
  /* 10b82faa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b82fad push dword ptr [eax*4 + 0x10b86528] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10b86528))));
  /* 10b82fb4 call dword ptr [0x10b85040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85040))), 0x10b82fbau);
  /* 10b82fba pop ebp */
  EBP = (pop32());
  /* 10b82fbb ret  */
  ESPCHK(0x10b82fa7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fbc @ 0x10b82fbc (141 bytes, 56 insns) */
void f_10b82fbc(void) {
  FTRACE(0x10b82fbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b82fbc push ebx */
  push32((uint32_t)(EBX));
  /* 10b82fbd push esi */
  push32((uint32_t)(ESI));
  /* 10b82fbe mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10b82fc2 push edi */
  push32((uint32_t)(EDI));
  /* 10b82fc3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b82fc8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82fcb mov ebx, esi */
  EBX = (ESI);
  /* 10b82fcd ja 0x10b82fdc */
  if ((!C.cf&&!C.zf)) goto L_10b82fdc;
  /* 10b82fcf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b82fd1 jne 0x10b82fd6 */
  if (!C.zf) goto L_10b82fd6;
  /* 10b82fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b82fd5 pop esi */
  ESI = (pop32());
L_10b82fd6:;
  /* 10b82fd6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b82fd9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10b82fdc:;
  /* 10b82fdc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b82fde cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82fe1 ja 0x10b8301d */
  if ((!C.cf&&!C.zf)) goto L_10b8301d;
  /* 10b82fe3 cmp ebx, dword ptr [0x10b86770] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10b86770))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b82fe9 ja 0x10b83008 */
  if ((!C.cf&&!C.zf)) goto L_10b83008;
  /* 10b82feb push 9 */
  push32((uint32_t)(0x9u));
  /* 10b82fed call 0x10b82f46 */
  push32(0x10b82ff2u); f_10b82f46();
  /* 10b82ff2 push ebx */
  push32((uint32_t)(EBX));
  /* 10b82ff3 call 0x10b83d49 */
  push32(0x10b82ff8u); f_10b83d49();
  /* 10b82ff8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b82ffa mov edi, eax */
  EDI = (EAX);
  /* 10b82ffc call 0x10b82fa7 */
  push32(0x10b83001u); f_10b82fa7();
  /* 10b83001 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83004 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b83006 jne 0x10b83033 */
  if (!C.zf) goto L_10b83033;
L_10b83008:;
  /* 10b83008 push esi */
  push32((uint32_t)(ESI));
  /* 10b83009 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b8300b push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b83011 call dword ptr [0x10b8503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8503c))), 0x10b83017u);
  /* 10b83017 mov edi, eax */
  EDI = (EAX);
  /* 10b83019 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b8301b jne 0x10b8303f */
  if (!C.zf) goto L_10b8303f;
L_10b8301d:;
  /* 10b8301d cmp dword ptr [0x10b86b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b86b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83024 je 0x10b8303f */
  if (C.zf) goto L_10b8303f;
  /* 10b83026 push esi */
  push32((uint32_t)(ESI));
  /* 10b83027 call 0x10b843e8 */
  push32(0x10b8302cu); f_10b843e8();
  /* 10b8302c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8302e pop ecx */
  ECX = (pop32());
  /* 10b8302f je 0x10b83045 */
  if (C.zf) goto L_10b83045;
  /* 10b83031 jmp 0x10b82fdc */
  goto L_10b82fdc;
L_10b83033:;
  /* 10b83033 push ebx */
  push32((uint32_t)(EBX));
  /* 10b83034 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b83036 push edi */
  push32((uint32_t)(EDI));
  /* 10b83037 call 0x10b84390 */
  push32(0x10b8303cu); f_10b84390();
  /* 10b8303c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b8303f:;
  /* 10b8303f mov eax, edi */
  EAX = (EDI);
L_10b83041:;
  /* 10b83041 pop edi */
  EDI = (pop32());
  /* 10b83042 pop esi */
  ESI = (pop32());
  /* 10b83043 pop ebx */
  EBX = (pop32());
  /* 10b83044 ret  */
  ESPCHK(0x10b82fbcu, _esp0);
  ESP += 4; return;
L_10b83045:;
  /* 10b83045 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b83047 jmp 0x10b83041 */
  goto L_10b83041;
}

/* FUN_10003049 @ 0x10b83049 (72 bytes, 29 insns) */
void f_10b83049(void) {
  FTRACE(0x10b83049u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83049 push esi */
  push32((uint32_t)(ESI));
  /* 10b8304a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b8304e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b83050 je 0x10b8308f */
  if (C.zf) goto L_10b8308f;
  /* 10b83052 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b83054 call 0x10b82f46 */
  push32(0x10b83059u); f_10b82f46();
  /* 10b83059 push esi */
  push32((uint32_t)(ESI));
  /* 10b8305a call 0x10b839f3 */
  push32(0x10b8305fu); f_10b839f3();
  /* 10b8305f pop ecx */
  ECX = (pop32());
  /* 10b83060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b83062 pop ecx */
  ECX = (pop32());
  /* 10b83063 je 0x10b83078 */
  if (C.zf) goto L_10b83078;
  /* 10b83065 push esi */
  push32((uint32_t)(ESI));
  /* 10b83066 push eax */
  push32((uint32_t)(EAX));
  /* 10b83067 call 0x10b83a1e */
  push32(0x10b8306cu); f_10b83a1e();
  /* 10b8306c push 9 */
  push32((uint32_t)(0x9u));
  /* 10b8306e call 0x10b82fa7 */
  push32(0x10b83073u); f_10b82fa7();
  /* 10b83073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83076 pop esi */
  ESI = (pop32());
  /* 10b83077 ret  */
  ESPCHK(0x10b83049u, _esp0);
  ESP += 4; return;
L_10b83078:;
  /* 10b83078 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b8307a call 0x10b82fa7 */
  push32(0x10b8307fu); f_10b82fa7();
  /* 10b8307f pop ecx */
  ECX = (pop32());
  /* 10b83080 push esi */
  push32((uint32_t)(ESI));
  /* 10b83081 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b83083 push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b83089 call dword ptr [0x10b85050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85050))), 0x10b8308fu);
L_10b8308f:;
  /* 10b8308f pop esi */
  ESI = (pop32());
  /* 10b83090 ret  */
  ESPCHK(0x10b83049u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10b83091 (18 bytes, 6 insns) */
void f_10b83091(void) {
  FTRACE(0x10b83091u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83091 push dword ptr [0x10b86b34] */
  push32((uint32_t)(r32((uint32_t)(0x10b86b34))));
  /* 10b83097 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10b8309b call 0x10b830a3 */
  push32(0x10b830a0u); f_10b830a3();
  /* 10b830a0 pop ecx */
  ECX = (pop32());
  /* 10b830a1 pop ecx */
  ECX = (pop32());
  /* 10b830a2 ret  */
  ESPCHK(0x10b83091u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10b830a3 (44 bytes, 16 insns) */
void f_10b830a3(void) {
  FTRACE(0x10b830a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b830a3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b830a8 ja 0x10b830cc */
  if ((!C.cf&&!C.zf)) goto L_10b830cc;
L_10b830aa:;
  /* 10b830aa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10b830ae call 0x10b830cf */
  push32(0x10b830b3u); f_10b830cf();
  /* 10b830b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b830b5 pop ecx */
  ECX = (pop32());
  /* 10b830b6 jne 0x10b830ce */
  if (!C.zf) goto L_10b830ce;
  /* 10b830b8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b830bc je 0x10b830ce */
  if (C.zf) goto L_10b830ce;
  /* 10b830be push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10b830c2 call 0x10b843e8 */
  push32(0x10b830c7u); f_10b843e8();
  /* 10b830c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b830c9 pop ecx */
  ECX = (pop32());
  /* 10b830ca jne 0x10b830aa */
  if (!C.zf) goto L_10b830aa;
L_10b830cc:;
  /* 10b830cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b830ce:;
  /* 10b830ce ret  */
  ESPCHK(0x10b830a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100030cf @ 0x10b830cf (78 bytes, 30 insns) */
void f_10b830cf(void) {
  FTRACE(0x10b830cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b830cf push esi */
  push32((uint32_t)(ESI));
  /* 10b830d0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b830d4 cmp esi, dword ptr [0x10b86770] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10b86770))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b830da push edi */
  push32((uint32_t)(EDI));
  /* 10b830db ja 0x10b830fe */
  if ((!C.cf&&!C.zf)) goto L_10b830fe;
  /* 10b830dd push 9 */
  push32((uint32_t)(0x9u));
  /* 10b830df call 0x10b82f46 */
  push32(0x10b830e4u); f_10b82f46();
  /* 10b830e4 push esi */
  push32((uint32_t)(ESI));
  /* 10b830e5 call 0x10b83d49 */
  push32(0x10b830eau); f_10b83d49();
  /* 10b830ea push 9 */
  push32((uint32_t)(0x9u));
  /* 10b830ec mov edi, eax */
  EDI = (EAX);
  /* 10b830ee call 0x10b82fa7 */
  push32(0x10b830f3u); f_10b82fa7();
  /* 10b830f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b830f6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b830f8 je 0x10b830fe */
  if (C.zf) goto L_10b830fe;
  /* 10b830fa mov eax, edi */
  EAX = (EDI);
  /* 10b830fc jmp 0x10b8311a */
  goto L_10b8311a;
L_10b830fe:;
  /* 10b830fe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b83100 jne 0x10b83105 */
  if (!C.zf) goto L_10b83105;
  /* 10b83102 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b83104 pop esi */
  ESI = (pop32());
L_10b83105:;
  /* 10b83105 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83108 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10b8310b push esi */
  push32((uint32_t)(ESI));
  /* 10b8310c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8310e push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b83114 call dword ptr [0x10b8503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8503c))), 0x10b8311au);
L_10b8311a:;
  /* 10b8311a pop edi */
  EDI = (pop32());
  /* 10b8311b pop esi */
  ESI = (pop32());
  /* 10b8311c ret  */
  ESPCHK(0x10b830cfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003120 @ 0x10b83120 (7 bytes, 3 insns) */
void f_10b83120(void) {
  FTRACE(0x10b83120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83120 push edi */
  push32((uint32_t)(EDI));
  /* 10b83121 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b83125 jmp 0x10b83191 */
  jmp_ind(0x10b83191u); return;
}

/* FUN_10003130 @ 0x10b83130 (224 bytes, 84 insns) */
void f_10b83130(void) {
  FTRACE(0x10b83130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83130 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b83134 push edi */
  push32((uint32_t)(EDI));
  /* 10b83135 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b8313b je 0x10b8314c */
  if (C.zf) goto L_10b8314c;
L_10b8313d:;
  /* 10b8313d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10b8313f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b83140 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b83142 je 0x10b8317f */
  if (C.zf) goto L_10b8317f;
  /* 10b83144 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b8314a jne 0x10b8313d */
  if (!C.zf) goto L_10b8313d;
L_10b8314c:;
  /* 10b8314c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b8314e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b83153 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83155 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b83158 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b8315a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8315d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b83162 je 0x10b8314c */
  if (C.zf) goto L_10b8314c;
  /* 10b83164 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b83167 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b83169 je 0x10b8318e */
  if (C.zf) goto L_10b8318e;
  /* 10b8316b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b8316d je 0x10b83189 */
  if (C.zf) goto L_10b83189;
  /* 10b8316f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b83174 je 0x10b83184 */
  if (C.zf) goto L_10b83184;
  /* 10b83176 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b8317b je 0x10b8317f */
  if (C.zf) goto L_10b8317f;
  /* 10b8317d jmp 0x10b8314c */
  goto L_10b8314c;
L_10b8317f:;
  /* 10b8317f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10b83182 jmp 0x10b83191 */
  goto L_10b83191;
L_10b83184:;
  /* 10b83184 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10b83187 jmp 0x10b83191 */
  goto L_10b83191;
L_10b83189:;
  /* 10b83189 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10b8318c jmp 0x10b83191 */
  goto L_10b83191;
L_10b8318e:;
  /* 10b8318e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10b83191:;
  /* 10b83191 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b83195 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b8319b je 0x10b831b6 */
  if (C.zf) goto L_10b831b6;
L_10b8319d:;
  /* 10b8319d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b8319f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b831a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b831a2 je 0x10b83208 */
  if (C.zf) goto L_10b83208;
  /* 10b831a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10b831a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b831a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b831ad jne 0x10b8319d */
  if (!C.zf) goto L_10b8319d;
  /* 10b831af jmp 0x10b831b6 */
  goto L_10b831b6;
L_10b831b1:;
  /* 10b831b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b831b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b831b6:;
  /* 10b831b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b831bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b831bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b831bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b831c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b831c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b831c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b831c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b831ce je 0x10b831b1 */
  if (C.zf) goto L_10b831b1;
  /* 10b831d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b831d2 je 0x10b83208 */
  if (C.zf) goto L_10b83208;
  /* 10b831d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10b831d6 je 0x10b831ff */
  if (C.zf) goto L_10b831ff;
  /* 10b831d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b831de je 0x10b831f2 */
  if (C.zf) goto L_10b831f2;
  /* 10b831e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b831e6 je 0x10b831ea */
  if (C.zf) goto L_10b831ea;
  /* 10b831e8 jmp 0x10b831b1 */
  goto L_10b831b1;
L_10b831ea:;
  /* 10b831ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b831ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b831f0 pop edi */
  EDI = (pop32());
  /* 10b831f1 ret  */
  ESPCHK(0x10b83130u, _esp0);
  ESP += 4; return;
L_10b831f2:;
  /* 10b831f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10b831f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b831f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10b831fd pop edi */
  EDI = (pop32());
  /* 10b831fe ret  */
  ESPCHK(0x10b83130u, _esp0);
  ESP += 4; return;
L_10b831ff:;
  /* 10b831ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10b83202 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b83206 pop edi */
  EDI = (pop32());
  /* 10b83207 ret  */
  ESPCHK(0x10b83130u, _esp0);
  ESP += 4; return;
L_10b83208:;
  /* 10b83208 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10b8320a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b8320e pop edi */
  EDI = (pop32());
  /* 10b8320f ret  */
  ESPCHK(0x10b83130u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10b83210 (123 bytes, 44 insns) */
void f_10b83210(void) {
  FTRACE(0x10b83210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83210 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b83214 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b8321a je 0x10b83230 */
  if (C.zf) goto L_10b83230;
L_10b8321c:;
  /* 10b8321c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10b8321e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b8321f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b83221 je 0x10b83263 */
  if (C.zf) goto L_10b83263;
  /* 10b83223 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b83229 jne 0x10b8321c */
  if (!C.zf) goto L_10b8321c;
  /* 10b8322b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b83230:;
  /* 10b83230 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b83232 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b83237 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83239 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b8323c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b8323e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83241 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b83246 je 0x10b83230 */
  if (C.zf) goto L_10b83230;
  /* 10b83248 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b8324b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b8324d je 0x10b83281 */
  if (C.zf) goto L_10b83281;
  /* 10b8324f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b83251 je 0x10b83277 */
  if (C.zf) goto L_10b83277;
  /* 10b83253 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b83258 je 0x10b8326d */
  if (C.zf) goto L_10b8326d;
  /* 10b8325a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b8325f je 0x10b83263 */
  if (C.zf) goto L_10b83263;
  /* 10b83261 jmp 0x10b83230 */
  goto L_10b83230;
L_10b83263:;
  /* 10b83263 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10b83266 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b8326a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b8326c ret  */
  ESPCHK(0x10b83210u, _esp0);
  ESP += 4; return;
L_10b8326d:;
  /* 10b8326d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10b83270 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b83274 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83276 ret  */
  ESPCHK(0x10b83210u, _esp0);
  ESP += 4; return;
L_10b83277:;
  /* 10b83277 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10b8327a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b8327e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83280 ret  */
  ESPCHK(0x10b83210u, _esp0);
  ESP += 4; return;
L_10b83281:;
  /* 10b83281 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10b83284 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b83288 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b8328a ret  */
  ESPCHK(0x10b83210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000328b @ 0x10b8328b (429 bytes, 143 insns) */
void f_10b8328b(void) {
  FTRACE(0x10b8328bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b8328b push ebp */
  push32((uint32_t)(EBP));
  /* 10b8328c mov ebp, esp */
  EBP = (ESP);
  /* 10b8328e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83291 push ebx */
  push32((uint32_t)(EBX));
  /* 10b83292 push esi */
  push32((uint32_t)(ESI));
  /* 10b83293 push edi */
  push32((uint32_t)(EDI));
  /* 10b83294 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b83296 call 0x10b82f46 */
  push32(0x10b8329bu); f_10b82f46();
  /* 10b8329b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b8329e call 0x10b83438 */
  push32(0x10b832a3u); f_10b83438();
  /* 10b832a3 mov ebx, eax */
  EBX = (EAX);
  /* 10b832a5 pop ecx */
  ECX = (pop32());
  /* 10b832a6 cmp ebx, dword ptr [0x10b86b78] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10b86b78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b832ac pop ecx */
  ECX = (pop32());
  /* 10b832ad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b832b0 jne 0x10b832b9 */
  if (!C.zf) goto L_10b832b9;
L_10b832b2:;
  /* 10b832b2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b832b4 jmp 0x10b83429 */
  goto L_10b83429;
L_10b832b9:;
  /* 10b832b9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b832bb je 0x10b83417 */
  if (C.zf) goto L_10b83417;
  /* 10b832c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b832c3 mov eax, 0x10b86678 */
  EAX = (0x10b86678u);
L_10b832c8:;
  /* 10b832c8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b832ca je 0x10b83340 */
  if (C.zf) goto L_10b83340;
  /* 10b832cc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b832cf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b832d0 cmp eax, 0x10b86768 */
  { uint32_t _a=(EAX),_b=(0x10b86768u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b832d5 jl 0x10b832c8 */
  if ((C.sf!=C.of)) goto L_10b832c8;
  /* 10b832d7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10b832da push eax */
  push32((uint32_t)(EAX));
  /* 10b832db push ebx */
  push32((uint32_t)(EBX));
  /* 10b832dc call dword ptr [0x10b85038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85038))), 0x10b832e2u);
  /* 10b832e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b832e4 pop esi */
  ESI = (pop32());
  /* 10b832e5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b832e7 jne 0x10b8340e */
  if (!C.zf) goto L_10b8340e;
  /* 10b832ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b832ef and dword ptr [0x10b86da4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b86da4)))&(0x0u); w32((uint32_t)(0x10b86da4), (_r)); fl_logic(_r,32); }
  /* 10b832f6 pop ecx */
  ECX = (pop32());
  /* 10b832f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b832f9 mov edi, 0x10b86ca0 */
  EDI = (0x10b86ca0u);
  /* 10b832fe cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83301 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b83303 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b83304 mov dword ptr [0x10b86b78], ebx */
  w32((uint32_t)(0x10b86b78), (EBX));
  /* 10b8330a jbe 0x10b833fb */
  if ((C.cf||C.zf)) goto L_10b833fb;
  /* 10b83310 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b83314 je 0x10b833d6 */
  if (C.zf) goto L_10b833d6;
  /* 10b8331a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10b8331d:;
  /* 10b8331d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b8331f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b83321 je 0x10b833d6 */
  if (C.zf) goto L_10b833d6;
  /* 10b83327 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10b8332b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10b8332e:;
  /* 10b8332e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83330 ja 0x10b833ca */
  if ((!C.cf&&!C.zf)) goto L_10b833ca;
  /* 10b83336 or byte ptr [eax + 0x10b86ca1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ca1)))|(0x4u); w8((uint32_t)(EAX + 0x10b86ca1), (_r)); fl_logic(_r,8); }
  /* 10b8333d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b8333e jmp 0x10b8332e */
  goto L_10b8332e;
L_10b83340:;
  /* 10b83340 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b83344 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b83346 pop ecx */
  ECX = (pop32());
  /* 10b83347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b83349 mov edi, 0x10b86ca0 */
  EDI = (0x10b86ca0u);
  /* 10b8334e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10b83351 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b83353 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10b83356 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b83357 lea ebx, [esi + 0x10b86688] */
  EBX = ((uint32_t)(ESI + 0x10b86688));
L_10b8335d:;
  /* 10b8335d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b83360 mov ecx, ebx */
  ECX = (EBX);
  /* 10b83362 je 0x10b83390 */
  if (C.zf) goto L_10b83390;
L_10b83364:;
  /* 10b83364 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b83367 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b83369 je 0x10b83390 */
  if (C.zf) goto L_10b83390;
  /* 10b8336b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10b8336e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10b83371 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83373 ja 0x10b83389 */
  if ((!C.cf&&!C.zf)) goto L_10b83389;
  /* 10b83375 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b83378 mov dl, byte ptr [edx + 0x10b86670] */
  DL = (r8((uint32_t)(EDX + 0x10b86670)));
L_10b8337e:;
  /* 10b8337e or byte ptr [eax + 0x10b86ca1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ca1)))|(DL); w8((uint32_t)(EAX + 0x10b86ca1), (_r)); fl_logic(_r,8); }
  /* 10b83384 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b83385 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83387 jbe 0x10b8337e */
  if ((C.cf||C.zf)) goto L_10b8337e;
L_10b83389:;
  /* 10b83389 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b8338a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b8338b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b8338e jne 0x10b83364 */
  if (!C.zf) goto L_10b83364;
L_10b83390:;
  /* 10b83390 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10b83393 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83396 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8339a jb 0x10b8335d */
  if (C.cf) goto L_10b8335d;
  /* 10b8339c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b8339f mov dword ptr [0x10b86b8c], 1 */
  w32((uint32_t)(0x10b86b8c), (0x1u));
  /* 10b833a9 push eax */
  push32((uint32_t)(EAX));
  /* 10b833aa mov dword ptr [0x10b86b78], eax */
  w32((uint32_t)(0x10b86b78), (EAX));
  /* 10b833af call 0x10b83482 */
  push32(0x10b833b4u); f_10b83482();
  /* 10b833b4 lea esi, [esi + 0x10b8667c] */
  ESI = ((uint32_t)(ESI + 0x10b8667c));
  /* 10b833ba mov edi, 0x10b86b80 */
  EDI = (0x10b86b80u);
  /* 10b833bf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b833c0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b833c1 pop ecx */
  ECX = (pop32());
  /* 10b833c2 mov dword ptr [0x10b86da4], eax */
  w32((uint32_t)(0x10b86da4), (EAX));
  /* 10b833c7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b833c8 jmp 0x10b8341c */
  goto L_10b8341c;
L_10b833ca:;
  /* 10b833ca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b833cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b833cc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b833d0 jne 0x10b8331d */
  if (!C.zf) goto L_10b8331d;
L_10b833d6:;
  /* 10b833d6 mov eax, esi */
  EAX = (ESI);
L_10b833d8:;
  /* 10b833d8 or byte ptr [eax + 0x10b86ca1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ca1)))|(0x8u); w8((uint32_t)(EAX + 0x10b86ca1), (_r)); fl_logic(_r,8); }
  /* 10b833df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b833e0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b833e5 jb 0x10b833d8 */
  if (C.cf) goto L_10b833d8;
  /* 10b833e7 push ebx */
  push32((uint32_t)(EBX));
  /* 10b833e8 call 0x10b83482 */
  push32(0x10b833edu); f_10b83482();
  /* 10b833ed pop ecx */
  ECX = (pop32());
  /* 10b833ee mov dword ptr [0x10b86da4], eax */
  w32((uint32_t)(0x10b86da4), (EAX));
  /* 10b833f3 mov dword ptr [0x10b86b8c], esi */
  w32((uint32_t)(0x10b86b8c), (ESI));
  /* 10b833f9 jmp 0x10b83402 */
  goto L_10b83402;
L_10b833fb:;
  /* 10b833fb and dword ptr [0x10b86b8c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b86b8c)))&(0x0u); w32((uint32_t)(0x10b86b8c), (_r)); fl_logic(_r,32); }
L_10b83402:;
  /* 10b83402 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b83404 mov edi, 0x10b86b80 */
  EDI = (0x10b86b80u);
  /* 10b83409 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b8340a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b8340b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b8340c jmp 0x10b8341c */
  goto L_10b8341c;
L_10b8340e:;
  /* 10b8340e cmp dword ptr [0x10b86b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b86b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83415 je 0x10b83426 */
  if (C.zf) goto L_10b83426;
L_10b83417:;
  /* 10b83417 call 0x10b834b5 */
  push32(0x10b8341cu); f_10b834b5();
L_10b8341c:;
  /* 10b8341c call 0x10b834de */
  push32(0x10b83421u); f_10b834de();
  /* 10b83421 jmp 0x10b832b2 */
  goto L_10b832b2;
L_10b83426:;
  /* 10b83426 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10b83429:;
  /* 10b83429 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b8342b call 0x10b82fa7 */
  push32(0x10b83430u); f_10b82fa7();
  /* 10b83430 pop ecx */
  ECX = (pop32());
  /* 10b83431 mov eax, esi */
  EAX = (ESI);
  /* 10b83433 pop edi */
  EDI = (pop32());
  /* 10b83434 pop esi */
  ESI = (pop32());
  /* 10b83435 pop ebx */
  EBX = (pop32());
  /* 10b83436 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b83437 ret  */
  ESPCHK(0x10b8328bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003438 @ 0x10b83438 (74 bytes, 15 insns) */
void f_10b83438(void) {
  FTRACE(0x10b83438u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83438 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b8343c and dword ptr [0x10b86b20], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b86b20)))&(0x0u); w32((uint32_t)(0x10b86b20), (_r)); fl_logic(_r,32); }
  /* 10b83443 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83446 jne 0x10b83458 */
  if (!C.zf) goto L_10b83458;
  /* 10b83448 mov dword ptr [0x10b86b20], 1 */
  w32((uint32_t)(0x10b86b20), (0x1u));
  /* 10b83452 jmp dword ptr [0x10b85030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b85030)))); return;
L_10b83458:;
  /* 10b83458 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8345b jne 0x10b8346d */
  if (!C.zf) goto L_10b8346d;
  /* 10b8345d mov dword ptr [0x10b86b20], 1 */
  w32((uint32_t)(0x10b86b20), (0x1u));
  /* 10b83467 jmp dword ptr [0x10b85034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b85034)))); return;
L_10b8346d:;
  /* 10b8346d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83470 jne 0x10b83481 */
  if (!C.zf) goto L_10b83481;
  /* 10b83472 mov eax, dword ptr [0x10b86b50] */
  EAX = (r32((uint32_t)(0x10b86b50)));
  /* 10b83477 mov dword ptr [0x10b86b20], 1 */
  w32((uint32_t)(0x10b86b20), (0x1u));
L_10b83481:;
  /* 10b83481 ret  */
  ESPCHK(0x10b83438u, _esp0);
  ESP += 4; return;
}

/* FUN_10003482 @ 0x10b83482 (51 bytes, 19 insns) */
void f_10b83482(void) {
  FTRACE(0x10b83482u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83482 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b83486 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b8348b je 0x10b834af */
  if (C.zf) goto L_10b834af;
  /* 10b8348d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83490 je 0x10b834a9 */
  if (C.zf) goto L_10b834a9;
  /* 10b83492 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83495 je 0x10b834a3 */
  if (C.zf) goto L_10b834a3;
  /* 10b83497 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b83498 je 0x10b8349d */
  if (C.zf) goto L_10b8349d;
  /* 10b8349a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b8349c ret  */
  ESPCHK(0x10b83482u, _esp0);
  ESP += 4; return;
L_10b8349d:;
  /* 10b8349d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10b834a2 ret  */
  ESPCHK(0x10b83482u, _esp0);
  ESP += 4; return;
L_10b834a3:;
  /* 10b834a3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10b834a8 ret  */
  ESPCHK(0x10b83482u, _esp0);
  ESP += 4; return;
L_10b834a9:;
  /* 10b834a9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10b834ae ret  */
  ESPCHK(0x10b83482u, _esp0);
  ESP += 4; return;
L_10b834af:;
  /* 10b834af mov eax, 0x411 */
  EAX = (0x411u);
  /* 10b834b4 ret  */
  ESPCHK(0x10b83482u, _esp0);
  ESP += 4; return;
}

/* FUN_100034b5 @ 0x10b834b5 (41 bytes, 17 insns) */
void f_10b834b5(void) {
  FTRACE(0x10b834b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b834b5 push edi */
  push32((uint32_t)(EDI));
  /* 10b834b6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b834b8 pop ecx */
  ECX = (pop32());
  /* 10b834b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b834bb mov edi, 0x10b86ca0 */
  EDI = (0x10b86ca0u);
  /* 10b834c0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b834c2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b834c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b834c5 mov edi, 0x10b86b80 */
  EDI = (0x10b86b80u);
  /* 10b834ca mov dword ptr [0x10b86b78], eax */
  w32((uint32_t)(0x10b86b78), (EAX));
  /* 10b834cf mov dword ptr [0x10b86b8c], eax */
  w32((uint32_t)(0x10b86b8c), (EAX));
  /* 10b834d4 mov dword ptr [0x10b86da4], eax */
  w32((uint32_t)(0x10b86da4), (EAX));
  /* 10b834d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b834da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b834db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b834dc pop edi */
  EDI = (pop32());
  /* 10b834dd ret  */
  ESPCHK(0x10b834b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100034de @ 0x10b834de (389 bytes, 124 insns) */
void f_10b834de(void) {
  FTRACE(0x10b834deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b834de push ebp */
  push32((uint32_t)(EBP));
  /* 10b834df mov ebp, esp */
  EBP = (ESP);
  /* 10b834e1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b834e7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10b834ea push esi */
  push32((uint32_t)(ESI));
  /* 10b834eb push eax */
  push32((uint32_t)(EAX));
  /* 10b834ec push dword ptr [0x10b86b78] */
  push32((uint32_t)(r32((uint32_t)(0x10b86b78))));
  /* 10b834f2 call dword ptr [0x10b85038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85038))), 0x10b834f8u);
  /* 10b834f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b834fb jne 0x10b83617 */
  if (!C.zf) goto L_10b83617;
  /* 10b83501 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b83503 mov esi, 0x100 */
  ESI = (0x100u);
L_10b83508:;
  /* 10b83508 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10b8350f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b83510 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83512 jb 0x10b83508 */
  if (C.cf) goto L_10b83508;
  /* 10b83514 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10b83517 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10b8351e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b83520 je 0x10b83559 */
  if (C.zf) goto L_10b83559;
  /* 10b83522 push ebx */
  push32((uint32_t)(EBX));
  /* 10b83523 push edi */
  push32((uint32_t)(EDI));
  /* 10b83524 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10b83527:;
  /* 10b83527 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10b8352a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10b8352d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8352f ja 0x10b8354e */
  if ((!C.cf&&!C.zf)) goto L_10b8354e;
  /* 10b83531 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83533 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10b8353a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b8353b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10b83540 mov ebx, ecx */
  EBX = (ECX);
  /* 10b83542 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b83545 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b83547 mov ecx, ebx */
  ECX = (EBX);
  /* 10b83549 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10b8354c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10b8354e:;
  /* 10b8354e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b8354f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b83550 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10b83553 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b83555 jne 0x10b83527 */
  if (!C.zf) goto L_10b83527;
  /* 10b83557 pop edi */
  EDI = (pop32());
  /* 10b83558 pop ebx */
  EBX = (pop32());
L_10b83559:;
  /* 10b83559 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8355b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10b83561 push dword ptr [0x10b86da4] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da4))));
  /* 10b83567 push dword ptr [0x10b86b78] */
  push32((uint32_t)(r32((uint32_t)(0x10b86b78))));
  /* 10b8356d push eax */
  push32((uint32_t)(EAX));
  /* 10b8356e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10b83574 push esi */
  push32((uint32_t)(ESI));
  /* 10b83575 push eax */
  push32((uint32_t)(EAX));
  /* 10b83576 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b83578 call 0x10b84652 */
  push32(0x10b8357du); f_10b84652();
  /* 10b8357d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b8357f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10b83585 push dword ptr [0x10b86b78] */
  push32((uint32_t)(r32((uint32_t)(0x10b86b78))));
  /* 10b8358b push esi */
  push32((uint32_t)(ESI));
  /* 10b8358c push eax */
  push32((uint32_t)(EAX));
  /* 10b8358d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10b83593 push esi */
  push32((uint32_t)(ESI));
  /* 10b83594 push eax */
  push32((uint32_t)(EAX));
  /* 10b83595 push esi */
  push32((uint32_t)(ESI));
  /* 10b83596 push dword ptr [0x10b86da4] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da4))));
  /* 10b8359c call 0x10b84403 */
  push32(0x10b835a1u); f_10b84403();
  /* 10b835a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b835a3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10b835a9 push dword ptr [0x10b86b78] */
  push32((uint32_t)(r32((uint32_t)(0x10b86b78))));
  /* 10b835af push esi */
  push32((uint32_t)(ESI));
  /* 10b835b0 push eax */
  push32((uint32_t)(EAX));
  /* 10b835b1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10b835b7 push esi */
  push32((uint32_t)(ESI));
  /* 10b835b8 push eax */
  push32((uint32_t)(EAX));
  /* 10b835b9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10b835be push dword ptr [0x10b86da4] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da4))));
  /* 10b835c4 call 0x10b84403 */
  push32(0x10b835c9u); f_10b84403();
  /* 10b835c9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b835cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b835ce lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10b835d4:;
  /* 10b835d4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10b835d7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10b835da je 0x10b835f2 */
  if (C.zf) goto L_10b835f2;
  /* 10b835dc or byte ptr [eax + 0x10b86ca1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ca1)))|(0x10u); w8((uint32_t)(EAX + 0x10b86ca1), (_r)); fl_logic(_r,8); }
  /* 10b835e3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10b835ea:;
  /* 10b835ea mov byte ptr [eax + 0x10b86ba0], dl */
  w8((uint32_t)(EAX + 0x10b86ba0), (DL));
  /* 10b835f0 jmp 0x10b8360e */
  goto L_10b8360e;
L_10b835f2:;
  /* 10b835f2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10b835f5 je 0x10b83607 */
  if (C.zf) goto L_10b83607;
  /* 10b835f7 or byte ptr [eax + 0x10b86ca1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ca1)))|(0x20u); w8((uint32_t)(EAX + 0x10b86ca1), (_r)); fl_logic(_r,8); }
  /* 10b835fe mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10b83605 jmp 0x10b835ea */
  goto L_10b835ea;
L_10b83607:;
  /* 10b83607 and byte ptr [eax + 0x10b86ba0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ba0)))&(0x0u); w8((uint32_t)(EAX + 0x10b86ba0), (_r)); fl_logic(_r,8); }
L_10b8360e:;
  /* 10b8360e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b8360f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b83610 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b83611 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83613 jb 0x10b835d4 */
  if (C.cf) goto L_10b835d4;
  /* 10b83615 jmp 0x10b83660 */
  goto L_10b83660;
L_10b83617:;
  /* 10b83617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b83619 mov esi, 0x100 */
  ESI = (0x100u);
L_10b8361e:;
  /* 10b8361e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83621 jb 0x10b8363c */
  if (C.cf) goto L_10b8363c;
  /* 10b83623 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83626 ja 0x10b8363c */
  if ((!C.cf&&!C.zf)) goto L_10b8363c;
  /* 10b83628 or byte ptr [eax + 0x10b86ca1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ca1)))|(0x10u); w8((uint32_t)(EAX + 0x10b86ca1), (_r)); fl_logic(_r,8); }
  /* 10b8362f mov cl, al */
  CL = (AL);
  /* 10b83631 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10b83634:;
  /* 10b83634 mov byte ptr [eax + 0x10b86ba0], cl */
  w8((uint32_t)(EAX + 0x10b86ba0), (CL));
  /* 10b8363a jmp 0x10b8365b */
  goto L_10b8365b;
L_10b8363c:;
  /* 10b8363c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8363f jb 0x10b83654 */
  if (C.cf) goto L_10b83654;
  /* 10b83641 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83644 ja 0x10b83654 */
  if ((!C.cf&&!C.zf)) goto L_10b83654;
  /* 10b83646 or byte ptr [eax + 0x10b86ca1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ca1)))|(0x20u); w8((uint32_t)(EAX + 0x10b86ca1), (_r)); fl_logic(_r,8); }
  /* 10b8364d mov cl, al */
  CL = (AL);
  /* 10b8364f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b83652 jmp 0x10b83634 */
  goto L_10b83634;
L_10b83654:;
  /* 10b83654 and byte ptr [eax + 0x10b86ba0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b86ba0)))&(0x0u); w8((uint32_t)(EAX + 0x10b86ba0), (_r)); fl_logic(_r,8); }
L_10b8365b:;
  /* 10b8365b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b8365c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8365e jb 0x10b8361e */
  if (C.cf) goto L_10b8361e;
L_10b83660:;
  /* 10b83660 pop esi */
  ESI = (pop32());
  /* 10b83661 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b83662 ret  */
  ESPCHK(0x10b834deu, _esp0);
  ESP += 4; return;
}

/* FUN_10003663 @ 0x10b83663 (28 bytes, 7 insns) */
void f_10b83663(void) {
  FTRACE(0x10b83663u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83663 cmp dword ptr [0x10b86ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b86ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8366a jne 0x10b8367e */
  if (!C.zf) goto L_10b8367e;
  /* 10b8366c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10b8366e call 0x10b8328b */
  push32(0x10b83673u); f_10b8328b();
  /* 10b83673 pop ecx */
  ECX = (pop32());
  /* 10b83674 mov dword ptr [0x10b86ec8], 1 */
  w32((uint32_t)(0x10b86ec8), (0x1u));
L_10b8367e:;
  /* 10b8367e ret  */
  ESPCHK(0x10b83663u, _esp0);
  ESP += 4; return;
}

/* FUN_10003680 @ 0x10b83680 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10b83680(void) {
  FTRACE(0x10b83680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83680 push ebp */
  push32((uint32_t)(EBP));
  /* 10b83681 mov ebp, esp */
  EBP = (ESP);
  /* 10b83683 push edi */
  push32((uint32_t)(EDI));
  /* 10b83684 push esi */
  push32((uint32_t)(ESI));
  /* 10b83685 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b83688 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b8368b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b8368e mov eax, ecx */
  EAX = (ECX);
  /* 10b83690 mov edx, ecx */
  EDX = (ECX);
  /* 10b83692 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83694 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83696 jbe 0x10b836a0 */
  if ((C.cf||C.zf)) goto L_10b836a0;
  /* 10b83698 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8369a jb 0x10b83818 */
  if (C.cf) goto L_10b83818;
L_10b836a0:;
  /* 10b836a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b836a6 jne 0x10b836bc */
  if (!C.zf) goto L_10b836bc;
  /* 10b836a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b836ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b836ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b836b1 jb 0x10b836dc */
  if (C.cf) goto L_10b836dc;
  /* 10b836b3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b836b5 jmp dword ptr [edx*4 + 0x10b837c8] */
  switch (EDX) {
    case 0: goto L_10b837d8;
    case 1: goto L_10b837e0;
    case 2: goto L_10b837ec;
    case 3: goto L_10b83800;
    default: x86_unimpl("switch@0x10b836b5 out of table"); return;
  }
L_10b836bc:;
  /* 10b836bc mov eax, edi */
  EAX = (EDI);
  /* 10b836be mov edx, 3 */
  EDX = (0x3u);
  /* 10b836c3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b836c6 jb 0x10b836d4 */
  if (C.cf) goto L_10b836d4;
  /* 10b836c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b836cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b836cd jmp dword ptr [eax*4 + 0x10b836e0] */
  switch (EAX) {
    case 1: goto L_10b836f0;
    case 2: goto L_10b8371c;
    case 3: goto L_10b83740;
    default: x86_unimpl("switch@0x10b836cd out of table"); return;
  }
L_10b836d4:;
  /* 10b836d4 jmp dword ptr [ecx*4 + 0x10b837d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10b837d8)))); return;
  /* 10b836db nop  */
  /* nop */
L_10b836dc:;
  /* 10b836dc jmp dword ptr [ecx*4 + 0x10b8375c] */
  switch (ECX) {
    case 0: goto L_10b837bf;
    case 1: goto L_10b837ac;
    case 2: goto L_10b837a4;
    case 3: goto L_10b8379c;
    case 4: goto L_10b83794;
    case 5: goto L_10b8378c;
    case 6: goto L_10b83784;
    case 7: goto L_10b8377c;
    default: x86_unimpl("switch@0x10b836dc out of table"); return;
  }
  /* 10b836e3 nop  */
  /* nop */
L_10b836f0:;
  /* 10b836f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b836f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b836f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b836f6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b836f9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b836fc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b836ff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b83702 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b83705 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83708 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8370b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8370e jb 0x10b836dc */
  if (C.cf) goto L_10b836dc;
  /* 10b83710 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b83712 jmp dword ptr [edx*4 + 0x10b837c8] */
  switch (EDX) {
    case 0: goto L_10b837d8;
    case 1: goto L_10b837e0;
    case 2: goto L_10b837ec;
    case 3: goto L_10b83800;
    default: x86_unimpl("switch@0x10b83712 out of table"); return;
  }
  /* 10b83719 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b8371c:;
  /* 10b8371c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b8371e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b83720 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b83722 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b83725 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b83728 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b8372b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8372e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83731 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83734 jb 0x10b836dc */
  if (C.cf) goto L_10b836dc;
  /* 10b83736 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b83738 jmp dword ptr [edx*4 + 0x10b837c8] */
  switch (EDX) {
    case 0: goto L_10b837d8;
    case 1: goto L_10b837e0;
    case 2: goto L_10b837ec;
    case 3: goto L_10b83800;
    default: x86_unimpl("switch@0x10b83738 out of table"); return;
  }
  /* 10b8373f nop  */
  /* nop */
L_10b83740:;
  /* 10b83740 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b83742 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b83744 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b83746 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b83747 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b8374a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b8374b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8374e jb 0x10b836dc */
  if (C.cf) goto L_10b836dc;
  /* 10b83750 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b83752 jmp dword ptr [edx*4 + 0x10b837c8] */
  switch (EDX) {
    case 0: goto L_10b837d8;
    case 1: goto L_10b837e0;
    case 2: goto L_10b837ec;
    case 3: goto L_10b83800;
    default: x86_unimpl("switch@0x10b83752 out of table"); return;
  }
  /* 10b83759 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b8377c:;
  /* 10b8377c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10b83780 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10b83784:;
  /* 10b83784 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10b83788 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10b8378c:;
  /* 10b8378c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10b83790 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10b83794:;
  /* 10b83794 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10b83798 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10b8379c:;
  /* 10b8379c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10b837a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10b837a4:;
  /* 10b837a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10b837a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10b837ac:;
  /* 10b837ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10b837b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10b837b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b837bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b837bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b837bf:;
  /* 10b837bf jmp dword ptr [edx*4 + 0x10b837c8] */
  switch (EDX) {
    case 0: goto L_10b837d8;
    case 1: goto L_10b837e0;
    case 2: goto L_10b837ec;
    case 3: goto L_10b83800;
    default: x86_unimpl("switch@0x10b837bf out of table"); return;
  }
  /* 10b837c6 mov edi, edi */
  EDI = (EDI);
L_10b837d8:;
  /* 10b837d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b837db pop esi */
  ESI = (pop32());
  /* 10b837dc pop edi */
  EDI = (pop32());
  /* 10b837dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b837de ret  */
  ESPCHK(0x10b83680u, _esp0);
  ESP += 4; return;
  /* 10b837df nop  */
  /* nop */
L_10b837e0:;
  /* 10b837e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b837e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b837e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b837e7 pop esi */
  ESI = (pop32());
  /* 10b837e8 pop edi */
  EDI = (pop32());
  /* 10b837e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b837ea ret  */
  ESPCHK(0x10b83680u, _esp0);
  ESP += 4; return;
  /* 10b837eb nop  */
  /* nop */
L_10b837ec:;
  /* 10b837ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b837ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b837f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b837f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b837f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b837f9 pop esi */
  ESI = (pop32());
  /* 10b837fa pop edi */
  EDI = (pop32());
  /* 10b837fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b837fc ret  */
  ESPCHK(0x10b83680u, _esp0);
  ESP += 4; return;
  /* 10b837fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b83800:;
  /* 10b83800 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b83802 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b83804 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b83807 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b8380a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b8380d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b83810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83813 pop esi */
  ESI = (pop32());
  /* 10b83814 pop edi */
  EDI = (pop32());
  /* 10b83815 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b83816 ret  */
  ESPCHK(0x10b83680u, _esp0);
  ESP += 4; return;
  /* 10b83817 nop  */
  /* nop */
L_10b83818:;
  /* 10b83818 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10b8381c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10b83820 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b83826 jne 0x10b8384c */
  if (!C.zf) goto L_10b8384c;
  /* 10b83828 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b8382b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b8382e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83831 jb 0x10b83840 */
  if (C.cf) goto L_10b83840;
  /* 10b83833 std  */
  C.df=1;
  /* 10b83834 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b83836 cld  */
  C.df=0;
  /* 10b83837 jmp dword ptr [edx*4 + 0x10b83960] */
  switch (EDX) {
    case 0: goto L_10b83970;
    case 1: goto L_10b83978;
    case 2: goto L_10b83988;
    case 3: goto L_10b8399c;
    default: x86_unimpl("switch@0x10b83837 out of table"); return;
  }
  /* 10b8383e mov edi, edi */
  EDI = (EDI);
L_10b83840:;
  /* 10b83840 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b83842 jmp dword ptr [ecx*4 + 0x10b83910] */
  switch (ECX) {
    case 0: goto L_10b83957;
    default: x86_unimpl("switch@0x10b83842 out of table"); return;
  }
  /* 10b83849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b8384c:;
  /* 10b8384c mov eax, edi */
  EAX = (EDI);
  /* 10b8384e mov edx, 3 */
  EDX = (0x3u);
  /* 10b83853 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83856 jb 0x10b83864 */
  if (C.cf) goto L_10b83864;
  /* 10b83858 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b8385b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b8385d jmp dword ptr [eax*4 + 0x10b83868] */
  switch (EAX) {
    case 1: goto L_10b83878;
    case 2: goto L_10b83898;
    case 3: goto L_10b838c0;
    default: x86_unimpl("switch@0x10b8385d out of table"); return;
  }
L_10b83864:;
  /* 10b83864 jmp dword ptr [ecx*4 + 0x10b83960] */
  switch (ECX) {
    case 0: goto L_10b83970;
    case 1: goto L_10b83978;
    case 2: goto L_10b83988;
    case 3: goto L_10b8399c;
    default: x86_unimpl("switch@0x10b83864 out of table"); return;
  }
  /* 10b8386b nop  */
  /* nop */
L_10b83878:;
  /* 10b83878 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b8387b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b8387d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b83880 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b83881 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b83884 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b83885 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83888 jb 0x10b83840 */
  if (C.cf) goto L_10b83840;
  /* 10b8388a std  */
  C.df=1;
  /* 10b8388b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b8388d cld  */
  C.df=0;
  /* 10b8388e jmp dword ptr [edx*4 + 0x10b83960] */
  switch (EDX) {
    case 0: goto L_10b83970;
    case 1: goto L_10b83978;
    case 2: goto L_10b83988;
    case 3: goto L_10b8399c;
    default: x86_unimpl("switch@0x10b8388e out of table"); return;
  }
  /* 10b83895 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b83898:;
  /* 10b83898 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b8389b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b8389d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b838a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b838a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b838a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b838a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b838ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b838af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b838b2 jb 0x10b83840 */
  if (C.cf) goto L_10b83840;
  /* 10b838b4 std  */
  C.df=1;
  /* 10b838b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b838b7 cld  */
  C.df=0;
  /* 10b838b8 jmp dword ptr [edx*4 + 0x10b83960] */
  switch (EDX) {
    case 0: goto L_10b83970;
    case 1: goto L_10b83978;
    case 2: goto L_10b83988;
    case 3: goto L_10b8399c;
    default: x86_unimpl("switch@0x10b838b8 out of table"); return;
  }
  /* 10b838bf nop  */
  /* nop */
L_10b838c0:;
  /* 10b838c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b838c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b838c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b838c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b838cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b838ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b838d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b838d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b838d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b838da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b838dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b838e0 jb 0x10b83840 */
  if (C.cf) goto L_10b83840;
  /* 10b838e6 std  */
  C.df=1;
  /* 10b838e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b838e9 cld  */
  C.df=0;
  /* 10b838ea jmp dword ptr [edx*4 + 0x10b83960] */
  switch (EDX) {
    case 0: goto L_10b83970;
    case 1: goto L_10b83978;
    case 2: goto L_10b83988;
    case 3: goto L_10b8399c;
    default: x86_unimpl("switch@0x10b838ea out of table"); return;
  }
  /* 10b838f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10b838f4 adc al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b838f6 mov eax, 0xb8391c10 */
  EAX = (0xb8391c10u);
  /* 10b838fb adc byte ptr [ecx + edi], ah */
  { uint32_t _a=(r8((uint32_t)(ECX + EDI*1))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b838fe mov eax, 0xb8392c10 */
  EAX = (0xb8392c10u);
  /* 10b83903 adc byte ptr [ecx + edi], dh */
  { uint32_t _a=(r8((uint32_t)(ECX + EDI*1))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDI*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b83906 mov eax, 0xb8393c10 */
  EAX = (0xb8393c10u);
  /* 10b8390b adc byte ptr [ecx + edi - 0x48], al */
  { uint32_t _a=(r8((uint32_t)(ECX + EDI*1 + -0x48))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDI*1 + -0x48), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b83914 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10b83918 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10b8391c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10b83920 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10b83924 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10b83928 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10b8392c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10b83930 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10b83934 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10b83938 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10b8393c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10b83940 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10b83944 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10b83948 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10b8394c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b83953 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83955 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b83957:;
  /* 10b83957 jmp dword ptr [edx*4 + 0x10b83960] */
  switch (EDX) {
    case 0: goto L_10b83970;
    case 1: goto L_10b83978;
    case 2: goto L_10b83988;
    case 3: goto L_10b8399c;
    default: x86_unimpl("switch@0x10b83957 out of table"); return;
  }
  /* 10b8395e mov edi, edi */
  EDI = (EDI);
L_10b83970:;
  /* 10b83970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83973 pop esi */
  ESI = (pop32());
  /* 10b83974 pop edi */
  EDI = (pop32());
  /* 10b83975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b83976 ret  */
  ESPCHK(0x10b83680u, _esp0);
  ESP += 4; return;
  /* 10b83977 nop  */
  /* nop */
L_10b83978:;
  /* 10b83978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b8397b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b8397e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83981 pop esi */
  ESI = (pop32());
  /* 10b83982 pop edi */
  EDI = (pop32());
  /* 10b83983 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b83984 ret  */
  ESPCHK(0x10b83680u, _esp0);
  ESP += 4; return;
  /* 10b83985 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b83988:;
  /* 10b83988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b8398b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b8398e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b83991 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b83994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83997 pop esi */
  ESI = (pop32());
  /* 10b83998 pop edi */
  EDI = (pop32());
  /* 10b83999 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b8399a ret  */
  ESPCHK(0x10b83680u, _esp0);
  ESP += 4; return;
  /* 10b8399b nop  */
  /* nop */
L_10b8399c:;
  /* 10b8399c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b8399f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b839a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b839a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b839a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b839ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b839ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b839b1 pop esi */
  ESI = (pop32());
  /* 10b839b2 pop edi */
  EDI = (pop32());
  /* 10b839b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b839b4 ret  */
  ESPCHK(0x10b83680u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b5 @ 0x10b839b5 (62 bytes, 15 insns) */
void f_10b839b5(void) {
  FTRACE(0x10b839b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b839b5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10b839ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10b839bc push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b839c2 call dword ptr [0x10b8503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8503c))), 0x10b839c8u);
  /* 10b839c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b839ca mov dword ptr [0x10b86b74], eax */
  w32((uint32_t)(0x10b86b74), (EAX));
  /* 10b839cf jne 0x10b839d2 */
  if (!C.zf) goto L_10b839d2;
  /* 10b839d1 ret  */
  ESPCHK(0x10b839b5u, _esp0);
  ESP += 4; return;
L_10b839d2:;
  /* 10b839d2 and dword ptr [0x10b86b6c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b86b6c)))&(0x0u); w32((uint32_t)(0x10b86b6c), (_r)); fl_logic(_r,32); }
  /* 10b839d9 and dword ptr [0x10b86b70], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b86b70)))&(0x0u); w32((uint32_t)(0x10b86b70), (_r)); fl_logic(_r,32); }
  /* 10b839e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b839e2 mov dword ptr [0x10b86b68], eax */
  w32((uint32_t)(0x10b86b68), (EAX));
  /* 10b839e7 mov dword ptr [0x10b86b60], 0x10 */
  w32((uint32_t)(0x10b86b60), (0x10u));
  /* 10b839f1 pop eax */
  EAX = (pop32());
  /* 10b839f2 ret  */
  ESPCHK(0x10b839b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100039f3 @ 0x10b839f3 (43 bytes, 14 insns) */
void f_10b839f3(void) {
  FTRACE(0x10b839f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b839f3 mov eax, dword ptr [0x10b86b70] */
  EAX = (r32((uint32_t)(0x10b86b70)));
  /* 10b839f8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10b839fb mov eax, dword ptr [0x10b86b74] */
  EAX = (r32((uint32_t)(0x10b86b74)));
  /* 10b83a00 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10b83a03:;
  /* 10b83a03 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83a05 jae 0x10b83a1b */
  if (!C.cf) goto L_10b83a1b;
  /* 10b83a07 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b83a0b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83a0e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83a14 jb 0x10b83a1d */
  if (C.cf) goto L_10b83a1d;
  /* 10b83a16 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83a19 jmp 0x10b83a03 */
  goto L_10b83a03;
L_10b83a1b:;
  /* 10b83a1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b83a1d:;
  /* 10b83a1d ret  */
  ESPCHK(0x10b839f3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a1e @ 0x10b83a1e (811 bytes, 264 insns) */
void f_10b83a1e(void) {
  FTRACE(0x10b83a1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83a1e push ebp */
  push32((uint32_t)(EBP));
  /* 10b83a1f mov ebp, esp */
  EBP = (ESP);
  /* 10b83a21 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83a24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b83a27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83a2a push ebx */
  push32((uint32_t)(EBX));
  /* 10b83a2b push esi */
  push32((uint32_t)(ESI));
  /* 10b83a2c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b83a2f mov esi, edx */
  ESI = (EDX);
  /* 10b83a31 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83a34 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10b83a37 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83a3a push edi */
  push32((uint32_t)(EDI));
  /* 10b83a3b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10b83a3e mov ecx, esi */
  ECX = (ESI);
  /* 10b83a40 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10b83a43 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b83a49 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b83a4a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10b83a4d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b83a54 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10b83a57 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b83a5a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10b83a5d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10b83a60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b83a63 jne 0x10b83ae4 */
  if (!C.zf) goto L_10b83ae4;
  /* 10b83a65 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b83a68 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b83a6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b83a6b pop edi */
  EDI = (pop32());
  /* 10b83a6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b83a6f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83a71 jbe 0x10b83a76 */
  if ((C.cf||C.zf)) goto L_10b83a76;
  /* 10b83a73 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10b83a76:;
  /* 10b83a76 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10b83a7a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83a7e jne 0x10b83ac8 */
  if (!C.zf) goto L_10b83ac8;
  /* 10b83a80 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b83a83 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83a86 jae 0x10b83aa4 */
  if (!C.cf) goto L_10b83aa4;
  /* 10b83a88 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b83a8d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b83a8f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10b83a93 not edi */
  EDI = (~(EDI));
  /* 10b83a95 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10b83a99 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10b83a9b jne 0x10b83ac8 */
  if (!C.zf) goto L_10b83ac8;
  /* 10b83a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83aa0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10b83aa2 jmp 0x10b83ac8 */
  goto L_10b83ac8;
L_10b83aa4:;
  /* 10b83aa4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83aa7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b83aac shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b83aae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b83ab1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10b83ab5 not edi */
  EDI = (~(EDI));
  /* 10b83ab7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10b83abe dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10b83ac0 jne 0x10b83ac8 */
  if (!C.zf) goto L_10b83ac8;
  /* 10b83ac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83ac5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10b83ac8:;
  /* 10b83ac8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10b83acc mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10b83ad0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10b83ad3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10b83ad7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10b83adb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83ade mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10b83ae1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10b83ae4:;
  /* 10b83ae4 mov edi, ebx */
  EDI = (EBX);
  /* 10b83ae6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10b83ae9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b83aea cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83aed jbe 0x10b83af2 */
  if ((C.cf||C.zf)) goto L_10b83af2;
  /* 10b83aef push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b83af1 pop edi */
  EDI = (pop32());
L_10b83af2:;
  /* 10b83af2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b83af5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b83af8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b83afb jne 0x10b83ba1 */
  if (!C.zf) goto L_10b83ba1;
  /* 10b83b01 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83b04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b83b07 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b83b0a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b83b0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b83b0f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b83b10 pop edx */
  EDX = (pop32());
  /* 10b83b11 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83b13 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b83b16 jbe 0x10b83b1d */
  if ((C.cf||C.zf)) goto L_10b83b1d;
  /* 10b83b18 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10b83b1b mov ecx, edx */
  ECX = (EDX);
L_10b83b1d:;
  /* 10b83b1d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83b20 mov edi, ebx */
  EDI = (EBX);
  /* 10b83b22 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10b83b25 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10b83b28 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b83b29 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83b2b jbe 0x10b83b2f */
  if ((C.cf||C.zf)) goto L_10b83b2f;
  /* 10b83b2d mov edi, edx */
  EDI = (EDX);
L_10b83b2f:;
  /* 10b83b2f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83b31 je 0x10b83b9e */
  if (C.zf) goto L_10b83b9e;
  /* 10b83b33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b83b36 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b83b39 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83b3c jne 0x10b83b86 */
  if (!C.zf) goto L_10b83b86;
  /* 10b83b3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b83b41 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83b44 jae 0x10b83b62 */
  if (!C.cf) goto L_10b83b62;
  /* 10b83b46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b83b4b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b83b4d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10b83b51 not edx */
  EDX = (~(EDX));
  /* 10b83b53 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10b83b57 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10b83b59 jne 0x10b83b86 */
  if (!C.zf) goto L_10b83b86;
  /* 10b83b5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83b5e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10b83b60 jmp 0x10b83b86 */
  goto L_10b83b86;
L_10b83b62:;
  /* 10b83b62 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83b65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b83b6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b83b6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b83b6f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10b83b73 not edx */
  EDX = (~(EDX));
  /* 10b83b75 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10b83b7c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10b83b7e jne 0x10b83b86 */
  if (!C.zf) goto L_10b83b86;
  /* 10b83b80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83b83 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10b83b86:;
  /* 10b83b86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b83b89 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b83b8c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b83b8f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b83b92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b83b95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b83b98 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b83b9b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10b83b9e:;
  /* 10b83b9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10b83ba1:;
  /* 10b83ba1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83ba5 jne 0x10b83bb0 */
  if (!C.zf) goto L_10b83bb0;
  /* 10b83ba7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83baa je 0x10b83c39 */
  if (C.zf) goto L_10b83c39;
L_10b83bb0:;
  /* 10b83bb0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b83bb3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10b83bb6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b83bb9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b83bbc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b83bbf lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10b83bc2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b83bc5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b83bc8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b83bcb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b83bce mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b83bd1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83bd4 jne 0x10b83c39 */
  if (!C.zf) goto L_10b83c39;
  /* 10b83bd6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10b83bda cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83bdd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10b83be0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10b83be2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10b83be6 jae 0x10b83c0d */
  if (!C.cf) goto L_10b83c0d;
  /* 10b83be8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b83bec jne 0x10b83bfc */
  if (!C.zf) goto L_10b83bfc;
  /* 10b83bee mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b83bf3 mov ecx, edi */
  ECX = (EDI);
  /* 10b83bf5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b83bf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83bfa or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10b83bfc:;
  /* 10b83bfc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b83c01 mov ecx, edi */
  ECX = (EDI);
  /* 10b83c03 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b83c05 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10b83c09 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10b83c0b jmp 0x10b83c36 */
  goto L_10b83c36;
L_10b83c0d:;
  /* 10b83c0d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b83c11 jne 0x10b83c23 */
  if (!C.zf) goto L_10b83c23;
  /* 10b83c13 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10b83c16 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b83c1b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b83c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83c20 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10b83c23:;
  /* 10b83c23 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10b83c26 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b83c2b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b83c2d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10b83c34 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10b83c36:;
  /* 10b83c36 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10b83c39:;
  /* 10b83c39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b83c3c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10b83c3e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10b83c42 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10b83c44 jne 0x10b83d44 */
  if (!C.zf) goto L_10b83d44;
  /* 10b83c4a mov eax, dword ptr [0x10b86b6c] */
  EAX = (r32((uint32_t)(0x10b86b6c)));
  /* 10b83c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b83c51 je 0x10b83d36 */
  if (C.zf) goto L_10b83d36;
  /* 10b83c57 mov ecx, dword ptr [0x10b86b64] */
  ECX = (r32((uint32_t)(0x10b86b64)));
  /* 10b83c5d mov edi, dword ptr [0x10b85054] */
  EDI = (r32((uint32_t)(0x10b85054)));
  /* 10b83c63 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10b83c66 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83c69 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10b83c6e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b83c73 push ebx */
  push32((uint32_t)(EBX));
  /* 10b83c74 push ecx */
  push32((uint32_t)(ECX));
  /* 10b83c75 call edi */
  call_ind((uint32_t)(EDI), 0x10b83c77u);
  /* 10b83c77 mov ecx, dword ptr [0x10b86b64] */
  ECX = (r32((uint32_t)(0x10b86b64)));
  /* 10b83c7d mov eax, dword ptr [0x10b86b6c] */
  EAX = (r32((uint32_t)(0x10b86b6c)));
  /* 10b83c82 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b83c87 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b83c89 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b83c8c mov eax, dword ptr [0x10b86b6c] */
  EAX = (r32((uint32_t)(0x10b86b6c)));
  /* 10b83c91 mov ecx, dword ptr [0x10b86b64] */
  ECX = (r32((uint32_t)(0x10b86b64)));
  /* 10b83c97 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b83c9a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10b83ca2 mov eax, dword ptr [0x10b86b6c] */
  EAX = (r32((uint32_t)(0x10b86b6c)));
  /* 10b83ca7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b83caa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10b83cad mov eax, dword ptr [0x10b86b6c] */
  EAX = (r32((uint32_t)(0x10b86b6c)));
  /* 10b83cb2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b83cb5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b83cb9 jne 0x10b83cc4 */
  if (!C.zf) goto L_10b83cc4;
  /* 10b83cbb and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10b83cbf mov eax, dword ptr [0x10b86b6c] */
  EAX = (r32((uint32_t)(0x10b86b6c)));
L_10b83cc4:;
  /* 10b83cc4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83cc8 jne 0x10b83d36 */
  if (!C.zf) goto L_10b83d36;
  /* 10b83cca push ebx */
  push32((uint32_t)(EBX));
  /* 10b83ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b83ccd push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10b83cd0 call edi */
  call_ind((uint32_t)(EDI), 0x10b83cd2u);
  /* 10b83cd2 mov eax, dword ptr [0x10b86b6c] */
  EAX = (r32((uint32_t)(0x10b86b6c)));
  /* 10b83cd7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10b83cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10b83cdc push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b83ce2 call dword ptr [0x10b85050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85050))), 0x10b83ce8u);
  /* 10b83ce8 mov eax, dword ptr [0x10b86b70] */
  EAX = (r32((uint32_t)(0x10b86b70)));
  /* 10b83ced mov edx, dword ptr [0x10b86b74] */
  EDX = (r32((uint32_t)(0x10b86b74)));
  /* 10b83cf3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10b83cf6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b83cf9 mov ecx, eax */
  ECX = (EAX);
  /* 10b83cfb mov eax, dword ptr [0x10b86b6c] */
  EAX = (r32((uint32_t)(0x10b86b6c)));
  /* 10b83d00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83d02 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10b83d06 push ecx */
  push32((uint32_t)(ECX));
  /* 10b83d07 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10b83d0a push ecx */
  push32((uint32_t)(ECX));
  /* 10b83d0b push eax */
  push32((uint32_t)(EAX));
  /* 10b83d0c call 0x10b847a0 */
  push32(0x10b83d11u); f_10b847a0();
  /* 10b83d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83d14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83d17 dec dword ptr [0x10b86b70] */
  { uint32_t _r=(r32((uint32_t)(0x10b86b70)))-1; w32((uint32_t)(0x10b86b70), (_r)); fl_dec(_r,32); }
  /* 10b83d1d cmp eax, dword ptr [0x10b86b6c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b86b6c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83d23 jbe 0x10b83d28 */
  if ((C.cf||C.zf)) goto L_10b83d28;
  /* 10b83d25 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10b83d28:;
  /* 10b83d28 mov ecx, dword ptr [0x10b86b74] */
  ECX = (r32((uint32_t)(0x10b86b74)));
  /* 10b83d2e mov dword ptr [0x10b86b68], ecx */
  w32((uint32_t)(0x10b86b68), (ECX));
  /* 10b83d34 jmp 0x10b83d39 */
  goto L_10b83d39;
L_10b83d36:;
  /* 10b83d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10b83d39:;
  /* 10b83d39 mov dword ptr [0x10b86b6c], eax */
  w32((uint32_t)(0x10b86b6c), (EAX));
  /* 10b83d3e mov dword ptr [0x10b86b64], esi */
  w32((uint32_t)(0x10b86b64), (ESI));
L_10b83d44:;
  /* 10b83d44 pop edi */
  EDI = (pop32());
  /* 10b83d45 pop esi */
  ESI = (pop32());
  /* 10b83d46 pop ebx */
  EBX = (pop32());
  /* 10b83d47 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b83d48 ret  */
  ESPCHK(0x10b83a1eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d49 @ 0x10b83d49 (777 bytes, 275 insns) */
void f_10b83d49(void) {
  FTRACE(0x10b83d49u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b83d49 push ebp */
  push32((uint32_t)(EBP));
  /* 10b83d4a mov ebp, esp */
  EBP = (ESP);
  /* 10b83d4c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83d4f mov eax, dword ptr [0x10b86b70] */
  EAX = (r32((uint32_t)(0x10b86b70)));
  /* 10b83d54 mov edx, dword ptr [0x10b86b74] */
  EDX = (r32((uint32_t)(0x10b86b74)));
  /* 10b83d5a push ebx */
  push32((uint32_t)(EBX));
  /* 10b83d5b push esi */
  push32((uint32_t)(ESI));
  /* 10b83d5c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10b83d5f push edi */
  push32((uint32_t)(EDI));
  /* 10b83d60 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10b83d63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83d66 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10b83d69 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10b83d6c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10b83d6f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b83d72 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b83d75 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b83d76 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83d79 jge 0x10b83d89 */
  if ((C.sf==C.of)) goto L_10b83d89;
  /* 10b83d7b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10b83d7e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10b83d80 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10b83d84 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10b83d87 jmp 0x10b83d99 */
  goto L_10b83d99;
L_10b83d89:;
  /* 10b83d89 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83d8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b83d8f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b83d91 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b83d93 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10b83d96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b83d99:;
  /* 10b83d99 mov eax, dword ptr [0x10b86b68] */
  EAX = (r32((uint32_t)(0x10b86b68)));
  /* 10b83d9e mov ebx, eax */
  EBX = (EAX);
  /* 10b83da0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83da2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b83da5 jae 0x10b83dc0 */
  if (!C.cf) goto L_10b83dc0;
L_10b83da7:;
  /* 10b83da7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10b83daa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10b83dac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10b83daf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10b83db1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10b83db3 jne 0x10b83dc0 */
  if (!C.zf) goto L_10b83dc0;
  /* 10b83db5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83db8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83dbb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b83dbe jb 0x10b83da7 */
  if (C.cf) goto L_10b83da7;
L_10b83dc0:;
  /* 10b83dc0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83dc3 jne 0x10b83e3e */
  if (!C.zf) goto L_10b83e3e;
  /* 10b83dc5 mov ebx, edx */
  EBX = (EDX);
L_10b83dc7:;
  /* 10b83dc7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83dc9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b83dcc jae 0x10b83de3 */
  if (!C.cf) goto L_10b83de3;
  /* 10b83dce mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10b83dd1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10b83dd3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10b83dd6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10b83dd8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10b83dda jne 0x10b83de1 */
  if (!C.zf) goto L_10b83de1;
  /* 10b83ddc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83ddf jmp 0x10b83dc7 */
  goto L_10b83dc7;
L_10b83de1:;
  /* 10b83de1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10b83de3:;
  /* 10b83de3 jne 0x10b83e3e */
  if (!C.zf) goto L_10b83e3e;
L_10b83de5:;
  /* 10b83de5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83de8 jae 0x10b83dfb */
  if (!C.cf) goto L_10b83dfb;
  /* 10b83dea cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83dee jne 0x10b83df8 */
  if (!C.zf) goto L_10b83df8;
  /* 10b83df0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83df3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b83df6 jmp 0x10b83de5 */
  goto L_10b83de5;
L_10b83df8:;
  /* 10b83df8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10b83dfb:;
  /* 10b83dfb jne 0x10b83e23 */
  if (!C.zf) goto L_10b83e23;
  /* 10b83dfd mov ebx, edx */
  EBX = (EDX);
L_10b83dff:;
  /* 10b83dff cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83e01 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b83e04 jae 0x10b83e13 */
  if (!C.cf) goto L_10b83e13;
  /* 10b83e06 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83e0a jne 0x10b83e11 */
  if (!C.zf) goto L_10b83e11;
  /* 10b83e0c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83e0f jmp 0x10b83dff */
  goto L_10b83dff;
L_10b83e11:;
  /* 10b83e11 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10b83e13:;
  /* 10b83e13 jne 0x10b83e23 */
  if (!C.zf) goto L_10b83e23;
  /* 10b83e15 call 0x10b84052 */
  push32(0x10b83e1au); f_10b84052();
  /* 10b83e1a mov ebx, eax */
  EBX = (EAX);
  /* 10b83e1c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b83e1e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b83e21 je 0x10b83e37 */
  if (C.zf) goto L_10b83e37;
L_10b83e23:;
  /* 10b83e23 push ebx */
  push32((uint32_t)(EBX));
  /* 10b83e24 call 0x10b84103 */
  push32(0x10b83e29u); f_10b84103();
  /* 10b83e29 pop ecx */
  ECX = (pop32());
  /* 10b83e2a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10b83e2d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b83e2f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10b83e32 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83e35 jne 0x10b83e3e */
  if (!C.zf) goto L_10b83e3e;
L_10b83e37:;
  /* 10b83e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b83e39 jmp 0x10b8404d */
  goto L_10b8404d;
L_10b83e3e:;
  /* 10b83e3e mov dword ptr [0x10b86b68], ebx */
  w32((uint32_t)(0x10b86b68), (EBX));
  /* 10b83e44 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10b83e47 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10b83e49 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83e4c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b83e4f je 0x10b83e65 */
  if (C.zf) goto L_10b83e65;
  /* 10b83e51 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10b83e58 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10b83e5c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10b83e5f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10b83e61 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10b83e63 jne 0x10b83e9c */
  if (!C.zf) goto L_10b83e9c;
L_10b83e65:;
  /* 10b83e65 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10b83e6b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10b83e6e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10b83e71 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10b83e74 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b83e78 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10b83e7b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10b83e7d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10b83e80 jne 0x10b83e99 */
  if (!C.zf) goto L_10b83e99;
L_10b83e82:;
  /* 10b83e82 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10b83e88 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10b83e8b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10b83e8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b83e91 mov edi, esi */
  EDI = (ESI);
  /* 10b83e93 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10b83e95 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10b83e97 je 0x10b83e82 */
  if (C.zf) goto L_10b83e82;
L_10b83e99:;
  /* 10b83e99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10b83e9c:;
  /* 10b83e9c mov ecx, edx */
  ECX = (EDX);
  /* 10b83e9e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b83ea0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b83ea6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b83ead mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b83eb0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10b83eb4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10b83eb6 jne 0x10b83ec5 */
  if (!C.zf) goto L_10b83ec5;
  /* 10b83eb8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10b83ebf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b83ec1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10b83ec4 pop edi */
  EDI = (pop32());
L_10b83ec5:;
  /* 10b83ec5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b83ec7 jl 0x10b83ece */
  if ((C.sf!=C.of)) goto L_10b83ece;
  /* 10b83ec9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b83ecb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b83ecc jmp 0x10b83ec5 */
  goto L_10b83ec5;
L_10b83ece:;
  /* 10b83ece mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b83ed1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10b83ed5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10b83ed7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b83eda mov esi, ecx */
  ESI = (ECX);
  /* 10b83edc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b83edf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10b83ee2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b83ee3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83ee6 jle 0x10b83eeb */
  if ((C.zf||C.sf!=C.of)) goto L_10b83eeb;
  /* 10b83ee8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b83eea pop esi */
  ESI = (pop32());
L_10b83eeb:;
  /* 10b83eeb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83eed je 0x10b84000 */
  if (C.zf) goto L_10b84000;
  /* 10b83ef3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b83ef6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83ef9 jne 0x10b83f5c */
  if (!C.zf) goto L_10b83f5c;
  /* 10b83efb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83efe jge 0x10b83f2b */
  if ((C.sf==C.of)) goto L_10b83f2b;
  /* 10b83f00 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b83f05 mov ecx, edi */
  ECX = (EDI);
  /* 10b83f07 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b83f09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b83f0c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10b83f10 not ebx */
  EBX = (~(EBX));
  /* 10b83f12 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10b83f15 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10b83f19 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10b83f1d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10b83f1f jne 0x10b83f59 */
  if (!C.zf) goto L_10b83f59;
  /* 10b83f21 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83f24 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b83f27 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10b83f29 jmp 0x10b83f5c */
  goto L_10b83f5c;
L_10b83f2b:;
  /* 10b83f2b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10b83f2e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b83f33 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b83f35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b83f38 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10b83f3c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10b83f43 not ebx */
  EBX = (~(EBX));
  /* 10b83f45 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10b83f47 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10b83f49 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10b83f4c jne 0x10b83f59 */
  if (!C.zf) goto L_10b83f59;
  /* 10b83f4e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b83f51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b83f54 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10b83f57 jmp 0x10b83f5c */
  goto L_10b83f5c;
L_10b83f59:;
  /* 10b83f59 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10b83f5c:;
  /* 10b83f5c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b83f5f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10b83f62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83f66 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10b83f69 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b83f6c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10b83f6f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10b83f72 je 0x10b8400c */
  if (C.zf) goto L_10b8400c;
  /* 10b83f78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b83f7b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10b83f7f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10b83f82 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10b83f85 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b83f88 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b83f8b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b83f8e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b83f91 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b83f94 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83f97 jne 0x10b83ffd */
  if (!C.zf) goto L_10b83ffd;
  /* 10b83f99 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10b83f9d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b83fa0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10b83fa3 jge 0x10b83fce */
  if ((C.sf==C.of)) goto L_10b83fce;
  /* 10b83fa5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10b83fa7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b83fab mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10b83faf jne 0x10b83fbc */
  if (!C.zf) goto L_10b83fbc;
  /* 10b83fb1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b83fb6 mov ecx, esi */
  ECX = (ESI);
  /* 10b83fb8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b83fba or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10b83fbc:;
  /* 10b83fbc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b83fc1 mov ecx, esi */
  ECX = (ESI);
  /* 10b83fc3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b83fc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b83fc8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10b83fcc jmp 0x10b83ffd */
  goto L_10b83ffd;
L_10b83fce:;
  /* 10b83fce inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10b83fd0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b83fd4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10b83fd8 jne 0x10b83fe7 */
  if (!C.zf) goto L_10b83fe7;
  /* 10b83fda lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10b83fdd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b83fe2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b83fe4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10b83fe7:;
  /* 10b83fe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b83fea lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10b83ff1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10b83ff4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10b83ff9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10b83ffb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10b83ffd:;
  /* 10b83ffd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10b84000:;
  /* 10b84000 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b84002 je 0x10b8400f */
  if (C.zf) goto L_10b8400f;
  /* 10b84004 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b84006 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10b8400a jmp 0x10b8400f */
  goto L_10b8400f;
L_10b8400c:;
  /* 10b8400c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10b8400f:;
  /* 10b8400f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10b84012 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84014 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10b84017 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b84019 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10b8401d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10b84020 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10b84022 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b84024 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10b84027 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10b84029 jne 0x10b84045 */
  if (!C.zf) goto L_10b84045;
  /* 10b8402b cmp ebx, dword ptr [0x10b86b6c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10b86b6c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84031 jne 0x10b84045 */
  if (!C.zf) goto L_10b84045;
  /* 10b84033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b84036 cmp ecx, dword ptr [0x10b86b64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b86b64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8403c jne 0x10b84045 */
  if (!C.zf) goto L_10b84045;
  /* 10b8403e and dword ptr [0x10b86b6c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b86b6c)))&(0x0u); w32((uint32_t)(0x10b86b6c), (_r)); fl_logic(_r,32); }
L_10b84045:;
  /* 10b84045 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b84048 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b8404a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10b8404d:;
  /* 10b8404d pop edi */
  EDI = (pop32());
  /* 10b8404e pop esi */
  ESI = (pop32());
  /* 10b8404f pop ebx */
  EBX = (pop32());
  /* 10b84050 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b84051 ret  */
  ESPCHK(0x10b83d49u, _esp0);
  ESP += 4; return;
}

/* FUN_10004052 @ 0x10b84052 (177 bytes, 53 insns) */
void f_10b84052(void) {
  FTRACE(0x10b84052u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84052 mov eax, dword ptr [0x10b86b70] */
  EAX = (r32((uint32_t)(0x10b86b70)));
  /* 10b84057 mov ecx, dword ptr [0x10b86b60] */
  ECX = (r32((uint32_t)(0x10b86b60)));
  /* 10b8405d push esi */
  push32((uint32_t)(ESI));
  /* 10b8405e push edi */
  push32((uint32_t)(EDI));
  /* 10b8405f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b84061 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84063 jne 0x10b84095 */
  if (!C.zf) goto L_10b84095;
  /* 10b84065 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10b84069 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b8406c push eax */
  push32((uint32_t)(EAX));
  /* 10b8406d push dword ptr [0x10b86b74] */
  push32((uint32_t)(r32((uint32_t)(0x10b86b74))));
  /* 10b84073 push edi */
  push32((uint32_t)(EDI));
  /* 10b84074 push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b8407a call dword ptr [0x10b85028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85028))), 0x10b84080u);
  /* 10b84080 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84082 je 0x10b840e5 */
  if (C.zf) goto L_10b840e5;
  /* 10b84084 add dword ptr [0x10b86b60], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10b86b60))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10b86b60), (_r)); fl_add(_a,_b,_r,32); }
  /* 10b8408b mov dword ptr [0x10b86b74], eax */
  w32((uint32_t)(0x10b86b74), (EAX));
  /* 10b84090 mov eax, dword ptr [0x10b86b70] */
  EAX = (r32((uint32_t)(0x10b86b70)));
L_10b84095:;
  /* 10b84095 mov ecx, dword ptr [0x10b86b74] */
  ECX = (r32((uint32_t)(0x10b86b74)));
  /* 10b8409b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10b840a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b840a2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10b840a5 push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b840ab lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10b840ae call dword ptr [0x10b8503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8503c))), 0x10b840b4u);
  /* 10b840b4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b840b6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10b840b9 je 0x10b840e5 */
  if (C.zf) goto L_10b840e5;
  /* 10b840bb push 4 */
  push32((uint32_t)(0x4u));
  /* 10b840bd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10b840c2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10b840c7 push edi */
  push32((uint32_t)(EDI));
  /* 10b840c8 call dword ptr [0x10b8502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8502c))), 0x10b840ceu);
  /* 10b840ce cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b840d0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10b840d3 jne 0x10b840e9 */
  if (!C.zf) goto L_10b840e9;
  /* 10b840d5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10b840d8 push edi */
  push32((uint32_t)(EDI));
  /* 10b840d9 push dword ptr [0x10b86da8] */
  push32((uint32_t)(r32((uint32_t)(0x10b86da8))));
  /* 10b840df call dword ptr [0x10b85050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85050))), 0x10b840e5u);
L_10b840e5:;
  /* 10b840e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b840e7 jmp 0x10b84100 */
  goto L_10b84100;
L_10b840e9:;
  /* 10b840e9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b840ed mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10b840ef mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10b840f2 inc dword ptr [0x10b86b70] */
  { uint32_t _r=(r32((uint32_t)(0x10b86b70)))+1; w32((uint32_t)(0x10b86b70), (_r)); fl_inc(_r,32); }
  /* 10b840f8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10b840fb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10b840fe mov eax, esi */
  EAX = (ESI);
L_10b84100:;
  /* 10b84100 pop edi */
  EDI = (pop32());
  /* 10b84101 pop esi */
  ESI = (pop32());
  /* 10b84102 ret  */
  ESPCHK(0x10b84052u, _esp0);
  ESP += 4; return;
}

/* FUN_10004103 @ 0x10b84103 (251 bytes, 85 insns) */
void f_10b84103(void) {
  FTRACE(0x10b84103u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84103 push ebp */
  push32((uint32_t)(EBP));
  /* 10b84104 mov ebp, esp */
  EBP = (ESP);
  /* 10b84106 push ecx */
  push32((uint32_t)(ECX));
  /* 10b84107 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b8410a push ebx */
  push32((uint32_t)(EBX));
  /* 10b8410b push esi */
  push32((uint32_t)(ESI));
  /* 10b8410c push edi */
  push32((uint32_t)(EDI));
  /* 10b8410d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10b84110 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b84113 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10b84115:;
  /* 10b84115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b84117 jl 0x10b8411e */
  if ((C.sf!=C.of)) goto L_10b8411e;
  /* 10b84119 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b8411b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b8411c jmp 0x10b84115 */
  goto L_10b84115;
L_10b8411e:;
  /* 10b8411e mov eax, ebx */
  EAX = (EBX);
  /* 10b84120 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b84122 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b84128 pop edx */
  EDX = (pop32());
  /* 10b84129 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10b84130 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b84133:;
  /* 10b84133 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10b84136 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10b84139 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8413c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10b8413d jne 0x10b84133 */
  if (!C.zf) goto L_10b84133;
  /* 10b8413f mov edi, ebx */
  EDI = (EBX);
  /* 10b84141 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b84143 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10b84146 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84149 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b8414e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b84153 push edi */
  push32((uint32_t)(EDI));
  /* 10b84154 call dword ptr [0x10b8502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8502c))), 0x10b8415au);
  /* 10b8415a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8415c jne 0x10b84166 */
  if (!C.zf) goto L_10b84166;
  /* 10b8415e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b84161 jmp 0x10b841f9 */
  goto L_10b841f9;
L_10b84166:;
  /* 10b84166 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10b8416c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8416e ja 0x10b841ac */
  if ((!C.cf&&!C.zf)) goto L_10b841ac;
  /* 10b84170 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10b84173:;
  /* 10b84173 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10b84177 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10b8417e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10b84184 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10b8418b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b8418d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10b84193 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b84196 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10b841a0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b841a5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10b841a8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b841aa jbe 0x10b84173 */
  if ((C.cf||C.zf)) goto L_10b84173;
L_10b841ac:;
  /* 10b841ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b841af lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10b841b2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b841b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b841b9 pop edi */
  EDI = (pop32());
  /* 10b841ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b841bd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10b841c0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10b841c3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10b841c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b841c9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10b841ce mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10b841d5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10b841d8 mov cl, al */
  CL = (AL);
  /* 10b841da inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10b841dc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b841de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b841e1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10b841e4 jne 0x10b841e9 */
  if (!C.zf) goto L_10b841e9;
  /* 10b841e6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10b841e9:;
  /* 10b841e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b841ee mov ecx, ebx */
  ECX = (EBX);
  /* 10b841f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b841f2 not edx */
  EDX = (~(EDX));
  /* 10b841f4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b841f7 mov eax, ebx */
  EAX = (EBX);
L_10b841f9:;
  /* 10b841f9 pop edi */
  EDI = (pop32());
  /* 10b841fa pop esi */
  ESI = (pop32());
  /* 10b841fb pop ebx */
  EBX = (pop32());
  /* 10b841fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b841fd ret  */
  ESPCHK(0x10b84103u, _esp0);
  ESP += 4; return;
}

/* FUN_100041fe @ 0x10b841fe (137 bytes, 50 insns) */
void f_10b841fe(void) {
  FTRACE(0x10b841feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b841fe push ebx */
  push32((uint32_t)(EBX));
  /* 10b841ff xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b84201 cmp dword ptr [0x10b86b24], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10b86b24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84207 push esi */
  push32((uint32_t)(ESI));
  /* 10b84208 push edi */
  push32((uint32_t)(EDI));
  /* 10b84209 jne 0x10b8424d */
  if (!C.zf) goto L_10b8424d;
  /* 10b8420b push 0x10b85468 */
  push32((uint32_t)(0x10b85468u));
  /* 10b84210 call dword ptr [0x10b85020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85020))), 0x10b84216u);
  /* 10b84216 mov edi, eax */
  EDI = (EAX);
  /* 10b84218 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8421a je 0x10b84283 */
  if (C.zf) goto L_10b84283;
  /* 10b8421c mov esi, dword ptr [0x10b85024] */
  ESI = (r32((uint32_t)(0x10b85024)));
  /* 10b84222 push 0x10b8545c */
  push32((uint32_t)(0x10b8545cu));
  /* 10b84227 push edi */
  push32((uint32_t)(EDI));
  /* 10b84228 call esi */
  call_ind((uint32_t)(ESI), 0x10b8422au);
  /* 10b8422a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8422c mov dword ptr [0x10b86b24], eax */
  w32((uint32_t)(0x10b86b24), (EAX));
  /* 10b84231 je 0x10b84283 */
  if (C.zf) goto L_10b84283;
  /* 10b84233 push 0x10b8544c */
  push32((uint32_t)(0x10b8544cu));
  /* 10b84238 push edi */
  push32((uint32_t)(EDI));
  /* 10b84239 call esi */
  call_ind((uint32_t)(ESI), 0x10b8423bu);
  /* 10b8423b push 0x10b85438 */
  push32((uint32_t)(0x10b85438u));
  /* 10b84240 push edi */
  push32((uint32_t)(EDI));
  /* 10b84241 mov dword ptr [0x10b86b28], eax */
  w32((uint32_t)(0x10b86b28), (EAX));
  /* 10b84246 call esi */
  call_ind((uint32_t)(ESI), 0x10b84248u);
  /* 10b84248 mov dword ptr [0x10b86b2c], eax */
  w32((uint32_t)(0x10b86b2c), (EAX));
L_10b8424d:;
  /* 10b8424d mov eax, dword ptr [0x10b86b28] */
  EAX = (r32((uint32_t)(0x10b86b28)));
  /* 10b84252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b84254 je 0x10b8426c */
  if (C.zf) goto L_10b8426c;
  /* 10b84256 call eax */
  call_ind((uint32_t)(EAX), 0x10b84258u);
  /* 10b84258 mov ebx, eax */
  EBX = (EAX);
  /* 10b8425a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b8425c je 0x10b8426c */
  if (C.zf) goto L_10b8426c;
  /* 10b8425e mov eax, dword ptr [0x10b86b2c] */
  EAX = (r32((uint32_t)(0x10b86b2c)));
  /* 10b84263 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b84265 je 0x10b8426c */
  if (C.zf) goto L_10b8426c;
  /* 10b84267 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84268 call eax */
  call_ind((uint32_t)(EAX), 0x10b8426au);
  /* 10b8426a mov ebx, eax */
  EBX = (EAX);
L_10b8426c:;
  /* 10b8426c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10b84270 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10b84274 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10b84278 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84279 call dword ptr [0x10b86b24] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b86b24))), 0x10b8427fu);
L_10b8427f:;
  /* 10b8427f pop edi */
  EDI = (pop32());
  /* 10b84280 pop esi */
  ESI = (pop32());
  /* 10b84281 pop ebx */
  EBX = (pop32());
  /* 10b84282 ret  */
  ESPCHK(0x10b841feu, _esp0);
  ESP += 4; return;
L_10b84283:;
  /* 10b84283 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b84285 jmp 0x10b8427f */
  goto L_10b8427f;
}

/* _strncpy @ 0x10b84290 (254 bytes, 109 insns) */
void f_10b84290(void) {
  FTRACE(0x10b84290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84290 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b84294 push edi */
  push32((uint32_t)(EDI));
  /* 10b84295 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b84297 je 0x10b84313 */
  if (C.zf) goto L_10b84313;
  /* 10b84299 push esi */
  push32((uint32_t)(ESI));
  /* 10b8429a push ebx */
  push32((uint32_t)(EBX));
  /* 10b8429b mov ebx, ecx */
  EBX = (ECX);
  /* 10b8429d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10b842a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10b842a7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10b842ab jne 0x10b842b4 */
  if (!C.zf) goto L_10b842b4;
  /* 10b842ad shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b842b0 jne 0x10b84321 */
  if (!C.zf) goto L_10b84321;
  /* 10b842b2 jmp 0x10b842d5 */
  goto L_10b842d5;
L_10b842b4:;
  /* 10b842b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b842b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b842b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b842b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b842ba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b842bb je 0x10b842e2 */
  if (C.zf) goto L_10b842e2;
  /* 10b842bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b842bf je 0x10b842ea */
  if (C.zf) goto L_10b842ea;
  /* 10b842c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10b842c7 jne 0x10b842b4 */
  if (!C.zf) goto L_10b842b4;
  /* 10b842c9 mov ebx, ecx */
  EBX = (ECX);
  /* 10b842cb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b842ce jne 0x10b84321 */
  if (!C.zf) goto L_10b84321;
L_10b842d0:;
  /* 10b842d0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10b842d3 je 0x10b842e2 */
  if (C.zf) goto L_10b842e2;
L_10b842d5:;
  /* 10b842d5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b842d7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b842d8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b842da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b842db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b842dd je 0x10b8430e */
  if (C.zf) goto L_10b8430e;
  /* 10b842df dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b842e0 jne 0x10b842d5 */
  if (!C.zf) goto L_10b842d5;
L_10b842e2:;
  /* 10b842e2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b842e6 pop ebx */
  EBX = (pop32());
  /* 10b842e7 pop esi */
  ESI = (pop32());
  /* 10b842e8 pop edi */
  EDI = (pop32());
  /* 10b842e9 ret  */
  ESPCHK(0x10b84290u, _esp0);
  ESP += 4; return;
L_10b842ea:;
  /* 10b842ea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b842f0 je 0x10b84304 */
  if (C.zf) goto L_10b84304;
L_10b842f2:;
  /* 10b842f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b842f4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b842f5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b842f6 je 0x10b84386 */
  if (C.zf) goto L_10b84386;
  /* 10b842fc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b84302 jne 0x10b842f2 */
  if (!C.zf) goto L_10b842f2;
L_10b84304:;
  /* 10b84304 mov ebx, ecx */
  EBX = (ECX);
  /* 10b84306 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b84309 jne 0x10b84377 */
  if (!C.zf) goto L_10b84377;
L_10b8430b:;
  /* 10b8430b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b8430d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10b8430e:;
  /* 10b8430e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b8430f jne 0x10b8430b */
  if (!C.zf) goto L_10b8430b;
  /* 10b84311 pop ebx */
  EBX = (pop32());
  /* 10b84312 pop esi */
  ESI = (pop32());
L_10b84313:;
  /* 10b84313 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b84317 pop edi */
  EDI = (pop32());
  /* 10b84318 ret  */
  ESPCHK(0x10b84290u, _esp0);
  ESP += 4; return;
L_10b84319:;
  /* 10b84319 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b8431b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8431e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b8431f je 0x10b842d0 */
  if (C.zf) goto L_10b842d0;
L_10b84321:;
  /* 10b84321 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b84326 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b84328 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8432a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b8432d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b8432f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10b84331 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84334 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b84339 je 0x10b84319 */
  if (C.zf) goto L_10b84319;
  /* 10b8433b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b8433d je 0x10b8436b */
  if (C.zf) goto L_10b8436b;
  /* 10b8433f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10b84341 je 0x10b84361 */
  if (C.zf) goto L_10b84361;
  /* 10b84343 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b84349 je 0x10b84357 */
  if (C.zf) goto L_10b84357;
  /* 10b8434b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b84351 jne 0x10b84319 */
  if (!C.zf) goto L_10b84319;
  /* 10b84353 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b84355 jmp 0x10b8436f */
  goto L_10b8436f;
L_10b84357:;
  /* 10b84357 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b8435d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b8435f jmp 0x10b8436f */
  goto L_10b8436f;
L_10b84361:;
  /* 10b84361 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b84367 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b84369 jmp 0x10b8436f */
  goto L_10b8436f;
L_10b8436b:;
  /* 10b8436b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b8436d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10b8436f:;
  /* 10b8436f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b84374 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b84375 je 0x10b84381 */
  if (C.zf) goto L_10b84381;
L_10b84377:;
  /* 10b84377 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b84379:;
  /* 10b84379 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10b8437b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8437e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b8437f jne 0x10b84379 */
  if (!C.zf) goto L_10b84379;
L_10b84381:;
  /* 10b84381 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10b84384 jne 0x10b8430b */
  if (!C.zf) goto L_10b8430b;
L_10b84386:;
  /* 10b84386 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b8438a pop ebx */
  EBX = (pop32());
  /* 10b8438b pop esi */
  ESI = (pop32());
  /* 10b8438c pop edi */
  EDI = (pop32());
  /* 10b8438d ret  */
  ESPCHK(0x10b84290u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10b84390 (88 bytes, 40 insns) */
void f_10b84390(void) {
  FTRACE(0x10b84390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84390 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b84394 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b84398 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b8439a je 0x10b843e3 */
  if (C.zf) goto L_10b843e3;
  /* 10b8439c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b8439e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10b843a2 push edi */
  push32((uint32_t)(EDI));
  /* 10b843a3 mov edi, ecx */
  EDI = (ECX);
  /* 10b843a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b843a8 jb 0x10b843d7 */
  if (C.cf) goto L_10b843d7;
  /* 10b843aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b843ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10b843af je 0x10b843b9 */
  if (C.zf) goto L_10b843b9;
  /* 10b843b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10b843b3:;
  /* 10b843b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b843b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b843b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b843b7 jne 0x10b843b3 */
  if (!C.zf) goto L_10b843b3;
L_10b843b9:;
  /* 10b843b9 mov ecx, eax */
  ECX = (EAX);
  /* 10b843bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b843be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b843c0 mov ecx, eax */
  ECX = (EAX);
  /* 10b843c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b843c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b843c7 mov ecx, edx */
  ECX = (EDX);
  /* 10b843c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b843cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b843cf je 0x10b843d7 */
  if (C.zf) goto L_10b843d7;
  /* 10b843d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b843d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b843d5 je 0x10b843dd */
  if (C.zf) goto L_10b843dd;
L_10b843d7:;
  /* 10b843d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b843d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b843da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10b843db jne 0x10b843d7 */
  if (!C.zf) goto L_10b843d7;
L_10b843dd:;
  /* 10b843dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b843e1 pop edi */
  EDI = (pop32());
  /* 10b843e2 ret  */
  ESPCHK(0x10b84390u, _esp0);
  ESP += 4; return;
L_10b843e3:;
  /* 10b843e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b843e7 ret  */
  ESPCHK(0x10b84390u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e8 @ 0x10b843e8 (27 bytes, 13 insns) */
void f_10b843e8(void) {
  FTRACE(0x10b843e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b843e8 mov eax, dword ptr [0x10b86b30] */
  EAX = (r32((uint32_t)(0x10b86b30)));
  /* 10b843ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b843ef je 0x10b84400 */
  if (C.zf) goto L_10b84400;
  /* 10b843f1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10b843f5 call eax */
  call_ind((uint32_t)(EAX), 0x10b843f7u);
  /* 10b843f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b843f9 pop ecx */
  ECX = (pop32());
  /* 10b843fa je 0x10b84400 */
  if (C.zf) goto L_10b84400;
  /* 10b843fc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b843fe pop eax */
  EAX = (pop32());
  /* 10b843ff ret  */
  ESPCHK(0x10b843e8u, _esp0);
  ESP += 4; return;
L_10b84400:;
  /* 10b84400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b84402 ret  */
  ESPCHK(0x10b843e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004403 @ 0x10b84403 (511 bytes, 193 insns) */
void f_10b84403(void) {
  FTRACE(0x10b84403u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84403 push ebp */
  push32((uint32_t)(EBP));
  /* 10b84404 mov ebp, esp */
  EBP = (ESP);
  /* 10b84406 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b84408 push 0x10b85480 */
  push32((uint32_t)(0x10b85480u));
  /* 10b8440d push 0x10b84bd0 */
  push32((uint32_t)(0x10b84bd0u));
  /* 10b84412 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b84418 push eax */
  push32((uint32_t)(EAX));
  /* 10b84419 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b84420 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b84423 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84424 push esi */
  push32((uint32_t)(ESI));
  /* 10b84425 push edi */
  push32((uint32_t)(EDI));
  /* 10b84426 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b84429 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b8442b cmp dword ptr [0x10b86b58], edi */
  { uint32_t _a=(r32((uint32_t)(0x10b86b58))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84431 jne 0x10b84479 */
  if (!C.zf) goto L_10b84479;
  /* 10b84433 push edi */
  push32((uint32_t)(EDI));
  /* 10b84434 push edi */
  push32((uint32_t)(EDI));
  /* 10b84435 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b84437 pop ebx */
  EBX = (pop32());
  /* 10b84438 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84439 push 0x10b85478 */
  push32((uint32_t)(0x10b85478u));
  /* 10b8443e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10b84443 push esi */
  push32((uint32_t)(ESI));
  /* 10b84444 push edi */
  push32((uint32_t)(EDI));
  /* 10b84445 call dword ptr [0x10b85014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85014))), 0x10b8444bu);
  /* 10b8444b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8444d je 0x10b84457 */
  if (C.zf) goto L_10b84457;
  /* 10b8444f mov dword ptr [0x10b86b58], ebx */
  w32((uint32_t)(0x10b86b58), (EBX));
  /* 10b84455 jmp 0x10b84479 */
  goto L_10b84479;
L_10b84457:;
  /* 10b84457 push edi */
  push32((uint32_t)(EDI));
  /* 10b84458 push edi */
  push32((uint32_t)(EDI));
  /* 10b84459 push ebx */
  push32((uint32_t)(EBX));
  /* 10b8445a push 0x10b85474 */
  push32((uint32_t)(0x10b85474u));
  /* 10b8445f push esi */
  push32((uint32_t)(ESI));
  /* 10b84460 push edi */
  push32((uint32_t)(EDI));
  /* 10b84461 call dword ptr [0x10b85018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85018))), 0x10b84467u);
  /* 10b84467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b84469 je 0x10b84591 */
  if (C.zf) goto L_10b84591;
  /* 10b8446f mov dword ptr [0x10b86b58], 2 */
  w32((uint32_t)(0x10b86b58), (0x2u));
L_10b84479:;
  /* 10b84479 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8447c jle 0x10b8448e */
  if ((C.zf||C.sf!=C.of)) goto L_10b8448e;
  /* 10b8447e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b84481 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b84484 call 0x10b84627 */
  push32(0x10b84489u); f_10b84627();
  /* 10b84489 pop ecx */
  ECX = (pop32());
  /* 10b8448a pop ecx */
  ECX = (pop32());
  /* 10b8448b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10b8448e:;
  /* 10b8448e mov eax, dword ptr [0x10b86b58] */
  EAX = (r32((uint32_t)(0x10b86b58)));
  /* 10b84493 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84496 jne 0x10b844b5 */
  if (!C.zf) goto L_10b844b5;
  /* 10b84498 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10b8449b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10b8449e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b844a1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b844a4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b844a7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b844aa call dword ptr [0x10b85018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85018))), 0x10b844b0u);
  /* 10b844b0 jmp 0x10b84593 */
  goto L_10b84593;
L_10b844b5:;
  /* 10b844b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b844b8 jne 0x10b84591 */
  if (!C.zf) goto L_10b84591;
  /* 10b844be cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b844c1 jne 0x10b844cb */
  if (!C.zf) goto L_10b844cb;
  /* 10b844c3 mov eax, dword ptr [0x10b86b50] */
  EAX = (r32((uint32_t)(0x10b86b50)));
  /* 10b844c8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10b844cb:;
  /* 10b844cb push edi */
  push32((uint32_t)(EDI));
  /* 10b844cc push edi */
  push32((uint32_t)(EDI));
  /* 10b844cd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b844d0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b844d3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10b844d6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b844d8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b844da and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10b844dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b844de push eax */
  push32((uint32_t)(EAX));
  /* 10b844df push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10b844e2 call dword ptr [0x10b8501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8501c))), 0x10b844e8u);
  /* 10b844e8 mov ebx, eax */
  EBX = (EAX);
  /* 10b844ea mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10b844ed cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b844ef je 0x10b84591 */
  if (C.zf) goto L_10b84591;
  /* 10b844f5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10b844f8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10b844fb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b844fe and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b84500 call 0x10b84cb0 */
  push32(0x10b84505u); f_10b84cb0();
  /* 10b84505 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b84508 mov eax, esp */
  EAX = (ESP);
  /* 10b8450a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b8450d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b84511 jmp 0x10b84526 */
  goto L_10b84526;
  /* 10b84513 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b84515 pop eax */
  EAX = (pop32());
  /* 10b84516 ret  */
  ESPCHK(0x10b84403u, _esp0);
  ESP += 4; return;
  /* 10b84517 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b8451a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b8451c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10b8451f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b84523 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10b84526:;
  /* 10b84526 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84529 je 0x10b84591 */
  if (C.zf) goto L_10b84591;
  /* 10b8452b push ebx */
  push32((uint32_t)(EBX));
  /* 10b8452c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10b8452f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b84532 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b84535 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b84537 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10b8453a call dword ptr [0x10b8501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8501c))), 0x10b84540u);
  /* 10b84540 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b84542 je 0x10b84591 */
  if (C.zf) goto L_10b84591;
  /* 10b84544 push edi */
  push32((uint32_t)(EDI));
  /* 10b84545 push edi */
  push32((uint32_t)(EDI));
  /* 10b84546 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84547 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10b8454a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b8454d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b84550 call dword ptr [0x10b85014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85014))), 0x10b84556u);
  /* 10b84556 mov esi, eax */
  ESI = (EAX);
  /* 10b84558 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10b8455b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8455d je 0x10b84591 */
  if (C.zf) goto L_10b84591;
  /* 10b8455f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10b84563 je 0x10b845a5 */
  if (C.zf) goto L_10b845a5;
  /* 10b84565 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84568 je 0x10b84620 */
  if (C.zf) goto L_10b84620;
  /* 10b8456e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84571 jg 0x10b84591 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b84591;
  /* 10b84573 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10b84576 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10b84579 push ebx */
  push32((uint32_t)(EBX));
  /* 10b8457a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10b8457d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b84580 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b84583 call dword ptr [0x10b85014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85014))), 0x10b84589u);
  /* 10b84589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b8458b jne 0x10b84620 */
  if (!C.zf) goto L_10b84620;
L_10b84591:;
  /* 10b84591 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b84593:;
  /* 10b84593 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10b84596 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b84599 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b845a0 pop edi */
  EDI = (pop32());
  /* 10b845a1 pop esi */
  ESI = (pop32());
  /* 10b845a2 pop ebx */
  EBX = (pop32());
  /* 10b845a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b845a4 ret  */
  ESPCHK(0x10b84403u, _esp0);
  ESP += 4; return;
L_10b845a5:;
  /* 10b845a5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b845ac lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10b845af add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b845b2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b845b4 call 0x10b84cb0 */
  push32(0x10b845b9u); f_10b84cb0();
  /* 10b845b9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b845bc mov ebx, esp */
  EBX = (ESP);
  /* 10b845be mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10b845c1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b845c5 jmp 0x10b845d9 */
  goto L_10b845d9;
  /* 10b845c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b845c9 pop eax */
  EAX = (pop32());
  /* 10b845ca ret  */
  ESPCHK(0x10b84403u, _esp0);
  ESP += 4; return;
  /* 10b845cb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b845ce xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b845d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b845d2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b845d6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10b845d9:;
  /* 10b845d9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b845db je 0x10b84591 */
  if (C.zf) goto L_10b84591;
  /* 10b845dd push esi */
  push32((uint32_t)(ESI));
  /* 10b845de push ebx */
  push32((uint32_t)(EBX));
  /* 10b845df push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10b845e2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10b845e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b845e8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b845eb call dword ptr [0x10b85014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85014))), 0x10b845f1u);
  /* 10b845f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b845f3 je 0x10b84591 */
  if (C.zf) goto L_10b84591;
  /* 10b845f5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b845f8 push edi */
  push32((uint32_t)(EDI));
  /* 10b845f9 push edi */
  push32((uint32_t)(EDI));
  /* 10b845fa jne 0x10b84600 */
  if (!C.zf) goto L_10b84600;
  /* 10b845fc push edi */
  push32((uint32_t)(EDI));
  /* 10b845fd push edi */
  push32((uint32_t)(EDI));
  /* 10b845fe jmp 0x10b84606 */
  goto L_10b84606;
L_10b84600:;
  /* 10b84600 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10b84603 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10b84606:;
  /* 10b84606 push esi */
  push32((uint32_t)(ESI));
  /* 10b84607 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84608 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b8460d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10b84610 call dword ptr [0x10b85068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85068))), 0x10b84616u);
  /* 10b84616 mov esi, eax */
  ESI = (EAX);
  /* 10b84618 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8461a je 0x10b84591 */
  if (C.zf) goto L_10b84591;
L_10b84620:;
  /* 10b84620 mov eax, esi */
  EAX = (ESI);
  /* 10b84622 jmp 0x10b84593 */
  goto L_10b84593;
}

/* FUN_10004627 @ 0x10b84627 (43 bytes, 20 insns) */
void f_10b84627(void) {
  FTRACE(0x10b84627u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84627 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b8462b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b8462f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b84631 push esi */
  push32((uint32_t)(ESI));
  /* 10b84632 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10b84635 je 0x10b84644 */
  if (C.zf) goto L_10b84644;
L_10b84637:;
  /* 10b84637 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b8463a je 0x10b84644 */
  if (C.zf) goto L_10b84644;
  /* 10b8463c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b8463d mov esi, ecx */
  ESI = (ECX);
  /* 10b8463f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b84640 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b84642 jne 0x10b84637 */
  if (!C.zf) goto L_10b84637;
L_10b84644:;
  /* 10b84644 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b84647 pop esi */
  ESI = (pop32());
  /* 10b84648 jne 0x10b8464f */
  if (!C.zf) goto L_10b8464f;
  /* 10b8464a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b8464e ret  */
  ESPCHK(0x10b84627u, _esp0);
  ESP += 4; return;
L_10b8464f:;
  /* 10b8464f mov eax, edx */
  EAX = (EDX);
  /* 10b84651 ret  */
  ESPCHK(0x10b84627u, _esp0);
  ESP += 4; return;
}

/* FUN_10004652 @ 0x10b84652 (318 bytes, 123 insns) */
void f_10b84652(void) {
  FTRACE(0x10b84652u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84652 push ebp */
  push32((uint32_t)(EBP));
  /* 10b84653 mov ebp, esp */
  EBP = (ESP);
  /* 10b84655 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b84657 push 0x10b85498 */
  push32((uint32_t)(0x10b85498u));
  /* 10b8465c push 0x10b84bd0 */
  push32((uint32_t)(0x10b84bd0u));
  /* 10b84661 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b84667 push eax */
  push32((uint32_t)(EAX));
  /* 10b84668 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b8466f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b84672 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84673 push esi */
  push32((uint32_t)(ESI));
  /* 10b84674 push edi */
  push32((uint32_t)(EDI));
  /* 10b84675 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b84678 mov eax, dword ptr [0x10b86b5c] */
  EAX = (r32((uint32_t)(0x10b86b5c)));
  /* 10b8467d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b8467f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84681 jne 0x10b846c1 */
  if (!C.zf) goto L_10b846c1;
  /* 10b84683 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10b84686 push eax */
  push32((uint32_t)(EAX));
  /* 10b84687 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b84689 pop esi */
  ESI = (pop32());
  /* 10b8468a push esi */
  push32((uint32_t)(ESI));
  /* 10b8468b push 0x10b85478 */
  push32((uint32_t)(0x10b85478u));
  /* 10b84690 push esi */
  push32((uint32_t)(ESI));
  /* 10b84691 call dword ptr [0x10b8500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8500c))), 0x10b84697u);
  /* 10b84697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b84699 je 0x10b8469f */
  if (C.zf) goto L_10b8469f;
  /* 10b8469b mov eax, esi */
  EAX = (ESI);
  /* 10b8469d jmp 0x10b846bc */
  goto L_10b846bc;
L_10b8469f:;
  /* 10b8469f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10b846a2 push eax */
  push32((uint32_t)(EAX));
  /* 10b846a3 push esi */
  push32((uint32_t)(ESI));
  /* 10b846a4 push 0x10b85474 */
  push32((uint32_t)(0x10b85474u));
  /* 10b846a9 push esi */
  push32((uint32_t)(ESI));
  /* 10b846aa push ebx */
  push32((uint32_t)(EBX));
  /* 10b846ab call dword ptr [0x10b85010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85010))), 0x10b846b1u);
  /* 10b846b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b846b3 je 0x10b84787 */
  if (C.zf) goto L_10b84787;
  /* 10b846b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b846bb pop eax */
  EAX = (pop32());
L_10b846bc:;
  /* 10b846bc mov dword ptr [0x10b86b5c], eax */
  w32((uint32_t)(0x10b86b5c), (EAX));
L_10b846c1:;
  /* 10b846c1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b846c4 jne 0x10b846ea */
  if (!C.zf) goto L_10b846ea;
  /* 10b846c6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b846c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b846cb jne 0x10b846d2 */
  if (!C.zf) goto L_10b846d2;
  /* 10b846cd mov eax, dword ptr [0x10b86b40] */
  EAX = (r32((uint32_t)(0x10b86b40)));
L_10b846d2:;
  /* 10b846d2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b846d5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b846d8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b846db push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b846de push eax */
  push32((uint32_t)(EAX));
  /* 10b846df call dword ptr [0x10b85010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b85010))), 0x10b846e5u);
  /* 10b846e5 jmp 0x10b84789 */
  goto L_10b84789;
L_10b846ea:;
  /* 10b846ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b846ed jne 0x10b84787 */
  if (!C.zf) goto L_10b84787;
  /* 10b846f3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b846f6 jne 0x10b84700 */
  if (!C.zf) goto L_10b84700;
  /* 10b846f8 mov eax, dword ptr [0x10b86b50] */
  EAX = (r32((uint32_t)(0x10b86b50)));
  /* 10b846fd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10b84700:;
  /* 10b84700 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84701 push ebx */
  push32((uint32_t)(EBX));
  /* 10b84702 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b84705 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b84708 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b8470b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b8470d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b8470f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10b84712 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b84713 push eax */
  push32((uint32_t)(EAX));
  /* 10b84714 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10b84717 call dword ptr [0x10b8501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8501c))), 0x10b8471du);
  /* 10b8471d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b84720 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84722 je 0x10b84787 */
  if (C.zf) goto L_10b84787;
  /* 10b84724 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10b84727 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10b8472a mov eax, edi */
  EAX = (EDI);
  /* 10b8472c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8472f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b84731 call 0x10b84cb0 */
  push32(0x10b84736u); f_10b84cb0();
  /* 10b84736 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b84739 mov esi, esp */
  ESI = (ESP);
  /* 10b8473b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10b8473e push edi */
  push32((uint32_t)(EDI));
  /* 10b8473f push ebx */
  push32((uint32_t)(EBX));
  /* 10b84740 push esi */
  push32((uint32_t)(ESI));
  /* 10b84741 call 0x10b84390 */
  push32(0x10b84746u); f_10b84390();
  /* 10b84746 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84749 jmp 0x10b84756 */
  goto L_10b84756;
  /* 10b8474b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8474d pop eax */
  EAX = (pop32());
  /* 10b8474e ret  */
  ESPCHK(0x10b84652u, _esp0);
  ESP += 4; return;
  /* 10b8474f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b84752 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b84754 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10b84756:;
  /* 10b84756 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b8475a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8475c je 0x10b84787 */
  if (C.zf) goto L_10b84787;
  /* 10b8475e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10b84761 push esi */
  push32((uint32_t)(ESI));
  /* 10b84762 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b84765 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b84768 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b8476a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10b8476d call dword ptr [0x10b8501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8501c))), 0x10b84773u);
  /* 10b84773 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84775 je 0x10b84787 */
  if (C.zf) goto L_10b84787;
  /* 10b84777 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b8477a push eax */
  push32((uint32_t)(EAX));
  /* 10b8477b push esi */
  push32((uint32_t)(ESI));
  /* 10b8477c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b8477f call dword ptr [0x10b8500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b8500c))), 0x10b84785u);
  /* 10b84785 jmp 0x10b84789 */
  goto L_10b84789;
L_10b84787:;
  /* 10b84787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b84789:;
  /* 10b84789 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10b8478c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b8478f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b84796 pop edi */
  EDI = (pop32());
  /* 10b84797 pop esi */
  ESI = (pop32());
  /* 10b84798 pop ebx */
  EBX = (pop32());
  /* 10b84799 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b8479a ret  */
  ESPCHK(0x10b84652u, _esp0);
  ESP += 4; return;
}

/* FUN_100047a0 @ 0x10b847a0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10b847a0(void) {
  FTRACE(0x10b847a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b847a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b847a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b847a3 push edi */
  push32((uint32_t)(EDI));
  /* 10b847a4 push esi */
  push32((uint32_t)(ESI));
  /* 10b847a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b847a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b847ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b847ae mov eax, ecx */
  EAX = (ECX);
  /* 10b847b0 mov edx, ecx */
  EDX = (ECX);
  /* 10b847b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b847b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b847b6 jbe 0x10b847c0 */
  if ((C.cf||C.zf)) goto L_10b847c0;
  /* 10b847b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b847ba jb 0x10b84938 */
  if (C.cf) goto L_10b84938;
L_10b847c0:;
  /* 10b847c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b847c6 jne 0x10b847dc */
  if (!C.zf) goto L_10b847dc;
  /* 10b847c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b847cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b847ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b847d1 jb 0x10b847fc */
  if (C.cf) goto L_10b847fc;
  /* 10b847d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b847d5 jmp dword ptr [edx*4 + 0x10b848e8] */
  switch (EDX) {
    case 0: goto L_10b848f8;
    case 1: goto L_10b84900;
    case 2: goto L_10b8490c;
    case 3: goto L_10b84920;
    default: x86_unimpl("switch@0x10b847d5 out of table"); return;
  }
L_10b847dc:;
  /* 10b847dc mov eax, edi */
  EAX = (EDI);
  /* 10b847de mov edx, 3 */
  EDX = (0x3u);
  /* 10b847e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b847e6 jb 0x10b847f4 */
  if (C.cf) goto L_10b847f4;
  /* 10b847e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b847eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b847ed jmp dword ptr [eax*4 + 0x10b84800] */
  switch (EAX) {
    case 1: goto L_10b84810;
    case 2: goto L_10b8483c;
    case 3: goto L_10b84860;
    default: x86_unimpl("switch@0x10b847ed out of table"); return;
  }
L_10b847f4:;
  /* 10b847f4 jmp dword ptr [ecx*4 + 0x10b848f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10b848f8)))); return;
  /* 10b847fb nop  */
  /* nop */
L_10b847fc:;
  /* 10b847fc jmp dword ptr [ecx*4 + 0x10b8487c] */
  switch (ECX) {
    case 0: goto L_10b848df;
    case 1: goto L_10b848cc;
    case 2: goto L_10b848c4;
    case 3: goto L_10b848bc;
    case 4: goto L_10b848b4;
    case 5: goto L_10b848ac;
    case 6: goto L_10b848a4;
    case 7: goto L_10b8489c;
    default: x86_unimpl("switch@0x10b847fc out of table"); return;
  }
  /* 10b84803 nop  */
  /* nop */
L_10b84810:;
  /* 10b84810 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b84812 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b84814 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b84816 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b84819 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b8481c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b8481f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b84822 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b84825 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84828 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8482b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8482e jb 0x10b847fc */
  if (C.cf) goto L_10b847fc;
  /* 10b84830 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b84832 jmp dword ptr [edx*4 + 0x10b848e8] */
  switch (EDX) {
    case 0: goto L_10b848f8;
    case 1: goto L_10b84900;
    case 2: goto L_10b8490c;
    case 3: goto L_10b84920;
    default: x86_unimpl("switch@0x10b84832 out of table"); return;
  }
  /* 10b84839 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b8483c:;
  /* 10b8483c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b8483e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b84840 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b84842 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b84845 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b84848 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b8484b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b8484e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84851 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84854 jb 0x10b847fc */
  if (C.cf) goto L_10b847fc;
  /* 10b84856 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b84858 jmp dword ptr [edx*4 + 0x10b848e8] */
  switch (EDX) {
    case 0: goto L_10b848f8;
    case 1: goto L_10b84900;
    case 2: goto L_10b8490c;
    case 3: goto L_10b84920;
    default: x86_unimpl("switch@0x10b84858 out of table"); return;
  }
  /* 10b8485f nop  */
  /* nop */
L_10b84860:;
  /* 10b84860 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b84862 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b84864 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b84866 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b84867 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b8486a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b8486b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b8486e jb 0x10b847fc */
  if (C.cf) goto L_10b847fc;
  /* 10b84870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b84872 jmp dword ptr [edx*4 + 0x10b848e8] */
  switch (EDX) {
    case 0: goto L_10b848f8;
    case 1: goto L_10b84900;
    case 2: goto L_10b8490c;
    case 3: goto L_10b84920;
    default: x86_unimpl("switch@0x10b84872 out of table"); return;
  }
  /* 10b84879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b8489c:;
  /* 10b8489c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10b848a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10b848a4:;
  /* 10b848a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10b848a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10b848ac:;
  /* 10b848ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10b848b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10b848b4:;
  /* 10b848b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10b848b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10b848bc:;
  /* 10b848bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10b848c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10b848c4:;
  /* 10b848c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10b848c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10b848cc:;
  /* 10b848cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10b848d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10b848d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b848db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b848dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b848df:;
  /* 10b848df jmp dword ptr [edx*4 + 0x10b848e8] */
  switch (EDX) {
    case 0: goto L_10b848f8;
    case 1: goto L_10b84900;
    case 2: goto L_10b8490c;
    case 3: goto L_10b84920;
    default: x86_unimpl("switch@0x10b848df out of table"); return;
  }
  /* 10b848e6 mov edi, edi */
  EDI = (EDI);
L_10b848f8:;
  /* 10b848f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b848fb pop esi */
  ESI = (pop32());
  /* 10b848fc pop edi */
  EDI = (pop32());
  /* 10b848fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b848fe ret  */
  ESPCHK(0x10b847a0u, _esp0);
  ESP += 4; return;
  /* 10b848ff nop  */
  /* nop */
L_10b84900:;
  /* 10b84900 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b84902 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b84904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b84907 pop esi */
  ESI = (pop32());
  /* 10b84908 pop edi */
  EDI = (pop32());
  /* 10b84909 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b8490a ret  */
  ESPCHK(0x10b847a0u, _esp0);
  ESP += 4; return;
  /* 10b8490b nop  */
  /* nop */
L_10b8490c:;
  /* 10b8490c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b8490e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b84910 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b84913 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b84916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b84919 pop esi */
  ESI = (pop32());
  /* 10b8491a pop edi */
  EDI = (pop32());
  /* 10b8491b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b8491c ret  */
  ESPCHK(0x10b847a0u, _esp0);
  ESP += 4; return;
  /* 10b8491d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b84920:;
  /* 10b84920 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b84922 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b84924 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b84927 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b8492a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b8492d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b84930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b84933 pop esi */
  ESI = (pop32());
  /* 10b84934 pop edi */
  EDI = (pop32());
  /* 10b84935 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b84936 ret  */
  ESPCHK(0x10b847a0u, _esp0);
  ESP += 4; return;
  /* 10b84937 nop  */
  /* nop */
L_10b84938:;
  /* 10b84938 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10b8493c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10b84940 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b84946 jne 0x10b8496c */
  if (!C.zf) goto L_10b8496c;
  /* 10b84948 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b8494b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b8494e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84951 jb 0x10b84960 */
  if (C.cf) goto L_10b84960;
  /* 10b84953 std  */
  C.df=1;
  /* 10b84954 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b84956 cld  */
  C.df=0;
  /* 10b84957 jmp dword ptr [edx*4 + 0x10b84a80] */
  switch (EDX) {
    case 0: goto L_10b84a90;
    case 1: goto L_10b84a98;
    case 2: goto L_10b84aa8;
    case 3: goto L_10b84abc;
    default: x86_unimpl("switch@0x10b84957 out of table"); return;
  }
  /* 10b8495e mov edi, edi */
  EDI = (EDI);
L_10b84960:;
  /* 10b84960 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b84962 jmp dword ptr [ecx*4 + 0x10b84a30] */
  switch (ECX) {
    case 0: goto L_10b84a77;
    default: x86_unimpl("switch@0x10b84962 out of table"); return;
  }
  /* 10b84969 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b8496c:;
  /* 10b8496c mov eax, edi */
  EAX = (EDI);
  /* 10b8496e mov edx, 3 */
  EDX = (0x3u);
  /* 10b84973 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84976 jb 0x10b84984 */
  if (C.cf) goto L_10b84984;
  /* 10b84978 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b8497b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b8497d jmp dword ptr [eax*4 + 0x10b84988] */
  switch (EAX) {
    case 1: goto L_10b84998;
    case 2: goto L_10b849b8;
    case 3: goto L_10b849e0;
    default: x86_unimpl("switch@0x10b8497d out of table"); return;
  }
L_10b84984:;
  /* 10b84984 jmp dword ptr [ecx*4 + 0x10b84a80] */
  switch (ECX) {
    case 0: goto L_10b84a90;
    case 1: goto L_10b84a98;
    case 2: goto L_10b84aa8;
    case 3: goto L_10b84abc;
    default: x86_unimpl("switch@0x10b84984 out of table"); return;
  }
  /* 10b8498b nop  */
  /* nop */
L_10b84998:;
  /* 10b84998 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b8499b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b8499d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b849a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b849a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b849a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b849a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b849a8 jb 0x10b84960 */
  if (C.cf) goto L_10b84960;
  /* 10b849aa std  */
  C.df=1;
  /* 10b849ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b849ad cld  */
  C.df=0;
  /* 10b849ae jmp dword ptr [edx*4 + 0x10b84a80] */
  switch (EDX) {
    case 0: goto L_10b84a90;
    case 1: goto L_10b84a98;
    case 2: goto L_10b84aa8;
    case 3: goto L_10b84abc;
    default: x86_unimpl("switch@0x10b849ae out of table"); return;
  }
  /* 10b849b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b849b8:;
  /* 10b849b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b849bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b849bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b849c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b849c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b849c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b849c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b849cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b849cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b849d2 jb 0x10b84960 */
  if (C.cf) goto L_10b84960;
  /* 10b849d4 std  */
  C.df=1;
  /* 10b849d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b849d7 cld  */
  C.df=0;
  /* 10b849d8 jmp dword ptr [edx*4 + 0x10b84a80] */
  switch (EDX) {
    case 0: goto L_10b84a90;
    case 1: goto L_10b84a98;
    case 2: goto L_10b84aa8;
    case 3: goto L_10b84abc;
    default: x86_unimpl("switch@0x10b849d8 out of table"); return;
  }
  /* 10b849df nop  */
  /* nop */
L_10b849e0:;
  /* 10b849e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b849e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b849e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b849e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b849eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b849ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b849f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b849f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b849f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b849fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b849fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84a00 jb 0x10b84960 */
  if (C.cf) goto L_10b84960;
  /* 10b84a06 std  */
  C.df=1;
  /* 10b84a07 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b84a09 cld  */
  C.df=0;
  /* 10b84a0a jmp dword ptr [edx*4 + 0x10b84a80] */
  switch (EDX) {
    case 0: goto L_10b84a90;
    case 1: goto L_10b84a98;
    case 2: goto L_10b84aa8;
    case 3: goto L_10b84abc;
    default: x86_unimpl("switch@0x10b84a0a out of table"); return;
  }
  /* 10b84a11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10b84a14 xor al, 0x4a */
  { uint32_t _r=(AL)^(0x4au); AL = (_r); fl_logic(_r,8); }
  /* 10b84a16 mov eax, 0xb84a3c10 */
  EAX = (0xb84a3c10u);
  /* 10b84a1b adc byte ptr [edx + ecx*2 - 0x48], al */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2 + -0x48))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2 + -0x48), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b84a1f adc byte ptr [edx + ecx*2 - 0x48], cl */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2 + -0x48))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2 + -0x48), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b84a23 adc byte ptr [edx + ecx*2 - 0x48], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2 + -0x48))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2 + -0x48), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b84a27 adc byte ptr [edx + ecx*2 - 0x48], bl */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2 + -0x48))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2 + -0x48), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b84a2b adc byte ptr [edx + ecx*2 - 0x48], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + ECX*2 + -0x48))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ECX*2 + -0x48), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b84a34 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10b84a38 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10b84a3c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10b84a40 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10b84a44 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10b84a48 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10b84a4c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10b84a50 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10b84a54 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10b84a58 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10b84a5c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10b84a60 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10b84a64 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10b84a68 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10b84a6c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b84a73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84a75 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b84a77:;
  /* 10b84a77 jmp dword ptr [edx*4 + 0x10b84a80] */
  switch (EDX) {
    case 0: goto L_10b84a90;
    case 1: goto L_10b84a98;
    case 2: goto L_10b84aa8;
    case 3: goto L_10b84abc;
    default: x86_unimpl("switch@0x10b84a77 out of table"); return;
  }
  /* 10b84a7e mov edi, edi */
  EDI = (EDI);
L_10b84a90:;
  /* 10b84a90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b84a93 pop esi */
  ESI = (pop32());
  /* 10b84a94 pop edi */
  EDI = (pop32());
  /* 10b84a95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b84a96 ret  */
  ESPCHK(0x10b847a0u, _esp0);
  ESP += 4; return;
  /* 10b84a97 nop  */
  /* nop */
L_10b84a98:;
  /* 10b84a98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b84a9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b84a9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b84aa1 pop esi */
  ESI = (pop32());
  /* 10b84aa2 pop edi */
  EDI = (pop32());
  /* 10b84aa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b84aa4 ret  */
  ESPCHK(0x10b847a0u, _esp0);
  ESP += 4; return;
  /* 10b84aa5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b84aa8:;
  /* 10b84aa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b84aab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b84aae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b84ab1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b84ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b84ab7 pop esi */
  ESI = (pop32());
  /* 10b84ab8 pop edi */
  EDI = (pop32());
  /* 10b84ab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b84aba ret  */
  ESPCHK(0x10b847a0u, _esp0);
  ESP += 4; return;
  /* 10b84abb nop  */
  /* nop */
L_10b84abc:;
  /* 10b84abc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b84abf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b84ac2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b84ac5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b84ac8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b84acb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b84ace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b84ad1 pop esi */
  ESI = (pop32());
  /* 10b84ad2 pop edi */
  EDI = (pop32());
  /* 10b84ad3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b84ad4 ret  */
  ESPCHK(0x10b847a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10b84ad8 (32 bytes, 18 insns) */
void f_10b84ad8(void) {
  FTRACE(0x10b84ad8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84ad8 push ebp */
  push32((uint32_t)(EBP));
  /* 10b84ad9 mov ebp, esp */
  EBP = (ESP);
  /* 10b84adb push ebx */
  push32((uint32_t)(EBX));
  /* 10b84adc push esi */
  push32((uint32_t)(ESI));
  /* 10b84add push edi */
  push32((uint32_t)(EDI));
  /* 10b84ade push ebp */
  push32((uint32_t)(EBP));
  /* 10b84adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b84ae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b84ae3 push 0x10b84af0 */
  push32((uint32_t)(0x10b84af0u));
  /* 10b84ae8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b84aeb call 0x10b84ce0 */
  push32(0x10b84af0u); f_10b84ce0();
  /* 10b84af0 pop ebp */
  EBP = (pop32());
  /* 10b84af1 pop edi */
  EDI = (pop32());
  /* 10b84af2 pop esi */
  ESI = (pop32());
  /* 10b84af3 pop ebx */
  EBX = (pop32());
  /* 10b84af4 mov esp, ebp */
  ESP = (EBP);
  /* 10b84af6 pop ebp */
  EBP = (pop32());
  /* 10b84af7 ret  */
  ESPCHK(0x10b84ad8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10b84b1a (104 bytes, 33 insns) */
void f_10b84b1a(void) {
  FTRACE(0x10b84b1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84b1a push ebx */
  push32((uint32_t)(EBX));
  /* 10b84b1b push esi */
  push32((uint32_t)(ESI));
  /* 10b84b1c push edi */
  push32((uint32_t)(EDI));
  /* 10b84b1d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b84b21 push eax */
  push32((uint32_t)(EAX));
  /* 10b84b22 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10b84b24 push 0x10b84af8 */
  push32((uint32_t)(0x10b84af8u));
  /* 10b84b29 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10b84b30 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10b84b37:;
  /* 10b84b37 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10b84b3b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b84b3e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10b84b41 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84b44 je 0x10b84b74 */
  if (C.zf) goto L_10b84b74;
  /* 10b84b46 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84b4a je 0x10b84b74 */
  if (C.zf) goto L_10b84b74;
  /* 10b84b4c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10b84b4f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10b84b52 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10b84b56 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10b84b59 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84b5e jne 0x10b84b72 */
  if (!C.zf) goto L_10b84b72;
  /* 10b84b60 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10b84b65 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10b84b69 call 0x10b84bae */
  push32(0x10b84b6eu); f_10b84bae();
  /* 10b84b6e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10b84b72u);
L_10b84b72:;
  /* 10b84b72 jmp 0x10b84b37 */
  goto L_10b84b37;
L_10b84b74:;
  /* 10b84b74 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10b84b7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84b7e pop edi */
  EDI = (pop32());
  /* 10b84b7f pop esi */
  ESI = (pop32());
  /* 10b84b80 pop ebx */
  EBX = (pop32());
  /* 10b84b81 ret  */
  ESPCHK(0x10b84b1au, _esp0);
  ESP += 4; return;
}

/* FUN_10004bae @ 0x10b84bae (24 bytes, 10 insns) */
void f_10b84bae(void) {
  FTRACE(0x10b84baeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84bae push ebx */
  push32((uint32_t)(EBX));
  /* 10b84baf push ecx */
  push32((uint32_t)(ECX));
  /* 10b84bb0 mov ebx, 0x10b86780 */
  EBX = (0x10b86780u);
  /* 10b84bb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b84bb8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10b84bbb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10b84bbe mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10b84bc1 pop ecx */
  ECX = (pop32());
  /* 10b84bc2 pop ebx */
  EBX = (pop32());
  /* 10b84bc3 ret 4 */
  ESPCHK(0x10b84baeu, _esp0);
  ESP += 8; return;
}

/* FUN_10004c8d @ 0x10b84c8d (27 bytes, 11 insns) */
void f_10b84c8d(void) {
  FTRACE(0x10b84c8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84c8d push ebp */
  push32((uint32_t)(EBP));
  /* 10b84c8e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b84c92 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10b84c94 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b84c97 push eax */
  push32((uint32_t)(EAX));
  /* 10b84c98 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b84c9b push eax */
  push32((uint32_t)(EAX));
  /* 10b84c9c call 0x10b84b1a */
  push32(0x10b84ca1u); f_10b84b1a();
  /* 10b84ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b84ca4 pop ebp */
  EBP = (pop32());
  /* 10b84ca5 ret 4 */
  ESPCHK(0x10b84c8du, _esp0);
  ESP += 8; return;
}

/* FUN_10004cb0 @ 0x10b84cb0 (47 bytes, 17 insns) */
void f_10b84cb0(void) {
  FTRACE(0x10b84cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b84cb1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84cb6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10b84cba jb 0x10b84cd0 */
  if (C.cf) goto L_10b84cd0;
L_10b84cbc:;
  /* 10b84cbc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b84cc2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b84cc7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10b84cc9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b84cce jae 0x10b84cbc */
  if (!C.cf) goto L_10b84cbc;
L_10b84cd0:;
  /* 10b84cd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b84cd2 mov eax, esp */
  EAX = (ESP);
  /* 10b84cd4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10b84cd6 mov esp, ecx */
  ESP = (ECX);
  /* 10b84cd8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b84cda mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b84cdd push eax */
  push32((uint32_t)(EAX));
  /* 10b84cde ret  */
  ESPCHK(0x10b84cb0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10b84ce0 (6 bytes, 1 insns) */
void f_10b84ce0(void) {
  FTRACE(0x10b84ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b84ce0 jmp dword ptr [0x10b85008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b85008)))); return;
}

