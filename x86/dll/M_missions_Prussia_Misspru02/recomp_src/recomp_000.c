#include "recomp.h"

/* OnInit @ 0x10941000 (1366 bytes, 353 insns) */
void f_10941000(void) {
  FTRACE(0x10941000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10941000 push ebx */
  push32((uint32_t)(EBX));
  /* 10941001 push esi */
  push32((uint32_t)(ESI));
  /* 10941002 mov esi, dword ptr [0x10947154] */
  ESI = (r32((uint32_t)(0x10947154)));
  /* 10941008 push edi */
  push32((uint32_t)(EDI));
  /* 10941009 push 0x109483b4 */
  push32((uint32_t)(0x109483b4u));
  /* 1094100e push 0x10949000 */
  push32((uint32_t)(0x10949000u));
  /* 10941013 call esi */
  call_ind((uint32_t)(ESI), 0x10941015u);
  /* 10941015 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 1094101a push 0x10948ff0 */
  push32((uint32_t)(0x10948ff0u));
  /* 1094101f call esi */
  call_ind((uint32_t)(ESI), 0x10941021u);
  /* 10941021 push 0x1094839c */
  push32((uint32_t)(0x1094839cu));
  /* 10941026 push 0x10948fe0 */
  push32((uint32_t)(0x10948fe0u));
  /* 1094102b call esi */
  call_ind((uint32_t)(ESI), 0x1094102du);
  /* 1094102d push 0x10948390 */
  push32((uint32_t)(0x10948390u));
  /* 10941032 push 0x10948fd0 */
  push32((uint32_t)(0x10948fd0u));
  /* 10941037 call esi */
  call_ind((uint32_t)(ESI), 0x10941039u);
  /* 10941039 push 0x10948384 */
  push32((uint32_t)(0x10948384u));
  /* 1094103e push 0x10948fc8 */
  push32((uint32_t)(0x10948fc8u));
  /* 10941043 call esi */
  call_ind((uint32_t)(ESI), 0x10941045u);
  /* 10941045 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094104a push 0x10948f88 */
  push32((uint32_t)(0x10948f88u));
  /* 1094104f call esi */
  call_ind((uint32_t)(ESI), 0x10941051u);
  /* 10941051 push 0x1094836c */
  push32((uint32_t)(0x1094836cu));
  /* 10941056 push 0x10948f98 */
  push32((uint32_t)(0x10948f98u));
  /* 1094105b call esi */
  call_ind((uint32_t)(ESI), 0x1094105du);
  /* 1094105d push 0x10948360 */
  push32((uint32_t)(0x10948360u));
  /* 10941062 push 0x10948d98 */
  push32((uint32_t)(0x10948d98u));
  /* 10941067 call esi */
  call_ind((uint32_t)(ESI), 0x10941069u);
  /* 10941069 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094106c push 0x10948354 */
  push32((uint32_t)(0x10948354u));
  /* 10941071 push 0x10948da8 */
  push32((uint32_t)(0x10948da8u));
  /* 10941076 call esi */
  call_ind((uint32_t)(ESI), 0x10941078u);
  /* 10941078 push 0x10948348 */
  push32((uint32_t)(0x10948348u));
  /* 1094107d push 0x10948d70 */
  push32((uint32_t)(0x10948d70u));
  /* 10941082 call esi */
  call_ind((uint32_t)(ESI), 0x10941084u);
  /* 10941084 push 0x1094833c */
  push32((uint32_t)(0x1094833cu));
  /* 10941089 push 0x10948d78 */
  push32((uint32_t)(0x10948d78u));
  /* 1094108e call esi */
  call_ind((uint32_t)(ESI), 0x10941090u);
  /* 10941090 push 0x10948334 */
  push32((uint32_t)(0x10948334u));
  /* 10941095 push 0x10948e30 */
  push32((uint32_t)(0x10948e30u));
  /* 1094109a call esi */
  call_ind((uint32_t)(ESI), 0x1094109cu);
  /* 1094109c push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 109410a1 push 0x10949010 */
  push32((uint32_t)(0x10949010u));
  /* 109410a6 call esi */
  call_ind((uint32_t)(ESI), 0x109410a8u);
  /* 109410a8 push 0x10948320 */
  push32((uint32_t)(0x10948320u));
  /* 109410ad push 0x10948e50 */
  push32((uint32_t)(0x10948e50u));
  /* 109410b2 call esi */
  call_ind((uint32_t)(ESI), 0x109410b4u);
  /* 109410b4 push 0x10948314 */
  push32((uint32_t)(0x10948314u));
  /* 109410b9 push 0x10949030 */
  push32((uint32_t)(0x10949030u));
  /* 109410be call esi */
  call_ind((uint32_t)(ESI), 0x109410c0u);
  /* 109410c0 push 0x1094830c */
  push32((uint32_t)(0x1094830cu));
  /* 109410c5 push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 109410ca call esi */
  call_ind((uint32_t)(ESI), 0x109410ccu);
  /* 109410cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109410cf push 0x10948304 */
  push32((uint32_t)(0x10948304u));
  /* 109410d4 push 0x10948d30 */
  push32((uint32_t)(0x10948d30u));
  /* 109410d9 call esi */
  call_ind((uint32_t)(ESI), 0x109410dbu);
  /* 109410db push 0x109482fc */
  push32((uint32_t)(0x109482fcu));
  /* 109410e0 push 0x10948e28 */
  push32((uint32_t)(0x10948e28u));
  /* 109410e5 call esi */
  call_ind((uint32_t)(ESI), 0x109410e7u);
  /* 109410e7 push 0x109482f0 */
  push32((uint32_t)(0x109482f0u));
  /* 109410ec push 0x10949040 */
  push32((uint32_t)(0x10949040u));
  /* 109410f1 call esi */
  call_ind((uint32_t)(ESI), 0x109410f3u);
  /* 109410f3 push 0x109482e8 */
  push32((uint32_t)(0x109482e8u));
  /* 109410f8 push 0x109490f0 */
  push32((uint32_t)(0x109490f0u));
  /* 109410fd call esi */
  call_ind((uint32_t)(ESI), 0x109410ffu);
  /* 109410ff push 0x109482e0 */
  push32((uint32_t)(0x109482e0u));
  /* 10941104 push 0x10948fc0 */
  push32((uint32_t)(0x10948fc0u));
  /* 10941109 call esi */
  call_ind((uint32_t)(ESI), 0x1094110bu);
  /* 1094110b push 0x109482d8 */
  push32((uint32_t)(0x109482d8u));
  /* 10941110 push 0x10949060 */
  push32((uint32_t)(0x10949060u));
  /* 10941115 call esi */
  call_ind((uint32_t)(ESI), 0x10941117u);
  /* 10941117 push 0x109482d4 */
  push32((uint32_t)(0x109482d4u));
  /* 1094111c push 0x10948f90 */
  push32((uint32_t)(0x10948f90u));
  /* 10941121 call esi */
  call_ind((uint32_t)(ESI), 0x10941123u);
  /* 10941123 push 0x109482cc */
  push32((uint32_t)(0x109482ccu));
  /* 10941128 push 0x10948eb8 */
  push32((uint32_t)(0x10948eb8u));
  /* 1094112d call esi */
  call_ind((uint32_t)(ESI), 0x1094112fu);
  /* 1094112f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941132 push 0x109482c4 */
  push32((uint32_t)(0x109482c4u));
  /* 10941137 push 0x109490b0 */
  push32((uint32_t)(0x109490b0u));
  /* 1094113c call esi */
  call_ind((uint32_t)(ESI), 0x1094113eu);
  /* 1094113e mov esi, dword ptr [0x1094714c] */
  ESI = (r32((uint32_t)(0x1094714c)));
  /* 10941144 push 0x109482bc */
  push32((uint32_t)(0x109482bcu));
  /* 10941149 push 0x10948df8 */
  push32((uint32_t)(0x10948df8u));
  /* 1094114e call esi */
  call_ind((uint32_t)(ESI), 0x10941150u);
  /* 10941150 push 0x109482b4 */
  push32((uint32_t)(0x109482b4u));
  /* 10941155 push 0x10948e00 */
  push32((uint32_t)(0x10948e00u));
  /* 1094115a call esi */
  call_ind((uint32_t)(ESI), 0x1094115cu);
  /* 1094115c push 0x109482ac */
  push32((uint32_t)(0x109482acu));
  /* 10941161 push 0x10948e08 */
  push32((uint32_t)(0x10948e08u));
  /* 10941166 call esi */
  call_ind((uint32_t)(ESI), 0x10941168u);
  /* 10941168 push 0x109482a4 */
  push32((uint32_t)(0x109482a4u));
  /* 1094116d push 0x10948e10 */
  push32((uint32_t)(0x10948e10u));
  /* 10941172 call esi */
  call_ind((uint32_t)(ESI), 0x10941174u);
  /* 10941174 push 0x1094829c */
  push32((uint32_t)(0x1094829cu));
  /* 10941179 push 0x10949110 */
  push32((uint32_t)(0x10949110u));
  /* 1094117e call esi */
  call_ind((uint32_t)(ESI), 0x10941180u);
  /* 10941180 push 0x10948294 */
  push32((uint32_t)(0x10948294u));
  /* 10941185 push 0x10949118 */
  push32((uint32_t)(0x10949118u));
  /* 1094118a call esi */
  call_ind((uint32_t)(ESI), 0x1094118cu);
  /* 1094118c push 0x1094828c */
  push32((uint32_t)(0x1094828cu));
  /* 10941191 push 0x10948e20 */
  push32((uint32_t)(0x10948e20u));
  /* 10941196 call esi */
  call_ind((uint32_t)(ESI), 0x10941198u);
  /* 10941198 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094119b push 0x10948284 */
  push32((uint32_t)(0x10948284u));
  /* 109411a0 push 0x10948e18 */
  push32((uint32_t)(0x10948e18u));
  /* 109411a5 call esi */
  call_ind((uint32_t)(ESI), 0x109411a7u);
  /* 109411a7 push 0x10948278 */
  push32((uint32_t)(0x10948278u));
  /* 109411ac push 0x10949008 */
  push32((uint32_t)(0x10949008u));
  /* 109411b1 call esi */
  call_ind((uint32_t)(ESI), 0x109411b3u);
  /* 109411b3 push 0x1094826c */
  push32((uint32_t)(0x1094826cu));
  /* 109411b8 push 0x10949070 */
  push32((uint32_t)(0x10949070u));
  /* 109411bd call esi */
  call_ind((uint32_t)(ESI), 0x109411bfu);
  /* 109411bf push 0x10948264 */
  push32((uint32_t)(0x10948264u));
  /* 109411c4 push 0x10948ef8 */
  push32((uint32_t)(0x10948ef8u));
  /* 109411c9 call esi */
  call_ind((uint32_t)(ESI), 0x109411cbu);
  /* 109411cb push 0x1094825c */
  push32((uint32_t)(0x1094825cu));
  /* 109411d0 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 109411d5 call esi */
  call_ind((uint32_t)(ESI), 0x109411d7u);
  /* 109411d7 push 0x10948254 */
  push32((uint32_t)(0x10948254u));
  /* 109411dc push 0x10948f10 */
  push32((uint32_t)(0x10948f10u));
  /* 109411e1 call esi */
  call_ind((uint32_t)(ESI), 0x109411e3u);
  /* 109411e3 push 0x1094824c */
  push32((uint32_t)(0x1094824cu));
  /* 109411e8 push 0x10948d80 */
  push32((uint32_t)(0x10948d80u));
  /* 109411ed call esi */
  call_ind((uint32_t)(ESI), 0x109411efu);
  /* 109411ef push 0x10948244 */
  push32((uint32_t)(0x10948244u));
  /* 109411f4 push 0x10948d90 */
  push32((uint32_t)(0x10948d90u));
  /* 109411f9 call esi */
  call_ind((uint32_t)(ESI), 0x109411fbu);
  /* 109411fb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109411fe push 0x1094823c */
  push32((uint32_t)(0x1094823cu));
  /* 10941203 push 0x10948da0 */
  push32((uint32_t)(0x10948da0u));
  /* 10941208 call esi */
  call_ind((uint32_t)(ESI), 0x1094120au);
  /* 1094120a push 0x10948234 */
  push32((uint32_t)(0x10948234u));
  /* 1094120f push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10941214 call esi */
  call_ind((uint32_t)(ESI), 0x10941216u);
  /* 10941216 push 0x1094822c */
  push32((uint32_t)(0x1094822cu));
  /* 1094121b push 0x10948e40 */
  push32((uint32_t)(0x10948e40u));
  /* 10941220 call esi */
  call_ind((uint32_t)(ESI), 0x10941222u);
  /* 10941222 push 0x10948224 */
  push32((uint32_t)(0x10948224u));
  /* 10941227 push 0x10948d48 */
  push32((uint32_t)(0x10948d48u));
  /* 1094122c call esi */
  call_ind((uint32_t)(ESI), 0x1094122eu);
  /* 1094122e push 0x1094821c */
  push32((uint32_t)(0x1094821cu));
  /* 10941233 push 0x10948d38 */
  push32((uint32_t)(0x10948d38u));
  /* 10941238 call esi */
  call_ind((uint32_t)(ESI), 0x1094123au);
  /* 1094123a push 0x10948210 */
  push32((uint32_t)(0x10948210u));
  /* 1094123f push 0x10948f40 */
  push32((uint32_t)(0x10948f40u));
  /* 10941244 call esi */
  call_ind((uint32_t)(ESI), 0x10941246u);
  /* 10941246 push 0x10948208 */
  push32((uint32_t)(0x10948208u));
  /* 1094124b push 0x10949100 */
  push32((uint32_t)(0x10949100u));
  /* 10941250 call esi */
  call_ind((uint32_t)(ESI), 0x10941252u);
  /* 10941252 push 0x10948200 */
  push32((uint32_t)(0x10948200u));
  /* 10941257 push 0x10948e48 */
  push32((uint32_t)(0x10948e48u));
  /* 1094125c call esi */
  call_ind((uint32_t)(ESI), 0x1094125eu);
  /* 1094125e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941261 push 0x109481f8 */
  push32((uint32_t)(0x109481f8u));
  /* 10941266 push 0x10948d60 */
  push32((uint32_t)(0x10948d60u));
  /* 1094126b call esi */
  call_ind((uint32_t)(ESI), 0x1094126du);
  /* 1094126d push 0x109481f0 */
  push32((uint32_t)(0x109481f0u));
  /* 10941272 push 0x10948e38 */
  push32((uint32_t)(0x10948e38u));
  /* 10941277 call esi */
  call_ind((uint32_t)(ESI), 0x10941279u);
  /* 10941279 push 0x109481e4 */
  push32((uint32_t)(0x109481e4u));
  /* 1094127e push 0x10948d88 */
  push32((uint32_t)(0x10948d88u));
  /* 10941283 call esi */
  call_ind((uint32_t)(ESI), 0x10941285u);
  /* 10941285 push 0x109481dc */
  push32((uint32_t)(0x109481dcu));
  /* 1094128a push 0x10948e70 */
  push32((uint32_t)(0x10948e70u));
  /* 1094128f call esi */
  call_ind((uint32_t)(ESI), 0x10941291u);
  /* 10941291 push 0x109481d0 */
  push32((uint32_t)(0x109481d0u));
  /* 10941296 push 0x10948d40 */
  push32((uint32_t)(0x10948d40u));
  /* 1094129b call esi */
  call_ind((uint32_t)(ESI), 0x1094129du);
  /* 1094129d push 0x109481c8 */
  push32((uint32_t)(0x109481c8u));
  /* 109412a2 push 0x10948ed0 */
  push32((uint32_t)(0x10948ed0u));
  /* 109412a7 call esi */
  call_ind((uint32_t)(ESI), 0x109412a9u);
  /* 109412a9 push 0x109481c0 */
  push32((uint32_t)(0x109481c0u));
  /* 109412ae push 0x10949020 */
  push32((uint32_t)(0x10949020u));
  /* 109412b3 call esi */
  call_ind((uint32_t)(ESI), 0x109412b5u);
  /* 109412b5 push 0x109481b8 */
  push32((uint32_t)(0x109481b8u));
  /* 109412ba push 0x10948f68 */
  push32((uint32_t)(0x10948f68u));
  /* 109412bf call esi */
  call_ind((uint32_t)(ESI), 0x109412c1u);
  /* 109412c1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109412c4 push 0x109481b0 */
  push32((uint32_t)(0x109481b0u));
  /* 109412c9 push 0x10948dc0 */
  push32((uint32_t)(0x10948dc0u));
  /* 109412ce call esi */
  call_ind((uint32_t)(ESI), 0x109412d0u);
  /* 109412d0 push 0x109481a8 */
  push32((uint32_t)(0x109481a8u));
  /* 109412d5 push 0x10948dc8 */
  push32((uint32_t)(0x10948dc8u));
  /* 109412da call esi */
  call_ind((uint32_t)(ESI), 0x109412dcu);
  /* 109412dc push 0x109481a0 */
  push32((uint32_t)(0x109481a0u));
  /* 109412e1 push 0x10948dd0 */
  push32((uint32_t)(0x10948dd0u));
  /* 109412e6 call esi */
  call_ind((uint32_t)(ESI), 0x109412e8u);
  /* 109412e8 push 0x10948198 */
  push32((uint32_t)(0x10948198u));
  /* 109412ed push 0x10948f70 */
  push32((uint32_t)(0x10948f70u));
  /* 109412f2 call esi */
  call_ind((uint32_t)(ESI), 0x109412f4u);
  /* 109412f4 push 0x10948190 */
  push32((uint32_t)(0x10948190u));
  /* 109412f9 push 0x10948dd8 */
  push32((uint32_t)(0x10948dd8u));
  /* 109412fe call esi */
  call_ind((uint32_t)(ESI), 0x10941300u);
  /* 10941300 push 0x10948188 */
  push32((uint32_t)(0x10948188u));
  /* 10941305 push 0x10948de0 */
  push32((uint32_t)(0x10948de0u));
  /* 1094130a call esi */
  call_ind((uint32_t)(ESI), 0x1094130cu);
  /* 1094130c push 0x10948180 */
  push32((uint32_t)(0x10948180u));
  /* 10941311 push 0x10948de8 */
  push32((uint32_t)(0x10948de8u));
  /* 10941316 call esi */
  call_ind((uint32_t)(ESI), 0x10941318u);
  /* 10941318 push 0x10948178 */
  push32((uint32_t)(0x10948178u));
  /* 1094131d push 0x10948df0 */
  push32((uint32_t)(0x10948df0u));
  /* 10941322 call esi */
  call_ind((uint32_t)(ESI), 0x10941324u);
  /* 10941324 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941327 push 0x10948170 */
  push32((uint32_t)(0x10948170u));
  /* 1094132c push 0x10948e98 */
  push32((uint32_t)(0x10948e98u));
  /* 10941331 call esi */
  call_ind((uint32_t)(ESI), 0x10941333u);
  /* 10941333 push 0x1094816c */
  push32((uint32_t)(0x1094816cu));
  /* 10941338 push 0x10949108 */
  push32((uint32_t)(0x10949108u));
  /* 1094133d call esi */
  call_ind((uint32_t)(ESI), 0x1094133fu);
  /* 1094133f push 0x10948160 */
  push32((uint32_t)(0x10948160u));
  /* 10941344 push 0x109490c0 */
  push32((uint32_t)(0x109490c0u));
  /* 10941349 call esi */
  call_ind((uint32_t)(ESI), 0x1094134bu);
  /* 1094134b push 0x10948154 */
  push32((uint32_t)(0x10948154u));
  /* 10941350 push 0x109490b8 */
  push32((uint32_t)(0x109490b8u));
  /* 10941355 call esi */
  call_ind((uint32_t)(ESI), 0x10941357u);
  /* 10941357 push 0x10948148 */
  push32((uint32_t)(0x10948148u));
  /* 1094135c push 0x109490d0 */
  push32((uint32_t)(0x109490d0u));
  /* 10941361 call esi */
  call_ind((uint32_t)(ESI), 0x10941363u);
  /* 10941363 push 0x1094813c */
  push32((uint32_t)(0x1094813cu));
  /* 10941368 push 0x109490c8 */
  push32((uint32_t)(0x109490c8u));
  /* 1094136d call esi */
  call_ind((uint32_t)(ESI), 0x1094136fu);
  /* 1094136f push 0x10948130 */
  push32((uint32_t)(0x10948130u));
  /* 10941374 push 0x109490d8 */
  push32((uint32_t)(0x109490d8u));
  /* 10941379 call esi */
  call_ind((uint32_t)(ESI), 0x1094137bu);
  /* 1094137b push 8 */
  push32((uint32_t)(0x8u));
  /* 1094137d push 0x10948d68 */
  push32((uint32_t)(0x10948d68u));
  /* 10941382 call dword ptr [0x1094715c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094715c))), 0x10941388u);
  /* 10941388 mov edi, dword ptr [0x10947160] */
  EDI = (r32((uint32_t)(0x10947160)));
  /* 1094138e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941391 push 0x1094811c */
  push32((uint32_t)(0x1094811cu));
  /* 10941396 push 0x10949028 */
  push32((uint32_t)(0x10949028u));
  /* 1094139b call edi */
  call_ind((uint32_t)(EDI), 0x1094139du);
  /* 1094139d mov esi, dword ptr [0x10947158] */
  ESI = (r32((uint32_t)(0x10947158)));
  /* 109413a3 push 0x10948ed8 */
  push32((uint32_t)(0x10948ed8u));
  /* 109413a8 call esi */
  call_ind((uint32_t)(ESI), 0x109413aau);
  /* 109413aa push 0x1094811c */
  push32((uint32_t)(0x1094811cu));
  /* 109413af push 0x10949038 */
  push32((uint32_t)(0x10949038u));
  /* 109413b4 call edi */
  call_ind((uint32_t)(EDI), 0x109413b6u);
  /* 109413b6 push 0x10948ec8 */
  push32((uint32_t)(0x10948ec8u));
  /* 109413bb call esi */
  call_ind((uint32_t)(ESI), 0x109413bdu);
  /* 109413bd push 0x10948f18 */
  push32((uint32_t)(0x10948f18u));
  /* 109413c2 call esi */
  call_ind((uint32_t)(ESI), 0x109413c4u);
  /* 109413c4 push 0x10948f20 */
  push32((uint32_t)(0x10948f20u));
  /* 109413c9 call esi */
  call_ind((uint32_t)(ESI), 0x109413cbu);
  /* 109413cb push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 109413d0 call esi */
  call_ind((uint32_t)(ESI), 0x109413d2u);
  /* 109413d2 push 0x10948e60 */
  push32((uint32_t)(0x10948e60u));
  /* 109413d7 call esi */
  call_ind((uint32_t)(ESI), 0x109413d9u);
  /* 109413d9 push 0x10948110 */
  push32((uint32_t)(0x10948110u));
  /* 109413de push 0x10948f50 */
  push32((uint32_t)(0x10948f50u));
  /* 109413e3 call edi */
  call_ind((uint32_t)(EDI), 0x109413e5u);
  /* 109413e5 push 0x10949088 */
  push32((uint32_t)(0x10949088u));
  /* 109413ea call esi */
  call_ind((uint32_t)(ESI), 0x109413ecu);
  /* 109413ec push 0x10949098 */
  push32((uint32_t)(0x10949098u));
  /* 109413f1 call esi */
  call_ind((uint32_t)(ESI), 0x109413f3u);
  /* 109413f3 push 0x109490a0 */
  push32((uint32_t)(0x109490a0u));
  /* 109413f8 call esi */
  call_ind((uint32_t)(ESI), 0x109413fau);
  /* 109413fa push 0x10949080 */
  push32((uint32_t)(0x10949080u));
  /* 109413ff call esi */
  call_ind((uint32_t)(ESI), 0x10941401u);
  /* 10941401 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941404 push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 10941409 call esi */
  call_ind((uint32_t)(ESI), 0x1094140bu);
  /* 1094140b push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 10941410 call esi */
  call_ind((uint32_t)(ESI), 0x10941412u);
  /* 10941412 push 0x10949050 */
  push32((uint32_t)(0x10949050u));
  /* 10941417 call esi */
  call_ind((uint32_t)(ESI), 0x10941419u);
  /* 10941419 push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 1094141e call esi */
  call_ind((uint32_t)(ESI), 0x10941420u);
  /* 10941420 push 0x10948eb0 */
  push32((uint32_t)(0x10948eb0u));
  /* 10941425 call esi */
  call_ind((uint32_t)(ESI), 0x10941427u);
  /* 10941427 push 0x109480f4 */
  push32((uint32_t)(0x109480f4u));
  /* 1094142c push 0x10948fe8 */
  push32((uint32_t)(0x10948fe8u));
  /* 10941431 call edi */
  call_ind((uint32_t)(EDI), 0x10941433u);
  /* 10941433 push 0x10948eb0 */
  push32((uint32_t)(0x10948eb0u));
  /* 10941438 call esi */
  call_ind((uint32_t)(ESI), 0x1094143au);
  /* 1094143a push 0x109480e0 */
  push32((uint32_t)(0x109480e0u));
  /* 1094143f push 0x109490e8 */
  push32((uint32_t)(0x109490e8u));
  /* 10941444 call edi */
  call_ind((uint32_t)(EDI), 0x10941446u);
  /* 10941446 push 0x10948d50 */
  push32((uint32_t)(0x10948d50u));
  /* 1094144b call esi */
  call_ind((uint32_t)(ESI), 0x1094144du);
  /* 1094144d push 0x109480d0 */
  push32((uint32_t)(0x109480d0u));
  /* 10941452 push 0x10948db8 */
  push32((uint32_t)(0x10948db8u));
  /* 10941457 call edi */
  call_ind((uint32_t)(EDI), 0x10941459u);
  /* 10941459 push 0x10948f60 */
  push32((uint32_t)(0x10948f60u));
  /* 1094145e call esi */
  call_ind((uint32_t)(ESI), 0x10941460u);
  /* 10941460 push 0x109480bc */
  push32((uint32_t)(0x109480bcu));
  /* 10941465 push 0x10948fa0 */
  push32((uint32_t)(0x10948fa0u));
  /* 1094146a call edi */
  call_ind((uint32_t)(EDI), 0x1094146cu);
  /* 1094146c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094146f push 0x10948d58 */
  push32((uint32_t)(0x10948d58u));
  /* 10941474 call esi */
  call_ind((uint32_t)(ESI), 0x10941476u);
  /* 10941476 push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 1094147b call esi */
  call_ind((uint32_t)(ESI), 0x1094147du);
  /* 1094147d push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 10941482 call esi */
  call_ind((uint32_t)(ESI), 0x10941484u);
  /* 10941484 push 0x10948f58 */
  push32((uint32_t)(0x10948f58u));
  /* 10941489 call esi */
  call_ind((uint32_t)(ESI), 0x1094148bu);
  /* 1094148b push 0x109480b0 */
  push32((uint32_t)(0x109480b0u));
  /* 10941490 push 0x10948fa8 */
  push32((uint32_t)(0x10948fa8u));
  /* 10941495 call edi */
  call_ind((uint32_t)(EDI), 0x10941497u);
  /* 10941497 push 0x109480a4 */
  push32((uint32_t)(0x109480a4u));
  /* 1094149c push 0x10948ec0 */
  push32((uint32_t)(0x10948ec0u));
  /* 109414a1 call edi */
  call_ind((uint32_t)(EDI), 0x109414a3u);
  /* 109414a3 push 0x10948098 */
  push32((uint32_t)(0x10948098u));
  /* 109414a8 push 0x109490f8 */
  push32((uint32_t)(0x109490f8u));
  /* 109414ad call edi */
  call_ind((uint32_t)(EDI), 0x109414afu);
  /* 109414af push 0x10948088 */
  push32((uint32_t)(0x10948088u));
  /* 109414b4 push 0x10948fd8 */
  push32((uint32_t)(0x10948fd8u));
  /* 109414b9 call edi */
  call_ind((uint32_t)(EDI), 0x109414bbu);
  /* 109414bb push 0x1094807c */
  push32((uint32_t)(0x1094807cu));
  /* 109414c0 push 0x109490a8 */
  push32((uint32_t)(0x109490a8u));
  /* 109414c5 call edi */
  call_ind((uint32_t)(EDI), 0x109414c7u);
  /* 109414c7 push 0x1094806c */
  push32((uint32_t)(0x1094806cu));
  /* 109414cc push 0x10948ff8 */
  push32((uint32_t)(0x10948ff8u));
  /* 109414d1 call edi */
  call_ind((uint32_t)(EDI), 0x109414d3u);
  /* 109414d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109414d6 push 0x10948054 */
  push32((uint32_t)(0x10948054u));
  /* 109414db push 0x10948ea0 */
  push32((uint32_t)(0x10948ea0u));
  /* 109414e0 call edi */
  call_ind((uint32_t)(EDI), 0x109414e2u);
  /* 109414e2 mov ebx, dword ptr [0x10947168] */
  EBX = (r32((uint32_t)(0x10947168)));
  /* 109414e8 push 0x1094804c */
  push32((uint32_t)(0x1094804cu));
  /* 109414ed push 0x10948f48 */
  push32((uint32_t)(0x10948f48u));
  /* 109414f2 call ebx */
  call_ind((uint32_t)(EBX), 0x109414f4u);
  /* 109414f4 push 0x10948044 */
  push32((uint32_t)(0x10948044u));
  /* 109414f9 push 0x10948fb8 */
  push32((uint32_t)(0x10948fb8u));
  /* 109414fe call ebx */
  call_ind((uint32_t)(EBX), 0x10941500u);
  /* 10941500 push 0x10948fb8 */
  push32((uint32_t)(0x10948fb8u));
  /* 10941505 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941507 call dword ptr [0x1094716c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094716c))), 0x1094150du);
  /* 1094150d push 0x10948f80 */
  push32((uint32_t)(0x10948f80u));
  /* 10941512 call esi */
  call_ind((uint32_t)(ESI), 0x10941514u);
  /* 10941514 push 0x10948038 */
  push32((uint32_t)(0x10948038u));
  /* 10941519 push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 1094151e call edi */
  call_ind((uint32_t)(EDI), 0x10941520u);
  /* 10941520 push 0x10948030 */
  push32((uint32_t)(0x10948030u));
  /* 10941525 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 1094152a call dword ptr [0x10947164] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947164))), 0x10941530u);
  /* 10941530 push 0x10948e80 */
  push32((uint32_t)(0x10948e80u));
  /* 10941535 call esi */
  call_ind((uint32_t)(ESI), 0x10941537u);
  /* 10941537 push 0x10948e78 */
  push32((uint32_t)(0x10948e78u));
  /* 1094153c call esi */
  call_ind((uint32_t)(ESI), 0x1094153eu);
  /* 1094153e push 0x10948e90 */
  push32((uint32_t)(0x10948e90u));
  /* 10941543 call esi */
  call_ind((uint32_t)(ESI), 0x10941545u);
  /* 10941545 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941548 push 0x10948e88 */
  push32((uint32_t)(0x10948e88u));
  /* 1094154d call esi */
  call_ind((uint32_t)(ESI), 0x1094154fu);
  /* 1094154f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941552 pop edi */
  EDI = (pop32());
  /* 10941553 pop esi */
  ESI = (pop32());
  /* 10941554 pop ebx */
  EBX = (pop32());
  /* 10941555 ret  */
  ESPCHK(0x10941000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001560 @ 0x10941560 (20 bytes, 6 insns) */
void f_10941560(void) {
  FTRACE(0x10941560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10941560 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10941564 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10941565 jne 0x1094156c */
  if (!C.zf) goto L_1094156c;
  /* 10941567 call 0x10941000 */
  push32(0x1094156cu); f_10941000();
L_1094156c:;
  /* 1094156c mov eax, 1 */
  EAX = (0x1u);
  /* 10941571 ret 0xc */
  ESPCHK(0x10941560u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x10941580 (9421 bytes, 2815 insns) */
void f_10941580(void) {
  FTRACE(0x10941580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10941580 push ebx */
  push32((uint32_t)(EBX));
  /* 10941581 push ebp */
  push32((uint32_t)(EBP));
  /* 10941582 push esi */
  push32((uint32_t)(ESI));
  /* 10941583 push edi */
  push32((uint32_t)(EDI));
  /* 10941584 push 0x10948f48 */
  push32((uint32_t)(0x10948f48u));
  /* 10941589 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094158b call dword ptr [0x1094716c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094716c))), 0x10941591u);
  /* 10941591 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941593 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10941599u);
  /* 10941599 mov ebx, dword ptr [0x109470c0] */
  EBX = (r32((uint32_t)(0x109470c0)));
  /* 1094159f mov esi, dword ptr [0x109470c4] */
  ESI = (r32((uint32_t)(0x109470c4)));
  /* 109415a5 mov ebp, dword ptr [0x109470bc] */
  EBP = (r32((uint32_t)(0x109470bc)));
  /* 109415ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109415ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109415b0 je 0x109419a5 */
  if (C.zf) goto L_109419a5;
  /* 109415b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109415b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109415ba call ebx */
  call_ind((uint32_t)(EBX), 0x109415bcu);
  /* 109415bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109415be call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x109415c4u);
  /* 109415c4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 109415c7 mov edi, dword ptr [0x109470d0] */
  EDI = (r32((uint32_t)(0x109470d0)));
  /* 109415cd mov ecx, 0x38270 */
  ECX = (0x38270u);
  /* 109415d2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 109415d5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 109415d8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 109415db shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 109415de sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109415e0 push ecx */
  push32((uint32_t)(ECX));
  /* 109415e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 109415e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109415e5 call edi */
  call_ind((uint32_t)(EDI), 0x109415e7u);
  /* 109415e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109415e9 call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x109415efu);
  /* 109415ef mov ecx, 6 */
  ECX = (0x6u);
  /* 109415f4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109415f6 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 109415f9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 109415fc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 109415ff lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10941602 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10941605 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10941608 push edx */
  push32((uint32_t)(EDX));
  /* 10941609 push 1 */
  push32((uint32_t)(0x1u));
  /* 1094160b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094160d call edi */
  call_ind((uint32_t)(EDI), 0x1094160fu);
  /* 1094160f push 0 */
  push32((uint32_t)(0x0u));
  /* 10941611 call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x10941617u);
  /* 10941617 mov ecx, 6 */
  ECX = (0x6u);
  /* 1094161c sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094161e lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10941621 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10941624 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10941627 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1094162a shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1094162d push eax */
  push32((uint32_t)(EAX));
  /* 1094162e push 0 */
  push32((uint32_t)(0x0u));
  /* 10941630 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941632 call edi */
  call_ind((uint32_t)(EDI), 0x10941634u);
  /* 10941634 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10941639 push 2 */
  push32((uint32_t)(0x2u));
  /* 1094163b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094163d call edi */
  call_ind((uint32_t)(EDI), 0x1094163fu);
  /* 1094163f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941642 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941644 call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x1094164au);
  /* 1094164a mov ecx, 6 */
  ECX = (0x6u);
  /* 1094164f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10941651 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10941654 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10941657 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1094165a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1094165d shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 10941660 push ecx */
  push32((uint32_t)(ECX));
  /* 10941661 push 5 */
  push32((uint32_t)(0x5u));
  /* 10941663 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941665 call edi */
  call_ind((uint32_t)(EDI), 0x10941667u);
  /* 10941667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941669 call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x1094166fu);
  /* 1094166f mov ecx, 6 */
  ECX = (0x6u);
  /* 10941674 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10941676 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10941679 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1094167c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1094167f lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10941682 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 10941685 push edx */
  push32((uint32_t)(EDX));
  /* 10941686 push 4 */
  push32((uint32_t)(0x4u));
  /* 10941688 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094168a call edi */
  call_ind((uint32_t)(EDI), 0x1094168cu);
  /* 1094168c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094168e call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x10941694u);
  /* 10941694 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10941699 jne 0x109416ca */
  if (!C.zf) goto L_109416ca;
  /* 1094169b push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 109416a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 109416a2 push eax */
  push32((uint32_t)(EAX));
  /* 109416a3 call dword ptr [0x109470c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470c8))), 0x109416a9u);
  /* 109416a9 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 109416ae push 1 */
  push32((uint32_t)(0x1u));
  /* 109416b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109416b2 call dword ptr [0x109470c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470c8))), 0x109416b8u);
  /* 109416b8 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 109416bd push 5 */
  push32((uint32_t)(0x5u));
  /* 109416bf push 0 */
  push32((uint32_t)(0x0u));
  /* 109416c1 call dword ptr [0x109470c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470c8))), 0x109416c7u);
  /* 109416c7 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109416ca:;
  /* 109416ca push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109416cf push 3 */
  push32((uint32_t)(0x3u));
  /* 109416d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109416d3 call edi */
  call_ind((uint32_t)(EDI), 0x109416d5u);
  /* 109416d5 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109416da push 1 */
  push32((uint32_t)(0x1u));
  /* 109416dc push 1 */
  push32((uint32_t)(0x1u));
  /* 109416de call edi */
  call_ind((uint32_t)(EDI), 0x109416e0u);
  /* 109416e0 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109416e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109416e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109416e9 call edi */
  call_ind((uint32_t)(EDI), 0x109416ebu);
  /* 109416eb push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109416f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109416f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109416f4 call edi */
  call_ind((uint32_t)(EDI), 0x109416f6u);
  /* 109416f6 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 109416fb push 5 */
  push32((uint32_t)(0x5u));
  /* 109416fd push 1 */
  push32((uint32_t)(0x1u));
  /* 109416ff call edi */
  call_ind((uint32_t)(EDI), 0x10941701u);
  /* 10941701 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10941706 push 4 */
  push32((uint32_t)(0x4u));
  /* 10941708 push 1 */
  push32((uint32_t)(0x1u));
  /* 1094170a call edi */
  call_ind((uint32_t)(EDI), 0x1094170cu);
  /* 1094170c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094170f push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10941714 push 3 */
  push32((uint32_t)(0x3u));
  /* 10941716 push 2 */
  push32((uint32_t)(0x2u));
  /* 10941718 call edi */
  call_ind((uint32_t)(EDI), 0x1094171au);
  /* 1094171a push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 1094171f push 1 */
  push32((uint32_t)(0x1u));
  /* 10941721 push 2 */
  push32((uint32_t)(0x2u));
  /* 10941723 call edi */
  call_ind((uint32_t)(EDI), 0x10941725u);
  /* 10941725 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 1094172a push 0 */
  push32((uint32_t)(0x0u));
  /* 1094172c push 2 */
  push32((uint32_t)(0x2u));
  /* 1094172e call edi */
  call_ind((uint32_t)(EDI), 0x10941730u);
  /* 10941730 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10941735 push 2 */
  push32((uint32_t)(0x2u));
  /* 10941737 push 2 */
  push32((uint32_t)(0x2u));
  /* 10941739 call edi */
  call_ind((uint32_t)(EDI), 0x1094173bu);
  /* 1094173b push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10941740 push 5 */
  push32((uint32_t)(0x5u));
  /* 10941742 push 2 */
  push32((uint32_t)(0x2u));
  /* 10941744 call edi */
  call_ind((uint32_t)(EDI), 0x10941746u);
  /* 10941746 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 1094174b push 4 */
  push32((uint32_t)(0x4u));
  /* 1094174d push 2 */
  push32((uint32_t)(0x2u));
  /* 1094174f call edi */
  call_ind((uint32_t)(EDI), 0x10941751u);
  /* 10941751 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941754 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10941759 push 3 */
  push32((uint32_t)(0x3u));
  /* 1094175b push 5 */
  push32((uint32_t)(0x5u));
  /* 1094175d call edi */
  call_ind((uint32_t)(EDI), 0x1094175fu);
  /* 1094175f push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10941764 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941766 push 5 */
  push32((uint32_t)(0x5u));
  /* 10941768 call edi */
  call_ind((uint32_t)(EDI), 0x1094176au);
  /* 1094176a push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 1094176f push 0 */
  push32((uint32_t)(0x0u));
  /* 10941771 push 5 */
  push32((uint32_t)(0x5u));
  /* 10941773 call edi */
  call_ind((uint32_t)(EDI), 0x10941775u);
  /* 10941775 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 1094177a push 2 */
  push32((uint32_t)(0x2u));
  /* 1094177c push 5 */
  push32((uint32_t)(0x5u));
  /* 1094177e call edi */
  call_ind((uint32_t)(EDI), 0x10941780u);
  /* 10941780 push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10941785 push 5 */
  push32((uint32_t)(0x5u));
  /* 10941787 push 5 */
  push32((uint32_t)(0x5u));
  /* 10941789 call edi */
  call_ind((uint32_t)(EDI), 0x1094178bu);
  /* 1094178b push 0xa98ac7 */
  push32((uint32_t)(0xa98ac7u));
  /* 10941790 push 4 */
  push32((uint32_t)(0x4u));
  /* 10941792 push 5 */
  push32((uint32_t)(0x5u));
  /* 10941794 call edi */
  call_ind((uint32_t)(EDI), 0x10941796u);
  /* 10941796 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941799 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1094179b push 0x21 */
  push32((uint32_t)(0x21u));
  /* 1094179d push edi */
  push32((uint32_t)(EDI));
  /* 1094179e call dword ptr [0x109470d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d8))), 0x109417a4u);
  /* 109417a4 push 6 */
  push32((uint32_t)(0x6u));
  /* 109417a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109417a8 call dword ptr [0x109470d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d8))), 0x109417aeu);
  /* 109417ae push 0x109489f4 */
  push32((uint32_t)(0x109489f4u));
  /* 109417b3 push 0x109483b4 */
  push32((uint32_t)(0x109483b4u));
  /* 109417b8 call esi */
  call_ind((uint32_t)(ESI), 0x109417bau);
  /* 109417ba mov eax, 0xd */
  EAX = (0xdu);
  /* 109417bf push 0x42 */
  push32((uint32_t)(0x42u));
  /* 109417c1 mov dword ptr [0x10948db0], edi */
  w32((uint32_t)(0x10948db0), (EDI));
  /* 109417c7 mov dword ptr [0x10948ee0], edi */
  w32((uint32_t)(0x10948ee0), (EDI));
  /* 109417cd mov dword ptr [0x10948ee4], edi */
  w32((uint32_t)(0x10948ee4), (EDI));
  /* 109417d3 mov dword ptr [0x10948ee8], edi */
  w32((uint32_t)(0x10948ee8), (EDI));
  /* 109417d9 mov dword ptr [0x10948eec], edi */
  w32((uint32_t)(0x10948eec), (EDI));
  /* 109417df mov dword ptr [0x10948ef0], edi */
  w32((uint32_t)(0x10948ef0), (EDI));
  /* 109417e5 mov dword ptr [0x10948f34], edi */
  w32((uint32_t)(0x10948f34), (EDI));
  /* 109417eb mov dword ptr [0x10948f38], edi */
  w32((uint32_t)(0x10948f38), (EDI));
  /* 109417f1 mov dword ptr [0x10948f28], edi */
  w32((uint32_t)(0x10948f28), (EDI));
  /* 109417f7 mov dword ptr [0x10948f2c], edi */
  w32((uint32_t)(0x10948f2c), (EDI));
  /* 109417fd mov dword ptr [0x10948db4], eax */
  w32((uint32_t)(0x10948db4), (EAX));
  /* 10941802 mov dword ptr [0x10948f30], eax */
  w32((uint32_t)(0x10948f30), (EAX));
  /* 10941807 mov dword ptr [0x10949090], edi */
  w32((uint32_t)(0x10949090), (EDI));
  /* 1094180d mov dword ptr [0x10949018], edi */
  w32((uint32_t)(0x10949018), (EDI));
  /* 10941813 call dword ptr [0x109470dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470dc))), 0x10941819u);
  /* 10941819 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1094181b call dword ptr [0x109470dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470dc))), 0x10941821u);
  /* 10941821 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10941823 call dword ptr [0x109470dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470dc))), 0x10941829u);
  /* 10941829 push edi */
  push32((uint32_t)(EDI));
  /* 1094182a push 0x10949030 */
  push32((uint32_t)(0x10949030u));
  /* 1094182f call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10941835u);
  /* 10941835 push 2 */
  push32((uint32_t)(0x2u));
  /* 10941837 call dword ptr [0x109470e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e4))), 0x1094183du);
  /* 1094183d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1094183f push 1 */
  push32((uint32_t)(0x1u));
  /* 10941841 call ebp */
  call_ind((uint32_t)(EBP), 0x10941843u);
  /* 10941843 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10941845 push 2 */
  push32((uint32_t)(0x2u));
  /* 10941847 call ebp */
  call_ind((uint32_t)(EBP), 0x10941849u);
  /* 10941849 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094184c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1094184e push 3 */
  push32((uint32_t)(0x3u));
  /* 10941850 call ebp */
  call_ind((uint32_t)(EBP), 0x10941852u);
  /* 10941852 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10941854 push 4 */
  push32((uint32_t)(0x4u));
  /* 10941856 call ebp */
  call_ind((uint32_t)(EBP), 0x10941858u);
  /* 10941858 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1094185a push 5 */
  push32((uint32_t)(0x5u));
  /* 1094185c call ebp */
  call_ind((uint32_t)(EBP), 0x1094185eu);
  /* 1094185e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10941860 push 6 */
  push32((uint32_t)(0x6u));
  /* 10941862 call ebp */
  call_ind((uint32_t)(EBP), 0x10941864u);
  /* 10941864 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10941866 push 7 */
  push32((uint32_t)(0x7u));
  /* 10941868 call ebp */
  call_ind((uint32_t)(EBP), 0x1094186au);
  /* 1094186a push 0x258 */
  push32((uint32_t)(0x258u));
  /* 1094186f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10941871 call ebp */
  call_ind((uint32_t)(EBP), 0x10941873u);
  /* 10941873 push 0x2260 */
  push32((uint32_t)(0x2260u));
  /* 10941878 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1094187a call ebp */
  call_ind((uint32_t)(EBP), 0x1094187cu);
  /* 1094187c push 0x3200 */
  push32((uint32_t)(0x3200u));
  /* 10941881 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10941883 call ebp */
  call_ind((uint32_t)(EBP), 0x10941885u);
  /* 10941885 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941888 push 0x3db8 */
  push32((uint32_t)(0x3db8u));
  /* 1094188d push 0xe */
  push32((uint32_t)(0xeu));
  /* 1094188f call ebp */
  call_ind((uint32_t)(EBP), 0x10941891u);
  /* 10941891 push 0x5140 */
  push32((uint32_t)(0x5140u));
  /* 10941896 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10941898 call ebp */
  call_ind((uint32_t)(EBP), 0x1094189au);
  /* 1094189a push 0x5910 */
  push32((uint32_t)(0x5910u));
  /* 1094189f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109418a1 call ebp */
  call_ind((uint32_t)(EBP), 0x109418a3u);
  /* 109418a3 push 0x7080 */
  push32((uint32_t)(0x7080u));
  /* 109418a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109418aa call ebp */
  call_ind((uint32_t)(EBP), 0x109418acu);
  /* 109418ac push 0x7850 */
  push32((uint32_t)(0x7850u));
  /* 109418b1 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 109418b3 call ebp */
  call_ind((uint32_t)(EBP), 0x109418b5u);
  /* 109418b5 push 0xbea0 */
  push32((uint32_t)(0xbea0u));
  /* 109418ba push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109418bc call ebp */
  call_ind((uint32_t)(EBP), 0x109418beu);
  /* 109418be push 0x109489dc */
  push32((uint32_t)(0x109489dcu));
  /* 109418c3 push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 109418c8 call esi */
  call_ind((uint32_t)(ESI), 0x109418cau);
  /* 109418ca push 0x109489c4 */
  push32((uint32_t)(0x109489c4u));
  /* 109418cf push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 109418d4 call esi */
  call_ind((uint32_t)(ESI), 0x109418d6u);
  /* 109418d6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109418d9 push 0x109489ac */
  push32((uint32_t)(0x109489acu));
  /* 109418de push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 109418e3 call esi */
  call_ind((uint32_t)(ESI), 0x109418e5u);
  /* 109418e5 push 0x10948994 */
  push32((uint32_t)(0x10948994u));
  /* 109418ea push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 109418ef call esi */
  call_ind((uint32_t)(ESI), 0x109418f1u);
  /* 109418f1 push 0x1094897c */
  push32((uint32_t)(0x1094897cu));
  /* 109418f6 push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 109418fb call esi */
  call_ind((uint32_t)(ESI), 0x109418fdu);
  /* 109418fd push 0x10948964 */
  push32((uint32_t)(0x10948964u));
  /* 10941902 push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 10941907 call esi */
  call_ind((uint32_t)(ESI), 0x10941909u);
  /* 10941909 push 0x1094894c */
  push32((uint32_t)(0x1094894cu));
  /* 1094190e push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 10941913 call esi */
  call_ind((uint32_t)(ESI), 0x10941915u);
  /* 10941915 push 0x10948934 */
  push32((uint32_t)(0x10948934u));
  /* 1094191a push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 1094191f call esi */
  call_ind((uint32_t)(ESI), 0x10941921u);
  /* 10941921 push edi */
  push32((uint32_t)(EDI));
  /* 10941922 push 0x10948ec0 */
  push32((uint32_t)(0x10948ec0u));
  /* 10941927 push edi */
  push32((uint32_t)(EDI));
  /* 10941928 mov edi, dword ptr [0x109470e8] */
  EDI = (r32((uint32_t)(0x109470e8)));
  /* 1094192e call edi */
  call_ind((uint32_t)(EDI), 0x10941930u);
  /* 10941930 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941932 push 0x109490f8 */
  push32((uint32_t)(0x109490f8u));
  /* 10941937 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941939 call edi */
  call_ind((uint32_t)(EDI), 0x1094193bu);
  /* 1094193b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094193e push 0 */
  push32((uint32_t)(0x0u));
  /* 10941940 push 0x10948ff8 */
  push32((uint32_t)(0x10948ff8u));
  /* 10941945 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941947 call edi */
  call_ind((uint32_t)(EDI), 0x10941949u);
  /* 10941949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094194b push 0x109490a8 */
  push32((uint32_t)(0x109490a8u));
  /* 10941950 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941952 call edi */
  call_ind((uint32_t)(EDI), 0x10941954u);
  /* 10941954 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941956 push 0x10948ea0 */
  push32((uint32_t)(0x10948ea0u));
  /* 1094195b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094195d call edi */
  call_ind((uint32_t)(EDI), 0x1094195fu);
  /* 1094195f push 0 */
  push32((uint32_t)(0x0u));
  /* 10941961 push 0x10948fd8 */
  push32((uint32_t)(0x10948fd8u));
  /* 10941966 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941968 call edi */
  call_ind((uint32_t)(EDI), 0x1094196au);
  /* 1094196a push 0x1094892c */
  push32((uint32_t)(0x1094892cu));
  /* 1094196f call dword ptr [0x109470e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e0))), 0x10941975u);
  /* 10941975 mov edi, dword ptr [0x109470f0] */
  EDI = (r32((uint32_t)(0x109470f0)));
  /* 1094197b push 0x10948920 */
  push32((uint32_t)(0x10948920u));
  /* 10941980 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941982 call edi */
  call_ind((uint32_t)(EDI), 0x10941984u);
  /* 10941984 push 0x10948918 */
  push32((uint32_t)(0x10948918u));
  /* 10941989 push 2 */
  push32((uint32_t)(0x2u));
  /* 1094198b call edi */
  call_ind((uint32_t)(EDI), 0x1094198du);
  /* 1094198d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941990 push 0x10948910 */
  push32((uint32_t)(0x10948910u));
  /* 10941995 push 4 */
  push32((uint32_t)(0x4u));
  /* 10941997 call edi */
  call_ind((uint32_t)(EDI), 0x10941999u);
  /* 10941999 push 0x10948908 */
  push32((uint32_t)(0x10948908u));
  /* 1094199e push 5 */
  push32((uint32_t)(0x5u));
  /* 109419a0 call edi */
  call_ind((uint32_t)(EDI), 0x109419a2u);
  /* 109419a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109419a5:;
  /* 109419a5 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 109419a7 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109419adu);
  /* 109419ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109419b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109419b2 je 0x10941d9c */
  if (C.zf) goto L_10941d9c;
  /* 109419b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109419ba push 0x5d */
  push32((uint32_t)(0x5du));
  /* 109419bc call ebx */
  call_ind((uint32_t)(EBX), 0x109419beu);
  /* 109419be push 0 */
  push32((uint32_t)(0x0u));
  /* 109419c0 call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x109419c6u);
  /* 109419c6 mov edi, dword ptr [0x109470f4] */
  EDI = (r32((uint32_t)(0x109470f4)));
  /* 109419cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109419cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109419d1 jne 0x10941bf4 */
  if (!C.zf) goto L_10941bf4;
  /* 109419d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109419d9 push 0x109490c0 */
  push32((uint32_t)(0x109490c0u));
  /* 109419de push 0 */
  push32((uint32_t)(0x0u));
  /* 109419e0 push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 109419e5 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 109419ea push 0x10948f80 */
  push32((uint32_t)(0x10948f80u));
  /* 109419ef call edi */
  call_ind((uint32_t)(EDI), 0x109419f1u);
  /* 109419f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109419f3 push 0x109490b8 */
  push32((uint32_t)(0x109490b8u));
  /* 109419f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109419fa push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 109419ff push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941a04 push 0x10948e80 */
  push32((uint32_t)(0x10948e80u));
  /* 10941a09 call edi */
  call_ind((uint32_t)(EDI), 0x10941a0bu);
  /* 10941a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a0d push 0x109490d0 */
  push32((uint32_t)(0x109490d0u));
  /* 10941a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a14 push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 10941a19 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941a1e push 0x10948e78 */
  push32((uint32_t)(0x10948e78u));
  /* 10941a23 call edi */
  call_ind((uint32_t)(EDI), 0x10941a25u);
  /* 10941a25 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a2a push 0x109490c8 */
  push32((uint32_t)(0x109490c8u));
  /* 10941a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a31 push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 10941a36 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941a3b push 0x10948e90 */
  push32((uint32_t)(0x10948e90u));
  /* 10941a40 call edi */
  call_ind((uint32_t)(EDI), 0x10941a42u);
  /* 10941a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a44 push 0x109490d8 */
  push32((uint32_t)(0x109490d8u));
  /* 10941a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a4b push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 10941a50 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941a55 push 0x10948e88 */
  push32((uint32_t)(0x10948e88u));
  /* 10941a5a call edi */
  call_ind((uint32_t)(EDI), 0x10941a5cu);
  /* 10941a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a5e push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10941a60 call ebx */
  call_ind((uint32_t)(EBX), 0x10941a62u);
  /* 10941a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a64 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10941a66 call ebx */
  call_ind((uint32_t)(EBX), 0x10941a68u);
  /* 10941a68 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a6d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10941a6f call ebx */
  call_ind((uint32_t)(EBX), 0x10941a71u);
  /* 10941a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a73 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10941a75 call ebx */
  call_ind((uint32_t)(EBX), 0x10941a77u);
  /* 10941a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941a79 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10941a7b call ebx */
  call_ind((uint32_t)(EBX), 0x10941a7du);
  /* 10941a7d push 0x109488f8 */
  push32((uint32_t)(0x109488f8u));
  /* 10941a82 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941a87 call esi */
  call_ind((uint32_t)(ESI), 0x10941a89u);
  /* 10941a89 push 0x109488e8 */
  push32((uint32_t)(0x109488e8u));
  /* 10941a8e push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941a93 call esi */
  call_ind((uint32_t)(ESI), 0x10941a95u);
  /* 10941a95 push 0x109488d8 */
  push32((uint32_t)(0x109488d8u));
  /* 10941a9a push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941a9f call esi */
  call_ind((uint32_t)(ESI), 0x10941aa1u);
  /* 10941aa1 push 0x109488c8 */
  push32((uint32_t)(0x109488c8u));
  /* 10941aa6 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941aab call esi */
  call_ind((uint32_t)(ESI), 0x10941aadu);
  /* 10941aad push 0x109488b8 */
  push32((uint32_t)(0x109488b8u));
  /* 10941ab2 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941ab7 call esi */
  call_ind((uint32_t)(ESI), 0x10941ab9u);
  /* 10941ab9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941abc push 0x109488a8 */
  push32((uint32_t)(0x109488a8u));
  /* 10941ac1 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941ac6 call esi */
  call_ind((uint32_t)(ESI), 0x10941ac8u);
  /* 10941ac8 push 0x10948898 */
  push32((uint32_t)(0x10948898u));
  /* 10941acd push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941ad2 call esi */
  call_ind((uint32_t)(ESI), 0x10941ad4u);
  /* 10941ad4 push 0x10948884 */
  push32((uint32_t)(0x10948884u));
  /* 10941ad9 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941ade call esi */
  call_ind((uint32_t)(ESI), 0x10941ae0u);
  /* 10941ae0 push 0x10948870 */
  push32((uint32_t)(0x10948870u));
  /* 10941ae5 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941aea call esi */
  call_ind((uint32_t)(ESI), 0x10941aecu);
  /* 10941aec push 0x1094885c */
  push32((uint32_t)(0x1094885cu));
  /* 10941af1 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941af6 call esi */
  call_ind((uint32_t)(ESI), 0x10941af8u);
  /* 10941af8 push 0x10948848 */
  push32((uint32_t)(0x10948848u));
  /* 10941afd push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b02 call esi */
  call_ind((uint32_t)(ESI), 0x10941b04u);
  /* 10941b04 push 0x10948834 */
  push32((uint32_t)(0x10948834u));
  /* 10941b09 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b0e call esi */
  call_ind((uint32_t)(ESI), 0x10941b10u);
  /* 10941b10 push 0x1094881c */
  push32((uint32_t)(0x1094881cu));
  /* 10941b15 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b1a call esi */
  call_ind((uint32_t)(ESI), 0x10941b1cu);
  /* 10941b1c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941b1f push 0x10948804 */
  push32((uint32_t)(0x10948804u));
  /* 10941b24 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b29 call esi */
  call_ind((uint32_t)(ESI), 0x10941b2bu);
  /* 10941b2b push 0x109487ec */
  push32((uint32_t)(0x109487ecu));
  /* 10941b30 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b35 call esi */
  call_ind((uint32_t)(ESI), 0x10941b37u);
  /* 10941b37 push 0x109487d4 */
  push32((uint32_t)(0x109487d4u));
  /* 10941b3c push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b41 call esi */
  call_ind((uint32_t)(ESI), 0x10941b43u);
  /* 10941b43 push 0x109487bc */
  push32((uint32_t)(0x109487bcu));
  /* 10941b48 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b4d call esi */
  call_ind((uint32_t)(ESI), 0x10941b4fu);
  /* 10941b4f push 0x109487a4 */
  push32((uint32_t)(0x109487a4u));
  /* 10941b54 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b59 call esi */
  call_ind((uint32_t)(ESI), 0x10941b5bu);
  /* 10941b5b push 0x1094878c */
  push32((uint32_t)(0x1094878cu));
  /* 10941b60 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b65 call esi */
  call_ind((uint32_t)(ESI), 0x10941b67u);
  /* 10941b67 push 0x10948774 */
  push32((uint32_t)(0x10948774u));
  /* 10941b6c push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b71 call esi */
  call_ind((uint32_t)(ESI), 0x10941b73u);
  /* 10941b73 push 0x1094875c */
  push32((uint32_t)(0x1094875cu));
  /* 10941b78 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b7d call esi */
  call_ind((uint32_t)(ESI), 0x10941b7fu);
  /* 10941b7f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941b82 push 0x10948744 */
  push32((uint32_t)(0x10948744u));
  /* 10941b87 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b8c call esi */
  call_ind((uint32_t)(ESI), 0x10941b8eu);
  /* 10941b8e push 0x1094872c */
  push32((uint32_t)(0x1094872cu));
  /* 10941b93 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941b98 call esi */
  call_ind((uint32_t)(ESI), 0x10941b9au);
  /* 10941b9a push 0x10948714 */
  push32((uint32_t)(0x10948714u));
  /* 10941b9f push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941ba4 call esi */
  call_ind((uint32_t)(ESI), 0x10941ba6u);
  /* 10941ba6 push 0x1094870c */
  push32((uint32_t)(0x1094870cu));
  /* 10941bab push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941bb0 call esi */
  call_ind((uint32_t)(ESI), 0x10941bb2u);
  /* 10941bb2 push 0x10948704 */
  push32((uint32_t)(0x10948704u));
  /* 10941bb7 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941bbc call esi */
  call_ind((uint32_t)(ESI), 0x10941bbeu);
  /* 10941bbe push 0x109486fc */
  push32((uint32_t)(0x109486fcu));
  /* 10941bc3 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941bc8 call esi */
  call_ind((uint32_t)(ESI), 0x10941bcau);
  /* 10941bca push 0x109486e8 */
  push32((uint32_t)(0x109486e8u));
  /* 10941bcf push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941bd4 call esi */
  call_ind((uint32_t)(ESI), 0x10941bd6u);
  /* 10941bd6 push 0x109486d4 */
  push32((uint32_t)(0x109486d4u));
  /* 10941bdb push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941be0 call esi */
  call_ind((uint32_t)(ESI), 0x10941be2u);
  /* 10941be2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941be5 push 0x109486c0 */
  push32((uint32_t)(0x109486c0u));
  /* 10941bea push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941bef call esi */
  call_ind((uint32_t)(ESI), 0x10941bf1u);
  /* 10941bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10941bf4:;
  /* 10941bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941bf6 call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x10941bfcu);
  /* 10941bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941bff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10941c02 jne 0x10941d28 */
  if (!C.zf) goto L_10941d28;
  /* 10941c08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941c0a push 0x109490c0 */
  push32((uint32_t)(0x109490c0u));
  /* 10941c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10941c11 push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 10941c16 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941c1b push 0x10948f80 */
  push32((uint32_t)(0x10948f80u));
  /* 10941c20 call edi */
  call_ind((uint32_t)(EDI), 0x10941c22u);
  /* 10941c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941c24 push 0x109490b8 */
  push32((uint32_t)(0x109490b8u));
  /* 10941c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941c2b push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 10941c30 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941c35 push 0x10948e80 */
  push32((uint32_t)(0x10948e80u));
  /* 10941c3a call edi */
  call_ind((uint32_t)(EDI), 0x10941c3cu);
  /* 10941c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10941c3e push 0x109490c8 */
  push32((uint32_t)(0x109490c8u));
  /* 10941c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941c45 push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 10941c4a push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941c4f push 0x10948e90 */
  push32((uint32_t)(0x10948e90u));
  /* 10941c54 call edi */
  call_ind((uint32_t)(EDI), 0x10941c56u);
  /* 10941c56 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941c59 push 0x1094881c */
  push32((uint32_t)(0x1094881cu));
  /* 10941c5e push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941c63 call esi */
  call_ind((uint32_t)(ESI), 0x10941c65u);
  /* 10941c65 push 0x10948804 */
  push32((uint32_t)(0x10948804u));
  /* 10941c6a push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941c6f call esi */
  call_ind((uint32_t)(ESI), 0x10941c71u);
  /* 10941c71 push 0x109487ec */
  push32((uint32_t)(0x109487ecu));
  /* 10941c76 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941c7b call esi */
  call_ind((uint32_t)(ESI), 0x10941c7du);
  /* 10941c7d push 0x109487d4 */
  push32((uint32_t)(0x109487d4u));
  /* 10941c82 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941c87 call esi */
  call_ind((uint32_t)(ESI), 0x10941c89u);
  /* 10941c89 push 0x109487bc */
  push32((uint32_t)(0x109487bcu));
  /* 10941c8e push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941c93 call esi */
  call_ind((uint32_t)(ESI), 0x10941c95u);
  /* 10941c95 push 0x109487a4 */
  push32((uint32_t)(0x109487a4u));
  /* 10941c9a push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941c9f call esi */
  call_ind((uint32_t)(ESI), 0x10941ca1u);
  /* 10941ca1 push 0x1094878c */
  push32((uint32_t)(0x1094878cu));
  /* 10941ca6 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941cab call esi */
  call_ind((uint32_t)(ESI), 0x10941cadu);
  /* 10941cad push 0x10948774 */
  push32((uint32_t)(0x10948774u));
  /* 10941cb2 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941cb7 call esi */
  call_ind((uint32_t)(ESI), 0x10941cb9u);
  /* 10941cb9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941cbc push 0x1094875c */
  push32((uint32_t)(0x1094875cu));
  /* 10941cc1 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941cc6 call esi */
  call_ind((uint32_t)(ESI), 0x10941cc8u);
  /* 10941cc8 push 0x10948744 */
  push32((uint32_t)(0x10948744u));
  /* 10941ccd push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941cd2 call esi */
  call_ind((uint32_t)(ESI), 0x10941cd4u);
  /* 10941cd4 push 0x1094872c */
  push32((uint32_t)(0x1094872cu));
  /* 10941cd9 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941cde call esi */
  call_ind((uint32_t)(ESI), 0x10941ce0u);
  /* 10941ce0 push 0x10948714 */
  push32((uint32_t)(0x10948714u));
  /* 10941ce5 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941cea call esi */
  call_ind((uint32_t)(ESI), 0x10941cecu);
  /* 10941cec push 0x109486e8 */
  push32((uint32_t)(0x109486e8u));
  /* 10941cf1 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941cf6 call esi */
  call_ind((uint32_t)(ESI), 0x10941cf8u);
  /* 10941cf8 push 0x109486d4 */
  push32((uint32_t)(0x109486d4u));
  /* 10941cfd push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941d02 call esi */
  call_ind((uint32_t)(ESI), 0x10941d04u);
  /* 10941d04 push 0x109486c0 */
  push32((uint32_t)(0x109486c0u));
  /* 10941d09 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941d0e call esi */
  call_ind((uint32_t)(ESI), 0x10941d10u);
  /* 10941d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d12 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10941d14 call ebx */
  call_ind((uint32_t)(EBX), 0x10941d16u);
  /* 10941d16 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941d19 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d1b push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10941d1d call ebx */
  call_ind((uint32_t)(EBX), 0x10941d1fu);
  /* 10941d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d21 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10941d23 call ebx */
  call_ind((uint32_t)(EBX), 0x10941d25u);
  /* 10941d25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10941d28:;
  /* 10941d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d2a call dword ptr [0x109470cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470cc))), 0x10941d30u);
  /* 10941d30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941d33 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10941d36 jne 0x10941d9c */
  if (!C.zf) goto L_10941d9c;
  /* 10941d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d3a push 0x109490c0 */
  push32((uint32_t)(0x109490c0u));
  /* 10941d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d41 push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 10941d46 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941d4b push 0x10948f80 */
  push32((uint32_t)(0x10948f80u));
  /* 10941d50 call edi */
  call_ind((uint32_t)(EDI), 0x10941d52u);
  /* 10941d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d54 push 0x109490c8 */
  push32((uint32_t)(0x109490c8u));
  /* 10941d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d5b push 0x10948f78 */
  push32((uint32_t)(0x10948f78u));
  /* 10941d60 push 0x10949078 */
  push32((uint32_t)(0x10949078u));
  /* 10941d65 push 0x10948e90 */
  push32((uint32_t)(0x10948e90u));
  /* 10941d6a call edi */
  call_ind((uint32_t)(EDI), 0x10941d6cu);
  /* 10941d6c push 0x109486e8 */
  push32((uint32_t)(0x109486e8u));
  /* 10941d71 push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941d76 call esi */
  call_ind((uint32_t)(ESI), 0x10941d78u);
  /* 10941d78 push 0x109486d4 */
  push32((uint32_t)(0x109486d4u));
  /* 10941d7d push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941d82 call esi */
  call_ind((uint32_t)(ESI), 0x10941d84u);
  /* 10941d84 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941d87 push 0x109486c0 */
  push32((uint32_t)(0x109486c0u));
  /* 10941d8c push 0x109483a8 */
  push32((uint32_t)(0x109483a8u));
  /* 10941d91 call esi */
  call_ind((uint32_t)(ESI), 0x10941d93u);
  /* 10941d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941d95 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10941d97 call ebx */
  call_ind((uint32_t)(EBX), 0x10941d99u);
  /* 10941d99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10941d9c:;
  /* 10941d9c push 0xa */
  push32((uint32_t)(0xau));
  /* 10941d9e call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10941da4u);
  /* 10941da4 mov edi, dword ptr [0x109470ec] */
  EDI = (r32((uint32_t)(0x109470ec)));
  /* 10941daa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941dad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941daf je 0x10941e07 */
  if (C.zf) goto L_10941e07;
  /* 10941db1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941db3 call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10941db9u);
  /* 10941db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941dbc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941dbe je 0x10941e07 */
  if (C.zf) goto L_10941e07;
  /* 10941dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941dc2 push 0xa */
  push32((uint32_t)(0xau));
  /* 10941dc4 call ebx */
  call_ind((uint32_t)(EBX), 0x10941dc6u);
  /* 10941dc6 mov eax, dword ptr [0x10948db4] */
  EAX = (r32((uint32_t)(0x10948db4)));
  /* 10941dcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10941dd0 mov dword ptr [0x10948db0], 0 */
  w32((uint32_t)(0x10948db0), (0x0u));
  /* 10941dda jle 0x10941e07 */
  if ((C.zf||C.sf!=C.of)) goto L_10941e07;
L_10941ddc:;
  /* 10941ddc push 1 */
  push32((uint32_t)(0x1u));
  /* 10941dde push 0x10948ed8 */
  push32((uint32_t)(0x10948ed8u));
  /* 10941de3 push 0x10949028 */
  push32((uint32_t)(0x10949028u));
  /* 10941de8 push 0x10948f88 */
  push32((uint32_t)(0x10948f88u));
  /* 10941ded call edi */
  call_ind((uint32_t)(EDI), 0x10941defu);
  /* 10941def mov eax, dword ptr [0x10948db0] */
  EAX = (r32((uint32_t)(0x10948db0)));
  /* 10941df4 mov ecx, dword ptr [0x10948db4] */
  ECX = (r32((uint32_t)(0x10948db4)));
  /* 10941dfa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941dfd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10941dfe cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10941e00 mov dword ptr [0x10948db0], eax */
  w32((uint32_t)(0x10948db0), (EAX));
  /* 10941e05 jl 0x10941ddc */
  if ((C.sf!=C.of)) goto L_10941ddc;
L_10941e07:;
  /* 10941e07 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10941e09 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10941e0fu);
  /* 10941e0f mov edi, dword ptr [0x10947100] */
  EDI = (r32((uint32_t)(0x10947100)));
  /* 10941e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941e18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941e1a je 0x10941e7a */
  if (C.zf) goto L_10941e7a;
  /* 10941e1c push 0x10948ed8 */
  push32((uint32_t)(0x10948ed8u));
  /* 10941e21 push 0x10949110 */
  push32((uint32_t)(0x10949110u));
  /* 10941e26 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10941e2cu);
  /* 10941e2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10941e31 jle 0x10941e7a */
  if ((C.zf||C.sf!=C.of)) goto L_10941e7a;
  /* 10941e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941e35 push 0x10948ed8 */
  push32((uint32_t)(0x10948ed8u));
  /* 10941e3a call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10941e40u);
  /* 10941e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941e42 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10941e44 push 0x10948e20 */
  push32((uint32_t)(0x10948e20u));
  /* 10941e49 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941e4b call edi */
  call_ind((uint32_t)(EDI), 0x10941e4du);
  /* 10941e4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10941e4f push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10941e51 push 0x10949008 */
  push32((uint32_t)(0x10949008u));
  /* 10941e56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941e58 call edi */
  call_ind((uint32_t)(EDI), 0x10941e5au);
  /* 10941e5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10941e5c push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10941e5e push 0x10948ef8 */
  push32((uint32_t)(0x10948ef8u));
  /* 10941e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941e65 call edi */
  call_ind((uint32_t)(EDI), 0x10941e67u);
  /* 10941e67 push 0x10948f18 */
  push32((uint32_t)(0x10948f18u));
  /* 10941e6c push 0x10948ed8 */
  push32((uint32_t)(0x10948ed8u));
  /* 10941e71 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10941e77u);
  /* 10941e77 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10941e7a:;
  /* 10941e7a push 0xc */
  push32((uint32_t)(0xcu));
  /* 10941e7c call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10941e82u);
  /* 10941e82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941e85 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941e87 je 0x10941ebe */
  if (C.zf) goto L_10941ebe;
  /* 10941e89 push 0x10948f18 */
  push32((uint32_t)(0x10948f18u));
  /* 10941e8e push 0x10948ef8 */
  push32((uint32_t)(0x10948ef8u));
  /* 10941e93 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10941e99u);
  /* 10941e99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941e9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10941e9e jle 0x10941ebe */
  if ((C.zf||C.sf!=C.of)) goto L_10941ebe;
  /* 10941ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941ea2 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10941ea4 call ebx */
  call_ind((uint32_t)(EBX), 0x10941ea6u);
  /* 10941ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941ea8 push 0x10948fe0 */
  push32((uint32_t)(0x10948fe0u));
  /* 10941ead call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10941eb3u);
  /* 10941eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941eb5 call dword ptr [0x109470e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e4))), 0x10941ebbu);
  /* 10941ebb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10941ebe:;
  /* 10941ebe push 0xd */
  push32((uint32_t)(0xdu));
  /* 10941ec0 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10941ec6u);
  /* 10941ec6 mov edi, dword ptr [0x1094710c] */
  EDI = (r32((uint32_t)(0x1094710c)));
  /* 10941ecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941ecf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941ed1 je 0x10941f0d */
  if (C.zf) goto L_10941f0d;
  /* 10941ed3 push 0x10948f18 */
  push32((uint32_t)(0x10948f18u));
  /* 10941ed8 push 0x10948ef8 */
  push32((uint32_t)(0x10948ef8u));
  /* 10941edd call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10941ee3u);
  /* 10941ee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941ee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10941ee8 jle 0x10941f0d */
  if ((C.zf||C.sf!=C.of)) goto L_10941f0d;
  /* 10941eea push 0 */
  push32((uint32_t)(0x0u));
  /* 10941eec push 0xd */
  push32((uint32_t)(0xdu));
  /* 10941eee call ebx */
  call_ind((uint32_t)(EBX), 0x10941ef0u);
  /* 10941ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941ef2 push 0x10948f18 */
  push32((uint32_t)(0x10948f18u));
  /* 10941ef7 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10941efdu);
  /* 10941efd push 2 */
  push32((uint32_t)(0x2u));
  /* 10941eff push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10941f01 push 0x10948d80 */
  push32((uint32_t)(0x10948d80u));
  /* 10941f06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941f08 call edi */
  call_ind((uint32_t)(EDI), 0x10941f0au);
  /* 10941f0a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10941f0d:;
  /* 10941f0d push 0xe */
  push32((uint32_t)(0xeu));
  /* 10941f0f call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10941f15u);
  /* 10941f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941f18 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941f1a je 0x10941f76 */
  if (C.zf) goto L_10941f76;
  /* 10941f1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10941f1e call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10941f24u);
  /* 10941f24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941f27 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941f29 je 0x10941f76 */
  if (C.zf) goto L_10941f76;
  /* 10941f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10941f2d push 0xe */
  push32((uint32_t)(0xeu));
  /* 10941f2f call ebx */
  call_ind((uint32_t)(EBX), 0x10941f31u);
  /* 10941f31 mov eax, dword ptr [0x10948db4] */
  EAX = (r32((uint32_t)(0x10948db4)));
  /* 10941f36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10941f3b mov dword ptr [0x10948ee0], 0 */
  w32((uint32_t)(0x10948ee0), (0x0u));
  /* 10941f45 jle 0x10941f76 */
  if ((C.zf||C.sf!=C.of)) goto L_10941f76;
L_10941f47:;
  /* 10941f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941f49 push 0x10948ec8 */
  push32((uint32_t)(0x10948ec8u));
  /* 10941f4e push 0x10949038 */
  push32((uint32_t)(0x10949038u));
  /* 10941f53 push 0x10948f98 */
  push32((uint32_t)(0x10948f98u));
  /* 10941f58 call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x10941f5eu);
  /* 10941f5e mov eax, dword ptr [0x10948ee0] */
  EAX = (r32((uint32_t)(0x10948ee0)));
  /* 10941f63 mov ecx, dword ptr [0x10948db4] */
  ECX = (r32((uint32_t)(0x10948db4)));
  /* 10941f69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941f6c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10941f6d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10941f6f mov dword ptr [0x10948ee0], eax */
  w32((uint32_t)(0x10948ee0), (EAX));
  /* 10941f74 jl 0x10941f47 */
  if ((C.sf!=C.of)) goto L_10941f47;
L_10941f76:;
  /* 10941f76 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10941f78 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10941f7eu);
  /* 10941f7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941f81 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941f83 je 0x10941fef */
  if (C.zf) goto L_10941fef;
  /* 10941f85 push 0x10948ec8 */
  push32((uint32_t)(0x10948ec8u));
  /* 10941f8a push 0x10949118 */
  push32((uint32_t)(0x10949118u));
  /* 10941f8f call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10941f95u);
  /* 10941f95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10941f9a jle 0x10941fef */
  if ((C.zf||C.sf!=C.of)) goto L_10941fef;
  /* 10941f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10941f9e push 0x10948ec8 */
  push32((uint32_t)(0x10948ec8u));
  /* 10941fa3 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10941fa9u);
  /* 10941fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10941fab push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10941fad push 0x10948e18 */
  push32((uint32_t)(0x10948e18u));
  /* 10941fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941fb4 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10941fbau);
  /* 10941fba push 2 */
  push32((uint32_t)(0x2u));
  /* 10941fbc push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10941fbe push 0x10949070 */
  push32((uint32_t)(0x10949070u));
  /* 10941fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941fc5 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10941fcbu);
  /* 10941fcb push 2 */
  push32((uint32_t)(0x2u));
  /* 10941fcd push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10941fcf push 0x10948f10 */
  push32((uint32_t)(0x10948f10u));
  /* 10941fd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10941fd6 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10941fdcu);
  /* 10941fdc push 0x10948f20 */
  push32((uint32_t)(0x10948f20u));
  /* 10941fe1 push 0x10948ec8 */
  push32((uint32_t)(0x10948ec8u));
  /* 10941fe6 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10941fecu);
  /* 10941fec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10941fef:;
  /* 10941fef push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10941ff1 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10941ff7u);
  /* 10941ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10941ffa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10941ffc je 0x10942033 */
  if (C.zf) goto L_10942033;
  /* 10941ffe push 0x10948f20 */
  push32((uint32_t)(0x10948f20u));
  /* 10942003 push 0x10948f10 */
  push32((uint32_t)(0x10948f10u));
  /* 10942008 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x1094200eu);
  /* 1094200e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942013 jle 0x10942033 */
  if ((C.zf||C.sf!=C.of)) goto L_10942033;
  /* 10942015 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942017 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10942019 call ebx */
  call_ind((uint32_t)(EBX), 0x1094201bu);
  /* 1094201b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094201d push 0x10948fc8 */
  push32((uint32_t)(0x10948fc8u));
  /* 10942022 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942028u);
  /* 10942028 push 1 */
  push32((uint32_t)(0x1u));
  /* 1094202a call dword ptr [0x109470e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e4))), 0x10942030u);
  /* 10942030 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942033:;
  /* 10942033 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10942035 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094203bu);
  /* 1094203b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094203e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942040 je 0x1094207c */
  if (C.zf) goto L_1094207c;
  /* 10942042 push 0x10948f20 */
  push32((uint32_t)(0x10948f20u));
  /* 10942047 push 0x10948f10 */
  push32((uint32_t)(0x10948f10u));
  /* 1094204c call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942052u);
  /* 10942052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942057 jle 0x1094207c */
  if ((C.zf||C.sf!=C.of)) goto L_1094207c;
  /* 10942059 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094205b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1094205d call ebx */
  call_ind((uint32_t)(EBX), 0x1094205fu);
  /* 1094205f push 0 */
  push32((uint32_t)(0x0u));
  /* 10942061 push 0x10948f20 */
  push32((uint32_t)(0x10948f20u));
  /* 10942066 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x1094206cu);
  /* 1094206c push 2 */
  push32((uint32_t)(0x2u));
  /* 1094206e push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10942070 push 0x10948da0 */
  push32((uint32_t)(0x10948da0u));
  /* 10942075 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942077 call edi */
  call_ind((uint32_t)(EDI), 0x10942079u);
  /* 10942079 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1094207c:;
  /* 1094207c push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1094207e call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942084u);
  /* 10942084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942087 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942089 je 0x10942105 */
  if (C.zf) goto L_10942105;
  /* 1094208b mov eax, dword ptr [0x10948db0] */
  EAX = (r32((uint32_t)(0x10948db0)));
  /* 10942090 mov ecx, dword ptr [0x10948db4] */
  ECX = (r32((uint32_t)(0x10948db4)));
  /* 10942096 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942098 jne 0x10942105 */
  if (!C.zf) goto L_10942105;
  /* 1094209a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1094209c mov dword ptr [0x10948db0], 0 */
  w32((uint32_t)(0x10948db0), (0x0u));
  /* 109420a6 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109420acu);
  /* 109420ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109420af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109420b1 je 0x109420c3 */
  if (C.zf) goto L_109420c3;
  /* 109420b3 mov eax, dword ptr [0x10948db4] */
  EAX = (r32((uint32_t)(0x10948db4)));
  /* 109420b8 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109420bb jge 0x109420c3 */
  if ((C.sf==C.of)) goto L_109420c3;
  /* 109420bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109420be mov dword ptr [0x10948db4], eax */
  w32((uint32_t)(0x10948db4), (EAX));
L_109420c3:;
  /* 109420c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109420c5 push 0xa */
  push32((uint32_t)(0xau));
  /* 109420c7 call ebx */
  call_ind((uint32_t)(EBX), 0x109420c9u);
  /* 109420c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109420cb push 0xd */
  push32((uint32_t)(0xdu));
  /* 109420cd call ebx */
  call_ind((uint32_t)(EBX), 0x109420cfu);
  /* 109420cf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 109420d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109420d6 call ebp */
  call_ind((uint32_t)(EBP), 0x109420d8u);
  /* 109420d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109420da push 0x10948f18 */
  push32((uint32_t)(0x10948f18u));
  /* 109420df call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109420e5u);
  /* 109420e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109420e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109420e9 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 109420ee push 1 */
  push32((uint32_t)(0x1u));
  /* 109420f0 call edi */
  call_ind((uint32_t)(EDI), 0x109420f2u);
  /* 109420f2 push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 109420f7 push 0x10948f18 */
  push32((uint32_t)(0x10948f18u));
  /* 109420fc call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10942102u);
  /* 10942102 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942105:;
  /* 10942105 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10942107 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094210du);
  /* 1094210d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942110 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942112 je 0x1094218e */
  if (C.zf) goto L_1094218e;
  /* 10942114 mov ecx, dword ptr [0x10948ee0] */
  ECX = (r32((uint32_t)(0x10948ee0)));
  /* 1094211a mov eax, dword ptr [0x10948f30] */
  EAX = (r32((uint32_t)(0x10948f30)));
  /* 1094211f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942121 jne 0x1094218e */
  if (!C.zf) goto L_1094218e;
  /* 10942123 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10942125 mov dword ptr [0x10948ee0], 0 */
  w32((uint32_t)(0x10948ee0), (0x0u));
  /* 1094212f call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942135u);
  /* 10942135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942138 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094213a je 0x1094214c */
  if (C.zf) goto L_1094214c;
  /* 1094213c mov eax, dword ptr [0x10948f30] */
  EAX = (r32((uint32_t)(0x10948f30)));
  /* 10942141 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942144 jge 0x1094214c */
  if ((C.sf==C.of)) goto L_1094214c;
  /* 10942146 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10942147 mov dword ptr [0x10948f30], eax */
  w32((uint32_t)(0x10948f30), (EAX));
L_1094214c:;
  /* 1094214c push 1 */
  push32((uint32_t)(0x1u));
  /* 1094214e push 0xe */
  push32((uint32_t)(0xeu));
  /* 10942150 call ebx */
  call_ind((uint32_t)(EBX), 0x10942152u);
  /* 10942152 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942154 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10942156 call ebx */
  call_ind((uint32_t)(EBX), 0x10942158u);
  /* 10942158 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1094215d push 2 */
  push32((uint32_t)(0x2u));
  /* 1094215f call ebp */
  call_ind((uint32_t)(EBP), 0x10942161u);
  /* 10942161 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942163 push 0x10948f20 */
  push32((uint32_t)(0x10948f20u));
  /* 10942168 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x1094216eu);
  /* 1094216e push 0 */
  push32((uint32_t)(0x0u));
  /* 10942170 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942172 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10942177 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942179 call edi */
  call_ind((uint32_t)(EDI), 0x1094217bu);
  /* 1094217b push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942180 push 0x10948f20 */
  push32((uint32_t)(0x10948f20u));
  /* 10942185 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x1094218bu);
  /* 1094218b add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1094218e:;
  /* 1094218e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10942190 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942196u);
  /* 10942196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942199 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094219b je 0x109421e9 */
  if (C.zf) goto L_109421e9;
  /* 1094219d push 3 */
  push32((uint32_t)(0x3u));
  /* 1094219f call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x109421a5u);
  /* 109421a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109421a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109421aa je 0x109421e9 */
  if (C.zf) goto L_109421e9;
  /* 109421ac push 0 */
  push32((uint32_t)(0x0u));
  /* 109421ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 109421b0 call ebx */
  call_ind((uint32_t)(EBX), 0x109421b2u);
  /* 109421b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109421b5 mov dword ptr [0x10948ee4], 0 */
  w32((uint32_t)(0x10948ee4), (0x0u));
L_109421bf:;
  /* 109421bf push 6 */
  push32((uint32_t)(0x6u));
  /* 109421c1 push 0x10949088 */
  push32((uint32_t)(0x10949088u));
  /* 109421c6 push 0x10948f50 */
  push32((uint32_t)(0x10948f50u));
  /* 109421cb push 0x10948d98 */
  push32((uint32_t)(0x10948d98u));
  /* 109421d0 call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x109421d6u);
  /* 109421d6 mov eax, dword ptr [0x10948ee4] */
  EAX = (r32((uint32_t)(0x10948ee4)));
  /* 109421db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109421de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109421df cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109421e2 mov dword ptr [0x10948ee4], eax */
  w32((uint32_t)(0x10948ee4), (EAX));
  /* 109421e7 jl 0x109421bf */
  if ((C.sf!=C.of)) goto L_109421bf;
L_109421e9:;
  /* 109421e9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 109421eb call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109421f1u);
  /* 109421f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109421f4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109421f6 je 0x10942262 */
  if (C.zf) goto L_10942262;
  /* 109421f8 push 0x10949088 */
  push32((uint32_t)(0x10949088u));
  /* 109421fd push 0x10948df8 */
  push32((uint32_t)(0x10948df8u));
  /* 10942202 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942208u);
  /* 10942208 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094220b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094220d jle 0x10942262 */
  if ((C.zf||C.sf!=C.of)) goto L_10942262;
  /* 1094220f push 0 */
  push32((uint32_t)(0x0u));
  /* 10942211 push 0x10949088 */
  push32((uint32_t)(0x10949088u));
  /* 10942216 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x1094221cu);
  /* 1094221c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094221e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10942220 push 0x10948e20 */
  push32((uint32_t)(0x10948e20u));
  /* 10942225 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942227 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x1094222du);
  /* 1094222d push 2 */
  push32((uint32_t)(0x2u));
  /* 1094222f push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10942231 push 0x10949008 */
  push32((uint32_t)(0x10949008u));
  /* 10942236 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942238 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x1094223eu);
  /* 1094223e push 2 */
  push32((uint32_t)(0x2u));
  /* 10942240 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10942242 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 10942247 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942249 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x1094224fu);
  /* 1094224f push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 10942254 push 0x10949088 */
  push32((uint32_t)(0x10949088u));
  /* 10942259 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x1094225fu);
  /* 1094225f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942262:;
  /* 10942262 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10942264 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094226au);
  /* 1094226a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094226d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094226f je 0x109422a6 */
  if (C.zf) goto L_109422a6;
  /* 10942271 push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 10942276 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 1094227b call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942281u);
  /* 10942281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942286 jle 0x109422a6 */
  if ((C.zf||C.sf!=C.of)) goto L_109422a6;
  /* 10942288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094228a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1094228c call ebx */
  call_ind((uint32_t)(EBX), 0x1094228eu);
  /* 1094228e push 0 */
  push32((uint32_t)(0x0u));
  /* 10942290 push 0x10948fd0 */
  push32((uint32_t)(0x10948fd0u));
  /* 10942295 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x1094229bu);
  /* 1094229b push 1 */
  push32((uint32_t)(0x1u));
  /* 1094229d call dword ptr [0x109470e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e4))), 0x109422a3u);
  /* 109422a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109422a6:;
  /* 109422a6 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109422a8 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109422aeu);
  /* 109422ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109422b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109422b3 je 0x109422f3 */
  if (C.zf) goto L_109422f3;
  /* 109422b5 push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 109422ba push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 109422bf call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x109422c5u);
  /* 109422c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109422c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109422ca jle 0x109422f3 */
  if ((C.zf||C.sf!=C.of)) goto L_109422f3;
  /* 109422cc push 0 */
  push32((uint32_t)(0x0u));
  /* 109422ce push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109422d0 call ebx */
  call_ind((uint32_t)(EBX), 0x109422d2u);
  /* 109422d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109422d4 push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 109422d9 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109422dfu);
  /* 109422df push 2 */
  push32((uint32_t)(0x2u));
  /* 109422e1 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109422e3 push 0x10948d90 */
  push32((uint32_t)(0x10948d90u));
  /* 109422e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109422ea call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109422f0u);
  /* 109422f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109422f3:;
  /* 109422f3 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 109422f5 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109422fbu);
  /* 109422fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109422fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942300 je 0x1094245e */
  if (C.zf) goto L_1094245e;
  /* 10942306 cmp dword ptr [0x10948ee4], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x10948ee4))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094230d jne 0x1094245e */
  if (!C.zf) goto L_1094245e;
  /* 10942313 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942315 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10942317 mov dword ptr [0x10948ee4], 0 */
  w32((uint32_t)(0x10948ee4), (0x0u));
  /* 10942321 call ebx */
  call_ind((uint32_t)(EBX), 0x10942323u);
  /* 10942323 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942325 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10942327 call ebx */
  call_ind((uint32_t)(EBX), 0x10942329u);
  /* 10942329 push 0xc80 */
  push32((uint32_t)(0xc80u));
  /* 1094232e push 3 */
  push32((uint32_t)(0x3u));
  /* 10942330 call ebp */
  call_ind((uint32_t)(EBP), 0x10942332u);
  /* 10942332 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942335 call 0x10943a50 */
  push32(0x1094233au); f_10943a50();
  /* 1094233a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1094233b mov ecx, 3 */
  ECX = (0x3u);
  /* 10942340 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10942342 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10942344 jne 0x10942377 */
  if (!C.zf) goto L_10942377;
  /* 10942346 push edx */
  push32((uint32_t)(EDX));
  /* 10942347 push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 1094234c call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942352u);
  /* 10942352 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942354 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942356 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 1094235b push 1 */
  push32((uint32_t)(0x1u));
  /* 1094235d call edi */
  call_ind((uint32_t)(EDI), 0x1094235fu);
  /* 1094235f push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942364 push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 10942369 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x1094236fu);
  /* 1094236f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942372 jmp 0x1094245e */
  goto L_1094245e;
L_10942377:;
  /* 10942377 cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094237a jne 0x109423e5 */
  if (!C.zf) goto L_109423e5;
  /* 1094237c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094237e push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 10942383 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942389u);
  /* 10942389 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094238b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094238d push 0x10948f68 */
  push32((uint32_t)(0x10948f68u));
  /* 10942392 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942394 call edi */
  call_ind((uint32_t)(EDI), 0x10942396u);
  /* 10942396 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942398 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094239a push 0x10948dc0 */
  push32((uint32_t)(0x10948dc0u));
  /* 1094239f push 1 */
  push32((uint32_t)(0x1u));
  /* 109423a1 call edi */
  call_ind((uint32_t)(EDI), 0x109423a3u);
  /* 109423a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 109423a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109423a7 push 0x10948dc8 */
  push32((uint32_t)(0x10948dc8u));
  /* 109423ac push 1 */
  push32((uint32_t)(0x1u));
  /* 109423ae call edi */
  call_ind((uint32_t)(EDI), 0x109423b0u);
  /* 109423b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109423b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109423b4 push 0x10948dd0 */
  push32((uint32_t)(0x10948dd0u));
  /* 109423b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109423bb call edi */
  call_ind((uint32_t)(EDI), 0x109423bdu);
  /* 109423bd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109423c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109423c2 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 109423c7 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 109423cc push 1 */
  push32((uint32_t)(0x1u));
  /* 109423ce call edi */
  call_ind((uint32_t)(EDI), 0x109423d0u);
  /* 109423d0 push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 109423d5 push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 109423da call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x109423e0u);
  /* 109423e0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109423e3 jmp 0x1094245e */
  goto L_1094245e;
L_109423e5:;
  /* 109423e5 cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109423e8 jne 0x1094245e */
  if (!C.zf) goto L_1094245e;
  /* 109423ea push 0 */
  push32((uint32_t)(0x0u));
  /* 109423ec push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 109423f1 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109423f7u);
  /* 109423f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109423f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109423fb push 0x10948f70 */
  push32((uint32_t)(0x10948f70u));
  /* 10942400 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942402 call edi */
  call_ind((uint32_t)(EDI), 0x10942404u);
  /* 10942404 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942406 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942408 push 0x10948dd8 */
  push32((uint32_t)(0x10948dd8u));
  /* 1094240d push 1 */
  push32((uint32_t)(0x1u));
  /* 1094240f call edi */
  call_ind((uint32_t)(EDI), 0x10942411u);
  /* 10942411 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942413 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942415 push 0x10948de0 */
  push32((uint32_t)(0x10948de0u));
  /* 1094241a push 1 */
  push32((uint32_t)(0x1u));
  /* 1094241c call edi */
  call_ind((uint32_t)(EDI), 0x1094241eu);
  /* 1094241e push 2 */
  push32((uint32_t)(0x2u));
  /* 10942420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942422 push 0x10948de8 */
  push32((uint32_t)(0x10948de8u));
  /* 10942427 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942429 call edi */
  call_ind((uint32_t)(EDI), 0x1094242bu);
  /* 1094242b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094242e push 2 */
  push32((uint32_t)(0x2u));
  /* 10942430 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942432 push 0x10948df0 */
  push32((uint32_t)(0x10948df0u));
  /* 10942437 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942439 call edi */
  call_ind((uint32_t)(EDI), 0x1094243bu);
  /* 1094243b push 2 */
  push32((uint32_t)(0x2u));
  /* 1094243d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10942442 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10942447 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942449 call edi */
  call_ind((uint32_t)(EDI), 0x1094244bu);
  /* 1094244b push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942450 push 0x10949048 */
  push32((uint32_t)(0x10949048u));
  /* 10942455 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x1094245bu);
  /* 1094245b add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1094245e:;
  /* 1094245e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10942460 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942466u);
  /* 10942466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942469 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094246b je 0x109424b9 */
  if (C.zf) goto L_109424b9;
  /* 1094246d push 4 */
  push32((uint32_t)(0x4u));
  /* 1094246f call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10942475u);
  /* 10942475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942478 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094247a je 0x109424b9 */
  if (C.zf) goto L_109424b9;
  /* 1094247c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094247e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10942480 call ebx */
  call_ind((uint32_t)(EBX), 0x10942482u);
  /* 10942482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942485 mov dword ptr [0x10948ee8], 0 */
  w32((uint32_t)(0x10948ee8), (0x0u));
L_1094248f:;
  /* 1094248f push 6 */
  push32((uint32_t)(0x6u));
  /* 10942491 push 0x10949098 */
  push32((uint32_t)(0x10949098u));
  /* 10942496 push 0x10948f50 */
  push32((uint32_t)(0x10948f50u));
  /* 1094249b push 0x10948da8 */
  push32((uint32_t)(0x10948da8u));
  /* 109424a0 call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x109424a6u);
  /* 109424a6 mov eax, dword ptr [0x10948ee8] */
  EAX = (r32((uint32_t)(0x10948ee8)));
  /* 109424ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109424ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109424af cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109424b2 mov dword ptr [0x10948ee8], eax */
  w32((uint32_t)(0x10948ee8), (EAX));
  /* 109424b7 jl 0x1094248f */
  if ((C.sf!=C.of)) goto L_1094248f;
L_109424b9:;
  /* 109424b9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109424bb call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109424c1u);
  /* 109424c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109424c4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109424c6 je 0x10942532 */
  if (C.zf) goto L_10942532;
  /* 109424c8 push 0x10949098 */
  push32((uint32_t)(0x10949098u));
  /* 109424cd push 0x10948e00 */
  push32((uint32_t)(0x10948e00u));
  /* 109424d2 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x109424d8u);
  /* 109424d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109424db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109424dd jle 0x10942532 */
  if ((C.zf||C.sf!=C.of)) goto L_10942532;
  /* 109424df push 0 */
  push32((uint32_t)(0x0u));
  /* 109424e1 push 0x10949098 */
  push32((uint32_t)(0x10949098u));
  /* 109424e6 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109424ecu);
  /* 109424ec push 0 */
  push32((uint32_t)(0x0u));
  /* 109424ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109424f0 push 0x10948e20 */
  push32((uint32_t)(0x10948e20u));
  /* 109424f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109424f7 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109424fdu);
  /* 109424fd push 2 */
  push32((uint32_t)(0x2u));
  /* 109424ff push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10942501 push 0x10949008 */
  push32((uint32_t)(0x10949008u));
  /* 10942506 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942508 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x1094250eu);
  /* 1094250e push 2 */
  push32((uint32_t)(0x2u));
  /* 10942510 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10942512 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 10942517 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942519 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x1094251fu);
  /* 1094251f push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 10942524 push 0x10949098 */
  push32((uint32_t)(0x10949098u));
  /* 10942529 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x1094252fu);
  /* 1094252f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942532:;
  /* 10942532 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10942534 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094253au);
  /* 1094253a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094253d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094253f je 0x10942576 */
  if (C.zf) goto L_10942576;
  /* 10942541 push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 10942546 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 1094254b call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942551u);
  /* 10942551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942556 jle 0x10942576 */
  if ((C.zf||C.sf!=C.of)) goto L_10942576;
  /* 10942558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094255a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1094255c call ebx */
  call_ind((uint32_t)(EBX), 0x1094255eu);
  /* 1094255e push 0 */
  push32((uint32_t)(0x0u));
  /* 10942560 push 0x10948fd0 */
  push32((uint32_t)(0x10948fd0u));
  /* 10942565 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x1094256bu);
  /* 1094256b push 1 */
  push32((uint32_t)(0x1u));
  /* 1094256d call dword ptr [0x109470e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e4))), 0x10942573u);
  /* 10942573 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942576:;
  /* 10942576 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10942578 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094257eu);
  /* 1094257e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942581 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942583 je 0x109425c3 */
  if (C.zf) goto L_109425c3;
  /* 10942585 push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 1094258a push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 1094258f call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942595u);
  /* 10942595 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094259a jle 0x109425c3 */
  if ((C.zf||C.sf!=C.of)) goto L_109425c3;
  /* 1094259c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094259e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 109425a0 call ebx */
  call_ind((uint32_t)(EBX), 0x109425a2u);
  /* 109425a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109425a4 push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 109425a9 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109425afu);
  /* 109425af push 2 */
  push32((uint32_t)(0x2u));
  /* 109425b1 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109425b3 push 0x10948d90 */
  push32((uint32_t)(0x10948d90u));
  /* 109425b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109425ba call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109425c0u);
  /* 109425c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109425c3:;
  /* 109425c3 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 109425c5 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109425cbu);
  /* 109425cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109425ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109425d0 je 0x1094272e */
  if (C.zf) goto L_1094272e;
  /* 109425d6 cmp dword ptr [0x10948ee8], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x10948ee8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109425dd jne 0x1094272e */
  if (!C.zf) goto L_1094272e;
  /* 109425e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109425e5 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 109425e7 mov dword ptr [0x10948ee8], 0 */
  w32((uint32_t)(0x10948ee8), (0x0u));
  /* 109425f1 call ebx */
  call_ind((uint32_t)(EBX), 0x109425f3u);
  /* 109425f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 109425f5 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 109425f7 call ebx */
  call_ind((uint32_t)(EBX), 0x109425f9u);
  /* 109425f9 push 0xc80 */
  push32((uint32_t)(0xc80u));
  /* 109425fe push 4 */
  push32((uint32_t)(0x4u));
  /* 10942600 call ebp */
  call_ind((uint32_t)(EBP), 0x10942602u);
  /* 10942602 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942605 call 0x10943a50 */
  push32(0x1094260au); f_10943a50();
  /* 1094260a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1094260b mov ecx, 3 */
  ECX = (0x3u);
  /* 10942610 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10942612 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10942614 jne 0x10942647 */
  if (!C.zf) goto L_10942647;
  /* 10942616 push edx */
  push32((uint32_t)(EDX));
  /* 10942617 push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 1094261c call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942622u);
  /* 10942622 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942624 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942626 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 1094262b push 1 */
  push32((uint32_t)(0x1u));
  /* 1094262d call edi */
  call_ind((uint32_t)(EDI), 0x1094262fu);
  /* 1094262f push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942634 push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 10942639 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x1094263fu);
  /* 1094263f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942642 jmp 0x1094272e */
  goto L_1094272e;
L_10942647:;
  /* 10942647 cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094264a jne 0x109426b5 */
  if (!C.zf) goto L_109426b5;
  /* 1094264c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094264e push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 10942653 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942659u);
  /* 10942659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094265b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094265d push 0x10948f68 */
  push32((uint32_t)(0x10948f68u));
  /* 10942662 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942664 call edi */
  call_ind((uint32_t)(EDI), 0x10942666u);
  /* 10942666 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094266a push 0x10948dc0 */
  push32((uint32_t)(0x10948dc0u));
  /* 1094266f push 1 */
  push32((uint32_t)(0x1u));
  /* 10942671 call edi */
  call_ind((uint32_t)(EDI), 0x10942673u);
  /* 10942673 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942677 push 0x10948dc8 */
  push32((uint32_t)(0x10948dc8u));
  /* 1094267c push 1 */
  push32((uint32_t)(0x1u));
  /* 1094267e call edi */
  call_ind((uint32_t)(EDI), 0x10942680u);
  /* 10942680 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942682 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942684 push 0x10948dd0 */
  push32((uint32_t)(0x10948dd0u));
  /* 10942689 push 1 */
  push32((uint32_t)(0x1u));
  /* 1094268b call edi */
  call_ind((uint32_t)(EDI), 0x1094268du);
  /* 1094268d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942690 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942692 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10942697 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 1094269c push 1 */
  push32((uint32_t)(0x1u));
  /* 1094269e call edi */
  call_ind((uint32_t)(EDI), 0x109426a0u);
  /* 109426a0 push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 109426a5 push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 109426aa call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x109426b0u);
  /* 109426b0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109426b3 jmp 0x1094272e */
  goto L_1094272e;
L_109426b5:;
  /* 109426b5 cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109426b8 jne 0x1094272e */
  if (!C.zf) goto L_1094272e;
  /* 109426ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109426bc push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 109426c1 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109426c7u);
  /* 109426c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109426c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109426cb push 0x10948f70 */
  push32((uint32_t)(0x10948f70u));
  /* 109426d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109426d2 call edi */
  call_ind((uint32_t)(EDI), 0x109426d4u);
  /* 109426d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 109426d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109426d8 push 0x10948dd8 */
  push32((uint32_t)(0x10948dd8u));
  /* 109426dd push 1 */
  push32((uint32_t)(0x1u));
  /* 109426df call edi */
  call_ind((uint32_t)(EDI), 0x109426e1u);
  /* 109426e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109426e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109426e5 push 0x10948de0 */
  push32((uint32_t)(0x10948de0u));
  /* 109426ea push 1 */
  push32((uint32_t)(0x1u));
  /* 109426ec call edi */
  call_ind((uint32_t)(EDI), 0x109426eeu);
  /* 109426ee push 2 */
  push32((uint32_t)(0x2u));
  /* 109426f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109426f2 push 0x10948de8 */
  push32((uint32_t)(0x10948de8u));
  /* 109426f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109426f9 call edi */
  call_ind((uint32_t)(EDI), 0x109426fbu);
  /* 109426fb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109426fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10942700 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942702 push 0x10948df0 */
  push32((uint32_t)(0x10948df0u));
  /* 10942707 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942709 call edi */
  call_ind((uint32_t)(EDI), 0x1094270bu);
  /* 1094270b push 2 */
  push32((uint32_t)(0x2u));
  /* 1094270d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10942712 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10942717 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942719 call edi */
  call_ind((uint32_t)(EDI), 0x1094271bu);
  /* 1094271b push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942720 push 0x10949058 */
  push32((uint32_t)(0x10949058u));
  /* 10942725 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x1094272bu);
  /* 1094272b add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1094272e:;
  /* 1094272e push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10942730 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942736u);
  /* 10942736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942739 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094273b je 0x10942789 */
  if (C.zf) goto L_10942789;
  /* 1094273d push 5 */
  push32((uint32_t)(0x5u));
  /* 1094273f call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10942745u);
  /* 10942745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942748 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094274a je 0x10942789 */
  if (C.zf) goto L_10942789;
  /* 1094274c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094274e push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10942750 call ebx */
  call_ind((uint32_t)(EBX), 0x10942752u);
  /* 10942752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942755 mov dword ptr [0x10948eec], 0 */
  w32((uint32_t)(0x10948eec), (0x0u));
L_1094275f:;
  /* 1094275f push 6 */
  push32((uint32_t)(0x6u));
  /* 10942761 push 0x109490a0 */
  push32((uint32_t)(0x109490a0u));
  /* 10942766 push 0x10948f50 */
  push32((uint32_t)(0x10948f50u));
  /* 1094276b push 0x10948d70 */
  push32((uint32_t)(0x10948d70u));
  /* 10942770 call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x10942776u);
  /* 10942776 mov eax, dword ptr [0x10948eec] */
  EAX = (r32((uint32_t)(0x10948eec)));
  /* 1094277b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094277e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1094277f cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942782 mov dword ptr [0x10948eec], eax */
  w32((uint32_t)(0x10948eec), (EAX));
  /* 10942787 jl 0x1094275f */
  if ((C.sf!=C.of)) goto L_1094275f;
L_10942789:;
  /* 10942789 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1094278b call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942791u);
  /* 10942791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942794 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942796 je 0x10942802 */
  if (C.zf) goto L_10942802;
  /* 10942798 push 0x109490a0 */
  push32((uint32_t)(0x109490a0u));
  /* 1094279d push 0x10948e08 */
  push32((uint32_t)(0x10948e08u));
  /* 109427a2 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x109427a8u);
  /* 109427a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109427ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109427ad jle 0x10942802 */
  if ((C.zf||C.sf!=C.of)) goto L_10942802;
  /* 109427af push 0 */
  push32((uint32_t)(0x0u));
  /* 109427b1 push 0x109490a0 */
  push32((uint32_t)(0x109490a0u));
  /* 109427b6 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109427bcu);
  /* 109427bc push 0 */
  push32((uint32_t)(0x0u));
  /* 109427be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 109427c0 push 0x10948e18 */
  push32((uint32_t)(0x10948e18u));
  /* 109427c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109427c7 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109427cdu);
  /* 109427cd push 2 */
  push32((uint32_t)(0x2u));
  /* 109427cf push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109427d1 push 0x10949070 */
  push32((uint32_t)(0x10949070u));
  /* 109427d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109427d8 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109427deu);
  /* 109427de push 2 */
  push32((uint32_t)(0x2u));
  /* 109427e0 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109427e2 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 109427e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109427e9 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109427efu);
  /* 109427ef push 0x10949050 */
  push32((uint32_t)(0x10949050u));
  /* 109427f4 push 0x109490a0 */
  push32((uint32_t)(0x109490a0u));
  /* 109427f9 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x109427ffu);
  /* 109427ff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942802:;
  /* 10942802 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10942804 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094280au);
  /* 1094280a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094280d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094280f je 0x10942846 */
  if (C.zf) goto L_10942846;
  /* 10942811 push 0x10949050 */
  push32((uint32_t)(0x10949050u));
  /* 10942816 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 1094281b call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942821u);
  /* 10942821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942826 jle 0x10942846 */
  if ((C.zf||C.sf!=C.of)) goto L_10942846;
  /* 10942828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094282a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1094282c call ebx */
  call_ind((uint32_t)(EBX), 0x1094282eu);
  /* 1094282e push 0 */
  push32((uint32_t)(0x0u));
  /* 10942830 push 0x10948fd0 */
  push32((uint32_t)(0x10948fd0u));
  /* 10942835 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x1094283bu);
  /* 1094283b push 1 */
  push32((uint32_t)(0x1u));
  /* 1094283d call dword ptr [0x109470e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e4))), 0x10942843u);
  /* 10942843 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942846:;
  /* 10942846 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10942848 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094284eu);
  /* 1094284e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942851 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942853 je 0x10942893 */
  if (C.zf) goto L_10942893;
  /* 10942855 push 0x10949050 */
  push32((uint32_t)(0x10949050u));
  /* 1094285a push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 1094285f call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942865u);
  /* 10942865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094286a jle 0x10942893 */
  if ((C.zf||C.sf!=C.of)) goto L_10942893;
  /* 1094286c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094286e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10942870 call ebx */
  call_ind((uint32_t)(EBX), 0x10942872u);
  /* 10942872 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942874 push 0x10949050 */
  push32((uint32_t)(0x10949050u));
  /* 10942879 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x1094287fu);
  /* 1094287f push 2 */
  push32((uint32_t)(0x2u));
  /* 10942881 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10942883 push 0x10948d90 */
  push32((uint32_t)(0x10948d90u));
  /* 10942888 push 1 */
  push32((uint32_t)(0x1u));
  /* 1094288a call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10942890u);
  /* 10942890 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942893:;
  /* 10942893 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10942895 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094289bu);
  /* 1094289b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094289e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109428a0 je 0x109428f7 */
  if (C.zf) goto L_109428f7;
  /* 109428a2 cmp dword ptr [0x10948eec], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x10948eec))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109428a9 jne 0x109428f7 */
  if (!C.zf) goto L_109428f7;
  /* 109428ab push 1 */
  push32((uint32_t)(0x1u));
  /* 109428ad push 0x1d */
  push32((uint32_t)(0x1du));
  /* 109428af mov dword ptr [0x10948eec], 0 */
  w32((uint32_t)(0x10948eec), (0x0u));
  /* 109428b9 call ebx */
  call_ind((uint32_t)(EBX), 0x109428bbu);
  /* 109428bb push 1 */
  push32((uint32_t)(0x1u));
  /* 109428bd push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109428bf call ebx */
  call_ind((uint32_t)(EBX), 0x109428c1u);
  /* 109428c1 push 0xc80 */
  push32((uint32_t)(0xc80u));
  /* 109428c6 push 5 */
  push32((uint32_t)(0x5u));
  /* 109428c8 call ebp */
  call_ind((uint32_t)(EBP), 0x109428cau);
  /* 109428ca push 0 */
  push32((uint32_t)(0x0u));
  /* 109428cc push 0x10949050 */
  push32((uint32_t)(0x10949050u));
  /* 109428d1 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109428d7u);
  /* 109428d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109428d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109428db push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 109428e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109428e2 call edi */
  call_ind((uint32_t)(EDI), 0x109428e4u);
  /* 109428e4 push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 109428e9 push 0x10949050 */
  push32((uint32_t)(0x10949050u));
  /* 109428ee call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x109428f4u);
  /* 109428f4 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109428f7:;
  /* 109428f7 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 109428f9 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109428ffu);
  /* 109428ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942902 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942904 je 0x10942952 */
  if (C.zf) goto L_10942952;
  /* 10942906 push 6 */
  push32((uint32_t)(0x6u));
  /* 10942908 call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x1094290eu);
  /* 1094290e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942911 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942913 je 0x10942952 */
  if (C.zf) goto L_10942952;
  /* 10942915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942917 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10942919 call ebx */
  call_ind((uint32_t)(EBX), 0x1094291bu);
  /* 1094291b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094291e mov dword ptr [0x10948ef0], 0 */
  w32((uint32_t)(0x10948ef0), (0x0u));
L_10942928:;
  /* 10942928 push 6 */
  push32((uint32_t)(0x6u));
  /* 1094292a push 0x10949080 */
  push32((uint32_t)(0x10949080u));
  /* 1094292f push 0x10948f50 */
  push32((uint32_t)(0x10948f50u));
  /* 10942934 push 0x10948d78 */
  push32((uint32_t)(0x10948d78u));
  /* 10942939 call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x1094293fu);
  /* 1094293f mov eax, dword ptr [0x10948ef0] */
  EAX = (r32((uint32_t)(0x10948ef0)));
  /* 10942944 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942947 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10942948 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094294b mov dword ptr [0x10948ef0], eax */
  w32((uint32_t)(0x10948ef0), (EAX));
  /* 10942950 jl 0x10942928 */
  if ((C.sf!=C.of)) goto L_10942928;
L_10942952:;
  /* 10942952 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10942954 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094295au);
  /* 1094295a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094295d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094295f je 0x109429df */
  if (C.zf) goto L_109429df;
  /* 10942961 push 0x10949080 */
  push32((uint32_t)(0x10949080u));
  /* 10942966 push 0x10948e10 */
  push32((uint32_t)(0x10948e10u));
  /* 1094296b call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942971u);
  /* 10942971 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942974 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942976 jle 0x109429df */
  if ((C.zf||C.sf!=C.of)) goto L_109429df;
  /* 10942978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094297a push 0x10949080 */
  push32((uint32_t)(0x10949080u));
  /* 1094297f call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942985u);
  /* 10942985 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942987 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10942989 push 0x10948e08 */
  push32((uint32_t)(0x10948e08u));
  /* 1094298e push 1 */
  push32((uint32_t)(0x1u));
  /* 10942990 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10942996u);
  /* 10942996 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942998 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1094299a push 0x10948e18 */
  push32((uint32_t)(0x10948e18u));
  /* 1094299f push 1 */
  push32((uint32_t)(0x1u));
  /* 109429a1 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109429a7u);
  /* 109429a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 109429a9 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109429ab push 0x10949070 */
  push32((uint32_t)(0x10949070u));
  /* 109429b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109429b2 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109429b8u);
  /* 109429b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109429ba push 0x23 */
  push32((uint32_t)(0x23u));
  /* 109429bc push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 109429c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 109429c3 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109429c9u);
  /* 109429c9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109429cc push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 109429d1 push 0x10949080 */
  push32((uint32_t)(0x10949080u));
  /* 109429d6 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x109429dcu);
  /* 109429dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109429df:;
  /* 109429df push 0x24 */
  push32((uint32_t)(0x24u));
  /* 109429e1 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109429e7u);
  /* 109429e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109429ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109429ec je 0x10942a23 */
  if (C.zf) goto L_10942a23;
  /* 109429ee push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 109429f3 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 109429f8 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x109429feu);
  /* 109429fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942a01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942a03 jle 0x10942a23 */
  if ((C.zf||C.sf!=C.of)) goto L_10942a23;
  /* 10942a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942a07 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10942a09 call ebx */
  call_ind((uint32_t)(EBX), 0x10942a0bu);
  /* 10942a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10942a0d push 0x10948fd0 */
  push32((uint32_t)(0x10948fd0u));
  /* 10942a12 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942a18u);
  /* 10942a18 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942a1a call dword ptr [0x109470e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e4))), 0x10942a20u);
  /* 10942a20 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942a23:;
  /* 10942a23 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10942a25 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942a2bu);
  /* 10942a2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942a2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942a30 je 0x10942a70 */
  if (C.zf) goto L_10942a70;
  /* 10942a32 push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 10942a37 push 0x10948f08 */
  push32((uint32_t)(0x10948f08u));
  /* 10942a3c call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942a42u);
  /* 10942a42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942a45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942a47 jle 0x10942a70 */
  if ((C.zf||C.sf!=C.of)) goto L_10942a70;
  /* 10942a49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942a4b push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10942a4d call ebx */
  call_ind((uint32_t)(EBX), 0x10942a4fu);
  /* 10942a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10942a51 push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 10942a56 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942a5cu);
  /* 10942a5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10942a5e push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10942a60 push 0x10948d90 */
  push32((uint32_t)(0x10948d90u));
  /* 10942a65 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942a67 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10942a6du);
  /* 10942a6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942a70:;
  /* 10942a70 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 10942a72 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942a78u);
  /* 10942a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942a7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942a7d je 0x10942bdb */
  if (C.zf) goto L_10942bdb;
  /* 10942a83 cmp dword ptr [0x10948ef0], 0xa */
  { uint32_t _a=(r32((uint32_t)(0x10948ef0))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942a8a jne 0x10942bdb */
  if (!C.zf) goto L_10942bdb;
  /* 10942a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942a92 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10942a94 mov dword ptr [0x10948ef0], 0 */
  w32((uint32_t)(0x10948ef0), (0x0u));
  /* 10942a9e call ebx */
  call_ind((uint32_t)(EBX), 0x10942aa0u);
  /* 10942aa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942aa2 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10942aa4 call ebx */
  call_ind((uint32_t)(EBX), 0x10942aa6u);
  /* 10942aa6 push 0xc80 */
  push32((uint32_t)(0xc80u));
  /* 10942aab push 6 */
  push32((uint32_t)(0x6u));
  /* 10942aad call ebp */
  call_ind((uint32_t)(EBP), 0x10942aafu);
  /* 10942aaf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942ab2 call 0x10943a50 */
  push32(0x10942ab7u); f_10943a50();
  /* 10942ab7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10942ab8 mov ecx, 3 */
  ECX = (0x3u);
  /* 10942abd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10942abf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10942ac1 jne 0x10942af4 */
  if (!C.zf) goto L_10942af4;
  /* 10942ac3 push edx */
  push32((uint32_t)(EDX));
  /* 10942ac4 push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 10942ac9 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942acfu);
  /* 10942acf push 0 */
  push32((uint32_t)(0x0u));
  /* 10942ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942ad3 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10942ad8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942ada call edi */
  call_ind((uint32_t)(EDI), 0x10942adcu);
  /* 10942adc push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942ae1 push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 10942ae6 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10942aecu);
  /* 10942aec add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942aef jmp 0x10942bdb */
  goto L_10942bdb;
L_10942af4:;
  /* 10942af4 cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942af7 jne 0x10942b62 */
  if (!C.zf) goto L_10942b62;
  /* 10942af9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942afb push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 10942b00 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942b06u);
  /* 10942b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b0a push 0x10948f68 */
  push32((uint32_t)(0x10948f68u));
  /* 10942b0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10942b11 call edi */
  call_ind((uint32_t)(EDI), 0x10942b13u);
  /* 10942b13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b17 push 0x10948dc0 */
  push32((uint32_t)(0x10948dc0u));
  /* 10942b1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10942b1e call edi */
  call_ind((uint32_t)(EDI), 0x10942b20u);
  /* 10942b20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b24 push 0x10948dc8 */
  push32((uint32_t)(0x10948dc8u));
  /* 10942b29 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942b2b call edi */
  call_ind((uint32_t)(EDI), 0x10942b2du);
  /* 10942b2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10942b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b31 push 0x10948dd0 */
  push32((uint32_t)(0x10948dd0u));
  /* 10942b36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942b38 call edi */
  call_ind((uint32_t)(EDI), 0x10942b3au);
  /* 10942b3a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942b3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10942b3f push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10942b44 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10942b49 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942b4b call edi */
  call_ind((uint32_t)(EDI), 0x10942b4du);
  /* 10942b4d push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942b52 push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 10942b57 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10942b5du);
  /* 10942b5d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942b60 jmp 0x10942bdb */
  goto L_10942bdb;
L_10942b62:;
  /* 10942b62 cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942b65 jne 0x10942bdb */
  if (!C.zf) goto L_10942bdb;
  /* 10942b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b69 push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 10942b6e call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942b74u);
  /* 10942b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b78 push 0x10948f70 */
  push32((uint32_t)(0x10948f70u));
  /* 10942b7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10942b7f call edi */
  call_ind((uint32_t)(EDI), 0x10942b81u);
  /* 10942b81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b85 push 0x10948dd8 */
  push32((uint32_t)(0x10948dd8u));
  /* 10942b8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10942b8c call edi */
  call_ind((uint32_t)(EDI), 0x10942b8eu);
  /* 10942b8e push 2 */
  push32((uint32_t)(0x2u));
  /* 10942b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b92 push 0x10948de0 */
  push32((uint32_t)(0x10948de0u));
  /* 10942b97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942b99 call edi */
  call_ind((uint32_t)(EDI), 0x10942b9bu);
  /* 10942b9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10942b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10942b9f push 0x10948de8 */
  push32((uint32_t)(0x10948de8u));
  /* 10942ba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942ba6 call edi */
  call_ind((uint32_t)(EDI), 0x10942ba8u);
  /* 10942ba8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942bab push 2 */
  push32((uint32_t)(0x2u));
  /* 10942bad push 0 */
  push32((uint32_t)(0x0u));
  /* 10942baf push 0x10948df0 */
  push32((uint32_t)(0x10948df0u));
  /* 10942bb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942bb6 call edi */
  call_ind((uint32_t)(EDI), 0x10942bb8u);
  /* 10942bb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942bba push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10942bbf push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10942bc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942bc6 call edi */
  call_ind((uint32_t)(EDI), 0x10942bc8u);
  /* 10942bc8 push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942bcd push 0x10949068 */
  push32((uint32_t)(0x10949068u));
  /* 10942bd2 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10942bd8u);
  /* 10942bd8 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942bdb:;
  /* 10942bdb push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10942bdd call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942be3u);
  /* 10942be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942be6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942be8 je 0x10942c8b */
  if (C.zf) goto L_10942c8b;
  /* 10942bee push 7 */
  push32((uint32_t)(0x7u));
  /* 10942bf0 call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10942bf6u);
  /* 10942bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942bf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942bfb je 0x10942c8b */
  if (C.zf) goto L_10942c8b;
  /* 10942c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942c03 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10942c05 call ebx */
  call_ind((uint32_t)(EBX), 0x10942c07u);
  /* 10942c07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942c0a mov dword ptr [0x10948f34], 0 */
  w32((uint32_t)(0x10948f34), (0x0u));
L_10942c14:;
  /* 10942c14 push 6 */
  push32((uint32_t)(0x6u));
  /* 10942c16 push 0x10948eb0 */
  push32((uint32_t)(0x10948eb0u));
  /* 10942c1b push 0x10948fe8 */
  push32((uint32_t)(0x10948fe8u));
  /* 10942c20 push 0x10949010 */
  push32((uint32_t)(0x10949010u));
  /* 10942c25 call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x10942c2bu);
  /* 10942c2b mov eax, dword ptr [0x10948f34] */
  EAX = (r32((uint32_t)(0x10948f34)));
  /* 10942c30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942c33 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10942c34 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942c37 mov dword ptr [0x10948f34], eax */
  w32((uint32_t)(0x10948f34), (EAX));
  /* 10942c3c jl 0x10942c14 */
  if ((C.sf!=C.of)) goto L_10942c14;
  /* 10942c3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10942c40 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10942c42 mov dword ptr [0x10948f34], 0x14 */
  w32((uint32_t)(0x10948f34), (0x14u));
  /* 10942c4c call ebx */
  call_ind((uint32_t)(EBX), 0x10942c4eu);
  /* 10942c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10942c50 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10942c52 call ebx */
  call_ind((uint32_t)(EBX), 0x10942c54u);
  /* 10942c54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942c57 mov dword ptr [0x10948f38], 0 */
  w32((uint32_t)(0x10948f38), (0x0u));
L_10942c61:;
  /* 10942c61 push 6 */
  push32((uint32_t)(0x6u));
  /* 10942c63 push 0x10948d50 */
  push32((uint32_t)(0x10948d50u));
  /* 10942c68 push 0x109490e8 */
  push32((uint32_t)(0x109490e8u));
  /* 10942c6d push 0x10949010 */
  push32((uint32_t)(0x10949010u));
  /* 10942c72 call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x10942c78u);
  /* 10942c78 mov eax, dword ptr [0x10948f38] */
  EAX = (r32((uint32_t)(0x10948f38)));
  /* 10942c7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942c80 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10942c81 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942c84 mov dword ptr [0x10948f38], eax */
  w32((uint32_t)(0x10948f38), (EAX));
  /* 10942c89 jl 0x10942c61 */
  if ((C.sf!=C.of)) goto L_10942c61;
L_10942c8b:;
  /* 10942c8b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10942c8d call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942c93u);
  /* 10942c93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942c96 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942c98 je 0x10942cc1 */
  if (C.zf) goto L_10942cc1;
  /* 10942c9a push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10942c9c call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942ca2u);
  /* 10942ca2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942ca5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942ca7 jne 0x10942cc1 */
  if (!C.zf) goto L_10942cc1;
  /* 10942ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942cab push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10942cad call ebx */
  call_ind((uint32_t)(EBX), 0x10942cafu);
  /* 10942caf push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10942cb4 push 7 */
  push32((uint32_t)(0x7u));
  /* 10942cb6 call ebp */
  call_ind((uint32_t)(EBP), 0x10942cb8u);
  /* 10942cb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942cba push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10942cbc call ebx */
  call_ind((uint32_t)(EBX), 0x10942cbeu);
  /* 10942cbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942cc1:;
  /* 10942cc1 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10942cc3 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942cc9u);
  /* 10942cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942ccc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942cce je 0x10942d2e */
  if (C.zf) goto L_10942d2e;
  /* 10942cd0 push 0x10948eb0 */
  push32((uint32_t)(0x10948eb0u));
  /* 10942cd5 push 0x10948d38 */
  push32((uint32_t)(0x10948d38u));
  /* 10942cda call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942ce0u);
  /* 10942ce0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942ce5 jle 0x10942d2e */
  if ((C.zf||C.sf!=C.of)) goto L_10942d2e;
  /* 10942ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942ce9 push 0x10948eb0 */
  push32((uint32_t)(0x10948eb0u));
  /* 10942cee call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942cf4u);
  /* 10942cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942cf6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10942cf8 push 0x10948e40 */
  push32((uint32_t)(0x10948e40u));
  /* 10942cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10942cff call edi */
  call_ind((uint32_t)(EDI), 0x10942d01u);
  /* 10942d01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942d03 push 7 */
  push32((uint32_t)(0x7u));
  /* 10942d05 push 0x10949100 */
  push32((uint32_t)(0x10949100u));
  /* 10942d0a push 2 */
  push32((uint32_t)(0x2u));
  /* 10942d0c call edi */
  call_ind((uint32_t)(EDI), 0x10942d0eu);
  /* 10942d0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10942d10 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10942d12 push 0x10948f40 */
  push32((uint32_t)(0x10948f40u));
  /* 10942d17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942d19 call edi */
  call_ind((uint32_t)(EDI), 0x10942d1bu);
  /* 10942d1b push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942d20 push 0x10948eb0 */
  push32((uint32_t)(0x10948eb0u));
  /* 10942d25 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10942d2bu);
  /* 10942d2b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942d2e:;
  /* 10942d2e push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10942d30 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942d36u);
  /* 10942d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942d39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942d3b je 0x10942d79 */
  if (C.zf) goto L_10942d79;
  /* 10942d3d push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942d42 push 0x10948f40 */
  push32((uint32_t)(0x10948f40u));
  /* 10942d47 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942d4du);
  /* 10942d4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942d50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942d52 jle 0x10942d79 */
  if ((C.zf||C.sf!=C.of)) goto L_10942d79;
  /* 10942d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942d56 push 0x10948fb0 */
  push32((uint32_t)(0x10948fb0u));
  /* 10942d5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10942d5d call dword ptr [0x10947104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947104))), 0x10942d63u);
  /* 10942d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942d65 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10942d67 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10942d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10942d6e call edi */
  call_ind((uint32_t)(EDI), 0x10942d70u);
  /* 10942d70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942d72 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10942d74 call ebx */
  call_ind((uint32_t)(EBX), 0x10942d76u);
  /* 10942d76 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942d79:;
  /* 10942d79 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10942d7b call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942d81u);
  /* 10942d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942d84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942d86 je 0x10942de6 */
  if (C.zf) goto L_10942de6;
  /* 10942d88 push 0x10948d50 */
  push32((uint32_t)(0x10948d50u));
  /* 10942d8d push 0x10948d38 */
  push32((uint32_t)(0x10948d38u));
  /* 10942d92 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942d98u);
  /* 10942d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942d9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942d9d jle 0x10942de6 */
  if ((C.zf||C.sf!=C.of)) goto L_10942de6;
  /* 10942d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10942da1 push 0x10948d50 */
  push32((uint32_t)(0x10948d50u));
  /* 10942da6 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942dacu);
  /* 10942dac push 0 */
  push32((uint32_t)(0x0u));
  /* 10942dae push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10942db0 push 0x10948e40 */
  push32((uint32_t)(0x10948e40u));
  /* 10942db5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942db7 call edi */
  call_ind((uint32_t)(EDI), 0x10942db9u);
  /* 10942db9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942dbb push 7 */
  push32((uint32_t)(0x7u));
  /* 10942dbd push 0x10949100 */
  push32((uint32_t)(0x10949100u));
  /* 10942dc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942dc4 call edi */
  call_ind((uint32_t)(EDI), 0x10942dc6u);
  /* 10942dc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942dc8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10942dca push 0x10948f40 */
  push32((uint32_t)(0x10948f40u));
  /* 10942dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 10942dd1 call edi */
  call_ind((uint32_t)(EDI), 0x10942dd3u);
  /* 10942dd3 push 0x10948e60 */
  push32((uint32_t)(0x10948e60u));
  /* 10942dd8 push 0x10948d50 */
  push32((uint32_t)(0x10948d50u));
  /* 10942ddd call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10942de3u);
  /* 10942de3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942de6:;
  /* 10942de6 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10942de8 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942deeu);
  /* 10942dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942df1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942df3 je 0x10942e2b */
  if (C.zf) goto L_10942e2b;
  /* 10942df5 push 0x10948e60 */
  push32((uint32_t)(0x10948e60u));
  /* 10942dfa push 0x10948f40 */
  push32((uint32_t)(0x10948f40u));
  /* 10942dff call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942e05u);
  /* 10942e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942e08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10942e0a jle 0x10942e2b */
  if ((C.zf||C.sf!=C.of)) goto L_10942e2b;
  /* 10942e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10942e0e push 0x10948e60 */
  push32((uint32_t)(0x10948e60u));
  /* 10942e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942e15 call dword ptr [0x10947104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947104))), 0x10942e1bu);
  /* 10942e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10942e1d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10942e1f push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10942e24 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942e26 call edi */
  call_ind((uint32_t)(EDI), 0x10942e28u);
  /* 10942e28 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942e2b:;
  /* 10942e2b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10942e2d call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942e33u);
  /* 10942e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942e36 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942e38 je 0x10942e79 */
  if (C.zf) goto L_10942e79;
  /* 10942e3a push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 10942e3f push 0x10948d88 */
  push32((uint32_t)(0x10948d88u));
  /* 10942e44 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942e4au);
  /* 10942e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942e4d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942e50 jne 0x10942e79 */
  if (!C.zf) goto L_10942e79;
  /* 10942e52 cmp dword ptr [0x10949090], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10949090))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942e59 jne 0x10942e79 */
  if (!C.zf) goto L_10942e79;
  /* 10942e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10942e5d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10942e5f call ebx */
  call_ind((uint32_t)(EBX), 0x10942e61u);
  /* 10942e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942e63 push 0x10949040 */
  push32((uint32_t)(0x10949040u));
  /* 10942e68 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942e6eu);
  /* 10942e6e push 5 */
  push32((uint32_t)(0x5u));
  /* 10942e70 call dword ptr [0x109470e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e4))), 0x10942e76u);
  /* 10942e76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942e79:;
  /* 10942e79 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10942e7b call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942e81u);
  /* 10942e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942e84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942e86 je 0x10942ed8 */
  if (C.zf) goto L_10942ed8;
  /* 10942e88 push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 10942e8d push 0x10948e70 */
  push32((uint32_t)(0x10948e70u));
  /* 10942e92 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10942e98u);
  /* 10942e98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942e9b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942e9e jne 0x10942ed8 */
  if (!C.zf) goto L_10942ed8;
  /* 10942ea0 cmp dword ptr [0x10949090], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10949090))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942ea7 jne 0x10942ed8 */
  if (!C.zf) goto L_10942ed8;
  /* 10942ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942eab push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10942ead call ebx */
  call_ind((uint32_t)(EBX), 0x10942eafu);
  /* 10942eaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10942eb1 push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 10942eb6 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942ebcu);
  /* 10942ebc push 5 */
  push32((uint32_t)(0x5u));
  /* 10942ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 10942ec0 call dword ptr [0x10947114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947114))), 0x10942ec6u);
  /* 10942ec6 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10942ecb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10942ecd call ebp */
  call_ind((uint32_t)(EBP), 0x10942ecfu);
  /* 10942ecf push 1 */
  push32((uint32_t)(0x1u));
  /* 10942ed1 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10942ed3 call ebx */
  call_ind((uint32_t)(EBX), 0x10942ed5u);
  /* 10942ed5 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10942ed8:;
  /* 10942ed8 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10942eda call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942ee0u);
  /* 10942ee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942ee3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942ee5 je 0x10942f17 */
  if (C.zf) goto L_10942f17;
  /* 10942ee7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10942ee9 call dword ptr [0x10947118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947118))), 0x10942eefu);
  /* 10942eef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942ef2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942ef4 je 0x10942f17 */
  if (C.zf) goto L_10942f17;
  /* 10942ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942ef8 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10942efa call ebx */
  call_ind((uint32_t)(EBX), 0x10942efcu);
  /* 10942efc push 5 */
  push32((uint32_t)(0x5u));
  /* 10942efe push 0x10948fa8 */
  push32((uint32_t)(0x10948fa8u));
  /* 10942f03 call dword ptr [0x10947110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947110))), 0x10942f09u);
  /* 10942f09 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10942f0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942f0f shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10942f11 mov dword ptr [0x10949018], edx */
  w32((uint32_t)(0x10949018), (EDX));
L_10942f17:;
  /* 10942f17 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10942f19 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942f1fu);
  /* 10942f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942f22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942f24 je 0x1094300f */
  if (C.zf) goto L_1094300f;
  /* 10942f2a push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10942f2c call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10942f32u);
  /* 10942f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942f35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10942f37 jne 0x1094300f */
  if (!C.zf) goto L_1094300f;
  /* 10942f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10942f3f push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10942f41 call ebx */
  call_ind((uint32_t)(EBX), 0x10942f43u);
  /* 10942f43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942f45 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10942f47 call ebx */
  call_ind((uint32_t)(EBX), 0x10942f49u);
  /* 10942f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942f4b push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 10942f50 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10942f56u);
  /* 10942f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10942f58 push 5 */
  push32((uint32_t)(0x5u));
  /* 10942f5a call dword ptr [0x10947114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947114))), 0x10942f60u);
  /* 10942f60 mov ecx, dword ptr [0x10949018] */
  ECX = (r32((uint32_t)(0x10949018)));
  /* 10942f66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942f69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10942f6b mov dword ptr [0x10948f28], 0 */
  w32((uint32_t)(0x10948f28), (0x0u));
  /* 10942f75 jle 0x10942fa6 */
  if ((C.zf||C.sf!=C.of)) goto L_10942fa6;
L_10942f77:;
  /* 10942f77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10942f79 push 0x10948f60 */
  push32((uint32_t)(0x10948f60u));
  /* 10942f7e push 0x10948db8 */
  push32((uint32_t)(0x10948db8u));
  /* 10942f83 push 0x10948d30 */
  push32((uint32_t)(0x10948d30u));
  /* 10942f88 call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x10942f8eu);
  /* 10942f8e mov eax, dword ptr [0x10948f28] */
  EAX = (r32((uint32_t)(0x10948f28)));
  /* 10942f93 mov ecx, dword ptr [0x10949018] */
  ECX = (r32((uint32_t)(0x10949018)));
  /* 10942f99 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942f9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10942f9d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942f9f mov dword ptr [0x10948f28], eax */
  w32((uint32_t)(0x10948f28), (EAX));
  /* 10942fa4 jl 0x10942f77 */
  if ((C.sf!=C.of)) goto L_10942f77;
L_10942fa6:;
  /* 10942fa6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10942fa8 mov dword ptr [0x10948f28], 0xa */
  w32((uint32_t)(0x10948f28), (0xau));
  /* 10942fb2 mov dword ptr [0x10948f2c], 0 */
  w32((uint32_t)(0x10948f2c), (0x0u));
  /* 10942fbc jle 0x10942fed */
  if ((C.zf||C.sf!=C.of)) goto L_10942fed;
L_10942fbe:;
  /* 10942fbe push 2 */
  push32((uint32_t)(0x2u));
  /* 10942fc0 push 0x10948d58 */
  push32((uint32_t)(0x10948d58u));
  /* 10942fc5 push 0x10948fa0 */
  push32((uint32_t)(0x10948fa0u));
  /* 10942fca push 0x10948e28 */
  push32((uint32_t)(0x10948e28u));
  /* 10942fcf call dword ptr [0x109470ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ec))), 0x10942fd5u);
  /* 10942fd5 mov eax, dword ptr [0x10948f2c] */
  EAX = (r32((uint32_t)(0x10948f2c)));
  /* 10942fda mov ecx, dword ptr [0x10949018] */
  ECX = (r32((uint32_t)(0x10949018)));
  /* 10942fe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10942fe3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10942fe4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10942fe6 mov dword ptr [0x10948f2c], eax */
  w32((uint32_t)(0x10948f2c), (EAX));
  /* 10942feb jl 0x10942fbe */
  if ((C.sf!=C.of)) goto L_10942fbe;
L_10942fed:;
  /* 10942fed push 1 */
  push32((uint32_t)(0x1u));
  /* 10942fef push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10942ff1 call ebx */
  call_ind((uint32_t)(EBX), 0x10942ff3u);
  /* 10942ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10942ff5 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10942ff7 call ebx */
  call_ind((uint32_t)(EBX), 0x10942ff9u);
  /* 10942ff9 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10942ffe push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10943000 mov dword ptr [0x10949090], 0 */
  w32((uint32_t)(0x10949090), (0x0u));
  /* 1094300a call ebp */
  call_ind((uint32_t)(EBP), 0x1094300cu);
  /* 1094300c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1094300f:;
  /* 1094300f push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10943011 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943017u);
  /* 10943017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094301a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094301c je 0x10943088 */
  if (C.zf) goto L_10943088;
  /* 1094301e push 0x10948d58 */
  push32((uint32_t)(0x10948d58u));
  /* 10943023 push 0x10948e48 */
  push32((uint32_t)(0x10948e48u));
  /* 10943028 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x1094302eu);
  /* 1094302e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943033 jle 0x10943088 */
  if ((C.zf||C.sf!=C.of)) goto L_10943088;
  /* 10943035 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943037 push 0x10948d58 */
  push32((uint32_t)(0x10948d58u));
  /* 1094303c call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10943042u);
  /* 10943042 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943044 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10943046 push 0x10948e38 */
  push32((uint32_t)(0x10948e38u));
  /* 1094304b push 5 */
  push32((uint32_t)(0x5u));
  /* 1094304d call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10943053u);
  /* 10943053 push 2 */
  push32((uint32_t)(0x2u));
  /* 10943055 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10943057 push 0x10948d88 */
  push32((uint32_t)(0x10948d88u));
  /* 1094305c push 5 */
  push32((uint32_t)(0x5u));
  /* 1094305e call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10943064u);
  /* 10943064 push 2 */
  push32((uint32_t)(0x2u));
  /* 10943066 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10943068 push 0x10948d40 */
  push32((uint32_t)(0x10948d40u));
  /* 1094306d push 5 */
  push32((uint32_t)(0x5u));
  /* 1094306f call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x10943075u);
  /* 10943075 push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 1094307a push 0x10948d58 */
  push32((uint32_t)(0x10948d58u));
  /* 1094307f call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x10943085u);
  /* 10943085 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943088:;
  /* 10943088 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1094308a call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943090u);
  /* 10943090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943093 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943095 je 0x10943101 */
  if (C.zf) goto L_10943101;
  /* 10943097 push 0x10948f60 */
  push32((uint32_t)(0x10948f60u));
  /* 1094309c push 0x10948d60 */
  push32((uint32_t)(0x10948d60u));
  /* 109430a1 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x109430a7u);
  /* 109430a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109430aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109430ac jle 0x10943101 */
  if ((C.zf||C.sf!=C.of)) goto L_10943101;
  /* 109430ae push 0 */
  push32((uint32_t)(0x0u));
  /* 109430b0 push 0x10948f60 */
  push32((uint32_t)(0x10948f60u));
  /* 109430b5 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109430bbu);
  /* 109430bb push 0 */
  push32((uint32_t)(0x0u));
  /* 109430bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109430bf push 0x10948e38 */
  push32((uint32_t)(0x10948e38u));
  /* 109430c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 109430c6 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109430ccu);
  /* 109430cc push 2 */
  push32((uint32_t)(0x2u));
  /* 109430ce push 0x50 */
  push32((uint32_t)(0x50u));
  /* 109430d0 push 0x10948d88 */
  push32((uint32_t)(0x10948d88u));
  /* 109430d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 109430d7 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109430ddu);
  /* 109430dd push 2 */
  push32((uint32_t)(0x2u));
  /* 109430df push 0x50 */
  push32((uint32_t)(0x50u));
  /* 109430e1 push 0x10948d40 */
  push32((uint32_t)(0x10948d40u));
  /* 109430e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 109430e8 call dword ptr [0x10947100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947100))), 0x109430eeu);
  /* 109430ee push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 109430f3 push 0x10948f60 */
  push32((uint32_t)(0x10948f60u));
  /* 109430f8 call dword ptr [0x10947108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947108))), 0x109430feu);
  /* 109430fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943101:;
  /* 10943101 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10943103 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943109u);
  /* 10943109 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094310c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094310e je 0x1094316b */
  if (C.zf) goto L_1094316b;
  /* 10943110 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943112 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943114 call dword ptr [0x10947120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947120))), 0x1094311au);
  /* 1094311a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094311d cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943122 jle 0x1094316b */
  if ((C.zf||C.sf!=C.of)) goto L_1094316b;
  /* 10943124 mov eax, dword ptr [0x10949090] */
  EAX = (r32((uint32_t)(0x10949090)));
  /* 10943129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094312b jne 0x1094316b */
  if (!C.zf) goto L_1094316b;
  /* 1094312d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1094312f call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10943135u);
  /* 10943135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943138 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094313a je 0x1094316b */
  if (C.zf) goto L_1094316b;
  /* 1094313c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094313e push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10943140 call ebx */
  call_ind((uint32_t)(EBX), 0x10943142u);
  /* 10943142 push 0x109486b8 */
  push32((uint32_t)(0x109486b8u));
  /* 10943147 call dword ptr [0x109470e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e0))), 0x1094314du);
  /* 1094314d push 6 */
  push32((uint32_t)(0x6u));
  /* 1094314f push 0 */
  push32((uint32_t)(0x0u));
  /* 10943151 push 0x10948d88 */
  push32((uint32_t)(0x10948d88u));
  /* 10943156 call dword ptr [0x10947124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947124))), 0x1094315cu);
  /* 1094315c push 1 */
  push32((uint32_t)(0x1u));
  /* 1094315e push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10943160 call ebx */
  call_ind((uint32_t)(EBX), 0x10943162u);
  /* 10943162 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943164 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10943166 call ebx */
  call_ind((uint32_t)(EBX), 0x10943168u);
  /* 10943168 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1094316b:;
  /* 1094316b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1094316d call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943173u);
  /* 10943173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943176 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943178 je 0x109431bf */
  if (C.zf) goto L_109431bf;
  /* 1094317a push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1094317c call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943182u);
  /* 10943182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943185 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943187 jne 0x109431bf */
  if (!C.zf) goto L_109431bf;
  /* 10943189 push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 1094318e push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 10943193 call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10943199u);
  /* 10943199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094319c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094319f jne 0x109431bf */
  if (!C.zf) goto L_109431bf;
  /* 109431a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109431a3 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 109431a5 call ebx */
  call_ind((uint32_t)(EBX), 0x109431a7u);
  /* 109431a7 push 0xfa */
  push32((uint32_t)(0xfau));
  /* 109431ac push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109431ae call ebp */
  call_ind((uint32_t)(EBP), 0x109431b0u);
  /* 109431b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109431b2 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 109431b4 call ebx */
  call_ind((uint32_t)(EBX), 0x109431b6u);
  /* 109431b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109431b8 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 109431ba call ebx */
  call_ind((uint32_t)(EBX), 0x109431bcu);
  /* 109431bc add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109431bf:;
  /* 109431bf push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 109431c1 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109431c7u);
  /* 109431c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109431ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109431cc je 0x10943260 */
  if (C.zf) goto L_10943260;
  /* 109431d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 109431d4 call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x109431dau);
  /* 109431da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109431dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109431df je 0x10943260 */
  if (C.zf) goto L_10943260;
  /* 109431e1 push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 109431e6 push 0x10948f00 */
  push32((uint32_t)(0x10948f00u));
  /* 109431eb call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x109431f1u);
  /* 109431f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109431f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109431f7 jne 0x10943260 */
  if (!C.zf) goto L_10943260;
  /* 109431f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109431fb push 0 */
  push32((uint32_t)(0x0u));
  /* 109431fd call dword ptr [0x10947120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947120))), 0x10943203u);
  /* 10943203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943206 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094320b jle 0x10943260 */
  if ((C.zf||C.sf!=C.of)) goto L_10943260;
  /* 1094320d push 0 */
  push32((uint32_t)(0x0u));
  /* 1094320f push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10943211 call ebx */
  call_ind((uint32_t)(EBX), 0x10943213u);
  /* 10943213 push 0x109486b0 */
  push32((uint32_t)(0x109486b0u));
  /* 10943218 call dword ptr [0x109470e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e0))), 0x1094321eu);
  /* 1094321e push 0 */
  push32((uint32_t)(0x0u));
  /* 10943220 push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 10943225 mov dword ptr [0x10949090], 1 */
  w32((uint32_t)(0x10949090), (0x1u));
  /* 1094322f call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10943235u);
  /* 10943235 push 5 */
  push32((uint32_t)(0x5u));
  /* 10943237 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943239 call dword ptr [0x10947114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947114))), 0x1094323fu);
  /* 1094323f push 0xffffec78 */
  push32((uint32_t)(0xffffec78u));
  /* 10943244 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943248 call dword ptr [0x109470c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470c8))), 0x1094324eu);
  /* 1094324e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10943253 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10943255 call ebp */
  call_ind((uint32_t)(EBP), 0x10943257u);
  /* 10943257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943259 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1094325b call ebx */
  call_ind((uint32_t)(EBX), 0x1094325du);
  /* 1094325d add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943260:;
  /* 10943260 mov ebp, dword ptr [0x109470b8] */
  EBP = (r32((uint32_t)(0x109470b8)));
  /* 10943266 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10943268 call ebp */
  call_ind((uint32_t)(EBP), 0x1094326au);
  /* 1094326a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094326d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094326f je 0x109432ab */
  if (C.zf) goto L_109432ab;
  /* 10943271 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10943273 call dword ptr [0x10947118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947118))), 0x10943279u);
  /* 10943279 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094327c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094327e je 0x109432ab */
  if (C.zf) goto L_109432ab;
  /* 10943280 push 0x109486a8 */
  push32((uint32_t)(0x109486a8u));
  /* 10943285 call dword ptr [0x109470e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e0))), 0x1094328bu);
  /* 1094328b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094328d push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 10943292 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x10943298u);
  /* 10943298 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094329a push 5 */
  push32((uint32_t)(0x5u));
  /* 1094329c call dword ptr [0x10947114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947114))), 0x109432a2u);
  /* 109432a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109432a4 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 109432a6 call ebx */
  call_ind((uint32_t)(EBX), 0x109432a8u);
  /* 109432a8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109432ab:;
  /* 109432ab push 0x3d */
  push32((uint32_t)(0x3du));
  /* 109432ad call ebp */
  call_ind((uint32_t)(EBP), 0x109432afu);
  /* 109432af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109432b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109432b4 je 0x10943460 */
  if (C.zf) goto L_10943460;
  /* 109432ba mov ebp, dword ptr [0x109470f8] */
  EBP = (r32((uint32_t)(0x109470f8)));
  /* 109432c0 push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 109432c5 push 0x10948d40 */
  push32((uint32_t)(0x10948d40u));
  /* 109432ca call ebp */
  call_ind((uint32_t)(EBP), 0x109432ccu);
  /* 109432cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109432cf cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109432d2 jle 0x10943460 */
  if ((C.zf||C.sf!=C.of)) goto L_10943460;
  /* 109432d8 push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 109432dd push 0x10948d40 */
  push32((uint32_t)(0x10948d40u));
  /* 109432e2 call ebp */
  call_ind((uint32_t)(EBP), 0x109432e4u);
  /* 109432e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109432e7 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109432ea jle 0x10943460 */
  if ((C.zf||C.sf!=C.of)) goto L_10943460;
  /* 109432f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109432f2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 109432f4 call ebx */
  call_ind((uint32_t)(EBX), 0x109432f6u);
  /* 109432f6 push 0x10948d40 */
  push32((uint32_t)(0x10948d40u));
  /* 109432fb call dword ptr [0x1094711c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094711c))), 0x10943301u);
  /* 10943301 push 0x10948690 */
  push32((uint32_t)(0x10948690u));
  /* 10943306 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943308 push 0x10948688 */
  push32((uint32_t)(0x10948688u));
  /* 1094330d push 9 */
  push32((uint32_t)(0x9u));
  /* 1094330f call dword ptr [0x1094712c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094712c))), 0x10943315u);
  /* 10943315 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943318 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094331b je 0x109433e4 */
  if (C.zf) goto L_109433e4;
  /* 10943321 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10943322 je 0x10943389 */
  if (C.zf) goto L_10943389;
  /* 10943324 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10943325 jne 0x10943460 */
  if (!C.zf) goto L_10943460;
  /* 1094332b mov ebp, dword ptr [0x109470d4] */
  EBP = (r32((uint32_t)(0x109470d4)));
  /* 10943331 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943333 push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 10943338 call ebp */
  call_ind((uint32_t)(EBP), 0x1094333au);
  /* 1094333a push 0 */
  push32((uint32_t)(0x0u));
  /* 1094333c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10943341 push 0x10949020 */
  push32((uint32_t)(0x10949020u));
  /* 10943346 push 5 */
  push32((uint32_t)(0x5u));
  /* 10943348 call edi */
  call_ind((uint32_t)(EDI), 0x1094334au);
  /* 1094334a push 0 */
  push32((uint32_t)(0x0u));
  /* 1094334c push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 10943351 call ebp */
  call_ind((uint32_t)(EBP), 0x10943353u);
  /* 10943353 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943355 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1094335a push 0x10948ed0 */
  push32((uint32_t)(0x10948ed0u));
  /* 1094335f push 5 */
  push32((uint32_t)(0x5u));
  /* 10943361 call edi */
  call_ind((uint32_t)(EDI), 0x10943363u);
  /* 10943363 mov ebp, dword ptr [0x10947108] */
  EBP = (r32((uint32_t)(0x10947108)));
  /* 10943369 push 0x10948f58 */
  push32((uint32_t)(0x10948f58u));
  /* 1094336e push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 10943373 call ebp */
  call_ind((uint32_t)(EBP), 0x10943375u);
  /* 10943375 push 0x10948f58 */
  push32((uint32_t)(0x10948f58u));
  /* 1094337a push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 1094337f call ebp */
  call_ind((uint32_t)(EBP), 0x10943381u);
  /* 10943381 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943384 jmp 0x10943460 */
  goto L_10943460;
L_10943389:;
  /* 10943389 mov ebp, dword ptr [0x109470d4] */
  EBP = (r32((uint32_t)(0x109470d4)));
  /* 1094338f push 0 */
  push32((uint32_t)(0x0u));
  /* 10943391 push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 10943396 call ebp */
  call_ind((uint32_t)(EBP), 0x10943398u);
  /* 10943398 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094339a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1094339f push 0x10948d80 */
  push32((uint32_t)(0x10948d80u));
  /* 109433a4 push 5 */
  push32((uint32_t)(0x5u));
  /* 109433a6 call edi */
  call_ind((uint32_t)(EDI), 0x109433a8u);
  /* 109433a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109433aa push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 109433af call ebp */
  call_ind((uint32_t)(EBP), 0x109433b1u);
  /* 109433b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109433b3 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109433b8 push 0x10949100 */
  push32((uint32_t)(0x10949100u));
  /* 109433bd push 5 */
  push32((uint32_t)(0x5u));
  /* 109433bf call edi */
  call_ind((uint32_t)(EDI), 0x109433c1u);
  /* 109433c1 mov ebp, dword ptr [0x10947108] */
  EBP = (r32((uint32_t)(0x10947108)));
  /* 109433c7 push 0x10948f58 */
  push32((uint32_t)(0x10948f58u));
  /* 109433cc push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 109433d1 call ebp */
  call_ind((uint32_t)(EBP), 0x109433d3u);
  /* 109433d3 push 0x10948f58 */
  push32((uint32_t)(0x10948f58u));
  /* 109433d8 push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 109433dd call ebp */
  call_ind((uint32_t)(EBP), 0x109433dfu);
  /* 109433df add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109433e2 jmp 0x10943460 */
  goto L_10943460;
L_109433e4:;
  /* 109433e4 mov ebp, dword ptr [0x109470d4] */
  EBP = (r32((uint32_t)(0x109470d4)));
  /* 109433ea push 0 */
  push32((uint32_t)(0x0u));
  /* 109433ec push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 109433f1 call ebp */
  call_ind((uint32_t)(EBP), 0x109433f3u);
  /* 109433f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109433f5 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 109433fa push 0x10948ed0 */
  push32((uint32_t)(0x10948ed0u));
  /* 109433ff push 5 */
  push32((uint32_t)(0x5u));
  /* 10943401 call edi */
  call_ind((uint32_t)(EDI), 0x10943403u);
  /* 10943403 push 2 */
  push32((uint32_t)(0x2u));
  /* 10943405 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1094340a push 0x10949100 */
  push32((uint32_t)(0x10949100u));
  /* 1094340f push 5 */
  push32((uint32_t)(0x5u));
  /* 10943411 call edi */
  call_ind((uint32_t)(EDI), 0x10943413u);
  /* 10943413 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943415 push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 1094341a call ebp */
  call_ind((uint32_t)(EBP), 0x1094341cu);
  /* 1094341c push 0 */
  push32((uint32_t)(0x0u));
  /* 1094341e push 0x96 */
  push32((uint32_t)(0x96u));
  /* 10943423 push 0x10948ed0 */
  push32((uint32_t)(0x10948ed0u));
  /* 10943428 push 5 */
  push32((uint32_t)(0x5u));
  /* 1094342a call edi */
  call_ind((uint32_t)(EDI), 0x1094342cu);
  /* 1094342c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094342f push 2 */
  push32((uint32_t)(0x2u));
  /* 10943431 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10943436 push 0x10949100 */
  push32((uint32_t)(0x10949100u));
  /* 1094343b push 5 */
  push32((uint32_t)(0x5u));
  /* 1094343d call edi */
  call_ind((uint32_t)(EDI), 0x1094343fu);
  /* 1094343f mov ebp, dword ptr [0x10947108] */
  EBP = (r32((uint32_t)(0x10947108)));
  /* 10943445 push 0x10948f58 */
  push32((uint32_t)(0x10948f58u));
  /* 1094344a push 0x10948ea8 */
  push32((uint32_t)(0x10948ea8u));
  /* 1094344f call ebp */
  call_ind((uint32_t)(EBP), 0x10943451u);
  /* 10943451 push 0x10948f58 */
  push32((uint32_t)(0x10948f58u));
  /* 10943456 push 0x109490e0 */
  push32((uint32_t)(0x109490e0u));
  /* 1094345b call ebp */
  call_ind((uint32_t)(EBP), 0x1094345du);
  /* 1094345d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943460:;
  /* 10943460 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10943462 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943468u);
  /* 10943468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094346b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094346d je 0x109434d6 */
  if (C.zf) goto L_109434d6;
  /* 1094346f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10943471 call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10943477u);
  /* 10943477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094347a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094347c je 0x109434d6 */
  if (C.zf) goto L_109434d6;
  /* 1094347e mov ebp, dword ptr [0x109470cc] */
  EBP = (r32((uint32_t)(0x109470cc)));
  /* 10943484 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943486 call ebp */
  call_ind((uint32_t)(EBP), 0x10943488u);
  /* 10943488 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094348b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094348d jle 0x109434dc */
  if ((C.zf||C.sf!=C.of)) goto L_109434dc;
  /* 1094348f push 0 */
  push32((uint32_t)(0x0u));
  /* 10943491 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10943493 call ebx */
  call_ind((uint32_t)(EBX), 0x10943495u);
  /* 10943495 push 0x10948674 */
  push32((uint32_t)(0x10948674u));
  /* 1094349a push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094349f call esi */
  call_ind((uint32_t)(ESI), 0x109434a1u);
  /* 109434a1 push 0x10948660 */
  push32((uint32_t)(0x10948660u));
  /* 109434a6 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109434ab call esi */
  call_ind((uint32_t)(ESI), 0x109434adu);
  /* 109434ad push 0x10948644 */
  push32((uint32_t)(0x10948644u));
  /* 109434b2 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109434b7 call esi */
  call_ind((uint32_t)(ESI), 0x109434b9u);
  /* 109434b9 push 0x10948628 */
  push32((uint32_t)(0x10948628u));
  /* 109434be push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109434c3 call esi */
  call_ind((uint32_t)(ESI), 0x109434c5u);
  /* 109434c5 push 0x10948620 */
  push32((uint32_t)(0x10948620u));
  /* 109434ca push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 109434cf call esi */
  call_ind((uint32_t)(ESI), 0x109434d1u);
  /* 109434d1 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109434d4 jmp 0x109434dc */
  goto L_109434dc;
L_109434d6:;
  /* 109434d6 mov ebp, dword ptr [0x109470cc] */
  EBP = (r32((uint32_t)(0x109470cc)));
L_109434dc:;
  /* 109434dc push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109434de call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109434e4u);
  /* 109434e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109434e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109434e9 je 0x10943556 */
  if (C.zf) goto L_10943556;
  /* 109434eb push 0xd */
  push32((uint32_t)(0xdu));
  /* 109434ed call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x109434f3u);
  /* 109434f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109434f6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109434f8 je 0x10943556 */
  if (C.zf) goto L_10943556;
  /* 109434fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109434fc call ebp */
  call_ind((uint32_t)(EBP), 0x109434feu);
  /* 109434fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943503 jle 0x10943556 */
  if ((C.zf||C.sf!=C.of)) goto L_10943556;
  /* 10943505 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943507 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10943509 call ebx */
  call_ind((uint32_t)(EBX), 0x1094350bu);
  /* 1094350b push 0x1094860c */
  push32((uint32_t)(0x1094860cu));
  /* 10943510 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943515 call esi */
  call_ind((uint32_t)(ESI), 0x10943517u);
  /* 10943517 push 0x109485f8 */
  push32((uint32_t)(0x109485f8u));
  /* 1094351c push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943521 call esi */
  call_ind((uint32_t)(ESI), 0x10943523u);
  /* 10943523 push 0x109485dc */
  push32((uint32_t)(0x109485dcu));
  /* 10943528 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094352d call esi */
  call_ind((uint32_t)(ESI), 0x1094352fu);
  /* 1094352f push 0x109485c0 */
  push32((uint32_t)(0x109485c0u));
  /* 10943534 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943539 call esi */
  call_ind((uint32_t)(ESI), 0x1094353bu);
  /* 1094353b push 0x109485b8 */
  push32((uint32_t)(0x109485b8u));
  /* 10943540 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943545 call esi */
  call_ind((uint32_t)(ESI), 0x10943547u);
  /* 10943547 push 0x109485b0 */
  push32((uint32_t)(0x109485b0u));
  /* 1094354c push 0x1094832c */
  push32((uint32_t)(0x1094832cu));
  /* 10943551 call esi */
  call_ind((uint32_t)(ESI), 0x10943553u);
  /* 10943553 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943556:;
  /* 10943556 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10943558 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x1094355eu);
  /* 1094355e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943561 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943563 je 0x109435b8 */
  if (C.zf) goto L_109435b8;
  /* 10943565 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10943567 call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x1094356du);
  /* 1094356d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943570 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943572 je 0x109435b8 */
  if (C.zf) goto L_109435b8;
  /* 10943574 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943576 call ebp */
  call_ind((uint32_t)(EBP), 0x10943578u);
  /* 10943578 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094357b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094357d jle 0x109435b8 */
  if ((C.zf||C.sf!=C.of)) goto L_109435b8;
  /* 1094357f push 0 */
  push32((uint32_t)(0x0u));
  /* 10943581 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10943583 call ebx */
  call_ind((uint32_t)(EBX), 0x10943585u);
  /* 10943585 push 0x1094859c */
  push32((uint32_t)(0x1094859cu));
  /* 1094358a push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094358f call esi */
  call_ind((uint32_t)(ESI), 0x10943591u);
  /* 10943591 push 0x10948588 */
  push32((uint32_t)(0x10948588u));
  /* 10943596 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094359b call esi */
  call_ind((uint32_t)(ESI), 0x1094359du);
  /* 1094359d push 0x1094856c */
  push32((uint32_t)(0x1094856cu));
  /* 109435a2 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109435a7 call esi */
  call_ind((uint32_t)(ESI), 0x109435a9u);
  /* 109435a9 push 0x10948550 */
  push32((uint32_t)(0x10948550u));
  /* 109435ae push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109435b3 call esi */
  call_ind((uint32_t)(ESI), 0x109435b5u);
  /* 109435b5 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109435b8:;
  /* 109435b8 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 109435ba call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109435c0u);
  /* 109435c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109435c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109435c5 je 0x1094361a */
  if (C.zf) goto L_1094361a;
  /* 109435c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 109435c9 call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x109435cfu);
  /* 109435cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109435d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109435d4 je 0x1094361a */
  if (C.zf) goto L_1094361a;
  /* 109435d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109435d8 call ebp */
  call_ind((uint32_t)(EBP), 0x109435dau);
  /* 109435da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109435dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109435df jle 0x1094361a */
  if ((C.zf||C.sf!=C.of)) goto L_1094361a;
  /* 109435e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109435e3 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 109435e5 call ebx */
  call_ind((uint32_t)(EBX), 0x109435e7u);
  /* 109435e7 push 0x1094853c */
  push32((uint32_t)(0x1094853cu));
  /* 109435ec push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109435f1 call esi */
  call_ind((uint32_t)(ESI), 0x109435f3u);
  /* 109435f3 push 0x10948528 */
  push32((uint32_t)(0x10948528u));
  /* 109435f8 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109435fd call esi */
  call_ind((uint32_t)(ESI), 0x109435ffu);
  /* 109435ff push 0x1094850c */
  push32((uint32_t)(0x1094850cu));
  /* 10943604 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943609 call esi */
  call_ind((uint32_t)(ESI), 0x1094360bu);
  /* 1094360b push 0x109484f0 */
  push32((uint32_t)(0x109484f0u));
  /* 10943610 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943615 call esi */
  call_ind((uint32_t)(ESI), 0x10943617u);
  /* 10943617 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1094361a:;
  /* 1094361a push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1094361c call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943622u);
  /* 10943622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943625 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943627 je 0x1094367c */
  if (C.zf) goto L_1094367c;
  /* 10943629 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1094362b call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10943631u);
  /* 10943631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943634 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943636 je 0x1094367c */
  if (C.zf) goto L_1094367c;
  /* 10943638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094363a call ebp */
  call_ind((uint32_t)(EBP), 0x1094363cu);
  /* 1094363c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094363f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943641 jle 0x1094367c */
  if ((C.zf||C.sf!=C.of)) goto L_1094367c;
  /* 10943643 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943645 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10943647 call ebx */
  call_ind((uint32_t)(EBX), 0x10943649u);
  /* 10943649 push 0x109484dc */
  push32((uint32_t)(0x109484dcu));
  /* 1094364e push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943653 call esi */
  call_ind((uint32_t)(ESI), 0x10943655u);
  /* 10943655 push 0x109484c8 */
  push32((uint32_t)(0x109484c8u));
  /* 1094365a push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094365f call esi */
  call_ind((uint32_t)(ESI), 0x10943661u);
  /* 10943661 push 0x109484ac */
  push32((uint32_t)(0x109484acu));
  /* 10943666 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094366b call esi */
  call_ind((uint32_t)(ESI), 0x1094366du);
  /* 1094366d push 0x10948490 */
  push32((uint32_t)(0x10948490u));
  /* 10943672 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943677 call esi */
  call_ind((uint32_t)(ESI), 0x10943679u);
  /* 10943679 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1094367c:;
  /* 1094367c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1094367e call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943684u);
  /* 10943684 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943687 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943689 je 0x109436ea */
  if (C.zf) goto L_109436ea;
  /* 1094368b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1094368d call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10943693u);
  /* 10943693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943696 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943698 je 0x109436ea */
  if (C.zf) goto L_109436ea;
  /* 1094369a push 0 */
  push32((uint32_t)(0x0u));
  /* 1094369c call ebp */
  call_ind((uint32_t)(EBP), 0x1094369eu);
  /* 1094369e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109436a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109436a3 jle 0x109436ea */
  if ((C.zf||C.sf!=C.of)) goto L_109436ea;
  /* 109436a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109436a7 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 109436a9 call ebx */
  call_ind((uint32_t)(EBX), 0x109436abu);
  /* 109436ab push 0x1094847c */
  push32((uint32_t)(0x1094847cu));
  /* 109436b0 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109436b5 call esi */
  call_ind((uint32_t)(ESI), 0x109436b7u);
  /* 109436b7 push 0x10948468 */
  push32((uint32_t)(0x10948468u));
  /* 109436bc push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109436c1 call esi */
  call_ind((uint32_t)(ESI), 0x109436c3u);
  /* 109436c3 push 0x1094844c */
  push32((uint32_t)(0x1094844cu));
  /* 109436c8 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109436cd call esi */
  call_ind((uint32_t)(ESI), 0x109436cfu);
  /* 109436cf push 0x10948430 */
  push32((uint32_t)(0x10948430u));
  /* 109436d4 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109436d9 call esi */
  call_ind((uint32_t)(ESI), 0x109436dbu);
  /* 109436db push 0x10948428 */
  push32((uint32_t)(0x10948428u));
  /* 109436e0 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 109436e5 call esi */
  call_ind((uint32_t)(ESI), 0x109436e7u);
  /* 109436e7 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109436ea:;
  /* 109436ea push 0x44 */
  push32((uint32_t)(0x44u));
  /* 109436ec call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109436f2u);
  /* 109436f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109436f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109436f7 je 0x10943740 */
  if (C.zf) goto L_10943740;
  /* 109436f9 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 109436fb call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10943701u);
  /* 10943701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943704 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943706 je 0x10943740 */
  if (C.zf) goto L_10943740;
  /* 10943708 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094370a call ebp */
  call_ind((uint32_t)(EBP), 0x1094370cu);
  /* 1094370c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094370f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943711 jle 0x10943740 */
  if ((C.zf||C.sf!=C.of)) goto L_10943740;
  /* 10943713 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943715 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10943717 call ebx */
  call_ind((uint32_t)(EBX), 0x10943719u);
  /* 10943719 push 0x10948420 */
  push32((uint32_t)(0x10948420u));
  /* 1094371e push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943723 call esi */
  call_ind((uint32_t)(ESI), 0x10943725u);
  /* 10943725 push 0x10948418 */
  push32((uint32_t)(0x10948418u));
  /* 1094372a push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094372f call esi */
  call_ind((uint32_t)(ESI), 0x10943731u);
  /* 10943731 push 0x10948410 */
  push32((uint32_t)(0x10948410u));
  /* 10943736 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094373b call esi */
  call_ind((uint32_t)(ESI), 0x1094373du);
  /* 1094373d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943740:;
  /* 10943740 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10943742 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943748u);
  /* 10943748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094374b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094374d je 0x109437a2 */
  if (C.zf) goto L_109437a2;
  /* 1094374f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10943751 call dword ptr [0x109470fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470fc))), 0x10943757u);
  /* 10943757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094375a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094375c je 0x109437a2 */
  if (C.zf) goto L_109437a2;
  /* 1094375e push 0 */
  push32((uint32_t)(0x0u));
  /* 10943760 call ebp */
  call_ind((uint32_t)(EBP), 0x10943762u);
  /* 10943762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943767 jle 0x109437a2 */
  if ((C.zf||C.sf!=C.of)) goto L_109437a2;
  /* 10943769 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094376b push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1094376d call ebx */
  call_ind((uint32_t)(EBX), 0x1094376fu);
  /* 1094376f push 0x10948408 */
  push32((uint32_t)(0x10948408u));
  /* 10943774 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943779 call esi */
  call_ind((uint32_t)(ESI), 0x1094377bu);
  /* 1094377b push 0x10948400 */
  push32((uint32_t)(0x10948400u));
  /* 10943780 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943785 call esi */
  call_ind((uint32_t)(ESI), 0x10943787u);
  /* 10943787 push 0x109483f8 */
  push32((uint32_t)(0x109483f8u));
  /* 1094378c push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 10943791 call esi */
  call_ind((uint32_t)(ESI), 0x10943793u);
  /* 10943793 push 0x109483f0 */
  push32((uint32_t)(0x109483f0u));
  /* 10943798 push 0x10948378 */
  push32((uint32_t)(0x10948378u));
  /* 1094379d call esi */
  call_ind((uint32_t)(ESI), 0x1094379fu);
  /* 1094379f add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109437a2:;
  /* 109437a2 mov ebp, dword ptr [0x109470b8] */
  EBP = (r32((uint32_t)(0x109470b8)));
  /* 109437a8 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 109437aa call ebp */
  call_ind((uint32_t)(EBP), 0x109437acu);
  /* 109437ac mov esi, dword ptr [0x10947130] */
  ESI = (r32((uint32_t)(0x10947130)));
  /* 109437b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109437b5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109437b7 je 0x109437ed */
  if (C.zf) goto L_109437ed;
  /* 109437b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109437bb push 0x10949108 */
  push32((uint32_t)(0x10949108u));
  /* 109437c0 call esi */
  call_ind((uint32_t)(ESI), 0x109437c2u);
  /* 109437c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109437c5 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109437c8 jle 0x109437ed */
  if ((C.zf||C.sf!=C.of)) goto L_109437ed;
  /* 109437ca push 0 */
  push32((uint32_t)(0x0u));
  /* 109437cc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 109437ce call ebx */
  call_ind((uint32_t)(EBX), 0x109437d0u);
  /* 109437d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109437d2 push 0x109490b0 */
  push32((uint32_t)(0x109490b0u));
  /* 109437d7 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109437ddu);
  /* 109437dd push 0 */
  push32((uint32_t)(0x0u));
  /* 109437df push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 109437e1 push 0x10949108 */
  push32((uint32_t)(0x10949108u));
  /* 109437e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109437e8 call edi */
  call_ind((uint32_t)(EDI), 0x109437eau);
  /* 109437ea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109437ed:;
  /* 109437ed push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 109437ef call ebp */
  call_ind((uint32_t)(EBP), 0x109437f1u);
  /* 109437f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109437f4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109437f6 je 0x10943837 */
  if (C.zf) goto L_10943837;
  /* 109437f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109437fa push 0x10948e98 */
  push32((uint32_t)(0x10948e98u));
  /* 109437ff call esi */
  call_ind((uint32_t)(ESI), 0x10943801u);
  /* 10943801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943804 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943807 jle 0x10943837 */
  if ((C.zf||C.sf!=C.of)) goto L_10943837;
  /* 10943809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094380b push 0x10948e98 */
  push32((uint32_t)(0x10948e98u));
  /* 10943810 push 0x10948eb8 */
  push32((uint32_t)(0x10948eb8u));
  /* 10943815 call dword ptr [0x10947128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947128))), 0x1094381bu);
  /* 1094381b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094381d push 0x10948eb8 */
  push32((uint32_t)(0x10948eb8u));
  /* 10943822 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943824 call dword ptr [0x10947104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947104))), 0x1094382au);
  /* 1094382a push 1 */
  push32((uint32_t)(0x1u));
  /* 1094382c push 1 */
  push32((uint32_t)(0x1u));
  /* 1094382e call dword ptr [0x10947138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947138))), 0x10943834u);
  /* 10943834 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943837:;
  /* 10943837 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10943839 call ebp */
  call_ind((uint32_t)(EBP), 0x1094383bu);
  /* 1094383b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094383e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943840 je 0x10943877 */
  if (C.zf) goto L_10943877;
  /* 10943842 push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 10943847 push 0x10948d88 */
  push32((uint32_t)(0x10948d88u));
  /* 1094384c call dword ptr [0x109470f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470f8))), 0x10943852u);
  /* 10943852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943855 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943858 jne 0x10943877 */
  if (!C.zf) goto L_10943877;
  /* 1094385a cmp dword ptr [0x10949090], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10949090))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943861 jne 0x10943877 */
  if (!C.zf) goto L_10943877;
  /* 10943863 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943865 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10943867 call ebx */
  call_ind((uint32_t)(EBX), 0x10943869u);
  /* 10943869 push 0x109483e8 */
  push32((uint32_t)(0x109483e8u));
  /* 1094386e call dword ptr [0x109470e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e0))), 0x10943874u);
  /* 10943874 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943877:;
  /* 10943877 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10943879 call ebp */
  call_ind((uint32_t)(EBP), 0x1094387bu);
  /* 1094387b mov esi, dword ptr [0x1094713c] */
  ESI = (r32((uint32_t)(0x1094713c)));
  /* 10943881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943884 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943886 je 0x109438cd */
  if (C.zf) goto L_109438cd;
  /* 10943888 push 0x10948e58 */
  push32((uint32_t)(0x10948e58u));
  /* 1094388d call esi */
  call_ind((uint32_t)(ESI), 0x1094388fu);
  /* 1094388f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943892 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943895 jge 0x109438cd */
  if ((C.sf==C.of)) goto L_109438cd;
  /* 10943897 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943899 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 1094389b call ebx */
  call_ind((uint32_t)(EBX), 0x1094389du);
  /* 1094389d push 0 */
  push32((uint32_t)(0x0u));
  /* 1094389f push 0x10949040 */
  push32((uint32_t)(0x10949040u));
  /* 109438a4 call dword ptr [0x109470d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470d4))), 0x109438aau);
  /* 109438aa push 5 */
  push32((uint32_t)(0x5u));
  /* 109438ac call dword ptr [0x10947134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947134))), 0x109438b2u);
  /* 109438b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109438b4 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 109438b6 call ebx */
  call_ind((uint32_t)(EBX), 0x109438b8u);
  /* 109438b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109438ba push 0x3d */
  push32((uint32_t)(0x3du));
  /* 109438bc call ebx */
  call_ind((uint32_t)(EBX), 0x109438beu);
  /* 109438be push 0 */
  push32((uint32_t)(0x0u));
  /* 109438c0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 109438c2 call ebx */
  call_ind((uint32_t)(EBX), 0x109438c4u);
  /* 109438c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109438c6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 109438c8 call ebx */
  call_ind((uint32_t)(EBX), 0x109438cau);
  /* 109438ca add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109438cd:;
  /* 109438cd push 0x62 */
  push32((uint32_t)(0x62u));
  /* 109438cf call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x109438d5u);
  /* 109438d5 mov ebp, dword ptr [0x10947144] */
  EBP = (r32((uint32_t)(0x10947144)));
  /* 109438db mov edi, dword ptr [0x10947148] */
  EDI = (r32((uint32_t)(0x10947148)));
  /* 109438e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109438e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109438e6 je 0x10943931 */
  if (C.zf) goto L_10943931;
  /* 109438e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109438ea push 0x109490f0 */
  push32((uint32_t)(0x109490f0u));
  /* 109438ef call ebp */
  call_ind((uint32_t)(EBP), 0x109438f1u);
  /* 109438f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109438f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109438f6 jg 0x10943908 */
  if ((!C.zf&&C.sf==C.of)) goto L_10943908;
  /* 109438f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 109438fa push 0x109490f0 */
  push32((uint32_t)(0x109490f0u));
  /* 109438ff call ebp */
  call_ind((uint32_t)(EBP), 0x10943901u);
  /* 10943901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943906 jle 0x10943931 */
  if ((C.zf||C.sf!=C.of)) goto L_10943931;
L_10943908:;
  /* 10943908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094390a push 0x109490f0 */
  push32((uint32_t)(0x109490f0u));
  /* 1094390f push 1 */
  push32((uint32_t)(0x1u));
  /* 10943911 call dword ptr [0x10947104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947104))), 0x10943917u);
  /* 10943917 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943919 call edi */
  call_ind((uint32_t)(EDI), 0x1094391bu);
  /* 1094391b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094391d push 0x109490f0 */
  push32((uint32_t)(0x109490f0u));
  /* 10943922 push 2 */
  push32((uint32_t)(0x2u));
  /* 10943924 call dword ptr [0x10947104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947104))), 0x1094392au);
  /* 1094392a push 2 */
  push32((uint32_t)(0x2u));
  /* 1094392c call edi */
  call_ind((uint32_t)(EDI), 0x1094392eu);
  /* 1094392e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943931:;
  /* 10943931 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10943933 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943939u);
  /* 10943939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094393c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1094393e je 0x10943969 */
  if (C.zf) goto L_10943969;
  /* 10943940 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943942 push 0x10949000 */
  push32((uint32_t)(0x10949000u));
  /* 10943947 call ebp */
  call_ind((uint32_t)(EBP), 0x10943949u);
  /* 10943949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094394c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094394e jne 0x10943969 */
  if (!C.zf) goto L_10943969;
  /* 10943950 push eax */
  push32((uint32_t)(EAX));
  /* 10943951 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10943953 call ebx */
  call_ind((uint32_t)(EBX), 0x10943955u);
  /* 10943955 push 0x109483e0 */
  push32((uint32_t)(0x109483e0u));
  /* 1094395a call dword ptr [0x109470e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470e0))), 0x10943960u);
  /* 10943960 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943963 call dword ptr [0x10947140] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947140))), 0x10943969u);
L_10943969:;
  /* 10943969 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1094396b call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943971u);
  /* 10943971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943974 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943976 je 0x10943a13 */
  if (C.zf) goto L_10943a13;
  /* 1094397c push 0x109490f0 */
  push32((uint32_t)(0x109490f0u));
  /* 10943981 call esi */
  call_ind((uint32_t)(ESI), 0x10943983u);
  /* 10943983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943986 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943989 jl 0x10943999 */
  if ((C.sf!=C.of)) goto L_10943999;
  /* 1094398b push 0x10948ff0 */
  push32((uint32_t)(0x10948ff0u));
  /* 10943990 call esi */
  call_ind((uint32_t)(ESI), 0x10943992u);
  /* 10943992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943995 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943997 jne 0x10943a13 */
  if (!C.zf) goto L_10943a13;
L_10943999:;
  /* 10943999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1094399b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1094399d call ebx */
  call_ind((uint32_t)(EBX), 0x1094399fu);
  /* 1094399f push 0x10949060 */
  push32((uint32_t)(0x10949060u));
  /* 109439a4 call esi */
  call_ind((uint32_t)(ESI), 0x109439a6u);
  /* 109439a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109439a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109439ab jne 0x109439bf */
  if (!C.zf) goto L_109439bf;
  /* 109439ad mov ebx, dword ptr [0x109470e0] */
  EBX = (r32((uint32_t)(0x109470e0)));
  /* 109439b3 push 0x109483d8 */
  push32((uint32_t)(0x109483d8u));
  /* 109439b8 call ebx */
  call_ind((uint32_t)(EBX), 0x109439bau);
  /* 109439ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109439bd jmp 0x109439c5 */
  goto L_109439c5;
L_109439bf:;
  /* 109439bf mov ebx, dword ptr [0x109470e0] */
  EBX = (r32((uint32_t)(0x109470e0)));
L_109439c5:;
  /* 109439c5 push 0x10948f90 */
  push32((uint32_t)(0x10948f90u));
  /* 109439ca call esi */
  call_ind((uint32_t)(ESI), 0x109439ccu);
  /* 109439cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109439cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109439d1 jne 0x109439dd */
  if (!C.zf) goto L_109439dd;
  /* 109439d3 push 0x109483d0 */
  push32((uint32_t)(0x109483d0u));
  /* 109439d8 call ebx */
  call_ind((uint32_t)(EBX), 0x109439dau);
  /* 109439da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109439dd:;
  /* 109439dd push 0x10948fc0 */
  push32((uint32_t)(0x10948fc0u));
  /* 109439e2 call esi */
  call_ind((uint32_t)(ESI), 0x109439e4u);
  /* 109439e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109439e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109439e9 jne 0x109439f5 */
  if (!C.zf) goto L_109439f5;
  /* 109439eb push 0x109483c8 */
  push32((uint32_t)(0x109483c8u));
  /* 109439f0 call ebx */
  call_ind((uint32_t)(EBX), 0x109439f2u);
  /* 109439f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109439f5:;
  /* 109439f5 push 0x10948ff0 */
  push32((uint32_t)(0x10948ff0u));
  /* 109439fa call esi */
  call_ind((uint32_t)(ESI), 0x109439fcu);
  /* 109439fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109439ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943a01 jne 0x10943a0d */
  if (!C.zf) goto L_10943a0d;
  /* 10943a03 push 0x109483c0 */
  push32((uint32_t)(0x109483c0u));
  /* 10943a08 call ebx */
  call_ind((uint32_t)(EBX), 0x10943a0au);
  /* 10943a0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943a0d:;
  /* 10943a0d call dword ptr [0x10947150] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947150))), 0x10943a13u);
L_10943a13:;
  /* 10943a13 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10943a15 call dword ptr [0x109470b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b8))), 0x10943a1bu);
  /* 10943a1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943a1e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10943a20 je 0x10943a48 */
  if (C.zf) goto L_10943a48;
  /* 10943a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943a24 push 0x10948eb8 */
  push32((uint32_t)(0x10948eb8u));
  /* 10943a29 call ebp */
  call_ind((uint32_t)(EBP), 0x10943a2bu);
  /* 10943a2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943a30 jle 0x10943a48 */
  if ((C.zf||C.sf!=C.of)) goto L_10943a48;
  /* 10943a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943a34 push 0x10948eb8 */
  push32((uint32_t)(0x10948eb8u));
  /* 10943a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943a3b call dword ptr [0x10947104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947104))), 0x10943a41u);
  /* 10943a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943a43 call edi */
  call_ind((uint32_t)(EDI), 0x10943a45u);
  /* 10943a45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10943a48:;
  /* 10943a48 pop edi */
  EDI = (pop32());
  /* 10943a49 pop esi */
  ESI = (pop32());
  /* 10943a4a pop ebp */
  EBP = (pop32());
  /* 10943a4b pop ebx */
  EBX = (pop32());
  /* 10943a4c ret  */
  ESPCHK(0x10941580u, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x10943a50 (34 bytes, 9 insns) */
void f_10943a50(void) {
  FTRACE(0x10943a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943a50 call 0x10943ca0 */
  push32(0x10943a55u); f_10943ca0();
  /* 10943a55 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10943a58 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10943a5e add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10943a64 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10943a67 mov eax, ecx */
  EAX = (ECX);
  /* 10943a69 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10943a6c and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 10943a71 ret  */
  ESPCHK(0x10943a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a72 @ 0x10943a72 (217 bytes, 57 insns) */
void f_10943a72(void) {
  FTRACE(0x10943a72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943a72 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10943a76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943a79 jne 0x10943b07 */
  if (!C.zf) goto L_10943b07;
  /* 10943a7f call dword ptr [0x10947000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947000))), 0x10943a85u);
  /* 10943a85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943a87 mov dword ptr [0x1094913c], eax */
  w32((uint32_t)(0x1094913c), (EAX));
  /* 10943a8c call 0x1094450d */
  push32(0x10943a91u); f_1094450d();
  /* 10943a91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943a93 pop ecx */
  ECX = (pop32());
  /* 10943a94 je 0x10943ad2 */
  if (C.zf) goto L_10943ad2;
  /* 10943a96 mov eax, dword ptr [0x1094913c] */
  EAX = (r32((uint32_t)(0x1094913c)));
  /* 10943a9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10943a9d mov cl, byte ptr [0x1094913d] */
  CL = (r8((uint32_t)(0x1094913d)));
  /* 10943aa3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10943aa8 shr dword ptr [0x1094913c], 0x10 */
  w32((uint32_t)(0x1094913c), (sh_shr((uint32_t)(r32((uint32_t)(0x1094913c))), (0x10u)&0x1f, 32)));
  /* 10943aaf mov dword ptr [0x10949144], eax */
  w32((uint32_t)(0x10949144), (EAX));
  /* 10943ab4 mov dword ptr [0x10949148], ecx */
  w32((uint32_t)(0x10949148), (ECX));
  /* 10943aba shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10943abd add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10943abf mov dword ptr [0x10949140], eax */
  w32((uint32_t)(0x10949140), (EAX));
  /* 10943ac4 call 0x10943c1b */
  push32(0x10943ac9u); f_10943c1b();
  /* 10943ac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943acb jne 0x10943ad6 */
  if (!C.zf) goto L_10943ad6;
  /* 10943acd call 0x10944549 */
  push32(0x10943ad2u); f_10944549();
L_10943ad2:;
  /* 10943ad2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10943ad4 jmp 0x10943b48 */
  goto L_10943b48;
L_10943ad6:;
  /* 10943ad6 call dword ptr [0x109470a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470a4))), 0x10943adcu);
  /* 10943adc mov dword ptr [0x10949698], eax */
  w32((uint32_t)(0x10949698), (EAX));
  /* 10943ae1 call 0x109443db */
  push32(0x10943ae6u); f_109443db();
  /* 10943ae6 mov dword ptr [0x10949128], eax */
  w32((uint32_t)(0x10949128), (EAX));
  /* 10943aeb call 0x10943ec5 */
  push32(0x10943af0u); f_10943ec5();
  /* 10943af0 call 0x1094418e */
  push32(0x10943af5u); f_1094418e();
  /* 10943af5 call 0x109440d5 */
  push32(0x10943afau); f_109440d5();
  /* 10943afa call 0x10943da7 */
  push32(0x10943affu); f_10943da7();
  /* 10943aff inc dword ptr [0x10949124] */
  { uint32_t _r=(r32((uint32_t)(0x10949124)))+1; w32((uint32_t)(0x10949124), (_r)); fl_inc(_r,32); }
  /* 10943b05 jmp 0x10943b45 */
  goto L_10943b45;
L_10943b07:;
  /* 10943b07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10943b09 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943b0b jne 0x10943b39 */
  if (!C.zf) goto L_10943b39;
  /* 10943b0d cmp dword ptr [0x10949124], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10949124))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943b13 jle 0x10943ad2 */
  if ((C.zf||C.sf!=C.of)) goto L_10943ad2;
  /* 10943b15 dec dword ptr [0x10949124] */
  { uint32_t _r=(r32((uint32_t)(0x10949124)))-1; w32((uint32_t)(0x10949124), (_r)); fl_dec(_r,32); }
  /* 10943b1b cmp dword ptr [0x10949174], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10949174))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943b21 jne 0x10943b28 */
  if (!C.zf) goto L_10943b28;
  /* 10943b23 call 0x10943de5 */
  push32(0x10943b28u); f_10943de5();
L_10943b28:;
  /* 10943b28 call 0x10944081 */
  push32(0x10943b2du); f_10944081();
  /* 10943b2d call 0x10943c6f */
  push32(0x10943b32u); f_10943c6f();
  /* 10943b32 call 0x10944549 */
  push32(0x10943b37u); f_10944549();
  /* 10943b37 jmp 0x10943b45 */
  goto L_10943b45;
L_10943b39:;
  /* 10943b39 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943b3c jne 0x10943b45 */
  if (!C.zf) goto L_10943b45;
  /* 10943b3e push ecx */
  push32((uint32_t)(ECX));
  /* 10943b3f call 0x10943d07 */
  push32(0x10943b44u); f_10943d07();
  /* 10943b44 pop ecx */
  ECX = (pop32());
L_10943b45:;
  /* 10943b45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943b47 pop eax */
  EAX = (pop32());
L_10943b48:;
  /* 10943b48 ret 0xc */
  ESPCHK(0x10943a72u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10943b4b (157 bytes, 73 insns) */
void f_10943b4b(void) {
  FTRACE(0x10943b4bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943b4b push ebp */
  push32((uint32_t)(EBP));
  /* 10943b4c mov ebp, esp */
  EBP = (ESP);
  /* 10943b4e push ebx */
  push32((uint32_t)(EBX));
  /* 10943b4f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10943b52 push esi */
  push32((uint32_t)(ESI));
  /* 10943b53 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10943b56 push edi */
  push32((uint32_t)(EDI));
  /* 10943b57 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10943b5a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10943b5c jne 0x10943b67 */
  if (!C.zf) goto L_10943b67;
  /* 10943b5e cmp dword ptr [0x10949124], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10949124))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943b65 jmp 0x10943b8d */
  goto L_10943b8d;
L_10943b67:;
  /* 10943b67 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943b6a je 0x10943b71 */
  if (C.zf) goto L_10943b71;
  /* 10943b6c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943b6f jne 0x10943b93 */
  if (!C.zf) goto L_10943b93;
L_10943b71:;
  /* 10943b71 mov eax, dword ptr [0x1094969c] */
  EAX = (r32((uint32_t)(0x1094969c)));
  /* 10943b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943b78 je 0x10943b83 */
  if (C.zf) goto L_10943b83;
  /* 10943b7a push edi */
  push32((uint32_t)(EDI));
  /* 10943b7b push esi */
  push32((uint32_t)(ESI));
  /* 10943b7c push ebx */
  push32((uint32_t)(EBX));
  /* 10943b7d call eax */
  call_ind((uint32_t)(EAX), 0x10943b7fu);
  /* 10943b7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943b81 je 0x10943b8f */
  if (C.zf) goto L_10943b8f;
L_10943b83:;
  /* 10943b83 push edi */
  push32((uint32_t)(EDI));
  /* 10943b84 push esi */
  push32((uint32_t)(ESI));
  /* 10943b85 push ebx */
  push32((uint32_t)(EBX));
  /* 10943b86 call 0x10943a72 */
  push32(0x10943b8bu); f_10943a72();
  /* 10943b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10943b8d:;
  /* 10943b8d jne 0x10943b93 */
  if (!C.zf) goto L_10943b93;
L_10943b8f:;
  /* 10943b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10943b91 jmp 0x10943be1 */
  goto L_10943be1;
L_10943b93:;
  /* 10943b93 push edi */
  push32((uint32_t)(EDI));
  /* 10943b94 push esi */
  push32((uint32_t)(ESI));
  /* 10943b95 push ebx */
  push32((uint32_t)(EBX));
  /* 10943b96 call 0x10941560 */
  push32(0x10943b9bu); f_10941560();
  /* 10943b9b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943b9e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10943ba1 jne 0x10943baf */
  if (!C.zf) goto L_10943baf;
  /* 10943ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943ba5 jne 0x10943bde */
  if (!C.zf) goto L_10943bde;
  /* 10943ba7 push edi */
  push32((uint32_t)(EDI));
  /* 10943ba8 push eax */
  push32((uint32_t)(EAX));
  /* 10943ba9 push ebx */
  push32((uint32_t)(EBX));
  /* 10943baa call 0x10943a72 */
  push32(0x10943bafu); f_10943a72();
L_10943baf:;
  /* 10943baf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10943bb1 je 0x10943bb8 */
  if (C.zf) goto L_10943bb8;
  /* 10943bb3 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943bb6 jne 0x10943bde */
  if (!C.zf) goto L_10943bde;
L_10943bb8:;
  /* 10943bb8 push edi */
  push32((uint32_t)(EDI));
  /* 10943bb9 push esi */
  push32((uint32_t)(ESI));
  /* 10943bba push ebx */
  push32((uint32_t)(EBX));
  /* 10943bbb call 0x10943a72 */
  push32(0x10943bc0u); f_10943a72();
  /* 10943bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943bc2 jne 0x10943bc7 */
  if (!C.zf) goto L_10943bc7;
  /* 10943bc4 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10943bc7:;
  /* 10943bc7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943bcb je 0x10943bde */
  if (C.zf) goto L_10943bde;
  /* 10943bcd mov eax, dword ptr [0x1094969c] */
  EAX = (r32((uint32_t)(0x1094969c)));
  /* 10943bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943bd4 je 0x10943bde */
  if (C.zf) goto L_10943bde;
  /* 10943bd6 push edi */
  push32((uint32_t)(EDI));
  /* 10943bd7 push esi */
  push32((uint32_t)(ESI));
  /* 10943bd8 push ebx */
  push32((uint32_t)(EBX));
  /* 10943bd9 call eax */
  call_ind((uint32_t)(EAX), 0x10943bdbu);
  /* 10943bdb mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10943bde:;
  /* 10943bde mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10943be1:;
  /* 10943be1 pop edi */
  EDI = (pop32());
  /* 10943be2 pop esi */
  ESI = (pop32());
  /* 10943be3 pop ebx */
  EBX = (pop32());
  /* 10943be4 pop ebp */
  EBP = (pop32());
  /* 10943be5 ret 0xc */
  ESPCHK(0x10943b4bu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10943be8 (48 bytes, 15 insns) */
void f_10943be8(void) {
  FTRACE(0x10943be8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943be8 mov eax, dword ptr [0x10949130] */
  EAX = (r32((uint32_t)(0x10949130)));
  /* 10943bed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943bf0 je 0x10943bff */
  if (C.zf) goto L_10943bff;
  /* 10943bf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943bf4 jne 0x10943c04 */
  if (!C.zf) goto L_10943c04;
  /* 10943bf6 cmp dword ptr [0x10949134], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10949134))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943bfd jne 0x10943c04 */
  if (!C.zf) goto L_10943c04;
L_10943bff:;
  /* 10943bff call 0x109445be */
  push32(0x10943c04u); f_109445be();
L_10943c04:;
  /* 10943c04 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10943c08 call 0x109445f7 */
  push32(0x10943c0du); f_109445f7();
  /* 10943c0d push 0xff */
  push32((uint32_t)(0xffu));
  /* 10943c12 call dword ptr [0x109489fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109489fc))), 0x10943c18u);
  /* 10943c18 pop ecx */
  ECX = (pop32());
  /* 10943c19 pop ecx */
  ECX = (pop32());
  /* 10943c1a ret  */
  ESPCHK(0x10943be8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c1b @ 0x10943c1b (84 bytes, 32 insns) */
void f_10943c1b(void) {
  FTRACE(0x10943c1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943c1b push esi */
  push32((uint32_t)(ESI));
  /* 10943c1c call 0x109447d7 */
  push32(0x10943c21u); f_109447d7();
  /* 10943c21 call dword ptr [0x1094709c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094709c))), 0x10943c27u);
  /* 10943c27 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943c2a mov dword ptr [0x10948a00], eax */
  w32((uint32_t)(0x10948a00), (EAX));
  /* 10943c2f je 0x10943c6b */
  if (C.zf) goto L_10943c6b;
  /* 10943c31 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10943c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943c35 call 0x1094474a */
  push32(0x10943c3au); f_1094474a();
  /* 10943c3a mov esi, eax */
  ESI = (EAX);
  /* 10943c3c pop ecx */
  ECX = (pop32());
  /* 10943c3d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10943c3f pop ecx */
  ECX = (pop32());
  /* 10943c40 je 0x10943c6b */
  if (C.zf) goto L_10943c6b;
  /* 10943c42 push esi */
  push32((uint32_t)(ESI));
  /* 10943c43 push dword ptr [0x10948a00] */
  push32((uint32_t)(r32((uint32_t)(0x10948a00))));
  /* 10943c49 call dword ptr [0x109470a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470a0))), 0x10943c4fu);
  /* 10943c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943c51 je 0x10943c6b */
  if (C.zf) goto L_10943c6b;
  /* 10943c53 push esi */
  push32((uint32_t)(ESI));
  /* 10943c54 call 0x10943c8d */
  push32(0x10943c59u); f_10943c8d();
  /* 10943c59 pop ecx */
  ECX = (pop32());
  /* 10943c5a call dword ptr [0x10947004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947004))), 0x10943c60u);
  /* 10943c60 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10943c64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943c66 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10943c68 pop eax */
  EAX = (pop32());
  /* 10943c69 pop esi */
  ESI = (pop32());
  /* 10943c6a ret  */
  ESPCHK(0x10943c1bu, _esp0);
  ESP += 4; return;
L_10943c6b:;
  /* 10943c6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10943c6d pop esi */
  ESI = (pop32());
  /* 10943c6e ret  */
  ESPCHK(0x10943c1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003c6f @ 0x10943c6f (30 bytes, 8 insns) */
void f_10943c6f(void) {
  FTRACE(0x10943c6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943c6f call 0x10944800 */
  push32(0x10943c74u); f_10944800();
  /* 10943c74 mov eax, dword ptr [0x10948a00] */
  EAX = (r32((uint32_t)(0x10948a00)));
  /* 10943c79 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943c7c je 0x10943c8c */
  if (C.zf) goto L_10943c8c;
  /* 10943c7e push eax */
  push32((uint32_t)(EAX));
  /* 10943c7f call dword ptr [0x109470b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470b0))), 0x10943c85u);
  /* 10943c85 or dword ptr [0x10948a00], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10948a00)))|(0xffffffffu); w32((uint32_t)(0x10948a00), (_r)); fl_logic(_r,32); }
L_10943c8c:;
  /* 10943c8c ret  */
  ESPCHK(0x10943c6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003c8d @ 0x10943c8d (19 bytes, 4 insns) */
void f_10943c8d(void) {
  FTRACE(0x10943c8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943c8d mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10943c91 mov dword ptr [eax + 0x50], 0x10948b80 */
  w32((uint32_t)(EAX + 0x50), (0x10948b80u));
  /* 10943c98 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10943c9f ret  */
  ESPCHK(0x10943c8du, _esp0);
  ESP += 4; return;
}

/* FUN_10003ca0 @ 0x10943ca0 (103 bytes, 38 insns) */
void f_10943ca0(void) {
  FTRACE(0x10943ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943ca0 push esi */
  push32((uint32_t)(ESI));
  /* 10943ca1 push edi */
  push32((uint32_t)(EDI));
  /* 10943ca2 call dword ptr [0x10947094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947094))), 0x10943ca8u);
  /* 10943ca8 push dword ptr [0x10948a00] */
  push32((uint32_t)(r32((uint32_t)(0x10948a00))));
  /* 10943cae mov edi, eax */
  EDI = (EAX);
  /* 10943cb0 call dword ptr [0x109470ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ac))), 0x10943cb6u);
  /* 10943cb6 mov esi, eax */
  ESI = (EAX);
  /* 10943cb8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10943cba jne 0x10943cfb */
  if (!C.zf) goto L_10943cfb;
  /* 10943cbc push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10943cbe push 1 */
  push32((uint32_t)(0x1u));
  /* 10943cc0 call 0x1094474a */
  push32(0x10943cc5u); f_1094474a();
  /* 10943cc5 mov esi, eax */
  ESI = (EAX);
  /* 10943cc7 pop ecx */
  ECX = (pop32());
  /* 10943cc8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10943cca pop ecx */
  ECX = (pop32());
  /* 10943ccb je 0x10943cf3 */
  if (C.zf) goto L_10943cf3;
  /* 10943ccd push esi */
  push32((uint32_t)(ESI));
  /* 10943cce push dword ptr [0x10948a00] */
  push32((uint32_t)(r32((uint32_t)(0x10948a00))));
  /* 10943cd4 call dword ptr [0x109470a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470a0))), 0x10943cdau);
  /* 10943cda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943cdc je 0x10943cf3 */
  if (C.zf) goto L_10943cf3;
  /* 10943cde push esi */
  push32((uint32_t)(ESI));
  /* 10943cdf call 0x10943c8d */
  push32(0x10943ce4u); f_10943c8d();
  /* 10943ce4 pop ecx */
  ECX = (pop32());
  /* 10943ce5 call dword ptr [0x10947004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947004))), 0x10943cebu);
  /* 10943ceb or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10943cef mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10943cf1 jmp 0x10943cfb */
  goto L_10943cfb;
L_10943cf3:;
  /* 10943cf3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10943cf5 call 0x10943be8 */
  push32(0x10943cfau); f_10943be8();
  /* 10943cfa pop ecx */
  ECX = (pop32());
L_10943cfb:;
  /* 10943cfb push edi */
  push32((uint32_t)(EDI));
  /* 10943cfc call dword ptr [0x109470a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470a8))), 0x10943d02u);
  /* 10943d02 mov eax, esi */
  EAX = (ESI);
  /* 10943d04 pop edi */
  EDI = (pop32());
  /* 10943d05 pop esi */
  ESI = (pop32());
  /* 10943d06 ret  */
  ESPCHK(0x10943ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d07 @ 0x10943d07 (160 bytes, 62 insns) */
void f_10943d07(void) {
  FTRACE(0x10943d07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943d07 mov eax, dword ptr [0x10948a00] */
  EAX = (r32((uint32_t)(0x10948a00)));
  /* 10943d0c cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943d0f je 0x10943da6 */
  if (C.zf) goto L_10943da6;
  /* 10943d15 push esi */
  push32((uint32_t)(ESI));
  /* 10943d16 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10943d1a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10943d1c jne 0x10943d2b */
  if (!C.zf) goto L_10943d2b;
  /* 10943d1e push eax */
  push32((uint32_t)(EAX));
  /* 10943d1f call dword ptr [0x109470ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470ac))), 0x10943d25u);
  /* 10943d25 mov esi, eax */
  ESI = (EAX);
  /* 10943d27 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10943d29 je 0x10943d97 */
  if (C.zf) goto L_10943d97;
L_10943d2b:;
  /* 10943d2b mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10943d2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943d30 je 0x10943d39 */
  if (C.zf) goto L_10943d39;
  /* 10943d32 push eax */
  push32((uint32_t)(EAX));
  /* 10943d33 call 0x109448e2 */
  push32(0x10943d38u); f_109448e2();
  /* 10943d38 pop ecx */
  ECX = (pop32());
L_10943d39:;
  /* 10943d39 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10943d3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943d3e je 0x10943d47 */
  if (C.zf) goto L_10943d47;
  /* 10943d40 push eax */
  push32((uint32_t)(EAX));
  /* 10943d41 call 0x109448e2 */
  push32(0x10943d46u); f_109448e2();
  /* 10943d46 pop ecx */
  ECX = (pop32());
L_10943d47:;
  /* 10943d47 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10943d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943d4c je 0x10943d55 */
  if (C.zf) goto L_10943d55;
  /* 10943d4e push eax */
  push32((uint32_t)(EAX));
  /* 10943d4f call 0x109448e2 */
  push32(0x10943d54u); f_109448e2();
  /* 10943d54 pop ecx */
  ECX = (pop32());
L_10943d55:;
  /* 10943d55 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10943d58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943d5a je 0x10943d63 */
  if (C.zf) goto L_10943d63;
  /* 10943d5c push eax */
  push32((uint32_t)(EAX));
  /* 10943d5d call 0x109448e2 */
  push32(0x10943d62u); f_109448e2();
  /* 10943d62 pop ecx */
  ECX = (pop32());
L_10943d63:;
  /* 10943d63 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10943d66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943d68 je 0x10943d71 */
  if (C.zf) goto L_10943d71;
  /* 10943d6a push eax */
  push32((uint32_t)(EAX));
  /* 10943d6b call 0x109448e2 */
  push32(0x10943d70u); f_109448e2();
  /* 10943d70 pop ecx */
  ECX = (pop32());
L_10943d71:;
  /* 10943d71 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10943d74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943d76 je 0x10943d7f */
  if (C.zf) goto L_10943d7f;
  /* 10943d78 push eax */
  push32((uint32_t)(EAX));
  /* 10943d79 call 0x109448e2 */
  push32(0x10943d7eu); f_109448e2();
  /* 10943d7e pop ecx */
  ECX = (pop32());
L_10943d7f:;
  /* 10943d7f mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10943d82 cmp eax, 0x10948b80 */
  { uint32_t _a=(EAX),_b=(0x10948b80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943d87 je 0x10943d90 */
  if (C.zf) goto L_10943d90;
  /* 10943d89 push eax */
  push32((uint32_t)(EAX));
  /* 10943d8a call 0x109448e2 */
  push32(0x10943d8fu); f_109448e2();
  /* 10943d8f pop ecx */
  ECX = (pop32());
L_10943d90:;
  /* 10943d90 push esi */
  push32((uint32_t)(ESI));
  /* 10943d91 call 0x109448e2 */
  push32(0x10943d96u); f_109448e2();
  /* 10943d96 pop ecx */
  ECX = (pop32());
L_10943d97:;
  /* 10943d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943d99 push dword ptr [0x10948a00] */
  push32((uint32_t)(r32((uint32_t)(0x10948a00))));
  /* 10943d9f call dword ptr [0x109470a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109470a0))), 0x10943da5u);
  /* 10943da5 pop esi */
  ESI = (pop32());
L_10943da6:;
  /* 10943da6 ret  */
  ESPCHK(0x10943d07u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da7 @ 0x10943da7 (45 bytes, 12 insns) */
void f_10943da7(void) {
  FTRACE(0x10943da7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943da7 mov eax, dword ptr [0x10949694] */
  EAX = (r32((uint32_t)(0x10949694)));
  /* 10943dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943dae je 0x10943db2 */
  if (C.zf) goto L_10943db2;
  /* 10943db0 call eax */
  call_ind((uint32_t)(EAX), 0x10943db2u);
L_10943db2:;
  /* 10943db2 push 0x10948010 */
  push32((uint32_t)(0x10948010u));
  /* 10943db7 push 0x10948008 */
  push32((uint32_t)(0x10948008u));
  /* 10943dbc call 0x10943eab */
  push32(0x10943dc1u); f_10943eab();
  /* 10943dc1 push 0x10948004 */
  push32((uint32_t)(0x10948004u));
  /* 10943dc6 push 0x10948000 */
  push32((uint32_t)(0x10948000u));
  /* 10943dcb call 0x10943eab */
  push32(0x10943dd0u); f_10943eab();
  /* 10943dd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943dd3 ret  */
  ESPCHK(0x10943da7u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10943dd4 (17 bytes, 6 insns) */
void f_10943dd4(void) {
  FTRACE(0x10943dd4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943dd8 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10943ddc call 0x10943df4 */
  push32(0x10943de1u); f_10943df4();
  /* 10943de1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943de4 ret  */
  ESPCHK(0x10943dd4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de5 @ 0x10943de5 (15 bytes, 6 insns) */
void f_10943de5(void) {
  FTRACE(0x10943de5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943de5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10943de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10943deb call 0x10943df4 */
  push32(0x10943df0u); f_10943df4();
  /* 10943df0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10943df3 ret  */
  ESPCHK(0x10943de5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003df4 @ 0x10943df4 (163 bytes, 53 insns) */
void f_10943df4(void) {
  FTRACE(0x10943df4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943df4 push edi */
  push32((uint32_t)(EDI));
  /* 10943df5 call 0x10943e99 */
  push32(0x10943dfau); f_10943e99();
  /* 10943dfa push 1 */
  push32((uint32_t)(0x1u));
  /* 10943dfc pop edi */
  EDI = (pop32());
  /* 10943dfd cmp dword ptr [0x10949178], edi */
  { uint32_t _a=(r32((uint32_t)(0x10949178))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943e03 jne 0x10943e16 */
  if (!C.zf) goto L_10943e16;
  /* 10943e05 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10943e09 call dword ptr [0x10947088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947088))), 0x10943e0fu);
  /* 10943e0f push eax */
  push32((uint32_t)(EAX));
  /* 10943e10 call dword ptr [0x1094708c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094708c))), 0x10943e16u);
L_10943e16:;
  /* 10943e16 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943e1b push ebx */
  push32((uint32_t)(EBX));
  /* 10943e1c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10943e20 mov dword ptr [0x10949174], edi */
  w32((uint32_t)(0x10949174), (EDI));
  /* 10943e26 mov byte ptr [0x10949170], bl */
  w8((uint32_t)(0x10949170), (BL));
  /* 10943e2c jne 0x10943e6a */
  if (!C.zf) goto L_10943e6a;
  /* 10943e2e mov eax, dword ptr [0x10949690] */
  EAX = (r32((uint32_t)(0x10949690)));
  /* 10943e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943e35 je 0x10943e59 */
  if (C.zf) goto L_10943e59;
  /* 10943e37 mov ecx, dword ptr [0x1094968c] */
  ECX = (r32((uint32_t)(0x1094968c)));
  /* 10943e3d push esi */
  push32((uint32_t)(ESI));
  /* 10943e3e lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10943e41 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943e43 jb 0x10943e58 */
  if (C.cf) goto L_10943e58;
L_10943e45:;
  /* 10943e45 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10943e47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943e49 je 0x10943e4d */
  if (C.zf) goto L_10943e4d;
  /* 10943e4b call eax */
  call_ind((uint32_t)(EAX), 0x10943e4du);
L_10943e4d:;
  /* 10943e4d sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10943e50 cmp esi, dword ptr [0x10949690] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10949690))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943e56 jae 0x10943e45 */
  if (!C.cf) goto L_10943e45;
L_10943e58:;
  /* 10943e58 pop esi */
  ESI = (pop32());
L_10943e59:;
  /* 10943e59 push 0x10948018 */
  push32((uint32_t)(0x10948018u));
  /* 10943e5e push 0x10948014 */
  push32((uint32_t)(0x10948014u));
  /* 10943e63 call 0x10943eab */
  push32(0x10943e68u); f_10943eab();
  /* 10943e68 pop ecx */
  ECX = (pop32());
  /* 10943e69 pop ecx */
  ECX = (pop32());
L_10943e6a:;
  /* 10943e6a push 0x10948020 */
  push32((uint32_t)(0x10948020u));
  /* 10943e6f push 0x1094801c */
  push32((uint32_t)(0x1094801cu));
  /* 10943e74 call 0x10943eab */
  push32(0x10943e79u); f_10943eab();
  /* 10943e79 pop ecx */
  ECX = (pop32());
  /* 10943e7a pop ecx */
  ECX = (pop32());
  /* 10943e7b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10943e7d pop ebx */
  EBX = (pop32());
  /* 10943e7e je 0x10943e87 */
  if (C.zf) goto L_10943e87;
  /* 10943e80 call 0x10943ea2 */
  push32(0x10943e85u); f_10943ea2();
  /* 10943e85 pop edi */
  EDI = (pop32());
  /* 10943e86 ret  */
  ESPCHK(0x10943df4u, _esp0);
  ESP += 4; return;
L_10943e87:;
  /* 10943e87 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10943e8b mov dword ptr [0x10949178], edi */
  w32((uint32_t)(0x10949178), (EDI));
  /* 10943e91 call dword ptr [0x10947098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947098))), 0x10943e97u);
  /* 10943e97 pop edi */
  EDI = (pop32());
  /* 10943e98 ret  */
  ESPCHK(0x10943df4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e99 @ 0x10943e99 (9 bytes, 4 insns) */
void f_10943e99(void) {
  FTRACE(0x10943e99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943e99 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10943e9b call 0x1094486c */
  push32(0x10943ea0u); f_1094486c();
  /* 10943ea0 pop ecx */
  ECX = (pop32());
  /* 10943ea1 ret  */
  ESPCHK(0x10943e99u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ea2 @ 0x10943ea2 (9 bytes, 4 insns) */
void f_10943ea2(void) {
  FTRACE(0x10943ea2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943ea2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10943ea4 call 0x109448cd */
  push32(0x10943ea9u); f_109448cd();
  /* 10943ea9 pop ecx */
  ECX = (pop32());
  /* 10943eaa ret  */
  ESPCHK(0x10943ea2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eab @ 0x10943eab (26 bytes, 12 insns) */
void f_10943eab(void) {
  FTRACE(0x10943eabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943eab push esi */
  push32((uint32_t)(ESI));
  /* 10943eac mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10943eb0:;
  /* 10943eb0 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943eb4 jae 0x10943ec3 */
  if (!C.cf) goto L_10943ec3;
  /* 10943eb6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10943eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943eba je 0x10943ebe */
  if (C.zf) goto L_10943ebe;
  /* 10943ebc call eax */
  call_ind((uint32_t)(EAX), 0x10943ebeu);
L_10943ebe:;
  /* 10943ebe add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10943ec1 jmp 0x10943eb0 */
  goto L_10943eb0;
L_10943ec3:;
  /* 10943ec3 pop esi */
  ESI = (pop32());
  /* 10943ec4 ret  */
  ESPCHK(0x10943eabu, _esp0);
  ESP += 4; return;
}

/* FUN_10003ec5 @ 0x10943ec5 (444 bytes, 150 insns) */
void f_10943ec5(void) {
  FTRACE(0x10943ec5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10943ec5 push ebp */
  push32((uint32_t)(EBP));
  /* 10943ec6 mov ebp, esp */
  EBP = (ESP);
  /* 10943ec8 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10943ecb push ebx */
  push32((uint32_t)(EBX));
  /* 10943ecc push esi */
  push32((uint32_t)(ESI));
  /* 10943ecd push edi */
  push32((uint32_t)(EDI));
  /* 10943ece push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10943ed3 call 0x1094492a */
  push32(0x10943ed8u); f_1094492a();
  /* 10943ed8 mov esi, eax */
  ESI = (EAX);
  /* 10943eda pop ecx */
  ECX = (pop32());
  /* 10943edb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10943edd jne 0x10943ee7 */
  if (!C.zf) goto L_10943ee7;
  /* 10943edf push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10943ee1 call 0x10943be8 */
  push32(0x10943ee6u); f_10943be8();
  /* 10943ee6 pop ecx */
  ECX = (pop32());
L_10943ee7:;
  /* 10943ee7 mov dword ptr [0x10949580], esi */
  w32((uint32_t)(0x10949580), (ESI));
  /* 10943eed mov dword ptr [0x10949680], 0x20 */
  w32((uint32_t)(0x10949680), (0x20u));
  /* 10943ef7 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10943efd:;
  /* 10943efd cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943eff jae 0x10943f1f */
  if (!C.cf) goto L_10943f1f;
  /* 10943f01 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10943f05 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10943f08 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10943f0c mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10943f10 mov eax, dword ptr [0x10949580] */
  EAX = (r32((uint32_t)(0x10949580)));
  /* 10943f15 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10943f18 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10943f1d jmp 0x10943efd */
  goto L_10943efd;
L_10943f1f:;
  /* 10943f1f lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10943f22 push eax */
  push32((uint32_t)(EAX));
  /* 10943f23 call dword ptr [0x10947084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947084))), 0x10943f29u);
  /* 10943f29 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10943f2e je 0x10944005 */
  if (C.zf) goto L_10944005;
  /* 10943f34 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10943f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943f39 je 0x10944005 */
  if (C.zf) goto L_10944005;
  /* 10943f3f mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10943f41 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10943f44 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10943f47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10943f4a mov eax, 0x800 */
  EAX = (0x800u);
  /* 10943f4f cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943f51 jl 0x10943f55 */
  if ((C.sf!=C.of)) goto L_10943f55;
  /* 10943f53 mov edi, eax */
  EDI = (EAX);
L_10943f55:;
  /* 10943f55 cmp dword ptr [0x10949680], edi */
  { uint32_t _a=(r32((uint32_t)(0x10949680))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943f5b jge 0x10943fb3 */
  if ((C.sf==C.of)) goto L_10943fb3;
  /* 10943f5d mov esi, 0x10949584 */
  ESI = (0x10949584u);
L_10943f62:;
  /* 10943f62 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10943f67 call 0x1094492a */
  push32(0x10943f6cu); f_1094492a();
  /* 10943f6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943f6e pop ecx */
  ECX = (pop32());
  /* 10943f6f je 0x10943fad */
  if (C.zf) goto L_10943fad;
  /* 10943f71 add dword ptr [0x10949680], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10949680))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10949680), (_r)); fl_add(_a,_b,_r,32); }
  /* 10943f78 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10943f7a lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10943f80:;
  /* 10943f80 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943f82 jae 0x10943fa0 */
  if (!C.cf) goto L_10943fa0;
  /* 10943f84 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10943f88 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10943f8b and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10943f8f mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10943f93 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10943f95 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10943f98 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10943f9e jmp 0x10943f80 */
  goto L_10943f80;
L_10943fa0:;
  /* 10943fa0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10943fa3 cmp dword ptr [0x10949680], edi */
  { uint32_t _a=(r32((uint32_t)(0x10949680))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943fa9 jl 0x10943f62 */
  if ((C.sf!=C.of)) goto L_10943f62;
  /* 10943fab jmp 0x10943fb3 */
  goto L_10943fb3;
L_10943fad:;
  /* 10943fad mov edi, dword ptr [0x10949680] */
  EDI = (r32((uint32_t)(0x10949680)));
L_10943fb3:;
  /* 10943fb3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10943fb5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10943fb7 jle 0x10944005 */
  if ((C.zf||C.sf!=C.of)) goto L_10944005;
L_10943fb9:;
  /* 10943fb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10943fbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10943fbe cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10943fc1 je 0x10943ffb */
  if (C.zf) goto L_10943ffb;
  /* 10943fc3 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10943fc5 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10943fc7 je 0x10943ffb */
  if (C.zf) goto L_10943ffb;
  /* 10943fc9 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10943fcb jne 0x10943fd8 */
  if (!C.zf) goto L_10943fd8;
  /* 10943fcd push ecx */
  push32((uint32_t)(ECX));
  /* 10943fce call dword ptr [0x1094707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094707c))), 0x10943fd4u);
  /* 10943fd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10943fd6 je 0x10943ffb */
  if (C.zf) goto L_10943ffb;
L_10943fd8:;
  /* 10943fd8 mov ecx, esi */
  ECX = (ESI);
  /* 10943fda mov eax, esi */
  EAX = (ESI);
  /* 10943fdc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10943fdf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10943fe2 mov ecx, dword ptr [ecx*4 + 0x10949580] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10949580)));
  /* 10943fe9 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10943fec lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10943fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10943ff2 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10943ff4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10943ff6 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10943ff8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10943ffb:;
  /* 10943ffb add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10943fff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10944000 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10944001 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944003 jl 0x10943fb9 */
  if ((C.sf!=C.of)) goto L_10943fb9;
L_10944005:;
  /* 10944005 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10944007:;
  /* 10944007 mov ecx, dword ptr [0x10949580] */
  ECX = (r32((uint32_t)(0x10949580)));
  /* 1094400d lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10944010 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944014 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10944017 jne 0x10944066 */
  if (!C.zf) goto L_10944066;
  /* 10944019 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1094401b mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 1094401f jne 0x10944026 */
  if (!C.zf) goto L_10944026;
  /* 10944021 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10944023 pop eax */
  EAX = (pop32());
  /* 10944024 jmp 0x10944030 */
  goto L_10944030;
L_10944026:;
  /* 10944026 mov eax, ebx */
  EAX = (EBX);
  /* 10944028 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10944029 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1094402b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094402d add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10944030:;
  /* 10944030 push eax */
  push32((uint32_t)(EAX));
  /* 10944031 call dword ptr [0x10947080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947080))), 0x10944037u);
  /* 10944037 mov edi, eax */
  EDI = (EAX);
  /* 10944039 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094403c je 0x10944055 */
  if (C.zf) goto L_10944055;
  /* 1094403e push edi */
  push32((uint32_t)(EDI));
  /* 1094403f call dword ptr [0x1094707c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094707c))), 0x10944045u);
  /* 10944045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10944047 je 0x10944055 */
  if (C.zf) goto L_10944055;
  /* 10944049 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1094404e mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10944050 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944053 jne 0x1094405b */
  if (!C.zf) goto L_1094405b;
L_10944055:;
  /* 10944055 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10944059 jmp 0x1094406a */
  goto L_1094406a;
L_1094405b:;
  /* 1094405b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094405e jne 0x1094406a */
  if (!C.zf) goto L_1094406a;
  /* 10944060 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10944064 jmp 0x1094406a */
  goto L_1094406a;
L_10944066:;
  /* 10944066 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_1094406a:;
  /* 1094406a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1094406b cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094406e jl 0x10944007 */
  if ((C.sf!=C.of)) goto L_10944007;
  /* 10944070 push dword ptr [0x10949680] */
  push32((uint32_t)(r32((uint32_t)(0x10949680))));
  /* 10944076 call dword ptr [0x10947090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947090))), 0x1094407cu);
  /* 1094407c pop edi */
  EDI = (pop32());
  /* 1094407d pop esi */
  ESI = (pop32());
  /* 1094407e pop ebx */
  EBX = (pop32());
  /* 1094407f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10944080 ret  */
  ESPCHK(0x10943ec5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004081 @ 0x10944081 (84 bytes, 33 insns) */
void f_10944081(void) {
  FTRACE(0x10944081u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944081 push ebx */
  push32((uint32_t)(EBX));
  /* 10944082 push esi */
  push32((uint32_t)(ESI));
  /* 10944083 push edi */
  push32((uint32_t)(EDI));
  /* 10944084 mov esi, 0x10949580 */
  ESI = (0x10949580u);
L_10944089:;
  /* 10944089 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1094408b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094408d je 0x109440c6 */
  if (C.zf) goto L_109440c6;
  /* 1094408f mov edi, eax */
  EDI = (EAX);
  /* 10944091 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944096 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944098 jae 0x109440bb */
  if (!C.cf) goto L_109440bb;
  /* 1094409a lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_1094409d:;
  /* 1094409d cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109440a1 je 0x109440aa */
  if (C.zf) goto L_109440aa;
  /* 109440a3 push ebx */
  push32((uint32_t)(EBX));
  /* 109440a4 call dword ptr [0x10947074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947074))), 0x109440aau);
L_109440aa:;
  /* 109440aa mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 109440ac add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109440af add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109440b4 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109440b7 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109440b9 jb 0x1094409d */
  if (C.cf) goto L_1094409d;
L_109440bb:;
  /* 109440bb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 109440bd call 0x109448e2 */
  push32(0x109440c2u); f_109448e2();
  /* 109440c2 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 109440c5 pop ecx */
  ECX = (pop32());
L_109440c6:;
  /* 109440c6 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109440c9 cmp esi, 0x10949680 */
  { uint32_t _a=(ESI),_b=(0x10949680u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109440cf jl 0x10944089 */
  if ((C.sf!=C.of)) goto L_10944089;
  /* 109440d1 pop edi */
  EDI = (pop32());
  /* 109440d2 pop esi */
  ESI = (pop32());
  /* 109440d3 pop ebx */
  EBX = (pop32());
  /* 109440d4 ret  */
  ESPCHK(0x10944081u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d5 @ 0x109440d5 (185 bytes, 71 insns) */
void f_109440d5(void) {
  FTRACE(0x109440d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109440d5 push ebx */
  push32((uint32_t)(EBX));
  /* 109440d6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109440d8 cmp dword ptr [0x10949688], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10949688))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109440de push esi */
  push32((uint32_t)(ESI));
  /* 109440df push edi */
  push32((uint32_t)(EDI));
  /* 109440e0 jne 0x109440e7 */
  if (!C.zf) goto L_109440e7;
  /* 109440e2 call 0x10944f03 */
  push32(0x109440e7u); f_10944f03();
L_109440e7:;
  /* 109440e7 mov esi, dword ptr [0x10949128] */
  ESI = (r32((uint32_t)(0x10949128)));
  /* 109440ed xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_109440ef:;
  /* 109440ef mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109440f1 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109440f3 je 0x10944107 */
  if (C.zf) goto L_10944107;
  /* 109440f5 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109440f7 je 0x109440fa */
  if (C.zf) goto L_109440fa;
  /* 109440f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_109440fa:;
  /* 109440fa push esi */
  push32((uint32_t)(ESI));
  /* 109440fb call 0x10944ab0 */
  push32(0x10944100u); f_10944ab0();
  /* 10944100 pop ecx */
  ECX = (pop32());
  /* 10944101 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10944105 jmp 0x109440ef */
  goto L_109440ef;
L_10944107:;
  /* 10944107 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 1094410e push eax */
  push32((uint32_t)(EAX));
  /* 1094410f call 0x1094492a */
  push32(0x10944114u); f_1094492a();
  /* 10944114 mov esi, eax */
  ESI = (EAX);
  /* 10944116 pop ecx */
  ECX = (pop32());
  /* 10944117 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944119 mov dword ptr [0x10949158], esi */
  w32((uint32_t)(0x10949158), (ESI));
  /* 1094411f jne 0x10944129 */
  if (!C.zf) goto L_10944129;
  /* 10944121 push 9 */
  push32((uint32_t)(0x9u));
  /* 10944123 call 0x10943be8 */
  push32(0x10944128u); f_10943be8();
  /* 10944128 pop ecx */
  ECX = (pop32());
L_10944129:;
  /* 10944129 mov edi, dword ptr [0x10949128] */
  EDI = (r32((uint32_t)(0x10949128)));
  /* 1094412f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944131 je 0x1094416c */
  if (C.zf) goto L_1094416c;
  /* 10944133 push ebp */
  push32((uint32_t)(EBP));
L_10944134:;
  /* 10944134 push edi */
  push32((uint32_t)(EDI));
  /* 10944135 call 0x10944ab0 */
  push32(0x1094413au); f_10944ab0();
  /* 1094413a mov ebp, eax */
  EBP = (EAX);
  /* 1094413c pop ecx */
  ECX = (pop32());
  /* 1094413d inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1094413e cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944141 je 0x10944165 */
  if (C.zf) goto L_10944165;
  /* 10944143 push ebp */
  push32((uint32_t)(EBP));
  /* 10944144 call 0x1094492a */
  push32(0x10944149u); f_1094492a();
  /* 10944149 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094414b pop ecx */
  ECX = (pop32());
  /* 1094414c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1094414e jne 0x10944158 */
  if (!C.zf) goto L_10944158;
  /* 10944150 push 9 */
  push32((uint32_t)(0x9u));
  /* 10944152 call 0x10943be8 */
  push32(0x10944157u); f_10943be8();
  /* 10944157 pop ecx */
  ECX = (pop32());
L_10944158:;
  /* 10944158 push edi */
  push32((uint32_t)(EDI));
  /* 10944159 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1094415b call 0x109449c0 */
  push32(0x10944160u); f_109449c0();
  /* 10944160 pop ecx */
  ECX = (pop32());
  /* 10944161 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944164 pop ecx */
  ECX = (pop32());
L_10944165:;
  /* 10944165 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944167 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944169 jne 0x10944134 */
  if (!C.zf) goto L_10944134;
  /* 1094416b pop ebp */
  EBP = (pop32());
L_1094416c:;
  /* 1094416c push dword ptr [0x10949128] */
  push32((uint32_t)(r32((uint32_t)(0x10949128))));
  /* 10944172 call 0x109448e2 */
  push32(0x10944177u); f_109448e2();
  /* 10944177 pop ecx */
  ECX = (pop32());
  /* 10944178 mov dword ptr [0x10949128], ebx */
  w32((uint32_t)(0x10949128), (EBX));
  /* 1094417e mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10944180 pop edi */
  EDI = (pop32());
  /* 10944181 pop esi */
  ESI = (pop32());
  /* 10944182 mov dword ptr [0x10949684], 1 */
  w32((uint32_t)(0x10949684), (0x1u));
  /* 1094418c pop ebx */
  EBX = (pop32());
  /* 1094418d ret  */
  ESPCHK(0x109440d5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000418e @ 0x1094418e (153 bytes, 62 insns) */
void f_1094418e(void) {
  FTRACE(0x1094418eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1094418e push ebp */
  push32((uint32_t)(EBP));
  /* 1094418f mov ebp, esp */
  EBP = (ESP);
  /* 10944191 push ecx */
  push32((uint32_t)(ECX));
  /* 10944192 push ecx */
  push32((uint32_t)(ECX));
  /* 10944193 push ebx */
  push32((uint32_t)(EBX));
  /* 10944194 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10944196 cmp dword ptr [0x10949688], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10949688))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094419c push esi */
  push32((uint32_t)(ESI));
  /* 1094419d push edi */
  push32((uint32_t)(EDI));
  /* 1094419e jne 0x109441a5 */
  if (!C.zf) goto L_109441a5;
  /* 109441a0 call 0x10944f03 */
  push32(0x109441a5u); f_10944f03();
L_109441a5:;
  /* 109441a5 mov esi, 0x1094917c */
  ESI = (0x1094917cu);
  /* 109441aa push 0x104 */
  push32((uint32_t)(0x104u));
  /* 109441af push esi */
  push32((uint32_t)(ESI));
  /* 109441b0 push ebx */
  push32((uint32_t)(EBX));
  /* 109441b1 call dword ptr [0x10947070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947070))), 0x109441b7u);
  /* 109441b7 mov eax, dword ptr [0x10949698] */
  EAX = (r32((uint32_t)(0x10949698)));
  /* 109441bc mov dword ptr [0x10949168], esi */
  w32((uint32_t)(0x10949168), (ESI));
  /* 109441c2 mov edi, esi */
  EDI = (ESI);
  /* 109441c4 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109441c6 je 0x109441ca */
  if (C.zf) goto L_109441ca;
  /* 109441c8 mov edi, eax */
  EDI = (EAX);
L_109441ca:;
  /* 109441ca lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109441cd push eax */
  push32((uint32_t)(EAX));
  /* 109441ce lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 109441d1 push eax */
  push32((uint32_t)(EAX));
  /* 109441d2 push ebx */
  push32((uint32_t)(EBX));
  /* 109441d3 push ebx */
  push32((uint32_t)(EBX));
  /* 109441d4 push edi */
  push32((uint32_t)(EDI));
  /* 109441d5 call 0x10944227 */
  push32(0x109441dau); f_10944227();
  /* 109441da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 109441dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109441e0 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 109441e3 push eax */
  push32((uint32_t)(EAX));
  /* 109441e4 call 0x1094492a */
  push32(0x109441e9u); f_1094492a();
  /* 109441e9 mov esi, eax */
  ESI = (EAX);
  /* 109441eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109441ee cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109441f0 jne 0x109441fa */
  if (!C.zf) goto L_109441fa;
  /* 109441f2 push 8 */
  push32((uint32_t)(0x8u));
  /* 109441f4 call 0x10943be8 */
  push32(0x109441f9u); f_10943be8();
  /* 109441f9 pop ecx */
  ECX = (pop32());
L_109441fa:;
  /* 109441fa lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 109441fd push eax */
  push32((uint32_t)(EAX));
  /* 109441fe lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10944201 push eax */
  push32((uint32_t)(EAX));
  /* 10944202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10944205 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10944208 push eax */
  push32((uint32_t)(EAX));
  /* 10944209 push esi */
  push32((uint32_t)(ESI));
  /* 1094420a push edi */
  push32((uint32_t)(EDI));
  /* 1094420b call 0x10944227 */
  push32(0x10944210u); f_10944227();
  /* 10944210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10944213 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10944216 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10944217 mov dword ptr [0x10949150], esi */
  w32((uint32_t)(0x10949150), (ESI));
  /* 1094421d pop edi */
  EDI = (pop32());
  /* 1094421e pop esi */
  ESI = (pop32());
  /* 1094421f mov dword ptr [0x1094914c], eax */
  w32((uint32_t)(0x1094914c), (EAX));
  /* 10944224 pop ebx */
  EBX = (pop32());
  /* 10944225 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10944226 ret  */
  ESPCHK(0x1094418eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004227 @ 0x10944227 (436 bytes, 187 insns) */
void f_10944227(void) {
  FTRACE(0x10944227u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944227 push ebp */
  push32((uint32_t)(EBP));
  /* 10944228 mov ebp, esp */
  EBP = (ESP);
  /* 1094422a mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1094422d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10944230 push ebx */
  push32((uint32_t)(EBX));
  /* 10944231 push esi */
  push32((uint32_t)(ESI));
  /* 10944232 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10944235 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10944238 push edi */
  push32((uint32_t)(EDI));
  /* 10944239 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1094423c mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10944242 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10944245 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10944247 je 0x10944251 */
  if (C.zf) goto L_10944251;
  /* 10944249 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1094424b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1094424e mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10944251:;
  /* 10944251 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944254 jne 0x1094429a */
  if (!C.zf) goto L_1094429a;
L_10944256:;
  /* 10944256 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10944259 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1094425a cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1094425d je 0x10944288 */
  if (C.zf) goto L_10944288;
  /* 1094425f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10944261 je 0x10944288 */
  if (C.zf) goto L_10944288;
  /* 10944263 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10944266 test byte ptr [edx + 0x10949461], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10949461)))&(0x4u); fl_logic(_r,8); }
  /* 1094426d je 0x1094427b */
  if (C.zf) goto L_1094427b;
  /* 1094426f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10944271 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10944273 je 0x1094427b */
  if (C.zf) goto L_1094427b;
  /* 10944275 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10944277 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10944279 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1094427a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1094427b:;
  /* 1094427b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1094427d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1094427f je 0x10944256 */
  if (C.zf) goto L_10944256;
  /* 10944281 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10944283 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10944285 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10944286 jmp 0x10944256 */
  goto L_10944256;
L_10944288:;
  /* 10944288 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1094428a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1094428c je 0x10944292 */
  if (C.zf) goto L_10944292;
  /* 1094428e and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10944291 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10944292:;
  /* 10944292 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944295 jne 0x109442dd */
  if (!C.zf) goto L_109442dd;
  /* 10944297 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944298 jmp 0x109442dd */
  goto L_109442dd;
L_1094429a:;
  /* 1094429a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1094429c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1094429e je 0x109442a5 */
  if (C.zf) goto L_109442a5;
  /* 109442a0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109442a2 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 109442a4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109442a5:;
  /* 109442a5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109442a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109442a8 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 109442ab test byte ptr [ebx + 0x10949461], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10949461)))&(0x4u); fl_logic(_r,8); }
  /* 109442b2 je 0x109442c0 */
  if (C.zf) goto L_109442c0;
  /* 109442b4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109442b6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109442b8 je 0x109442bf */
  if (C.zf) goto L_109442bf;
  /* 109442ba mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 109442bc mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 109442be inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109442bf:;
  /* 109442bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_109442c0:;
  /* 109442c0 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109442c3 je 0x109442ce */
  if (C.zf) goto L_109442ce;
  /* 109442c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109442c7 je 0x109442d2 */
  if (C.zf) goto L_109442d2;
  /* 109442c9 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109442cc jne 0x1094429a */
  if (!C.zf) goto L_1094429a;
L_109442ce:;
  /* 109442ce test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109442d0 jne 0x109442d5 */
  if (!C.zf) goto L_109442d5;
L_109442d2:;
  /* 109442d2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 109442d3 jmp 0x109442dd */
  goto L_109442dd;
L_109442d5:;
  /* 109442d5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109442d7 je 0x109442dd */
  if (C.zf) goto L_109442dd;
  /* 109442d9 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_109442dd:;
  /* 109442dd and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_109442e1:;
  /* 109442e1 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109442e4 je 0x109443ca */
  if (C.zf) goto L_109443ca;
L_109442ea:;
  /* 109442ea mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109442ec cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109442ef je 0x109442f6 */
  if (C.zf) goto L_109442f6;
  /* 109442f1 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109442f4 jne 0x109442f9 */
  if (!C.zf) goto L_109442f9;
L_109442f6:;
  /* 109442f6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109442f7 jmp 0x109442ea */
  goto L_109442ea;
L_109442f9:;
  /* 109442f9 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109442fc je 0x109443ca */
  if (C.zf) goto L_109443ca;
  /* 10944302 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10944304 je 0x1094430e */
  if (C.zf) goto L_1094430e;
  /* 10944306 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10944308 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1094430b mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_1094430e:;
  /* 1094430e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10944311 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10944313:;
  /* 10944313 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 1094431a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1094431c:;
  /* 1094431c cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1094431f jne 0x10944325 */
  if (!C.zf) goto L_10944325;
  /* 10944321 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944322 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10944323 jmp 0x1094431c */
  goto L_1094431c;
L_10944325:;
  /* 10944325 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944328 jne 0x10944356 */
  if (!C.zf) goto L_10944356;
  /* 1094432a test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 1094432d jne 0x10944354 */
  if (!C.zf) goto L_10944354;
  /* 1094432f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10944331 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944334 je 0x10944343 */
  if (C.zf) goto L_10944343;
  /* 10944336 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1094433a lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 1094433d jne 0x10944343 */
  if (!C.zf) goto L_10944343;
  /* 1094433f mov eax, edx */
  EAX = (EDX);
  /* 10944341 jmp 0x10944346 */
  goto L_10944346;
L_10944343:;
  /* 10944343 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10944346:;
  /* 10944346 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10944349 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1094434b cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094434e sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10944351 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10944354:;
  /* 10944354 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10944356:;
  /* 10944356 mov edx, ebx */
  EDX = (EBX);
  /* 10944358 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10944359 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1094435b je 0x1094436b */
  if (C.zf) goto L_1094436b;
  /* 1094435d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_1094435e:;
  /* 1094435e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10944360 je 0x10944366 */
  if (C.zf) goto L_10944366;
  /* 10944362 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10944365 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10944366:;
  /* 10944366 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10944368 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10944369 jne 0x1094435e */
  if (!C.zf) goto L_1094435e;
L_1094436b:;
  /* 1094436b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1094436d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1094436f je 0x109443bb */
  if (C.zf) goto L_109443bb;
  /* 10944371 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944375 jne 0x10944381 */
  if (!C.zf) goto L_10944381;
  /* 10944377 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1094437a je 0x109443bb */
  if (C.zf) goto L_109443bb;
  /* 1094437c cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1094437f je 0x109443bb */
  if (C.zf) goto L_109443bb;
L_10944381:;
  /* 10944381 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944385 je 0x109443b5 */
  if (C.zf) goto L_109443b5;
  /* 10944387 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10944389 je 0x109443a4 */
  if (C.zf) goto L_109443a4;
  /* 1094438b movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 1094438e test byte ptr [ebx + 0x10949461], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10949461)))&(0x4u); fl_logic(_r,8); }
  /* 10944395 je 0x1094439d */
  if (C.zf) goto L_1094439d;
  /* 10944397 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10944399 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1094439a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1094439b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1094439d:;
  /* 1094439d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1094439f mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 109443a1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 109443a2 jmp 0x109443b3 */
  goto L_109443b3;
L_109443a4:;
  /* 109443a4 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 109443a7 test byte ptr [edx + 0x10949461], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10949461)))&(0x4u); fl_logic(_r,8); }
  /* 109443ae je 0x109443b3 */
  if (C.zf) goto L_109443b3;
  /* 109443b0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109443b1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_109443b3:;
  /* 109443b3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_109443b5:;
  /* 109443b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109443b6 jmp 0x10944313 */
  goto L_10944313;
L_109443bb:;
  /* 109443bb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109443bd je 0x109443c3 */
  if (C.zf) goto L_109443c3;
  /* 109443bf and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 109443c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109443c3:;
  /* 109443c3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109443c5 jmp 0x109442e1 */
  goto L_109442e1;
L_109443ca:;
  /* 109443ca test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109443cc je 0x109443d1 */
  if (C.zf) goto L_109443d1;
  /* 109443ce and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_109443d1:;
  /* 109443d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109443d4 pop edi */
  EDI = (pop32());
  /* 109443d5 pop esi */
  ESI = (pop32());
  /* 109443d6 pop ebx */
  EBX = (pop32());
  /* 109443d7 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 109443d9 pop ebp */
  EBP = (pop32());
  /* 109443da ret  */
  ESPCHK(0x10944227u, _esp0);
  ESP += 4; return;
}

/* FUN_100043db @ 0x109443db (306 bytes, 132 insns) */
void f_109443db(void) {
  FTRACE(0x109443dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109443db push ecx */
  push32((uint32_t)(ECX));
  /* 109443dc push ecx */
  push32((uint32_t)(ECX));
  /* 109443dd mov eax, dword ptr [0x10949280] */
  EAX = (r32((uint32_t)(0x10949280)));
  /* 109443e2 push ebx */
  push32((uint32_t)(EBX));
  /* 109443e3 push ebp */
  push32((uint32_t)(EBP));
  /* 109443e4 mov ebp, dword ptr [0x1094705c] */
  EBP = (r32((uint32_t)(0x1094705c)));
  /* 109443ea push esi */
  push32((uint32_t)(ESI));
  /* 109443eb push edi */
  push32((uint32_t)(EDI));
  /* 109443ec xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109443ee xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 109443f0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 109443f2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109443f4 jne 0x10944429 */
  if (!C.zf) goto L_10944429;
  /* 109443f6 call ebp */
  call_ind((uint32_t)(EBP), 0x109443f8u);
  /* 109443f8 mov esi, eax */
  ESI = (EAX);
  /* 109443fa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109443fc je 0x1094440a */
  if (C.zf) goto L_1094440a;
  /* 109443fe mov dword ptr [0x10949280], 1 */
  w32((uint32_t)(0x10949280), (0x1u));
  /* 10944408 jmp 0x10944432 */
  goto L_10944432;
L_1094440a:;
  /* 1094440a call dword ptr [0x1094706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094706c))), 0x10944410u);
  /* 10944410 mov edi, eax */
  EDI = (EAX);
  /* 10944412 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944414 je 0x10944504 */
  if (C.zf) goto L_10944504;
  /* 1094441a mov dword ptr [0x10949280], 2 */
  w32((uint32_t)(0x10949280), (0x2u));
  /* 10944424 jmp 0x109444b8 */
  goto L_109444b8;
L_10944429:;
  /* 10944429 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094442c jne 0x109444b3 */
  if (!C.zf) goto L_109444b3;
L_10944432:;
  /* 10944432 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944434 jne 0x10944442 */
  if (!C.zf) goto L_10944442;
  /* 10944436 call ebp */
  call_ind((uint32_t)(EBP), 0x10944438u);
  /* 10944438 mov esi, eax */
  ESI = (EAX);
  /* 1094443a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094443c je 0x10944504 */
  if (C.zf) goto L_10944504;
L_10944442:;
  /* 10944442 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10944445 mov eax, esi */
  EAX = (ESI);
  /* 10944447 je 0x10944457 */
  if (C.zf) goto L_10944457;
L_10944449:;
  /* 10944449 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1094444a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1094444b cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1094444e jne 0x10944449 */
  if (!C.zf) goto L_10944449;
  /* 10944450 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944451 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944452 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10944455 jne 0x10944449 */
  if (!C.zf) goto L_10944449;
L_10944457:;
  /* 10944457 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944459 mov edi, dword ptr [0x10947064] */
  EDI = (r32((uint32_t)(0x10947064)));
  /* 1094445f sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10944461 push ebx */
  push32((uint32_t)(EBX));
  /* 10944462 push ebx */
  push32((uint32_t)(EBX));
  /* 10944463 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944464 push ebx */
  push32((uint32_t)(EBX));
  /* 10944465 push ebx */
  push32((uint32_t)(EBX));
  /* 10944466 push eax */
  push32((uint32_t)(EAX));
  /* 10944467 push esi */
  push32((uint32_t)(ESI));
  /* 10944468 push ebx */
  push32((uint32_t)(EBX));
  /* 10944469 push ebx */
  push32((uint32_t)(EBX));
  /* 1094446a mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 1094446e call edi */
  call_ind((uint32_t)(EDI), 0x10944470u);
  /* 10944470 mov ebp, eax */
  EBP = (EAX);
  /* 10944472 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944474 je 0x109444a8 */
  if (C.zf) goto L_109444a8;
  /* 10944476 push ebp */
  push32((uint32_t)(EBP));
  /* 10944477 call 0x1094492a */
  push32(0x1094447cu); f_1094492a();
  /* 1094447c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094447e pop ecx */
  ECX = (pop32());
  /* 1094447f mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10944483 je 0x109444a8 */
  if (C.zf) goto L_109444a8;
  /* 10944485 push ebx */
  push32((uint32_t)(EBX));
  /* 10944486 push ebx */
  push32((uint32_t)(EBX));
  /* 10944487 push ebp */
  push32((uint32_t)(EBP));
  /* 10944488 push eax */
  push32((uint32_t)(EAX));
  /* 10944489 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 1094448d push esi */
  push32((uint32_t)(ESI));
  /* 1094448e push ebx */
  push32((uint32_t)(EBX));
  /* 1094448f push ebx */
  push32((uint32_t)(EBX));
  /* 10944490 call edi */
  call_ind((uint32_t)(EDI), 0x10944492u);
  /* 10944492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10944494 jne 0x109444a4 */
  if (!C.zf) goto L_109444a4;
  /* 10944496 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1094449a call 0x109448e2 */
  push32(0x1094449fu); f_109448e2();
  /* 1094449f pop ecx */
  ECX = (pop32());
  /* 109444a0 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_109444a4:;
  /* 109444a4 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_109444a8:;
  /* 109444a8 push esi */
  push32((uint32_t)(ESI));
  /* 109444a9 call dword ptr [0x10947068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947068))), 0x109444afu);
  /* 109444af mov eax, ebx */
  EAX = (EBX);
  /* 109444b1 jmp 0x10944506 */
  goto L_10944506;
L_109444b3:;
  /* 109444b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109444b6 jne 0x10944504 */
  if (!C.zf) goto L_10944504;
L_109444b8:;
  /* 109444b8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109444ba jne 0x109444c8 */
  if (!C.zf) goto L_109444c8;
  /* 109444bc call dword ptr [0x1094706c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094706c))), 0x109444c2u);
  /* 109444c2 mov edi, eax */
  EDI = (EAX);
  /* 109444c4 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109444c6 je 0x10944504 */
  if (C.zf) goto L_10944504;
L_109444c8:;
  /* 109444c8 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109444ca mov eax, edi */
  EAX = (EDI);
  /* 109444cc je 0x109444d8 */
  if (C.zf) goto L_109444d8;
L_109444ce:;
  /* 109444ce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109444cf cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109444d1 jne 0x109444ce */
  if (!C.zf) goto L_109444ce;
  /* 109444d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109444d4 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109444d6 jne 0x109444ce */
  if (!C.zf) goto L_109444ce;
L_109444d8:;
  /* 109444d8 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109444da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109444db mov ebp, eax */
  EBP = (EAX);
  /* 109444dd push ebp */
  push32((uint32_t)(EBP));
  /* 109444de call 0x1094492a */
  push32(0x109444e3u); f_1094492a();
  /* 109444e3 mov esi, eax */
  ESI = (EAX);
  /* 109444e5 pop ecx */
  ECX = (pop32());
  /* 109444e6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109444e8 jne 0x109444ee */
  if (!C.zf) goto L_109444ee;
  /* 109444ea xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 109444ec jmp 0x109444f9 */
  goto L_109444f9;
L_109444ee:;
  /* 109444ee push ebp */
  push32((uint32_t)(EBP));
  /* 109444ef push edi */
  push32((uint32_t)(EDI));
  /* 109444f0 push esi */
  push32((uint32_t)(ESI));
  /* 109444f1 call 0x10944f20 */
  push32(0x109444f6u); f_10944f20();
  /* 109444f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109444f9:;
  /* 109444f9 push edi */
  push32((uint32_t)(EDI));
  /* 109444fa call dword ptr [0x10947078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947078))), 0x10944500u);
  /* 10944500 mov eax, esi */
  EAX = (ESI);
  /* 10944502 jmp 0x10944506 */
  goto L_10944506;
L_10944504:;
  /* 10944504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10944506:;
  /* 10944506 pop edi */
  EDI = (pop32());
  /* 10944507 pop esi */
  ESI = (pop32());
  /* 10944508 pop ebp */
  EBP = (pop32());
  /* 10944509 pop ebx */
  EBX = (pop32());
  /* 1094450a pop ecx */
  ECX = (pop32());
  /* 1094450b pop ecx */
  ECX = (pop32());
  /* 1094450c ret  */
  ESPCHK(0x109443dbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000450d @ 0x1094450d (60 bytes, 20 insns) */
void f_1094450d(void) {
  FTRACE(0x1094450du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1094450d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1094450f push 0 */
  push32((uint32_t)(0x0u));
  /* 10944511 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944515 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1094451a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1094451d push eax */
  push32((uint32_t)(EAX));
  /* 1094451e call dword ptr [0x10947060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947060))), 0x10944524u);
  /* 10944524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10944526 mov dword ptr [0x10949568], eax */
  w32((uint32_t)(0x10949568), (EAX));
  /* 1094452b je 0x10944542 */
  if (C.zf) goto L_10944542;
  /* 1094452d call 0x10945255 */
  push32(0x10944532u); f_10945255();
  /* 10944532 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10944534 jne 0x10944545 */
  if (!C.zf) goto L_10944545;
  /* 10944536 push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 1094453c call dword ptr [0x10947058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947058))), 0x10944542u);
L_10944542:;
  /* 10944542 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944544 ret  */
  ESPCHK(0x1094450du, _esp0);
  ESP += 4; return;
L_10944545:;
  /* 10944545 push 1 */
  push32((uint32_t)(0x1u));
  /* 10944547 pop eax */
  EAX = (pop32());
  /* 10944548 ret  */
  ESPCHK(0x1094450du, _esp0);
  ESP += 4; return;
}

/* FUN_10004549 @ 0x10944549 (117 bytes, 38 insns) */
void f_10944549(void) {
  FTRACE(0x10944549u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944549 push ebx */
  push32((uint32_t)(EBX));
  /* 1094454a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1094454c cmp dword ptr [0x10949338], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10949338))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944552 push ebp */
  push32((uint32_t)(EBP));
  /* 10944553 mov ebp, dword ptr [0x1094704c] */
  EBP = (r32((uint32_t)(0x1094704c)));
  /* 10944559 jle 0x1094459f */
  if ((C.zf||C.sf!=C.of)) goto L_1094459f;
  /* 1094455b mov eax, dword ptr [0x1094933c] */
  EAX = (r32((uint32_t)(0x1094933c)));
  /* 10944560 push esi */
  push32((uint32_t)(ESI));
  /* 10944561 push edi */
  push32((uint32_t)(EDI));
  /* 10944562 mov edi, dword ptr [0x10947050] */
  EDI = (r32((uint32_t)(0x10947050)));
  /* 10944568 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_1094456b:;
  /* 1094456b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10944570 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10944575 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10944577 call edi */
  call_ind((uint32_t)(EDI), 0x10944579u);
  /* 10944579 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1094457e push 0 */
  push32((uint32_t)(0x0u));
  /* 10944580 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10944582 call edi */
  call_ind((uint32_t)(EDI), 0x10944584u);
  /* 10944584 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10944587 push 0 */
  push32((uint32_t)(0x0u));
  /* 10944589 push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 1094458f call ebp */
  call_ind((uint32_t)(EBP), 0x10944591u);
  /* 10944591 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944594 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10944595 cmp ebx, dword ptr [0x10949338] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10949338))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094459b jl 0x1094456b */
  if ((C.sf!=C.of)) goto L_1094456b;
  /* 1094459d pop edi */
  EDI = (pop32());
  /* 1094459e pop esi */
  ESI = (pop32());
L_1094459f:;
  /* 1094459f push dword ptr [0x1094933c] */
  push32((uint32_t)(r32((uint32_t)(0x1094933c))));
  /* 109445a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109445a7 push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 109445ad call ebp */
  call_ind((uint32_t)(EBP), 0x109445afu);
  /* 109445af push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 109445b5 call dword ptr [0x10947058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947058))), 0x109445bbu);
  /* 109445bb pop ebp */
  EBP = (pop32());
  /* 109445bc pop ebx */
  EBX = (pop32());
  /* 109445bd ret  */
  ESPCHK(0x10944549u, _esp0);
  ESP += 4; return;
}

/* FUN_100045be @ 0x109445be (57 bytes, 18 insns) */
void f_109445be(void) {
  FTRACE(0x109445beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109445be mov eax, dword ptr [0x10949130] */
  EAX = (r32((uint32_t)(0x10949130)));
  /* 109445c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109445c6 je 0x109445d5 */
  if (C.zf) goto L_109445d5;
  /* 109445c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109445ca jne 0x109445f6 */
  if (!C.zf) goto L_109445f6;
  /* 109445cc cmp dword ptr [0x10949134], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10949134))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109445d3 jne 0x109445f6 */
  if (!C.zf) goto L_109445f6;
L_109445d5:;
  /* 109445d5 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 109445da call 0x109445f7 */
  push32(0x109445dfu); f_109445f7();
  /* 109445df mov eax, dword ptr [0x10949284] */
  EAX = (r32((uint32_t)(0x10949284)));
  /* 109445e4 pop ecx */
  ECX = (pop32());
  /* 109445e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109445e7 je 0x109445eb */
  if (C.zf) goto L_109445eb;
  /* 109445e9 call eax */
  call_ind((uint32_t)(EAX), 0x109445ebu);
L_109445eb:;
  /* 109445eb push 0xff */
  push32((uint32_t)(0xffu));
  /* 109445f0 call 0x109445f7 */
  push32(0x109445f5u); f_109445f7();
  /* 109445f5 pop ecx */
  ECX = (pop32());
L_109445f6:;
  /* 109445f6 ret  */
  ESPCHK(0x109445beu, _esp0);
  ESP += 4; return;
}

/* FUN_100045f7 @ 0x109445f7 (339 bytes, 100 insns) */
void f_109445f7(void) {
  FTRACE(0x109445f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109445f7 push ebp */
  push32((uint32_t)(EBP));
  /* 109445f8 mov ebp, esp */
  EBP = (ESP);
  /* 109445fa sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944600 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10944603 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10944605 mov eax, 0x10948a30 */
  EAX = (0x10948a30u);
L_1094460a:;
  /* 1094460a cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094460c je 0x10944619 */
  if (C.zf) goto L_10944619;
  /* 1094460e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944611 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944612 cmp eax, 0x10948ac0 */
  { uint32_t _a=(EAX),_b=(0x10948ac0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944617 jl 0x1094460a */
  if ((C.sf!=C.of)) goto L_1094460a;
L_10944619:;
  /* 10944619 push esi */
  push32((uint32_t)(ESI));
  /* 1094461a mov esi, ecx */
  ESI = (ECX);
  /* 1094461c shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1094461f cmp edx, dword ptr [esi + 0x10948a30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10948a30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944625 jne 0x10944747 */
  if (!C.zf) goto L_10944747;
  /* 1094462b mov eax, dword ptr [0x10949130] */
  EAX = (r32((uint32_t)(0x10949130)));
  /* 10944630 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944633 je 0x10944721 */
  if (C.zf) goto L_10944721;
  /* 10944639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094463b jne 0x1094464a */
  if (!C.zf) goto L_1094464a;
  /* 1094463d cmp dword ptr [0x10949134], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10949134))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944644 je 0x10944721 */
  if (C.zf) goto L_10944721;
L_1094464a:;
  /* 1094464a cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944650 je 0x10944747 */
  if (C.zf) goto L_10944747;
  /* 10944656 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1094465c push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10944661 push eax */
  push32((uint32_t)(EAX));
  /* 10944662 push 0 */
  push32((uint32_t)(0x0u));
  /* 10944664 call dword ptr [0x10947070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947070))), 0x1094466au);
  /* 1094466a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094466c jne 0x10944681 */
  if (!C.zf) goto L_10944681;
  /* 1094466e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10944674 push 0x10947450 */
  push32((uint32_t)(0x10947450u));
  /* 10944679 push eax */
  push32((uint32_t)(EAX));
  /* 1094467a call 0x109449c0 */
  push32(0x1094467fu); f_109449c0();
  /* 1094467f pop ecx */
  ECX = (pop32());
  /* 10944680 pop ecx */
  ECX = (pop32());
L_10944681:;
  /* 10944681 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10944687 push edi */
  push32((uint32_t)(EDI));
  /* 10944688 push eax */
  push32((uint32_t)(EAX));
  /* 10944689 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 1094468f call 0x10944ab0 */
  push32(0x10944694u); f_10944ab0();
  /* 10944694 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944695 pop ecx */
  ECX = (pop32());
  /* 10944696 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944699 jbe 0x109446c4 */
  if ((C.cf||C.zf)) goto L_109446c4;
  /* 1094469b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 109446a1 push eax */
  push32((uint32_t)(EAX));
  /* 109446a2 call 0x10944ab0 */
  push32(0x109446a7u); f_10944ab0();
  /* 109446a7 mov edi, eax */
  EDI = (EAX);
  /* 109446a9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 109446af sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109446b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 109446b4 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109446b6 push 0x1094744c */
  push32((uint32_t)(0x1094744cu));
  /* 109446bb push edi */
  push32((uint32_t)(EDI));
  /* 109446bc call 0x10945b30 */
  push32(0x109446c1u); f_10945b30();
  /* 109446c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109446c4:;
  /* 109446c4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109446ca push 0x10947430 */
  push32((uint32_t)(0x10947430u));
  /* 109446cf push eax */
  push32((uint32_t)(EAX));
  /* 109446d0 call 0x109449c0 */
  push32(0x109446d5u); f_109449c0();
  /* 109446d5 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109446db push edi */
  push32((uint32_t)(EDI));
  /* 109446dc push eax */
  push32((uint32_t)(EAX));
  /* 109446dd call 0x109449d0 */
  push32(0x109446e2u); f_109449d0();
  /* 109446e2 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109446e8 push 0x1094742c */
  push32((uint32_t)(0x1094742cu));
  /* 109446ed push eax */
  push32((uint32_t)(EAX));
  /* 109446ee call 0x109449d0 */
  push32(0x109446f3u); f_109449d0();
  /* 109446f3 push dword ptr [esi + 0x10948a34] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10948a34))));
  /* 109446f9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 109446ff push eax */
  push32((uint32_t)(EAX));
  /* 10944700 call 0x109449d0 */
  push32(0x10944705u); f_109449d0();
  /* 10944705 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1094470a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10944710 push 0x10947404 */
  push32((uint32_t)(0x10947404u));
  /* 10944715 push eax */
  push32((uint32_t)(EAX));
  /* 10944716 call 0x10945a9e */
  push32(0x1094471bu); f_10945a9e();
  /* 1094471b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094471e pop edi */
  EDI = (pop32());
  /* 1094471f jmp 0x10944747 */
  goto L_10944747;
L_10944721:;
  /* 10944721 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10944724 lea esi, [esi + 0x10948a34] */
  ESI = ((uint32_t)(ESI + 0x10948a34));
  /* 1094472a push 0 */
  push32((uint32_t)(0x0u));
  /* 1094472c push eax */
  push32((uint32_t)(EAX));
  /* 1094472d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1094472f call 0x10944ab0 */
  push32(0x10944734u); f_10944ab0();
  /* 10944734 pop ecx */
  ECX = (pop32());
  /* 10944735 push eax */
  push32((uint32_t)(EAX));
  /* 10944736 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10944738 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1094473a call dword ptr [0x10947080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947080))), 0x10944740u);
  /* 10944740 push eax */
  push32((uint32_t)(EAX));
  /* 10944741 call dword ptr [0x10947054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947054))), 0x10944747u);
L_10944747:;
  /* 10944747 pop esi */
  ESI = (pop32());
  /* 10944748 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10944749 ret  */
  ESPCHK(0x109445f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000474a @ 0x1094474a (141 bytes, 56 insns) */
void f_1094474a(void) {
  FTRACE(0x1094474au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1094474a push ebx */
  push32((uint32_t)(EBX));
  /* 1094474b push esi */
  push32((uint32_t)(ESI));
  /* 1094474c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10944750 push edi */
  push32((uint32_t)(EDI));
  /* 10944751 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10944756 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944759 mov ebx, esi */
  EBX = (ESI);
  /* 1094475b ja 0x1094476a */
  if ((!C.cf&&!C.zf)) goto L_1094476a;
  /* 1094475d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1094475f jne 0x10944764 */
  if (!C.zf) goto L_10944764;
  /* 10944761 push 1 */
  push32((uint32_t)(0x1u));
  /* 10944763 pop esi */
  ESI = (pop32());
L_10944764:;
  /* 10944764 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944767 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_1094476a:;
  /* 1094476a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1094476c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094476f ja 0x109447ab */
  if ((!C.cf&&!C.zf)) goto L_109447ab;
  /* 10944771 cmp ebx, dword ptr [0x10948d10] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10948d10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944777 ja 0x10944796 */
  if ((!C.cf&&!C.zf)) goto L_10944796;
  /* 10944779 push 9 */
  push32((uint32_t)(0x9u));
  /* 1094477b call 0x1094486c */
  push32(0x10944780u); f_1094486c();
  /* 10944780 push ebx */
  push32((uint32_t)(EBX));
  /* 10944781 call 0x109455e9 */
  push32(0x10944786u); f_109455e9();
  /* 10944786 push 9 */
  push32((uint32_t)(0x9u));
  /* 10944788 mov edi, eax */
  EDI = (EAX);
  /* 1094478a call 0x109448cd */
  push32(0x1094478fu); f_109448cd();
  /* 1094478f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10944792 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10944794 jne 0x109447c1 */
  if (!C.zf) goto L_109447c1;
L_10944796:;
  /* 10944796 push esi */
  push32((uint32_t)(ESI));
  /* 10944797 push 8 */
  push32((uint32_t)(0x8u));
  /* 10944799 push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 1094479f call dword ptr [0x10947044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947044))), 0x109447a5u);
  /* 109447a5 mov edi, eax */
  EDI = (EAX);
  /* 109447a7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109447a9 jne 0x109447cd */
  if (!C.zf) goto L_109447cd;
L_109447ab:;
  /* 109447ab cmp dword ptr [0x109492fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109492fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109447b2 je 0x109447cd */
  if (C.zf) goto L_109447cd;
  /* 109447b4 push esi */
  push32((uint32_t)(ESI));
  /* 109447b5 call 0x10945c88 */
  push32(0x109447bau); f_10945c88();
  /* 109447ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109447bc pop ecx */
  ECX = (pop32());
  /* 109447bd je 0x109447d3 */
  if (C.zf) goto L_109447d3;
  /* 109447bf jmp 0x1094476a */
  goto L_1094476a;
L_109447c1:;
  /* 109447c1 push ebx */
  push32((uint32_t)(EBX));
  /* 109447c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109447c4 push edi */
  push32((uint32_t)(EDI));
  /* 109447c5 call 0x10945c30 */
  push32(0x109447cau); f_10945c30();
  /* 109447ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109447cd:;
  /* 109447cd mov eax, edi */
  EAX = (EDI);
L_109447cf:;
  /* 109447cf pop edi */
  EDI = (pop32());
  /* 109447d0 pop esi */
  ESI = (pop32());
  /* 109447d1 pop ebx */
  EBX = (pop32());
  /* 109447d2 ret  */
  ESPCHK(0x1094474au, _esp0);
  ESP += 4; return;
L_109447d3:;
  /* 109447d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109447d5 jmp 0x109447cf */
  goto L_109447cf;
}

/* FUN_100047d7 @ 0x109447d7 (41 bytes, 12 insns) */
void f_109447d7(void) {
  FTRACE(0x109447d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109447d7 push esi */
  push32((uint32_t)(ESI));
  /* 109447d8 mov esi, dword ptr [0x10947040] */
  ESI = (r32((uint32_t)(0x10947040)));
  /* 109447de push dword ptr [0x10948b04] */
  push32((uint32_t)(r32((uint32_t)(0x10948b04))));
  /* 109447e4 call esi */
  call_ind((uint32_t)(ESI), 0x109447e6u);
  /* 109447e6 push dword ptr [0x10948af4] */
  push32((uint32_t)(r32((uint32_t)(0x10948af4))));
  /* 109447ec call esi */
  call_ind((uint32_t)(ESI), 0x109447eeu);
  /* 109447ee push dword ptr [0x10948ae4] */
  push32((uint32_t)(r32((uint32_t)(0x10948ae4))));
  /* 109447f4 call esi */
  call_ind((uint32_t)(ESI), 0x109447f6u);
  /* 109447f6 push dword ptr [0x10948ac4] */
  push32((uint32_t)(r32((uint32_t)(0x10948ac4))));
  /* 109447fc call esi */
  call_ind((uint32_t)(ESI), 0x109447feu);
  /* 109447fe pop esi */
  ESI = (pop32());
  /* 109447ff ret  */
  ESPCHK(0x109447d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004800 @ 0x10944800 (108 bytes, 34 insns) */
void f_10944800(void) {
  FTRACE(0x10944800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944800 push esi */
  push32((uint32_t)(ESI));
  /* 10944801 push edi */
  push32((uint32_t)(EDI));
  /* 10944802 mov edi, dword ptr [0x10947074] */
  EDI = (r32((uint32_t)(0x10947074)));
  /* 10944808 mov esi, 0x10948ac0 */
  ESI = (0x10948ac0u);
L_1094480d:;
  /* 1094480d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1094480f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10944811 je 0x1094483e */
  if (C.zf) goto L_1094483e;
  /* 10944813 cmp esi, 0x10948b04 */
  { uint32_t _a=(ESI),_b=(0x10948b04u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944819 je 0x1094483e */
  if (C.zf) goto L_1094483e;
  /* 1094481b cmp esi, 0x10948af4 */
  { uint32_t _a=(ESI),_b=(0x10948af4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944821 je 0x1094483e */
  if (C.zf) goto L_1094483e;
  /* 10944823 cmp esi, 0x10948ae4 */
  { uint32_t _a=(ESI),_b=(0x10948ae4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944829 je 0x1094483e */
  if (C.zf) goto L_1094483e;
  /* 1094482b cmp esi, 0x10948ac4 */
  { uint32_t _a=(ESI),_b=(0x10948ac4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944831 je 0x1094483e */
  if (C.zf) goto L_1094483e;
  /* 10944833 push eax */
  push32((uint32_t)(EAX));
  /* 10944834 call edi */
  call_ind((uint32_t)(EDI), 0x10944836u);
  /* 10944836 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10944838 call 0x109448e2 */
  push32(0x1094483du); f_109448e2();
  /* 1094483d pop ecx */
  ECX = (pop32());
L_1094483e:;
  /* 1094483e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944841 cmp esi, 0x10948b80 */
  { uint32_t _a=(ESI),_b=(0x10948b80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944847 jl 0x1094480d */
  if ((C.sf!=C.of)) goto L_1094480d;
  /* 10944849 push dword ptr [0x10948ae4] */
  push32((uint32_t)(r32((uint32_t)(0x10948ae4))));
  /* 1094484f call edi */
  call_ind((uint32_t)(EDI), 0x10944851u);
  /* 10944851 push dword ptr [0x10948af4] */
  push32((uint32_t)(r32((uint32_t)(0x10948af4))));
  /* 10944857 call edi */
  call_ind((uint32_t)(EDI), 0x10944859u);
  /* 10944859 push dword ptr [0x10948b04] */
  push32((uint32_t)(r32((uint32_t)(0x10948b04))));
  /* 1094485f call edi */
  call_ind((uint32_t)(EDI), 0x10944861u);
  /* 10944861 push dword ptr [0x10948ac4] */
  push32((uint32_t)(r32((uint32_t)(0x10948ac4))));
  /* 10944867 call edi */
  call_ind((uint32_t)(EDI), 0x10944869u);
  /* 10944869 pop edi */
  EDI = (pop32());
  /* 1094486a pop esi */
  ESI = (pop32());
  /* 1094486b ret  */
  ESPCHK(0x10944800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000486c @ 0x1094486c (97 bytes, 37 insns) */
void f_1094486c(void) {
  FTRACE(0x1094486cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1094486c push ebp */
  push32((uint32_t)(EBP));
  /* 1094486d mov ebp, esp */
  EBP = (ESP);
  /* 1094486f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10944872 push esi */
  push32((uint32_t)(ESI));
  /* 10944873 cmp dword ptr [eax*4 + 0x10948ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10948ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094487b lea esi, [eax*4 + 0x10948ac0] */
  ESI = ((uint32_t)(EAX*4 + 0x10948ac0));
  /* 10944882 jne 0x109448c2 */
  if (!C.zf) goto L_109448c2;
  /* 10944884 push edi */
  push32((uint32_t)(EDI));
  /* 10944885 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10944887 call 0x1094492a */
  push32(0x1094488cu); f_1094492a();
  /* 1094488c mov edi, eax */
  EDI = (EAX);
  /* 1094488e pop ecx */
  ECX = (pop32());
  /* 1094488f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10944891 jne 0x1094489b */
  if (!C.zf) goto L_1094489b;
  /* 10944893 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10944895 call 0x10943be8 */
  push32(0x1094489au); f_10943be8();
  /* 1094489a pop ecx */
  ECX = (pop32());
L_1094489b:;
  /* 1094489b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1094489d call 0x1094486c */
  push32(0x109448a2u); f_1094486c();
  /* 109448a2 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109448a5 pop ecx */
  ECX = (pop32());
  /* 109448a6 push edi */
  push32((uint32_t)(EDI));
  /* 109448a7 jne 0x109448b3 */
  if (!C.zf) goto L_109448b3;
  /* 109448a9 call dword ptr [0x10947040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947040))), 0x109448afu);
  /* 109448af mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 109448b1 jmp 0x109448b9 */
  goto L_109448b9;
L_109448b3:;
  /* 109448b3 call 0x109448e2 */
  push32(0x109448b8u); f_109448e2();
  /* 109448b8 pop ecx */
  ECX = (pop32());
L_109448b9:;
  /* 109448b9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109448bb call 0x109448cd */
  push32(0x109448c0u); f_109448cd();
  /* 109448c0 pop ecx */
  ECX = (pop32());
  /* 109448c1 pop edi */
  EDI = (pop32());
L_109448c2:;
  /* 109448c2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 109448c4 call dword ptr [0x10947048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947048))), 0x109448cau);
  /* 109448ca pop esi */
  ESI = (pop32());
  /* 109448cb pop ebp */
  EBP = (pop32());
  /* 109448cc ret  */
  ESPCHK(0x1094486cu, _esp0);
  ESP += 4; return;
}

/* FUN_100048cd @ 0x109448cd (21 bytes, 7 insns) */
void f_109448cd(void) {
  FTRACE(0x109448cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109448cd push ebp */
  push32((uint32_t)(EBP));
  /* 109448ce mov ebp, esp */
  EBP = (ESP);
  /* 109448d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109448d3 push dword ptr [eax*4 + 0x10948ac0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10948ac0))));
  /* 109448da call dword ptr [0x1094703c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094703c))), 0x109448e0u);
  /* 109448e0 pop ebp */
  EBP = (pop32());
  /* 109448e1 ret  */
  ESPCHK(0x109448cdu, _esp0);
  ESP += 4; return;
}

/* FUN_100048e2 @ 0x109448e2 (72 bytes, 29 insns) */
void f_109448e2(void) {
  FTRACE(0x109448e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109448e2 push esi */
  push32((uint32_t)(ESI));
  /* 109448e3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 109448e7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109448e9 je 0x10944928 */
  if (C.zf) goto L_10944928;
  /* 109448eb push 9 */
  push32((uint32_t)(0x9u));
  /* 109448ed call 0x1094486c */
  push32(0x109448f2u); f_1094486c();
  /* 109448f2 push esi */
  push32((uint32_t)(ESI));
  /* 109448f3 call 0x10945293 */
  push32(0x109448f8u); f_10945293();
  /* 109448f8 pop ecx */
  ECX = (pop32());
  /* 109448f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109448fb pop ecx */
  ECX = (pop32());
  /* 109448fc je 0x10944911 */
  if (C.zf) goto L_10944911;
  /* 109448fe push esi */
  push32((uint32_t)(ESI));
  /* 109448ff push eax */
  push32((uint32_t)(EAX));
  /* 10944900 call 0x109452be */
  push32(0x10944905u); f_109452be();
  /* 10944905 push 9 */
  push32((uint32_t)(0x9u));
  /* 10944907 call 0x109448cd */
  push32(0x1094490cu); f_109448cd();
  /* 1094490c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094490f pop esi */
  ESI = (pop32());
  /* 10944910 ret  */
  ESPCHK(0x109448e2u, _esp0);
  ESP += 4; return;
L_10944911:;
  /* 10944911 push 9 */
  push32((uint32_t)(0x9u));
  /* 10944913 call 0x109448cd */
  push32(0x10944918u); f_109448cd();
  /* 10944918 pop ecx */
  ECX = (pop32());
  /* 10944919 push esi */
  push32((uint32_t)(ESI));
  /* 1094491a push 0 */
  push32((uint32_t)(0x0u));
  /* 1094491c push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 10944922 call dword ptr [0x1094704c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094704c))), 0x10944928u);
L_10944928:;
  /* 10944928 pop esi */
  ESI = (pop32());
  /* 10944929 ret  */
  ESPCHK(0x109448e2u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1094492a (18 bytes, 6 insns) */
void f_1094492a(void) {
  FTRACE(0x1094492au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1094492a push dword ptr [0x109492fc] */
  push32((uint32_t)(r32((uint32_t)(0x109492fc))));
  /* 10944930 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10944934 call 0x1094493c */
  push32(0x10944939u); f_1094493c();
  /* 10944939 pop ecx */
  ECX = (pop32());
  /* 1094493a pop ecx */
  ECX = (pop32());
  /* 1094493b ret  */
  ESPCHK(0x1094492au, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1094493c (44 bytes, 16 insns) */
void f_1094493c(void) {
  FTRACE(0x1094493cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1094493c cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944941 ja 0x10944965 */
  if ((!C.cf&&!C.zf)) goto L_10944965;
L_10944943:;
  /* 10944943 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10944947 call 0x10944968 */
  push32(0x1094494cu); f_10944968();
  /* 1094494c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094494e pop ecx */
  ECX = (pop32());
  /* 1094494f jne 0x10944967 */
  if (!C.zf) goto L_10944967;
  /* 10944951 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944955 je 0x10944967 */
  if (C.zf) goto L_10944967;
  /* 10944957 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1094495b call 0x10945c88 */
  push32(0x10944960u); f_10945c88();
  /* 10944960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10944962 pop ecx */
  ECX = (pop32());
  /* 10944963 jne 0x10944943 */
  if (!C.zf) goto L_10944943;
L_10944965:;
  /* 10944965 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10944967:;
  /* 10944967 ret  */
  ESPCHK(0x1094493cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004968 @ 0x10944968 (78 bytes, 30 insns) */
void f_10944968(void) {
  FTRACE(0x10944968u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944968 push esi */
  push32((uint32_t)(ESI));
  /* 10944969 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1094496d cmp esi, dword ptr [0x10948d10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10948d10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944973 push edi */
  push32((uint32_t)(EDI));
  /* 10944974 ja 0x10944997 */
  if ((!C.cf&&!C.zf)) goto L_10944997;
  /* 10944976 push 9 */
  push32((uint32_t)(0x9u));
  /* 10944978 call 0x1094486c */
  push32(0x1094497du); f_1094486c();
  /* 1094497d push esi */
  push32((uint32_t)(ESI));
  /* 1094497e call 0x109455e9 */
  push32(0x10944983u); f_109455e9();
  /* 10944983 push 9 */
  push32((uint32_t)(0x9u));
  /* 10944985 mov edi, eax */
  EDI = (EAX);
  /* 10944987 call 0x109448cd */
  push32(0x1094498cu); f_109448cd();
  /* 1094498c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094498f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10944991 je 0x10944997 */
  if (C.zf) goto L_10944997;
  /* 10944993 mov eax, edi */
  EAX = (EDI);
  /* 10944995 jmp 0x109449b3 */
  goto L_109449b3;
L_10944997:;
  /* 10944997 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10944999 jne 0x1094499e */
  if (!C.zf) goto L_1094499e;
  /* 1094499b push 1 */
  push32((uint32_t)(0x1u));
  /* 1094499d pop esi */
  ESI = (pop32());
L_1094499e:;
  /* 1094499e add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109449a1 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 109449a4 push esi */
  push32((uint32_t)(ESI));
  /* 109449a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109449a7 push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 109449ad call dword ptr [0x10947044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947044))), 0x109449b3u);
L_109449b3:;
  /* 109449b3 pop edi */
  EDI = (pop32());
  /* 109449b4 pop esi */
  ESI = (pop32());
  /* 109449b5 ret  */
  ESPCHK(0x10944968u, _esp0);
  ESP += 4; return;
}

/* FUN_100049c0 @ 0x109449c0 (7 bytes, 3 insns) */
void f_109449c0(void) {
  FTRACE(0x109449c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109449c0 push edi */
  push32((uint32_t)(EDI));
  /* 109449c1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 109449c5 jmp 0x10944a31 */
  jmp_ind(0x10944a31u); return;
}

/* FUN_100049d0 @ 0x109449d0 (224 bytes, 84 insns) */
void f_109449d0(void) {
  FTRACE(0x109449d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109449d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 109449d4 push edi */
  push32((uint32_t)(EDI));
  /* 109449d5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109449db je 0x109449ec */
  if (C.zf) goto L_109449ec;
L_109449dd:;
  /* 109449dd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 109449df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 109449e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109449e2 je 0x10944a1f */
  if (C.zf) goto L_10944a1f;
  /* 109449e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 109449ea jne 0x109449dd */
  if (!C.zf) goto L_109449dd;
L_109449ec:;
  /* 109449ec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 109449ee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 109449f3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109449f5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109449f8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 109449fa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109449fd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10944a02 je 0x109449ec */
  if (C.zf) goto L_109449ec;
  /* 10944a04 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10944a07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10944a09 je 0x10944a2e */
  if (C.zf) goto L_10944a2e;
  /* 10944a0b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10944a0d je 0x10944a29 */
  if (C.zf) goto L_10944a29;
  /* 10944a0f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10944a14 je 0x10944a24 */
  if (C.zf) goto L_10944a24;
  /* 10944a16 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10944a1b je 0x10944a1f */
  if (C.zf) goto L_10944a1f;
  /* 10944a1d jmp 0x109449ec */
  goto L_109449ec;
L_10944a1f:;
  /* 10944a1f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10944a22 jmp 0x10944a31 */
  goto L_10944a31;
L_10944a24:;
  /* 10944a24 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10944a27 jmp 0x10944a31 */
  goto L_10944a31;
L_10944a29:;
  /* 10944a29 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10944a2c jmp 0x10944a31 */
  goto L_10944a31;
L_10944a2e:;
  /* 10944a2e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10944a31:;
  /* 10944a31 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10944a35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10944a3b je 0x10944a56 */
  if (C.zf) goto L_10944a56;
L_10944a3d:;
  /* 10944a3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10944a3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944a40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10944a42 je 0x10944aa8 */
  if (C.zf) goto L_10944aa8;
  /* 10944a44 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10944a46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10944a47 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10944a4d jne 0x10944a3d */
  if (!C.zf) goto L_10944a3d;
  /* 10944a4f jmp 0x10944a56 */
  goto L_10944a56;
L_10944a51:;
  /* 10944a51 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10944a53 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10944a56:;
  /* 10944a56 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10944a5b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10944a5d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944a5f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10944a62 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10944a64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10944a66 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944a69 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10944a6e je 0x10944a51 */
  if (C.zf) goto L_10944a51;
  /* 10944a70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10944a72 je 0x10944aa8 */
  if (C.zf) goto L_10944aa8;
  /* 10944a74 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10944a76 je 0x10944a9f */
  if (C.zf) goto L_10944a9f;
  /* 10944a78 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10944a7e je 0x10944a92 */
  if (C.zf) goto L_10944a92;
  /* 10944a80 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10944a86 je 0x10944a8a */
  if (C.zf) goto L_10944a8a;
  /* 10944a88 jmp 0x10944a51 */
  goto L_10944a51;
L_10944a8a:;
  /* 10944a8a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10944a8c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10944a90 pop edi */
  EDI = (pop32());
  /* 10944a91 ret  */
  ESPCHK(0x109449d0u, _esp0);
  ESP += 4; return;
L_10944a92:;
  /* 10944a92 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10944a95 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10944a99 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10944a9d pop edi */
  EDI = (pop32());
  /* 10944a9e ret  */
  ESPCHK(0x109449d0u, _esp0);
  ESP += 4; return;
L_10944a9f:;
  /* 10944a9f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10944aa2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10944aa6 pop edi */
  EDI = (pop32());
  /* 10944aa7 ret  */
  ESPCHK(0x109449d0u, _esp0);
  ESP += 4; return;
L_10944aa8:;
  /* 10944aa8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10944aaa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10944aae pop edi */
  EDI = (pop32());
  /* 10944aaf ret  */
  ESPCHK(0x109449d0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10944ab0 (123 bytes, 44 insns) */
void f_10944ab0(void) {
  FTRACE(0x10944ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944ab0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10944ab4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10944aba je 0x10944ad0 */
  if (C.zf) goto L_10944ad0;
L_10944abc:;
  /* 10944abc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10944abe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944abf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10944ac1 je 0x10944b03 */
  if (C.zf) goto L_10944b03;
  /* 10944ac3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10944ac9 jne 0x10944abc */
  if (!C.zf) goto L_10944abc;
  /* 10944acb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10944ad0:;
  /* 10944ad0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10944ad2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10944ad7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944ad9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10944adc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10944ade add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944ae1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10944ae6 je 0x10944ad0 */
  if (C.zf) goto L_10944ad0;
  /* 10944ae8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10944aeb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10944aed je 0x10944b21 */
  if (C.zf) goto L_10944b21;
  /* 10944aef test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10944af1 je 0x10944b17 */
  if (C.zf) goto L_10944b17;
  /* 10944af3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10944af8 je 0x10944b0d */
  if (C.zf) goto L_10944b0d;
  /* 10944afa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10944aff je 0x10944b03 */
  if (C.zf) goto L_10944b03;
  /* 10944b01 jmp 0x10944ad0 */
  goto L_10944ad0;
L_10944b03:;
  /* 10944b03 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10944b06 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10944b0a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944b0c ret  */
  ESPCHK(0x10944ab0u, _esp0);
  ESP += 4; return;
L_10944b0d:;
  /* 10944b0d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10944b10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10944b14 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944b16 ret  */
  ESPCHK(0x10944ab0u, _esp0);
  ESP += 4; return;
L_10944b17:;
  /* 10944b17 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10944b1a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10944b1e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944b20 ret  */
  ESPCHK(0x10944ab0u, _esp0);
  ESP += 4; return;
L_10944b21:;
  /* 10944b21 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10944b24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10944b28 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944b2a ret  */
  ESPCHK(0x10944ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b2b @ 0x10944b2b (429 bytes, 143 insns) */
void f_10944b2b(void) {
  FTRACE(0x10944b2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944b2b push ebp */
  push32((uint32_t)(EBP));
  /* 10944b2c mov ebp, esp */
  EBP = (ESP);
  /* 10944b2e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944b31 push ebx */
  push32((uint32_t)(EBX));
  /* 10944b32 push esi */
  push32((uint32_t)(ESI));
  /* 10944b33 push edi */
  push32((uint32_t)(EDI));
  /* 10944b34 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10944b36 call 0x1094486c */
  push32(0x10944b3bu); f_1094486c();
  /* 10944b3b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10944b3e call 0x10944cd8 */
  push32(0x10944b43u); f_10944cd8();
  /* 10944b43 mov ebx, eax */
  EBX = (EAX);
  /* 10944b45 pop ecx */
  ECX = (pop32());
  /* 10944b46 cmp ebx, dword ptr [0x10949340] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10949340))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944b4c pop ecx */
  ECX = (pop32());
  /* 10944b4d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10944b50 jne 0x10944b59 */
  if (!C.zf) goto L_10944b59;
L_10944b52:;
  /* 10944b52 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10944b54 jmp 0x10944cc9 */
  goto L_10944cc9;
L_10944b59:;
  /* 10944b59 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10944b5b je 0x10944cb7 */
  if (C.zf) goto L_10944cb7;
  /* 10944b61 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10944b63 mov eax, 0x10948c18 */
  EAX = (0x10948c18u);
L_10944b68:;
  /* 10944b68 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944b6a je 0x10944be0 */
  if (C.zf) goto L_10944be0;
  /* 10944b6c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944b6f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10944b70 cmp eax, 0x10948d08 */
  { uint32_t _a=(EAX),_b=(0x10948d08u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944b75 jl 0x10944b68 */
  if ((C.sf!=C.of)) goto L_10944b68;
  /* 10944b77 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10944b7a push eax */
  push32((uint32_t)(EAX));
  /* 10944b7b push ebx */
  push32((uint32_t)(EBX));
  /* 10944b7c call dword ptr [0x10947034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947034))), 0x10944b82u);
  /* 10944b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10944b84 pop esi */
  ESI = (pop32());
  /* 10944b85 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944b87 jne 0x10944cae */
  if (!C.zf) goto L_10944cae;
  /* 10944b8d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10944b8f and dword ptr [0x10949564], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10949564)))&(0x0u); w32((uint32_t)(0x10949564), (_r)); fl_logic(_r,32); }
  /* 10944b96 pop ecx */
  ECX = (pop32());
  /* 10944b97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944b99 mov edi, 0x10949460 */
  EDI = (0x10949460u);
  /* 10944b9e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944ba1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10944ba3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10944ba4 mov dword ptr [0x10949340], ebx */
  w32((uint32_t)(0x10949340), (EBX));
  /* 10944baa jbe 0x10944c9b */
  if ((C.cf||C.zf)) goto L_10944c9b;
  /* 10944bb0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944bb4 je 0x10944c76 */
  if (C.zf) goto L_10944c76;
  /* 10944bba lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10944bbd:;
  /* 10944bbd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10944bbf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10944bc1 je 0x10944c76 */
  if (C.zf) goto L_10944c76;
  /* 10944bc7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10944bcb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10944bce:;
  /* 10944bce cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944bd0 ja 0x10944c6a */
  if ((!C.cf&&!C.zf)) goto L_10944c6a;
  /* 10944bd6 or byte ptr [eax + 0x10949461], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949461)))|(0x4u); w8((uint32_t)(EAX + 0x10949461), (_r)); fl_logic(_r,8); }
  /* 10944bdd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944bde jmp 0x10944bce */
  goto L_10944bce;
L_10944be0:;
  /* 10944be0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10944be4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10944be6 pop ecx */
  ECX = (pop32());
  /* 10944be7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944be9 mov edi, 0x10949460 */
  EDI = (0x10949460u);
  /* 10944bee lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10944bf1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10944bf3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10944bf6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10944bf7 lea ebx, [esi + 0x10948c28] */
  EBX = ((uint32_t)(ESI + 0x10948c28));
L_10944bfd:;
  /* 10944bfd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944c00 mov ecx, ebx */
  ECX = (EBX);
  /* 10944c02 je 0x10944c30 */
  if (C.zf) goto L_10944c30;
L_10944c04:;
  /* 10944c04 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10944c07 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10944c09 je 0x10944c30 */
  if (C.zf) goto L_10944c30;
  /* 10944c0b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10944c0e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10944c11 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944c13 ja 0x10944c29 */
  if ((!C.cf&&!C.zf)) goto L_10944c29;
  /* 10944c15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10944c18 mov dl, byte ptr [edx + 0x10948c10] */
  DL = (r8((uint32_t)(EDX + 0x10948c10)));
L_10944c1e:;
  /* 10944c1e or byte ptr [eax + 0x10949461], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949461)))|(DL); w8((uint32_t)(EAX + 0x10949461), (_r)); fl_logic(_r,8); }
  /* 10944c24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944c25 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944c27 jbe 0x10944c1e */
  if ((C.cf||C.zf)) goto L_10944c1e;
L_10944c29:;
  /* 10944c29 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944c2a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944c2b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944c2e jne 0x10944c04 */
  if (!C.zf) goto L_10944c04;
L_10944c30:;
  /* 10944c30 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10944c33 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944c36 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944c3a jb 0x10944bfd */
  if (C.cf) goto L_10944bfd;
  /* 10944c3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10944c3f mov dword ptr [0x1094935c], 1 */
  w32((uint32_t)(0x1094935c), (0x1u));
  /* 10944c49 push eax */
  push32((uint32_t)(EAX));
  /* 10944c4a mov dword ptr [0x10949340], eax */
  w32((uint32_t)(0x10949340), (EAX));
  /* 10944c4f call 0x10944d22 */
  push32(0x10944c54u); f_10944d22();
  /* 10944c54 lea esi, [esi + 0x10948c1c] */
  ESI = ((uint32_t)(ESI + 0x10948c1c));
  /* 10944c5a mov edi, 0x10949350 */
  EDI = (0x10949350u);
  /* 10944c5f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10944c60 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10944c61 pop ecx */
  ECX = (pop32());
  /* 10944c62 mov dword ptr [0x10949564], eax */
  w32((uint32_t)(0x10949564), (EAX));
  /* 10944c67 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10944c68 jmp 0x10944cbc */
  goto L_10944cbc;
L_10944c6a:;
  /* 10944c6a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944c6b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944c6c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10944c70 jne 0x10944bbd */
  if (!C.zf) goto L_10944bbd;
L_10944c76:;
  /* 10944c76 mov eax, esi */
  EAX = (ESI);
L_10944c78:;
  /* 10944c78 or byte ptr [eax + 0x10949461], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949461)))|(0x8u); w8((uint32_t)(EAX + 0x10949461), (_r)); fl_logic(_r,8); }
  /* 10944c7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944c80 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944c85 jb 0x10944c78 */
  if (C.cf) goto L_10944c78;
  /* 10944c87 push ebx */
  push32((uint32_t)(EBX));
  /* 10944c88 call 0x10944d22 */
  push32(0x10944c8du); f_10944d22();
  /* 10944c8d pop ecx */
  ECX = (pop32());
  /* 10944c8e mov dword ptr [0x10949564], eax */
  w32((uint32_t)(0x10949564), (EAX));
  /* 10944c93 mov dword ptr [0x1094935c], esi */
  w32((uint32_t)(0x1094935c), (ESI));
  /* 10944c99 jmp 0x10944ca2 */
  goto L_10944ca2;
L_10944c9b:;
  /* 10944c9b and dword ptr [0x1094935c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1094935c)))&(0x0u); w32((uint32_t)(0x1094935c), (_r)); fl_logic(_r,32); }
L_10944ca2:;
  /* 10944ca2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944ca4 mov edi, 0x10949350 */
  EDI = (0x10949350u);
  /* 10944ca9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10944caa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10944cab stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10944cac jmp 0x10944cbc */
  goto L_10944cbc;
L_10944cae:;
  /* 10944cae cmp dword ptr [0x109492e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x109492e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944cb5 je 0x10944cc6 */
  if (C.zf) goto L_10944cc6;
L_10944cb7:;
  /* 10944cb7 call 0x10944d55 */
  push32(0x10944cbcu); f_10944d55();
L_10944cbc:;
  /* 10944cbc call 0x10944d7e */
  push32(0x10944cc1u); f_10944d7e();
  /* 10944cc1 jmp 0x10944b52 */
  goto L_10944b52;
L_10944cc6:;
  /* 10944cc6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10944cc9:;
  /* 10944cc9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10944ccb call 0x109448cd */
  push32(0x10944cd0u); f_109448cd();
  /* 10944cd0 pop ecx */
  ECX = (pop32());
  /* 10944cd1 mov eax, esi */
  EAX = (ESI);
  /* 10944cd3 pop edi */
  EDI = (pop32());
  /* 10944cd4 pop esi */
  ESI = (pop32());
  /* 10944cd5 pop ebx */
  EBX = (pop32());
  /* 10944cd6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10944cd7 ret  */
  ESPCHK(0x10944b2bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004cd8 @ 0x10944cd8 (74 bytes, 15 insns) */
void f_10944cd8(void) {
  FTRACE(0x10944cd8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944cd8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10944cdc and dword ptr [0x109492e8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x109492e8)))&(0x0u); w32((uint32_t)(0x109492e8), (_r)); fl_logic(_r,32); }
  /* 10944ce3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944ce6 jne 0x10944cf8 */
  if (!C.zf) goto L_10944cf8;
  /* 10944ce8 mov dword ptr [0x109492e8], 1 */
  w32((uint32_t)(0x109492e8), (0x1u));
  /* 10944cf2 jmp dword ptr [0x10947038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10947038)))); return;
L_10944cf8:;
  /* 10944cf8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944cfb jne 0x10944d0d */
  if (!C.zf) goto L_10944d0d;
  /* 10944cfd mov dword ptr [0x109492e8], 1 */
  w32((uint32_t)(0x109492e8), (0x1u));
  /* 10944d07 jmp dword ptr [0x10947030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10947030)))); return;
L_10944d0d:;
  /* 10944d0d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944d10 jne 0x10944d21 */
  if (!C.zf) goto L_10944d21;
  /* 10944d12 mov eax, dword ptr [0x10949318] */
  EAX = (r32((uint32_t)(0x10949318)));
  /* 10944d17 mov dword ptr [0x109492e8], 1 */
  w32((uint32_t)(0x109492e8), (0x1u));
L_10944d21:;
  /* 10944d21 ret  */
  ESPCHK(0x10944cd8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d22 @ 0x10944d22 (51 bytes, 19 insns) */
void f_10944d22(void) {
  FTRACE(0x10944d22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944d22 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10944d26 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944d2b je 0x10944d4f */
  if (C.zf) goto L_10944d4f;
  /* 10944d2d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944d30 je 0x10944d49 */
  if (C.zf) goto L_10944d49;
  /* 10944d32 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944d35 je 0x10944d43 */
  if (C.zf) goto L_10944d43;
  /* 10944d37 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10944d38 je 0x10944d3d */
  if (C.zf) goto L_10944d3d;
  /* 10944d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944d3c ret  */
  ESPCHK(0x10944d22u, _esp0);
  ESP += 4; return;
L_10944d3d:;
  /* 10944d3d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10944d42 ret  */
  ESPCHK(0x10944d22u, _esp0);
  ESP += 4; return;
L_10944d43:;
  /* 10944d43 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10944d48 ret  */
  ESPCHK(0x10944d22u, _esp0);
  ESP += 4; return;
L_10944d49:;
  /* 10944d49 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10944d4e ret  */
  ESPCHK(0x10944d22u, _esp0);
  ESP += 4; return;
L_10944d4f:;
  /* 10944d4f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10944d54 ret  */
  ESPCHK(0x10944d22u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d55 @ 0x10944d55 (41 bytes, 17 insns) */
void f_10944d55(void) {
  FTRACE(0x10944d55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944d55 push edi */
  push32((uint32_t)(EDI));
  /* 10944d56 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10944d58 pop ecx */
  ECX = (pop32());
  /* 10944d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944d5b mov edi, 0x10949460 */
  EDI = (0x10949460u);
  /* 10944d60 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10944d62 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10944d63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944d65 mov edi, 0x10949350 */
  EDI = (0x10949350u);
  /* 10944d6a mov dword ptr [0x10949340], eax */
  w32((uint32_t)(0x10949340), (EAX));
  /* 10944d6f mov dword ptr [0x1094935c], eax */
  w32((uint32_t)(0x1094935c), (EAX));
  /* 10944d74 mov dword ptr [0x10949564], eax */
  w32((uint32_t)(0x10949564), (EAX));
  /* 10944d79 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10944d7a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10944d7b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10944d7c pop edi */
  EDI = (pop32());
  /* 10944d7d ret  */
  ESPCHK(0x10944d55u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d7e @ 0x10944d7e (389 bytes, 124 insns) */
void f_10944d7e(void) {
  FTRACE(0x10944d7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944d7e push ebp */
  push32((uint32_t)(EBP));
  /* 10944d7f mov ebp, esp */
  EBP = (ESP);
  /* 10944d81 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944d87 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10944d8a push esi */
  push32((uint32_t)(ESI));
  /* 10944d8b push eax */
  push32((uint32_t)(EAX));
  /* 10944d8c push dword ptr [0x10949340] */
  push32((uint32_t)(r32((uint32_t)(0x10949340))));
  /* 10944d92 call dword ptr [0x10947034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947034))), 0x10944d98u);
  /* 10944d98 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944d9b jne 0x10944eb7 */
  if (!C.zf) goto L_10944eb7;
  /* 10944da1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944da3 mov esi, 0x100 */
  ESI = (0x100u);
L_10944da8:;
  /* 10944da8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10944daf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944db0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944db2 jb 0x10944da8 */
  if (C.cf) goto L_10944da8;
  /* 10944db4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10944db7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10944dbe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10944dc0 je 0x10944df9 */
  if (C.zf) goto L_10944df9;
  /* 10944dc2 push ebx */
  push32((uint32_t)(EBX));
  /* 10944dc3 push edi */
  push32((uint32_t)(EDI));
  /* 10944dc4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10944dc7:;
  /* 10944dc7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10944dca movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10944dcd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944dcf ja 0x10944dee */
  if ((!C.cf&&!C.zf)) goto L_10944dee;
  /* 10944dd1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944dd3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10944dda inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944ddb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10944de0 mov ebx, ecx */
  EBX = (ECX);
  /* 10944de2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10944de5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10944de7 mov ecx, ebx */
  ECX = (EBX);
  /* 10944de9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10944dec rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10944dee:;
  /* 10944dee inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10944def inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10944df0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10944df3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10944df5 jne 0x10944dc7 */
  if (!C.zf) goto L_10944dc7;
  /* 10944df7 pop edi */
  EDI = (pop32());
  /* 10944df8 pop ebx */
  EBX = (pop32());
L_10944df9:;
  /* 10944df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10944dfb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10944e01 push dword ptr [0x10949564] */
  push32((uint32_t)(r32((uint32_t)(0x10949564))));
  /* 10944e07 push dword ptr [0x10949340] */
  push32((uint32_t)(r32((uint32_t)(0x10949340))));
  /* 10944e0d push eax */
  push32((uint32_t)(EAX));
  /* 10944e0e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10944e14 push esi */
  push32((uint32_t)(ESI));
  /* 10944e15 push eax */
  push32((uint32_t)(EAX));
  /* 10944e16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10944e18 call 0x10945ef2 */
  push32(0x10944e1du); f_10945ef2();
  /* 10944e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10944e1f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10944e25 push dword ptr [0x10949340] */
  push32((uint32_t)(r32((uint32_t)(0x10949340))));
  /* 10944e2b push esi */
  push32((uint32_t)(ESI));
  /* 10944e2c push eax */
  push32((uint32_t)(EAX));
  /* 10944e2d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10944e33 push esi */
  push32((uint32_t)(ESI));
  /* 10944e34 push eax */
  push32((uint32_t)(EAX));
  /* 10944e35 push esi */
  push32((uint32_t)(ESI));
  /* 10944e36 push dword ptr [0x10949564] */
  push32((uint32_t)(r32((uint32_t)(0x10949564))));
  /* 10944e3c call 0x10945ca3 */
  push32(0x10944e41u); f_10945ca3();
  /* 10944e41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10944e43 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10944e49 push dword ptr [0x10949340] */
  push32((uint32_t)(r32((uint32_t)(0x10949340))));
  /* 10944e4f push esi */
  push32((uint32_t)(ESI));
  /* 10944e50 push eax */
  push32((uint32_t)(EAX));
  /* 10944e51 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10944e57 push esi */
  push32((uint32_t)(ESI));
  /* 10944e58 push eax */
  push32((uint32_t)(EAX));
  /* 10944e59 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10944e5e push dword ptr [0x10949564] */
  push32((uint32_t)(r32((uint32_t)(0x10949564))));
  /* 10944e64 call 0x10945ca3 */
  push32(0x10944e69u); f_10945ca3();
  /* 10944e69 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10944e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944e6e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10944e74:;
  /* 10944e74 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10944e77 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10944e7a je 0x10944e92 */
  if (C.zf) goto L_10944e92;
  /* 10944e7c or byte ptr [eax + 0x10949461], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949461)))|(0x10u); w8((uint32_t)(EAX + 0x10949461), (_r)); fl_logic(_r,8); }
  /* 10944e83 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10944e8a:;
  /* 10944e8a mov byte ptr [eax + 0x10949360], dl */
  w8((uint32_t)(EAX + 0x10949360), (DL));
  /* 10944e90 jmp 0x10944eae */
  goto L_10944eae;
L_10944e92:;
  /* 10944e92 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10944e95 je 0x10944ea7 */
  if (C.zf) goto L_10944ea7;
  /* 10944e97 or byte ptr [eax + 0x10949461], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949461)))|(0x20u); w8((uint32_t)(EAX + 0x10949461), (_r)); fl_logic(_r,8); }
  /* 10944e9e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10944ea5 jmp 0x10944e8a */
  goto L_10944e8a;
L_10944ea7:;
  /* 10944ea7 and byte ptr [eax + 0x10949360], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949360)))&(0x0u); w8((uint32_t)(EAX + 0x10949360), (_r)); fl_logic(_r,8); }
L_10944eae:;
  /* 10944eae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944eaf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944eb0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10944eb1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944eb3 jb 0x10944e74 */
  if (C.cf) goto L_10944e74;
  /* 10944eb5 jmp 0x10944f00 */
  goto L_10944f00;
L_10944eb7:;
  /* 10944eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10944eb9 mov esi, 0x100 */
  ESI = (0x100u);
L_10944ebe:;
  /* 10944ebe cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944ec1 jb 0x10944edc */
  if (C.cf) goto L_10944edc;
  /* 10944ec3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944ec6 ja 0x10944edc */
  if ((!C.cf&&!C.zf)) goto L_10944edc;
  /* 10944ec8 or byte ptr [eax + 0x10949461], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949461)))|(0x10u); w8((uint32_t)(EAX + 0x10949461), (_r)); fl_logic(_r,8); }
  /* 10944ecf mov cl, al */
  CL = (AL);
  /* 10944ed1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10944ed4:;
  /* 10944ed4 mov byte ptr [eax + 0x10949360], cl */
  w8((uint32_t)(EAX + 0x10949360), (CL));
  /* 10944eda jmp 0x10944efb */
  goto L_10944efb;
L_10944edc:;
  /* 10944edc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944edf jb 0x10944ef4 */
  if (C.cf) goto L_10944ef4;
  /* 10944ee1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944ee4 ja 0x10944ef4 */
  if ((!C.cf&&!C.zf)) goto L_10944ef4;
  /* 10944ee6 or byte ptr [eax + 0x10949461], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949461)))|(0x20u); w8((uint32_t)(EAX + 0x10949461), (_r)); fl_logic(_r,8); }
  /* 10944eed mov cl, al */
  CL = (AL);
  /* 10944eef sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10944ef2 jmp 0x10944ed4 */
  goto L_10944ed4;
L_10944ef4:;
  /* 10944ef4 and byte ptr [eax + 0x10949360], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10949360)))&(0x0u); w8((uint32_t)(EAX + 0x10949360), (_r)); fl_logic(_r,8); }
L_10944efb:;
  /* 10944efb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10944efc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944efe jb 0x10944ebe */
  if (C.cf) goto L_10944ebe;
L_10944f00:;
  /* 10944f00 pop esi */
  ESI = (pop32());
  /* 10944f01 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10944f02 ret  */
  ESPCHK(0x10944d7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f03 @ 0x10944f03 (28 bytes, 7 insns) */
void f_10944f03(void) {
  FTRACE(0x10944f03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944f03 cmp dword ptr [0x10949688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10949688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944f0a jne 0x10944f1e */
  if (!C.zf) goto L_10944f1e;
  /* 10944f0c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10944f0e call 0x10944b2b */
  push32(0x10944f13u); f_10944b2b();
  /* 10944f13 pop ecx */
  ECX = (pop32());
  /* 10944f14 mov dword ptr [0x10949688], 1 */
  w32((uint32_t)(0x10949688), (0x1u));
L_10944f1e:;
  /* 10944f1e ret  */
  ESPCHK(0x10944f03u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f20 @ 0x10944f20 (664 bytes, 267 insns) [15 switch table(s)] */
void f_10944f20(void) {
  FTRACE(0x10944f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10944f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10944f21 mov ebp, esp */
  EBP = (ESP);
  /* 10944f23 push edi */
  push32((uint32_t)(EDI));
  /* 10944f24 push esi */
  push32((uint32_t)(ESI));
  /* 10944f25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10944f28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10944f2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10944f2e mov eax, ecx */
  EAX = (ECX);
  /* 10944f30 mov edx, ecx */
  EDX = (ECX);
  /* 10944f32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944f34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944f36 jbe 0x10944f40 */
  if ((C.cf||C.zf)) goto L_10944f40;
  /* 10944f38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944f3a jb 0x109450b8 */
  if (C.cf) goto L_109450b8;
L_10944f40:;
  /* 10944f40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10944f46 jne 0x10944f5c */
  if (!C.zf) goto L_10944f5c;
  /* 10944f48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10944f4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10944f4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944f51 jb 0x10944f7c */
  if (C.cf) goto L_10944f7c;
  /* 10944f53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10944f55 jmp dword ptr [edx*4 + 0x10945068] */
  switch (EDX) {
    case 0: goto L_10945078;
    case 1: goto L_10945080;
    case 2: goto L_1094508c;
    case 3: goto L_109450a0;
    default: x86_unimpl("switch@0x10944f55 out of table"); return;
  }
L_10944f5c:;
  /* 10944f5c mov eax, edi */
  EAX = (EDI);
  /* 10944f5e mov edx, 3 */
  EDX = (0x3u);
  /* 10944f63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10944f66 jb 0x10944f74 */
  if (C.cf) goto L_10944f74;
  /* 10944f68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10944f6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10944f6d jmp dword ptr [eax*4 + 0x10944f80] */
  switch (EAX) {
    case 1: goto L_10944f90;
    case 2: goto L_10944fbc;
    case 3: goto L_10944fe0;
    default: x86_unimpl("switch@0x10944f6d out of table"); return;
  }
L_10944f74:;
  /* 10944f74 jmp dword ptr [ecx*4 + 0x10945078] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10945078)))); return;
  /* 10944f7b nop  */
  /* nop */
L_10944f7c:;
  /* 10944f7c jmp dword ptr [ecx*4 + 0x10944ffc] */
  switch (ECX) {
    case 0: goto L_1094505f;
    case 1: goto L_1094504c;
    case 2: goto L_10945044;
    case 3: goto L_1094503c;
    case 4: goto L_10945034;
    case 5: goto L_1094502c;
    case 6: goto L_10945024;
    case 7: goto L_1094501c;
    default: x86_unimpl("switch@0x10944f7c out of table"); return;
  }
  /* 10944f83 nop  */
  /* nop */
L_10944f90:;
  /* 10944f90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10944f92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10944f94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10944f96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10944f99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10944f9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10944f9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10944fa2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10944fa5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944fa8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944fab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944fae jb 0x10944f7c */
  if (C.cf) goto L_10944f7c;
  /* 10944fb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10944fb2 jmp dword ptr [edx*4 + 0x10945068] */
  switch (EDX) {
    case 0: goto L_10945078;
    case 1: goto L_10945080;
    case 2: goto L_1094508c;
    case 3: goto L_109450a0;
    default: x86_unimpl("switch@0x10944fb2 out of table"); return;
  }
  /* 10944fb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10944fbc:;
  /* 10944fbc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10944fbe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10944fc0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10944fc2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10944fc5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10944fc8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10944fcb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944fce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10944fd1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944fd4 jb 0x10944f7c */
  if (C.cf) goto L_10944f7c;
  /* 10944fd6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10944fd8 jmp dword ptr [edx*4 + 0x10945068] */
  switch (EDX) {
    case 0: goto L_10945078;
    case 1: goto L_10945080;
    case 2: goto L_1094508c;
    case 3: goto L_109450a0;
    default: x86_unimpl("switch@0x10944fd8 out of table"); return;
  }
  /* 10944fdf nop  */
  /* nop */
L_10944fe0:;
  /* 10944fe0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10944fe2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10944fe4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10944fe6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10944fe7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10944fea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10944feb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10944fee jb 0x10944f7c */
  if (C.cf) goto L_10944f7c;
  /* 10944ff0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10944ff2 jmp dword ptr [edx*4 + 0x10945068] */
  switch (EDX) {
    case 0: goto L_10945078;
    case 1: goto L_10945080;
    case 2: goto L_1094508c;
    case 3: goto L_109450a0;
    default: x86_unimpl("switch@0x10944ff2 out of table"); return;
  }
  /* 10944ff9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1094501c:;
  /* 1094501c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10945020 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10945024:;
  /* 10945024 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10945028 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1094502c:;
  /* 1094502c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10945030 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10945034:;
  /* 10945034 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10945038 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1094503c:;
  /* 1094503c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10945040 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10945044:;
  /* 10945044 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10945048 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1094504c:;
  /* 1094504c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10945050 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10945054 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1094505b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1094505d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1094505f:;
  /* 1094505f jmp dword ptr [edx*4 + 0x10945068] */
  switch (EDX) {
    case 0: goto L_10945078;
    case 1: goto L_10945080;
    case 2: goto L_1094508c;
    case 3: goto L_109450a0;
    default: x86_unimpl("switch@0x1094505f out of table"); return;
  }
  /* 10945066 mov edi, edi */
  EDI = (EDI);
L_10945078:;
  /* 10945078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1094507b pop esi */
  ESI = (pop32());
  /* 1094507c pop edi */
  EDI = (pop32());
  /* 1094507d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1094507e ret  */
  ESPCHK(0x10944f20u, _esp0);
  ESP += 4; return;
  /* 1094507f nop  */
  /* nop */
L_10945080:;
  /* 10945080 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10945082 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10945084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945087 pop esi */
  ESI = (pop32());
  /* 10945088 pop edi */
  EDI = (pop32());
  /* 10945089 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1094508a ret  */
  ESPCHK(0x10944f20u, _esp0);
  ESP += 4; return;
  /* 1094508b nop  */
  /* nop */
L_1094508c:;
  /* 1094508c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1094508e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10945090 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10945093 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10945096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945099 pop esi */
  ESI = (pop32());
  /* 1094509a pop edi */
  EDI = (pop32());
  /* 1094509b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1094509c ret  */
  ESPCHK(0x10944f20u, _esp0);
  ESP += 4; return;
  /* 1094509d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109450a0:;
  /* 109450a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109450a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109450a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109450a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109450aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109450ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109450b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109450b3 pop esi */
  ESI = (pop32());
  /* 109450b4 pop edi */
  EDI = (pop32());
  /* 109450b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109450b6 ret  */
  ESPCHK(0x10944f20u, _esp0);
  ESP += 4; return;
  /* 109450b7 nop  */
  /* nop */
L_109450b8:;
  /* 109450b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 109450bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 109450c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109450c6 jne 0x109450ec */
  if (!C.zf) goto L_109450ec;
  /* 109450c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109450cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109450ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109450d1 jb 0x109450e0 */
  if (C.cf) goto L_109450e0;
  /* 109450d3 std  */
  C.df=1;
  /* 109450d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109450d6 cld  */
  C.df=0;
  /* 109450d7 jmp dword ptr [edx*4 + 0x10945200] */
  switch (EDX) {
    case 0: goto L_10945210;
    case 1: goto L_10945218;
    case 2: goto L_10945228;
    case 3: goto L_1094523c;
    default: x86_unimpl("switch@0x109450d7 out of table"); return;
  }
  /* 109450de mov edi, edi */
  EDI = (EDI);
L_109450e0:;
  /* 109450e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 109450e2 jmp dword ptr [ecx*4 + 0x109451b0] */
  switch (ECX) {
    case 0: goto L_109451f7;
    default: x86_unimpl("switch@0x109450e2 out of table"); return;
  }
  /* 109450e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109450ec:;
  /* 109450ec mov eax, edi */
  EAX = (EDI);
  /* 109450ee mov edx, 3 */
  EDX = (0x3u);
  /* 109450f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109450f6 jb 0x10945104 */
  if (C.cf) goto L_10945104;
  /* 109450f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109450fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109450fd jmp dword ptr [eax*4 + 0x10945108] */
  switch (EAX) {
    case 1: goto L_10945118;
    case 2: goto L_10945138;
    case 3: goto L_10945160;
    default: x86_unimpl("switch@0x109450fd out of table"); return;
  }
L_10945104:;
  /* 10945104 jmp dword ptr [ecx*4 + 0x10945200] */
  switch (ECX) {
    case 0: goto L_10945210;
    case 1: goto L_10945218;
    case 2: goto L_10945228;
    case 3: goto L_1094523c;
    default: x86_unimpl("switch@0x10945104 out of table"); return;
  }
  /* 1094510b nop  */
  /* nop */
L_10945118:;
  /* 10945118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094511b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1094511d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10945120 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10945121 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10945124 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10945125 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945128 jb 0x109450e0 */
  if (C.cf) goto L_109450e0;
  /* 1094512a std  */
  C.df=1;
  /* 1094512b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1094512d cld  */
  C.df=0;
  /* 1094512e jmp dword ptr [edx*4 + 0x10945200] */
  switch (EDX) {
    case 0: goto L_10945210;
    case 1: goto L_10945218;
    case 2: goto L_10945228;
    case 3: goto L_1094523c;
    default: x86_unimpl("switch@0x1094512e out of table"); return;
  }
  /* 10945135 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10945138:;
  /* 10945138 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094513b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1094513d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10945140 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10945143 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10945146 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10945149 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094514c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094514f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945152 jb 0x109450e0 */
  if (C.cf) goto L_109450e0;
  /* 10945154 std  */
  C.df=1;
  /* 10945155 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10945157 cld  */
  C.df=0;
  /* 10945158 jmp dword ptr [edx*4 + 0x10945200] */
  switch (EDX) {
    case 0: goto L_10945210;
    case 1: goto L_10945218;
    case 2: goto L_10945228;
    case 3: goto L_1094523c;
    default: x86_unimpl("switch@0x10945158 out of table"); return;
  }
  /* 1094515f nop  */
  /* nop */
L_10945160:;
  /* 10945160 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10945163 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10945165 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10945168 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1094516b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1094516e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10945171 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10945174 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10945177 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094517a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094517d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945180 jb 0x109450e0 */
  if (C.cf) goto L_109450e0;
  /* 10945186 std  */
  C.df=1;
  /* 10945187 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10945189 cld  */
  C.df=0;
  /* 1094518a jmp dword ptr [edx*4 + 0x10945200] */
  switch (EDX) {
    case 0: goto L_10945210;
    case 1: goto L_10945218;
    case 2: goto L_10945228;
    case 3: goto L_1094523c;
    default: x86_unimpl("switch@0x1094518a out of table"); return;
  }
  /* 10945191 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10945194 mov ah, 0x51 */
  AH = (0x51u);
  /* 10945196 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10945197 adc byte ptr [ecx + edx*2 + 0x51c41094], bh */
  { uint32_t _a=(r8((uint32_t)(ECX + EDX*2 + 0x51c41094))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ECX + EDX*2 + 0x51c41094), (_r)); fl_add(_a,_b,_r,8); }
  /* 1094519e xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1094519f adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109451a1 push ecx */
  push32((uint32_t)(ECX));
  /* 109451a2 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 109451a3 adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109451a5 push ecx */
  push32((uint32_t)(ECX));
  /* 109451a6 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 109451a7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109451a9 push ecx */
  push32((uint32_t)(ECX));
  /* 109451aa xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 109451ab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109451ad push ecx */
  push32((uint32_t)(ECX));
  /* 109451ae xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 109451b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 109451b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 109451bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 109451c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 109451c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 109451c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 109451cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 109451d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 109451d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 109451d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 109451dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 109451e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 109451e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 109451e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 109451ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109451f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109451f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109451f7:;
  /* 109451f7 jmp dword ptr [edx*4 + 0x10945200] */
  switch (EDX) {
    case 0: goto L_10945210;
    case 1: goto L_10945218;
    case 2: goto L_10945228;
    case 3: goto L_1094523c;
    default: x86_unimpl("switch@0x109451f7 out of table"); return;
  }
  /* 109451fe mov edi, edi */
  EDI = (EDI);
L_10945210:;
  /* 10945210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945213 pop esi */
  ESI = (pop32());
  /* 10945214 pop edi */
  EDI = (pop32());
  /* 10945215 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10945216 ret  */
  ESPCHK(0x10944f20u, _esp0);
  ESP += 4; return;
  /* 10945217 nop  */
  /* nop */
L_10945218:;
  /* 10945218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094521b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1094521e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945221 pop esi */
  ESI = (pop32());
  /* 10945222 pop edi */
  EDI = (pop32());
  /* 10945223 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10945224 ret  */
  ESPCHK(0x10944f20u, _esp0);
  ESP += 4; return;
  /* 10945225 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10945228:;
  /* 10945228 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094522b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1094522e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10945231 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10945234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945237 pop esi */
  ESI = (pop32());
  /* 10945238 pop edi */
  EDI = (pop32());
  /* 10945239 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1094523a ret  */
  ESPCHK(0x10944f20u, _esp0);
  ESP += 4; return;
  /* 1094523b nop  */
  /* nop */
L_1094523c:;
  /* 1094523c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094523f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10945242 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10945245 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10945248 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1094524b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1094524e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945251 pop esi */
  ESI = (pop32());
  /* 10945252 pop edi */
  EDI = (pop32());
  /* 10945253 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10945254 ret  */
  ESPCHK(0x10944f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005255 @ 0x10945255 (62 bytes, 15 insns) */
void f_10945255(void) {
  FTRACE(0x10945255u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945255 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1094525a push 0 */
  push32((uint32_t)(0x0u));
  /* 1094525c push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 10945262 call dword ptr [0x10947044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947044))), 0x10945268u);
  /* 10945268 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1094526a mov dword ptr [0x1094933c], eax */
  w32((uint32_t)(0x1094933c), (EAX));
  /* 1094526f jne 0x10945272 */
  if (!C.zf) goto L_10945272;
  /* 10945271 ret  */
  ESPCHK(0x10945255u, _esp0);
  ESP += 4; return;
L_10945272:;
  /* 10945272 and dword ptr [0x10949334], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10949334)))&(0x0u); w32((uint32_t)(0x10949334), (_r)); fl_logic(_r,32); }
  /* 10945279 and dword ptr [0x10949338], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10949338)))&(0x0u); w32((uint32_t)(0x10949338), (_r)); fl_logic(_r,32); }
  /* 10945280 push 1 */
  push32((uint32_t)(0x1u));
  /* 10945282 mov dword ptr [0x10949330], eax */
  w32((uint32_t)(0x10949330), (EAX));
  /* 10945287 mov dword ptr [0x10949328], 0x10 */
  w32((uint32_t)(0x10949328), (0x10u));
  /* 10945291 pop eax */
  EAX = (pop32());
  /* 10945292 ret  */
  ESPCHK(0x10945255u, _esp0);
  ESP += 4; return;
}

/* FUN_10005293 @ 0x10945293 (43 bytes, 14 insns) */
void f_10945293(void) {
  FTRACE(0x10945293u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945293 mov eax, dword ptr [0x10949338] */
  EAX = (r32((uint32_t)(0x10949338)));
  /* 10945298 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1094529b mov eax, dword ptr [0x1094933c] */
  EAX = (r32((uint32_t)(0x1094933c)));
  /* 109452a0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_109452a3:;
  /* 109452a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109452a5 jae 0x109452bb */
  if (!C.cf) goto L_109452bb;
  /* 109452a7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 109452ab sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109452ae cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109452b4 jb 0x109452bd */
  if (C.cf) goto L_109452bd;
  /* 109452b6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109452b9 jmp 0x109452a3 */
  goto L_109452a3;
L_109452bb:;
  /* 109452bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109452bd:;
  /* 109452bd ret  */
  ESPCHK(0x10945293u, _esp0);
  ESP += 4; return;
}

/* FUN_100052be @ 0x109452be (811 bytes, 264 insns) */
void f_109452be(void) {
  FTRACE(0x109452beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109452be push ebp */
  push32((uint32_t)(EBP));
  /* 109452bf mov ebp, esp */
  EBP = (ESP);
  /* 109452c1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109452c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 109452c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109452ca push ebx */
  push32((uint32_t)(EBX));
  /* 109452cb push esi */
  push32((uint32_t)(ESI));
  /* 109452cc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 109452cf mov esi, edx */
  ESI = (EDX);
  /* 109452d1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109452d4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 109452d7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109452da push edi */
  push32((uint32_t)(EDI));
  /* 109452db shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 109452de mov ecx, esi */
  ECX = (ESI);
  /* 109452e0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 109452e3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109452e9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109452ea mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 109452ed lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 109452f4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 109452f7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 109452fa mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 109452fd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10945300 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10945303 jne 0x10945384 */
  if (!C.zf) goto L_10945384;
  /* 10945305 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10945308 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1094530a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1094530b pop edi */
  EDI = (pop32());
  /* 1094530c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1094530f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945311 jbe 0x10945316 */
  if ((C.cf||C.zf)) goto L_10945316;
  /* 10945313 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10945316:;
  /* 10945316 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1094531a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094531e jne 0x10945368 */
  if (!C.zf) goto L_10945368;
  /* 10945320 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10945323 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945326 jae 0x10945344 */
  if (!C.cf) goto L_10945344;
  /* 10945328 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1094532d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1094532f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10945333 not edi */
  EDI = (~(EDI));
  /* 10945335 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10945339 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1094533b jne 0x10945368 */
  if (!C.zf) goto L_10945368;
  /* 1094533d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945340 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10945342 jmp 0x10945368 */
  goto L_10945368;
L_10945344:;
  /* 10945344 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945347 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1094534c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1094534e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10945351 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10945355 not edi */
  EDI = (~(EDI));
  /* 10945357 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1094535e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10945360 jne 0x10945368 */
  if (!C.zf) goto L_10945368;
  /* 10945362 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945365 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10945368:;
  /* 10945368 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1094536c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10945370 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10945373 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10945377 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1094537b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1094537e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10945381 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10945384:;
  /* 10945384 mov edi, ebx */
  EDI = (EBX);
  /* 10945386 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10945389 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1094538a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094538d jbe 0x10945392 */
  if ((C.cf||C.zf)) goto L_10945392;
  /* 1094538f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10945391 pop edi */
  EDI = (pop32());
L_10945392:;
  /* 10945392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10945395 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10945398 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1094539b jne 0x10945441 */
  if (!C.zf) goto L_10945441;
  /* 109453a1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109453a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109453a7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 109453aa push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109453ac mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 109453af dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 109453b0 pop edx */
  EDX = (pop32());
  /* 109453b1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109453b3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 109453b6 jbe 0x109453bd */
  if ((C.cf||C.zf)) goto L_109453bd;
  /* 109453b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 109453bb mov ecx, edx */
  ECX = (EDX);
L_109453bd:;
  /* 109453bd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109453c0 mov edi, ebx */
  EDI = (EBX);
  /* 109453c2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 109453c5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 109453c8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109453c9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109453cb jbe 0x109453cf */
  if ((C.cf||C.zf)) goto L_109453cf;
  /* 109453cd mov edi, edx */
  EDI = (EDX);
L_109453cf:;
  /* 109453cf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109453d1 je 0x1094543e */
  if (C.zf) goto L_1094543e;
  /* 109453d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109453d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109453d9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109453dc jne 0x10945426 */
  if (!C.zf) goto L_10945426;
  /* 109453de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109453e1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109453e4 jae 0x10945402 */
  if (!C.cf) goto L_10945402;
  /* 109453e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109453eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109453ed lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 109453f1 not edx */
  EDX = (~(EDX));
  /* 109453f3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 109453f7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 109453f9 jne 0x10945426 */
  if (!C.zf) goto L_10945426;
  /* 109453fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109453fe and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10945400 jmp 0x10945426 */
  goto L_10945426;
L_10945402:;
  /* 10945402 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945405 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1094540a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1094540c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1094540f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10945413 not edx */
  EDX = (~(EDX));
  /* 10945415 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1094541c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1094541e jne 0x10945426 */
  if (!C.zf) goto L_10945426;
  /* 10945420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945423 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10945426:;
  /* 10945426 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10945429 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1094542c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1094542f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10945432 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10945435 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10945438 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1094543b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1094543e:;
  /* 1094543e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10945441:;
  /* 10945441 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945445 jne 0x10945450 */
  if (!C.zf) goto L_10945450;
  /* 10945447 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094544a je 0x109454d9 */
  if (C.zf) goto L_109454d9;
L_10945450:;
  /* 10945450 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10945453 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10945456 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10945459 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1094545c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1094545f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10945462 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10945465 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10945468 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1094546b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1094546e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10945471 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945474 jne 0x109454d9 */
  if (!C.zf) goto L_109454d9;
  /* 10945476 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1094547a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094547d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10945480 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10945482 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10945486 jae 0x109454ad */
  if (!C.cf) goto L_109454ad;
  /* 10945488 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1094548c jne 0x1094549c */
  if (!C.zf) goto L_1094549c;
  /* 1094548e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10945493 mov ecx, edi */
  ECX = (EDI);
  /* 10945495 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10945497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1094549a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1094549c:;
  /* 1094549c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 109454a1 mov ecx, edi */
  ECX = (EDI);
  /* 109454a3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 109454a5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 109454a9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 109454ab jmp 0x109454d6 */
  goto L_109454d6;
L_109454ad:;
  /* 109454ad cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109454b1 jne 0x109454c3 */
  if (!C.zf) goto L_109454c3;
  /* 109454b3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 109454b6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 109454bb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 109454bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109454c0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_109454c3:;
  /* 109454c3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 109454c6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 109454cb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 109454cd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 109454d4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_109454d6:;
  /* 109454d6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_109454d9:;
  /* 109454d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 109454dc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 109454de mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 109454e2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 109454e4 jne 0x109455e4 */
  if (!C.zf) goto L_109455e4;
  /* 109454ea mov eax, dword ptr [0x10949334] */
  EAX = (r32((uint32_t)(0x10949334)));
  /* 109454ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109454f1 je 0x109455d6 */
  if (C.zf) goto L_109455d6;
  /* 109454f7 mov ecx, dword ptr [0x1094932c] */
  ECX = (r32((uint32_t)(0x1094932c)));
  /* 109454fd mov edi, dword ptr [0x10947050] */
  EDI = (r32((uint32_t)(0x10947050)));
  /* 10945503 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10945506 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945509 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1094550e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10945513 push ebx */
  push32((uint32_t)(EBX));
  /* 10945514 push ecx */
  push32((uint32_t)(ECX));
  /* 10945515 call edi */
  call_ind((uint32_t)(EDI), 0x10945517u);
  /* 10945517 mov ecx, dword ptr [0x1094932c] */
  ECX = (r32((uint32_t)(0x1094932c)));
  /* 1094551d mov eax, dword ptr [0x10949334] */
  EAX = (r32((uint32_t)(0x10949334)));
  /* 10945522 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10945527 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10945529 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1094552c mov eax, dword ptr [0x10949334] */
  EAX = (r32((uint32_t)(0x10949334)));
  /* 10945531 mov ecx, dword ptr [0x1094932c] */
  ECX = (r32((uint32_t)(0x1094932c)));
  /* 10945537 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1094553a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10945542 mov eax, dword ptr [0x10949334] */
  EAX = (r32((uint32_t)(0x10949334)));
  /* 10945547 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1094554a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1094554d mov eax, dword ptr [0x10949334] */
  EAX = (r32((uint32_t)(0x10949334)));
  /* 10945552 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10945555 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10945559 jne 0x10945564 */
  if (!C.zf) goto L_10945564;
  /* 1094555b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1094555f mov eax, dword ptr [0x10949334] */
  EAX = (r32((uint32_t)(0x10949334)));
L_10945564:;
  /* 10945564 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945568 jne 0x109455d6 */
  if (!C.zf) goto L_109455d6;
  /* 1094556a push ebx */
  push32((uint32_t)(EBX));
  /* 1094556b push 0 */
  push32((uint32_t)(0x0u));
  /* 1094556d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10945570 call edi */
  call_ind((uint32_t)(EDI), 0x10945572u);
  /* 10945572 mov eax, dword ptr [0x10949334] */
  EAX = (r32((uint32_t)(0x10949334)));
  /* 10945577 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1094557a push 0 */
  push32((uint32_t)(0x0u));
  /* 1094557c push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 10945582 call dword ptr [0x1094704c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094704c))), 0x10945588u);
  /* 10945588 mov eax, dword ptr [0x10949338] */
  EAX = (r32((uint32_t)(0x10949338)));
  /* 1094558d mov edx, dword ptr [0x1094933c] */
  EDX = (r32((uint32_t)(0x1094933c)));
  /* 10945593 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10945596 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10945599 mov ecx, eax */
  ECX = (EAX);
  /* 1094559b mov eax, dword ptr [0x10949334] */
  EAX = (r32((uint32_t)(0x10949334)));
  /* 109455a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109455a2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 109455a6 push ecx */
  push32((uint32_t)(ECX));
  /* 109455a7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 109455aa push ecx */
  push32((uint32_t)(ECX));
  /* 109455ab push eax */
  push32((uint32_t)(EAX));
  /* 109455ac call 0x10946040 */
  push32(0x109455b1u); f_10946040();
  /* 109455b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109455b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109455b7 dec dword ptr [0x10949338] */
  { uint32_t _r=(r32((uint32_t)(0x10949338)))-1; w32((uint32_t)(0x10949338), (_r)); fl_dec(_r,32); }
  /* 109455bd cmp eax, dword ptr [0x10949334] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10949334))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109455c3 jbe 0x109455c8 */
  if ((C.cf||C.zf)) goto L_109455c8;
  /* 109455c5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_109455c8:;
  /* 109455c8 mov ecx, dword ptr [0x1094933c] */
  ECX = (r32((uint32_t)(0x1094933c)));
  /* 109455ce mov dword ptr [0x10949330], ecx */
  w32((uint32_t)(0x10949330), (ECX));
  /* 109455d4 jmp 0x109455d9 */
  goto L_109455d9;
L_109455d6:;
  /* 109455d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_109455d9:;
  /* 109455d9 mov dword ptr [0x10949334], eax */
  w32((uint32_t)(0x10949334), (EAX));
  /* 109455de mov dword ptr [0x1094932c], esi */
  w32((uint32_t)(0x1094932c), (ESI));
L_109455e4:;
  /* 109455e4 pop edi */
  EDI = (pop32());
  /* 109455e5 pop esi */
  ESI = (pop32());
  /* 109455e6 pop ebx */
  EBX = (pop32());
  /* 109455e7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109455e8 ret  */
  ESPCHK(0x109452beu, _esp0);
  ESP += 4; return;
}

/* FUN_100055e9 @ 0x109455e9 (777 bytes, 275 insns) */
void f_109455e9(void) {
  FTRACE(0x109455e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109455e9 push ebp */
  push32((uint32_t)(EBP));
  /* 109455ea mov ebp, esp */
  EBP = (ESP);
  /* 109455ec sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 109455ef mov eax, dword ptr [0x10949338] */
  EAX = (r32((uint32_t)(0x10949338)));
  /* 109455f4 mov edx, dword ptr [0x1094933c] */
  EDX = (r32((uint32_t)(0x1094933c)));
  /* 109455fa push ebx */
  push32((uint32_t)(EBX));
  /* 109455fb push esi */
  push32((uint32_t)(ESI));
  /* 109455fc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 109455ff push edi */
  push32((uint32_t)(EDI));
  /* 10945600 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10945603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945606 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10945609 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1094560c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1094560f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10945612 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10945615 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10945616 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945619 jge 0x10945629 */
  if ((C.sf==C.of)) goto L_10945629;
  /* 1094561b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1094561e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10945620 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10945624 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10945627 jmp 0x10945639 */
  goto L_10945639;
L_10945629:;
  /* 10945629 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1094562c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1094562f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10945631 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10945633 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10945636 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10945639:;
  /* 10945639 mov eax, dword ptr [0x10949330] */
  EAX = (r32((uint32_t)(0x10949330)));
  /* 1094563e mov ebx, eax */
  EBX = (EAX);
  /* 10945640 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945642 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10945645 jae 0x10945660 */
  if (!C.cf) goto L_10945660;
L_10945647:;
  /* 10945647 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1094564a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1094564c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1094564f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10945651 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10945653 jne 0x10945660 */
  if (!C.zf) goto L_10945660;
  /* 10945655 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945658 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094565b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1094565e jb 0x10945647 */
  if (C.cf) goto L_10945647;
L_10945660:;
  /* 10945660 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945663 jne 0x109456de */
  if (!C.zf) goto L_109456de;
  /* 10945665 mov ebx, edx */
  EBX = (EDX);
L_10945667:;
  /* 10945667 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945669 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1094566c jae 0x10945683 */
  if (!C.cf) goto L_10945683;
  /* 1094566e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10945671 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10945673 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10945676 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10945678 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1094567a jne 0x10945681 */
  if (!C.zf) goto L_10945681;
  /* 1094567c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1094567f jmp 0x10945667 */
  goto L_10945667;
L_10945681:;
  /* 10945681 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10945683:;
  /* 10945683 jne 0x109456de */
  if (!C.zf) goto L_109456de;
L_10945685:;
  /* 10945685 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945688 jae 0x1094569b */
  if (!C.cf) goto L_1094569b;
  /* 1094568a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094568e jne 0x10945698 */
  if (!C.zf) goto L_10945698;
  /* 10945690 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945693 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10945696 jmp 0x10945685 */
  goto L_10945685;
L_10945698:;
  /* 10945698 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1094569b:;
  /* 1094569b jne 0x109456c3 */
  if (!C.zf) goto L_109456c3;
  /* 1094569d mov ebx, edx */
  EBX = (EDX);
L_1094569f:;
  /* 1094569f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109456a1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 109456a4 jae 0x109456b3 */
  if (!C.cf) goto L_109456b3;
  /* 109456a6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109456aa jne 0x109456b1 */
  if (!C.zf) goto L_109456b1;
  /* 109456ac add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109456af jmp 0x1094569f */
  goto L_1094569f;
L_109456b1:;
  /* 109456b1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_109456b3:;
  /* 109456b3 jne 0x109456c3 */
  if (!C.zf) goto L_109456c3;
  /* 109456b5 call 0x109458f2 */
  push32(0x109456bau); f_109458f2();
  /* 109456ba mov ebx, eax */
  EBX = (EAX);
  /* 109456bc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 109456be mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 109456c1 je 0x109456d7 */
  if (C.zf) goto L_109456d7;
L_109456c3:;
  /* 109456c3 push ebx */
  push32((uint32_t)(EBX));
  /* 109456c4 call 0x109459a3 */
  push32(0x109456c9u); f_109459a3();
  /* 109456c9 pop ecx */
  ECX = (pop32());
  /* 109456ca mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 109456cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 109456cf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 109456d2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109456d5 jne 0x109456de */
  if (!C.zf) goto L_109456de;
L_109456d7:;
  /* 109456d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109456d9 jmp 0x109458ed */
  goto L_109458ed;
L_109456de:;
  /* 109456de mov dword ptr [0x10949330], ebx */
  w32((uint32_t)(0x10949330), (EBX));
  /* 109456e4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 109456e7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 109456e9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109456ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 109456ef je 0x10945705 */
  if (C.zf) goto L_10945705;
  /* 109456f1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 109456f8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 109456fc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 109456ff and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10945701 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10945703 jne 0x1094573c */
  if (!C.zf) goto L_1094573c;
L_10945705:;
  /* 10945705 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1094570b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1094570e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10945711 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10945714 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10945718 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1094571b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1094571d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10945720 jne 0x10945739 */
  if (!C.zf) goto L_10945739;
L_10945722:;
  /* 10945722 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10945728 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1094572b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1094572e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945731 mov edi, esi */
  EDI = (ESI);
  /* 10945733 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10945735 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10945737 je 0x10945722 */
  if (C.zf) goto L_10945722;
L_10945739:;
  /* 10945739 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1094573c:;
  /* 1094573c mov ecx, edx */
  ECX = (EDX);
  /* 1094573e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10945740 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10945746 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1094574d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10945750 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10945754 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10945756 jne 0x10945765 */
  if (!C.zf) goto L_10945765;
  /* 10945758 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1094575f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10945761 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10945764 pop edi */
  EDI = (pop32());
L_10945765:;
  /* 10945765 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10945767 jl 0x1094576e */
  if ((C.sf!=C.of)) goto L_1094576e;
  /* 10945769 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1094576b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1094576c jmp 0x10945765 */
  goto L_10945765;
L_1094576e:;
  /* 1094576e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10945771 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10945775 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10945777 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094577a mov esi, ecx */
  ESI = (ECX);
  /* 1094577c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1094577f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10945782 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10945783 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945786 jle 0x1094578b */
  if ((C.zf||C.sf!=C.of)) goto L_1094578b;
  /* 10945788 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1094578a pop esi */
  ESI = (pop32());
L_1094578b:;
  /* 1094578b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094578d je 0x109458a0 */
  if (C.zf) goto L_109458a0;
  /* 10945793 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10945796 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945799 jne 0x109457fc */
  if (!C.zf) goto L_109457fc;
  /* 1094579b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094579e jge 0x109457cb */
  if ((C.sf==C.of)) goto L_109457cb;
  /* 109457a0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 109457a5 mov ecx, edi */
  ECX = (EDI);
  /* 109457a7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 109457a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109457ac lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 109457b0 not ebx */
  EBX = (~(EBX));
  /* 109457b2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 109457b5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 109457b9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 109457bd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 109457bf jne 0x109457f9 */
  if (!C.zf) goto L_109457f9;
  /* 109457c1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 109457c4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109457c7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 109457c9 jmp 0x109457fc */
  goto L_109457fc;
L_109457cb:;
  /* 109457cb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 109457ce mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 109457d3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 109457d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109457d8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 109457dc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 109457e3 not ebx */
  EBX = (~(EBX));
  /* 109457e5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 109457e7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 109457e9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 109457ec jne 0x109457f9 */
  if (!C.zf) goto L_109457f9;
  /* 109457ee mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 109457f1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 109457f4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 109457f7 jmp 0x109457fc */
  goto L_109457fc;
L_109457f9:;
  /* 109457f9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_109457fc:;
  /* 109457fc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 109457ff mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10945802 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945806 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10945809 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1094580c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1094580f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10945812 je 0x109458ac */
  if (C.zf) goto L_109458ac;
  /* 10945818 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1094581b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1094581f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10945822 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10945825 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10945828 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1094582b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1094582e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10945831 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10945834 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945837 jne 0x1094589d */
  if (!C.zf) goto L_1094589d;
  /* 10945839 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1094583d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945840 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10945843 jge 0x1094586e */
  if ((C.sf==C.of)) goto L_1094586e;
  /* 10945845 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10945847 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1094584b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1094584f jne 0x1094585c */
  if (!C.zf) goto L_1094585c;
  /* 10945851 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10945856 mov ecx, esi */
  ECX = (ESI);
  /* 10945858 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1094585a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1094585c:;
  /* 1094585c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10945861 mov ecx, esi */
  ECX = (ESI);
  /* 10945863 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10945865 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10945868 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1094586c jmp 0x1094589d */
  goto L_1094589d;
L_1094586e:;
  /* 1094586e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10945870 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10945874 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10945878 jne 0x10945887 */
  if (!C.zf) goto L_10945887;
  /* 1094587a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1094587d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10945882 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10945884 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10945887:;
  /* 10945887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1094588a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10945891 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10945894 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10945899 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1094589b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1094589d:;
  /* 1094589d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_109458a0:;
  /* 109458a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109458a2 je 0x109458af */
  if (C.zf) goto L_109458af;
  /* 109458a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109458a6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 109458aa jmp 0x109458af */
  goto L_109458af;
L_109458ac:;
  /* 109458ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_109458af:;
  /* 109458af mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 109458b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 109458b4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 109458b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 109458b9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 109458bd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 109458c0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 109458c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109458c4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 109458c7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 109458c9 jne 0x109458e5 */
  if (!C.zf) goto L_109458e5;
  /* 109458cb cmp ebx, dword ptr [0x10949334] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10949334))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109458d1 jne 0x109458e5 */
  if (!C.zf) goto L_109458e5;
  /* 109458d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109458d6 cmp ecx, dword ptr [0x1094932c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1094932c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109458dc jne 0x109458e5 */
  if (!C.zf) goto L_109458e5;
  /* 109458de and dword ptr [0x10949334], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10949334)))&(0x0u); w32((uint32_t)(0x10949334), (_r)); fl_logic(_r,32); }
L_109458e5:;
  /* 109458e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 109458e8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 109458ea lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_109458ed:;
  /* 109458ed pop edi */
  EDI = (pop32());
  /* 109458ee pop esi */
  ESI = (pop32());
  /* 109458ef pop ebx */
  EBX = (pop32());
  /* 109458f0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109458f1 ret  */
  ESPCHK(0x109455e9u, _esp0);
  ESP += 4; return;
}

/* FUN_100058f2 @ 0x109458f2 (177 bytes, 53 insns) */
void f_109458f2(void) {
  FTRACE(0x109458f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109458f2 mov eax, dword ptr [0x10949338] */
  EAX = (r32((uint32_t)(0x10949338)));
  /* 109458f7 mov ecx, dword ptr [0x10949328] */
  ECX = (r32((uint32_t)(0x10949328)));
  /* 109458fd push esi */
  push32((uint32_t)(ESI));
  /* 109458fe push edi */
  push32((uint32_t)(EDI));
  /* 109458ff xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10945901 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945903 jne 0x10945935 */
  if (!C.zf) goto L_10945935;
  /* 10945905 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10945909 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1094590c push eax */
  push32((uint32_t)(EAX));
  /* 1094590d push dword ptr [0x1094933c] */
  push32((uint32_t)(r32((uint32_t)(0x1094933c))));
  /* 10945913 push edi */
  push32((uint32_t)(EDI));
  /* 10945914 push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 1094591a call dword ptr [0x10947028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947028))), 0x10945920u);
  /* 10945920 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945922 je 0x10945985 */
  if (C.zf) goto L_10945985;
  /* 10945924 add dword ptr [0x10949328], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10949328))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10949328), (_r)); fl_add(_a,_b,_r,32); }
  /* 1094592b mov dword ptr [0x1094933c], eax */
  w32((uint32_t)(0x1094933c), (EAX));
  /* 10945930 mov eax, dword ptr [0x10949338] */
  EAX = (r32((uint32_t)(0x10949338)));
L_10945935:;
  /* 10945935 mov ecx, dword ptr [0x1094933c] */
  ECX = (r32((uint32_t)(0x1094933c)));
  /* 1094593b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10945940 push 8 */
  push32((uint32_t)(0x8u));
  /* 10945942 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10945945 push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 1094594b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1094594e call dword ptr [0x10947044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947044))), 0x10945954u);
  /* 10945954 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945956 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10945959 je 0x10945985 */
  if (C.zf) goto L_10945985;
  /* 1094595b push 4 */
  push32((uint32_t)(0x4u));
  /* 1094595d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10945962 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10945967 push edi */
  push32((uint32_t)(EDI));
  /* 10945968 call dword ptr [0x1094702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094702c))), 0x1094596eu);
  /* 1094596e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945970 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10945973 jne 0x10945989 */
  if (!C.zf) goto L_10945989;
  /* 10945975 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10945978 push edi */
  push32((uint32_t)(EDI));
  /* 10945979 push dword ptr [0x10949568] */
  push32((uint32_t)(r32((uint32_t)(0x10949568))));
  /* 1094597f call dword ptr [0x1094704c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094704c))), 0x10945985u);
L_10945985:;
  /* 10945985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10945987 jmp 0x109459a0 */
  goto L_109459a0;
L_10945989:;
  /* 10945989 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1094598d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1094598f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10945992 inc dword ptr [0x10949338] */
  { uint32_t _r=(r32((uint32_t)(0x10949338)))+1; w32((uint32_t)(0x10949338), (_r)); fl_inc(_r,32); }
  /* 10945998 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1094599b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1094599e mov eax, esi */
  EAX = (ESI);
L_109459a0:;
  /* 109459a0 pop edi */
  EDI = (pop32());
  /* 109459a1 pop esi */
  ESI = (pop32());
  /* 109459a2 ret  */
  ESPCHK(0x109458f2u, _esp0);
  ESP += 4; return;
}

/* FUN_100059a3 @ 0x109459a3 (251 bytes, 85 insns) */
void f_109459a3(void) {
  FTRACE(0x109459a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109459a3 push ebp */
  push32((uint32_t)(EBP));
  /* 109459a4 mov ebp, esp */
  EBP = (ESP);
  /* 109459a6 push ecx */
  push32((uint32_t)(ECX));
  /* 109459a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109459aa push ebx */
  push32((uint32_t)(EBX));
  /* 109459ab push esi */
  push32((uint32_t)(ESI));
  /* 109459ac push edi */
  push32((uint32_t)(EDI));
  /* 109459ad mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 109459b0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 109459b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_109459b5:;
  /* 109459b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109459b7 jl 0x109459be */
  if ((C.sf!=C.of)) goto L_109459be;
  /* 109459b9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109459bb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 109459bc jmp 0x109459b5 */
  goto L_109459b5;
L_109459be:;
  /* 109459be mov eax, ebx */
  EAX = (EBX);
  /* 109459c0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 109459c2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109459c8 pop edx */
  EDX = (pop32());
  /* 109459c9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 109459d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_109459d3:;
  /* 109459d3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 109459d6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 109459d9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109459dc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 109459dd jne 0x109459d3 */
  if (!C.zf) goto L_109459d3;
  /* 109459df mov edi, ebx */
  EDI = (EBX);
  /* 109459e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 109459e3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 109459e6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109459e9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 109459ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 109459f3 push edi */
  push32((uint32_t)(EDI));
  /* 109459f4 call dword ptr [0x1094702c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094702c))), 0x109459fau);
  /* 109459fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109459fc jne 0x10945a06 */
  if (!C.zf) goto L_10945a06;
  /* 109459fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10945a01 jmp 0x10945a99 */
  goto L_10945a99;
L_10945a06:;
  /* 10945a06 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10945a0c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945a0e ja 0x10945a4c */
  if ((!C.cf&&!C.zf)) goto L_10945a4c;
  /* 10945a10 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10945a13:;
  /* 10945a13 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10945a17 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10945a1e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10945a24 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10945a2b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10945a2d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10945a33 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10945a36 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10945a40 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945a45 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10945a48 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945a4a jbe 0x10945a13 */
  if ((C.cf||C.zf)) goto L_10945a13;
L_10945a4c:;
  /* 10945a4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10945a4f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10945a52 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945a57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10945a59 pop edi */
  EDI = (pop32());
  /* 10945a5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10945a5d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10945a60 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10945a63 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10945a66 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10945a69 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10945a6e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10945a75 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10945a78 mov cl, al */
  CL = (AL);
  /* 10945a7a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10945a7c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10945a7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10945a81 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10945a84 jne 0x10945a89 */
  if (!C.zf) goto L_10945a89;
  /* 10945a86 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10945a89:;
  /* 10945a89 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10945a8e mov ecx, ebx */
  ECX = (EBX);
  /* 10945a90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10945a92 not edx */
  EDX = (~(EDX));
  /* 10945a94 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10945a97 mov eax, ebx */
  EAX = (EBX);
L_10945a99:;
  /* 10945a99 pop edi */
  EDI = (pop32());
  /* 10945a9a pop esi */
  ESI = (pop32());
  /* 10945a9b pop ebx */
  EBX = (pop32());
  /* 10945a9c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10945a9d ret  */
  ESPCHK(0x109459a3u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a9e @ 0x10945a9e (137 bytes, 50 insns) */
void f_10945a9e(void) {
  FTRACE(0x10945a9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945a9e push ebx */
  push32((uint32_t)(EBX));
  /* 10945a9f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10945aa1 cmp dword ptr [0x109492ec], ebx */
  { uint32_t _a=(r32((uint32_t)(0x109492ec))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945aa7 push esi */
  push32((uint32_t)(ESI));
  /* 10945aa8 push edi */
  push32((uint32_t)(EDI));
  /* 10945aa9 jne 0x10945aed */
  if (!C.zf) goto L_10945aed;
  /* 10945aab push 0x10947498 */
  push32((uint32_t)(0x10947498u));
  /* 10945ab0 call dword ptr [0x1094701c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094701c))), 0x10945ab6u);
  /* 10945ab6 mov edi, eax */
  EDI = (EAX);
  /* 10945ab8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945aba je 0x10945b23 */
  if (C.zf) goto L_10945b23;
  /* 10945abc mov esi, dword ptr [0x10947020] */
  ESI = (r32((uint32_t)(0x10947020)));
  /* 10945ac2 push 0x1094748c */
  push32((uint32_t)(0x1094748cu));
  /* 10945ac7 push edi */
  push32((uint32_t)(EDI));
  /* 10945ac8 call esi */
  call_ind((uint32_t)(ESI), 0x10945acau);
  /* 10945aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945acc mov dword ptr [0x109492ec], eax */
  w32((uint32_t)(0x109492ec), (EAX));
  /* 10945ad1 je 0x10945b23 */
  if (C.zf) goto L_10945b23;
  /* 10945ad3 push 0x1094747c */
  push32((uint32_t)(0x1094747cu));
  /* 10945ad8 push edi */
  push32((uint32_t)(EDI));
  /* 10945ad9 call esi */
  call_ind((uint32_t)(ESI), 0x10945adbu);
  /* 10945adb push 0x10947468 */
  push32((uint32_t)(0x10947468u));
  /* 10945ae0 push edi */
  push32((uint32_t)(EDI));
  /* 10945ae1 mov dword ptr [0x109492f0], eax */
  w32((uint32_t)(0x109492f0), (EAX));
  /* 10945ae6 call esi */
  call_ind((uint32_t)(ESI), 0x10945ae8u);
  /* 10945ae8 mov dword ptr [0x109492f4], eax */
  w32((uint32_t)(0x109492f4), (EAX));
L_10945aed:;
  /* 10945aed mov eax, dword ptr [0x109492f0] */
  EAX = (r32((uint32_t)(0x109492f0)));
  /* 10945af2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945af4 je 0x10945b0c */
  if (C.zf) goto L_10945b0c;
  /* 10945af6 call eax */
  call_ind((uint32_t)(EAX), 0x10945af8u);
  /* 10945af8 mov ebx, eax */
  EBX = (EAX);
  /* 10945afa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10945afc je 0x10945b0c */
  if (C.zf) goto L_10945b0c;
  /* 10945afe mov eax, dword ptr [0x109492f4] */
  EAX = (r32((uint32_t)(0x109492f4)));
  /* 10945b03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945b05 je 0x10945b0c */
  if (C.zf) goto L_10945b0c;
  /* 10945b07 push ebx */
  push32((uint32_t)(EBX));
  /* 10945b08 call eax */
  call_ind((uint32_t)(EAX), 0x10945b0au);
  /* 10945b0a mov ebx, eax */
  EBX = (EAX);
L_10945b0c:;
  /* 10945b0c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10945b10 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10945b14 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10945b18 push ebx */
  push32((uint32_t)(EBX));
  /* 10945b19 call dword ptr [0x109492ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109492ec))), 0x10945b1fu);
L_10945b1f:;
  /* 10945b1f pop edi */
  EDI = (pop32());
  /* 10945b20 pop esi */
  ESI = (pop32());
  /* 10945b21 pop ebx */
  EBX = (pop32());
  /* 10945b22 ret  */
  ESPCHK(0x10945a9eu, _esp0);
  ESP += 4; return;
L_10945b23:;
  /* 10945b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10945b25 jmp 0x10945b1f */
  goto L_10945b1f;
}

/* _strncpy @ 0x10945b30 (254 bytes, 109 insns) */
void f_10945b30(void) {
  FTRACE(0x10945b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945b30 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10945b34 push edi */
  push32((uint32_t)(EDI));
  /* 10945b35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10945b37 je 0x10945bb3 */
  if (C.zf) goto L_10945bb3;
  /* 10945b39 push esi */
  push32((uint32_t)(ESI));
  /* 10945b3a push ebx */
  push32((uint32_t)(EBX));
  /* 10945b3b mov ebx, ecx */
  EBX = (ECX);
  /* 10945b3d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10945b41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10945b47 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10945b4b jne 0x10945b54 */
  if (!C.zf) goto L_10945b54;
  /* 10945b4d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10945b50 jne 0x10945bc1 */
  if (!C.zf) goto L_10945bc1;
  /* 10945b52 jmp 0x10945b75 */
  goto L_10945b75;
L_10945b54:;
  /* 10945b54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10945b56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10945b57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10945b59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10945b5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10945b5b je 0x10945b82 */
  if (C.zf) goto L_10945b82;
  /* 10945b5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10945b5f je 0x10945b8a */
  if (C.zf) goto L_10945b8a;
  /* 10945b61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10945b67 jne 0x10945b54 */
  if (!C.zf) goto L_10945b54;
  /* 10945b69 mov ebx, ecx */
  EBX = (ECX);
  /* 10945b6b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10945b6e jne 0x10945bc1 */
  if (!C.zf) goto L_10945bc1;
L_10945b70:;
  /* 10945b70 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10945b73 je 0x10945b82 */
  if (C.zf) goto L_10945b82;
L_10945b75:;
  /* 10945b75 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10945b77 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10945b78 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10945b7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10945b7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10945b7d je 0x10945bae */
  if (C.zf) goto L_10945bae;
  /* 10945b7f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10945b80 jne 0x10945b75 */
  if (!C.zf) goto L_10945b75;
L_10945b82:;
  /* 10945b82 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10945b86 pop ebx */
  EBX = (pop32());
  /* 10945b87 pop esi */
  ESI = (pop32());
  /* 10945b88 pop edi */
  EDI = (pop32());
  /* 10945b89 ret  */
  ESPCHK(0x10945b30u, _esp0);
  ESP += 4; return;
L_10945b8a:;
  /* 10945b8a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10945b90 je 0x10945ba4 */
  if (C.zf) goto L_10945ba4;
L_10945b92:;
  /* 10945b92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10945b94 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10945b95 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10945b96 je 0x10945c26 */
  if (C.zf) goto L_10945c26;
  /* 10945b9c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10945ba2 jne 0x10945b92 */
  if (!C.zf) goto L_10945b92;
L_10945ba4:;
  /* 10945ba4 mov ebx, ecx */
  EBX = (ECX);
  /* 10945ba6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10945ba9 jne 0x10945c17 */
  if (!C.zf) goto L_10945c17;
L_10945bab:;
  /* 10945bab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10945bad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10945bae:;
  /* 10945bae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10945baf jne 0x10945bab */
  if (!C.zf) goto L_10945bab;
  /* 10945bb1 pop ebx */
  EBX = (pop32());
  /* 10945bb2 pop esi */
  ESI = (pop32());
L_10945bb3:;
  /* 10945bb3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10945bb7 pop edi */
  EDI = (pop32());
  /* 10945bb8 ret  */
  ESPCHK(0x10945b30u, _esp0);
  ESP += 4; return;
L_10945bb9:;
  /* 10945bb9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10945bbb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10945bbe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10945bbf je 0x10945b70 */
  if (C.zf) goto L_10945b70;
L_10945bc1:;
  /* 10945bc1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10945bc6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10945bc8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945bca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10945bcd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10945bcf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10945bd1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10945bd4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10945bd9 je 0x10945bb9 */
  if (C.zf) goto L_10945bb9;
  /* 10945bdb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10945bdd je 0x10945c0b */
  if (C.zf) goto L_10945c0b;
  /* 10945bdf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10945be1 je 0x10945c01 */
  if (C.zf) goto L_10945c01;
  /* 10945be3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10945be9 je 0x10945bf7 */
  if (C.zf) goto L_10945bf7;
  /* 10945beb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10945bf1 jne 0x10945bb9 */
  if (!C.zf) goto L_10945bb9;
  /* 10945bf3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10945bf5 jmp 0x10945c0f */
  goto L_10945c0f;
L_10945bf7:;
  /* 10945bf7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10945bfd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10945bff jmp 0x10945c0f */
  goto L_10945c0f;
L_10945c01:;
  /* 10945c01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10945c07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10945c09 jmp 0x10945c0f */
  goto L_10945c0f;
L_10945c0b:;
  /* 10945c0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10945c0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10945c0f:;
  /* 10945c0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10945c12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10945c14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10945c15 je 0x10945c21 */
  if (C.zf) goto L_10945c21;
L_10945c17:;
  /* 10945c17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10945c19:;
  /* 10945c19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10945c1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10945c1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10945c1f jne 0x10945c19 */
  if (!C.zf) goto L_10945c19;
L_10945c21:;
  /* 10945c21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10945c24 jne 0x10945bab */
  if (!C.zf) goto L_10945bab;
L_10945c26:;
  /* 10945c26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10945c2a pop ebx */
  EBX = (pop32());
  /* 10945c2b pop esi */
  ESI = (pop32());
  /* 10945c2c pop edi */
  EDI = (pop32());
  /* 10945c2d ret  */
  ESPCHK(0x10945b30u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10945c30 (88 bytes, 40 insns) */
void f_10945c30(void) {
  FTRACE(0x10945c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945c30 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10945c34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10945c38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10945c3a je 0x10945c83 */
  if (C.zf) goto L_10945c83;
  /* 10945c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10945c3e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10945c42 push edi */
  push32((uint32_t)(EDI));
  /* 10945c43 mov edi, ecx */
  EDI = (ECX);
  /* 10945c45 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945c48 jb 0x10945c77 */
  if (C.cf) goto L_10945c77;
  /* 10945c4a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10945c4c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10945c4f je 0x10945c59 */
  if (C.zf) goto L_10945c59;
  /* 10945c51 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10945c53:;
  /* 10945c53 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10945c55 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10945c56 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10945c57 jne 0x10945c53 */
  if (!C.zf) goto L_10945c53;
L_10945c59:;
  /* 10945c59 mov ecx, eax */
  ECX = (EAX);
  /* 10945c5b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10945c5e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945c60 mov ecx, eax */
  ECX = (EAX);
  /* 10945c62 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10945c65 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945c67 mov ecx, edx */
  ECX = (EDX);
  /* 10945c69 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10945c6c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10945c6f je 0x10945c77 */
  if (C.zf) goto L_10945c77;
  /* 10945c71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10945c73 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10945c75 je 0x10945c7d */
  if (C.zf) goto L_10945c7d;
L_10945c77:;
  /* 10945c77 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10945c79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10945c7a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10945c7b jne 0x10945c77 */
  if (!C.zf) goto L_10945c77;
L_10945c7d:;
  /* 10945c7d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10945c81 pop edi */
  EDI = (pop32());
  /* 10945c82 ret  */
  ESPCHK(0x10945c30u, _esp0);
  ESP += 4; return;
L_10945c83:;
  /* 10945c83 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10945c87 ret  */
  ESPCHK(0x10945c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c88 @ 0x10945c88 (27 bytes, 13 insns) */
void f_10945c88(void) {
  FTRACE(0x10945c88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945c88 mov eax, dword ptr [0x109492f8] */
  EAX = (r32((uint32_t)(0x109492f8)));
  /* 10945c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945c8f je 0x10945ca0 */
  if (C.zf) goto L_10945ca0;
  /* 10945c91 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10945c95 call eax */
  call_ind((uint32_t)(EAX), 0x10945c97u);
  /* 10945c97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945c99 pop ecx */
  ECX = (pop32());
  /* 10945c9a je 0x10945ca0 */
  if (C.zf) goto L_10945ca0;
  /* 10945c9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10945c9e pop eax */
  EAX = (pop32());
  /* 10945c9f ret  */
  ESPCHK(0x10945c88u, _esp0);
  ESP += 4; return;
L_10945ca0:;
  /* 10945ca0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10945ca2 ret  */
  ESPCHK(0x10945c88u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ca3 @ 0x10945ca3 (511 bytes, 193 insns) */
void f_10945ca3(void) {
  FTRACE(0x10945ca3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945ca3 push ebp */
  push32((uint32_t)(EBP));
  /* 10945ca4 mov ebp, esp */
  EBP = (ESP);
  /* 10945ca6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10945ca8 push 0x109474b0 */
  push32((uint32_t)(0x109474b0u));
  /* 10945cad push 0x10946470 */
  push32((uint32_t)(0x10946470u));
  /* 10945cb2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10945cb8 push eax */
  push32((uint32_t)(EAX));
  /* 10945cb9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10945cc0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10945cc3 push ebx */
  push32((uint32_t)(EBX));
  /* 10945cc4 push esi */
  push32((uint32_t)(ESI));
  /* 10945cc5 push edi */
  push32((uint32_t)(EDI));
  /* 10945cc6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10945cc9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10945ccb cmp dword ptr [0x10949320], edi */
  { uint32_t _a=(r32((uint32_t)(0x10949320))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945cd1 jne 0x10945d19 */
  if (!C.zf) goto L_10945d19;
  /* 10945cd3 push edi */
  push32((uint32_t)(EDI));
  /* 10945cd4 push edi */
  push32((uint32_t)(EDI));
  /* 10945cd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10945cd7 pop ebx */
  EBX = (pop32());
  /* 10945cd8 push ebx */
  push32((uint32_t)(EBX));
  /* 10945cd9 push 0x109474a8 */
  push32((uint32_t)(0x109474a8u));
  /* 10945cde mov esi, 0x100 */
  ESI = (0x100u);
  /* 10945ce3 push esi */
  push32((uint32_t)(ESI));
  /* 10945ce4 push edi */
  push32((uint32_t)(EDI));
  /* 10945ce5 call dword ptr [0x10947010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947010))), 0x10945cebu);
  /* 10945ceb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945ced je 0x10945cf7 */
  if (C.zf) goto L_10945cf7;
  /* 10945cef mov dword ptr [0x10949320], ebx */
  w32((uint32_t)(0x10949320), (EBX));
  /* 10945cf5 jmp 0x10945d19 */
  goto L_10945d19;
L_10945cf7:;
  /* 10945cf7 push edi */
  push32((uint32_t)(EDI));
  /* 10945cf8 push edi */
  push32((uint32_t)(EDI));
  /* 10945cf9 push ebx */
  push32((uint32_t)(EBX));
  /* 10945cfa push 0x109474a4 */
  push32((uint32_t)(0x109474a4u));
  /* 10945cff push esi */
  push32((uint32_t)(ESI));
  /* 10945d00 push edi */
  push32((uint32_t)(EDI));
  /* 10945d01 call dword ptr [0x10947014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947014))), 0x10945d07u);
  /* 10945d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945d09 je 0x10945e31 */
  if (C.zf) goto L_10945e31;
  /* 10945d0f mov dword ptr [0x10949320], 2 */
  w32((uint32_t)(0x10949320), (0x2u));
L_10945d19:;
  /* 10945d19 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945d1c jle 0x10945d2e */
  if ((C.zf||C.sf!=C.of)) goto L_10945d2e;
  /* 10945d1e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10945d21 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10945d24 call 0x10945ec7 */
  push32(0x10945d29u); f_10945ec7();
  /* 10945d29 pop ecx */
  ECX = (pop32());
  /* 10945d2a pop ecx */
  ECX = (pop32());
  /* 10945d2b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10945d2e:;
  /* 10945d2e mov eax, dword ptr [0x10949320] */
  EAX = (r32((uint32_t)(0x10949320)));
  /* 10945d33 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945d36 jne 0x10945d55 */
  if (!C.zf) goto L_10945d55;
  /* 10945d38 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10945d3b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10945d3e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10945d41 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10945d44 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10945d47 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10945d4a call dword ptr [0x10947014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947014))), 0x10945d50u);
  /* 10945d50 jmp 0x10945e33 */
  goto L_10945e33;
L_10945d55:;
  /* 10945d55 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945d58 jne 0x10945e31 */
  if (!C.zf) goto L_10945e31;
  /* 10945d5e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945d61 jne 0x10945d6b */
  if (!C.zf) goto L_10945d6b;
  /* 10945d63 mov eax, dword ptr [0x10949318] */
  EAX = (r32((uint32_t)(0x10949318)));
  /* 10945d68 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10945d6b:;
  /* 10945d6b push edi */
  push32((uint32_t)(EDI));
  /* 10945d6c push edi */
  push32((uint32_t)(EDI));
  /* 10945d6d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10945d70 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10945d73 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10945d76 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10945d78 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10945d7a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10945d7d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10945d7e push eax */
  push32((uint32_t)(EAX));
  /* 10945d7f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10945d82 call dword ptr [0x10947024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947024))), 0x10945d88u);
  /* 10945d88 mov ebx, eax */
  EBX = (EAX);
  /* 10945d8a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10945d8d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945d8f je 0x10945e31 */
  if (C.zf) goto L_10945e31;
  /* 10945d95 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10945d98 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10945d9b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945d9e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10945da0 call 0x10946550 */
  push32(0x10945da5u); f_10946550();
  /* 10945da5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10945da8 mov eax, esp */
  EAX = (ESP);
  /* 10945daa mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10945dad or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10945db1 jmp 0x10945dc6 */
  goto L_10945dc6;
  /* 10945db3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10945db5 pop eax */
  EAX = (pop32());
  /* 10945db6 ret  */
  ESPCHK(0x10945ca3u, _esp0);
  ESP += 4; return;
  /* 10945db7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10945dba xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10945dbc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10945dbf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10945dc3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10945dc6:;
  /* 10945dc6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945dc9 je 0x10945e31 */
  if (C.zf) goto L_10945e31;
  /* 10945dcb push ebx */
  push32((uint32_t)(EBX));
  /* 10945dcc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10945dcf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10945dd2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10945dd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10945dd7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10945dda call dword ptr [0x10947024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947024))), 0x10945de0u);
  /* 10945de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945de2 je 0x10945e31 */
  if (C.zf) goto L_10945e31;
  /* 10945de4 push edi */
  push32((uint32_t)(EDI));
  /* 10945de5 push edi */
  push32((uint32_t)(EDI));
  /* 10945de6 push ebx */
  push32((uint32_t)(EBX));
  /* 10945de7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10945dea push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10945ded push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10945df0 call dword ptr [0x10947010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947010))), 0x10945df6u);
  /* 10945df6 mov esi, eax */
  ESI = (EAX);
  /* 10945df8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10945dfb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945dfd je 0x10945e31 */
  if (C.zf) goto L_10945e31;
  /* 10945dff test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10945e03 je 0x10945e45 */
  if (C.zf) goto L_10945e45;
  /* 10945e05 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945e08 je 0x10945ec0 */
  if (C.zf) goto L_10945ec0;
  /* 10945e0e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945e11 jg 0x10945e31 */
  if ((!C.zf&&C.sf==C.of)) goto L_10945e31;
  /* 10945e13 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10945e16 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10945e19 push ebx */
  push32((uint32_t)(EBX));
  /* 10945e1a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10945e1d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10945e20 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10945e23 call dword ptr [0x10947010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947010))), 0x10945e29u);
  /* 10945e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945e2b jne 0x10945ec0 */
  if (!C.zf) goto L_10945ec0;
L_10945e31:;
  /* 10945e31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10945e33:;
  /* 10945e33 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10945e36 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10945e39 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10945e40 pop edi */
  EDI = (pop32());
  /* 10945e41 pop esi */
  ESI = (pop32());
  /* 10945e42 pop ebx */
  EBX = (pop32());
  /* 10945e43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10945e44 ret  */
  ESPCHK(0x10945ca3u, _esp0);
  ESP += 4; return;
L_10945e45:;
  /* 10945e45 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10945e4c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10945e4f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945e52 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10945e54 call 0x10946550 */
  push32(0x10945e59u); f_10946550();
  /* 10945e59 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10945e5c mov ebx, esp */
  EBX = (ESP);
  /* 10945e5e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10945e61 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10945e65 jmp 0x10945e79 */
  goto L_10945e79;
  /* 10945e67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10945e69 pop eax */
  EAX = (pop32());
  /* 10945e6a ret  */
  ESPCHK(0x10945ca3u, _esp0);
  ESP += 4; return;
  /* 10945e6b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10945e6e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10945e70 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10945e72 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10945e76 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10945e79:;
  /* 10945e79 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945e7b je 0x10945e31 */
  if (C.zf) goto L_10945e31;
  /* 10945e7d push esi */
  push32((uint32_t)(ESI));
  /* 10945e7e push ebx */
  push32((uint32_t)(EBX));
  /* 10945e7f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10945e82 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10945e85 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10945e88 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10945e8b call dword ptr [0x10947010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947010))), 0x10945e91u);
  /* 10945e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945e93 je 0x10945e31 */
  if (C.zf) goto L_10945e31;
  /* 10945e95 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945e98 push edi */
  push32((uint32_t)(EDI));
  /* 10945e99 push edi */
  push32((uint32_t)(EDI));
  /* 10945e9a jne 0x10945ea0 */
  if (!C.zf) goto L_10945ea0;
  /* 10945e9c push edi */
  push32((uint32_t)(EDI));
  /* 10945e9d push edi */
  push32((uint32_t)(EDI));
  /* 10945e9e jmp 0x10945ea6 */
  goto L_10945ea6;
L_10945ea0:;
  /* 10945ea0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10945ea3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10945ea6:;
  /* 10945ea6 push esi */
  push32((uint32_t)(ESI));
  /* 10945ea7 push ebx */
  push32((uint32_t)(EBX));
  /* 10945ea8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10945ead push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10945eb0 call dword ptr [0x10947064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947064))), 0x10945eb6u);
  /* 10945eb6 mov esi, eax */
  ESI = (EAX);
  /* 10945eb8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945eba je 0x10945e31 */
  if (C.zf) goto L_10945e31;
L_10945ec0:;
  /* 10945ec0 mov eax, esi */
  EAX = (ESI);
  /* 10945ec2 jmp 0x10945e33 */
  goto L_10945e33;
}

/* FUN_10005ec7 @ 0x10945ec7 (43 bytes, 20 insns) */
void f_10945ec7(void) {
  FTRACE(0x10945ec7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945ec7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10945ecb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10945ecf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10945ed1 push esi */
  push32((uint32_t)(ESI));
  /* 10945ed2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10945ed5 je 0x10945ee4 */
  if (C.zf) goto L_10945ee4;
L_10945ed7:;
  /* 10945ed7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10945eda je 0x10945ee4 */
  if (C.zf) goto L_10945ee4;
  /* 10945edc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10945edd mov esi, ecx */
  ESI = (ECX);
  /* 10945edf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10945ee0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10945ee2 jne 0x10945ed7 */
  if (!C.zf) goto L_10945ed7;
L_10945ee4:;
  /* 10945ee4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10945ee7 pop esi */
  ESI = (pop32());
  /* 10945ee8 jne 0x10945eef */
  if (!C.zf) goto L_10945eef;
  /* 10945eea sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10945eee ret  */
  ESPCHK(0x10945ec7u, _esp0);
  ESP += 4; return;
L_10945eef:;
  /* 10945eef mov eax, edx */
  EAX = (EDX);
  /* 10945ef1 ret  */
  ESPCHK(0x10945ec7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ef2 @ 0x10945ef2 (318 bytes, 123 insns) */
void f_10945ef2(void) {
  FTRACE(0x10945ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10945ef2 push ebp */
  push32((uint32_t)(EBP));
  /* 10945ef3 mov ebp, esp */
  EBP = (ESP);
  /* 10945ef5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10945ef7 push 0x109474c8 */
  push32((uint32_t)(0x109474c8u));
  /* 10945efc push 0x10946470 */
  push32((uint32_t)(0x10946470u));
  /* 10945f01 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10945f07 push eax */
  push32((uint32_t)(EAX));
  /* 10945f08 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10945f0f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10945f12 push ebx */
  push32((uint32_t)(EBX));
  /* 10945f13 push esi */
  push32((uint32_t)(ESI));
  /* 10945f14 push edi */
  push32((uint32_t)(EDI));
  /* 10945f15 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10945f18 mov eax, dword ptr [0x10949324] */
  EAX = (r32((uint32_t)(0x10949324)));
  /* 10945f1d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10945f1f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945f21 jne 0x10945f61 */
  if (!C.zf) goto L_10945f61;
  /* 10945f23 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10945f26 push eax */
  push32((uint32_t)(EAX));
  /* 10945f27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10945f29 pop esi */
  ESI = (pop32());
  /* 10945f2a push esi */
  push32((uint32_t)(ESI));
  /* 10945f2b push 0x109474a8 */
  push32((uint32_t)(0x109474a8u));
  /* 10945f30 push esi */
  push32((uint32_t)(ESI));
  /* 10945f31 call dword ptr [0x1094700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094700c))), 0x10945f37u);
  /* 10945f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945f39 je 0x10945f3f */
  if (C.zf) goto L_10945f3f;
  /* 10945f3b mov eax, esi */
  EAX = (ESI);
  /* 10945f3d jmp 0x10945f5c */
  goto L_10945f5c;
L_10945f3f:;
  /* 10945f3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10945f42 push eax */
  push32((uint32_t)(EAX));
  /* 10945f43 push esi */
  push32((uint32_t)(ESI));
  /* 10945f44 push 0x109474a4 */
  push32((uint32_t)(0x109474a4u));
  /* 10945f49 push esi */
  push32((uint32_t)(ESI));
  /* 10945f4a push ebx */
  push32((uint32_t)(EBX));
  /* 10945f4b call dword ptr [0x10947018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947018))), 0x10945f51u);
  /* 10945f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10945f53 je 0x10946027 */
  if (C.zf) goto L_10946027;
  /* 10945f59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10945f5b pop eax */
  EAX = (pop32());
L_10945f5c:;
  /* 10945f5c mov dword ptr [0x10949324], eax */
  w32((uint32_t)(0x10949324), (EAX));
L_10945f61:;
  /* 10945f61 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945f64 jne 0x10945f8a */
  if (!C.zf) goto L_10945f8a;
  /* 10945f66 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10945f69 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945f6b jne 0x10945f72 */
  if (!C.zf) goto L_10945f72;
  /* 10945f6d mov eax, dword ptr [0x10949308] */
  EAX = (r32((uint32_t)(0x10949308)));
L_10945f72:;
  /* 10945f72 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10945f75 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10945f78 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10945f7b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10945f7e push eax */
  push32((uint32_t)(EAX));
  /* 10945f7f call dword ptr [0x10947018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947018))), 0x10945f85u);
  /* 10945f85 jmp 0x10946029 */
  goto L_10946029;
L_10945f8a:;
  /* 10945f8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945f8d jne 0x10946027 */
  if (!C.zf) goto L_10946027;
  /* 10945f93 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945f96 jne 0x10945fa0 */
  if (!C.zf) goto L_10945fa0;
  /* 10945f98 mov eax, dword ptr [0x10949318] */
  EAX = (r32((uint32_t)(0x10949318)));
  /* 10945f9d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10945fa0:;
  /* 10945fa0 push ebx */
  push32((uint32_t)(EBX));
  /* 10945fa1 push ebx */
  push32((uint32_t)(EBX));
  /* 10945fa2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10945fa5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10945fa8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10945fab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10945fad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10945faf and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10945fb2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10945fb3 push eax */
  push32((uint32_t)(EAX));
  /* 10945fb4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10945fb7 call dword ptr [0x10947024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947024))), 0x10945fbdu);
  /* 10945fbd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10945fc0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945fc2 je 0x10946027 */
  if (C.zf) goto L_10946027;
  /* 10945fc4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10945fc7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10945fca mov eax, edi */
  EAX = (EDI);
  /* 10945fcc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10945fcf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10945fd1 call 0x10946550 */
  push32(0x10945fd6u); f_10946550();
  /* 10945fd6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10945fd9 mov esi, esp */
  ESI = (ESP);
  /* 10945fdb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10945fde push edi */
  push32((uint32_t)(EDI));
  /* 10945fdf push ebx */
  push32((uint32_t)(EBX));
  /* 10945fe0 push esi */
  push32((uint32_t)(ESI));
  /* 10945fe1 call 0x10945c30 */
  push32(0x10945fe6u); f_10945c30();
  /* 10945fe6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10945fe9 jmp 0x10945ff6 */
  goto L_10945ff6;
  /* 10945feb push 1 */
  push32((uint32_t)(0x1u));
  /* 10945fed pop eax */
  EAX = (pop32());
  /* 10945fee ret  */
  ESPCHK(0x10945ef2u, _esp0);
  ESP += 4; return;
  /* 10945fef mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10945ff2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10945ff4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10945ff6:;
  /* 10945ff6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10945ffa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10945ffc je 0x10946027 */
  if (C.zf) goto L_10946027;
  /* 10945ffe push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10946001 push esi */
  push32((uint32_t)(ESI));
  /* 10946002 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10946005 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10946008 push 1 */
  push32((uint32_t)(0x1u));
  /* 1094600a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1094600d call dword ptr [0x10947024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10947024))), 0x10946013u);
  /* 10946013 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10946015 je 0x10946027 */
  if (C.zf) goto L_10946027;
  /* 10946017 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1094601a push eax */
  push32((uint32_t)(EAX));
  /* 1094601b push esi */
  push32((uint32_t)(ESI));
  /* 1094601c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1094601f call dword ptr [0x1094700c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1094700c))), 0x10946025u);
  /* 10946025 jmp 0x10946029 */
  goto L_10946029;
L_10946027:;
  /* 10946027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10946029:;
  /* 10946029 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1094602c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1094602f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10946036 pop edi */
  EDI = (pop32());
  /* 10946037 pop esi */
  ESI = (pop32());
  /* 10946038 pop ebx */
  EBX = (pop32());
  /* 10946039 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1094603a ret  */
  ESPCHK(0x10945ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x10946040 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10946040(void) {
  FTRACE(0x10946040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10946040 push ebp */
  push32((uint32_t)(EBP));
  /* 10946041 mov ebp, esp */
  EBP = (ESP);
  /* 10946043 push edi */
  push32((uint32_t)(EDI));
  /* 10946044 push esi */
  push32((uint32_t)(ESI));
  /* 10946045 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10946048 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1094604b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1094604e mov eax, ecx */
  EAX = (ECX);
  /* 10946050 mov edx, ecx */
  EDX = (ECX);
  /* 10946052 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10946054 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10946056 jbe 0x10946060 */
  if ((C.cf||C.zf)) goto L_10946060;
  /* 10946058 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094605a jb 0x109461d8 */
  if (C.cf) goto L_109461d8;
L_10946060:;
  /* 10946060 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10946066 jne 0x1094607c */
  if (!C.zf) goto L_1094607c;
  /* 10946068 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1094606b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1094606e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10946071 jb 0x1094609c */
  if (C.cf) goto L_1094609c;
  /* 10946073 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10946075 jmp dword ptr [edx*4 + 0x10946188] */
  switch (EDX) {
    case 0: goto L_10946198;
    case 1: goto L_109461a0;
    case 2: goto L_109461ac;
    case 3: goto L_109461c0;
    default: x86_unimpl("switch@0x10946075 out of table"); return;
  }
L_1094607c:;
  /* 1094607c mov eax, edi */
  EAX = (EDI);
  /* 1094607e mov edx, 3 */
  EDX = (0x3u);
  /* 10946083 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10946086 jb 0x10946094 */
  if (C.cf) goto L_10946094;
  /* 10946088 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1094608b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1094608d jmp dword ptr [eax*4 + 0x109460a0] */
  switch (EAX) {
    case 1: goto L_109460b0;
    case 2: goto L_109460dc;
    case 3: goto L_10946100;
    default: x86_unimpl("switch@0x1094608d out of table"); return;
  }
L_10946094:;
  /* 10946094 jmp dword ptr [ecx*4 + 0x10946198] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10946198)))); return;
  /* 1094609b nop  */
  /* nop */
L_1094609c:;
  /* 1094609c jmp dword ptr [ecx*4 + 0x1094611c] */
  switch (ECX) {
    case 0: goto L_1094617f;
    case 1: goto L_1094616c;
    case 2: goto L_10946164;
    case 3: goto L_1094615c;
    case 4: goto L_10946154;
    case 5: goto L_1094614c;
    case 6: goto L_10946144;
    case 7: goto L_1094613c;
    default: x86_unimpl("switch@0x1094609c out of table"); return;
  }
  /* 109460a3 nop  */
  /* nop */
L_109460b0:;
  /* 109460b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109460b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109460b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109460b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109460b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109460bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109460bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109460c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109460c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109460c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109460cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109460ce jb 0x1094609c */
  if (C.cf) goto L_1094609c;
  /* 109460d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109460d2 jmp dword ptr [edx*4 + 0x10946188] */
  switch (EDX) {
    case 0: goto L_10946198;
    case 1: goto L_109461a0;
    case 2: goto L_109461ac;
    case 3: goto L_109461c0;
    default: x86_unimpl("switch@0x109460d2 out of table"); return;
  }
  /* 109460d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109460dc:;
  /* 109460dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109460de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109460e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109460e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109460e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109460e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109460eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109460ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109460f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109460f4 jb 0x1094609c */
  if (C.cf) goto L_1094609c;
  /* 109460f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109460f8 jmp dword ptr [edx*4 + 0x10946188] */
  switch (EDX) {
    case 0: goto L_10946198;
    case 1: goto L_109461a0;
    case 2: goto L_109461ac;
    case 3: goto L_109461c0;
    default: x86_unimpl("switch@0x109460f8 out of table"); return;
  }
  /* 109460ff nop  */
  /* nop */
L_10946100:;
  /* 10946100 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10946102 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10946104 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10946106 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10946107 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1094610a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1094610b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094610e jb 0x1094609c */
  if (C.cf) goto L_1094609c;
  /* 10946110 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10946112 jmp dword ptr [edx*4 + 0x10946188] */
  switch (EDX) {
    case 0: goto L_10946198;
    case 1: goto L_109461a0;
    case 2: goto L_109461ac;
    case 3: goto L_109461c0;
    default: x86_unimpl("switch@0x10946112 out of table"); return;
  }
  /* 10946119 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1094613c:;
  /* 1094613c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10946140 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10946144:;
  /* 10946144 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10946148 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1094614c:;
  /* 1094614c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10946150 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10946154:;
  /* 10946154 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10946158 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1094615c:;
  /* 1094615c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10946160 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10946164:;
  /* 10946164 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10946168 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1094616c:;
  /* 1094616c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10946170 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10946174 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1094617b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1094617d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1094617f:;
  /* 1094617f jmp dword ptr [edx*4 + 0x10946188] */
  switch (EDX) {
    case 0: goto L_10946198;
    case 1: goto L_109461a0;
    case 2: goto L_109461ac;
    case 3: goto L_109461c0;
    default: x86_unimpl("switch@0x1094617f out of table"); return;
  }
  /* 10946186 mov edi, edi */
  EDI = (EDI);
L_10946198:;
  /* 10946198 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1094619b pop esi */
  ESI = (pop32());
  /* 1094619c pop edi */
  EDI = (pop32());
  /* 1094619d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1094619e ret  */
  ESPCHK(0x10946040u, _esp0);
  ESP += 4; return;
  /* 1094619f nop  */
  /* nop */
L_109461a0:;
  /* 109461a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109461a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109461a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109461a7 pop esi */
  ESI = (pop32());
  /* 109461a8 pop edi */
  EDI = (pop32());
  /* 109461a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109461aa ret  */
  ESPCHK(0x10946040u, _esp0);
  ESP += 4; return;
  /* 109461ab nop  */
  /* nop */
L_109461ac:;
  /* 109461ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109461ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109461b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109461b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109461b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109461b9 pop esi */
  ESI = (pop32());
  /* 109461ba pop edi */
  EDI = (pop32());
  /* 109461bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109461bc ret  */
  ESPCHK(0x10946040u, _esp0);
  ESP += 4; return;
  /* 109461bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109461c0:;
  /* 109461c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 109461c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 109461c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109461c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109461ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109461cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109461d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109461d3 pop esi */
  ESI = (pop32());
  /* 109461d4 pop edi */
  EDI = (pop32());
  /* 109461d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109461d6 ret  */
  ESPCHK(0x10946040u, _esp0);
  ESP += 4; return;
  /* 109461d7 nop  */
  /* nop */
L_109461d8:;
  /* 109461d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 109461dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 109461e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109461e6 jne 0x1094620c */
  if (!C.zf) goto L_1094620c;
  /* 109461e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109461eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109461ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109461f1 jb 0x10946200 */
  if (C.cf) goto L_10946200;
  /* 109461f3 std  */
  C.df=1;
  /* 109461f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109461f6 cld  */
  C.df=0;
  /* 109461f7 jmp dword ptr [edx*4 + 0x10946320] */
  switch (EDX) {
    case 0: goto L_10946330;
    case 1: goto L_10946338;
    case 2: goto L_10946348;
    case 3: goto L_1094635c;
    default: x86_unimpl("switch@0x109461f7 out of table"); return;
  }
  /* 109461fe mov edi, edi */
  EDI = (EDI);
L_10946200:;
  /* 10946200 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10946202 jmp dword ptr [ecx*4 + 0x109462d0] */
  switch (ECX) {
    case 0: goto L_10946317;
    default: x86_unimpl("switch@0x10946202 out of table"); return;
  }
  /* 10946209 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1094620c:;
  /* 1094620c mov eax, edi */
  EAX = (EDI);
  /* 1094620e mov edx, 3 */
  EDX = (0x3u);
  /* 10946213 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10946216 jb 0x10946224 */
  if (C.cf) goto L_10946224;
  /* 10946218 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1094621b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094621d jmp dword ptr [eax*4 + 0x10946228] */
  switch (EAX) {
    case 1: goto L_10946238;
    case 2: goto L_10946258;
    case 3: goto L_10946280;
    default: x86_unimpl("switch@0x1094621d out of table"); return;
  }
L_10946224:;
  /* 10946224 jmp dword ptr [ecx*4 + 0x10946320] */
  switch (ECX) {
    case 0: goto L_10946330;
    case 1: goto L_10946338;
    case 2: goto L_10946348;
    case 3: goto L_1094635c;
    default: x86_unimpl("switch@0x10946224 out of table"); return;
  }
  /* 1094622b nop  */
  /* nop */
L_10946238:;
  /* 10946238 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094623b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1094623d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10946240 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10946241 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10946244 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10946245 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10946248 jb 0x10946200 */
  if (C.cf) goto L_10946200;
  /* 1094624a std  */
  C.df=1;
  /* 1094624b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1094624d cld  */
  C.df=0;
  /* 1094624e jmp dword ptr [edx*4 + 0x10946320] */
  switch (EDX) {
    case 0: goto L_10946330;
    case 1: goto L_10946338;
    case 2: goto L_10946348;
    case 3: goto L_1094635c;
    default: x86_unimpl("switch@0x1094624e out of table"); return;
  }
  /* 10946255 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10946258:;
  /* 10946258 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094625b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1094625d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10946260 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10946263 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10946266 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10946269 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094626c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094626f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10946272 jb 0x10946200 */
  if (C.cf) goto L_10946200;
  /* 10946274 std  */
  C.df=1;
  /* 10946275 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10946277 cld  */
  C.df=0;
  /* 10946278 jmp dword ptr [edx*4 + 0x10946320] */
  switch (EDX) {
    case 0: goto L_10946330;
    case 1: goto L_10946338;
    case 2: goto L_10946348;
    case 3: goto L_1094635c;
    default: x86_unimpl("switch@0x10946278 out of table"); return;
  }
  /* 1094627f nop  */
  /* nop */
L_10946280:;
  /* 10946280 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10946283 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10946285 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10946288 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1094628b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1094628e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10946291 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10946294 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10946297 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094629a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1094629d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109462a0 jb 0x10946200 */
  if (C.cf) goto L_10946200;
  /* 109462a6 std  */
  C.df=1;
  /* 109462a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109462a9 cld  */
  C.df=0;
  /* 109462aa jmp dword ptr [edx*4 + 0x10946320] */
  switch (EDX) {
    case 0: goto L_10946330;
    case 1: goto L_10946338;
    case 2: goto L_10946348;
    case 3: goto L_1094635c;
    default: x86_unimpl("switch@0x109462aa out of table"); return;
  }
  /* 109462b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 109462b4 aam 0x62 */
  x86_unimpl("aam @ 0x109462b4");
  /* 109462b6 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 109462b7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 109462b9 bound edx, qword ptr [eax + edx + 0x109462e4] */
  x86_unimpl("bound @ 0x109462b9");
  /* 109462c0 in al, dx */
  x86_unimpl("in @ 0x109462c0");
  /* 109462c1 bound edx, qword ptr [eax + edx + 0x109462f4] */
  x86_unimpl("bound @ 0x109462c1");
  /* 109462c8 cld  */
  C.df=0;
  /* 109462c9 bound edx, qword ptr [eax + edx + 0x10946304] */
  x86_unimpl("bound @ 0x109462c9");
  /* 109462d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 109462d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 109462dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 109462e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 109462e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 109462e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 109462ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 109462f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 109462f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 109462f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 109462fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10946300 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10946304 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10946308 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1094630c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10946313 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10946315 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10946317:;
  /* 10946317 jmp dword ptr [edx*4 + 0x10946320] */
  switch (EDX) {
    case 0: goto L_10946330;
    case 1: goto L_10946338;
    case 2: goto L_10946348;
    case 3: goto L_1094635c;
    default: x86_unimpl("switch@0x10946317 out of table"); return;
  }
  /* 1094631e mov edi, edi */
  EDI = (EDI);
L_10946330:;
  /* 10946330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10946333 pop esi */
  ESI = (pop32());
  /* 10946334 pop edi */
  EDI = (pop32());
  /* 10946335 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10946336 ret  */
  ESPCHK(0x10946040u, _esp0);
  ESP += 4; return;
  /* 10946337 nop  */
  /* nop */
L_10946338:;
  /* 10946338 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094633b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1094633e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10946341 pop esi */
  ESI = (pop32());
  /* 10946342 pop edi */
  EDI = (pop32());
  /* 10946343 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10946344 ret  */
  ESPCHK(0x10946040u, _esp0);
  ESP += 4; return;
  /* 10946345 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10946348:;
  /* 10946348 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094634b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1094634e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10946351 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10946354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10946357 pop esi */
  ESI = (pop32());
  /* 10946358 pop edi */
  EDI = (pop32());
  /* 10946359 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1094635a ret  */
  ESPCHK(0x10946040u, _esp0);
  ESP += 4; return;
  /* 1094635b nop  */
  /* nop */
L_1094635c:;
  /* 1094635c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1094635f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10946362 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10946365 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10946368 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1094636b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1094636e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10946371 pop esi */
  ESI = (pop32());
  /* 10946372 pop edi */
  EDI = (pop32());
  /* 10946373 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10946374 ret  */
  ESPCHK(0x10946040u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10946378 (32 bytes, 18 insns) */
void f_10946378(void) {
  FTRACE(0x10946378u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10946378 push ebp */
  push32((uint32_t)(EBP));
  /* 10946379 mov ebp, esp */
  EBP = (ESP);
  /* 1094637b push ebx */
  push32((uint32_t)(EBX));
  /* 1094637c push esi */
  push32((uint32_t)(ESI));
  /* 1094637d push edi */
  push32((uint32_t)(EDI));
  /* 1094637e push ebp */
  push32((uint32_t)(EBP));
  /* 1094637f push 0 */
  push32((uint32_t)(0x0u));
  /* 10946381 push 0 */
  push32((uint32_t)(0x0u));
  /* 10946383 push 0x10946390 */
  push32((uint32_t)(0x10946390u));
  /* 10946388 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1094638b call 0x10946580 */
  push32(0x10946390u); f_10946580();
  /* 10946390 pop ebp */
  EBP = (pop32());
  /* 10946391 pop edi */
  EDI = (pop32());
  /* 10946392 pop esi */
  ESI = (pop32());
  /* 10946393 pop ebx */
  EBX = (pop32());
  /* 10946394 mov esp, ebp */
  ESP = (EBP);
  /* 10946396 pop ebp */
  EBP = (pop32());
  /* 10946397 ret  */
  ESPCHK(0x10946378u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x109463ba (104 bytes, 33 insns) */
void f_109463ba(void) {
  FTRACE(0x109463bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109463ba push ebx */
  push32((uint32_t)(EBX));
  /* 109463bb push esi */
  push32((uint32_t)(ESI));
  /* 109463bc push edi */
  push32((uint32_t)(EDI));
  /* 109463bd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 109463c1 push eax */
  push32((uint32_t)(EAX));
  /* 109463c2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 109463c4 push 0x10946398 */
  push32((uint32_t)(0x10946398u));
  /* 109463c9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 109463d0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_109463d7:;
  /* 109463d7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 109463db mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 109463de mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 109463e1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109463e4 je 0x10946414 */
  if (C.zf) goto L_10946414;
  /* 109463e6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109463ea je 0x10946414 */
  if (C.zf) goto L_10946414;
  /* 109463ec lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 109463ef mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 109463f2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 109463f6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 109463f9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109463fe jne 0x10946412 */
  if (!C.zf) goto L_10946412;
  /* 10946400 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10946405 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10946409 call 0x1094644e */
  push32(0x1094640eu); f_1094644e();
  /* 1094640e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10946412u);
L_10946412:;
  /* 10946412 jmp 0x109463d7 */
  goto L_109463d7;
L_10946414:;
  /* 10946414 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1094641b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1094641e pop edi */
  EDI = (pop32());
  /* 1094641f pop esi */
  ESI = (pop32());
  /* 10946420 pop ebx */
  EBX = (pop32());
  /* 10946421 ret  */
  ESPCHK(0x109463bau, _esp0);
  ESP += 4; return;
}

/* FUN_1000644e @ 0x1094644e (24 bytes, 10 insns) */
void f_1094644e(void) {
  FTRACE(0x1094644eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1094644e push ebx */
  push32((uint32_t)(EBX));
  /* 1094644f push ecx */
  push32((uint32_t)(ECX));
  /* 10946450 mov ebx, 0x10948d20 */
  EBX = (0x10948d20u);
  /* 10946455 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10946458 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1094645b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1094645e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10946461 pop ecx */
  ECX = (pop32());
  /* 10946462 pop ebx */
  EBX = (pop32());
  /* 10946463 ret 4 */
  ESPCHK(0x1094644eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000652d @ 0x1094652d (27 bytes, 11 insns) */
void f_1094652d(void) {
  FTRACE(0x1094652du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1094652d push ebp */
  push32((uint32_t)(EBP));
  /* 1094652e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10946532 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10946534 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10946537 push eax */
  push32((uint32_t)(EAX));
  /* 10946538 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1094653b push eax */
  push32((uint32_t)(EAX));
  /* 1094653c call 0x109463ba */
  push32(0x10946541u); f_109463ba();
  /* 10946541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10946544 pop ebp */
  EBP = (pop32());
  /* 10946545 ret 4 */
  ESPCHK(0x1094652du, _esp0);
  ESP += 8; return;
}

/* FUN_10006550 @ 0x10946550 (47 bytes, 17 insns) */
void f_10946550(void) {
  FTRACE(0x10946550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10946550 push ecx */
  push32((uint32_t)(ECX));
  /* 10946551 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10946556 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1094655a jb 0x10946570 */
  if (C.cf) goto L_10946570;
L_1094655c:;
  /* 1094655c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10946562 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10946567 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10946569 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1094656e jae 0x1094655c */
  if (!C.cf) goto L_1094655c;
L_10946570:;
  /* 10946570 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10946572 mov eax, esp */
  EAX = (ESP);
  /* 10946574 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10946576 mov esp, ecx */
  ESP = (ECX);
  /* 10946578 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1094657a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1094657d push eax */
  push32((uint32_t)(EAX));
  /* 1094657e ret  */
  ESPCHK(0x10946550u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10946580 (6 bytes, 1 insns) */
void f_10946580(void) {
  FTRACE(0x10946580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10946580 jmp dword ptr [0x10947008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10947008)))); return;
}

