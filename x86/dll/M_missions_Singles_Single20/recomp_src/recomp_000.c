#include "recomp.h"

/* OnInit @ 0x11291000 (1048 bytes, 271 insns) */
void f_11291000(void) {
  FTRACE(0x11291000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11291000 push esi */
  push32((uint32_t)(ESI));
  /* 11291001 mov esi, dword ptr [0x1129511c] */
  ESI = (r32((uint32_t)(0x1129511c)));
  /* 11291007 push edi */
  push32((uint32_t)(EDI));
  /* 11291008 push 0x112963d8 */
  push32((uint32_t)(0x112963d8u));
  /* 1129100d push 0x11296838 */
  push32((uint32_t)(0x11296838u));
  /* 11291012 call esi */
  call_ind((uint32_t)(ESI), 0x11291014u);
  /* 11291014 push 0x112963c8 */
  push32((uint32_t)(0x112963c8u));
  /* 11291019 push 0x11296840 */
  push32((uint32_t)(0x11296840u));
  /* 1129101e call esi */
  call_ind((uint32_t)(ESI), 0x11291020u);
  /* 11291020 push 0x112963b8 */
  push32((uint32_t)(0x112963b8u));
  /* 11291025 push 0x11296848 */
  push32((uint32_t)(0x11296848u));
  /* 1129102a call esi */
  call_ind((uint32_t)(ESI), 0x1129102cu);
  /* 1129102c push 0x112963a8 */
  push32((uint32_t)(0x112963a8u));
  /* 11291031 push 0x11296850 */
  push32((uint32_t)(0x11296850u));
  /* 11291036 call esi */
  call_ind((uint32_t)(ESI), 0x11291038u);
  /* 11291038 push 0x1129639c */
  push32((uint32_t)(0x1129639cu));
  /* 1129103d push 0x11296860 */
  push32((uint32_t)(0x11296860u));
  /* 11291042 call esi */
  call_ind((uint32_t)(ESI), 0x11291044u);
  /* 11291044 push 0x11296384 */
  push32((uint32_t)(0x11296384u));
  /* 11291049 push 0x11296870 */
  push32((uint32_t)(0x11296870u));
  /* 1129104e call esi */
  call_ind((uint32_t)(ESI), 0x11291050u);
  /* 11291050 push 0x11296370 */
  push32((uint32_t)(0x11296370u));
  /* 11291055 push 0x11296880 */
  push32((uint32_t)(0x11296880u));
  /* 1129105a call esi */
  call_ind((uint32_t)(ESI), 0x1129105cu);
  /* 1129105c push 0x1129635c */
  push32((uint32_t)(0x1129635cu));
  /* 11291061 push 0x11296890 */
  push32((uint32_t)(0x11296890u));
  /* 11291066 call esi */
  call_ind((uint32_t)(ESI), 0x11291068u);
  /* 11291068 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129106b push 0x1129634c */
  push32((uint32_t)(0x1129634cu));
  /* 11291070 push 0x11296898 */
  push32((uint32_t)(0x11296898u));
  /* 11291075 call esi */
  call_ind((uint32_t)(ESI), 0x11291077u);
  /* 11291077 push 0x11296340 */
  push32((uint32_t)(0x11296340u));
  /* 1129107c push 0x112968b8 */
  push32((uint32_t)(0x112968b8u));
  /* 11291081 call esi */
  call_ind((uint32_t)(ESI), 0x11291083u);
  /* 11291083 push 0x1129632c */
  push32((uint32_t)(0x1129632cu));
  /* 11291088 push 0x112968c0 */
  push32((uint32_t)(0x112968c0u));
  /* 1129108d call esi */
  call_ind((uint32_t)(ESI), 0x1129108fu);
  /* 1129108f push 0x11296318 */
  push32((uint32_t)(0x11296318u));
  /* 11291094 push 0x112968c8 */
  push32((uint32_t)(0x112968c8u));
  /* 11291099 call esi */
  call_ind((uint32_t)(ESI), 0x1129109bu);
  /* 1129109b push 0x1129630c */
  push32((uint32_t)(0x1129630cu));
  /* 112910a0 push 0x112968d0 */
  push32((uint32_t)(0x112968d0u));
  /* 112910a5 call esi */
  call_ind((uint32_t)(ESI), 0x112910a7u);
  /* 112910a7 push 0x112962fc */
  push32((uint32_t)(0x112962fcu));
  /* 112910ac push 0x112968e0 */
  push32((uint32_t)(0x112968e0u));
  /* 112910b1 call esi */
  call_ind((uint32_t)(ESI), 0x112910b3u);
  /* 112910b3 push 0x112962e8 */
  push32((uint32_t)(0x112962e8u));
  /* 112910b8 push 0x112968f8 */
  push32((uint32_t)(0x112968f8u));
  /* 112910bd call esi */
  call_ind((uint32_t)(ESI), 0x112910bfu);
  /* 112910bf push 0x112962d8 */
  push32((uint32_t)(0x112962d8u));
  /* 112910c4 push 0x11296908 */
  push32((uint32_t)(0x11296908u));
  /* 112910c9 call esi */
  call_ind((uint32_t)(ESI), 0x112910cbu);
  /* 112910cb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112910ce push 0x112962c0 */
  push32((uint32_t)(0x112962c0u));
  /* 112910d3 push 0x11296918 */
  push32((uint32_t)(0x11296918u));
  /* 112910d8 call esi */
  call_ind((uint32_t)(ESI), 0x112910dau);
  /* 112910da push 0x112962b0 */
  push32((uint32_t)(0x112962b0u));
  /* 112910df push 0x11296930 */
  push32((uint32_t)(0x11296930u));
  /* 112910e4 call esi */
  call_ind((uint32_t)(ESI), 0x112910e6u);
  /* 112910e6 push 0x112962a4 */
  push32((uint32_t)(0x112962a4u));
  /* 112910eb push 0x11296948 */
  push32((uint32_t)(0x11296948u));
  /* 112910f0 call esi */
  call_ind((uint32_t)(ESI), 0x112910f2u);
  /* 112910f2 push 0x11296298 */
  push32((uint32_t)(0x11296298u));
  /* 112910f7 push 0x112968d8 */
  push32((uint32_t)(0x112968d8u));
  /* 112910fc call esi */
  call_ind((uint32_t)(ESI), 0x112910feu);
  /* 112910fe push 0x11296284 */
  push32((uint32_t)(0x11296284u));
  /* 11291103 push 0x112968f0 */
  push32((uint32_t)(0x112968f0u));
  /* 11291108 call esi */
  call_ind((uint32_t)(ESI), 0x1129110au);
  /* 1129110a push 0x11296278 */
  push32((uint32_t)(0x11296278u));
  /* 1129110f push 0x11296900 */
  push32((uint32_t)(0x11296900u));
  /* 11291114 call esi */
  call_ind((uint32_t)(ESI), 0x11291116u);
  /* 11291116 push 0x11296264 */
  push32((uint32_t)(0x11296264u));
  /* 1129111b push 0x11296910 */
  push32((uint32_t)(0x11296910u));
  /* 11291120 call esi */
  call_ind((uint32_t)(ESI), 0x11291122u);
  /* 11291122 push 0x11296258 */
  push32((uint32_t)(0x11296258u));
  /* 11291127 push 0x11296928 */
  push32((uint32_t)(0x11296928u));
  /* 1129112c call esi */
  call_ind((uint32_t)(ESI), 0x1129112eu);
  /* 1129112e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291131 push 0x11296248 */
  push32((uint32_t)(0x11296248u));
  /* 11291136 push 0x11296940 */
  push32((uint32_t)(0x11296940u));
  /* 1129113b call esi */
  call_ind((uint32_t)(ESI), 0x1129113du);
  /* 1129113d push 0x11296238 */
  push32((uint32_t)(0x11296238u));
  /* 11291142 push 0x11296958 */
  push32((uint32_t)(0x11296958u));
  /* 11291147 call esi */
  call_ind((uint32_t)(ESI), 0x11291149u);
  /* 11291149 push 0x11296220 */
  push32((uint32_t)(0x11296220u));
  /* 1129114e push 0x11296960 */
  push32((uint32_t)(0x11296960u));
  /* 11291153 call esi */
  call_ind((uint32_t)(ESI), 0x11291155u);
  /* 11291155 push 0x11296214 */
  push32((uint32_t)(0x11296214u));
  /* 1129115a push 0x11296968 */
  push32((uint32_t)(0x11296968u));
  /* 1129115f call esi */
  call_ind((uint32_t)(ESI), 0x11291161u);
  /* 11291161 push 0x11296208 */
  push32((uint32_t)(0x11296208u));
  /* 11291166 push 0x11296970 */
  push32((uint32_t)(0x11296970u));
  /* 1129116b call esi */
  call_ind((uint32_t)(ESI), 0x1129116du);
  /* 1129116d push 0x112961fc */
  push32((uint32_t)(0x112961fcu));
  /* 11291172 push 0x11296920 */
  push32((uint32_t)(0x11296920u));
  /* 11291177 call esi */
  call_ind((uint32_t)(ESI), 0x11291179u);
  /* 11291179 push 0x112961ec */
  push32((uint32_t)(0x112961ecu));
  /* 1129117e push 0x11296938 */
  push32((uint32_t)(0x11296938u));
  /* 11291183 call esi */
  call_ind((uint32_t)(ESI), 0x11291185u);
  /* 11291185 push 0x112961d8 */
  push32((uint32_t)(0x112961d8u));
  /* 1129118a push 0x11296950 */
  push32((uint32_t)(0x11296950u));
  /* 1129118f call esi */
  call_ind((uint32_t)(ESI), 0x11291191u);
  /* 11291191 mov edi, dword ptr [0x11295120] */
  EDI = (r32((uint32_t)(0x11295120)));
  /* 11291197 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129119a push 0x112961cc */
  push32((uint32_t)(0x112961ccu));
  /* 1129119f push 0x11296818 */
  push32((uint32_t)(0x11296818u));
  /* 112911a4 call edi */
  call_ind((uint32_t)(EDI), 0x112911a6u);
  /* 112911a6 push 0x112961c4 */
  push32((uint32_t)(0x112961c4u));
  /* 112911ab push 0x11296868 */
  push32((uint32_t)(0x11296868u));
  /* 112911b0 call edi */
  call_ind((uint32_t)(EDI), 0x112911b2u);
  /* 112911b2 push 0x112961bc */
  push32((uint32_t)(0x112961bcu));
  /* 112911b7 push 0x11296858 */
  push32((uint32_t)(0x11296858u));
  /* 112911bc call edi */
  call_ind((uint32_t)(EDI), 0x112911beu);
  /* 112911be push 0x112961b4 */
  push32((uint32_t)(0x112961b4u));
  /* 112911c3 push 0x11296888 */
  push32((uint32_t)(0x11296888u));
  /* 112911c8 call edi */
  call_ind((uint32_t)(EDI), 0x112911cau);
  /* 112911ca push 0x112961ac */
  push32((uint32_t)(0x112961acu));
  /* 112911cf push 0x11296878 */
  push32((uint32_t)(0x11296878u));
  /* 112911d4 call edi */
  call_ind((uint32_t)(EDI), 0x112911d6u);
  /* 112911d6 push 0x112961a0 */
  push32((uint32_t)(0x112961a0u));
  /* 112911db push 0x112969b8 */
  push32((uint32_t)(0x112969b8u));
  /* 112911e0 call edi */
  call_ind((uint32_t)(EDI), 0x112911e2u);
  /* 112911e2 push 0x11296198 */
  push32((uint32_t)(0x11296198u));
  /* 112911e7 push 0x112967f8 */
  push32((uint32_t)(0x112967f8u));
  /* 112911ec call edi */
  call_ind((uint32_t)(EDI), 0x112911eeu);
  /* 112911ee push 0x11296190 */
  push32((uint32_t)(0x11296190u));
  /* 112911f3 push 0x112969e8 */
  push32((uint32_t)(0x112969e8u));
  /* 112911f8 call edi */
  call_ind((uint32_t)(EDI), 0x112911fau);
  /* 112911fa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112911fd push 0x11296188 */
  push32((uint32_t)(0x11296188u));
  /* 11291202 push 0x112969a0 */
  push32((uint32_t)(0x112969a0u));
  /* 11291207 call edi */
  call_ind((uint32_t)(EDI), 0x11291209u);
  /* 11291209 push 0x11296180 */
  push32((uint32_t)(0x11296180u));
  /* 1129120e push 0x112968a8 */
  push32((uint32_t)(0x112968a8u));
  /* 11291213 call edi */
  call_ind((uint32_t)(EDI), 0x11291215u);
  /* 11291215 push 0x11296178 */
  push32((uint32_t)(0x11296178u));
  /* 1129121a push 0x112968b0 */
  push32((uint32_t)(0x112968b0u));
  /* 1129121f call edi */
  call_ind((uint32_t)(EDI), 0x11291221u);
  /* 11291221 push 0x1129616c */
  push32((uint32_t)(0x1129616cu));
  /* 11291226 push 0x11296830 */
  push32((uint32_t)(0x11296830u));
  /* 1129122b call edi */
  call_ind((uint32_t)(EDI), 0x1129122du);
  /* 1129122d push 0x11296160 */
  push32((uint32_t)(0x11296160u));
  /* 11291232 push 0x11296828 */
  push32((uint32_t)(0x11296828u));
  /* 11291237 call edi */
  call_ind((uint32_t)(EDI), 0x11291239u);
  /* 11291239 push 0x11296154 */
  push32((uint32_t)(0x11296154u));
  /* 1129123e push 0x11296790 */
  push32((uint32_t)(0x11296790u));
  /* 11291243 call edi */
  call_ind((uint32_t)(EDI), 0x11291245u);
  /* 11291245 push 0x11296148 */
  push32((uint32_t)(0x11296148u));
  /* 1129124a push 0x112967a0 */
  push32((uint32_t)(0x112967a0u));
  /* 1129124f call edi */
  call_ind((uint32_t)(EDI), 0x11291251u);
  /* 11291251 mov edi, dword ptr [0x11295124] */
  EDI = (r32((uint32_t)(0x11295124)));
  /* 11291257 push 0x11296140 */
  push32((uint32_t)(0x11296140u));
  /* 1129125c push 0x112969b0 */
  push32((uint32_t)(0x112969b0u));
  /* 11291261 call edi */
  call_ind((uint32_t)(EDI), 0x11291263u);
  /* 11291263 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291266 push 0x11296138 */
  push32((uint32_t)(0x11296138u));
  /* 1129126b push 0x112969a8 */
  push32((uint32_t)(0x112969a8u));
  /* 11291270 call edi */
  call_ind((uint32_t)(EDI), 0x11291272u);
  /* 11291272 push 0x11296130 */
  push32((uint32_t)(0x11296130u));
  /* 11291277 push 0x112967e8 */
  push32((uint32_t)(0x112967e8u));
  /* 1129127c call edi */
  call_ind((uint32_t)(EDI), 0x1129127eu);
  /* 1129127e push 0x11296128 */
  push32((uint32_t)(0x11296128u));
  /* 11291283 push 0x112968a0 */
  push32((uint32_t)(0x112968a0u));
  /* 11291288 call edi */
  call_ind((uint32_t)(EDI), 0x1129128au);
  /* 1129128a push 0x11296120 */
  push32((uint32_t)(0x11296120u));
  /* 1129128f push 0x11296988 */
  push32((uint32_t)(0x11296988u));
  /* 11291294 call edi */
  call_ind((uint32_t)(EDI), 0x11291296u);
  /* 11291296 push 0x11296118 */
  push32((uint32_t)(0x11296118u));
  /* 1129129b push 0x11296978 */
  push32((uint32_t)(0x11296978u));
  /* 112912a0 call edi */
  call_ind((uint32_t)(EDI), 0x112912a2u);
  /* 112912a2 push 0x11296110 */
  push32((uint32_t)(0x11296110u));
  /* 112912a7 push 0x112969f0 */
  push32((uint32_t)(0x112969f0u));
  /* 112912ac call edi */
  call_ind((uint32_t)(EDI), 0x112912aeu);
  /* 112912ae push 0x11296104 */
  push32((uint32_t)(0x11296104u));
  /* 112912b3 push 0x112969c8 */
  push32((uint32_t)(0x112969c8u));
  /* 112912b8 call edi */
  call_ind((uint32_t)(EDI), 0x112912bau);
  /* 112912ba push 0x112960f8 */
  push32((uint32_t)(0x112960f8u));
  /* 112912bf push 0x112969c0 */
  push32((uint32_t)(0x112969c0u));
  /* 112912c4 call edi */
  call_ind((uint32_t)(EDI), 0x112912c6u);
  /* 112912c6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112912c9 push 0x112960f0 */
  push32((uint32_t)(0x112960f0u));
  /* 112912ce push 0x112967d0 */
  push32((uint32_t)(0x112967d0u));
  /* 112912d3 call edi */
  call_ind((uint32_t)(EDI), 0x112912d5u);
  /* 112912d5 push 0x112960e8 */
  push32((uint32_t)(0x112960e8u));
  /* 112912da push 0x112967d8 */
  push32((uint32_t)(0x112967d8u));
  /* 112912df call edi */
  call_ind((uint32_t)(EDI), 0x112912e1u);
  /* 112912e1 push 0x112960e0 */
  push32((uint32_t)(0x112960e0u));
  /* 112912e6 push 0x112967e0 */
  push32((uint32_t)(0x112967e0u));
  /* 112912eb call edi */
  call_ind((uint32_t)(EDI), 0x112912edu);
  /* 112912ed push 0x112960d8 */
  push32((uint32_t)(0x112960d8u));
  /* 112912f2 push 0x112967f0 */
  push32((uint32_t)(0x112967f0u));
  /* 112912f7 call edi */
  call_ind((uint32_t)(EDI), 0x112912f9u);
  /* 112912f9 push 0x112960d0 */
  push32((uint32_t)(0x112960d0u));
  /* 112912fe push 0x112967a8 */
  push32((uint32_t)(0x112967a8u));
  /* 11291303 call edi */
  call_ind((uint32_t)(EDI), 0x11291305u);
  /* 11291305 push 0x112960c8 */
  push32((uint32_t)(0x112960c8u));
  /* 1129130a push 0x112967b0 */
  push32((uint32_t)(0x112967b0u));
  /* 1129130f call edi */
  call_ind((uint32_t)(EDI), 0x11291311u);
  /* 11291311 push 0x112960c0 */
  push32((uint32_t)(0x112960c0u));
  /* 11291316 push 0x112967b8 */
  push32((uint32_t)(0x112967b8u));
  /* 1129131b call edi */
  call_ind((uint32_t)(EDI), 0x1129131du);
  /* 1129131d push 0x112960b8 */
  push32((uint32_t)(0x112960b8u));
  /* 11291322 push 0x112967c0 */
  push32((uint32_t)(0x112967c0u));
  /* 11291327 call edi */
  call_ind((uint32_t)(EDI), 0x11291329u);
  /* 11291329 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129132c push 0x112960b0 */
  push32((uint32_t)(0x112960b0u));
  /* 11291331 push 0x112967c8 */
  push32((uint32_t)(0x112967c8u));
  /* 11291336 call edi */
  call_ind((uint32_t)(EDI), 0x11291338u);
  /* 11291338 push 0x112960a4 */
  push32((uint32_t)(0x112960a4u));
  /* 1129133d push 0x112969d8 */
  push32((uint32_t)(0x112969d8u));
  /* 11291342 call edi */
  call_ind((uint32_t)(EDI), 0x11291344u);
  /* 11291344 push 0x11296098 */
  push32((uint32_t)(0x11296098u));
  /* 11291349 push 0x112969d0 */
  push32((uint32_t)(0x112969d0u));
  /* 1129134e call edi */
  call_ind((uint32_t)(EDI), 0x11291350u);
  /* 11291350 mov edi, dword ptr [0x11295128] */
  EDI = (r32((uint32_t)(0x11295128)));
  /* 11291356 push 0x11296090 */
  push32((uint32_t)(0x11296090u));
  /* 1129135b push 1 */
  push32((uint32_t)(0x1u));
  /* 1129135d call edi */
  call_ind((uint32_t)(EDI), 0x1129135fu);
  /* 1129135f push 0x11296088 */
  push32((uint32_t)(0x11296088u));
  /* 11291364 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291366 call edi */
  call_ind((uint32_t)(EDI), 0x11291368u);
  /* 11291368 push 0x11296080 */
  push32((uint32_t)(0x11296080u));
  /* 1129136d push 4 */
  push32((uint32_t)(0x4u));
  /* 1129136f call edi */
  call_ind((uint32_t)(EDI), 0x11291371u);
  /* 11291371 push 0x11296078 */
  push32((uint32_t)(0x11296078u));
  /* 11291376 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291378 call edi */
  call_ind((uint32_t)(EDI), 0x1129137au);
  /* 1129137a push 0x11296070 */
  push32((uint32_t)(0x11296070u));
  /* 1129137f push 0x11296810 */
  push32((uint32_t)(0x11296810u));
  /* 11291384 call dword ptr [0x1129512c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129512c))), 0x1129138au);
  /* 1129138a mov edi, dword ptr [0x11295130] */
  EDI = (r32((uint32_t)(0x11295130)));
  /* 11291390 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291393 push 0x11296064 */
  push32((uint32_t)(0x11296064u));
  /* 11291398 push 0x11296808 */
  push32((uint32_t)(0x11296808u));
  /* 1129139d call edi */
  call_ind((uint32_t)(EDI), 0x1129139fu);
  /* 1129139f push 0x1129605c */
  push32((uint32_t)(0x1129605cu));
  /* 112913a4 push 0x11296800 */
  push32((uint32_t)(0x11296800u));
  /* 112913a9 call edi */
  call_ind((uint32_t)(EDI), 0x112913abu);
  /* 112913ab push 0x11296044 */
  push32((uint32_t)(0x11296044u));
  /* 112913b0 push 0x11296998 */
  push32((uint32_t)(0x11296998u));
  /* 112913b5 call esi */
  call_ind((uint32_t)(ESI), 0x112913b7u);
  /* 112913b7 push 0x11296030 */
  push32((uint32_t)(0x11296030u));
  /* 112913bc push 0x112968e8 */
  push32((uint32_t)(0x112968e8u));
  /* 112913c1 call esi */
  call_ind((uint32_t)(ESI), 0x112913c3u);
  /* 112913c3 mov esi, dword ptr [0x11295134] */
  ESI = (r32((uint32_t)(0x11295134)));
  /* 112913c9 push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 112913ce call esi */
  call_ind((uint32_t)(ESI), 0x112913d0u);
  /* 112913d0 mov edi, dword ptr [0x11295138] */
  EDI = (r32((uint32_t)(0x11295138)));
  /* 112913d6 push 8 */
  push32((uint32_t)(0x8u));
  /* 112913d8 push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 112913dd call edi */
  call_ind((uint32_t)(EDI), 0x112913dfu);
  /* 112913df push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 112913e4 call esi */
  call_ind((uint32_t)(ESI), 0x112913e6u);
  /* 112913e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 112913e8 push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 112913ed call edi */
  call_ind((uint32_t)(EDI), 0x112913efu);
  /* 112913ef push 0x11296820 */
  push32((uint32_t)(0x11296820u));
  /* 112913f4 call esi */
  call_ind((uint32_t)(ESI), 0x112913f6u);
  /* 112913f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 112913f8 push 0x11296820 */
  push32((uint32_t)(0x11296820u));
  /* 112913fd call edi */
  call_ind((uint32_t)(EDI), 0x112913ffu);
  /* 112913ff add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291402 push 0x11296798 */
  push32((uint32_t)(0x11296798u));
  /* 11291407 call esi */
  call_ind((uint32_t)(ESI), 0x11291409u);
  /* 11291409 push 8 */
  push32((uint32_t)(0x8u));
  /* 1129140b push 0x11296798 */
  push32((uint32_t)(0x11296798u));
  /* 11291410 call edi */
  call_ind((uint32_t)(EDI), 0x11291412u);
  /* 11291412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291415 pop edi */
  EDI = (pop32());
  /* 11291416 pop esi */
  ESI = (pop32());
  /* 11291417 ret  */
  ESPCHK(0x11291000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001420 @ 0x11291420 (20 bytes, 6 insns) */
void f_11291420(void) {
  FTRACE(0x11291420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11291420 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11291424 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11291425 jne 0x1129142c */
  if (!C.zf) goto L_1129142c;
  /* 11291427 call 0x11291000 */
  push32(0x1129142cu); f_11291000();
L_1129142c:;
  /* 1129142c mov eax, 1 */
  EAX = (0x1u);
  /* 11291431 ret 0xc */
  ESPCHK(0x11291420u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x11291440 (3527 bytes, 1185 insns) */
void f_11291440(void) {
  FTRACE(0x11291440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11291440 push ebx */
  push32((uint32_t)(EBX));
  /* 11291441 push ebp */
  push32((uint32_t)(EBP));
  /* 11291442 push esi */
  push32((uint32_t)(ESI));
  /* 11291443 mov esi, dword ptr [0x112950b0] */
  ESI = (r32((uint32_t)(0x112950b0)));
  /* 11291449 push edi */
  push32((uint32_t)(EDI));
  /* 1129144a push 1 */
  push32((uint32_t)(0x1u));
  /* 1129144c call esi */
  call_ind((uint32_t)(ESI), 0x1129144eu);
  /* 1129144e mov ebx, dword ptr [0x112950b4] */
  EBX = (r32((uint32_t)(0x112950b4)));
  /* 11291454 mov edi, dword ptr [0x112950b8] */
  EDI = (r32((uint32_t)(0x112950b8)));
  /* 1129145a mov ebp, dword ptr [0x112950bc] */
  EBP = (r32((uint32_t)(0x112950bc)));
  /* 11291460 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291463 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291465 je 0x11291832 */
  if (C.zf) goto L_11291832;
  /* 1129146b push 0 */
  push32((uint32_t)(0x0u));
  /* 1129146d push 1 */
  push32((uint32_t)(0x1u));
  /* 1129146f call edi */
  call_ind((uint32_t)(EDI), 0x11291471u);
  /* 11291471 mov esi, dword ptr [0x112950c0] */
  ESI = (r32((uint32_t)(0x112950c0)));
  /* 11291477 push 0x11296460 */
  push32((uint32_t)(0x11296460u));
  /* 1129147c call esi */
  call_ind((uint32_t)(ESI), 0x1129147eu);
  /* 1129147e push 0x11296458 */
  push32((uint32_t)(0x11296458u));
  /* 11291483 call esi */
  call_ind((uint32_t)(ESI), 0x11291485u);
  /* 11291485 mov esi, dword ptr [0x112950c4] */
  ESI = (r32((uint32_t)(0x112950c4)));
  /* 1129148b push 1 */
  push32((uint32_t)(0x1u));
  /* 1129148d push 2 */
  push32((uint32_t)(0x2u));
  /* 1129148f push 0x112969c0 */
  push32((uint32_t)(0x112969c0u));
  /* 11291494 call esi */
  call_ind((uint32_t)(ESI), 0x11291496u);
  /* 11291496 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291498 push 2 */
  push32((uint32_t)(0x2u));
  /* 1129149a push 0x112969c8 */
  push32((uint32_t)(0x112969c8u));
  /* 1129149f call esi */
  call_ind((uint32_t)(ESI), 0x112914a1u);
  /* 112914a1 mov esi, dword ptr [0x112950c8] */
  ESI = (r32((uint32_t)(0x112950c8)));
  /* 112914a7 push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 112914ac push 3 */
  push32((uint32_t)(0x3u));
  /* 112914ae push 1 */
  push32((uint32_t)(0x1u));
  /* 112914b0 call esi */
  call_ind((uint32_t)(ESI), 0x112914b2u);
  /* 112914b2 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112914b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112914b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 112914bb call esi */
  call_ind((uint32_t)(ESI), 0x112914bdu);
  /* 112914bd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112914c0 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112914c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 112914c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112914c9 call esi */
  call_ind((uint32_t)(ESI), 0x112914cbu);
  /* 112914cb push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112914d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 112914d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112914d4 call esi */
  call_ind((uint32_t)(ESI), 0x112914d6u);
  /* 112914d6 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112914db push 0 */
  push32((uint32_t)(0x0u));
  /* 112914dd push 1 */
  push32((uint32_t)(0x1u));
  /* 112914df call esi */
  call_ind((uint32_t)(ESI), 0x112914e1u);
  /* 112914e1 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112914e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112914e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 112914ea call esi */
  call_ind((uint32_t)(ESI), 0x112914ecu);
  /* 112914ec push 0x249f0 */
  push32((uint32_t)(0x249f0u));
  /* 112914f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 112914f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112914f5 call esi */
  call_ind((uint32_t)(ESI), 0x112914f7u);
  /* 112914f7 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112914fc push 1 */
  push32((uint32_t)(0x1u));
  /* 112914fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11291500 call esi */
  call_ind((uint32_t)(ESI), 0x11291502u);
  /* 11291502 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291505 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1129150a push 4 */
  push32((uint32_t)(0x4u));
  /* 1129150c push 2 */
  push32((uint32_t)(0x2u));
  /* 1129150e call esi */
  call_ind((uint32_t)(ESI), 0x11291510u);
  /* 11291510 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11291515 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291517 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291519 call esi */
  call_ind((uint32_t)(ESI), 0x1129151bu);
  /* 1129151b push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11291520 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291522 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291524 call esi */
  call_ind((uint32_t)(ESI), 0x11291526u);
  /* 11291526 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1129152b push 2 */
  push32((uint32_t)(0x2u));
  /* 1129152d push 2 */
  push32((uint32_t)(0x2u));
  /* 1129152f call esi */
  call_ind((uint32_t)(ESI), 0x11291531u);
  /* 11291531 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11291533 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291535 call dword ptr [0x112950cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950cc))), 0x1129153bu);
  /* 1129153b push 0x26 */
  push32((uint32_t)(0x26u));
  /* 1129153d push 1 */
  push32((uint32_t)(0x1u));
  /* 1129153f call dword ptr [0x112950cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950cc))), 0x11291545u);
  /* 11291545 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291548 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 1129154a push 5 */
  push32((uint32_t)(0x5u));
  /* 1129154c call dword ptr [0x112950cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950cc))), 0x11291552u);
  /* 11291552 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11291554 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291556 call dword ptr [0x112950cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950cc))), 0x1129155cu);
  /* 1129155c push 0 */
  push32((uint32_t)(0x0u));
  /* 1129155e push 0x11296868 */
  push32((uint32_t)(0x11296868u));
  /* 11291563 call ebp */
  call_ind((uint32_t)(EBP), 0x11291565u);
  /* 11291565 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291567 push 0x11296858 */
  push32((uint32_t)(0x11296858u));
  /* 1129156c call ebp */
  call_ind((uint32_t)(EBP), 0x1129156eu);
  /* 1129156e push 0 */
  push32((uint32_t)(0x0u));
  /* 11291570 call dword ptr [0x112950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950d0))), 0x11291576u);
  /* 11291576 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291578 call dword ptr [0x112950d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950d4))), 0x1129157eu);
  /* 1129157e push 0 */
  push32((uint32_t)(0x0u));
  /* 11291580 push 0x11296888 */
  push32((uint32_t)(0x11296888u));
  /* 11291585 call ebp */
  call_ind((uint32_t)(EBP), 0x11291587u);
  /* 11291587 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291589 push 0x11296878 */
  push32((uint32_t)(0x11296878u));
  /* 1129158e call ebp */
  call_ind((uint32_t)(EBP), 0x11291590u);
  /* 11291590 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291592 call dword ptr [0x112950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950d0))), 0x11291598u);
  /* 11291598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1129159a call dword ptr [0x112950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950d8))), 0x112915a0u);
  /* 112915a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112915a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112915a5 jne 0x11291636 */
  if (!C.zf) goto L_11291636;
  /* 112915ab push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112915b0 push 3 */
  push32((uint32_t)(0x3u));
  /* 112915b2 push eax */
  push32((uint32_t)(EAX));
  /* 112915b3 call esi */
  call_ind((uint32_t)(ESI), 0x112915b5u);
  /* 112915b5 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112915ba push 1 */
  push32((uint32_t)(0x1u));
  /* 112915bc push 0 */
  push32((uint32_t)(0x0u));
  /* 112915be call esi */
  call_ind((uint32_t)(ESI), 0x112915c0u);
  /* 112915c0 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112915c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 112915c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112915c9 call esi */
  call_ind((uint32_t)(ESI), 0x112915cbu);
  /* 112915cb push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112915d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 112915d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112915d4 call esi */
  call_ind((uint32_t)(ESI), 0x112915d6u);
  /* 112915d6 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112915db push 0 */
  push32((uint32_t)(0x0u));
  /* 112915dd push 0 */
  push32((uint32_t)(0x0u));
  /* 112915df call esi */
  call_ind((uint32_t)(ESI), 0x112915e1u);
  /* 112915e1 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 112915e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112915e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112915ea call esi */
  call_ind((uint32_t)(ESI), 0x112915ecu);
  /* 112915ec add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112915ef push 1 */
  push32((uint32_t)(0x1u));
  /* 112915f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 112915f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112915f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112915f7 push 0x1129644c */
  push32((uint32_t)(0x1129644cu));
  /* 112915fc push 2 */
  push32((uint32_t)(0x2u));
  /* 112915fe call dword ptr [0x112950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950dc))), 0x11291604u);
  /* 11291604 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291606 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291608 push 1 */
  push32((uint32_t)(0x1u));
  /* 1129160a push 0 */
  push32((uint32_t)(0x0u));
  /* 1129160c push 0x11296440 */
  push32((uint32_t)(0x11296440u));
  /* 11291611 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291613 call dword ptr [0x112950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950dc))), 0x11291619u);
  /* 11291619 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1129161e push 1 */
  push32((uint32_t)(0x1u));
  /* 11291620 call dword ptr [0x112950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e0))), 0x11291626u);
  /* 11291626 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1129162b push 2 */
  push32((uint32_t)(0x2u));
  /* 1129162d call dword ptr [0x112950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e0))), 0x11291633u);
  /* 11291633 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291636:;
  /* 11291636 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291638 call dword ptr [0x112950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950d8))), 0x1129163eu);
  /* 1129163e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291641 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11291644 jne 0x112916d6 */
  if (!C.zf) goto L_112916d6;
  /* 1129164a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1129164f push 3 */
  push32((uint32_t)(0x3u));
  /* 11291651 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291653 call esi */
  call_ind((uint32_t)(ESI), 0x11291655u);
  /* 11291655 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1129165a push 1 */
  push32((uint32_t)(0x1u));
  /* 1129165c push 0 */
  push32((uint32_t)(0x0u));
  /* 1129165e call esi */
  call_ind((uint32_t)(ESI), 0x11291660u);
  /* 11291660 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11291665 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291667 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291669 call esi */
  call_ind((uint32_t)(ESI), 0x1129166bu);
  /* 1129166b push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11291670 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291672 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291674 call esi */
  call_ind((uint32_t)(ESI), 0x11291676u);
  /* 11291676 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1129167b push 0 */
  push32((uint32_t)(0x0u));
  /* 1129167d push 0 */
  push32((uint32_t)(0x0u));
  /* 1129167f call esi */
  call_ind((uint32_t)(ESI), 0x11291681u);
  /* 11291681 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11291686 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291688 push 0 */
  push32((uint32_t)(0x0u));
  /* 1129168a call esi */
  call_ind((uint32_t)(ESI), 0x1129168cu);
  /* 1129168c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129168f push 2 */
  push32((uint32_t)(0x2u));
  /* 11291691 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291695 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291697 push 0x1129644c */
  push32((uint32_t)(0x1129644cu));
  /* 1129169c push 2 */
  push32((uint32_t)(0x2u));
  /* 1129169e call dword ptr [0x112950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950dc))), 0x112916a4u);
  /* 112916a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112916a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112916a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 112916aa push 0 */
  push32((uint32_t)(0x0u));
  /* 112916ac push 0x11296440 */
  push32((uint32_t)(0x11296440u));
  /* 112916b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 112916b3 call dword ptr [0x112950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950dc))), 0x112916b9u);
  /* 112916b9 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 112916be push 1 */
  push32((uint32_t)(0x1u));
  /* 112916c0 call dword ptr [0x112950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e0))), 0x112916c6u);
  /* 112916c6 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 112916cb push 2 */
  push32((uint32_t)(0x2u));
  /* 112916cd call dword ptr [0x112950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e0))), 0x112916d3u);
  /* 112916d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112916d6:;
  /* 112916d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112916d8 call dword ptr [0x112950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950d8))), 0x112916deu);
  /* 112916de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112916e1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112916e4 jne 0x11291776 */
  if (!C.zf) goto L_11291776;
  /* 112916ea push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 112916ef push 3 */
  push32((uint32_t)(0x3u));
  /* 112916f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112916f3 call esi */
  call_ind((uint32_t)(ESI), 0x112916f5u);
  /* 112916f5 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 112916fa push 1 */
  push32((uint32_t)(0x1u));
  /* 112916fc push 0 */
  push32((uint32_t)(0x0u));
  /* 112916fe call esi */
  call_ind((uint32_t)(ESI), 0x11291700u);
  /* 11291700 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11291705 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291707 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291709 call esi */
  call_ind((uint32_t)(ESI), 0x1129170bu);
  /* 1129170b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11291710 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291712 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291714 call esi */
  call_ind((uint32_t)(ESI), 0x11291716u);
  /* 11291716 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1129171b push 0 */
  push32((uint32_t)(0x0u));
  /* 1129171d push 0 */
  push32((uint32_t)(0x0u));
  /* 1129171f call esi */
  call_ind((uint32_t)(ESI), 0x11291721u);
  /* 11291721 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11291726 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291728 push 0 */
  push32((uint32_t)(0x0u));
  /* 1129172a call esi */
  call_ind((uint32_t)(ESI), 0x1129172cu);
  /* 1129172c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129172f push 3 */
  push32((uint32_t)(0x3u));
  /* 11291731 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291733 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291735 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291737 push 0x1129644c */
  push32((uint32_t)(0x1129644cu));
  /* 1129173c push 2 */
  push32((uint32_t)(0x2u));
  /* 1129173e call dword ptr [0x112950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950dc))), 0x11291744u);
  /* 11291744 push 3 */
  push32((uint32_t)(0x3u));
  /* 11291746 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291748 push 1 */
  push32((uint32_t)(0x1u));
  /* 1129174a push 0 */
  push32((uint32_t)(0x0u));
  /* 1129174c push 0x11296440 */
  push32((uint32_t)(0x11296440u));
  /* 11291751 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291753 call dword ptr [0x112950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950dc))), 0x11291759u);
  /* 11291759 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1129175e push 1 */
  push32((uint32_t)(0x1u));
  /* 11291760 call dword ptr [0x112950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e0))), 0x11291766u);
  /* 11291766 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1129176b push 2 */
  push32((uint32_t)(0x2u));
  /* 1129176d call dword ptr [0x112950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e0))), 0x11291773u);
  /* 11291773 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291776:;
  /* 11291776 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291778 call dword ptr [0x112950d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950d8))), 0x1129177eu);
  /* 1129177e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291781 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11291784 jne 0x1129182c */
  if (!C.zf) goto L_1129182c;
  /* 1129178a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1129178f push eax */
  push32((uint32_t)(EAX));
  /* 11291790 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291792 call esi */
  call_ind((uint32_t)(ESI), 0x11291794u);
  /* 11291794 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11291799 push 1 */
  push32((uint32_t)(0x1u));
  /* 1129179b push 0 */
  push32((uint32_t)(0x0u));
  /* 1129179d call esi */
  call_ind((uint32_t)(ESI), 0x1129179fu);
  /* 1129179f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 112917a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 112917a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112917a8 call esi */
  call_ind((uint32_t)(ESI), 0x112917aau);
  /* 112917aa push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 112917af push 5 */
  push32((uint32_t)(0x5u));
  /* 112917b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112917b3 call esi */
  call_ind((uint32_t)(ESI), 0x112917b5u);
  /* 112917b5 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 112917ba push 0 */
  push32((uint32_t)(0x0u));
  /* 112917bc push 0 */
  push32((uint32_t)(0x0u));
  /* 112917be call esi */
  call_ind((uint32_t)(ESI), 0x112917c0u);
  /* 112917c0 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 112917c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112917c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112917c9 call esi */
  call_ind((uint32_t)(ESI), 0x112917cbu);
  /* 112917cb add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112917ce mov esi, dword ptr [0x112950dc] */
  ESI = (r32((uint32_t)(0x112950dc)));
  /* 112917d4 push 3 */
  push32((uint32_t)(0x3u));
  /* 112917d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112917d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 112917da push 0 */
  push32((uint32_t)(0x0u));
  /* 112917dc push 0x1129644c */
  push32((uint32_t)(0x1129644cu));
  /* 112917e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112917e3 call esi */
  call_ind((uint32_t)(ESI), 0x112917e5u);
  /* 112917e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 112917e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112917e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 112917eb push 0 */
  push32((uint32_t)(0x0u));
  /* 112917ed push 0x11296440 */
  push32((uint32_t)(0x11296440u));
  /* 112917f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112917f4 call esi */
  call_ind((uint32_t)(ESI), 0x112917f6u);
  /* 112917f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112917f8 push 0x11296918 */
  push32((uint32_t)(0x11296918u));
  /* 112917fd push 0 */
  push32((uint32_t)(0x0u));
  /* 112917ff call ebx */
  call_ind((uint32_t)(EBX), 0x11291801u);
  /* 11291801 push 0x11296810 */
  push32((uint32_t)(0x11296810u));
  /* 11291806 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291808 call dword ptr [0x112950e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e4))), 0x1129180eu);
  /* 1129180e mov esi, dword ptr [0x112950e0] */
  ESI = (r32((uint32_t)(0x112950e0)));
  /* 11291814 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291817 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 1129181c push 1 */
  push32((uint32_t)(0x1u));
  /* 1129181e call esi */
  call_ind((uint32_t)(ESI), 0x11291820u);
  /* 11291820 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11291825 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291827 call esi */
  call_ind((uint32_t)(ESI), 0x11291829u);
  /* 11291829 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1129182c:;
  /* 1129182c mov esi, dword ptr [0x112950b0] */
  ESI = (r32((uint32_t)(0x112950b0)));
L_11291832:;
  /* 11291832 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291834 call esi */
  call_ind((uint32_t)(ESI), 0x11291836u);
  /* 11291836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291839 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1129183b je 0x11291860 */
  if (C.zf) goto L_11291860;
  /* 1129183d push 2 */
  push32((uint32_t)(0x2u));
  /* 1129183f call dword ptr [0x112950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e8))), 0x11291845u);
  /* 11291845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291848 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1129184a je 0x11291860 */
  if (C.zf) goto L_11291860;
  /* 1129184c push 0 */
  push32((uint32_t)(0x0u));
  /* 1129184e push 2 */
  push32((uint32_t)(0x2u));
  /* 11291850 call edi */
  call_ind((uint32_t)(EDI), 0x11291852u);
  /* 11291852 push 0x11296438 */
  push32((uint32_t)(0x11296438u));
  /* 11291857 call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x1129185du);
  /* 1129185d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291860:;
  /* 11291860 push 3 */
  push32((uint32_t)(0x3u));
  /* 11291862 call esi */
  call_ind((uint32_t)(ESI), 0x11291864u);
  /* 11291864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291867 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291869 je 0x1129188e */
  if (C.zf) goto L_1129188e;
  /* 1129186b push 1 */
  push32((uint32_t)(0x1u));
  /* 1129186d call dword ptr [0x112950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e8))), 0x11291873u);
  /* 11291873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291876 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291878 je 0x1129188e */
  if (C.zf) goto L_1129188e;
  /* 1129187a push 0 */
  push32((uint32_t)(0x0u));
  /* 1129187c push 3 */
  push32((uint32_t)(0x3u));
  /* 1129187e call edi */
  call_ind((uint32_t)(EDI), 0x11291880u);
  /* 11291880 push 0x11296430 */
  push32((uint32_t)(0x11296430u));
  /* 11291885 call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x1129188bu);
  /* 1129188b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1129188e:;
  /* 1129188e push 4 */
  push32((uint32_t)(0x4u));
  /* 11291890 call esi */
  call_ind((uint32_t)(ESI), 0x11291892u);
  /* 11291892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291895 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291897 je 0x112918c9 */
  if (C.zf) goto L_112918c9;
  /* 11291899 push 3 */
  push32((uint32_t)(0x3u));
  /* 1129189b call esi */
  call_ind((uint32_t)(ESI), 0x1129189du);
  /* 1129189d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112918a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112918a2 jne 0x112918c9 */
  if (!C.zf) goto L_112918c9;
  /* 112918a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112918a6 call esi */
  call_ind((uint32_t)(ESI), 0x112918a8u);
  /* 112918a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112918ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112918ad jne 0x112918c9 */
  if (!C.zf) goto L_112918c9;
  /* 112918af push 0 */
  push32((uint32_t)(0x0u));
  /* 112918b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 112918b3 call edi */
  call_ind((uint32_t)(EDI), 0x112918b5u);
  /* 112918b5 push 0x11296428 */
  push32((uint32_t)(0x11296428u));
  /* 112918ba call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x112918c0u);
  /* 112918c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112918c3 call dword ptr [0x112950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950ec))), 0x112918c9u);
L_112918c9:;
  /* 112918c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 112918cb call esi */
  call_ind((uint32_t)(ESI), 0x112918cdu);
  /* 112918cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112918d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112918d2 je 0x112918f7 */
  if (C.zf) goto L_112918f7;
  /* 112918d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112918d6 call dword ptr [0x112950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e8))), 0x112918dcu);
  /* 112918dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112918df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112918e1 je 0x112918f7 */
  if (C.zf) goto L_112918f7;
  /* 112918e3 push 0x11296420 */
  push32((uint32_t)(0x11296420u));
  /* 112918e8 call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x112918eeu);
  /* 112918ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112918f1 call dword ptr [0x112950f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f0))), 0x112918f7u);
L_112918f7:;
  /* 112918f7 push 6 */
  push32((uint32_t)(0x6u));
  /* 112918f9 call esi */
  call_ind((uint32_t)(ESI), 0x112918fbu);
  /* 112918fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112918fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291900 je 0x1129192d */
  if (C.zf) goto L_1129192d;
  /* 11291902 push 0x11296818 */
  push32((uint32_t)(0x11296818u));
  /* 11291907 call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x1129190du);
  /* 1129190d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291912 jne 0x1129192d */
  if (!C.zf) goto L_1129192d;
  /* 11291914 push eax */
  push32((uint32_t)(EAX));
  /* 11291915 push 6 */
  push32((uint32_t)(0x6u));
  /* 11291917 call edi */
  call_ind((uint32_t)(EDI), 0x11291919u);
  /* 11291919 push 0x11296418 */
  push32((uint32_t)(0x11296418u));
  /* 1129191e call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x11291924u);
  /* 11291924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291927 call dword ptr [0x112950f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f0))), 0x1129192du);
L_1129192d:;
  /* 1129192d push 0 */
  push32((uint32_t)(0x0u));
  /* 1129192f push 0x11296838 */
  push32((uint32_t)(0x11296838u));
  /* 11291934 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291936 call ebx */
  call_ind((uint32_t)(EBX), 0x11291938u);
  /* 11291938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1129193a push 0x11296840 */
  push32((uint32_t)(0x11296840u));
  /* 1129193f push 0 */
  push32((uint32_t)(0x0u));
  /* 11291941 call ebx */
  call_ind((uint32_t)(EBX), 0x11291943u);
  /* 11291943 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291945 push 0x11296848 */
  push32((uint32_t)(0x11296848u));
  /* 1129194a push 0 */
  push32((uint32_t)(0x0u));
  /* 1129194c call ebx */
  call_ind((uint32_t)(EBX), 0x1129194eu);
  /* 1129194e push 0 */
  push32((uint32_t)(0x0u));
  /* 11291950 push 0x11296850 */
  push32((uint32_t)(0x11296850u));
  /* 11291955 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291957 call ebx */
  call_ind((uint32_t)(EBX), 0x11291959u);
  /* 11291959 push 0 */
  push32((uint32_t)(0x0u));
  /* 1129195b push 0x11296860 */
  push32((uint32_t)(0x11296860u));
  /* 11291960 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291962 call ebx */
  call_ind((uint32_t)(EBX), 0x11291964u);
  /* 11291964 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291966 push 0x11296870 */
  push32((uint32_t)(0x11296870u));
  /* 1129196b push 0 */
  push32((uint32_t)(0x0u));
  /* 1129196d call ebx */
  call_ind((uint32_t)(EBX), 0x1129196fu);
  /* 1129196f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291972 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291974 push 0x11296880 */
  push32((uint32_t)(0x11296880u));
  /* 11291979 push 0 */
  push32((uint32_t)(0x0u));
  /* 1129197b call ebx */
  call_ind((uint32_t)(EBX), 0x1129197du);
  /* 1129197d push 0 */
  push32((uint32_t)(0x0u));
  /* 1129197f push 0x11296890 */
  push32((uint32_t)(0x11296890u));
  /* 11291984 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291986 call ebx */
  call_ind((uint32_t)(EBX), 0x11291988u);
  /* 11291988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1129198a push 0x11296898 */
  push32((uint32_t)(0x11296898u));
  /* 1129198f push 0 */
  push32((uint32_t)(0x0u));
  /* 11291991 call ebx */
  call_ind((uint32_t)(EBX), 0x11291993u);
  /* 11291993 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291995 push 0x112968b8 */
  push32((uint32_t)(0x112968b8u));
  /* 1129199a push 0 */
  push32((uint32_t)(0x0u));
  /* 1129199c call ebx */
  call_ind((uint32_t)(EBX), 0x1129199eu);
  /* 1129199e push 0 */
  push32((uint32_t)(0x0u));
  /* 112919a0 push 0x112968c0 */
  push32((uint32_t)(0x112968c0u));
  /* 112919a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919a7 call ebx */
  call_ind((uint32_t)(EBX), 0x112919a9u);
  /* 112919a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919ab push 0x112968c8 */
  push32((uint32_t)(0x112968c8u));
  /* 112919b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919b2 call ebx */
  call_ind((uint32_t)(EBX), 0x112919b4u);
  /* 112919b4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112919b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919b9 push 0x112968d0 */
  push32((uint32_t)(0x112968d0u));
  /* 112919be push 0 */
  push32((uint32_t)(0x0u));
  /* 112919c0 call ebx */
  call_ind((uint32_t)(EBX), 0x112919c2u);
  /* 112919c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919c4 push 0x112968e0 */
  push32((uint32_t)(0x112968e0u));
  /* 112919c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919cb call ebx */
  call_ind((uint32_t)(EBX), 0x112919cdu);
  /* 112919cd push 0 */
  push32((uint32_t)(0x0u));
  /* 112919cf push 0x112968f8 */
  push32((uint32_t)(0x112968f8u));
  /* 112919d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919d6 call ebx */
  call_ind((uint32_t)(EBX), 0x112919d8u);
  /* 112919d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919da push 0x11296908 */
  push32((uint32_t)(0x11296908u));
  /* 112919df push 0 */
  push32((uint32_t)(0x0u));
  /* 112919e1 call ebx */
  call_ind((uint32_t)(EBX), 0x112919e3u);
  /* 112919e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919e5 push 0x11296930 */
  push32((uint32_t)(0x11296930u));
  /* 112919ea push 0 */
  push32((uint32_t)(0x0u));
  /* 112919ec call ebx */
  call_ind((uint32_t)(EBX), 0x112919eeu);
  /* 112919ee push 0 */
  push32((uint32_t)(0x0u));
  /* 112919f0 push 0x11296948 */
  push32((uint32_t)(0x11296948u));
  /* 112919f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112919f7 call ebx */
  call_ind((uint32_t)(EBX), 0x112919f9u);
  /* 112919f9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112919fc push 0 */
  push32((uint32_t)(0x0u));
  /* 112919fe push 0x112968d8 */
  push32((uint32_t)(0x112968d8u));
  /* 11291a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a05 call ebx */
  call_ind((uint32_t)(EBX), 0x11291a07u);
  /* 11291a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a09 push 0x112968f0 */
  push32((uint32_t)(0x112968f0u));
  /* 11291a0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a10 call ebx */
  call_ind((uint32_t)(EBX), 0x11291a12u);
  /* 11291a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a14 push 0x11296900 */
  push32((uint32_t)(0x11296900u));
  /* 11291a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a1b call ebx */
  call_ind((uint32_t)(EBX), 0x11291a1du);
  /* 11291a1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a1f push 0x11296910 */
  push32((uint32_t)(0x11296910u));
  /* 11291a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a26 call ebx */
  call_ind((uint32_t)(EBX), 0x11291a28u);
  /* 11291a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a2a push 0x11296928 */
  push32((uint32_t)(0x11296928u));
  /* 11291a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a31 call ebx */
  call_ind((uint32_t)(EBX), 0x11291a33u);
  /* 11291a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a35 push 0x11296940 */
  push32((uint32_t)(0x11296940u));
  /* 11291a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a3c call ebx */
  call_ind((uint32_t)(EBX), 0x11291a3eu);
  /* 11291a3e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a43 push 0x11296958 */
  push32((uint32_t)(0x11296958u));
  /* 11291a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a4a call ebx */
  call_ind((uint32_t)(EBX), 0x11291a4cu);
  /* 11291a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a4e push 0x11296960 */
  push32((uint32_t)(0x11296960u));
  /* 11291a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a55 call ebx */
  call_ind((uint32_t)(EBX), 0x11291a57u);
  /* 11291a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a59 push 0x11296968 */
  push32((uint32_t)(0x11296968u));
  /* 11291a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a60 call ebx */
  call_ind((uint32_t)(EBX), 0x11291a62u);
  /* 11291a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a64 push 0x11296970 */
  push32((uint32_t)(0x11296970u));
  /* 11291a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a6b call ebx */
  call_ind((uint32_t)(EBX), 0x11291a6du);
  /* 11291a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a6f push 0x11296920 */
  push32((uint32_t)(0x11296920u));
  /* 11291a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a76 call ebx */
  call_ind((uint32_t)(EBX), 0x11291a78u);
  /* 11291a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a7a push 0x11296938 */
  push32((uint32_t)(0x11296938u));
  /* 11291a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a81 call ebx */
  call_ind((uint32_t)(EBX), 0x11291a83u);
  /* 11291a83 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a88 push 0x11296950 */
  push32((uint32_t)(0x11296950u));
  /* 11291a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11291a8f call ebx */
  call_ind((uint32_t)(EBX), 0x11291a91u);
  /* 11291a91 push 8 */
  push32((uint32_t)(0x8u));
  /* 11291a93 call esi */
  call_ind((uint32_t)(ESI), 0x11291a95u);
  /* 11291a95 mov esi, dword ptr [0x112950f8] */
  ESI = (r32((uint32_t)(0x112950f8)));
  /* 11291a9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291a9e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291aa0 je 0x11291b21 */
  if (C.zf) goto L_11291b21;
  /* 11291aa2 push 0x112968a8 */
  push32((uint32_t)(0x112968a8u));
  /* 11291aa7 push 0x112969c8 */
  push32((uint32_t)(0x112969c8u));
  /* 11291aac call dword ptr [0x112950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950fc))), 0x11291ab2u);
  /* 11291ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291ab7 jle 0x11291b21 */
  if ((C.zf||C.sf!=C.of)) goto L_11291b21;
  /* 11291ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291abb push 8 */
  push32((uint32_t)(0x8u));
  /* 11291abd call edi */
  call_ind((uint32_t)(EDI), 0x11291abfu);
  /* 11291abf push 0 */
  push32((uint32_t)(0x0u));
  /* 11291ac1 push 0x112968a8 */
  push32((uint32_t)(0x112968a8u));
  /* 11291ac6 call ebp */
  call_ind((uint32_t)(EBP), 0x11291ac8u);
  /* 11291ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291aca push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291acf push 0x112967d0 */
  push32((uint32_t)(0x112967d0u));
  /* 11291ad4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291ad6 call esi */
  call_ind((uint32_t)(ESI), 0x11291ad8u);
  /* 11291ad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291ada push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291adf push 0x112967d8 */
  push32((uint32_t)(0x112967d8u));
  /* 11291ae4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291ae6 call esi */
  call_ind((uint32_t)(ESI), 0x11291ae8u);
  /* 11291ae8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291aea push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291aef push 0x112967e0 */
  push32((uint32_t)(0x112967e0u));
  /* 11291af4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291af6 call esi */
  call_ind((uint32_t)(ESI), 0x11291af8u);
  /* 11291af8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291afb push 2 */
  push32((uint32_t)(0x2u));
  /* 11291afd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291b02 push 0x112967f0 */
  push32((uint32_t)(0x112967f0u));
  /* 11291b07 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291b09 call esi */
  call_ind((uint32_t)(ESI), 0x11291b0bu);
  /* 11291b0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11291b0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11291b0f push 0x112969d8 */
  push32((uint32_t)(0x112969d8u));
  /* 11291b14 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291b16 call esi */
  call_ind((uint32_t)(ESI), 0x11291b18u);
  /* 11291b18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291b1a push 9 */
  push32((uint32_t)(0x9u));
  /* 11291b1c call edi */
  call_ind((uint32_t)(EDI), 0x11291b1eu);
  /* 11291b1e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291b21:;
  /* 11291b21 push 9 */
  push32((uint32_t)(0x9u));
  /* 11291b23 call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291b29u);
  /* 11291b29 mov ebx, dword ptr [0x11295100] */
  EBX = (r32((uint32_t)(0x11295100)));
  /* 11291b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291b32 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291b34 je 0x11291bc6 */
  if (C.zf) goto L_11291bc6;
  /* 11291b3a push 0x112968a8 */
  push32((uint32_t)(0x112968a8u));
  /* 11291b3f push 0x112969d8 */
  push32((uint32_t)(0x112969d8u));
  /* 11291b44 call dword ptr [0x112950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950fc))), 0x11291b4au);
  /* 11291b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291b4f jle 0x11291bc6 */
  if ((C.zf||C.sf!=C.of)) goto L_11291bc6;
  /* 11291b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291b53 push 9 */
  push32((uint32_t)(0x9u));
  /* 11291b55 call edi */
  call_ind((uint32_t)(EDI), 0x11291b57u);
  /* 11291b57 push 0x11296410 */
  push32((uint32_t)(0x11296410u));
  /* 11291b5c call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x11291b62u);
  /* 11291b62 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11291b67 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291b6b call ebx */
  call_ind((uint32_t)(EBX), 0x11291b6du);
  /* 11291b6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11291b6f push 0x112968a8 */
  push32((uint32_t)(0x112968a8u));
  /* 11291b74 call ebp */
  call_ind((uint32_t)(EBP), 0x11291b76u);
  /* 11291b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291b7a push 0x112967f0 */
  push32((uint32_t)(0x112967f0u));
  /* 11291b7f push 4 */
  push32((uint32_t)(0x4u));
  /* 11291b81 call esi */
  call_ind((uint32_t)(ESI), 0x11291b83u);
  /* 11291b83 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291b87 push 0x112967e0 */
  push32((uint32_t)(0x112967e0u));
  /* 11291b8c push 4 */
  push32((uint32_t)(0x4u));
  /* 11291b8e call esi */
  call_ind((uint32_t)(ESI), 0x11291b90u);
  /* 11291b90 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291b93 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291b97 push 0x112967d8 */
  push32((uint32_t)(0x112967d8u));
  /* 11291b9c push 4 */
  push32((uint32_t)(0x4u));
  /* 11291b9e call esi */
  call_ind((uint32_t)(ESI), 0x11291ba0u);
  /* 11291ba0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291ba2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291ba4 push 0x112967d0 */
  push32((uint32_t)(0x112967d0u));
  /* 11291ba9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291bab call esi */
  call_ind((uint32_t)(ESI), 0x11291badu);
  /* 11291bad push 2 */
  push32((uint32_t)(0x2u));
  /* 11291baf push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291bb4 push 0x112969c8 */
  push32((uint32_t)(0x112969c8u));
  /* 11291bb9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291bbb call esi */
  call_ind((uint32_t)(ESI), 0x11291bbdu);
  /* 11291bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 11291bbf push 8 */
  push32((uint32_t)(0x8u));
  /* 11291bc1 call edi */
  call_ind((uint32_t)(EDI), 0x11291bc3u);
  /* 11291bc3 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291bc6:;
  /* 11291bc6 push 0xa */
  push32((uint32_t)(0xau));
  /* 11291bc8 call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291bceu);
  /* 11291bce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291bd1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291bd3 je 0x11291c59 */
  if (C.zf) goto L_11291c59;
  /* 11291bd9 push 0x112968b0 */
  push32((uint32_t)(0x112968b0u));
  /* 11291bde push 0x112969c0 */
  push32((uint32_t)(0x112969c0u));
  /* 11291be3 call dword ptr [0x112950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950fc))), 0x11291be9u);
  /* 11291be9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291bee jle 0x11291c59 */
  if ((C.zf||C.sf!=C.of)) goto L_11291c59;
  /* 11291bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291bf2 push 0xa */
  push32((uint32_t)(0xau));
  /* 11291bf4 call edi */
  call_ind((uint32_t)(EDI), 0x11291bf6u);
  /* 11291bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291bf8 push 0x112968b0 */
  push32((uint32_t)(0x112968b0u));
  /* 11291bfd call ebp */
  call_ind((uint32_t)(EBP), 0x11291bffu);
  /* 11291bff push 0 */
  push32((uint32_t)(0x0u));
  /* 11291c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291c03 push 0x112967a8 */
  push32((uint32_t)(0x112967a8u));
  /* 11291c08 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291c0a call esi */
  call_ind((uint32_t)(ESI), 0x11291c0cu);
  /* 11291c0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11291c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11291c10 push 0x112967b0 */
  push32((uint32_t)(0x112967b0u));
  /* 11291c15 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291c17 call esi */
  call_ind((uint32_t)(ESI), 0x11291c19u);
  /* 11291c19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11291c1d push 0x112967b8 */
  push32((uint32_t)(0x112967b8u));
  /* 11291c22 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291c24 call esi */
  call_ind((uint32_t)(ESI), 0x11291c26u);
  /* 11291c26 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291c29 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11291c2d push 0x112967c0 */
  push32((uint32_t)(0x112967c0u));
  /* 11291c32 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291c34 call esi */
  call_ind((uint32_t)(ESI), 0x11291c36u);
  /* 11291c36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291c3a push 0x112967c8 */
  push32((uint32_t)(0x112967c8u));
  /* 11291c3f push 4 */
  push32((uint32_t)(0x4u));
  /* 11291c41 call esi */
  call_ind((uint32_t)(ESI), 0x11291c43u);
  /* 11291c43 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291c45 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11291c47 push 0x112969d0 */
  push32((uint32_t)(0x112969d0u));
  /* 11291c4c push 4 */
  push32((uint32_t)(0x4u));
  /* 11291c4e call esi */
  call_ind((uint32_t)(ESI), 0x11291c50u);
  /* 11291c50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291c52 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11291c54 call edi */
  call_ind((uint32_t)(EDI), 0x11291c56u);
  /* 11291c56 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291c59:;
  /* 11291c59 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11291c5b call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291c61u);
  /* 11291c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291c64 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291c66 je 0x11291d18 */
  if (C.zf) goto L_11291d18;
  /* 11291c6c push 0x112968b0 */
  push32((uint32_t)(0x112968b0u));
  /* 11291c71 push 0x112969d0 */
  push32((uint32_t)(0x112969d0u));
  /* 11291c76 call dword ptr [0x112950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950fc))), 0x11291c7cu);
  /* 11291c7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291c81 jle 0x11291d18 */
  if ((C.zf||C.sf!=C.of)) goto L_11291d18;
  /* 11291c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291c89 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11291c8b call edi */
  call_ind((uint32_t)(EDI), 0x11291c8du);
  /* 11291c8d push 0x11296408 */
  push32((uint32_t)(0x11296408u));
  /* 11291c92 call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x11291c98u);
  /* 11291c98 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11291c9d push 5 */
  push32((uint32_t)(0x5u));
  /* 11291c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11291ca1 call ebx */
  call_ind((uint32_t)(EBX), 0x11291ca3u);
  /* 11291ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291ca5 push 0x112968b0 */
  push32((uint32_t)(0x112968b0u));
  /* 11291caa call ebp */
  call_ind((uint32_t)(EBP), 0x11291cacu);
  /* 11291cac push 0 */
  push32((uint32_t)(0x0u));
  /* 11291cae push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291cb3 push 0x112967c8 */
  push32((uint32_t)(0x112967c8u));
  /* 11291cb8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291cba call esi */
  call_ind((uint32_t)(ESI), 0x11291cbcu);
  /* 11291cbc push 2 */
  push32((uint32_t)(0x2u));
  /* 11291cbe push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291cc3 push 0x112967c0 */
  push32((uint32_t)(0x112967c0u));
  /* 11291cc8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291cca call esi */
  call_ind((uint32_t)(ESI), 0x11291cccu);
  /* 11291ccc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291ccf push 2 */
  push32((uint32_t)(0x2u));
  /* 11291cd1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291cd6 push 0x112967b8 */
  push32((uint32_t)(0x112967b8u));
  /* 11291cdb push 4 */
  push32((uint32_t)(0x4u));
  /* 11291cdd call esi */
  call_ind((uint32_t)(ESI), 0x11291cdfu);
  /* 11291cdf push 2 */
  push32((uint32_t)(0x2u));
  /* 11291ce1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291ce6 push 0x112967b0 */
  push32((uint32_t)(0x112967b0u));
  /* 11291ceb push 4 */
  push32((uint32_t)(0x4u));
  /* 11291ced call esi */
  call_ind((uint32_t)(ESI), 0x11291cefu);
  /* 11291cef push 2 */
  push32((uint32_t)(0x2u));
  /* 11291cf1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11291cf6 push 0x112967a8 */
  push32((uint32_t)(0x112967a8u));
  /* 11291cfb push 4 */
  push32((uint32_t)(0x4u));
  /* 11291cfd call esi */
  call_ind((uint32_t)(ESI), 0x11291cffu);
  /* 11291cff push 2 */
  push32((uint32_t)(0x2u));
  /* 11291d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291d03 push 0x112969c0 */
  push32((uint32_t)(0x112969c0u));
  /* 11291d08 push 4 */
  push32((uint32_t)(0x4u));
  /* 11291d0a call esi */
  call_ind((uint32_t)(ESI), 0x11291d0cu);
  /* 11291d0c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291d0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11291d11 push 0xa */
  push32((uint32_t)(0xau));
  /* 11291d13 call edi */
  call_ind((uint32_t)(EDI), 0x11291d15u);
  /* 11291d15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291d18:;
  /* 11291d18 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11291d1a call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291d20u);
  /* 11291d20 mov ebx, dword ptr [0x11295104] */
  EBX = (r32((uint32_t)(0x11295104)));
  /* 11291d26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291d29 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291d2b je 0x11291d90 */
  if (C.zf) goto L_11291d90;
  /* 11291d2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11291d2f call dword ptr [0x11295108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295108))), 0x11291d35u);
  /* 11291d35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291d38 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291d3a je 0x11291d90 */
  if (C.zf) goto L_11291d90;
  /* 11291d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11291d3e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11291d40 call edi */
  call_ind((uint32_t)(EDI), 0x11291d42u);
  /* 11291d42 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11291d47 push 0x112969a8 */
  push32((uint32_t)(0x112969a8u));
  /* 11291d4c push 5 */
  push32((uint32_t)(0x5u));
  /* 11291d4e push 0x11296998 */
  push32((uint32_t)(0x11296998u));
  /* 11291d53 push 0x11296808 */
  push32((uint32_t)(0x11296808u));
  /* 11291d58 push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 11291d5d call ebx */
  call_ind((uint32_t)(EBX), 0x11291d5fu);
  /* 11291d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11291d61 push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 11291d66 call ebp */
  call_ind((uint32_t)(EBP), 0x11291d68u);
  /* 11291d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291d6a push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11291d6f push 0x112968a0 */
  push32((uint32_t)(0x112968a0u));
  /* 11291d74 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291d76 call esi */
  call_ind((uint32_t)(ESI), 0x11291d78u);
  /* 11291d78 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291d7a push 0xd */
  push32((uint32_t)(0xdu));
  /* 11291d7c call edi */
  call_ind((uint32_t)(EDI), 0x11291d7eu);
  /* 11291d7e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291d81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291d83 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11291d85 call edi */
  call_ind((uint32_t)(EDI), 0x11291d87u);
  /* 11291d87 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291d89 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11291d8b call edi */
  call_ind((uint32_t)(EDI), 0x11291d8du);
  /* 11291d8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291d90:;
  /* 11291d90 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11291d92 call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291d98u);
  /* 11291d98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291d9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291d9d je 0x11291dcc */
  if (C.zf) goto L_11291dcc;
  /* 11291d9f push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 11291da4 call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x11291daau);
  /* 11291daa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291daf jne 0x11291dcc */
  if (!C.zf) goto L_11291dcc;
  /* 11291db1 push eax */
  push32((uint32_t)(EAX));
  /* 11291db2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11291db4 call edi */
  call_ind((uint32_t)(EDI), 0x11291db6u);
  /* 11291db6 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11291dbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11291dbd call dword ptr [0x112950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e0))), 0x11291dc3u);
  /* 11291dc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291dc5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11291dc7 call edi */
  call_ind((uint32_t)(EDI), 0x11291dc9u);
  /* 11291dc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291dcc:;
  /* 11291dcc push 0xe */
  push32((uint32_t)(0xeu));
  /* 11291dce call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291dd4u);
  /* 11291dd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291dd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291dd9 je 0x11291e3b */
  if (C.zf) goto L_11291e3b;
  /* 11291ddb push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 11291de0 push 0x112968a0 */
  push32((uint32_t)(0x112968a0u));
  /* 11291de5 call dword ptr [0x112950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950fc))), 0x11291debu);
  /* 11291deb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291df0 jle 0x11291e3b */
  if ((C.zf||C.sf!=C.of)) goto L_11291e3b;
  /* 11291df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291df4 push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 11291df9 call ebp */
  call_ind((uint32_t)(EBP), 0x11291dfbu);
  /* 11291dfb push 0x11296830 */
  push32((uint32_t)(0x11296830u));
  /* 11291e00 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291e02 call dword ptr [0x1129510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129510c))), 0x11291e08u);
  /* 11291e08 push 0x11296830 */
  push32((uint32_t)(0x11296830u));
  /* 11291e0d call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x11291e13u);
  /* 11291e13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291e16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291e18 jne 0x11291e3b */
  if (!C.zf) goto L_11291e3b;
  /* 11291e1a push eax */
  push32((uint32_t)(EAX));
  /* 11291e1b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11291e1d call edi */
  call_ind((uint32_t)(EDI), 0x11291e1fu);
  /* 11291e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11291e21 push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 11291e26 call ebp */
  call_ind((uint32_t)(EBP), 0x11291e28u);
  /* 11291e28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291e2a push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11291e2f push 0x11296978 */
  push32((uint32_t)(0x11296978u));
  /* 11291e34 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291e36 call esi */
  call_ind((uint32_t)(ESI), 0x11291e38u);
  /* 11291e38 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291e3b:;
  /* 11291e3b push 0xf */
  push32((uint32_t)(0xfu));
  /* 11291e3d call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291e43u);
  /* 11291e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291e46 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291e48 je 0x11291e7c */
  if (C.zf) goto L_11291e7c;
  /* 11291e4a push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 11291e4f push 0x11296978 */
  push32((uint32_t)(0x11296978u));
  /* 11291e54 call dword ptr [0x112950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950fc))), 0x11291e5au);
  /* 11291e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291e5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291e5f jle 0x11291e7c */
  if ((C.zf||C.sf!=C.of)) goto L_11291e7c;
  /* 11291e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291e63 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11291e65 call edi */
  call_ind((uint32_t)(EDI), 0x11291e67u);
  /* 11291e67 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291e69 push 0x11296978 */
  push32((uint32_t)(0x11296978u));
  /* 11291e6e push 0x112969e0 */
  push32((uint32_t)(0x112969e0u));
  /* 11291e73 call dword ptr [0x11295110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295110))), 0x11291e79u);
  /* 11291e79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291e7c:;
  /* 11291e7c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11291e7e call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291e84u);
  /* 11291e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291e87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291e89 je 0x11291eee */
  if (C.zf) goto L_11291eee;
  /* 11291e8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11291e8d call dword ptr [0x11295108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295108))), 0x11291e93u);
  /* 11291e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291e96 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291e98 je 0x11291eee */
  if (C.zf) goto L_11291eee;
  /* 11291e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11291e9c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11291e9e call edi */
  call_ind((uint32_t)(EDI), 0x11291ea0u);
  /* 11291ea0 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11291ea5 push 0x112969b0 */
  push32((uint32_t)(0x112969b0u));
  /* 11291eaa push 5 */
  push32((uint32_t)(0x5u));
  /* 11291eac push 0x11296998 */
  push32((uint32_t)(0x11296998u));
  /* 11291eb1 push 0x11296808 */
  push32((uint32_t)(0x11296808u));
  /* 11291eb6 push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 11291ebb call ebx */
  call_ind((uint32_t)(EBX), 0x11291ebdu);
  /* 11291ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 11291ebf push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 11291ec4 call ebp */
  call_ind((uint32_t)(EBP), 0x11291ec6u);
  /* 11291ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291ec8 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11291ecd push 0x112967e8 */
  push32((uint32_t)(0x112967e8u));
  /* 11291ed2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291ed4 call esi */
  call_ind((uint32_t)(ESI), 0x11291ed6u);
  /* 11291ed6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291ed8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11291eda call edi */
  call_ind((uint32_t)(EDI), 0x11291edcu);
  /* 11291edc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291edf push 1 */
  push32((uint32_t)(0x1u));
  /* 11291ee1 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11291ee3 call edi */
  call_ind((uint32_t)(EDI), 0x11291ee5u);
  /* 11291ee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291ee7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11291ee9 call edi */
  call_ind((uint32_t)(EDI), 0x11291eebu);
  /* 11291eeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291eee:;
  /* 11291eee push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11291ef0 call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291ef6u);
  /* 11291ef6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291ef9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291efb je 0x11291f2a */
  if (C.zf) goto L_11291f2a;
  /* 11291efd push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 11291f02 call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x11291f08u);
  /* 11291f08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291f0d jne 0x11291f2a */
  if (!C.zf) goto L_11291f2a;
  /* 11291f0f push eax */
  push32((uint32_t)(EAX));
  /* 11291f10 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11291f12 call edi */
  call_ind((uint32_t)(EDI), 0x11291f14u);
  /* 11291f14 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11291f19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11291f1b call dword ptr [0x112950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950e0))), 0x11291f21u);
  /* 11291f21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11291f23 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11291f25 call edi */
  call_ind((uint32_t)(EDI), 0x11291f27u);
  /* 11291f27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291f2a:;
  /* 11291f2a push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11291f2c call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11291f32u);
  /* 11291f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291f35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291f37 je 0x11291f99 */
  if (C.zf) goto L_11291f99;
  /* 11291f39 push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 11291f3e push 0x112967e8 */
  push32((uint32_t)(0x112967e8u));
  /* 11291f43 call dword ptr [0x112950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950fc))), 0x11291f49u);
  /* 11291f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291f4e jle 0x11291f99 */
  if ((C.zf||C.sf!=C.of)) goto L_11291f99;
  /* 11291f50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291f52 push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 11291f57 call ebp */
  call_ind((uint32_t)(EBP), 0x11291f59u);
  /* 11291f59 push 0x11296828 */
  push32((uint32_t)(0x11296828u));
  /* 11291f5e push 5 */
  push32((uint32_t)(0x5u));
  /* 11291f60 call dword ptr [0x1129510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129510c))), 0x11291f66u);
  /* 11291f66 push 0x11296828 */
  push32((uint32_t)(0x11296828u));
  /* 11291f6b call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x11291f71u);
  /* 11291f71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291f74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291f76 jne 0x11291f99 */
  if (!C.zf) goto L_11291f99;
  /* 11291f78 push eax */
  push32((uint32_t)(EAX));
  /* 11291f79 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11291f7b call edi */
  call_ind((uint32_t)(EDI), 0x11291f7du);
  /* 11291f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11291f7f push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 11291f84 call ebp */
  call_ind((uint32_t)(EBP), 0x11291f86u);
  /* 11291f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291f88 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11291f8d push 0x11296988 */
  push32((uint32_t)(0x11296988u));
  /* 11291f92 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291f94 call esi */
  call_ind((uint32_t)(ESI), 0x11291f96u);
  /* 11291f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291f99:;
  /* 11291f99 mov esi, dword ptr [0x112950b0] */
  ESI = (r32((uint32_t)(0x112950b0)));
  /* 11291f9f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11291fa1 call esi */
  call_ind((uint32_t)(ESI), 0x11291fa3u);
  /* 11291fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291fa6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291fa8 je 0x11291fdc */
  if (C.zf) goto L_11291fdc;
  /* 11291faa push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 11291faf push 0x11296988 */
  push32((uint32_t)(0x11296988u));
  /* 11291fb4 call dword ptr [0x112950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950fc))), 0x11291fbau);
  /* 11291fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291fbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291fbf jle 0x11291fdc */
  if ((C.zf||C.sf!=C.of)) goto L_11291fdc;
  /* 11291fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11291fc3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11291fc5 call edi */
  call_ind((uint32_t)(EDI), 0x11291fc7u);
  /* 11291fc7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11291fc9 push 0x11296988 */
  push32((uint32_t)(0x11296988u));
  /* 11291fce push 0x11296990 */
  push32((uint32_t)(0x11296990u));
  /* 11291fd3 call dword ptr [0x11295110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295110))), 0x11291fd9u);
  /* 11291fd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11291fdc:;
  /* 11291fdc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11291fde call esi */
  call_ind((uint32_t)(ESI), 0x11291fe0u);
  /* 11291fe0 mov esi, dword ptr [0x11295114] */
  ESI = (r32((uint32_t)(0x11295114)));
  /* 11291fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291fe9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11291feb je 0x1129201c */
  if (C.zf) goto L_1129201c;
  /* 11291fed push 4 */
  push32((uint32_t)(0x4u));
  /* 11291fef push 0x11296978 */
  push32((uint32_t)(0x11296978u));
  /* 11291ff4 call esi */
  call_ind((uint32_t)(ESI), 0x11291ff6u);
  /* 11291ff6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11291ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11291ffb jne 0x1129201c */
  if (!C.zf) goto L_1129201c;
  /* 11291ffd push eax */
  push32((uint32_t)(EAX));
  /* 11291ffe push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11292000 call edi */
  call_ind((uint32_t)(EDI), 0x11292002u);
  /* 11292002 push 0x11296400 */
  push32((uint32_t)(0x11296400u));
  /* 11292007 call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x1129200du);
  /* 1129200d push 0 */
  push32((uint32_t)(0x0u));
  /* 1129200f push 0xa */
  push32((uint32_t)(0xau));
  /* 11292011 call edi */
  call_ind((uint32_t)(EDI), 0x11292013u);
  /* 11292013 push 0 */
  push32((uint32_t)(0x0u));
  /* 11292015 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11292017 call edi */
  call_ind((uint32_t)(EDI), 0x11292019u);
  /* 11292019 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1129201c:;
  /* 1129201c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1129201e call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11292024u);
  /* 11292024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11292027 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11292029 je 0x1129205a */
  if (C.zf) goto L_1129205a;
  /* 1129202b push 4 */
  push32((uint32_t)(0x4u));
  /* 1129202d push 0x11296988 */
  push32((uint32_t)(0x11296988u));
  /* 11292032 call esi */
  call_ind((uint32_t)(ESI), 0x11292034u);
  /* 11292034 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11292037 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292039 jne 0x1129205a */
  if (!C.zf) goto L_1129205a;
  /* 1129203b push eax */
  push32((uint32_t)(EAX));
  /* 1129203c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1129203e call edi */
  call_ind((uint32_t)(EDI), 0x11292040u);
  /* 11292040 push 0x112963f4 */
  push32((uint32_t)(0x112963f4u));
  /* 11292045 call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x1129204bu);
  /* 1129204b push 0 */
  push32((uint32_t)(0x0u));
  /* 1129204d push 8 */
  push32((uint32_t)(0x8u));
  /* 1129204f call edi */
  call_ind((uint32_t)(EDI), 0x11292051u);
  /* 11292051 push 0 */
  push32((uint32_t)(0x0u));
  /* 11292053 push 9 */
  push32((uint32_t)(0x9u));
  /* 11292055 call edi */
  call_ind((uint32_t)(EDI), 0x11292057u);
  /* 11292057 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1129205a:;
  /* 1129205a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1129205c call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x11292062u);
  /* 11292062 mov esi, dword ptr [0x11295118] */
  ESI = (r32((uint32_t)(0x11295118)));
  /* 11292068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129206b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1129206d je 0x112920c2 */
  if (C.zf) goto L_112920c2;
  /* 1129206f push 0x11296830 */
  push32((uint32_t)(0x11296830u));
  /* 11292074 call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x1129207au);
  /* 1129207a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129207d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129207f jne 0x112920c2 */
  if (!C.zf) goto L_112920c2;
  /* 11292081 push eax */
  push32((uint32_t)(EAX));
  /* 11292082 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11292084 call edi */
  call_ind((uint32_t)(EDI), 0x11292086u);
  /* 11292086 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 1129208b push 0x112969a8 */
  push32((uint32_t)(0x112969a8u));
  /* 11292090 push 5 */
  push32((uint32_t)(0x5u));
  /* 11292092 push 0x112968e8 */
  push32((uint32_t)(0x112968e8u));
  /* 11292097 push 0x11296800 */
  push32((uint32_t)(0x11296800u));
  /* 1129209c push 0x11296820 */
  push32((uint32_t)(0x11296820u));
  /* 112920a1 call ebx */
  call_ind((uint32_t)(EBX), 0x112920a3u);
  /* 112920a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112920a5 push 0x11296820 */
  push32((uint32_t)(0x11296820u));
  /* 112920aa call ebp */
  call_ind((uint32_t)(EBP), 0x112920acu);
  /* 112920ac push 0 */
  push32((uint32_t)(0x0u));
  /* 112920ae push 0 */
  push32((uint32_t)(0x0u));
  /* 112920b0 push 0x11296978 */
  push32((uint32_t)(0x11296978u));
  /* 112920b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 112920b7 call esi */
  call_ind((uint32_t)(ESI), 0x112920b9u);
  /* 112920b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 112920bb push 0x17 */
  push32((uint32_t)(0x17u));
  /* 112920bd call edi */
  call_ind((uint32_t)(EDI), 0x112920bfu);
  /* 112920bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112920c2:;
  /* 112920c2 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 112920c4 call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x112920cau);
  /* 112920ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112920cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112920cf je 0x112920f1 */
  if (C.zf) goto L_112920f1;
  /* 112920d1 push 0x11296820 */
  push32((uint32_t)(0x11296820u));
  /* 112920d6 call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x112920dcu);
  /* 112920dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112920df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112920e1 jne 0x112920f1 */
  if (!C.zf) goto L_112920f1;
  /* 112920e3 push eax */
  push32((uint32_t)(EAX));
  /* 112920e4 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 112920e6 call edi */
  call_ind((uint32_t)(EDI), 0x112920e8u);
  /* 112920e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 112920ea push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112920ec call edi */
  call_ind((uint32_t)(EDI), 0x112920eeu);
  /* 112920ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112920f1:;
  /* 112920f1 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 112920f3 call dword ptr [0x112950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950b0))), 0x112920f9u);
  /* 112920f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112920fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112920fe je 0x11292156 */
  if (C.zf) goto L_11292156;
  /* 11292100 push 0x11296830 */
  push32((uint32_t)(0x11296830u));
  /* 11292105 call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x1129210bu);
  /* 1129210b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129210e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292110 jne 0x11292156 */
  if (!C.zf) goto L_11292156;
  /* 11292112 push eax */
  push32((uint32_t)(EAX));
  /* 11292113 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11292115 call edi */
  call_ind((uint32_t)(EDI), 0x11292117u);
  /* 11292117 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 1129211c push 0x112969b0 */
  push32((uint32_t)(0x112969b0u));
  /* 11292121 push 5 */
  push32((uint32_t)(0x5u));
  /* 11292123 push 0x112968e8 */
  push32((uint32_t)(0x112968e8u));
  /* 11292128 push 0x11296800 */
  push32((uint32_t)(0x11296800u));
  /* 1129212d push 0x11296798 */
  push32((uint32_t)(0x11296798u));
  /* 11292132 call ebx */
  call_ind((uint32_t)(EBX), 0x11292134u);
  /* 11292134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11292136 push 0x11296798 */
  push32((uint32_t)(0x11296798u));
  /* 1129213b call ebp */
  call_ind((uint32_t)(EBP), 0x1129213du);
  /* 1129213d push 0 */
  push32((uint32_t)(0x0u));
  /* 1129213f push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11292144 push 0x11296988 */
  push32((uint32_t)(0x11296988u));
  /* 11292149 push 5 */
  push32((uint32_t)(0x5u));
  /* 1129214b call esi */
  call_ind((uint32_t)(ESI), 0x1129214du);
  /* 1129214d push 1 */
  push32((uint32_t)(0x1u));
  /* 1129214f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11292151 call edi */
  call_ind((uint32_t)(EDI), 0x11292153u);
  /* 11292153 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11292156:;
  /* 11292156 mov esi, dword ptr [0x112950b0] */
  ESI = (r32((uint32_t)(0x112950b0)));
  /* 1129215c push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1129215e call esi */
  call_ind((uint32_t)(ESI), 0x11292160u);
  /* 11292160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11292163 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11292165 je 0x11292187 */
  if (C.zf) goto L_11292187;
  /* 11292167 push 0x11296820 */
  push32((uint32_t)(0x11296820u));
  /* 1129216c call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x11292172u);
  /* 11292172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11292175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292177 jne 0x11292187 */
  if (!C.zf) goto L_11292187;
  /* 11292179 push eax */
  push32((uint32_t)(EAX));
  /* 1129217a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1129217c call edi */
  call_ind((uint32_t)(EDI), 0x1129217eu);
  /* 1129217e push 1 */
  push32((uint32_t)(0x1u));
  /* 11292180 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11292182 call edi */
  call_ind((uint32_t)(EDI), 0x11292184u);
  /* 11292184 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11292187:;
  /* 11292187 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11292189 call esi */
  call_ind((uint32_t)(ESI), 0x1129218bu);
  /* 1129218b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129218e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11292190 je 0x11292202 */
  if (C.zf) goto L_11292202;
  /* 11292192 push 0x112969a0 */
  push32((uint32_t)(0x112969a0u));
  /* 11292197 call dword ptr [0x112950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950f4))), 0x1129219du);
  /* 1129219d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112921a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112921a2 jne 0x11292202 */
  if (!C.zf) goto L_11292202;
  /* 112921a4 push eax */
  push32((uint32_t)(EAX));
  /* 112921a5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 112921a7 call edi */
  call_ind((uint32_t)(EDI), 0x112921a9u);
  /* 112921a9 push 0x112963ec */
  push32((uint32_t)(0x112963ecu));
  /* 112921ae call dword ptr [0x112950c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950c0))), 0x112921b4u);
  /* 112921b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921b6 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112921b8 call edi */
  call_ind((uint32_t)(EDI), 0x112921bau);
  /* 112921ba push 0 */
  push32((uint32_t)(0x0u));
  /* 112921bc push 0x17 */
  push32((uint32_t)(0x17u));
  /* 112921be call edi */
  call_ind((uint32_t)(EDI), 0x112921c0u);
  /* 112921c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921c2 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 112921c4 call edi */
  call_ind((uint32_t)(EDI), 0x112921c6u);
  /* 112921c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921c8 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112921ca call edi */
  call_ind((uint32_t)(EDI), 0x112921ccu);
  /* 112921cc push 0 */
  push32((uint32_t)(0x0u));
  /* 112921ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 112921d0 call edi */
  call_ind((uint32_t)(EDI), 0x112921d2u);
  /* 112921d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921d4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 112921d6 call edi */
  call_ind((uint32_t)(EDI), 0x112921d8u);
  /* 112921d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921da push 0xe */
  push32((uint32_t)(0xeu));
  /* 112921dc call edi */
  call_ind((uint32_t)(EDI), 0x112921deu);
  /* 112921de add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112921e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921e3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 112921e5 call edi */
  call_ind((uint32_t)(EDI), 0x112921e7u);
  /* 112921e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921e9 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112921eb call edi */
  call_ind((uint32_t)(EDI), 0x112921edu);
  /* 112921ed push 0 */
  push32((uint32_t)(0x0u));
  /* 112921ef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112921f1 call edi */
  call_ind((uint32_t)(EDI), 0x112921f3u);
  /* 112921f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921f5 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 112921f7 call edi */
  call_ind((uint32_t)(EDI), 0x112921f9u);
  /* 112921f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112921fb push 0x12 */
  push32((uint32_t)(0x12u));
  /* 112921fd call edi */
  call_ind((uint32_t)(EDI), 0x112921ffu);
  /* 112921ff add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11292202:;
  /* 11292202 pop edi */
  EDI = (pop32());
  /* 11292203 pop esi */
  ESI = (pop32());
  /* 11292204 pop ebp */
  EBP = (pop32());
  /* 11292205 pop ebx */
  EBX = (pop32());
  /* 11292206 ret  */
  ESPCHK(0x11291440u, _esp0);
  ESP += 4; return;
}

/* FUN_10002210 @ 0x11292210 (217 bytes, 57 insns) */
void f_11292210(void) {
  FTRACE(0x11292210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292210 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11292214 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292217 jne 0x112922a5 */
  if (!C.zf) goto L_112922a5;
  /* 1129221d call dword ptr [0x11295084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295084))), 0x11292223u);
  /* 11292223 push 1 */
  push32((uint32_t)(0x1u));
  /* 11292225 mov dword ptr [0x11296a14], eax */
  w32((uint32_t)(0x11296a14), (EAX));
  /* 1129222a call 0x11292c44 */
  push32(0x1129222fu); f_11292c44();
  /* 1129222f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292231 pop ecx */
  ECX = (pop32());
  /* 11292232 je 0x11292270 */
  if (C.zf) goto L_11292270;
  /* 11292234 mov eax, dword ptr [0x11296a14] */
  EAX = (r32((uint32_t)(0x11296a14)));
  /* 11292239 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1129223b mov cl, byte ptr [0x11296a15] */
  CL = (r8((uint32_t)(0x11296a15)));
  /* 11292241 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11292246 shr dword ptr [0x11296a14], 0x10 */
  w32((uint32_t)(0x11296a14), (sh_shr((uint32_t)(r32((uint32_t)(0x11296a14))), (0x10u)&0x1f, 32)));
  /* 1129224d mov dword ptr [0x11296a1c], eax */
  w32((uint32_t)(0x11296a1c), (EAX));
  /* 11292252 mov dword ptr [0x11296a20], ecx */
  w32((uint32_t)(0x11296a20), (ECX));
  /* 11292258 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1129225b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1129225d mov dword ptr [0x11296a18], eax */
  w32((uint32_t)(0x11296a18), (EAX));
  /* 11292262 call 0x112924d7 */
  push32(0x11292267u); f_112924d7();
  /* 11292267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292269 jne 0x11292274 */
  if (!C.zf) goto L_11292274;
  /* 1129226b call 0x11292c80 */
  push32(0x11292270u); f_11292c80();
L_11292270:;
  /* 11292270 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11292272 jmp 0x112922e6 */
  goto L_112922e6;
L_11292274:;
  /* 11292274 call dword ptr [0x11295080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295080))), 0x1129227au);
  /* 1129227a mov dword ptr [0x11296f78], eax */
  w32((uint32_t)(0x11296f78), (EAX));
  /* 1129227f call 0x11292b12 */
  push32(0x11292284u); f_11292b12();
  /* 11292284 mov dword ptr [0x11296a00], eax */
  w32((uint32_t)(0x11296a00), (EAX));
  /* 11292289 call 0x112925fc */
  push32(0x1129228eu); f_112925fc();
  /* 1129228e call 0x112928c5 */
  push32(0x11292293u); f_112928c5();
  /* 11292293 call 0x1129280c */
  push32(0x11292298u); f_1129280c();
  /* 11292298 call 0x112923b9 */
  push32(0x1129229du); f_112923b9();
  /* 1129229d inc dword ptr [0x112969fc] */
  { uint32_t _r=(r32((uint32_t)(0x112969fc)))+1; w32((uint32_t)(0x112969fc), (_r)); fl_inc(_r,32); }
  /* 112922a3 jmp 0x112922e3 */
  goto L_112922e3;
L_112922a5:;
  /* 112922a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112922a7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112922a9 jne 0x112922d7 */
  if (!C.zf) goto L_112922d7;
  /* 112922ab cmp dword ptr [0x112969fc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x112969fc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112922b1 jle 0x11292270 */
  if ((C.zf||C.sf!=C.of)) goto L_11292270;
  /* 112922b3 dec dword ptr [0x112969fc] */
  { uint32_t _r=(r32((uint32_t)(0x112969fc)))-1; w32((uint32_t)(0x112969fc), (_r)); fl_dec(_r,32); }
  /* 112922b9 cmp dword ptr [0x11296a4c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11296a4c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112922bf jne 0x112922c6 */
  if (!C.zf) goto L_112922c6;
  /* 112922c1 call 0x112923f7 */
  push32(0x112922c6u); f_112923f7();
L_112922c6:;
  /* 112922c6 call 0x112927b8 */
  push32(0x112922cbu); f_112927b8();
  /* 112922cb call 0x1129252b */
  push32(0x112922d0u); f_1129252b();
  /* 112922d0 call 0x11292c80 */
  push32(0x112922d5u); f_11292c80();
  /* 112922d5 jmp 0x112922e3 */
  goto L_112922e3;
L_112922d7:;
  /* 112922d7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112922da jne 0x112922e3 */
  if (!C.zf) goto L_112922e3;
  /* 112922dc push ecx */
  push32((uint32_t)(ECX));
  /* 112922dd call 0x1129255c */
  push32(0x112922e2u); f_1129255c();
  /* 112922e2 pop ecx */
  ECX = (pop32());
L_112922e3:;
  /* 112922e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112922e5 pop eax */
  EAX = (pop32());
L_112922e6:;
  /* 112922e6 ret 0xc */
  ESPCHK(0x11292210u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x112922e9 (157 bytes, 73 insns) */
void f_112922e9(void) {
  FTRACE(0x112922e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112922e9 push ebp */
  push32((uint32_t)(EBP));
  /* 112922ea mov ebp, esp */
  EBP = (ESP);
  /* 112922ec push ebx */
  push32((uint32_t)(EBX));
  /* 112922ed mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 112922f0 push esi */
  push32((uint32_t)(ESI));
  /* 112922f1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112922f4 push edi */
  push32((uint32_t)(EDI));
  /* 112922f5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 112922f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112922fa jne 0x11292305 */
  if (!C.zf) goto L_11292305;
  /* 112922fc cmp dword ptr [0x112969fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112969fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292303 jmp 0x1129232b */
  goto L_1129232b;
L_11292305:;
  /* 11292305 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292308 je 0x1129230f */
  if (C.zf) goto L_1129230f;
  /* 1129230a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129230d jne 0x11292331 */
  if (!C.zf) goto L_11292331;
L_1129230f:;
  /* 1129230f mov eax, dword ptr [0x11296f7c] */
  EAX = (r32((uint32_t)(0x11296f7c)));
  /* 11292314 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292316 je 0x11292321 */
  if (C.zf) goto L_11292321;
  /* 11292318 push edi */
  push32((uint32_t)(EDI));
  /* 11292319 push esi */
  push32((uint32_t)(ESI));
  /* 1129231a push ebx */
  push32((uint32_t)(EBX));
  /* 1129231b call eax */
  call_ind((uint32_t)(EAX), 0x1129231du);
  /* 1129231d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129231f je 0x1129232d */
  if (C.zf) goto L_1129232d;
L_11292321:;
  /* 11292321 push edi */
  push32((uint32_t)(EDI));
  /* 11292322 push esi */
  push32((uint32_t)(ESI));
  /* 11292323 push ebx */
  push32((uint32_t)(EBX));
  /* 11292324 call 0x11292210 */
  push32(0x11292329u); f_11292210();
  /* 11292329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_1129232b:;
  /* 1129232b jne 0x11292331 */
  if (!C.zf) goto L_11292331;
L_1129232d:;
  /* 1129232d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1129232f jmp 0x1129237f */
  goto L_1129237f;
L_11292331:;
  /* 11292331 push edi */
  push32((uint32_t)(EDI));
  /* 11292332 push esi */
  push32((uint32_t)(ESI));
  /* 11292333 push ebx */
  push32((uint32_t)(EBX));
  /* 11292334 call 0x11291420 */
  push32(0x11292339u); f_11291420();
  /* 11292339 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129233c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1129233f jne 0x1129234d */
  if (!C.zf) goto L_1129234d;
  /* 11292341 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292343 jne 0x1129237c */
  if (!C.zf) goto L_1129237c;
  /* 11292345 push edi */
  push32((uint32_t)(EDI));
  /* 11292346 push eax */
  push32((uint32_t)(EAX));
  /* 11292347 push ebx */
  push32((uint32_t)(EBX));
  /* 11292348 call 0x11292210 */
  push32(0x1129234du); f_11292210();
L_1129234d:;
  /* 1129234d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1129234f je 0x11292356 */
  if (C.zf) goto L_11292356;
  /* 11292351 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292354 jne 0x1129237c */
  if (!C.zf) goto L_1129237c;
L_11292356:;
  /* 11292356 push edi */
  push32((uint32_t)(EDI));
  /* 11292357 push esi */
  push32((uint32_t)(ESI));
  /* 11292358 push ebx */
  push32((uint32_t)(EBX));
  /* 11292359 call 0x11292210 */
  push32(0x1129235eu); f_11292210();
  /* 1129235e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292360 jne 0x11292365 */
  if (!C.zf) goto L_11292365;
  /* 11292362 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11292365:;
  /* 11292365 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292369 je 0x1129237c */
  if (C.zf) goto L_1129237c;
  /* 1129236b mov eax, dword ptr [0x11296f7c] */
  EAX = (r32((uint32_t)(0x11296f7c)));
  /* 11292370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292372 je 0x1129237c */
  if (C.zf) goto L_1129237c;
  /* 11292374 push edi */
  push32((uint32_t)(EDI));
  /* 11292375 push esi */
  push32((uint32_t)(ESI));
  /* 11292376 push ebx */
  push32((uint32_t)(EBX));
  /* 11292377 call eax */
  call_ind((uint32_t)(EAX), 0x11292379u);
  /* 11292379 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1129237c:;
  /* 1129237c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1129237f:;
  /* 1129237f pop edi */
  EDI = (pop32());
  /* 11292380 pop esi */
  ESI = (pop32());
  /* 11292381 pop ebx */
  EBX = (pop32());
  /* 11292382 pop ebp */
  EBP = (pop32());
  /* 11292383 ret 0xc */
  ESPCHK(0x112922e9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11292386 (48 bytes, 15 insns) */
void f_11292386(void) {
  FTRACE(0x11292386u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292386 mov eax, dword ptr [0x11296a08] */
  EAX = (r32((uint32_t)(0x11296a08)));
  /* 1129238b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129238e je 0x1129239d */
  if (C.zf) goto L_1129239d;
  /* 11292390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292392 jne 0x112923a2 */
  if (!C.zf) goto L_112923a2;
  /* 11292394 cmp dword ptr [0x11296a0c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11296a0c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129239b jne 0x112923a2 */
  if (!C.zf) goto L_112923a2;
L_1129239d:;
  /* 1129239d call 0x11292cf5 */
  push32(0x112923a2u); f_11292cf5();
L_112923a2:;
  /* 112923a2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 112923a6 call 0x11292d2e */
  push32(0x112923abu); f_11292d2e();
  /* 112923ab push 0xff */
  push32((uint32_t)(0xffu));
  /* 112923b0 call dword ptr [0x11296468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11296468))), 0x112923b6u);
  /* 112923b6 pop ecx */
  ECX = (pop32());
  /* 112923b7 pop ecx */
  ECX = (pop32());
  /* 112923b8 ret  */
  ESPCHK(0x11292386u, _esp0);
  ESP += 4; return;
}

/* FUN_100023b9 @ 0x112923b9 (45 bytes, 12 insns) */
void f_112923b9(void) {
  FTRACE(0x112923b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112923b9 mov eax, dword ptr [0x11296f74] */
  EAX = (r32((uint32_t)(0x11296f74)));
  /* 112923be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112923c0 je 0x112923c4 */
  if (C.zf) goto L_112923c4;
  /* 112923c2 call eax */
  call_ind((uint32_t)(EAX), 0x112923c4u);
L_112923c4:;
  /* 112923c4 push 0x11296010 */
  push32((uint32_t)(0x11296010u));
  /* 112923c9 push 0x11296008 */
  push32((uint32_t)(0x11296008u));
  /* 112923ce call 0x112924bd */
  push32(0x112923d3u); f_112924bd();
  /* 112923d3 push 0x11296004 */
  push32((uint32_t)(0x11296004u));
  /* 112923d8 push 0x11296000 */
  push32((uint32_t)(0x11296000u));
  /* 112923dd call 0x112924bd */
  push32(0x112923e2u); f_112924bd();
  /* 112923e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112923e5 ret  */
  ESPCHK(0x112923b9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x112923e6 (17 bytes, 6 insns) */
void f_112923e6(void) {
  FTRACE(0x112923e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112923e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112923e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 112923ea push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 112923ee call 0x11292406 */
  push32(0x112923f3u); f_11292406();
  /* 112923f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112923f6 ret  */
  ESPCHK(0x112923e6u, _esp0);
  ESP += 4; return;
}

/* FUN_100023f7 @ 0x112923f7 (15 bytes, 6 insns) */
void f_112923f7(void) {
  FTRACE(0x112923f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112923f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 112923f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112923fb push 0 */
  push32((uint32_t)(0x0u));
  /* 112923fd call 0x11292406 */
  push32(0x11292402u); f_11292406();
  /* 11292402 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11292405 ret  */
  ESPCHK(0x112923f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002406 @ 0x11292406 (163 bytes, 53 insns) */
void f_11292406(void) {
  FTRACE(0x11292406u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292406 push edi */
  push32((uint32_t)(EDI));
  /* 11292407 call 0x112924ab */
  push32(0x1129240cu); f_112924ab();
  /* 1129240c push 1 */
  push32((uint32_t)(0x1u));
  /* 1129240e pop edi */
  EDI = (pop32());
  /* 1129240f cmp dword ptr [0x11296a50], edi */
  { uint32_t _a=(r32((uint32_t)(0x11296a50))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292415 jne 0x11292428 */
  if (!C.zf) goto L_11292428;
  /* 11292417 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1129241b call dword ptr [0x11295090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295090))), 0x11292421u);
  /* 11292421 push eax */
  push32((uint32_t)(EAX));
  /* 11292422 call dword ptr [0x1129508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129508c))), 0x11292428u);
L_11292428:;
  /* 11292428 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129242d push ebx */
  push32((uint32_t)(EBX));
  /* 1129242e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11292432 mov dword ptr [0x11296a4c], edi */
  w32((uint32_t)(0x11296a4c), (EDI));
  /* 11292438 mov byte ptr [0x11296a48], bl */
  w8((uint32_t)(0x11296a48), (BL));
  /* 1129243e jne 0x1129247c */
  if (!C.zf) goto L_1129247c;
  /* 11292440 mov eax, dword ptr [0x11296f70] */
  EAX = (r32((uint32_t)(0x11296f70)));
  /* 11292445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292447 je 0x1129246b */
  if (C.zf) goto L_1129246b;
  /* 11292449 mov ecx, dword ptr [0x11296f6c] */
  ECX = (r32((uint32_t)(0x11296f6c)));
  /* 1129244f push esi */
  push32((uint32_t)(ESI));
  /* 11292450 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11292453 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292455 jb 0x1129246a */
  if (C.cf) goto L_1129246a;
L_11292457:;
  /* 11292457 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11292459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129245b je 0x1129245f */
  if (C.zf) goto L_1129245f;
  /* 1129245d call eax */
  call_ind((uint32_t)(EAX), 0x1129245fu);
L_1129245f:;
  /* 1129245f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11292462 cmp esi, dword ptr [0x11296f70] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11296f70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292468 jae 0x11292457 */
  if (!C.cf) goto L_11292457;
L_1129246a:;
  /* 1129246a pop esi */
  ESI = (pop32());
L_1129246b:;
  /* 1129246b push 0x11296018 */
  push32((uint32_t)(0x11296018u));
  /* 11292470 push 0x11296014 */
  push32((uint32_t)(0x11296014u));
  /* 11292475 call 0x112924bd */
  push32(0x1129247au); f_112924bd();
  /* 1129247a pop ecx */
  ECX = (pop32());
  /* 1129247b pop ecx */
  ECX = (pop32());
L_1129247c:;
  /* 1129247c push 0x11296020 */
  push32((uint32_t)(0x11296020u));
  /* 11292481 push 0x1129601c */
  push32((uint32_t)(0x1129601cu));
  /* 11292486 call 0x112924bd */
  push32(0x1129248bu); f_112924bd();
  /* 1129248b pop ecx */
  ECX = (pop32());
  /* 1129248c pop ecx */
  ECX = (pop32());
  /* 1129248d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1129248f pop ebx */
  EBX = (pop32());
  /* 11292490 je 0x11292499 */
  if (C.zf) goto L_11292499;
  /* 11292492 call 0x112924b4 */
  push32(0x11292497u); f_112924b4();
  /* 11292497 pop edi */
  EDI = (pop32());
  /* 11292498 ret  */
  ESPCHK(0x11292406u, _esp0);
  ESP += 4; return;
L_11292499:;
  /* 11292499 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1129249d mov dword ptr [0x11296a50], edi */
  w32((uint32_t)(0x11296a50), (EDI));
  /* 112924a3 call dword ptr [0x11295088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295088))), 0x112924a9u);
  /* 112924a9 pop edi */
  EDI = (pop32());
  /* 112924aa ret  */
  ESPCHK(0x11292406u, _esp0);
  ESP += 4; return;
}

/* FUN_100024ab @ 0x112924ab (9 bytes, 4 insns) */
void f_112924ab(void) {
  FTRACE(0x112924abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112924ab push 0xd */
  push32((uint32_t)(0xdu));
  /* 112924ad call 0x11292f16 */
  push32(0x112924b2u); f_11292f16();
  /* 112924b2 pop ecx */
  ECX = (pop32());
  /* 112924b3 ret  */
  ESPCHK(0x112924abu, _esp0);
  ESP += 4; return;
}

/* FUN_100024b4 @ 0x112924b4 (9 bytes, 4 insns) */
void f_112924b4(void) {
  FTRACE(0x112924b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112924b4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 112924b6 call 0x11292f77 */
  push32(0x112924bbu); f_11292f77();
  /* 112924bb pop ecx */
  ECX = (pop32());
  /* 112924bc ret  */
  ESPCHK(0x112924b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100024bd @ 0x112924bd (26 bytes, 12 insns) */
void f_112924bd(void) {
  FTRACE(0x112924bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112924bd push esi */
  push32((uint32_t)(ESI));
  /* 112924be mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_112924c2:;
  /* 112924c2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112924c6 jae 0x112924d5 */
  if (!C.cf) goto L_112924d5;
  /* 112924c8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112924ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112924cc je 0x112924d0 */
  if (C.zf) goto L_112924d0;
  /* 112924ce call eax */
  call_ind((uint32_t)(EAX), 0x112924d0u);
L_112924d0:;
  /* 112924d0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112924d3 jmp 0x112924c2 */
  goto L_112924c2;
L_112924d5:;
  /* 112924d5 pop esi */
  ESI = (pop32());
  /* 112924d6 ret  */
  ESPCHK(0x112924bdu, _esp0);
  ESP += 4; return;
}

/* FUN_100024d7 @ 0x112924d7 (84 bytes, 32 insns) */
void f_112924d7(void) {
  FTRACE(0x112924d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112924d7 push esi */
  push32((uint32_t)(ESI));
  /* 112924d8 call 0x11292e81 */
  push32(0x112924ddu); f_11292e81();
  /* 112924dd call dword ptr [0x11295000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295000))), 0x112924e3u);
  /* 112924e3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112924e6 mov dword ptr [0x1129646c], eax */
  w32((uint32_t)(0x1129646c), (EAX));
  /* 112924eb je 0x11292527 */
  if (C.zf) goto L_11292527;
  /* 112924ed push 0x74 */
  push32((uint32_t)(0x74u));
  /* 112924ef push 1 */
  push32((uint32_t)(0x1u));
  /* 112924f1 call 0x11292f8c */
  push32(0x112924f6u); f_11292f8c();
  /* 112924f6 mov esi, eax */
  ESI = (EAX);
  /* 112924f8 pop ecx */
  ECX = (pop32());
  /* 112924f9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112924fb pop ecx */
  ECX = (pop32());
  /* 112924fc je 0x11292527 */
  if (C.zf) goto L_11292527;
  /* 112924fe push esi */
  push32((uint32_t)(ESI));
  /* 112924ff push dword ptr [0x1129646c] */
  push32((uint32_t)(r32((uint32_t)(0x1129646c))));
  /* 11292505 call dword ptr [0x11295004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295004))), 0x1129250bu);
  /* 1129250b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129250d je 0x11292527 */
  if (C.zf) goto L_11292527;
  /* 1129250f push esi */
  push32((uint32_t)(ESI));
  /* 11292510 call 0x11292549 */
  push32(0x11292515u); f_11292549();
  /* 11292515 pop ecx */
  ECX = (pop32());
  /* 11292516 call dword ptr [0x11295094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295094))), 0x1129251cu);
  /* 1129251c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11292520 push 1 */
  push32((uint32_t)(0x1u));
  /* 11292522 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11292524 pop eax */
  EAX = (pop32());
  /* 11292525 pop esi */
  ESI = (pop32());
  /* 11292526 ret  */
  ESPCHK(0x112924d7u, _esp0);
  ESP += 4; return;
L_11292527:;
  /* 11292527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11292529 pop esi */
  ESI = (pop32());
  /* 1129252a ret  */
  ESPCHK(0x112924d7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000252b @ 0x1129252b (30 bytes, 8 insns) */
void f_1129252b(void) {
  FTRACE(0x1129252bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1129252b call 0x11292eaa */
  push32(0x11292530u); f_11292eaa();
  /* 11292530 mov eax, dword ptr [0x1129646c] */
  EAX = (r32((uint32_t)(0x1129646c)));
  /* 11292535 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292538 je 0x11292548 */
  if (C.zf) goto L_11292548;
  /* 1129253a push eax */
  push32((uint32_t)(EAX));
  /* 1129253b call dword ptr [0x112950a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950a0))), 0x11292541u);
  /* 11292541 or dword ptr [0x1129646c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1129646c)))|(0xffffffffu); w32((uint32_t)(0x1129646c), (_r)); fl_logic(_r,32); }
L_11292548:;
  /* 11292548 ret  */
  ESPCHK(0x1129252bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002549 @ 0x11292549 (19 bytes, 4 insns) */
void f_11292549(void) {
  FTRACE(0x11292549u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292549 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1129254d mov dword ptr [eax + 0x50], 0x112965e8 */
  w32((uint32_t)(EAX + 0x50), (0x112965e8u));
  /* 11292554 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 1129255b ret  */
  ESPCHK(0x11292549u, _esp0);
  ESP += 4; return;
}

/* FUN_1000255c @ 0x1129255c (160 bytes, 62 insns) */
void f_1129255c(void) {
  FTRACE(0x1129255cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1129255c mov eax, dword ptr [0x1129646c] */
  EAX = (r32((uint32_t)(0x1129646c)));
  /* 11292561 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292564 je 0x112925fb */
  if (C.zf) goto L_112925fb;
  /* 1129256a push esi */
  push32((uint32_t)(ESI));
  /* 1129256b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1129256f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11292571 jne 0x11292580 */
  if (!C.zf) goto L_11292580;
  /* 11292573 push eax */
  push32((uint32_t)(EAX));
  /* 11292574 call dword ptr [0x112950a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950a4))), 0x1129257au);
  /* 1129257a mov esi, eax */
  ESI = (EAX);
  /* 1129257c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1129257e je 0x112925ec */
  if (C.zf) goto L_112925ec;
L_11292580:;
  /* 11292580 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11292583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292585 je 0x1129258e */
  if (C.zf) goto L_1129258e;
  /* 11292587 push eax */
  push32((uint32_t)(EAX));
  /* 11292588 call 0x11293019 */
  push32(0x1129258du); f_11293019();
  /* 1129258d pop ecx */
  ECX = (pop32());
L_1129258e:;
  /* 1129258e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11292591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292593 je 0x1129259c */
  if (C.zf) goto L_1129259c;
  /* 11292595 push eax */
  push32((uint32_t)(EAX));
  /* 11292596 call 0x11293019 */
  push32(0x1129259bu); f_11293019();
  /* 1129259b pop ecx */
  ECX = (pop32());
L_1129259c:;
  /* 1129259c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 1129259f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112925a1 je 0x112925aa */
  if (C.zf) goto L_112925aa;
  /* 112925a3 push eax */
  push32((uint32_t)(EAX));
  /* 112925a4 call 0x11293019 */
  push32(0x112925a9u); f_11293019();
  /* 112925a9 pop ecx */
  ECX = (pop32());
L_112925aa:;
  /* 112925aa mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 112925ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112925af je 0x112925b8 */
  if (C.zf) goto L_112925b8;
  /* 112925b1 push eax */
  push32((uint32_t)(EAX));
  /* 112925b2 call 0x11293019 */
  push32(0x112925b7u); f_11293019();
  /* 112925b7 pop ecx */
  ECX = (pop32());
L_112925b8:;
  /* 112925b8 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 112925bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112925bd je 0x112925c6 */
  if (C.zf) goto L_112925c6;
  /* 112925bf push eax */
  push32((uint32_t)(EAX));
  /* 112925c0 call 0x11293019 */
  push32(0x112925c5u); f_11293019();
  /* 112925c5 pop ecx */
  ECX = (pop32());
L_112925c6:;
  /* 112925c6 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 112925c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112925cb je 0x112925d4 */
  if (C.zf) goto L_112925d4;
  /* 112925cd push eax */
  push32((uint32_t)(EAX));
  /* 112925ce call 0x11293019 */
  push32(0x112925d3u); f_11293019();
  /* 112925d3 pop ecx */
  ECX = (pop32());
L_112925d4:;
  /* 112925d4 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 112925d7 cmp eax, 0x112965e8 */
  { uint32_t _a=(EAX),_b=(0x112965e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112925dc je 0x112925e5 */
  if (C.zf) goto L_112925e5;
  /* 112925de push eax */
  push32((uint32_t)(EAX));
  /* 112925df call 0x11293019 */
  push32(0x112925e4u); f_11293019();
  /* 112925e4 pop ecx */
  ECX = (pop32());
L_112925e5:;
  /* 112925e5 push esi */
  push32((uint32_t)(ESI));
  /* 112925e6 call 0x11293019 */
  push32(0x112925ebu); f_11293019();
  /* 112925eb pop ecx */
  ECX = (pop32());
L_112925ec:;
  /* 112925ec push 0 */
  push32((uint32_t)(0x0u));
  /* 112925ee push dword ptr [0x1129646c] */
  push32((uint32_t)(r32((uint32_t)(0x1129646c))));
  /* 112925f4 call dword ptr [0x11295004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295004))), 0x112925fau);
  /* 112925fa pop esi */
  ESI = (pop32());
L_112925fb:;
  /* 112925fb ret  */
  ESPCHK(0x1129255cu, _esp0);
  ESP += 4; return;
}

/* FUN_100025fc @ 0x112925fc (444 bytes, 150 insns) */
void f_112925fc(void) {
  FTRACE(0x112925fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112925fc push ebp */
  push32((uint32_t)(EBP));
  /* 112925fd mov ebp, esp */
  EBP = (ESP);
  /* 112925ff sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11292602 push ebx */
  push32((uint32_t)(EBX));
  /* 11292603 push esi */
  push32((uint32_t)(ESI));
  /* 11292604 push edi */
  push32((uint32_t)(EDI));
  /* 11292605 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1129260a call 0x11293061 */
  push32(0x1129260fu); f_11293061();
  /* 1129260f mov esi, eax */
  ESI = (EAX);
  /* 11292611 pop ecx */
  ECX = (pop32());
  /* 11292612 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11292614 jne 0x1129261e */
  if (!C.zf) goto L_1129261e;
  /* 11292616 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11292618 call 0x11292386 */
  push32(0x1129261du); f_11292386();
  /* 1129261d pop ecx */
  ECX = (pop32());
L_1129261e:;
  /* 1129261e mov dword ptr [0x11296e60], esi */
  w32((uint32_t)(0x11296e60), (ESI));
  /* 11292624 mov dword ptr [0x11296f60], 0x20 */
  w32((uint32_t)(0x11296f60), (0x20u));
  /* 1129262e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11292634:;
  /* 11292634 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292636 jae 0x11292656 */
  if (!C.cf) goto L_11292656;
  /* 11292638 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1129263c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1129263f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11292643 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11292647 mov eax, dword ptr [0x11296e60] */
  EAX = (r32((uint32_t)(0x11296e60)));
  /* 1129264c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1129264f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11292654 jmp 0x11292634 */
  goto L_11292634;
L_11292656:;
  /* 11292656 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11292659 push eax */
  push32((uint32_t)(EAX));
  /* 1129265a call dword ptr [0x1129507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129507c))), 0x11292660u);
  /* 11292660 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11292665 je 0x1129273c */
  if (C.zf) goto L_1129273c;
  /* 1129266b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1129266e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292670 je 0x1129273c */
  if (C.zf) goto L_1129273c;
  /* 11292676 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11292678 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1129267b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 1129267e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11292681 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11292686 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292688 jl 0x1129268c */
  if ((C.sf!=C.of)) goto L_1129268c;
  /* 1129268a mov edi, eax */
  EDI = (EAX);
L_1129268c:;
  /* 1129268c cmp dword ptr [0x11296f60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11296f60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292692 jge 0x112926ea */
  if ((C.sf==C.of)) goto L_112926ea;
  /* 11292694 mov esi, 0x11296e64 */
  ESI = (0x11296e64u);
L_11292699:;
  /* 11292699 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1129269e call 0x11293061 */
  push32(0x112926a3u); f_11293061();
  /* 112926a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112926a5 pop ecx */
  ECX = (pop32());
  /* 112926a6 je 0x112926e4 */
  if (C.zf) goto L_112926e4;
  /* 112926a8 add dword ptr [0x11296f60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11296f60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11296f60), (_r)); fl_add(_a,_b,_r,32); }
  /* 112926af mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112926b1 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_112926b7:;
  /* 112926b7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112926b9 jae 0x112926d7 */
  if (!C.cf) goto L_112926d7;
  /* 112926bb and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 112926bf or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112926c2 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 112926c6 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 112926ca mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 112926cc add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112926cf add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112926d5 jmp 0x112926b7 */
  goto L_112926b7;
L_112926d7:;
  /* 112926d7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112926da cmp dword ptr [0x11296f60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11296f60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112926e0 jl 0x11292699 */
  if ((C.sf!=C.of)) goto L_11292699;
  /* 112926e2 jmp 0x112926ea */
  goto L_112926ea;
L_112926e4:;
  /* 112926e4 mov edi, dword ptr [0x11296f60] */
  EDI = (r32((uint32_t)(0x11296f60)));
L_112926ea:;
  /* 112926ea xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112926ec test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112926ee jle 0x1129273c */
  if ((C.zf||C.sf!=C.of)) goto L_1129273c;
L_112926f0:;
  /* 112926f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112926f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112926f5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112926f8 je 0x11292732 */
  if (C.zf) goto L_11292732;
  /* 112926fa mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 112926fc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 112926fe je 0x11292732 */
  if (C.zf) goto L_11292732;
  /* 11292700 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11292702 jne 0x1129270f */
  if (!C.zf) goto L_1129270f;
  /* 11292704 push ecx */
  push32((uint32_t)(ECX));
  /* 11292705 call dword ptr [0x1129509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129509c))), 0x1129270bu);
  /* 1129270b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129270d je 0x11292732 */
  if (C.zf) goto L_11292732;
L_1129270f:;
  /* 1129270f mov ecx, esi */
  ECX = (ESI);
  /* 11292711 mov eax, esi */
  EAX = (ESI);
  /* 11292713 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11292716 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11292719 mov ecx, dword ptr [ecx*4 + 0x11296e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11296e60)));
  /* 11292720 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11292723 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11292726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11292729 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1129272b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1129272d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 1129272f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11292732:;
  /* 11292732 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11292736 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11292737 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11292738 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129273a jl 0x112926f0 */
  if ((C.sf!=C.of)) goto L_112926f0;
L_1129273c:;
  /* 1129273c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1129273e:;
  /* 1129273e mov ecx, dword ptr [0x11296e60] */
  ECX = (r32((uint32_t)(0x11296e60)));
  /* 11292744 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11292747 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129274b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1129274e jne 0x1129279d */
  if (!C.zf) goto L_1129279d;
  /* 11292750 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11292752 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11292756 jne 0x1129275d */
  if (!C.zf) goto L_1129275d;
  /* 11292758 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1129275a pop eax */
  EAX = (pop32());
  /* 1129275b jmp 0x11292767 */
  goto L_11292767;
L_1129275d:;
  /* 1129275d mov eax, ebx */
  EAX = (EBX);
  /* 1129275f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11292760 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11292762 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11292764 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11292767:;
  /* 11292767 push eax */
  push32((uint32_t)(EAX));
  /* 11292768 call dword ptr [0x11295098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295098))), 0x1129276eu);
  /* 1129276e mov edi, eax */
  EDI = (EAX);
  /* 11292770 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292773 je 0x1129278c */
  if (C.zf) goto L_1129278c;
  /* 11292775 push edi */
  push32((uint32_t)(EDI));
  /* 11292776 call dword ptr [0x1129509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129509c))), 0x1129277cu);
  /* 1129277c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129277e je 0x1129278c */
  if (C.zf) goto L_1129278c;
  /* 11292780 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11292785 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11292787 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129278a jne 0x11292792 */
  if (!C.zf) goto L_11292792;
L_1129278c:;
  /* 1129278c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11292790 jmp 0x112927a1 */
  goto L_112927a1;
L_11292792:;
  /* 11292792 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292795 jne 0x112927a1 */
  if (!C.zf) goto L_112927a1;
  /* 11292797 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1129279b jmp 0x112927a1 */
  goto L_112927a1;
L_1129279d:;
  /* 1129279d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_112927a1:;
  /* 112927a1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112927a2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112927a5 jl 0x1129273e */
  if ((C.sf!=C.of)) goto L_1129273e;
  /* 112927a7 push dword ptr [0x11296f60] */
  push32((uint32_t)(r32((uint32_t)(0x11296f60))));
  /* 112927ad call dword ptr [0x112950a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112950a8))), 0x112927b3u);
  /* 112927b3 pop edi */
  EDI = (pop32());
  /* 112927b4 pop esi */
  ESI = (pop32());
  /* 112927b5 pop ebx */
  EBX = (pop32());
  /* 112927b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112927b7 ret  */
  ESPCHK(0x112925fcu, _esp0);
  ESP += 4; return;
}

/* FUN_100027b8 @ 0x112927b8 (84 bytes, 33 insns) */
void f_112927b8(void) {
  FTRACE(0x112927b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112927b8 push ebx */
  push32((uint32_t)(EBX));
  /* 112927b9 push esi */
  push32((uint32_t)(ESI));
  /* 112927ba push edi */
  push32((uint32_t)(EDI));
  /* 112927bb mov esi, 0x11296e60 */
  ESI = (0x11296e60u);
L_112927c0:;
  /* 112927c0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112927c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112927c4 je 0x112927fd */
  if (C.zf) goto L_112927fd;
  /* 112927c6 mov edi, eax */
  EDI = (EAX);
  /* 112927c8 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112927cd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112927cf jae 0x112927f2 */
  if (!C.cf) goto L_112927f2;
  /* 112927d1 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_112927d4:;
  /* 112927d4 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112927d8 je 0x112927e1 */
  if (C.zf) goto L_112927e1;
  /* 112927da push ebx */
  push32((uint32_t)(EBX));
  /* 112927db call dword ptr [0x11295078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295078))), 0x112927e1u);
L_112927e1:;
  /* 112927e1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112927e3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112927e6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112927eb add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112927ee cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112927f0 jb 0x112927d4 */
  if (C.cf) goto L_112927d4;
L_112927f2:;
  /* 112927f2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112927f4 call 0x11293019 */
  push32(0x112927f9u); f_11293019();
  /* 112927f9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 112927fc pop ecx */
  ECX = (pop32());
L_112927fd:;
  /* 112927fd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11292800 cmp esi, 0x11296f60 */
  { uint32_t _a=(ESI),_b=(0x11296f60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292806 jl 0x112927c0 */
  if ((C.sf!=C.of)) goto L_112927c0;
  /* 11292808 pop edi */
  EDI = (pop32());
  /* 11292809 pop esi */
  ESI = (pop32());
  /* 1129280a pop ebx */
  EBX = (pop32());
  /* 1129280b ret  */
  ESPCHK(0x112927b8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000280c @ 0x1129280c (185 bytes, 71 insns) */
void f_1129280c(void) {
  FTRACE(0x1129280cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1129280c push ebx */
  push32((uint32_t)(EBX));
  /* 1129280d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1129280f cmp dword ptr [0x11296f68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11296f68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292815 push esi */
  push32((uint32_t)(ESI));
  /* 11292816 push edi */
  push32((uint32_t)(EDI));
  /* 11292817 jne 0x1129281e */
  if (!C.zf) goto L_1129281e;
  /* 11292819 call 0x11293633 */
  push32(0x1129281eu); f_11293633();
L_1129281e:;
  /* 1129281e mov esi, dword ptr [0x11296a00] */
  ESI = (r32((uint32_t)(0x11296a00)));
  /* 11292824 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11292826:;
  /* 11292826 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11292828 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1129282a je 0x1129283e */
  if (C.zf) goto L_1129283e;
  /* 1129282c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1129282e je 0x11292831 */
  if (C.zf) goto L_11292831;
  /* 11292830 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11292831:;
  /* 11292831 push esi */
  push32((uint32_t)(ESI));
  /* 11292832 call 0x112931e0 */
  push32(0x11292837u); f_112931e0();
  /* 11292837 pop ecx */
  ECX = (pop32());
  /* 11292838 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1129283c jmp 0x11292826 */
  goto L_11292826;
L_1129283e:;
  /* 1129283e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11292845 push eax */
  push32((uint32_t)(EAX));
  /* 11292846 call 0x11293061 */
  push32(0x1129284bu); f_11293061();
  /* 1129284b mov esi, eax */
  ESI = (EAX);
  /* 1129284d pop ecx */
  ECX = (pop32());
  /* 1129284e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292850 mov dword ptr [0x11296a30], esi */
  w32((uint32_t)(0x11296a30), (ESI));
  /* 11292856 jne 0x11292860 */
  if (!C.zf) goto L_11292860;
  /* 11292858 push 9 */
  push32((uint32_t)(0x9u));
  /* 1129285a call 0x11292386 */
  push32(0x1129285fu); f_11292386();
  /* 1129285f pop ecx */
  ECX = (pop32());
L_11292860:;
  /* 11292860 mov edi, dword ptr [0x11296a00] */
  EDI = (r32((uint32_t)(0x11296a00)));
  /* 11292866 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292868 je 0x112928a3 */
  if (C.zf) goto L_112928a3;
  /* 1129286a push ebp */
  push32((uint32_t)(EBP));
L_1129286b:;
  /* 1129286b push edi */
  push32((uint32_t)(EDI));
  /* 1129286c call 0x112931e0 */
  push32(0x11292871u); f_112931e0();
  /* 11292871 mov ebp, eax */
  EBP = (EAX);
  /* 11292873 pop ecx */
  ECX = (pop32());
  /* 11292874 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11292875 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292878 je 0x1129289c */
  if (C.zf) goto L_1129289c;
  /* 1129287a push ebp */
  push32((uint32_t)(EBP));
  /* 1129287b call 0x11293061 */
  push32(0x11292880u); f_11293061();
  /* 11292880 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292882 pop ecx */
  ECX = (pop32());
  /* 11292883 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11292885 jne 0x1129288f */
  if (!C.zf) goto L_1129288f;
  /* 11292887 push 9 */
  push32((uint32_t)(0x9u));
  /* 11292889 call 0x11292386 */
  push32(0x1129288eu); f_11292386();
  /* 1129288e pop ecx */
  ECX = (pop32());
L_1129288f:;
  /* 1129288f push edi */
  push32((uint32_t)(EDI));
  /* 11292890 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11292892 call 0x112930f0 */
  push32(0x11292897u); f_112930f0();
  /* 11292897 pop ecx */
  ECX = (pop32());
  /* 11292898 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1129289b pop ecx */
  ECX = (pop32());
L_1129289c:;
  /* 1129289c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1129289e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112928a0 jne 0x1129286b */
  if (!C.zf) goto L_1129286b;
  /* 112928a2 pop ebp */
  EBP = (pop32());
L_112928a3:;
  /* 112928a3 push dword ptr [0x11296a00] */
  push32((uint32_t)(r32((uint32_t)(0x11296a00))));
  /* 112928a9 call 0x11293019 */
  push32(0x112928aeu); f_11293019();
  /* 112928ae pop ecx */
  ECX = (pop32());
  /* 112928af mov dword ptr [0x11296a00], ebx */
  w32((uint32_t)(0x11296a00), (EBX));
  /* 112928b5 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 112928b7 pop edi */
  EDI = (pop32());
  /* 112928b8 pop esi */
  ESI = (pop32());
  /* 112928b9 mov dword ptr [0x11296f64], 1 */
  w32((uint32_t)(0x11296f64), (0x1u));
  /* 112928c3 pop ebx */
  EBX = (pop32());
  /* 112928c4 ret  */
  ESPCHK(0x1129280cu, _esp0);
  ESP += 4; return;
}

/* FUN_100028c5 @ 0x112928c5 (153 bytes, 62 insns) */
void f_112928c5(void) {
  FTRACE(0x112928c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112928c5 push ebp */
  push32((uint32_t)(EBP));
  /* 112928c6 mov ebp, esp */
  EBP = (ESP);
  /* 112928c8 push ecx */
  push32((uint32_t)(ECX));
  /* 112928c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112928ca push ebx */
  push32((uint32_t)(EBX));
  /* 112928cb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112928cd cmp dword ptr [0x11296f68], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11296f68))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112928d3 push esi */
  push32((uint32_t)(ESI));
  /* 112928d4 push edi */
  push32((uint32_t)(EDI));
  /* 112928d5 jne 0x112928dc */
  if (!C.zf) goto L_112928dc;
  /* 112928d7 call 0x11293633 */
  push32(0x112928dcu); f_11293633();
L_112928dc:;
  /* 112928dc mov esi, 0x11296a54 */
  ESI = (0x11296a54u);
  /* 112928e1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 112928e6 push esi */
  push32((uint32_t)(ESI));
  /* 112928e7 push ebx */
  push32((uint32_t)(EBX));
  /* 112928e8 call dword ptr [0x11295074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295074))), 0x112928eeu);
  /* 112928ee mov eax, dword ptr [0x11296f78] */
  EAX = (r32((uint32_t)(0x11296f78)));
  /* 112928f3 mov dword ptr [0x11296a40], esi */
  w32((uint32_t)(0x11296a40), (ESI));
  /* 112928f9 mov edi, esi */
  EDI = (ESI);
  /* 112928fb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112928fd je 0x11292901 */
  if (C.zf) goto L_11292901;
  /* 112928ff mov edi, eax */
  EDI = (EAX);
L_11292901:;
  /* 11292901 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11292904 push eax */
  push32((uint32_t)(EAX));
  /* 11292905 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11292908 push eax */
  push32((uint32_t)(EAX));
  /* 11292909 push ebx */
  push32((uint32_t)(EBX));
  /* 1129290a push ebx */
  push32((uint32_t)(EBX));
  /* 1129290b push edi */
  push32((uint32_t)(EDI));
  /* 1129290c call 0x1129295e */
  push32(0x11292911u); f_1129295e();
  /* 11292911 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11292914 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11292917 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1129291a push eax */
  push32((uint32_t)(EAX));
  /* 1129291b call 0x11293061 */
  push32(0x11292920u); f_11293061();
  /* 11292920 mov esi, eax */
  ESI = (EAX);
  /* 11292922 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11292925 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292927 jne 0x11292931 */
  if (!C.zf) goto L_11292931;
  /* 11292929 push 8 */
  push32((uint32_t)(0x8u));
  /* 1129292b call 0x11292386 */
  push32(0x11292930u); f_11292386();
  /* 11292930 pop ecx */
  ECX = (pop32());
L_11292931:;
  /* 11292931 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11292934 push eax */
  push32((uint32_t)(EAX));
  /* 11292935 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11292938 push eax */
  push32((uint32_t)(EAX));
  /* 11292939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1129293c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 1129293f push eax */
  push32((uint32_t)(EAX));
  /* 11292940 push esi */
  push32((uint32_t)(ESI));
  /* 11292941 push edi */
  push32((uint32_t)(EDI));
  /* 11292942 call 0x1129295e */
  push32(0x11292947u); f_1129295e();
  /* 11292947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1129294a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129294d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1129294e mov dword ptr [0x11296a28], esi */
  w32((uint32_t)(0x11296a28), (ESI));
  /* 11292954 pop edi */
  EDI = (pop32());
  /* 11292955 pop esi */
  ESI = (pop32());
  /* 11292956 mov dword ptr [0x11296a24], eax */
  w32((uint32_t)(0x11296a24), (EAX));
  /* 1129295b pop ebx */
  EBX = (pop32());
  /* 1129295c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1129295d ret  */
  ESPCHK(0x112928c5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000295e @ 0x1129295e (436 bytes, 187 insns) */
void f_1129295e(void) {
  FTRACE(0x1129295eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1129295e push ebp */
  push32((uint32_t)(EBP));
  /* 1129295f mov ebp, esp */
  EBP = (ESP);
  /* 11292961 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11292964 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11292967 push ebx */
  push32((uint32_t)(EBX));
  /* 11292968 push esi */
  push32((uint32_t)(ESI));
  /* 11292969 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1129296c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1129296f push edi */
  push32((uint32_t)(EDI));
  /* 11292970 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11292973 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11292979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1129297c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1129297e je 0x11292988 */
  if (C.zf) goto L_11292988;
  /* 11292980 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11292982 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11292985 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11292988:;
  /* 11292988 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1129298b jne 0x112929d1 */
  if (!C.zf) goto L_112929d1;
L_1129298d:;
  /* 1129298d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11292990 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292991 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292994 je 0x112929bf */
  if (C.zf) goto L_112929bf;
  /* 11292996 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11292998 je 0x112929bf */
  if (C.zf) goto L_112929bf;
  /* 1129299a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1129299d test byte ptr [edx + 0x11296d41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11296d41)))&(0x4u); fl_logic(_r,8); }
  /* 112929a4 je 0x112929b2 */
  if (C.zf) goto L_112929b2;
  /* 112929a6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112929a8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112929aa je 0x112929b2 */
  if (C.zf) goto L_112929b2;
  /* 112929ac mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112929ae mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112929b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112929b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_112929b2:;
  /* 112929b2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112929b4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112929b6 je 0x1129298d */
  if (C.zf) goto L_1129298d;
  /* 112929b8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112929ba mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112929bc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112929bd jmp 0x1129298d */
  goto L_1129298d;
L_112929bf:;
  /* 112929bf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112929c1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112929c3 je 0x112929c9 */
  if (C.zf) goto L_112929c9;
  /* 112929c5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 112929c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112929c9:;
  /* 112929c9 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112929cc jne 0x11292a14 */
  if (!C.zf) goto L_11292a14;
  /* 112929ce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112929cf jmp 0x11292a14 */
  goto L_11292a14;
L_112929d1:;
  /* 112929d1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112929d3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112929d5 je 0x112929dc */
  if (C.zf) goto L_112929dc;
  /* 112929d7 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112929d9 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112929db inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112929dc:;
  /* 112929dc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112929de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112929df movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 112929e2 test byte ptr [ebx + 0x11296d41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11296d41)))&(0x4u); fl_logic(_r,8); }
  /* 112929e9 je 0x112929f7 */
  if (C.zf) goto L_112929f7;
  /* 112929eb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112929ed test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112929ef je 0x112929f6 */
  if (C.zf) goto L_112929f6;
  /* 112929f1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 112929f3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 112929f5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112929f6:;
  /* 112929f6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_112929f7:;
  /* 112929f7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112929fa je 0x11292a05 */
  if (C.zf) goto L_11292a05;
  /* 112929fc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112929fe je 0x11292a09 */
  if (C.zf) goto L_11292a09;
  /* 11292a00 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292a03 jne 0x112929d1 */
  if (!C.zf) goto L_112929d1;
L_11292a05:;
  /* 11292a05 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11292a07 jne 0x11292a0c */
  if (!C.zf) goto L_11292a0c;
L_11292a09:;
  /* 11292a09 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11292a0a jmp 0x11292a14 */
  goto L_11292a14;
L_11292a0c:;
  /* 11292a0c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11292a0e je 0x11292a14 */
  if (C.zf) goto L_11292a14;
  /* 11292a10 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11292a14:;
  /* 11292a14 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11292a18:;
  /* 11292a18 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292a1b je 0x11292b01 */
  if (C.zf) goto L_11292b01;
L_11292a21:;
  /* 11292a21 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11292a23 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292a26 je 0x11292a2d */
  if (C.zf) goto L_11292a2d;
  /* 11292a28 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292a2b jne 0x11292a30 */
  if (!C.zf) goto L_11292a30;
L_11292a2d:;
  /* 11292a2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292a2e jmp 0x11292a21 */
  goto L_11292a21;
L_11292a30:;
  /* 11292a30 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292a33 je 0x11292b01 */
  if (C.zf) goto L_11292b01;
  /* 11292a39 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11292a3b je 0x11292a45 */
  if (C.zf) goto L_11292a45;
  /* 11292a3d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11292a3f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11292a42 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11292a45:;
  /* 11292a45 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11292a48 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11292a4a:;
  /* 11292a4a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11292a51 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11292a53:;
  /* 11292a53 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292a56 jne 0x11292a5c */
  if (!C.zf) goto L_11292a5c;
  /* 11292a58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292a59 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11292a5a jmp 0x11292a53 */
  goto L_11292a53;
L_11292a5c:;
  /* 11292a5c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292a5f jne 0x11292a8d */
  if (!C.zf) goto L_11292a8d;
  /* 11292a61 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11292a64 jne 0x11292a8b */
  if (!C.zf) goto L_11292a8b;
  /* 11292a66 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11292a68 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292a6b je 0x11292a7a */
  if (C.zf) goto L_11292a7a;
  /* 11292a6d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292a71 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11292a74 jne 0x11292a7a */
  if (!C.zf) goto L_11292a7a;
  /* 11292a76 mov eax, edx */
  EAX = (EDX);
  /* 11292a78 jmp 0x11292a7d */
  goto L_11292a7d;
L_11292a7a:;
  /* 11292a7a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11292a7d:;
  /* 11292a7d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11292a80 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11292a82 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292a85 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11292a88 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11292a8b:;
  /* 11292a8b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11292a8d:;
  /* 11292a8d mov edx, ebx */
  EDX = (EBX);
  /* 11292a8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11292a90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11292a92 je 0x11292aa2 */
  if (C.zf) goto L_11292aa2;
  /* 11292a94 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11292a95:;
  /* 11292a95 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11292a97 je 0x11292a9d */
  if (C.zf) goto L_11292a9d;
  /* 11292a99 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11292a9c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11292a9d:;
  /* 11292a9d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11292a9f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11292aa0 jne 0x11292a95 */
  if (!C.zf) goto L_11292a95;
L_11292aa2:;
  /* 11292aa2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11292aa4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11292aa6 je 0x11292af2 */
  if (C.zf) goto L_11292af2;
  /* 11292aa8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292aac jne 0x11292ab8 */
  if (!C.zf) goto L_11292ab8;
  /* 11292aae cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292ab1 je 0x11292af2 */
  if (C.zf) goto L_11292af2;
  /* 11292ab3 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292ab6 je 0x11292af2 */
  if (C.zf) goto L_11292af2;
L_11292ab8:;
  /* 11292ab8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292abc je 0x11292aec */
  if (C.zf) goto L_11292aec;
  /* 11292abe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11292ac0 je 0x11292adb */
  if (C.zf) goto L_11292adb;
  /* 11292ac2 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11292ac5 test byte ptr [ebx + 0x11296d41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11296d41)))&(0x4u); fl_logic(_r,8); }
  /* 11292acc je 0x11292ad4 */
  if (C.zf) goto L_11292ad4;
  /* 11292ace mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11292ad0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11292ad1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292ad2 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11292ad4:;
  /* 11292ad4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11292ad6 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11292ad8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11292ad9 jmp 0x11292aea */
  goto L_11292aea;
L_11292adb:;
  /* 11292adb movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11292ade test byte ptr [edx + 0x11296d41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11296d41)))&(0x4u); fl_logic(_r,8); }
  /* 11292ae5 je 0x11292aea */
  if (C.zf) goto L_11292aea;
  /* 11292ae7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292ae8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11292aea:;
  /* 11292aea inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11292aec:;
  /* 11292aec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292aed jmp 0x11292a4a */
  goto L_11292a4a;
L_11292af2:;
  /* 11292af2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11292af4 je 0x11292afa */
  if (C.zf) goto L_11292afa;
  /* 11292af6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11292af9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11292afa:;
  /* 11292afa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11292afc jmp 0x11292a18 */
  goto L_11292a18;
L_11292b01:;
  /* 11292b01 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11292b03 je 0x11292b08 */
  if (C.zf) goto L_11292b08;
  /* 11292b05 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11292b08:;
  /* 11292b08 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11292b0b pop edi */
  EDI = (pop32());
  /* 11292b0c pop esi */
  ESI = (pop32());
  /* 11292b0d pop ebx */
  EBX = (pop32());
  /* 11292b0e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11292b10 pop ebp */
  EBP = (pop32());
  /* 11292b11 ret  */
  ESPCHK(0x1129295eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b12 @ 0x11292b12 (306 bytes, 132 insns) */
void f_11292b12(void) {
  FTRACE(0x11292b12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292b12 push ecx */
  push32((uint32_t)(ECX));
  /* 11292b13 push ecx */
  push32((uint32_t)(ECX));
  /* 11292b14 mov eax, dword ptr [0x11296b58] */
  EAX = (r32((uint32_t)(0x11296b58)));
  /* 11292b19 push ebx */
  push32((uint32_t)(EBX));
  /* 11292b1a push ebp */
  push32((uint32_t)(EBP));
  /* 11292b1b mov ebp, dword ptr [0x11295060] */
  EBP = (r32((uint32_t)(0x11295060)));
  /* 11292b21 push esi */
  push32((uint32_t)(ESI));
  /* 11292b22 push edi */
  push32((uint32_t)(EDI));
  /* 11292b23 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11292b25 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11292b27 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11292b29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292b2b jne 0x11292b60 */
  if (!C.zf) goto L_11292b60;
  /* 11292b2d call ebp */
  call_ind((uint32_t)(EBP), 0x11292b2fu);
  /* 11292b2f mov esi, eax */
  ESI = (EAX);
  /* 11292b31 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292b33 je 0x11292b41 */
  if (C.zf) goto L_11292b41;
  /* 11292b35 mov dword ptr [0x11296b58], 1 */
  w32((uint32_t)(0x11296b58), (0x1u));
  /* 11292b3f jmp 0x11292b69 */
  goto L_11292b69;
L_11292b41:;
  /* 11292b41 call dword ptr [0x11295064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295064))), 0x11292b47u);
  /* 11292b47 mov edi, eax */
  EDI = (EAX);
  /* 11292b49 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292b4b je 0x11292c3b */
  if (C.zf) goto L_11292c3b;
  /* 11292b51 mov dword ptr [0x11296b58], 2 */
  w32((uint32_t)(0x11296b58), (0x2u));
  /* 11292b5b jmp 0x11292bef */
  goto L_11292bef;
L_11292b60:;
  /* 11292b60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292b63 jne 0x11292bea */
  if (!C.zf) goto L_11292bea;
L_11292b69:;
  /* 11292b69 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292b6b jne 0x11292b79 */
  if (!C.zf) goto L_11292b79;
  /* 11292b6d call ebp */
  call_ind((uint32_t)(EBP), 0x11292b6fu);
  /* 11292b6f mov esi, eax */
  ESI = (EAX);
  /* 11292b71 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292b73 je 0x11292c3b */
  if (C.zf) goto L_11292c3b;
L_11292b79:;
  /* 11292b79 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11292b7c mov eax, esi */
  EAX = (ESI);
  /* 11292b7e je 0x11292b8e */
  if (C.zf) goto L_11292b8e;
L_11292b80:;
  /* 11292b80 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292b81 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292b82 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11292b85 jne 0x11292b80 */
  if (!C.zf) goto L_11292b80;
  /* 11292b87 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292b88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292b89 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11292b8c jne 0x11292b80 */
  if (!C.zf) goto L_11292b80;
L_11292b8e:;
  /* 11292b8e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11292b90 mov edi, dword ptr [0x11295068] */
  EDI = (r32((uint32_t)(0x11295068)));
  /* 11292b96 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11292b98 push ebx */
  push32((uint32_t)(EBX));
  /* 11292b99 push ebx */
  push32((uint32_t)(EBX));
  /* 11292b9a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292b9b push ebx */
  push32((uint32_t)(EBX));
  /* 11292b9c push ebx */
  push32((uint32_t)(EBX));
  /* 11292b9d push eax */
  push32((uint32_t)(EAX));
  /* 11292b9e push esi */
  push32((uint32_t)(ESI));
  /* 11292b9f push ebx */
  push32((uint32_t)(EBX));
  /* 11292ba0 push ebx */
  push32((uint32_t)(EBX));
  /* 11292ba1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11292ba5 call edi */
  call_ind((uint32_t)(EDI), 0x11292ba7u);
  /* 11292ba7 mov ebp, eax */
  EBP = (EAX);
  /* 11292ba9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292bab je 0x11292bdf */
  if (C.zf) goto L_11292bdf;
  /* 11292bad push ebp */
  push32((uint32_t)(EBP));
  /* 11292bae call 0x11293061 */
  push32(0x11292bb3u); f_11293061();
  /* 11292bb3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292bb5 pop ecx */
  ECX = (pop32());
  /* 11292bb6 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11292bba je 0x11292bdf */
  if (C.zf) goto L_11292bdf;
  /* 11292bbc push ebx */
  push32((uint32_t)(EBX));
  /* 11292bbd push ebx */
  push32((uint32_t)(EBX));
  /* 11292bbe push ebp */
  push32((uint32_t)(EBP));
  /* 11292bbf push eax */
  push32((uint32_t)(EAX));
  /* 11292bc0 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11292bc4 push esi */
  push32((uint32_t)(ESI));
  /* 11292bc5 push ebx */
  push32((uint32_t)(EBX));
  /* 11292bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11292bc7 call edi */
  call_ind((uint32_t)(EDI), 0x11292bc9u);
  /* 11292bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292bcb jne 0x11292bdb */
  if (!C.zf) goto L_11292bdb;
  /* 11292bcd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11292bd1 call 0x11293019 */
  push32(0x11292bd6u); f_11293019();
  /* 11292bd6 pop ecx */
  ECX = (pop32());
  /* 11292bd7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11292bdb:;
  /* 11292bdb mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11292bdf:;
  /* 11292bdf push esi */
  push32((uint32_t)(ESI));
  /* 11292be0 call dword ptr [0x1129506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129506c))), 0x11292be6u);
  /* 11292be6 mov eax, ebx */
  EAX = (EBX);
  /* 11292be8 jmp 0x11292c3d */
  goto L_11292c3d;
L_11292bea:;
  /* 11292bea cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292bed jne 0x11292c3b */
  if (!C.zf) goto L_11292c3b;
L_11292bef:;
  /* 11292bef cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292bf1 jne 0x11292bff */
  if (!C.zf) goto L_11292bff;
  /* 11292bf3 call dword ptr [0x11295064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295064))), 0x11292bf9u);
  /* 11292bf9 mov edi, eax */
  EDI = (EAX);
  /* 11292bfb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292bfd je 0x11292c3b */
  if (C.zf) goto L_11292c3b;
L_11292bff:;
  /* 11292bff cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292c01 mov eax, edi */
  EAX = (EDI);
  /* 11292c03 je 0x11292c0f */
  if (C.zf) goto L_11292c0f;
L_11292c05:;
  /* 11292c05 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292c06 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292c08 jne 0x11292c05 */
  if (!C.zf) goto L_11292c05;
  /* 11292c0a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292c0b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11292c0d jne 0x11292c05 */
  if (!C.zf) goto L_11292c05;
L_11292c0f:;
  /* 11292c0f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11292c11 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292c12 mov ebp, eax */
  EBP = (EAX);
  /* 11292c14 push ebp */
  push32((uint32_t)(EBP));
  /* 11292c15 call 0x11293061 */
  push32(0x11292c1au); f_11293061();
  /* 11292c1a mov esi, eax */
  ESI = (EAX);
  /* 11292c1c pop ecx */
  ECX = (pop32());
  /* 11292c1d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292c1f jne 0x11292c25 */
  if (!C.zf) goto L_11292c25;
  /* 11292c21 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11292c23 jmp 0x11292c30 */
  goto L_11292c30;
L_11292c25:;
  /* 11292c25 push ebp */
  push32((uint32_t)(EBP));
  /* 11292c26 push edi */
  push32((uint32_t)(EDI));
  /* 11292c27 push esi */
  push32((uint32_t)(ESI));
  /* 11292c28 call 0x11293650 */
  push32(0x11292c2du); f_11293650();
  /* 11292c2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11292c30:;
  /* 11292c30 push edi */
  push32((uint32_t)(EDI));
  /* 11292c31 call dword ptr [0x11295070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295070))), 0x11292c37u);
  /* 11292c37 mov eax, esi */
  EAX = (ESI);
  /* 11292c39 jmp 0x11292c3d */
  goto L_11292c3d;
L_11292c3b:;
  /* 11292c3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11292c3d:;
  /* 11292c3d pop edi */
  EDI = (pop32());
  /* 11292c3e pop esi */
  ESI = (pop32());
  /* 11292c3f pop ebp */
  EBP = (pop32());
  /* 11292c40 pop ebx */
  EBX = (pop32());
  /* 11292c41 pop ecx */
  ECX = (pop32());
  /* 11292c42 pop ecx */
  ECX = (pop32());
  /* 11292c43 ret  */
  ESPCHK(0x11292b12u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c44 @ 0x11292c44 (60 bytes, 20 insns) */
void f_11292c44(void) {
  FTRACE(0x11292c44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11292c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11292c48 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292c4c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11292c51 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11292c54 push eax */
  push32((uint32_t)(EAX));
  /* 11292c55 call dword ptr [0x11295058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295058))), 0x11292c5bu);
  /* 11292c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292c5d mov dword ptr [0x11296e48], eax */
  w32((uint32_t)(0x11296e48), (EAX));
  /* 11292c62 je 0x11292c79 */
  if (C.zf) goto L_11292c79;
  /* 11292c64 call 0x11293985 */
  push32(0x11292c69u); f_11293985();
  /* 11292c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292c6b jne 0x11292c7c */
  if (!C.zf) goto L_11292c7c;
  /* 11292c6d push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 11292c73 call dword ptr [0x1129505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129505c))), 0x11292c79u);
L_11292c79:;
  /* 11292c79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11292c7b ret  */
  ESPCHK(0x11292c44u, _esp0);
  ESP += 4; return;
L_11292c7c:;
  /* 11292c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11292c7e pop eax */
  EAX = (pop32());
  /* 11292c7f ret  */
  ESPCHK(0x11292c44u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c80 @ 0x11292c80 (117 bytes, 38 insns) */
void f_11292c80(void) {
  FTRACE(0x11292c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292c80 push ebx */
  push32((uint32_t)(EBX));
  /* 11292c81 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11292c83 cmp dword ptr [0x11296c10], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11296c10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292c89 push ebp */
  push32((uint32_t)(EBP));
  /* 11292c8a mov ebp, dword ptr [0x11295050] */
  EBP = (r32((uint32_t)(0x11295050)));
  /* 11292c90 jle 0x11292cd6 */
  if ((C.zf||C.sf!=C.of)) goto L_11292cd6;
  /* 11292c92 mov eax, dword ptr [0x11296c14] */
  EAX = (r32((uint32_t)(0x11296c14)));
  /* 11292c97 push esi */
  push32((uint32_t)(ESI));
  /* 11292c98 push edi */
  push32((uint32_t)(EDI));
  /* 11292c99 mov edi, dword ptr [0x11295054] */
  EDI = (r32((uint32_t)(0x11295054)));
  /* 11292c9f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11292ca2:;
  /* 11292ca2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11292ca7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11292cac push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11292cae call edi */
  call_ind((uint32_t)(EDI), 0x11292cb0u);
  /* 11292cb0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11292cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11292cb7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11292cb9 call edi */
  call_ind((uint32_t)(EDI), 0x11292cbbu);
  /* 11292cbb push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11292cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11292cc0 push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 11292cc6 call ebp */
  call_ind((uint32_t)(EBP), 0x11292cc8u);
  /* 11292cc8 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11292ccb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11292ccc cmp ebx, dword ptr [0x11296c10] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11296c10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292cd2 jl 0x11292ca2 */
  if ((C.sf!=C.of)) goto L_11292ca2;
  /* 11292cd4 pop edi */
  EDI = (pop32());
  /* 11292cd5 pop esi */
  ESI = (pop32());
L_11292cd6:;
  /* 11292cd6 push dword ptr [0x11296c14] */
  push32((uint32_t)(r32((uint32_t)(0x11296c14))));
  /* 11292cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 11292cde push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 11292ce4 call ebp */
  call_ind((uint32_t)(EBP), 0x11292ce6u);
  /* 11292ce6 push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 11292cec call dword ptr [0x1129505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129505c))), 0x11292cf2u);
  /* 11292cf2 pop ebp */
  EBP = (pop32());
  /* 11292cf3 pop ebx */
  EBX = (pop32());
  /* 11292cf4 ret  */
  ESPCHK(0x11292c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cf5 @ 0x11292cf5 (57 bytes, 18 insns) */
void f_11292cf5(void) {
  FTRACE(0x11292cf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292cf5 mov eax, dword ptr [0x11296a08] */
  EAX = (r32((uint32_t)(0x11296a08)));
  /* 11292cfa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292cfd je 0x11292d0c */
  if (C.zf) goto L_11292d0c;
  /* 11292cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292d01 jne 0x11292d2d */
  if (!C.zf) goto L_11292d2d;
  /* 11292d03 cmp dword ptr [0x11296a0c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11296a0c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292d0a jne 0x11292d2d */
  if (!C.zf) goto L_11292d2d;
L_11292d0c:;
  /* 11292d0c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11292d11 call 0x11292d2e */
  push32(0x11292d16u); f_11292d2e();
  /* 11292d16 mov eax, dword ptr [0x11296b5c] */
  EAX = (r32((uint32_t)(0x11296b5c)));
  /* 11292d1b pop ecx */
  ECX = (pop32());
  /* 11292d1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292d1e je 0x11292d22 */
  if (C.zf) goto L_11292d22;
  /* 11292d20 call eax */
  call_ind((uint32_t)(EAX), 0x11292d22u);
L_11292d22:;
  /* 11292d22 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11292d27 call 0x11292d2e */
  push32(0x11292d2cu); f_11292d2e();
  /* 11292d2c pop ecx */
  ECX = (pop32());
L_11292d2d:;
  /* 11292d2d ret  */
  ESPCHK(0x11292cf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d2e @ 0x11292d2e (339 bytes, 100 insns) */
void f_11292d2e(void) {
  FTRACE(0x11292d2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292d2e push ebp */
  push32((uint32_t)(EBP));
  /* 11292d2f mov ebp, esp */
  EBP = (ESP);
  /* 11292d31 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11292d37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11292d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11292d3c mov eax, 0x11296498 */
  EAX = (0x11296498u);
L_11292d41:;
  /* 11292d41 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292d43 je 0x11292d50 */
  if (C.zf) goto L_11292d50;
  /* 11292d45 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11292d48 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11292d49 cmp eax, 0x11296528 */
  { uint32_t _a=(EAX),_b=(0x11296528u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292d4e jl 0x11292d41 */
  if ((C.sf!=C.of)) goto L_11292d41;
L_11292d50:;
  /* 11292d50 push esi */
  push32((uint32_t)(ESI));
  /* 11292d51 mov esi, ecx */
  ESI = (ECX);
  /* 11292d53 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11292d56 cmp edx, dword ptr [esi + 0x11296498] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11296498))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292d5c jne 0x11292e7e */
  if (!C.zf) goto L_11292e7e;
  /* 11292d62 mov eax, dword ptr [0x11296a08] */
  EAX = (r32((uint32_t)(0x11296a08)));
  /* 11292d67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292d6a je 0x11292e58 */
  if (C.zf) goto L_11292e58;
  /* 11292d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292d72 jne 0x11292d81 */
  if (!C.zf) goto L_11292d81;
  /* 11292d74 cmp dword ptr [0x11296a0c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11296a0c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292d7b je 0x11292e58 */
  if (C.zf) goto L_11292e58;
L_11292d81:;
  /* 11292d81 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292d87 je 0x11292e7e */
  if (C.zf) goto L_11292e7e;
  /* 11292d8d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11292d93 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11292d98 push eax */
  push32((uint32_t)(EAX));
  /* 11292d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11292d9b call dword ptr [0x11295074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295074))), 0x11292da1u);
  /* 11292da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292da3 jne 0x11292db8 */
  if (!C.zf) goto L_11292db8;
  /* 11292da5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11292dab push 0x11295418 */
  push32((uint32_t)(0x11295418u));
  /* 11292db0 push eax */
  push32((uint32_t)(EAX));
  /* 11292db1 call 0x112930f0 */
  push32(0x11292db6u); f_112930f0();
  /* 11292db6 pop ecx */
  ECX = (pop32());
  /* 11292db7 pop ecx */
  ECX = (pop32());
L_11292db8:;
  /* 11292db8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11292dbe push edi */
  push32((uint32_t)(EDI));
  /* 11292dbf push eax */
  push32((uint32_t)(EAX));
  /* 11292dc0 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11292dc6 call 0x112931e0 */
  push32(0x11292dcbu); f_112931e0();
  /* 11292dcb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11292dcc pop ecx */
  ECX = (pop32());
  /* 11292dcd cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292dd0 jbe 0x11292dfb */
  if ((C.cf||C.zf)) goto L_11292dfb;
  /* 11292dd2 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11292dd8 push eax */
  push32((uint32_t)(EAX));
  /* 11292dd9 call 0x112931e0 */
  push32(0x11292ddeu); f_112931e0();
  /* 11292dde mov edi, eax */
  EDI = (EAX);
  /* 11292de0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11292de6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11292de9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11292deb add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11292ded push 0x11295414 */
  push32((uint32_t)(0x11295414u));
  /* 11292df2 push edi */
  push32((uint32_t)(EDI));
  /* 11292df3 call 0x11294260 */
  push32(0x11292df8u); f_11294260();
  /* 11292df8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11292dfb:;
  /* 11292dfb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11292e01 push 0x112953f8 */
  push32((uint32_t)(0x112953f8u));
  /* 11292e06 push eax */
  push32((uint32_t)(EAX));
  /* 11292e07 call 0x112930f0 */
  push32(0x11292e0cu); f_112930f0();
  /* 11292e0c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11292e12 push edi */
  push32((uint32_t)(EDI));
  /* 11292e13 push eax */
  push32((uint32_t)(EAX));
  /* 11292e14 call 0x11293100 */
  push32(0x11292e19u); f_11293100();
  /* 11292e19 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11292e1f push 0x112953f4 */
  push32((uint32_t)(0x112953f4u));
  /* 11292e24 push eax */
  push32((uint32_t)(EAX));
  /* 11292e25 call 0x11293100 */
  push32(0x11292e2au); f_11293100();
  /* 11292e2a push dword ptr [esi + 0x1129649c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1129649c))));
  /* 11292e30 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11292e36 push eax */
  push32((uint32_t)(EAX));
  /* 11292e37 call 0x11293100 */
  push32(0x11292e3cu); f_11293100();
  /* 11292e3c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11292e41 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11292e47 push 0x112953cc */
  push32((uint32_t)(0x112953ccu));
  /* 11292e4c push eax */
  push32((uint32_t)(EAX));
  /* 11292e4d call 0x112941ce */
  push32(0x11292e52u); f_112941ce();
  /* 11292e52 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11292e55 pop edi */
  EDI = (pop32());
  /* 11292e56 jmp 0x11292e7e */
  goto L_11292e7e;
L_11292e58:;
  /* 11292e58 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11292e5b lea esi, [esi + 0x1129649c] */
  ESI = ((uint32_t)(ESI + 0x1129649c));
  /* 11292e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11292e63 push eax */
  push32((uint32_t)(EAX));
  /* 11292e64 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11292e66 call 0x112931e0 */
  push32(0x11292e6bu); f_112931e0();
  /* 11292e6b pop ecx */
  ECX = (pop32());
  /* 11292e6c push eax */
  push32((uint32_t)(EAX));
  /* 11292e6d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11292e6f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11292e71 call dword ptr [0x11295098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295098))), 0x11292e77u);
  /* 11292e77 push eax */
  push32((uint32_t)(EAX));
  /* 11292e78 call dword ptr [0x1129504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129504c))), 0x11292e7eu);
L_11292e7e:;
  /* 11292e7e pop esi */
  ESI = (pop32());
  /* 11292e7f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11292e80 ret  */
  ESPCHK(0x11292d2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e81 @ 0x11292e81 (41 bytes, 12 insns) */
void f_11292e81(void) {
  FTRACE(0x11292e81u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292e81 push esi */
  push32((uint32_t)(ESI));
  /* 11292e82 mov esi, dword ptr [0x11295048] */
  ESI = (r32((uint32_t)(0x11295048)));
  /* 11292e88 push dword ptr [0x1129656c] */
  push32((uint32_t)(r32((uint32_t)(0x1129656c))));
  /* 11292e8e call esi */
  call_ind((uint32_t)(ESI), 0x11292e90u);
  /* 11292e90 push dword ptr [0x1129655c] */
  push32((uint32_t)(r32((uint32_t)(0x1129655c))));
  /* 11292e96 call esi */
  call_ind((uint32_t)(ESI), 0x11292e98u);
  /* 11292e98 push dword ptr [0x1129654c] */
  push32((uint32_t)(r32((uint32_t)(0x1129654c))));
  /* 11292e9e call esi */
  call_ind((uint32_t)(ESI), 0x11292ea0u);
  /* 11292ea0 push dword ptr [0x1129652c] */
  push32((uint32_t)(r32((uint32_t)(0x1129652c))));
  /* 11292ea6 call esi */
  call_ind((uint32_t)(ESI), 0x11292ea8u);
  /* 11292ea8 pop esi */
  ESI = (pop32());
  /* 11292ea9 ret  */
  ESPCHK(0x11292e81u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eaa @ 0x11292eaa (108 bytes, 34 insns) */
void f_11292eaa(void) {
  FTRACE(0x11292eaau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292eaa push esi */
  push32((uint32_t)(ESI));
  /* 11292eab push edi */
  push32((uint32_t)(EDI));
  /* 11292eac mov edi, dword ptr [0x11295078] */
  EDI = (r32((uint32_t)(0x11295078)));
  /* 11292eb2 mov esi, 0x11296528 */
  ESI = (0x11296528u);
L_11292eb7:;
  /* 11292eb7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11292eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292ebb je 0x11292ee8 */
  if (C.zf) goto L_11292ee8;
  /* 11292ebd cmp esi, 0x1129656c */
  { uint32_t _a=(ESI),_b=(0x1129656cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292ec3 je 0x11292ee8 */
  if (C.zf) goto L_11292ee8;
  /* 11292ec5 cmp esi, 0x1129655c */
  { uint32_t _a=(ESI),_b=(0x1129655cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292ecb je 0x11292ee8 */
  if (C.zf) goto L_11292ee8;
  /* 11292ecd cmp esi, 0x1129654c */
  { uint32_t _a=(ESI),_b=(0x1129654cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292ed3 je 0x11292ee8 */
  if (C.zf) goto L_11292ee8;
  /* 11292ed5 cmp esi, 0x1129652c */
  { uint32_t _a=(ESI),_b=(0x1129652cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292edb je 0x11292ee8 */
  if (C.zf) goto L_11292ee8;
  /* 11292edd push eax */
  push32((uint32_t)(EAX));
  /* 11292ede call edi */
  call_ind((uint32_t)(EDI), 0x11292ee0u);
  /* 11292ee0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11292ee2 call 0x11293019 */
  push32(0x11292ee7u); f_11293019();
  /* 11292ee7 pop ecx */
  ECX = (pop32());
L_11292ee8:;
  /* 11292ee8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11292eeb cmp esi, 0x112965e8 */
  { uint32_t _a=(ESI),_b=(0x112965e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292ef1 jl 0x11292eb7 */
  if ((C.sf!=C.of)) goto L_11292eb7;
  /* 11292ef3 push dword ptr [0x1129654c] */
  push32((uint32_t)(r32((uint32_t)(0x1129654c))));
  /* 11292ef9 call edi */
  call_ind((uint32_t)(EDI), 0x11292efbu);
  /* 11292efb push dword ptr [0x1129655c] */
  push32((uint32_t)(r32((uint32_t)(0x1129655c))));
  /* 11292f01 call edi */
  call_ind((uint32_t)(EDI), 0x11292f03u);
  /* 11292f03 push dword ptr [0x1129656c] */
  push32((uint32_t)(r32((uint32_t)(0x1129656c))));
  /* 11292f09 call edi */
  call_ind((uint32_t)(EDI), 0x11292f0bu);
  /* 11292f0b push dword ptr [0x1129652c] */
  push32((uint32_t)(r32((uint32_t)(0x1129652c))));
  /* 11292f11 call edi */
  call_ind((uint32_t)(EDI), 0x11292f13u);
  /* 11292f13 pop edi */
  EDI = (pop32());
  /* 11292f14 pop esi */
  ESI = (pop32());
  /* 11292f15 ret  */
  ESPCHK(0x11292eaau, _esp0);
  ESP += 4; return;
}

/* FUN_10002f16 @ 0x11292f16 (97 bytes, 37 insns) */
void f_11292f16(void) {
  FTRACE(0x11292f16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292f16 push ebp */
  push32((uint32_t)(EBP));
  /* 11292f17 mov ebp, esp */
  EBP = (ESP);
  /* 11292f19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11292f1c push esi */
  push32((uint32_t)(ESI));
  /* 11292f1d cmp dword ptr [eax*4 + 0x11296528], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11296528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292f25 lea esi, [eax*4 + 0x11296528] */
  ESI = ((uint32_t)(EAX*4 + 0x11296528));
  /* 11292f2c jne 0x11292f6c */
  if (!C.zf) goto L_11292f6c;
  /* 11292f2e push edi */
  push32((uint32_t)(EDI));
  /* 11292f2f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11292f31 call 0x11293061 */
  push32(0x11292f36u); f_11293061();
  /* 11292f36 mov edi, eax */
  EDI = (EAX);
  /* 11292f38 pop ecx */
  ECX = (pop32());
  /* 11292f39 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11292f3b jne 0x11292f45 */
  if (!C.zf) goto L_11292f45;
  /* 11292f3d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11292f3f call 0x11292386 */
  push32(0x11292f44u); f_11292386();
  /* 11292f44 pop ecx */
  ECX = (pop32());
L_11292f45:;
  /* 11292f45 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11292f47 call 0x11292f16 */
  push32(0x11292f4cu); f_11292f16();
  /* 11292f4c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292f4f pop ecx */
  ECX = (pop32());
  /* 11292f50 push edi */
  push32((uint32_t)(EDI));
  /* 11292f51 jne 0x11292f5d */
  if (!C.zf) goto L_11292f5d;
  /* 11292f53 call dword ptr [0x11295048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295048))), 0x11292f59u);
  /* 11292f59 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11292f5b jmp 0x11292f63 */
  goto L_11292f63;
L_11292f5d:;
  /* 11292f5d call 0x11293019 */
  push32(0x11292f62u); f_11293019();
  /* 11292f62 pop ecx */
  ECX = (pop32());
L_11292f63:;
  /* 11292f63 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11292f65 call 0x11292f77 */
  push32(0x11292f6au); f_11292f77();
  /* 11292f6a pop ecx */
  ECX = (pop32());
  /* 11292f6b pop edi */
  EDI = (pop32());
L_11292f6c:;
  /* 11292f6c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11292f6e call dword ptr [0x11295044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295044))), 0x11292f74u);
  /* 11292f74 pop esi */
  ESI = (pop32());
  /* 11292f75 pop ebp */
  EBP = (pop32());
  /* 11292f76 ret  */
  ESPCHK(0x11292f16u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f77 @ 0x11292f77 (21 bytes, 7 insns) */
void f_11292f77(void) {
  FTRACE(0x11292f77u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292f77 push ebp */
  push32((uint32_t)(EBP));
  /* 11292f78 mov ebp, esp */
  EBP = (ESP);
  /* 11292f7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11292f7d push dword ptr [eax*4 + 0x11296528] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11296528))));
  /* 11292f84 call dword ptr [0x11295040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295040))), 0x11292f8au);
  /* 11292f8a pop ebp */
  EBP = (pop32());
  /* 11292f8b ret  */
  ESPCHK(0x11292f77u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f8c @ 0x11292f8c (141 bytes, 56 insns) */
void f_11292f8c(void) {
  FTRACE(0x11292f8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11292f8c push ebx */
  push32((uint32_t)(EBX));
  /* 11292f8d push esi */
  push32((uint32_t)(ESI));
  /* 11292f8e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11292f92 push edi */
  push32((uint32_t)(EDI));
  /* 11292f93 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11292f98 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292f9b mov ebx, esi */
  EBX = (ESI);
  /* 11292f9d ja 0x11292fac */
  if ((!C.cf&&!C.zf)) goto L_11292fac;
  /* 11292f9f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11292fa1 jne 0x11292fa6 */
  if (!C.zf) goto L_11292fa6;
  /* 11292fa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11292fa5 pop esi */
  ESI = (pop32());
L_11292fa6:;
  /* 11292fa6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11292fa9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11292fac:;
  /* 11292fac xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11292fae cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292fb1 ja 0x11292fed */
  if ((!C.cf&&!C.zf)) goto L_11292fed;
  /* 11292fb3 cmp ebx, dword ptr [0x11296770] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11296770))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292fb9 ja 0x11292fd8 */
  if ((!C.cf&&!C.zf)) goto L_11292fd8;
  /* 11292fbb push 9 */
  push32((uint32_t)(0x9u));
  /* 11292fbd call 0x11292f16 */
  push32(0x11292fc2u); f_11292f16();
  /* 11292fc2 push ebx */
  push32((uint32_t)(EBX));
  /* 11292fc3 call 0x11293d19 */
  push32(0x11292fc8u); f_11293d19();
  /* 11292fc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11292fca mov edi, eax */
  EDI = (EAX);
  /* 11292fcc call 0x11292f77 */
  push32(0x11292fd1u); f_11292f77();
  /* 11292fd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11292fd4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11292fd6 jne 0x11293003 */
  if (!C.zf) goto L_11293003;
L_11292fd8:;
  /* 11292fd8 push esi */
  push32((uint32_t)(ESI));
  /* 11292fd9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11292fdb push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 11292fe1 call dword ptr [0x1129503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129503c))), 0x11292fe7u);
  /* 11292fe7 mov edi, eax */
  EDI = (EAX);
  /* 11292fe9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11292feb jne 0x1129300f */
  if (!C.zf) goto L_1129300f;
L_11292fed:;
  /* 11292fed cmp dword ptr [0x11296bd4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11296bd4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11292ff4 je 0x1129300f */
  if (C.zf) goto L_1129300f;
  /* 11292ff6 push esi */
  push32((uint32_t)(ESI));
  /* 11292ff7 call 0x112943b8 */
  push32(0x11292ffcu); f_112943b8();
  /* 11292ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11292ffe pop ecx */
  ECX = (pop32());
  /* 11292fff je 0x11293015 */
  if (C.zf) goto L_11293015;
  /* 11293001 jmp 0x11292fac */
  goto L_11292fac;
L_11293003:;
  /* 11293003 push ebx */
  push32((uint32_t)(EBX));
  /* 11293004 push 0 */
  push32((uint32_t)(0x0u));
  /* 11293006 push edi */
  push32((uint32_t)(EDI));
  /* 11293007 call 0x11294360 */
  push32(0x1129300cu); f_11294360();
  /* 1129300c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1129300f:;
  /* 1129300f mov eax, edi */
  EAX = (EDI);
L_11293011:;
  /* 11293011 pop edi */
  EDI = (pop32());
  /* 11293012 pop esi */
  ESI = (pop32());
  /* 11293013 pop ebx */
  EBX = (pop32());
  /* 11293014 ret  */
  ESPCHK(0x11292f8cu, _esp0);
  ESP += 4; return;
L_11293015:;
  /* 11293015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11293017 jmp 0x11293011 */
  goto L_11293011;
}

/* FUN_10003019 @ 0x11293019 (72 bytes, 29 insns) */
void f_11293019(void) {
  FTRACE(0x11293019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293019 push esi */
  push32((uint32_t)(ESI));
  /* 1129301a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1129301e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11293020 je 0x1129305f */
  if (C.zf) goto L_1129305f;
  /* 11293022 push 9 */
  push32((uint32_t)(0x9u));
  /* 11293024 call 0x11292f16 */
  push32(0x11293029u); f_11292f16();
  /* 11293029 push esi */
  push32((uint32_t)(ESI));
  /* 1129302a call 0x112939c3 */
  push32(0x1129302fu); f_112939c3();
  /* 1129302f pop ecx */
  ECX = (pop32());
  /* 11293030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11293032 pop ecx */
  ECX = (pop32());
  /* 11293033 je 0x11293048 */
  if (C.zf) goto L_11293048;
  /* 11293035 push esi */
  push32((uint32_t)(ESI));
  /* 11293036 push eax */
  push32((uint32_t)(EAX));
  /* 11293037 call 0x112939ee */
  push32(0x1129303cu); f_112939ee();
  /* 1129303c push 9 */
  push32((uint32_t)(0x9u));
  /* 1129303e call 0x11292f77 */
  push32(0x11293043u); f_11292f77();
  /* 11293043 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11293046 pop esi */
  ESI = (pop32());
  /* 11293047 ret  */
  ESPCHK(0x11293019u, _esp0);
  ESP += 4; return;
L_11293048:;
  /* 11293048 push 9 */
  push32((uint32_t)(0x9u));
  /* 1129304a call 0x11292f77 */
  push32(0x1129304fu); f_11292f77();
  /* 1129304f pop ecx */
  ECX = (pop32());
  /* 11293050 push esi */
  push32((uint32_t)(ESI));
  /* 11293051 push 0 */
  push32((uint32_t)(0x0u));
  /* 11293053 push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 11293059 call dword ptr [0x11295050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295050))), 0x1129305fu);
L_1129305f:;
  /* 1129305f pop esi */
  ESI = (pop32());
  /* 11293060 ret  */
  ESPCHK(0x11293019u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11293061 (18 bytes, 6 insns) */
void f_11293061(void) {
  FTRACE(0x11293061u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293061 push dword ptr [0x11296bd4] */
  push32((uint32_t)(r32((uint32_t)(0x11296bd4))));
  /* 11293067 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1129306b call 0x11293073 */
  push32(0x11293070u); f_11293073();
  /* 11293070 pop ecx */
  ECX = (pop32());
  /* 11293071 pop ecx */
  ECX = (pop32());
  /* 11293072 ret  */
  ESPCHK(0x11293061u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11293073 (44 bytes, 16 insns) */
void f_11293073(void) {
  FTRACE(0x11293073u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293073 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293078 ja 0x1129309c */
  if ((!C.cf&&!C.zf)) goto L_1129309c;
L_1129307a:;
  /* 1129307a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1129307e call 0x1129309f */
  push32(0x11293083u); f_1129309f();
  /* 11293083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11293085 pop ecx */
  ECX = (pop32());
  /* 11293086 jne 0x1129309e */
  if (!C.zf) goto L_1129309e;
  /* 11293088 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129308c je 0x1129309e */
  if (C.zf) goto L_1129309e;
  /* 1129308e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11293092 call 0x112943b8 */
  push32(0x11293097u); f_112943b8();
  /* 11293097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11293099 pop ecx */
  ECX = (pop32());
  /* 1129309a jne 0x1129307a */
  if (!C.zf) goto L_1129307a;
L_1129309c:;
  /* 1129309c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1129309e:;
  /* 1129309e ret  */
  ESPCHK(0x11293073u, _esp0);
  ESP += 4; return;
}

/* FUN_1000309f @ 0x1129309f (78 bytes, 30 insns) */
void f_1129309f(void) {
  FTRACE(0x1129309fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1129309f push esi */
  push32((uint32_t)(ESI));
  /* 112930a0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112930a4 cmp esi, dword ptr [0x11296770] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11296770))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112930aa push edi */
  push32((uint32_t)(EDI));
  /* 112930ab ja 0x112930ce */
  if ((!C.cf&&!C.zf)) goto L_112930ce;
  /* 112930ad push 9 */
  push32((uint32_t)(0x9u));
  /* 112930af call 0x11292f16 */
  push32(0x112930b4u); f_11292f16();
  /* 112930b4 push esi */
  push32((uint32_t)(ESI));
  /* 112930b5 call 0x11293d19 */
  push32(0x112930bau); f_11293d19();
  /* 112930ba push 9 */
  push32((uint32_t)(0x9u));
  /* 112930bc mov edi, eax */
  EDI = (EAX);
  /* 112930be call 0x11292f77 */
  push32(0x112930c3u); f_11292f77();
  /* 112930c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112930c6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112930c8 je 0x112930ce */
  if (C.zf) goto L_112930ce;
  /* 112930ca mov eax, edi */
  EAX = (EDI);
  /* 112930cc jmp 0x112930ea */
  goto L_112930ea;
L_112930ce:;
  /* 112930ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112930d0 jne 0x112930d5 */
  if (!C.zf) goto L_112930d5;
  /* 112930d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112930d4 pop esi */
  ESI = (pop32());
L_112930d5:;
  /* 112930d5 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112930d8 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 112930db push esi */
  push32((uint32_t)(ESI));
  /* 112930dc push 0 */
  push32((uint32_t)(0x0u));
  /* 112930de push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 112930e4 call dword ptr [0x1129503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129503c))), 0x112930eau);
L_112930ea:;
  /* 112930ea pop edi */
  EDI = (pop32());
  /* 112930eb pop esi */
  ESI = (pop32());
  /* 112930ec ret  */
  ESPCHK(0x1129309fu, _esp0);
  ESP += 4; return;
}

/* FUN_100030f0 @ 0x112930f0 (7 bytes, 3 insns) */
void f_112930f0(void) {
  FTRACE(0x112930f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112930f0 push edi */
  push32((uint32_t)(EDI));
  /* 112930f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 112930f5 jmp 0x11293161 */
  jmp_ind(0x11293161u); return;
}

/* FUN_10003100 @ 0x11293100 (224 bytes, 84 insns) */
void f_11293100(void) {
  FTRACE(0x11293100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293100 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11293104 push edi */
  push32((uint32_t)(EDI));
  /* 11293105 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1129310b je 0x1129311c */
  if (C.zf) goto L_1129311c;
L_1129310d:;
  /* 1129310d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1129310f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11293110 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11293112 je 0x1129314f */
  if (C.zf) goto L_1129314f;
  /* 11293114 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1129311a jne 0x1129310d */
  if (!C.zf) goto L_1129310d;
L_1129311c:;
  /* 1129311c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1129311e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11293123 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293125 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11293128 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1129312a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1129312d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11293132 je 0x1129311c */
  if (C.zf) goto L_1129311c;
  /* 11293134 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11293137 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11293139 je 0x1129315e */
  if (C.zf) goto L_1129315e;
  /* 1129313b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1129313d je 0x11293159 */
  if (C.zf) goto L_11293159;
  /* 1129313f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11293144 je 0x11293154 */
  if (C.zf) goto L_11293154;
  /* 11293146 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1129314b je 0x1129314f */
  if (C.zf) goto L_1129314f;
  /* 1129314d jmp 0x1129311c */
  goto L_1129311c;
L_1129314f:;
  /* 1129314f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11293152 jmp 0x11293161 */
  goto L_11293161;
L_11293154:;
  /* 11293154 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11293157 jmp 0x11293161 */
  goto L_11293161;
L_11293159:;
  /* 11293159 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1129315c jmp 0x11293161 */
  goto L_11293161;
L_1129315e:;
  /* 1129315e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11293161:;
  /* 11293161 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11293165 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1129316b je 0x11293186 */
  if (C.zf) goto L_11293186;
L_1129316d:;
  /* 1129316d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1129316f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11293170 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11293172 je 0x112931d8 */
  if (C.zf) goto L_112931d8;
  /* 11293174 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11293176 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11293177 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1129317d jne 0x1129316d */
  if (!C.zf) goto L_1129316d;
  /* 1129317f jmp 0x11293186 */
  goto L_11293186;
L_11293181:;
  /* 11293181 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11293183 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11293186:;
  /* 11293186 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1129318b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1129318d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1129318f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11293192 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11293194 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11293196 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293199 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1129319e je 0x11293181 */
  if (C.zf) goto L_11293181;
  /* 112931a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112931a2 je 0x112931d8 */
  if (C.zf) goto L_112931d8;
  /* 112931a4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 112931a6 je 0x112931cf */
  if (C.zf) goto L_112931cf;
  /* 112931a8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 112931ae je 0x112931c2 */
  if (C.zf) goto L_112931c2;
  /* 112931b0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 112931b6 je 0x112931ba */
  if (C.zf) goto L_112931ba;
  /* 112931b8 jmp 0x11293181 */
  goto L_11293181;
L_112931ba:;
  /* 112931ba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112931bc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112931c0 pop edi */
  EDI = (pop32());
  /* 112931c1 ret  */
  ESPCHK(0x11293100u, _esp0);
  ESP += 4; return;
L_112931c2:;
  /* 112931c2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 112931c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112931c9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 112931cd pop edi */
  EDI = (pop32());
  /* 112931ce ret  */
  ESPCHK(0x11293100u, _esp0);
  ESP += 4; return;
L_112931cf:;
  /* 112931cf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 112931d2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112931d6 pop edi */
  EDI = (pop32());
  /* 112931d7 ret  */
  ESPCHK(0x11293100u, _esp0);
  ESP += 4; return;
L_112931d8:;
  /* 112931d8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 112931da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112931de pop edi */
  EDI = (pop32());
  /* 112931df ret  */
  ESPCHK(0x11293100u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x112931e0 (123 bytes, 44 insns) */
void f_112931e0(void) {
  FTRACE(0x112931e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112931e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112931e4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112931ea je 0x11293200 */
  if (C.zf) goto L_11293200;
L_112931ec:;
  /* 112931ec mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 112931ee inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112931ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112931f1 je 0x11293233 */
  if (C.zf) goto L_11293233;
  /* 112931f3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 112931f9 jne 0x112931ec */
  if (!C.zf) goto L_112931ec;
  /* 112931fb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11293200:;
  /* 11293200 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11293202 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11293207 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293209 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1129320c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1129320e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293211 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11293216 je 0x11293200 */
  if (C.zf) goto L_11293200;
  /* 11293218 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1129321b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1129321d je 0x11293251 */
  if (C.zf) goto L_11293251;
  /* 1129321f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11293221 je 0x11293247 */
  if (C.zf) goto L_11293247;
  /* 11293223 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11293228 je 0x1129323d */
  if (C.zf) goto L_1129323d;
  /* 1129322a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1129322f je 0x11293233 */
  if (C.zf) goto L_11293233;
  /* 11293231 jmp 0x11293200 */
  goto L_11293200;
L_11293233:;
  /* 11293233 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11293236 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1129323a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129323c ret  */
  ESPCHK(0x112931e0u, _esp0);
  ESP += 4; return;
L_1129323d:;
  /* 1129323d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11293240 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11293244 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293246 ret  */
  ESPCHK(0x112931e0u, _esp0);
  ESP += 4; return;
L_11293247:;
  /* 11293247 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1129324a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1129324e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293250 ret  */
  ESPCHK(0x112931e0u, _esp0);
  ESP += 4; return;
L_11293251:;
  /* 11293251 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11293254 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11293258 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129325a ret  */
  ESPCHK(0x112931e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000325b @ 0x1129325b (429 bytes, 143 insns) */
void f_1129325b(void) {
  FTRACE(0x1129325bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1129325b push ebp */
  push32((uint32_t)(EBP));
  /* 1129325c mov ebp, esp */
  EBP = (ESP);
  /* 1129325e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293261 push ebx */
  push32((uint32_t)(EBX));
  /* 11293262 push esi */
  push32((uint32_t)(ESI));
  /* 11293263 push edi */
  push32((uint32_t)(EDI));
  /* 11293264 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11293266 call 0x11292f16 */
  push32(0x1129326bu); f_11292f16();
  /* 1129326b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1129326e call 0x11293408 */
  push32(0x11293273u); f_11293408();
  /* 11293273 mov ebx, eax */
  EBX = (EAX);
  /* 11293275 pop ecx */
  ECX = (pop32());
  /* 11293276 cmp ebx, dword ptr [0x11296c18] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11296c18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129327c pop ecx */
  ECX = (pop32());
  /* 1129327d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11293280 jne 0x11293289 */
  if (!C.zf) goto L_11293289;
L_11293282:;
  /* 11293282 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11293284 jmp 0x112933f9 */
  goto L_112933f9;
L_11293289:;
  /* 11293289 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1129328b je 0x112933e7 */
  if (C.zf) goto L_112933e7;
  /* 11293291 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11293293 mov eax, 0x11296678 */
  EAX = (0x11296678u);
L_11293298:;
  /* 11293298 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129329a je 0x11293310 */
  if (C.zf) goto L_11293310;
  /* 1129329c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1129329f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112932a0 cmp eax, 0x11296768 */
  { uint32_t _a=(EAX),_b=(0x11296768u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112932a5 jl 0x11293298 */
  if ((C.sf!=C.of)) goto L_11293298;
  /* 112932a7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 112932aa push eax */
  push32((uint32_t)(EAX));
  /* 112932ab push ebx */
  push32((uint32_t)(EBX));
  /* 112932ac call dword ptr [0x11295038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295038))), 0x112932b2u);
  /* 112932b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112932b4 pop esi */
  ESI = (pop32());
  /* 112932b5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112932b7 jne 0x112933de */
  if (!C.zf) goto L_112933de;
  /* 112932bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112932bf and dword ptr [0x11296e44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11296e44)))&(0x0u); w32((uint32_t)(0x11296e44), (_r)); fl_logic(_r,32); }
  /* 112932c6 pop ecx */
  ECX = (pop32());
  /* 112932c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112932c9 mov edi, 0x11296d40 */
  EDI = (0x11296d40u);
  /* 112932ce cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112932d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112932d3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 112932d4 mov dword ptr [0x11296c18], ebx */
  w32((uint32_t)(0x11296c18), (EBX));
  /* 112932da jbe 0x112933cb */
  if ((C.cf||C.zf)) goto L_112933cb;
  /* 112932e0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112932e4 je 0x112933a6 */
  if (C.zf) goto L_112933a6;
  /* 112932ea lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_112932ed:;
  /* 112932ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112932ef test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112932f1 je 0x112933a6 */
  if (C.zf) goto L_112933a6;
  /* 112932f7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 112932fb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_112932fe:;
  /* 112932fe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293300 ja 0x1129339a */
  if ((!C.cf&&!C.zf)) goto L_1129339a;
  /* 11293306 or byte ptr [eax + 0x11296d41], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296d41)))|(0x4u); w8((uint32_t)(EAX + 0x11296d41), (_r)); fl_logic(_r,8); }
  /* 1129330d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1129330e jmp 0x112932fe */
  goto L_112932fe;
L_11293310:;
  /* 11293310 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11293314 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11293316 pop ecx */
  ECX = (pop32());
  /* 11293317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11293319 mov edi, 0x11296d40 */
  EDI = (0x11296d40u);
  /* 1129331e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11293321 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11293323 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11293326 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11293327 lea ebx, [esi + 0x11296688] */
  EBX = ((uint32_t)(ESI + 0x11296688));
L_1129332d:;
  /* 1129332d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11293330 mov ecx, ebx */
  ECX = (EBX);
  /* 11293332 je 0x11293360 */
  if (C.zf) goto L_11293360;
L_11293334:;
  /* 11293334 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11293337 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11293339 je 0x11293360 */
  if (C.zf) goto L_11293360;
  /* 1129333b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1129333e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11293341 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293343 ja 0x11293359 */
  if ((!C.cf&&!C.zf)) goto L_11293359;
  /* 11293345 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11293348 mov dl, byte ptr [edx + 0x11296670] */
  DL = (r8((uint32_t)(EDX + 0x11296670)));
L_1129334e:;
  /* 1129334e or byte ptr [eax + 0x11296d41], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296d41)))|(DL); w8((uint32_t)(EAX + 0x11296d41), (_r)); fl_logic(_r,8); }
  /* 11293354 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11293355 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293357 jbe 0x1129334e */
  if ((C.cf||C.zf)) goto L_1129334e;
L_11293359:;
  /* 11293359 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1129335a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1129335b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1129335e jne 0x11293334 */
  if (!C.zf) goto L_11293334;
L_11293360:;
  /* 11293360 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11293363 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293366 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129336a jb 0x1129332d */
  if (C.cf) goto L_1129332d;
  /* 1129336c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1129336f mov dword ptr [0x11296c2c], 1 */
  w32((uint32_t)(0x11296c2c), (0x1u));
  /* 11293379 push eax */
  push32((uint32_t)(EAX));
  /* 1129337a mov dword ptr [0x11296c18], eax */
  w32((uint32_t)(0x11296c18), (EAX));
  /* 1129337f call 0x11293452 */
  push32(0x11293384u); f_11293452();
  /* 11293384 lea esi, [esi + 0x1129667c] */
  ESI = ((uint32_t)(ESI + 0x1129667c));
  /* 1129338a mov edi, 0x11296c20 */
  EDI = (0x11296c20u);
  /* 1129338f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11293390 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11293391 pop ecx */
  ECX = (pop32());
  /* 11293392 mov dword ptr [0x11296e44], eax */
  w32((uint32_t)(0x11296e44), (EAX));
  /* 11293397 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11293398 jmp 0x112933ec */
  goto L_112933ec;
L_1129339a:;
  /* 1129339a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1129339b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1129339c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112933a0 jne 0x112932ed */
  if (!C.zf) goto L_112932ed;
L_112933a6:;
  /* 112933a6 mov eax, esi */
  EAX = (ESI);
L_112933a8:;
  /* 112933a8 or byte ptr [eax + 0x11296d41], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296d41)))|(0x8u); w8((uint32_t)(EAX + 0x11296d41), (_r)); fl_logic(_r,8); }
  /* 112933af inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112933b0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112933b5 jb 0x112933a8 */
  if (C.cf) goto L_112933a8;
  /* 112933b7 push ebx */
  push32((uint32_t)(EBX));
  /* 112933b8 call 0x11293452 */
  push32(0x112933bdu); f_11293452();
  /* 112933bd pop ecx */
  ECX = (pop32());
  /* 112933be mov dword ptr [0x11296e44], eax */
  w32((uint32_t)(0x11296e44), (EAX));
  /* 112933c3 mov dword ptr [0x11296c2c], esi */
  w32((uint32_t)(0x11296c2c), (ESI));
  /* 112933c9 jmp 0x112933d2 */
  goto L_112933d2;
L_112933cb:;
  /* 112933cb and dword ptr [0x11296c2c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11296c2c)))&(0x0u); w32((uint32_t)(0x11296c2c), (_r)); fl_logic(_r,32); }
L_112933d2:;
  /* 112933d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112933d4 mov edi, 0x11296c20 */
  EDI = (0x11296c20u);
  /* 112933d9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112933da stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112933db stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112933dc jmp 0x112933ec */
  goto L_112933ec;
L_112933de:;
  /* 112933de cmp dword ptr [0x11296bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11296bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112933e5 je 0x112933f6 */
  if (C.zf) goto L_112933f6;
L_112933e7:;
  /* 112933e7 call 0x11293485 */
  push32(0x112933ecu); f_11293485();
L_112933ec:;
  /* 112933ec call 0x112934ae */
  push32(0x112933f1u); f_112934ae();
  /* 112933f1 jmp 0x11293282 */
  goto L_11293282;
L_112933f6:;
  /* 112933f6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_112933f9:;
  /* 112933f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 112933fb call 0x11292f77 */
  push32(0x11293400u); f_11292f77();
  /* 11293400 pop ecx */
  ECX = (pop32());
  /* 11293401 mov eax, esi */
  EAX = (ESI);
  /* 11293403 pop edi */
  EDI = (pop32());
  /* 11293404 pop esi */
  ESI = (pop32());
  /* 11293405 pop ebx */
  EBX = (pop32());
  /* 11293406 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11293407 ret  */
  ESPCHK(0x1129325bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003408 @ 0x11293408 (74 bytes, 15 insns) */
void f_11293408(void) {
  FTRACE(0x11293408u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293408 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1129340c and dword ptr [0x11296bc0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11296bc0)))&(0x0u); w32((uint32_t)(0x11296bc0), (_r)); fl_logic(_r,32); }
  /* 11293413 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293416 jne 0x11293428 */
  if (!C.zf) goto L_11293428;
  /* 11293418 mov dword ptr [0x11296bc0], 1 */
  w32((uint32_t)(0x11296bc0), (0x1u));
  /* 11293422 jmp dword ptr [0x11295030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11295030)))); return;
L_11293428:;
  /* 11293428 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129342b jne 0x1129343d */
  if (!C.zf) goto L_1129343d;
  /* 1129342d mov dword ptr [0x11296bc0], 1 */
  w32((uint32_t)(0x11296bc0), (0x1u));
  /* 11293437 jmp dword ptr [0x11295034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11295034)))); return;
L_1129343d:;
  /* 1129343d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293440 jne 0x11293451 */
  if (!C.zf) goto L_11293451;
  /* 11293442 mov eax, dword ptr [0x11296bf0] */
  EAX = (r32((uint32_t)(0x11296bf0)));
  /* 11293447 mov dword ptr [0x11296bc0], 1 */
  w32((uint32_t)(0x11296bc0), (0x1u));
L_11293451:;
  /* 11293451 ret  */
  ESPCHK(0x11293408u, _esp0);
  ESP += 4; return;
}

/* FUN_10003452 @ 0x11293452 (51 bytes, 19 insns) */
void f_11293452(void) {
  FTRACE(0x11293452u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293452 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11293456 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129345b je 0x1129347f */
  if (C.zf) goto L_1129347f;
  /* 1129345d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293460 je 0x11293479 */
  if (C.zf) goto L_11293479;
  /* 11293462 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293465 je 0x11293473 */
  if (C.zf) goto L_11293473;
  /* 11293467 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11293468 je 0x1129346d */
  if (C.zf) goto L_1129346d;
  /* 1129346a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1129346c ret  */
  ESPCHK(0x11293452u, _esp0);
  ESP += 4; return;
L_1129346d:;
  /* 1129346d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11293472 ret  */
  ESPCHK(0x11293452u, _esp0);
  ESP += 4; return;
L_11293473:;
  /* 11293473 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11293478 ret  */
  ESPCHK(0x11293452u, _esp0);
  ESP += 4; return;
L_11293479:;
  /* 11293479 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1129347e ret  */
  ESPCHK(0x11293452u, _esp0);
  ESP += 4; return;
L_1129347f:;
  /* 1129347f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11293484 ret  */
  ESPCHK(0x11293452u, _esp0);
  ESP += 4; return;
}

/* FUN_10003485 @ 0x11293485 (41 bytes, 17 insns) */
void f_11293485(void) {
  FTRACE(0x11293485u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293485 push edi */
  push32((uint32_t)(EDI));
  /* 11293486 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11293488 pop ecx */
  ECX = (pop32());
  /* 11293489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1129348b mov edi, 0x11296d40 */
  EDI = (0x11296d40u);
  /* 11293490 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11293492 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11293493 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11293495 mov edi, 0x11296c20 */
  EDI = (0x11296c20u);
  /* 1129349a mov dword ptr [0x11296c18], eax */
  w32((uint32_t)(0x11296c18), (EAX));
  /* 1129349f mov dword ptr [0x11296c2c], eax */
  w32((uint32_t)(0x11296c2c), (EAX));
  /* 112934a4 mov dword ptr [0x11296e44], eax */
  w32((uint32_t)(0x11296e44), (EAX));
  /* 112934a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112934aa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112934ab stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 112934ac pop edi */
  EDI = (pop32());
  /* 112934ad ret  */
  ESPCHK(0x11293485u, _esp0);
  ESP += 4; return;
}

/* FUN_100034ae @ 0x112934ae (389 bytes, 124 insns) */
void f_112934ae(void) {
  FTRACE(0x112934aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112934ae push ebp */
  push32((uint32_t)(EBP));
  /* 112934af mov ebp, esp */
  EBP = (ESP);
  /* 112934b1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112934b7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 112934ba push esi */
  push32((uint32_t)(ESI));
  /* 112934bb push eax */
  push32((uint32_t)(EAX));
  /* 112934bc push dword ptr [0x11296c18] */
  push32((uint32_t)(r32((uint32_t)(0x11296c18))));
  /* 112934c2 call dword ptr [0x11295038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295038))), 0x112934c8u);
  /* 112934c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112934cb jne 0x112935e7 */
  if (!C.zf) goto L_112935e7;
  /* 112934d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112934d3 mov esi, 0x100 */
  ESI = (0x100u);
L_112934d8:;
  /* 112934d8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 112934df inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112934e0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112934e2 jb 0x112934d8 */
  if (C.cf) goto L_112934d8;
  /* 112934e4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 112934e7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 112934ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112934f0 je 0x11293529 */
  if (C.zf) goto L_11293529;
  /* 112934f2 push ebx */
  push32((uint32_t)(EBX));
  /* 112934f3 push edi */
  push32((uint32_t)(EDI));
  /* 112934f4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_112934f7:;
  /* 112934f7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 112934fa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 112934fd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112934ff ja 0x1129351e */
  if ((!C.cf&&!C.zf)) goto L_1129351e;
  /* 11293501 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293503 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1129350a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1129350b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11293510 mov ebx, ecx */
  EBX = (ECX);
  /* 11293512 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11293515 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11293517 mov ecx, ebx */
  ECX = (EBX);
  /* 11293519 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1129351c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1129351e:;
  /* 1129351e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1129351f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11293520 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11293523 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11293525 jne 0x112934f7 */
  if (!C.zf) goto L_112934f7;
  /* 11293527 pop edi */
  EDI = (pop32());
  /* 11293528 pop ebx */
  EBX = (pop32());
L_11293529:;
  /* 11293529 push 0 */
  push32((uint32_t)(0x0u));
  /* 1129352b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11293531 push dword ptr [0x11296e44] */
  push32((uint32_t)(r32((uint32_t)(0x11296e44))));
  /* 11293537 push dword ptr [0x11296c18] */
  push32((uint32_t)(r32((uint32_t)(0x11296c18))));
  /* 1129353d push eax */
  push32((uint32_t)(EAX));
  /* 1129353e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11293544 push esi */
  push32((uint32_t)(ESI));
  /* 11293545 push eax */
  push32((uint32_t)(EAX));
  /* 11293546 push 1 */
  push32((uint32_t)(0x1u));
  /* 11293548 call 0x11294622 */
  push32(0x1129354du); f_11294622();
  /* 1129354d push 0 */
  push32((uint32_t)(0x0u));
  /* 1129354f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11293555 push dword ptr [0x11296c18] */
  push32((uint32_t)(r32((uint32_t)(0x11296c18))));
  /* 1129355b push esi */
  push32((uint32_t)(ESI));
  /* 1129355c push eax */
  push32((uint32_t)(EAX));
  /* 1129355d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11293563 push esi */
  push32((uint32_t)(ESI));
  /* 11293564 push eax */
  push32((uint32_t)(EAX));
  /* 11293565 push esi */
  push32((uint32_t)(ESI));
  /* 11293566 push dword ptr [0x11296e44] */
  push32((uint32_t)(r32((uint32_t)(0x11296e44))));
  /* 1129356c call 0x112943d3 */
  push32(0x11293571u); f_112943d3();
  /* 11293571 push 0 */
  push32((uint32_t)(0x0u));
  /* 11293573 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11293579 push dword ptr [0x11296c18] */
  push32((uint32_t)(r32((uint32_t)(0x11296c18))));
  /* 1129357f push esi */
  push32((uint32_t)(ESI));
  /* 11293580 push eax */
  push32((uint32_t)(EAX));
  /* 11293581 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11293587 push esi */
  push32((uint32_t)(ESI));
  /* 11293588 push eax */
  push32((uint32_t)(EAX));
  /* 11293589 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1129358e push dword ptr [0x11296e44] */
  push32((uint32_t)(r32((uint32_t)(0x11296e44))));
  /* 11293594 call 0x112943d3 */
  push32(0x11293599u); f_112943d3();
  /* 11293599 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1129359c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1129359e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_112935a4:;
  /* 112935a4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 112935a7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 112935aa je 0x112935c2 */
  if (C.zf) goto L_112935c2;
  /* 112935ac or byte ptr [eax + 0x11296d41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296d41)))|(0x10u); w8((uint32_t)(EAX + 0x11296d41), (_r)); fl_logic(_r,8); }
  /* 112935b3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_112935ba:;
  /* 112935ba mov byte ptr [eax + 0x11296c40], dl */
  w8((uint32_t)(EAX + 0x11296c40), (DL));
  /* 112935c0 jmp 0x112935de */
  goto L_112935de;
L_112935c2:;
  /* 112935c2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 112935c5 je 0x112935d7 */
  if (C.zf) goto L_112935d7;
  /* 112935c7 or byte ptr [eax + 0x11296d41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296d41)))|(0x20u); w8((uint32_t)(EAX + 0x11296d41), (_r)); fl_logic(_r,8); }
  /* 112935ce mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 112935d5 jmp 0x112935ba */
  goto L_112935ba;
L_112935d7:;
  /* 112935d7 and byte ptr [eax + 0x11296c40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296c40)))&(0x0u); w8((uint32_t)(EAX + 0x11296c40), (_r)); fl_logic(_r,8); }
L_112935de:;
  /* 112935de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112935df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112935e0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112935e1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112935e3 jb 0x112935a4 */
  if (C.cf) goto L_112935a4;
  /* 112935e5 jmp 0x11293630 */
  goto L_11293630;
L_112935e7:;
  /* 112935e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112935e9 mov esi, 0x100 */
  ESI = (0x100u);
L_112935ee:;
  /* 112935ee cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112935f1 jb 0x1129360c */
  if (C.cf) goto L_1129360c;
  /* 112935f3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112935f6 ja 0x1129360c */
  if ((!C.cf&&!C.zf)) goto L_1129360c;
  /* 112935f8 or byte ptr [eax + 0x11296d41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296d41)))|(0x10u); w8((uint32_t)(EAX + 0x11296d41), (_r)); fl_logic(_r,8); }
  /* 112935ff mov cl, al */
  CL = (AL);
  /* 11293601 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11293604:;
  /* 11293604 mov byte ptr [eax + 0x11296c40], cl */
  w8((uint32_t)(EAX + 0x11296c40), (CL));
  /* 1129360a jmp 0x1129362b */
  goto L_1129362b;
L_1129360c:;
  /* 1129360c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129360f jb 0x11293624 */
  if (C.cf) goto L_11293624;
  /* 11293611 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293614 ja 0x11293624 */
  if ((!C.cf&&!C.zf)) goto L_11293624;
  /* 11293616 or byte ptr [eax + 0x11296d41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296d41)))|(0x20u); w8((uint32_t)(EAX + 0x11296d41), (_r)); fl_logic(_r,8); }
  /* 1129361d mov cl, al */
  CL = (AL);
  /* 1129361f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11293622 jmp 0x11293604 */
  goto L_11293604;
L_11293624:;
  /* 11293624 and byte ptr [eax + 0x11296c40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11296c40)))&(0x0u); w8((uint32_t)(EAX + 0x11296c40), (_r)); fl_logic(_r,8); }
L_1129362b:;
  /* 1129362b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1129362c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129362e jb 0x112935ee */
  if (C.cf) goto L_112935ee;
L_11293630:;
  /* 11293630 pop esi */
  ESI = (pop32());
  /* 11293631 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11293632 ret  */
  ESPCHK(0x112934aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003633 @ 0x11293633 (28 bytes, 7 insns) */
void f_11293633(void) {
  FTRACE(0x11293633u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293633 cmp dword ptr [0x11296f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11296f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129363a jne 0x1129364e */
  if (!C.zf) goto L_1129364e;
  /* 1129363c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1129363e call 0x1129325b */
  push32(0x11293643u); f_1129325b();
  /* 11293643 pop ecx */
  ECX = (pop32());
  /* 11293644 mov dword ptr [0x11296f68], 1 */
  w32((uint32_t)(0x11296f68), (0x1u));
L_1129364e:;
  /* 1129364e ret  */
  ESPCHK(0x11293633u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x11293650 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11293650(void) {
  FTRACE(0x11293650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293650 push ebp */
  push32((uint32_t)(EBP));
  /* 11293651 mov ebp, esp */
  EBP = (ESP);
  /* 11293653 push edi */
  push32((uint32_t)(EDI));
  /* 11293654 push esi */
  push32((uint32_t)(ESI));
  /* 11293655 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11293658 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1129365b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1129365e mov eax, ecx */
  EAX = (ECX);
  /* 11293660 mov edx, ecx */
  EDX = (ECX);
  /* 11293662 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293664 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293666 jbe 0x11293670 */
  if ((C.cf||C.zf)) goto L_11293670;
  /* 11293668 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129366a jb 0x112937e8 */
  if (C.cf) goto L_112937e8;
L_11293670:;
  /* 11293670 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11293676 jne 0x1129368c */
  if (!C.zf) goto L_1129368c;
  /* 11293678 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1129367b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1129367e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293681 jb 0x112936ac */
  if (C.cf) goto L_112936ac;
  /* 11293683 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11293685 jmp dword ptr [edx*4 + 0x11293798] */
  switch (EDX) {
    case 0: goto L_112937a8;
    case 1: goto L_112937b0;
    case 2: goto L_112937bc;
    case 3: goto L_112937d0;
    default: x86_unimpl("switch@0x11293685 out of table"); return;
  }
L_1129368c:;
  /* 1129368c mov eax, edi */
  EAX = (EDI);
  /* 1129368e mov edx, 3 */
  EDX = (0x3u);
  /* 11293693 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293696 jb 0x112936a4 */
  if (C.cf) goto L_112936a4;
  /* 11293698 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1129369b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1129369d jmp dword ptr [eax*4 + 0x112936b0] */
  switch (EAX) {
    case 1: goto L_112936c0;
    case 2: goto L_112936ec;
    case 3: goto L_11293710;
    default: x86_unimpl("switch@0x1129369d out of table"); return;
  }
L_112936a4:;
  /* 112936a4 jmp dword ptr [ecx*4 + 0x112937a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x112937a8)))); return;
  /* 112936ab nop  */
  /* nop */
L_112936ac:;
  /* 112936ac jmp dword ptr [ecx*4 + 0x1129372c] */
  switch (ECX) {
    case 0: goto L_1129378f;
    case 1: goto L_1129377c;
    case 2: goto L_11293774;
    case 3: goto L_1129376c;
    case 4: goto L_11293764;
    case 5: goto L_1129375c;
    case 6: goto L_11293754;
    case 7: goto L_1129374c;
    default: x86_unimpl("switch@0x112936ac out of table"); return;
  }
  /* 112936b3 nop  */
  /* nop */
L_112936c0:;
  /* 112936c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112936c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112936c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112936c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112936c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112936cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112936cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112936d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112936d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112936d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112936db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112936de jb 0x112936ac */
  if (C.cf) goto L_112936ac;
  /* 112936e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112936e2 jmp dword ptr [edx*4 + 0x11293798] */
  switch (EDX) {
    case 0: goto L_112937a8;
    case 1: goto L_112937b0;
    case 2: goto L_112937bc;
    case 3: goto L_112937d0;
    default: x86_unimpl("switch@0x112936e2 out of table"); return;
  }
  /* 112936e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112936ec:;
  /* 112936ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112936ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112936f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112936f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112936f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112936f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112936fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112936fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11293701 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293704 jb 0x112936ac */
  if (C.cf) goto L_112936ac;
  /* 11293706 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11293708 jmp dword ptr [edx*4 + 0x11293798] */
  switch (EDX) {
    case 0: goto L_112937a8;
    case 1: goto L_112937b0;
    case 2: goto L_112937bc;
    case 3: goto L_112937d0;
    default: x86_unimpl("switch@0x11293708 out of table"); return;
  }
  /* 1129370f nop  */
  /* nop */
L_11293710:;
  /* 11293710 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11293712 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11293714 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11293716 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11293717 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1129371a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1129371b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129371e jb 0x112936ac */
  if (C.cf) goto L_112936ac;
  /* 11293720 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11293722 jmp dword ptr [edx*4 + 0x11293798] */
  switch (EDX) {
    case 0: goto L_112937a8;
    case 1: goto L_112937b0;
    case 2: goto L_112937bc;
    case 3: goto L_112937d0;
    default: x86_unimpl("switch@0x11293722 out of table"); return;
  }
  /* 11293729 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1129374c:;
  /* 1129374c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11293750 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11293754:;
  /* 11293754 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11293758 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1129375c:;
  /* 1129375c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11293760 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11293764:;
  /* 11293764 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11293768 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1129376c:;
  /* 1129376c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11293770 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11293774:;
  /* 11293774 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11293778 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1129377c:;
  /* 1129377c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11293780 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11293784 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1129378b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1129378d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1129378f:;
  /* 1129378f jmp dword ptr [edx*4 + 0x11293798] */
  switch (EDX) {
    case 0: goto L_112937a8;
    case 1: goto L_112937b0;
    case 2: goto L_112937bc;
    case 3: goto L_112937d0;
    default: x86_unimpl("switch@0x1129378f out of table"); return;
  }
  /* 11293796 mov edi, edi */
  EDI = (EDI);
L_112937a8:;
  /* 112937a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112937ab pop esi */
  ESI = (pop32());
  /* 112937ac pop edi */
  EDI = (pop32());
  /* 112937ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112937ae ret  */
  ESPCHK(0x11293650u, _esp0);
  ESP += 4; return;
  /* 112937af nop  */
  /* nop */
L_112937b0:;
  /* 112937b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112937b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112937b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112937b7 pop esi */
  ESI = (pop32());
  /* 112937b8 pop edi */
  EDI = (pop32());
  /* 112937b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112937ba ret  */
  ESPCHK(0x11293650u, _esp0);
  ESP += 4; return;
  /* 112937bb nop  */
  /* nop */
L_112937bc:;
  /* 112937bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112937be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112937c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112937c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112937c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112937c9 pop esi */
  ESI = (pop32());
  /* 112937ca pop edi */
  EDI = (pop32());
  /* 112937cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112937cc ret  */
  ESPCHK(0x11293650u, _esp0);
  ESP += 4; return;
  /* 112937cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112937d0:;
  /* 112937d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112937d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112937d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112937d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112937da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112937dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112937e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112937e3 pop esi */
  ESI = (pop32());
  /* 112937e4 pop edi */
  EDI = (pop32());
  /* 112937e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112937e6 ret  */
  ESPCHK(0x11293650u, _esp0);
  ESP += 4; return;
  /* 112937e7 nop  */
  /* nop */
L_112937e8:;
  /* 112937e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 112937ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 112937f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112937f6 jne 0x1129381c */
  if (!C.zf) goto L_1129381c;
  /* 112937f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112937fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112937fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293801 jb 0x11293810 */
  if (C.cf) goto L_11293810;
  /* 11293803 std  */
  C.df=1;
  /* 11293804 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11293806 cld  */
  C.df=0;
  /* 11293807 jmp dword ptr [edx*4 + 0x11293930] */
  switch (EDX) {
    case 0: goto L_11293940;
    case 1: goto L_11293948;
    case 2: goto L_11293958;
    case 3: goto L_1129396c;
    default: x86_unimpl("switch@0x11293807 out of table"); return;
  }
  /* 1129380e mov edi, edi */
  EDI = (EDI);
L_11293810:;
  /* 11293810 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11293812 jmp dword ptr [ecx*4 + 0x112938e0] */
  switch (ECX) {
    case 0: goto L_11293927;
    default: x86_unimpl("switch@0x11293812 out of table"); return;
  }
  /* 11293819 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1129381c:;
  /* 1129381c mov eax, edi */
  EAX = (EDI);
  /* 1129381e mov edx, 3 */
  EDX = (0x3u);
  /* 11293823 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293826 jb 0x11293834 */
  if (C.cf) goto L_11293834;
  /* 11293828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1129382b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129382d jmp dword ptr [eax*4 + 0x11293838] */
  switch (EAX) {
    case 1: goto L_11293848;
    case 2: goto L_11293868;
    case 3: goto L_11293890;
    default: x86_unimpl("switch@0x1129382d out of table"); return;
  }
L_11293834:;
  /* 11293834 jmp dword ptr [ecx*4 + 0x11293930] */
  switch (ECX) {
    case 0: goto L_11293940;
    case 1: goto L_11293948;
    case 2: goto L_11293958;
    case 3: goto L_1129396c;
    default: x86_unimpl("switch@0x11293834 out of table"); return;
  }
  /* 1129383b nop  */
  /* nop */
L_11293848:;
  /* 11293848 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1129384b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1129384d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11293850 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11293851 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11293854 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11293855 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293858 jb 0x11293810 */
  if (C.cf) goto L_11293810;
  /* 1129385a std  */
  C.df=1;
  /* 1129385b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1129385d cld  */
  C.df=0;
  /* 1129385e jmp dword ptr [edx*4 + 0x11293930] */
  switch (EDX) {
    case 0: goto L_11293940;
    case 1: goto L_11293948;
    case 2: goto L_11293958;
    case 3: goto L_1129396c;
    default: x86_unimpl("switch@0x1129385e out of table"); return;
  }
  /* 11293865 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11293868:;
  /* 11293868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1129386b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1129386d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11293870 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11293873 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11293876 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11293879 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129387c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129387f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293882 jb 0x11293810 */
  if (C.cf) goto L_11293810;
  /* 11293884 std  */
  C.df=1;
  /* 11293885 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11293887 cld  */
  C.df=0;
  /* 11293888 jmp dword ptr [edx*4 + 0x11293930] */
  switch (EDX) {
    case 0: goto L_11293940;
    case 1: goto L_11293948;
    case 2: goto L_11293958;
    case 3: goto L_1129396c;
    default: x86_unimpl("switch@0x11293888 out of table"); return;
  }
  /* 1129388f nop  */
  /* nop */
L_11293890:;
  /* 11293890 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11293893 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11293895 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11293898 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1129389b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1129389e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112938a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112938a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112938a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112938aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112938ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112938b0 jb 0x11293810 */
  if (C.cf) goto L_11293810;
  /* 112938b6 std  */
  C.df=1;
  /* 112938b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112938b9 cld  */
  C.df=0;
  /* 112938ba jmp dword ptr [edx*4 + 0x11293930] */
  switch (EDX) {
    case 0: goto L_11293940;
    case 1: goto L_11293948;
    case 2: goto L_11293958;
    case 3: goto L_1129396c;
    default: x86_unimpl("switch@0x112938ba out of table"); return;
  }
  /* 112938c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 112938c4 in al, 0x38 */
  x86_unimpl("in @ 0x112938c4");
  /* 112938c6 sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112938c8 in al, dx */
  x86_unimpl("in @ 0x112938c8");
  /* 112938c9 cmp byte ptr [ecx], ch */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(C.c.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112938cb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112938cd cmp byte ptr [ecx], ch */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(C.c.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112938cf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112938d1 cmp byte ptr [ecx], ch */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(C.c.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112938d3 adc dword ptr [ecx + edi], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + EDI*1))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EDI*1), (_r)); fl_add(_a,_b,_r,32); }
  /* 112938d6 sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112938d8 or al, 0x39 */
  { uint32_t _r=(AL)|(0x39u); AL = (_r); fl_logic(_r,8); }
  /* 112938da sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112938dc adc al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112938de sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112938e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 112938e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 112938ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 112938f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 112938f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 112938f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 112938fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11293900 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11293904 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11293908 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1129390c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11293910 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11293914 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11293918 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1129391c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11293923 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11293925 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11293927:;
  /* 11293927 jmp dword ptr [edx*4 + 0x11293930] */
  switch (EDX) {
    case 0: goto L_11293940;
    case 1: goto L_11293948;
    case 2: goto L_11293958;
    case 3: goto L_1129396c;
    default: x86_unimpl("switch@0x11293927 out of table"); return;
  }
  /* 1129392e mov edi, edi */
  EDI = (EDI);
L_11293940:;
  /* 11293940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293943 pop esi */
  ESI = (pop32());
  /* 11293944 pop edi */
  EDI = (pop32());
  /* 11293945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11293946 ret  */
  ESPCHK(0x11293650u, _esp0);
  ESP += 4; return;
  /* 11293947 nop  */
  /* nop */
L_11293948:;
  /* 11293948 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1129394b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1129394e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293951 pop esi */
  ESI = (pop32());
  /* 11293952 pop edi */
  EDI = (pop32());
  /* 11293953 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11293954 ret  */
  ESPCHK(0x11293650u, _esp0);
  ESP += 4; return;
  /* 11293955 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11293958:;
  /* 11293958 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1129395b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1129395e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11293961 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11293964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293967 pop esi */
  ESI = (pop32());
  /* 11293968 pop edi */
  EDI = (pop32());
  /* 11293969 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1129396a ret  */
  ESPCHK(0x11293650u, _esp0);
  ESP += 4; return;
  /* 1129396b nop  */
  /* nop */
L_1129396c:;
  /* 1129396c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1129396f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11293972 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11293975 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11293978 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1129397b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1129397e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293981 pop esi */
  ESI = (pop32());
  /* 11293982 pop edi */
  EDI = (pop32());
  /* 11293983 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11293984 ret  */
  ESPCHK(0x11293650u, _esp0);
  ESP += 4; return;
}

/* FUN_10003985 @ 0x11293985 (62 bytes, 15 insns) */
void f_11293985(void) {
  FTRACE(0x11293985u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293985 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1129398a push 0 */
  push32((uint32_t)(0x0u));
  /* 1129398c push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 11293992 call dword ptr [0x1129503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129503c))), 0x11293998u);
  /* 11293998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129399a mov dword ptr [0x11296c14], eax */
  w32((uint32_t)(0x11296c14), (EAX));
  /* 1129399f jne 0x112939a2 */
  if (!C.zf) goto L_112939a2;
  /* 112939a1 ret  */
  ESPCHK(0x11293985u, _esp0);
  ESP += 4; return;
L_112939a2:;
  /* 112939a2 and dword ptr [0x11296c0c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11296c0c)))&(0x0u); w32((uint32_t)(0x11296c0c), (_r)); fl_logic(_r,32); }
  /* 112939a9 and dword ptr [0x11296c10], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11296c10)))&(0x0u); w32((uint32_t)(0x11296c10), (_r)); fl_logic(_r,32); }
  /* 112939b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112939b2 mov dword ptr [0x11296c08], eax */
  w32((uint32_t)(0x11296c08), (EAX));
  /* 112939b7 mov dword ptr [0x11296c00], 0x10 */
  w32((uint32_t)(0x11296c00), (0x10u));
  /* 112939c1 pop eax */
  EAX = (pop32());
  /* 112939c2 ret  */
  ESPCHK(0x11293985u, _esp0);
  ESP += 4; return;
}

/* FUN_100039c3 @ 0x112939c3 (43 bytes, 14 insns) */
void f_112939c3(void) {
  FTRACE(0x112939c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112939c3 mov eax, dword ptr [0x11296c10] */
  EAX = (r32((uint32_t)(0x11296c10)));
  /* 112939c8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 112939cb mov eax, dword ptr [0x11296c14] */
  EAX = (r32((uint32_t)(0x11296c14)));
  /* 112939d0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_112939d3:;
  /* 112939d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112939d5 jae 0x112939eb */
  if (!C.cf) goto L_112939eb;
  /* 112939d7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 112939db sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112939de cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112939e4 jb 0x112939ed */
  if (C.cf) goto L_112939ed;
  /* 112939e6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112939e9 jmp 0x112939d3 */
  goto L_112939d3;
L_112939eb:;
  /* 112939eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112939ed:;
  /* 112939ed ret  */
  ESPCHK(0x112939c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100039ee @ 0x112939ee (811 bytes, 264 insns) */
void f_112939ee(void) {
  FTRACE(0x112939eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112939ee push ebp */
  push32((uint32_t)(EBP));
  /* 112939ef mov ebp, esp */
  EBP = (ESP);
  /* 112939f1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112939f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112939f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112939fa push ebx */
  push32((uint32_t)(EBX));
  /* 112939fb push esi */
  push32((uint32_t)(ESI));
  /* 112939fc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 112939ff mov esi, edx */
  ESI = (EDX);
  /* 11293a01 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293a04 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11293a07 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293a0a push edi */
  push32((uint32_t)(EDI));
  /* 11293a0b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11293a0e mov ecx, esi */
  ECX = (ESI);
  /* 11293a10 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11293a13 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11293a19 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11293a1a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11293a1d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11293a24 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11293a27 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11293a2a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11293a2d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11293a30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11293a33 jne 0x11293ab4 */
  if (!C.zf) goto L_11293ab4;
  /* 11293a35 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11293a38 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11293a3a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11293a3b pop edi */
  EDI = (pop32());
  /* 11293a3c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11293a3f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293a41 jbe 0x11293a46 */
  if ((C.cf||C.zf)) goto L_11293a46;
  /* 11293a43 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11293a46:;
  /* 11293a46 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11293a4a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293a4e jne 0x11293a98 */
  if (!C.zf) goto L_11293a98;
  /* 11293a50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11293a53 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293a56 jae 0x11293a74 */
  if (!C.cf) goto L_11293a74;
  /* 11293a58 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11293a5d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11293a5f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11293a63 not edi */
  EDI = (~(EDI));
  /* 11293a65 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11293a69 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11293a6b jne 0x11293a98 */
  if (!C.zf) goto L_11293a98;
  /* 11293a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293a70 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11293a72 jmp 0x11293a98 */
  goto L_11293a98;
L_11293a74:;
  /* 11293a74 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293a77 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11293a7c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11293a7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11293a81 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11293a85 not edi */
  EDI = (~(EDI));
  /* 11293a87 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11293a8e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11293a90 jne 0x11293a98 */
  if (!C.zf) goto L_11293a98;
  /* 11293a92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293a95 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11293a98:;
  /* 11293a98 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11293a9c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11293aa0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11293aa3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11293aa7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11293aab add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293aae mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11293ab1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11293ab4:;
  /* 11293ab4 mov edi, ebx */
  EDI = (EBX);
  /* 11293ab6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11293ab9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11293aba cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293abd jbe 0x11293ac2 */
  if ((C.cf||C.zf)) goto L_11293ac2;
  /* 11293abf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11293ac1 pop edi */
  EDI = (pop32());
L_11293ac2:;
  /* 11293ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11293ac5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11293ac8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11293acb jne 0x11293b71 */
  if (!C.zf) goto L_11293b71;
  /* 11293ad1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293ad4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11293ad7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11293ada push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11293adc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11293adf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11293ae0 pop edx */
  EDX = (pop32());
  /* 11293ae1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293ae3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11293ae6 jbe 0x11293aed */
  if ((C.cf||C.zf)) goto L_11293aed;
  /* 11293ae8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11293aeb mov ecx, edx */
  ECX = (EDX);
L_11293aed:;
  /* 11293aed add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293af0 mov edi, ebx */
  EDI = (EBX);
  /* 11293af2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11293af5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11293af8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11293af9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293afb jbe 0x11293aff */
  if ((C.cf||C.zf)) goto L_11293aff;
  /* 11293afd mov edi, edx */
  EDI = (EDX);
L_11293aff:;
  /* 11293aff cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293b01 je 0x11293b6e */
  if (C.zf) goto L_11293b6e;
  /* 11293b03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11293b06 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11293b09 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293b0c jne 0x11293b56 */
  if (!C.zf) goto L_11293b56;
  /* 11293b0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11293b11 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293b14 jae 0x11293b32 */
  if (!C.cf) goto L_11293b32;
  /* 11293b16 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11293b1b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11293b1d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11293b21 not edx */
  EDX = (~(EDX));
  /* 11293b23 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11293b27 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11293b29 jne 0x11293b56 */
  if (!C.zf) goto L_11293b56;
  /* 11293b2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293b2e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11293b30 jmp 0x11293b56 */
  goto L_11293b56;
L_11293b32:;
  /* 11293b32 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293b35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11293b3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11293b3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11293b3f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11293b43 not edx */
  EDX = (~(EDX));
  /* 11293b45 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11293b4c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11293b4e jne 0x11293b56 */
  if (!C.zf) goto L_11293b56;
  /* 11293b50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293b53 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11293b56:;
  /* 11293b56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11293b59 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11293b5c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11293b5f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11293b62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11293b65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11293b68 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11293b6b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11293b6e:;
  /* 11293b6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11293b71:;
  /* 11293b71 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293b75 jne 0x11293b80 */
  if (!C.zf) goto L_11293b80;
  /* 11293b77 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293b7a je 0x11293c09 */
  if (C.zf) goto L_11293c09;
L_11293b80:;
  /* 11293b80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11293b83 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11293b86 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11293b89 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11293b8c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11293b8f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11293b92 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11293b95 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11293b98 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11293b9b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11293b9e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11293ba1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293ba4 jne 0x11293c09 */
  if (!C.zf) goto L_11293c09;
  /* 11293ba6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11293baa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293bad mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11293bb0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11293bb2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11293bb6 jae 0x11293bdd */
  if (!C.cf) goto L_11293bdd;
  /* 11293bb8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11293bbc jne 0x11293bcc */
  if (!C.zf) goto L_11293bcc;
  /* 11293bbe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11293bc3 mov ecx, edi */
  ECX = (EDI);
  /* 11293bc5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11293bc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293bca or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11293bcc:;
  /* 11293bcc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11293bd1 mov ecx, edi */
  ECX = (EDI);
  /* 11293bd3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11293bd5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11293bd9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11293bdb jmp 0x11293c06 */
  goto L_11293c06;
L_11293bdd:;
  /* 11293bdd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11293be1 jne 0x11293bf3 */
  if (!C.zf) goto L_11293bf3;
  /* 11293be3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11293be6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11293beb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11293bed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293bf0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11293bf3:;
  /* 11293bf3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11293bf6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11293bfb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11293bfd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11293c04 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11293c06:;
  /* 11293c06 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11293c09:;
  /* 11293c09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11293c0c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11293c0e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11293c12 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11293c14 jne 0x11293d14 */
  if (!C.zf) goto L_11293d14;
  /* 11293c1a mov eax, dword ptr [0x11296c0c] */
  EAX = (r32((uint32_t)(0x11296c0c)));
  /* 11293c1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11293c21 je 0x11293d06 */
  if (C.zf) goto L_11293d06;
  /* 11293c27 mov ecx, dword ptr [0x11296c04] */
  ECX = (r32((uint32_t)(0x11296c04)));
  /* 11293c2d mov edi, dword ptr [0x11295054] */
  EDI = (r32((uint32_t)(0x11295054)));
  /* 11293c33 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11293c36 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293c39 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11293c3e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11293c43 push ebx */
  push32((uint32_t)(EBX));
  /* 11293c44 push ecx */
  push32((uint32_t)(ECX));
  /* 11293c45 call edi */
  call_ind((uint32_t)(EDI), 0x11293c47u);
  /* 11293c47 mov ecx, dword ptr [0x11296c04] */
  ECX = (r32((uint32_t)(0x11296c04)));
  /* 11293c4d mov eax, dword ptr [0x11296c0c] */
  EAX = (r32((uint32_t)(0x11296c0c)));
  /* 11293c52 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11293c57 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11293c59 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11293c5c mov eax, dword ptr [0x11296c0c] */
  EAX = (r32((uint32_t)(0x11296c0c)));
  /* 11293c61 mov ecx, dword ptr [0x11296c04] */
  ECX = (r32((uint32_t)(0x11296c04)));
  /* 11293c67 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11293c6a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11293c72 mov eax, dword ptr [0x11296c0c] */
  EAX = (r32((uint32_t)(0x11296c0c)));
  /* 11293c77 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11293c7a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11293c7d mov eax, dword ptr [0x11296c0c] */
  EAX = (r32((uint32_t)(0x11296c0c)));
  /* 11293c82 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11293c85 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11293c89 jne 0x11293c94 */
  if (!C.zf) goto L_11293c94;
  /* 11293c8b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11293c8f mov eax, dword ptr [0x11296c0c] */
  EAX = (r32((uint32_t)(0x11296c0c)));
L_11293c94:;
  /* 11293c94 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293c98 jne 0x11293d06 */
  if (!C.zf) goto L_11293d06;
  /* 11293c9a push ebx */
  push32((uint32_t)(EBX));
  /* 11293c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11293c9d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11293ca0 call edi */
  call_ind((uint32_t)(EDI), 0x11293ca2u);
  /* 11293ca2 mov eax, dword ptr [0x11296c0c] */
  EAX = (r32((uint32_t)(0x11296c0c)));
  /* 11293ca7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11293caa push 0 */
  push32((uint32_t)(0x0u));
  /* 11293cac push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 11293cb2 call dword ptr [0x11295050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295050))), 0x11293cb8u);
  /* 11293cb8 mov eax, dword ptr [0x11296c10] */
  EAX = (r32((uint32_t)(0x11296c10)));
  /* 11293cbd mov edx, dword ptr [0x11296c14] */
  EDX = (r32((uint32_t)(0x11296c14)));
  /* 11293cc3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11293cc6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11293cc9 mov ecx, eax */
  ECX = (EAX);
  /* 11293ccb mov eax, dword ptr [0x11296c0c] */
  EAX = (r32((uint32_t)(0x11296c0c)));
  /* 11293cd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293cd2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11293cd6 push ecx */
  push32((uint32_t)(ECX));
  /* 11293cd7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11293cda push ecx */
  push32((uint32_t)(ECX));
  /* 11293cdb push eax */
  push32((uint32_t)(EAX));
  /* 11293cdc call 0x11294770 */
  push32(0x11293ce1u); f_11294770();
  /* 11293ce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293ce4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11293ce7 dec dword ptr [0x11296c10] */
  { uint32_t _r=(r32((uint32_t)(0x11296c10)))-1; w32((uint32_t)(0x11296c10), (_r)); fl_dec(_r,32); }
  /* 11293ced cmp eax, dword ptr [0x11296c0c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11296c0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293cf3 jbe 0x11293cf8 */
  if ((C.cf||C.zf)) goto L_11293cf8;
  /* 11293cf5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11293cf8:;
  /* 11293cf8 mov ecx, dword ptr [0x11296c14] */
  ECX = (r32((uint32_t)(0x11296c14)));
  /* 11293cfe mov dword ptr [0x11296c08], ecx */
  w32((uint32_t)(0x11296c08), (ECX));
  /* 11293d04 jmp 0x11293d09 */
  goto L_11293d09;
L_11293d06:;
  /* 11293d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11293d09:;
  /* 11293d09 mov dword ptr [0x11296c0c], eax */
  w32((uint32_t)(0x11296c0c), (EAX));
  /* 11293d0e mov dword ptr [0x11296c04], esi */
  w32((uint32_t)(0x11296c04), (ESI));
L_11293d14:;
  /* 11293d14 pop edi */
  EDI = (pop32());
  /* 11293d15 pop esi */
  ESI = (pop32());
  /* 11293d16 pop ebx */
  EBX = (pop32());
  /* 11293d17 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11293d18 ret  */
  ESPCHK(0x112939eeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d19 @ 0x11293d19 (777 bytes, 275 insns) */
void f_11293d19(void) {
  FTRACE(0x11293d19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11293d19 push ebp */
  push32((uint32_t)(EBP));
  /* 11293d1a mov ebp, esp */
  EBP = (ESP);
  /* 11293d1c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293d1f mov eax, dword ptr [0x11296c10] */
  EAX = (r32((uint32_t)(0x11296c10)));
  /* 11293d24 mov edx, dword ptr [0x11296c14] */
  EDX = (r32((uint32_t)(0x11296c14)));
  /* 11293d2a push ebx */
  push32((uint32_t)(EBX));
  /* 11293d2b push esi */
  push32((uint32_t)(ESI));
  /* 11293d2c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11293d2f push edi */
  push32((uint32_t)(EDI));
  /* 11293d30 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11293d33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293d36 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11293d39 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11293d3c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11293d3f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11293d42 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11293d45 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11293d46 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293d49 jge 0x11293d59 */
  if ((C.sf==C.of)) goto L_11293d59;
  /* 11293d4b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11293d4e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11293d50 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11293d54 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11293d57 jmp 0x11293d69 */
  goto L_11293d69;
L_11293d59:;
  /* 11293d59 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293d5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11293d5f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11293d61 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11293d63 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11293d66 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11293d69:;
  /* 11293d69 mov eax, dword ptr [0x11296c08] */
  EAX = (r32((uint32_t)(0x11296c08)));
  /* 11293d6e mov ebx, eax */
  EBX = (EAX);
  /* 11293d70 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293d72 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11293d75 jae 0x11293d90 */
  if (!C.cf) goto L_11293d90;
L_11293d77:;
  /* 11293d77 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11293d7a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11293d7c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11293d7f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11293d81 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11293d83 jne 0x11293d90 */
  if (!C.zf) goto L_11293d90;
  /* 11293d85 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293d88 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293d8b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11293d8e jb 0x11293d77 */
  if (C.cf) goto L_11293d77;
L_11293d90:;
  /* 11293d90 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293d93 jne 0x11293e0e */
  if (!C.zf) goto L_11293e0e;
  /* 11293d95 mov ebx, edx */
  EBX = (EDX);
L_11293d97:;
  /* 11293d97 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293d99 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11293d9c jae 0x11293db3 */
  if (!C.cf) goto L_11293db3;
  /* 11293d9e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11293da1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11293da3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11293da6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11293da8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11293daa jne 0x11293db1 */
  if (!C.zf) goto L_11293db1;
  /* 11293dac add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293daf jmp 0x11293d97 */
  goto L_11293d97;
L_11293db1:;
  /* 11293db1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11293db3:;
  /* 11293db3 jne 0x11293e0e */
  if (!C.zf) goto L_11293e0e;
L_11293db5:;
  /* 11293db5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293db8 jae 0x11293dcb */
  if (!C.cf) goto L_11293dcb;
  /* 11293dba cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293dbe jne 0x11293dc8 */
  if (!C.zf) goto L_11293dc8;
  /* 11293dc0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293dc3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11293dc6 jmp 0x11293db5 */
  goto L_11293db5;
L_11293dc8:;
  /* 11293dc8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11293dcb:;
  /* 11293dcb jne 0x11293df3 */
  if (!C.zf) goto L_11293df3;
  /* 11293dcd mov ebx, edx */
  EBX = (EDX);
L_11293dcf:;
  /* 11293dcf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293dd1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11293dd4 jae 0x11293de3 */
  if (!C.cf) goto L_11293de3;
  /* 11293dd6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293dda jne 0x11293de1 */
  if (!C.zf) goto L_11293de1;
  /* 11293ddc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293ddf jmp 0x11293dcf */
  goto L_11293dcf;
L_11293de1:;
  /* 11293de1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11293de3:;
  /* 11293de3 jne 0x11293df3 */
  if (!C.zf) goto L_11293df3;
  /* 11293de5 call 0x11294022 */
  push32(0x11293deau); f_11294022();
  /* 11293dea mov ebx, eax */
  EBX = (EAX);
  /* 11293dec test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11293dee mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11293df1 je 0x11293e07 */
  if (C.zf) goto L_11293e07;
L_11293df3:;
  /* 11293df3 push ebx */
  push32((uint32_t)(EBX));
  /* 11293df4 call 0x112940d3 */
  push32(0x11293df9u); f_112940d3();
  /* 11293df9 pop ecx */
  ECX = (pop32());
  /* 11293dfa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11293dfd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11293dff mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11293e02 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293e05 jne 0x11293e0e */
  if (!C.zf) goto L_11293e0e;
L_11293e07:;
  /* 11293e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11293e09 jmp 0x1129401d */
  goto L_1129401d;
L_11293e0e:;
  /* 11293e0e mov dword ptr [0x11296c08], ebx */
  w32((uint32_t)(0x11296c08), (EBX));
  /* 11293e14 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11293e17 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11293e19 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293e1c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11293e1f je 0x11293e35 */
  if (C.zf) goto L_11293e35;
  /* 11293e21 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11293e28 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11293e2c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11293e2f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11293e31 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11293e33 jne 0x11293e6c */
  if (!C.zf) goto L_11293e6c;
L_11293e35:;
  /* 11293e35 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11293e3b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11293e3e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11293e41 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11293e44 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11293e48 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11293e4b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11293e4d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11293e50 jne 0x11293e69 */
  if (!C.zf) goto L_11293e69;
L_11293e52:;
  /* 11293e52 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11293e58 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11293e5b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11293e5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293e61 mov edi, esi */
  EDI = (ESI);
  /* 11293e63 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11293e65 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11293e67 je 0x11293e52 */
  if (C.zf) goto L_11293e52;
L_11293e69:;
  /* 11293e69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11293e6c:;
  /* 11293e6c mov ecx, edx */
  ECX = (EDX);
  /* 11293e6e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11293e70 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11293e76 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11293e7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11293e80 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11293e84 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11293e86 jne 0x11293e95 */
  if (!C.zf) goto L_11293e95;
  /* 11293e88 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11293e8f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11293e91 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11293e94 pop edi */
  EDI = (pop32());
L_11293e95:;
  /* 11293e95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11293e97 jl 0x11293e9e */
  if ((C.sf!=C.of)) goto L_11293e9e;
  /* 11293e99 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11293e9b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11293e9c jmp 0x11293e95 */
  goto L_11293e95;
L_11293e9e:;
  /* 11293e9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11293ea1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11293ea5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11293ea7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11293eaa mov esi, ecx */
  ESI = (ECX);
  /* 11293eac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11293eaf sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11293eb2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11293eb3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293eb6 jle 0x11293ebb */
  if ((C.zf||C.sf!=C.of)) goto L_11293ebb;
  /* 11293eb8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11293eba pop esi */
  ESI = (pop32());
L_11293ebb:;
  /* 11293ebb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293ebd je 0x11293fd0 */
  if (C.zf) goto L_11293fd0;
  /* 11293ec3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11293ec6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293ec9 jne 0x11293f2c */
  if (!C.zf) goto L_11293f2c;
  /* 11293ecb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293ece jge 0x11293efb */
  if ((C.sf==C.of)) goto L_11293efb;
  /* 11293ed0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11293ed5 mov ecx, edi */
  ECX = (EDI);
  /* 11293ed7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11293ed9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11293edc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11293ee0 not ebx */
  EBX = (~(EBX));
  /* 11293ee2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11293ee5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11293ee9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11293eed dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11293eef jne 0x11293f29 */
  if (!C.zf) goto L_11293f29;
  /* 11293ef1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293ef4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11293ef7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11293ef9 jmp 0x11293f2c */
  goto L_11293f2c;
L_11293efb:;
  /* 11293efb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11293efe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11293f03 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11293f05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11293f08 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11293f0c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11293f13 not ebx */
  EBX = (~(EBX));
  /* 11293f15 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11293f17 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11293f19 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11293f1c jne 0x11293f29 */
  if (!C.zf) goto L_11293f29;
  /* 11293f1e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11293f21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11293f24 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11293f27 jmp 0x11293f2c */
  goto L_11293f2c;
L_11293f29:;
  /* 11293f29 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11293f2c:;
  /* 11293f2c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11293f2f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11293f32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293f36 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11293f39 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11293f3c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11293f3f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11293f42 je 0x11293fdc */
  if (C.zf) goto L_11293fdc;
  /* 11293f48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11293f4b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11293f4f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11293f52 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11293f55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11293f58 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11293f5b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11293f5e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11293f61 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11293f64 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293f67 jne 0x11293fcd */
  if (!C.zf) goto L_11293fcd;
  /* 11293f69 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11293f6d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11293f70 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11293f73 jge 0x11293f9e */
  if ((C.sf==C.of)) goto L_11293f9e;
  /* 11293f75 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11293f77 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11293f7b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11293f7f jne 0x11293f8c */
  if (!C.zf) goto L_11293f8c;
  /* 11293f81 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11293f86 mov ecx, esi */
  ECX = (ESI);
  /* 11293f88 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11293f8a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11293f8c:;
  /* 11293f8c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11293f91 mov ecx, esi */
  ECX = (ESI);
  /* 11293f93 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11293f95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11293f98 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11293f9c jmp 0x11293fcd */
  goto L_11293fcd;
L_11293f9e:;
  /* 11293f9e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11293fa0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11293fa4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11293fa8 jne 0x11293fb7 */
  if (!C.zf) goto L_11293fb7;
  /* 11293faa lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11293fad mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11293fb2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11293fb4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11293fb7:;
  /* 11293fb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11293fba lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11293fc1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11293fc4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11293fc9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11293fcb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11293fcd:;
  /* 11293fcd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11293fd0:;
  /* 11293fd0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11293fd2 je 0x11293fdf */
  if (C.zf) goto L_11293fdf;
  /* 11293fd4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11293fd6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11293fda jmp 0x11293fdf */
  goto L_11293fdf;
L_11293fdc:;
  /* 11293fdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11293fdf:;
  /* 11293fdf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11293fe2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11293fe4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11293fe7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11293fe9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11293fed mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11293ff0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11293ff2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11293ff4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11293ff7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11293ff9 jne 0x11294015 */
  if (!C.zf) goto L_11294015;
  /* 11293ffb cmp ebx, dword ptr [0x11296c0c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11296c0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294001 jne 0x11294015 */
  if (!C.zf) goto L_11294015;
  /* 11294003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11294006 cmp ecx, dword ptr [0x11296c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11296c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129400c jne 0x11294015 */
  if (!C.zf) goto L_11294015;
  /* 1129400e and dword ptr [0x11296c0c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11296c0c)))&(0x0u); w32((uint32_t)(0x11296c0c), (_r)); fl_logic(_r,32); }
L_11294015:;
  /* 11294015 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11294018 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1129401a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1129401d:;
  /* 1129401d pop edi */
  EDI = (pop32());
  /* 1129401e pop esi */
  ESI = (pop32());
  /* 1129401f pop ebx */
  EBX = (pop32());
  /* 11294020 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11294021 ret  */
  ESPCHK(0x11293d19u, _esp0);
  ESP += 4; return;
}

/* FUN_10004022 @ 0x11294022 (177 bytes, 53 insns) */
void f_11294022(void) {
  FTRACE(0x11294022u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294022 mov eax, dword ptr [0x11296c10] */
  EAX = (r32((uint32_t)(0x11296c10)));
  /* 11294027 mov ecx, dword ptr [0x11296c00] */
  ECX = (r32((uint32_t)(0x11296c00)));
  /* 1129402d push esi */
  push32((uint32_t)(ESI));
  /* 1129402e push edi */
  push32((uint32_t)(EDI));
  /* 1129402f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11294031 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294033 jne 0x11294065 */
  if (!C.zf) goto L_11294065;
  /* 11294035 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11294039 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1129403c push eax */
  push32((uint32_t)(EAX));
  /* 1129403d push dword ptr [0x11296c14] */
  push32((uint32_t)(r32((uint32_t)(0x11296c14))));
  /* 11294043 push edi */
  push32((uint32_t)(EDI));
  /* 11294044 push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 1129404a call dword ptr [0x11295028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295028))), 0x11294050u);
  /* 11294050 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294052 je 0x112940b5 */
  if (C.zf) goto L_112940b5;
  /* 11294054 add dword ptr [0x11296c00], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11296c00))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11296c00), (_r)); fl_add(_a,_b,_r,32); }
  /* 1129405b mov dword ptr [0x11296c14], eax */
  w32((uint32_t)(0x11296c14), (EAX));
  /* 11294060 mov eax, dword ptr [0x11296c10] */
  EAX = (r32((uint32_t)(0x11296c10)));
L_11294065:;
  /* 11294065 mov ecx, dword ptr [0x11296c14] */
  ECX = (r32((uint32_t)(0x11296c14)));
  /* 1129406b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11294070 push 8 */
  push32((uint32_t)(0x8u));
  /* 11294072 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11294075 push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 1129407b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1129407e call dword ptr [0x1129503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129503c))), 0x11294084u);
  /* 11294084 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294086 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11294089 je 0x112940b5 */
  if (C.zf) goto L_112940b5;
  /* 1129408b push 4 */
  push32((uint32_t)(0x4u));
  /* 1129408d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11294092 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11294097 push edi */
  push32((uint32_t)(EDI));
  /* 11294098 call dword ptr [0x1129502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129502c))), 0x1129409eu);
  /* 1129409e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112940a0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 112940a3 jne 0x112940b9 */
  if (!C.zf) goto L_112940b9;
  /* 112940a5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112940a8 push edi */
  push32((uint32_t)(EDI));
  /* 112940a9 push dword ptr [0x11296e48] */
  push32((uint32_t)(r32((uint32_t)(0x11296e48))));
  /* 112940af call dword ptr [0x11295050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295050))), 0x112940b5u);
L_112940b5:;
  /* 112940b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112940b7 jmp 0x112940d0 */
  goto L_112940d0;
L_112940b9:;
  /* 112940b9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 112940bd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 112940bf mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 112940c2 inc dword ptr [0x11296c10] */
  { uint32_t _r=(r32((uint32_t)(0x11296c10)))+1; w32((uint32_t)(0x11296c10), (_r)); fl_inc(_r,32); }
  /* 112940c8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 112940cb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112940ce mov eax, esi */
  EAX = (ESI);
L_112940d0:;
  /* 112940d0 pop edi */
  EDI = (pop32());
  /* 112940d1 pop esi */
  ESI = (pop32());
  /* 112940d2 ret  */
  ESPCHK(0x11294022u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d3 @ 0x112940d3 (251 bytes, 85 insns) */
void f_112940d3(void) {
  FTRACE(0x112940d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112940d3 push ebp */
  push32((uint32_t)(EBP));
  /* 112940d4 mov ebp, esp */
  EBP = (ESP);
  /* 112940d6 push ecx */
  push32((uint32_t)(ECX));
  /* 112940d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112940da push ebx */
  push32((uint32_t)(EBX));
  /* 112940db push esi */
  push32((uint32_t)(ESI));
  /* 112940dc push edi */
  push32((uint32_t)(EDI));
  /* 112940dd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 112940e0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 112940e3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_112940e5:;
  /* 112940e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112940e7 jl 0x112940ee */
  if ((C.sf!=C.of)) goto L_112940ee;
  /* 112940e9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112940eb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112940ec jmp 0x112940e5 */
  goto L_112940e5;
L_112940ee:;
  /* 112940ee mov eax, ebx */
  EAX = (EBX);
  /* 112940f0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112940f2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112940f8 pop edx */
  EDX = (pop32());
  /* 112940f9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11294100 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11294103:;
  /* 11294103 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11294106 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11294109 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1129410c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1129410d jne 0x11294103 */
  if (!C.zf) goto L_11294103;
  /* 1129410f mov edi, ebx */
  EDI = (EBX);
  /* 11294111 push 4 */
  push32((uint32_t)(0x4u));
  /* 11294113 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11294116 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11294119 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1129411e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11294123 push edi */
  push32((uint32_t)(EDI));
  /* 11294124 call dword ptr [0x1129502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129502c))), 0x1129412au);
  /* 1129412a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129412c jne 0x11294136 */
  if (!C.zf) goto L_11294136;
  /* 1129412e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11294131 jmp 0x112941c9 */
  goto L_112941c9;
L_11294136:;
  /* 11294136 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1129413c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129413e ja 0x1129417c */
  if ((!C.cf&&!C.zf)) goto L_1129417c;
  /* 11294140 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11294143:;
  /* 11294143 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11294147 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1129414e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11294154 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1129415b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1129415d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11294163 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11294166 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11294170 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11294175 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11294178 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129417a jbe 0x11294143 */
  if ((C.cf||C.zf)) goto L_11294143;
L_1129417c:;
  /* 1129417c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1129417f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11294182 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11294187 push 1 */
  push32((uint32_t)(0x1u));
  /* 11294189 pop edi */
  EDI = (pop32());
  /* 1129418a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1129418d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11294190 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11294193 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11294196 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11294199 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1129419e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 112941a5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 112941a8 mov cl, al */
  CL = (AL);
  /* 112941aa inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 112941ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112941ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112941b1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 112941b4 jne 0x112941b9 */
  if (!C.zf) goto L_112941b9;
  /* 112941b6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_112941b9:;
  /* 112941b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112941be mov ecx, ebx */
  ECX = (EBX);
  /* 112941c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112941c2 not edx */
  EDX = (~(EDX));
  /* 112941c4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 112941c7 mov eax, ebx */
  EAX = (EBX);
L_112941c9:;
  /* 112941c9 pop edi */
  EDI = (pop32());
  /* 112941ca pop esi */
  ESI = (pop32());
  /* 112941cb pop ebx */
  EBX = (pop32());
  /* 112941cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112941cd ret  */
  ESPCHK(0x112940d3u, _esp0);
  ESP += 4; return;
}

/* FUN_100041ce @ 0x112941ce (137 bytes, 50 insns) */
void f_112941ce(void) {
  FTRACE(0x112941ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112941ce push ebx */
  push32((uint32_t)(EBX));
  /* 112941cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112941d1 cmp dword ptr [0x11296bc4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11296bc4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112941d7 push esi */
  push32((uint32_t)(ESI));
  /* 112941d8 push edi */
  push32((uint32_t)(EDI));
  /* 112941d9 jne 0x1129421d */
  if (!C.zf) goto L_1129421d;
  /* 112941db push 0x11295460 */
  push32((uint32_t)(0x11295460u));
  /* 112941e0 call dword ptr [0x11295020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295020))), 0x112941e6u);
  /* 112941e6 mov edi, eax */
  EDI = (EAX);
  /* 112941e8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112941ea je 0x11294253 */
  if (C.zf) goto L_11294253;
  /* 112941ec mov esi, dword ptr [0x11295024] */
  ESI = (r32((uint32_t)(0x11295024)));
  /* 112941f2 push 0x11295454 */
  push32((uint32_t)(0x11295454u));
  /* 112941f7 push edi */
  push32((uint32_t)(EDI));
  /* 112941f8 call esi */
  call_ind((uint32_t)(ESI), 0x112941fau);
  /* 112941fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112941fc mov dword ptr [0x11296bc4], eax */
  w32((uint32_t)(0x11296bc4), (EAX));
  /* 11294201 je 0x11294253 */
  if (C.zf) goto L_11294253;
  /* 11294203 push 0x11295444 */
  push32((uint32_t)(0x11295444u));
  /* 11294208 push edi */
  push32((uint32_t)(EDI));
  /* 11294209 call esi */
  call_ind((uint32_t)(ESI), 0x1129420bu);
  /* 1129420b push 0x11295430 */
  push32((uint32_t)(0x11295430u));
  /* 11294210 push edi */
  push32((uint32_t)(EDI));
  /* 11294211 mov dword ptr [0x11296bc8], eax */
  w32((uint32_t)(0x11296bc8), (EAX));
  /* 11294216 call esi */
  call_ind((uint32_t)(ESI), 0x11294218u);
  /* 11294218 mov dword ptr [0x11296bcc], eax */
  w32((uint32_t)(0x11296bcc), (EAX));
L_1129421d:;
  /* 1129421d mov eax, dword ptr [0x11296bc8] */
  EAX = (r32((uint32_t)(0x11296bc8)));
  /* 11294222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11294224 je 0x1129423c */
  if (C.zf) goto L_1129423c;
  /* 11294226 call eax */
  call_ind((uint32_t)(EAX), 0x11294228u);
  /* 11294228 mov ebx, eax */
  EBX = (EAX);
  /* 1129422a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1129422c je 0x1129423c */
  if (C.zf) goto L_1129423c;
  /* 1129422e mov eax, dword ptr [0x11296bcc] */
  EAX = (r32((uint32_t)(0x11296bcc)));
  /* 11294233 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11294235 je 0x1129423c */
  if (C.zf) goto L_1129423c;
  /* 11294237 push ebx */
  push32((uint32_t)(EBX));
  /* 11294238 call eax */
  call_ind((uint32_t)(EAX), 0x1129423au);
  /* 1129423a mov ebx, eax */
  EBX = (EAX);
L_1129423c:;
  /* 1129423c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11294240 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11294244 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11294248 push ebx */
  push32((uint32_t)(EBX));
  /* 11294249 call dword ptr [0x11296bc4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11296bc4))), 0x1129424fu);
L_1129424f:;
  /* 1129424f pop edi */
  EDI = (pop32());
  /* 11294250 pop esi */
  ESI = (pop32());
  /* 11294251 pop ebx */
  EBX = (pop32());
  /* 11294252 ret  */
  ESPCHK(0x112941ceu, _esp0);
  ESP += 4; return;
L_11294253:;
  /* 11294253 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11294255 jmp 0x1129424f */
  goto L_1129424f;
}

/* _strncpy @ 0x11294260 (254 bytes, 109 insns) */
void f_11294260(void) {
  FTRACE(0x11294260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294260 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11294264 push edi */
  push32((uint32_t)(EDI));
  /* 11294265 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11294267 je 0x112942e3 */
  if (C.zf) goto L_112942e3;
  /* 11294269 push esi */
  push32((uint32_t)(ESI));
  /* 1129426a push ebx */
  push32((uint32_t)(EBX));
  /* 1129426b mov ebx, ecx */
  EBX = (ECX);
  /* 1129426d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11294271 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11294277 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1129427b jne 0x11294284 */
  if (!C.zf) goto L_11294284;
  /* 1129427d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11294280 jne 0x112942f1 */
  if (!C.zf) goto L_112942f1;
  /* 11294282 jmp 0x112942a5 */
  goto L_112942a5;
L_11294284:;
  /* 11294284 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11294286 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11294287 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11294289 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1129428a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1129428b je 0x112942b2 */
  if (C.zf) goto L_112942b2;
  /* 1129428d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1129428f je 0x112942ba */
  if (C.zf) goto L_112942ba;
  /* 11294291 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11294297 jne 0x11294284 */
  if (!C.zf) goto L_11294284;
  /* 11294299 mov ebx, ecx */
  EBX = (ECX);
  /* 1129429b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1129429e jne 0x112942f1 */
  if (!C.zf) goto L_112942f1;
L_112942a0:;
  /* 112942a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 112942a3 je 0x112942b2 */
  if (C.zf) goto L_112942b2;
L_112942a5:;
  /* 112942a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112942a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112942a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112942aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112942ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112942ad je 0x112942de */
  if (C.zf) goto L_112942de;
  /* 112942af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112942b0 jne 0x112942a5 */
  if (!C.zf) goto L_112942a5;
L_112942b2:;
  /* 112942b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112942b6 pop ebx */
  EBX = (pop32());
  /* 112942b7 pop esi */
  ESI = (pop32());
  /* 112942b8 pop edi */
  EDI = (pop32());
  /* 112942b9 ret  */
  ESPCHK(0x11294260u, _esp0);
  ESP += 4; return;
L_112942ba:;
  /* 112942ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112942c0 je 0x112942d4 */
  if (C.zf) goto L_112942d4;
L_112942c2:;
  /* 112942c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112942c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112942c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112942c6 je 0x11294356 */
  if (C.zf) goto L_11294356;
  /* 112942cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112942d2 jne 0x112942c2 */
  if (!C.zf) goto L_112942c2;
L_112942d4:;
  /* 112942d4 mov ebx, ecx */
  EBX = (ECX);
  /* 112942d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112942d9 jne 0x11294347 */
  if (!C.zf) goto L_11294347;
L_112942db:;
  /* 112942db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112942dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_112942de:;
  /* 112942de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112942df jne 0x112942db */
  if (!C.zf) goto L_112942db;
  /* 112942e1 pop ebx */
  EBX = (pop32());
  /* 112942e2 pop esi */
  ESI = (pop32());
L_112942e3:;
  /* 112942e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112942e7 pop edi */
  EDI = (pop32());
  /* 112942e8 ret  */
  ESPCHK(0x11294260u, _esp0);
  ESP += 4; return;
L_112942e9:;
  /* 112942e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112942eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112942ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112942ef je 0x112942a0 */
  if (C.zf) goto L_112942a0;
L_112942f1:;
  /* 112942f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112942f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112942f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112942fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112942fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112942ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11294301 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11294304 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11294309 je 0x112942e9 */
  if (C.zf) goto L_112942e9;
  /* 1129430b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1129430d je 0x1129433b */
  if (C.zf) goto L_1129433b;
  /* 1129430f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11294311 je 0x11294331 */
  if (C.zf) goto L_11294331;
  /* 11294313 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11294319 je 0x11294327 */
  if (C.zf) goto L_11294327;
  /* 1129431b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11294321 jne 0x112942e9 */
  if (!C.zf) goto L_112942e9;
  /* 11294323 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11294325 jmp 0x1129433f */
  goto L_1129433f;
L_11294327:;
  /* 11294327 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1129432d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1129432f jmp 0x1129433f */
  goto L_1129433f;
L_11294331:;
  /* 11294331 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11294337 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11294339 jmp 0x1129433f */
  goto L_1129433f;
L_1129433b:;
  /* 1129433b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1129433d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1129433f:;
  /* 1129433f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11294342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11294344 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11294345 je 0x11294351 */
  if (C.zf) goto L_11294351;
L_11294347:;
  /* 11294347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11294349:;
  /* 11294349 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1129434b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1129434e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1129434f jne 0x11294349 */
  if (!C.zf) goto L_11294349;
L_11294351:;
  /* 11294351 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11294354 jne 0x112942db */
  if (!C.zf) goto L_112942db;
L_11294356:;
  /* 11294356 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1129435a pop ebx */
  EBX = (pop32());
  /* 1129435b pop esi */
  ESI = (pop32());
  /* 1129435c pop edi */
  EDI = (pop32());
  /* 1129435d ret  */
  ESPCHK(0x11294260u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11294360 (88 bytes, 40 insns) */
void f_11294360(void) {
  FTRACE(0x11294360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294360 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11294364 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11294368 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1129436a je 0x112943b3 */
  if (C.zf) goto L_112943b3;
  /* 1129436c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1129436e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11294372 push edi */
  push32((uint32_t)(EDI));
  /* 11294373 mov edi, ecx */
  EDI = (ECX);
  /* 11294375 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294378 jb 0x112943a7 */
  if (C.cf) goto L_112943a7;
  /* 1129437a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1129437c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1129437f je 0x11294389 */
  if (C.zf) goto L_11294389;
  /* 11294381 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11294383:;
  /* 11294383 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11294385 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11294386 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11294387 jne 0x11294383 */
  if (!C.zf) goto L_11294383;
L_11294389:;
  /* 11294389 mov ecx, eax */
  ECX = (EAX);
  /* 1129438b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1129438e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11294390 mov ecx, eax */
  ECX = (EAX);
  /* 11294392 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11294395 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11294397 mov ecx, edx */
  ECX = (EDX);
  /* 11294399 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1129439c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1129439f je 0x112943a7 */
  if (C.zf) goto L_112943a7;
  /* 112943a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 112943a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112943a5 je 0x112943ad */
  if (C.zf) goto L_112943ad;
L_112943a7:;
  /* 112943a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112943a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112943aa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112943ab jne 0x112943a7 */
  if (!C.zf) goto L_112943a7;
L_112943ad:;
  /* 112943ad mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112943b1 pop edi */
  EDI = (pop32());
  /* 112943b2 ret  */
  ESPCHK(0x11294360u, _esp0);
  ESP += 4; return;
L_112943b3:;
  /* 112943b3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112943b7 ret  */
  ESPCHK(0x11294360u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b8 @ 0x112943b8 (27 bytes, 13 insns) */
void f_112943b8(void) {
  FTRACE(0x112943b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112943b8 mov eax, dword ptr [0x11296bd0] */
  EAX = (r32((uint32_t)(0x11296bd0)));
  /* 112943bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112943bf je 0x112943d0 */
  if (C.zf) goto L_112943d0;
  /* 112943c1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 112943c5 call eax */
  call_ind((uint32_t)(EAX), 0x112943c7u);
  /* 112943c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112943c9 pop ecx */
  ECX = (pop32());
  /* 112943ca je 0x112943d0 */
  if (C.zf) goto L_112943d0;
  /* 112943cc push 1 */
  push32((uint32_t)(0x1u));
  /* 112943ce pop eax */
  EAX = (pop32());
  /* 112943cf ret  */
  ESPCHK(0x112943b8u, _esp0);
  ESP += 4; return;
L_112943d0:;
  /* 112943d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112943d2 ret  */
  ESPCHK(0x112943b8u, _esp0);
  ESP += 4; return;
}

/* FUN_100043d3 @ 0x112943d3 (511 bytes, 193 insns) */
void f_112943d3(void) {
  FTRACE(0x112943d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112943d3 push ebp */
  push32((uint32_t)(EBP));
  /* 112943d4 mov ebp, esp */
  EBP = (ESP);
  /* 112943d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112943d8 push 0x11295478 */
  push32((uint32_t)(0x11295478u));
  /* 112943dd push 0x11294ba0 */
  push32((uint32_t)(0x11294ba0u));
  /* 112943e2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112943e8 push eax */
  push32((uint32_t)(EAX));
  /* 112943e9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112943f0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112943f3 push ebx */
  push32((uint32_t)(EBX));
  /* 112943f4 push esi */
  push32((uint32_t)(ESI));
  /* 112943f5 push edi */
  push32((uint32_t)(EDI));
  /* 112943f6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112943f9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112943fb cmp dword ptr [0x11296bf8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11296bf8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294401 jne 0x11294449 */
  if (!C.zf) goto L_11294449;
  /* 11294403 push edi */
  push32((uint32_t)(EDI));
  /* 11294404 push edi */
  push32((uint32_t)(EDI));
  /* 11294405 push 1 */
  push32((uint32_t)(0x1u));
  /* 11294407 pop ebx */
  EBX = (pop32());
  /* 11294408 push ebx */
  push32((uint32_t)(EBX));
  /* 11294409 push 0x11295470 */
  push32((uint32_t)(0x11295470u));
  /* 1129440e mov esi, 0x100 */
  ESI = (0x100u);
  /* 11294413 push esi */
  push32((uint32_t)(ESI));
  /* 11294414 push edi */
  push32((uint32_t)(EDI));
  /* 11294415 call dword ptr [0x11295014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295014))), 0x1129441bu);
  /* 1129441b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129441d je 0x11294427 */
  if (C.zf) goto L_11294427;
  /* 1129441f mov dword ptr [0x11296bf8], ebx */
  w32((uint32_t)(0x11296bf8), (EBX));
  /* 11294425 jmp 0x11294449 */
  goto L_11294449;
L_11294427:;
  /* 11294427 push edi */
  push32((uint32_t)(EDI));
  /* 11294428 push edi */
  push32((uint32_t)(EDI));
  /* 11294429 push ebx */
  push32((uint32_t)(EBX));
  /* 1129442a push 0x1129546c */
  push32((uint32_t)(0x1129546cu));
  /* 1129442f push esi */
  push32((uint32_t)(ESI));
  /* 11294430 push edi */
  push32((uint32_t)(EDI));
  /* 11294431 call dword ptr [0x11295018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295018))), 0x11294437u);
  /* 11294437 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11294439 je 0x11294561 */
  if (C.zf) goto L_11294561;
  /* 1129443f mov dword ptr [0x11296bf8], 2 */
  w32((uint32_t)(0x11296bf8), (0x2u));
L_11294449:;
  /* 11294449 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129444c jle 0x1129445e */
  if ((C.zf||C.sf!=C.of)) goto L_1129445e;
  /* 1129444e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11294451 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11294454 call 0x112945f7 */
  push32(0x11294459u); f_112945f7();
  /* 11294459 pop ecx */
  ECX = (pop32());
  /* 1129445a pop ecx */
  ECX = (pop32());
  /* 1129445b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1129445e:;
  /* 1129445e mov eax, dword ptr [0x11296bf8] */
  EAX = (r32((uint32_t)(0x11296bf8)));
  /* 11294463 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294466 jne 0x11294485 */
  if (!C.zf) goto L_11294485;
  /* 11294468 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1129446b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1129446e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11294471 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11294474 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11294477 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1129447a call dword ptr [0x11295018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295018))), 0x11294480u);
  /* 11294480 jmp 0x11294563 */
  goto L_11294563;
L_11294485:;
  /* 11294485 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294488 jne 0x11294561 */
  if (!C.zf) goto L_11294561;
  /* 1129448e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294491 jne 0x1129449b */
  if (!C.zf) goto L_1129449b;
  /* 11294493 mov eax, dword ptr [0x11296bf0] */
  EAX = (r32((uint32_t)(0x11296bf0)));
  /* 11294498 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1129449b:;
  /* 1129449b push edi */
  push32((uint32_t)(EDI));
  /* 1129449c push edi */
  push32((uint32_t)(EDI));
  /* 1129449d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112944a0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112944a3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 112944a6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112944a8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112944aa and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 112944ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112944ae push eax */
  push32((uint32_t)(EAX));
  /* 112944af push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 112944b2 call dword ptr [0x1129501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129501c))), 0x112944b8u);
  /* 112944b8 mov ebx, eax */
  EBX = (EAX);
  /* 112944ba mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 112944bd cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112944bf je 0x11294561 */
  if (C.zf) goto L_11294561;
  /* 112944c5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 112944c8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 112944cb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112944ce and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112944d0 call 0x11294c80 */
  push32(0x112944d5u); f_11294c80();
  /* 112944d5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 112944d8 mov eax, esp */
  EAX = (ESP);
  /* 112944da mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112944dd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112944e1 jmp 0x112944f6 */
  goto L_112944f6;
  /* 112944e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 112944e5 pop eax */
  EAX = (pop32());
  /* 112944e6 ret  */
  ESPCHK(0x112943d3u, _esp0);
  ESP += 4; return;
  /* 112944e7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 112944ea xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112944ec mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 112944ef or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112944f3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_112944f6:;
  /* 112944f6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112944f9 je 0x11294561 */
  if (C.zf) goto L_11294561;
  /* 112944fb push ebx */
  push32((uint32_t)(EBX));
  /* 112944fc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 112944ff push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11294502 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11294505 push 1 */
  push32((uint32_t)(0x1u));
  /* 11294507 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1129450a call dword ptr [0x1129501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129501c))), 0x11294510u);
  /* 11294510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11294512 je 0x11294561 */
  if (C.zf) goto L_11294561;
  /* 11294514 push edi */
  push32((uint32_t)(EDI));
  /* 11294515 push edi */
  push32((uint32_t)(EDI));
  /* 11294516 push ebx */
  push32((uint32_t)(EBX));
  /* 11294517 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1129451a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1129451d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11294520 call dword ptr [0x11295014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295014))), 0x11294526u);
  /* 11294526 mov esi, eax */
  ESI = (EAX);
  /* 11294528 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1129452b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129452d je 0x11294561 */
  if (C.zf) goto L_11294561;
  /* 1129452f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11294533 je 0x11294575 */
  if (C.zf) goto L_11294575;
  /* 11294535 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294538 je 0x112945f0 */
  if (C.zf) goto L_112945f0;
  /* 1129453e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294541 jg 0x11294561 */
  if ((!C.zf&&C.sf==C.of)) goto L_11294561;
  /* 11294543 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11294546 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11294549 push ebx */
  push32((uint32_t)(EBX));
  /* 1129454a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1129454d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11294550 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11294553 call dword ptr [0x11295014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295014))), 0x11294559u);
  /* 11294559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1129455b jne 0x112945f0 */
  if (!C.zf) goto L_112945f0;
L_11294561:;
  /* 11294561 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11294563:;
  /* 11294563 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11294566 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11294569 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11294570 pop edi */
  EDI = (pop32());
  /* 11294571 pop esi */
  ESI = (pop32());
  /* 11294572 pop ebx */
  EBX = (pop32());
  /* 11294573 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11294574 ret  */
  ESPCHK(0x112943d3u, _esp0);
  ESP += 4; return;
L_11294575:;
  /* 11294575 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1129457c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1129457f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11294582 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11294584 call 0x11294c80 */
  push32(0x11294589u); f_11294c80();
  /* 11294589 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1129458c mov ebx, esp */
  EBX = (ESP);
  /* 1129458e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11294591 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11294595 jmp 0x112945a9 */
  goto L_112945a9;
  /* 11294597 push 1 */
  push32((uint32_t)(0x1u));
  /* 11294599 pop eax */
  EAX = (pop32());
  /* 1129459a ret  */
  ESPCHK(0x112943d3u, _esp0);
  ESP += 4; return;
  /* 1129459b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1129459e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112945a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112945a2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112945a6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_112945a9:;
  /* 112945a9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112945ab je 0x11294561 */
  if (C.zf) goto L_11294561;
  /* 112945ad push esi */
  push32((uint32_t)(ESI));
  /* 112945ae push ebx */
  push32((uint32_t)(EBX));
  /* 112945af push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 112945b2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 112945b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112945b8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112945bb call dword ptr [0x11295014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295014))), 0x112945c1u);
  /* 112945c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112945c3 je 0x11294561 */
  if (C.zf) goto L_11294561;
  /* 112945c5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112945c8 push edi */
  push32((uint32_t)(EDI));
  /* 112945c9 push edi */
  push32((uint32_t)(EDI));
  /* 112945ca jne 0x112945d0 */
  if (!C.zf) goto L_112945d0;
  /* 112945cc push edi */
  push32((uint32_t)(EDI));
  /* 112945cd push edi */
  push32((uint32_t)(EDI));
  /* 112945ce jmp 0x112945d6 */
  goto L_112945d6;
L_112945d0:;
  /* 112945d0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 112945d3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_112945d6:;
  /* 112945d6 push esi */
  push32((uint32_t)(ESI));
  /* 112945d7 push ebx */
  push32((uint32_t)(EBX));
  /* 112945d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 112945dd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 112945e0 call dword ptr [0x11295068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295068))), 0x112945e6u);
  /* 112945e6 mov esi, eax */
  ESI = (EAX);
  /* 112945e8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112945ea je 0x11294561 */
  if (C.zf) goto L_11294561;
L_112945f0:;
  /* 112945f0 mov eax, esi */
  EAX = (ESI);
  /* 112945f2 jmp 0x11294563 */
  goto L_11294563;
}

/* FUN_100045f7 @ 0x112945f7 (43 bytes, 20 insns) */
void f_112945f7(void) {
  FTRACE(0x112945f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112945f7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 112945fb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112945ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11294601 push esi */
  push32((uint32_t)(ESI));
  /* 11294602 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11294605 je 0x11294614 */
  if (C.zf) goto L_11294614;
L_11294607:;
  /* 11294607 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1129460a je 0x11294614 */
  if (C.zf) goto L_11294614;
  /* 1129460c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1129460d mov esi, ecx */
  ESI = (ECX);
  /* 1129460f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11294610 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11294612 jne 0x11294607 */
  if (!C.zf) goto L_11294607;
L_11294614:;
  /* 11294614 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11294617 pop esi */
  ESI = (pop32());
  /* 11294618 jne 0x1129461f */
  if (!C.zf) goto L_1129461f;
  /* 1129461a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129461e ret  */
  ESPCHK(0x112945f7u, _esp0);
  ESP += 4; return;
L_1129461f:;
  /* 1129461f mov eax, edx */
  EAX = (EDX);
  /* 11294621 ret  */
  ESPCHK(0x112945f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004622 @ 0x11294622 (318 bytes, 123 insns) */
void f_11294622(void) {
  FTRACE(0x11294622u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294622 push ebp */
  push32((uint32_t)(EBP));
  /* 11294623 mov ebp, esp */
  EBP = (ESP);
  /* 11294625 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11294627 push 0x11295490 */
  push32((uint32_t)(0x11295490u));
  /* 1129462c push 0x11294ba0 */
  push32((uint32_t)(0x11294ba0u));
  /* 11294631 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11294637 push eax */
  push32((uint32_t)(EAX));
  /* 11294638 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1129463f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11294642 push ebx */
  push32((uint32_t)(EBX));
  /* 11294643 push esi */
  push32((uint32_t)(ESI));
  /* 11294644 push edi */
  push32((uint32_t)(EDI));
  /* 11294645 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11294648 mov eax, dword ptr [0x11296bfc] */
  EAX = (r32((uint32_t)(0x11296bfc)));
  /* 1129464d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1129464f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294651 jne 0x11294691 */
  if (!C.zf) goto L_11294691;
  /* 11294653 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11294656 push eax */
  push32((uint32_t)(EAX));
  /* 11294657 push 1 */
  push32((uint32_t)(0x1u));
  /* 11294659 pop esi */
  ESI = (pop32());
  /* 1129465a push esi */
  push32((uint32_t)(ESI));
  /* 1129465b push 0x11295470 */
  push32((uint32_t)(0x11295470u));
  /* 11294660 push esi */
  push32((uint32_t)(ESI));
  /* 11294661 call dword ptr [0x1129500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129500c))), 0x11294667u);
  /* 11294667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11294669 je 0x1129466f */
  if (C.zf) goto L_1129466f;
  /* 1129466b mov eax, esi */
  EAX = (ESI);
  /* 1129466d jmp 0x1129468c */
  goto L_1129468c;
L_1129466f:;
  /* 1129466f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11294672 push eax */
  push32((uint32_t)(EAX));
  /* 11294673 push esi */
  push32((uint32_t)(ESI));
  /* 11294674 push 0x1129546c */
  push32((uint32_t)(0x1129546cu));
  /* 11294679 push esi */
  push32((uint32_t)(ESI));
  /* 1129467a push ebx */
  push32((uint32_t)(EBX));
  /* 1129467b call dword ptr [0x11295010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295010))), 0x11294681u);
  /* 11294681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11294683 je 0x11294757 */
  if (C.zf) goto L_11294757;
  /* 11294689 push 2 */
  push32((uint32_t)(0x2u));
  /* 1129468b pop eax */
  EAX = (pop32());
L_1129468c:;
  /* 1129468c mov dword ptr [0x11296bfc], eax */
  w32((uint32_t)(0x11296bfc), (EAX));
L_11294691:;
  /* 11294691 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294694 jne 0x112946ba */
  if (!C.zf) goto L_112946ba;
  /* 11294696 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11294699 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129469b jne 0x112946a2 */
  if (!C.zf) goto L_112946a2;
  /* 1129469d mov eax, dword ptr [0x11296be0] */
  EAX = (r32((uint32_t)(0x11296be0)));
L_112946a2:;
  /* 112946a2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112946a5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112946a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112946ab push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112946ae push eax */
  push32((uint32_t)(EAX));
  /* 112946af call dword ptr [0x11295010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11295010))), 0x112946b5u);
  /* 112946b5 jmp 0x11294759 */
  goto L_11294759;
L_112946ba:;
  /* 112946ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112946bd jne 0x11294757 */
  if (!C.zf) goto L_11294757;
  /* 112946c3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112946c6 jne 0x112946d0 */
  if (!C.zf) goto L_112946d0;
  /* 112946c8 mov eax, dword ptr [0x11296bf0] */
  EAX = (r32((uint32_t)(0x11296bf0)));
  /* 112946cd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_112946d0:;
  /* 112946d0 push ebx */
  push32((uint32_t)(EBX));
  /* 112946d1 push ebx */
  push32((uint32_t)(EBX));
  /* 112946d2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112946d5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112946d8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 112946db neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112946dd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112946df and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 112946e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112946e3 push eax */
  push32((uint32_t)(EAX));
  /* 112946e4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 112946e7 call dword ptr [0x1129501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129501c))), 0x112946edu);
  /* 112946ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 112946f0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112946f2 je 0x11294757 */
  if (C.zf) goto L_11294757;
  /* 112946f4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 112946f7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 112946fa mov eax, edi */
  EAX = (EDI);
  /* 112946fc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112946ff and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11294701 call 0x11294c80 */
  push32(0x11294706u); f_11294c80();
  /* 11294706 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11294709 mov esi, esp */
  ESI = (ESP);
  /* 1129470b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1129470e push edi */
  push32((uint32_t)(EDI));
  /* 1129470f push ebx */
  push32((uint32_t)(EBX));
  /* 11294710 push esi */
  push32((uint32_t)(ESI));
  /* 11294711 call 0x11294360 */
  push32(0x11294716u); f_11294360();
  /* 11294716 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11294719 jmp 0x11294726 */
  goto L_11294726;
  /* 1129471b push 1 */
  push32((uint32_t)(0x1u));
  /* 1129471d pop eax */
  EAX = (pop32());
  /* 1129471e ret  */
  ESPCHK(0x11294622u, _esp0);
  ESP += 4; return;
  /* 1129471f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11294722 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11294724 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11294726:;
  /* 11294726 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1129472a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129472c je 0x11294757 */
  if (C.zf) goto L_11294757;
  /* 1129472e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11294731 push esi */
  push32((uint32_t)(ESI));
  /* 11294732 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11294735 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11294738 push 1 */
  push32((uint32_t)(0x1u));
  /* 1129473a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1129473d call dword ptr [0x1129501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129501c))), 0x11294743u);
  /* 11294743 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294745 je 0x11294757 */
  if (C.zf) goto L_11294757;
  /* 11294747 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1129474a push eax */
  push32((uint32_t)(EAX));
  /* 1129474b push esi */
  push32((uint32_t)(ESI));
  /* 1129474c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1129474f call dword ptr [0x1129500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1129500c))), 0x11294755u);
  /* 11294755 jmp 0x11294759 */
  goto L_11294759;
L_11294757:;
  /* 11294757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11294759:;
  /* 11294759 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1129475c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1129475f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11294766 pop edi */
  EDI = (pop32());
  /* 11294767 pop esi */
  ESI = (pop32());
  /* 11294768 pop ebx */
  EBX = (pop32());
  /* 11294769 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1129476a ret  */
  ESPCHK(0x11294622u, _esp0);
  ESP += 4; return;
}

/* FUN_10004770 @ 0x11294770 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11294770(void) {
  FTRACE(0x11294770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294770 push ebp */
  push32((uint32_t)(EBP));
  /* 11294771 mov ebp, esp */
  EBP = (ESP);
  /* 11294773 push edi */
  push32((uint32_t)(EDI));
  /* 11294774 push esi */
  push32((uint32_t)(ESI));
  /* 11294775 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11294778 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1129477b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1129477e mov eax, ecx */
  EAX = (ECX);
  /* 11294780 mov edx, ecx */
  EDX = (ECX);
  /* 11294782 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11294784 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294786 jbe 0x11294790 */
  if ((C.cf||C.zf)) goto L_11294790;
  /* 11294788 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129478a jb 0x11294908 */
  if (C.cf) goto L_11294908;
L_11294790:;
  /* 11294790 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11294796 jne 0x112947ac */
  if (!C.zf) goto L_112947ac;
  /* 11294798 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1129479b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1129479e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112947a1 jb 0x112947cc */
  if (C.cf) goto L_112947cc;
  /* 112947a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112947a5 jmp dword ptr [edx*4 + 0x112948b8] */
  switch (EDX) {
    case 0: goto L_112948c8;
    case 1: goto L_112948d0;
    case 2: goto L_112948dc;
    case 3: goto L_112948f0;
    default: x86_unimpl("switch@0x112947a5 out of table"); return;
  }
L_112947ac:;
  /* 112947ac mov eax, edi */
  EAX = (EDI);
  /* 112947ae mov edx, 3 */
  EDX = (0x3u);
  /* 112947b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112947b6 jb 0x112947c4 */
  if (C.cf) goto L_112947c4;
  /* 112947b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112947bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112947bd jmp dword ptr [eax*4 + 0x112947d0] */
  switch (EAX) {
    case 1: goto L_112947e0;
    case 2: goto L_1129480c;
    case 3: goto L_11294830;
    default: x86_unimpl("switch@0x112947bd out of table"); return;
  }
L_112947c4:;
  /* 112947c4 jmp dword ptr [ecx*4 + 0x112948c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x112948c8)))); return;
  /* 112947cb nop  */
  /* nop */
L_112947cc:;
  /* 112947cc jmp dword ptr [ecx*4 + 0x1129484c] */
  switch (ECX) {
    case 0: goto L_112948af;
    case 1: goto L_1129489c;
    case 2: goto L_11294894;
    case 3: goto L_1129488c;
    case 4: goto L_11294884;
    case 5: goto L_1129487c;
    case 6: goto L_11294874;
    case 7: goto L_1129486c;
    default: x86_unimpl("switch@0x112947cc out of table"); return;
  }
  /* 112947d3 nop  */
  /* nop */
L_112947e0:;
  /* 112947e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112947e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112947e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112947e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112947e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112947ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112947ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112947f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112947f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112947f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112947fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112947fe jb 0x112947cc */
  if (C.cf) goto L_112947cc;
  /* 11294800 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11294802 jmp dword ptr [edx*4 + 0x112948b8] */
  switch (EDX) {
    case 0: goto L_112948c8;
    case 1: goto L_112948d0;
    case 2: goto L_112948dc;
    case 3: goto L_112948f0;
    default: x86_unimpl("switch@0x11294802 out of table"); return;
  }
  /* 11294809 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1129480c:;
  /* 1129480c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1129480e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11294810 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11294812 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11294815 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11294818 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1129481b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1129481e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11294821 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294824 jb 0x112947cc */
  if (C.cf) goto L_112947cc;
  /* 11294826 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11294828 jmp dword ptr [edx*4 + 0x112948b8] */
  switch (EDX) {
    case 0: goto L_112948c8;
    case 1: goto L_112948d0;
    case 2: goto L_112948dc;
    case 3: goto L_112948f0;
    default: x86_unimpl("switch@0x11294828 out of table"); return;
  }
  /* 1129482f nop  */
  /* nop */
L_11294830:;
  /* 11294830 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11294832 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11294834 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11294836 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11294837 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1129483a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1129483b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1129483e jb 0x112947cc */
  if (C.cf) goto L_112947cc;
  /* 11294840 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11294842 jmp dword ptr [edx*4 + 0x112948b8] */
  switch (EDX) {
    case 0: goto L_112948c8;
    case 1: goto L_112948d0;
    case 2: goto L_112948dc;
    case 3: goto L_112948f0;
    default: x86_unimpl("switch@0x11294842 out of table"); return;
  }
  /* 11294849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1129486c:;
  /* 1129486c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11294870 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11294874:;
  /* 11294874 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11294878 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1129487c:;
  /* 1129487c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11294880 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11294884:;
  /* 11294884 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11294888 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1129488c:;
  /* 1129488c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11294890 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11294894:;
  /* 11294894 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11294898 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1129489c:;
  /* 1129489c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 112948a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 112948a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112948ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112948ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112948af:;
  /* 112948af jmp dword ptr [edx*4 + 0x112948b8] */
  switch (EDX) {
    case 0: goto L_112948c8;
    case 1: goto L_112948d0;
    case 2: goto L_112948dc;
    case 3: goto L_112948f0;
    default: x86_unimpl("switch@0x112948af out of table"); return;
  }
  /* 112948b6 mov edi, edi */
  EDI = (EDI);
L_112948c8:;
  /* 112948c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112948cb pop esi */
  ESI = (pop32());
  /* 112948cc pop edi */
  EDI = (pop32());
  /* 112948cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112948ce ret  */
  ESPCHK(0x11294770u, _esp0);
  ESP += 4; return;
  /* 112948cf nop  */
  /* nop */
L_112948d0:;
  /* 112948d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112948d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112948d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112948d7 pop esi */
  ESI = (pop32());
  /* 112948d8 pop edi */
  EDI = (pop32());
  /* 112948d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112948da ret  */
  ESPCHK(0x11294770u, _esp0);
  ESP += 4; return;
  /* 112948db nop  */
  /* nop */
L_112948dc:;
  /* 112948dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112948de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112948e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112948e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112948e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112948e9 pop esi */
  ESI = (pop32());
  /* 112948ea pop edi */
  EDI = (pop32());
  /* 112948eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112948ec ret  */
  ESPCHK(0x11294770u, _esp0);
  ESP += 4; return;
  /* 112948ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112948f0:;
  /* 112948f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112948f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112948f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112948f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112948fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112948fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11294900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11294903 pop esi */
  ESI = (pop32());
  /* 11294904 pop edi */
  EDI = (pop32());
  /* 11294905 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11294906 ret  */
  ESPCHK(0x11294770u, _esp0);
  ESP += 4; return;
  /* 11294907 nop  */
  /* nop */
L_11294908:;
  /* 11294908 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1129490c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11294910 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11294916 jne 0x1129493c */
  if (!C.zf) goto L_1129493c;
  /* 11294918 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1129491b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1129491e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294921 jb 0x11294930 */
  if (C.cf) goto L_11294930;
  /* 11294923 std  */
  C.df=1;
  /* 11294924 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11294926 cld  */
  C.df=0;
  /* 11294927 jmp dword ptr [edx*4 + 0x11294a50] */
  switch (EDX) {
    case 0: goto L_11294a60;
    case 1: goto L_11294a68;
    case 2: goto L_11294a78;
    case 3: goto L_11294a8c;
    default: x86_unimpl("switch@0x11294927 out of table"); return;
  }
  /* 1129492e mov edi, edi */
  EDI = (EDI);
L_11294930:;
  /* 11294930 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11294932 jmp dword ptr [ecx*4 + 0x11294a00] */
  switch (ECX) {
    case 0: goto L_11294a47;
    default: x86_unimpl("switch@0x11294932 out of table"); return;
  }
  /* 11294939 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1129493c:;
  /* 1129493c mov eax, edi */
  EAX = (EDI);
  /* 1129493e mov edx, 3 */
  EDX = (0x3u);
  /* 11294943 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294946 jb 0x11294954 */
  if (C.cf) goto L_11294954;
  /* 11294948 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1129494b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129494d jmp dword ptr [eax*4 + 0x11294958] */
  switch (EAX) {
    case 1: goto L_11294968;
    case 2: goto L_11294988;
    case 3: goto L_112949b0;
    default: x86_unimpl("switch@0x1129494d out of table"); return;
  }
L_11294954:;
  /* 11294954 jmp dword ptr [ecx*4 + 0x11294a50] */
  switch (ECX) {
    case 0: goto L_11294a60;
    case 1: goto L_11294a68;
    case 2: goto L_11294a78;
    case 3: goto L_11294a8c;
    default: x86_unimpl("switch@0x11294954 out of table"); return;
  }
  /* 1129495b nop  */
  /* nop */
L_11294968:;
  /* 11294968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1129496b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1129496d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11294970 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11294971 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11294974 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11294975 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294978 jb 0x11294930 */
  if (C.cf) goto L_11294930;
  /* 1129497a std  */
  C.df=1;
  /* 1129497b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1129497d cld  */
  C.df=0;
  /* 1129497e jmp dword ptr [edx*4 + 0x11294a50] */
  switch (EDX) {
    case 0: goto L_11294a60;
    case 1: goto L_11294a68;
    case 2: goto L_11294a78;
    case 3: goto L_11294a8c;
    default: x86_unimpl("switch@0x1129497e out of table"); return;
  }
  /* 11294985 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11294988:;
  /* 11294988 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1129498b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1129498d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11294990 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11294993 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11294996 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11294999 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129499c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1129499f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112949a2 jb 0x11294930 */
  if (C.cf) goto L_11294930;
  /* 112949a4 std  */
  C.df=1;
  /* 112949a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112949a7 cld  */
  C.df=0;
  /* 112949a8 jmp dword ptr [edx*4 + 0x11294a50] */
  switch (EDX) {
    case 0: goto L_11294a60;
    case 1: goto L_11294a68;
    case 2: goto L_11294a78;
    case 3: goto L_11294a8c;
    default: x86_unimpl("switch@0x112949a8 out of table"); return;
  }
  /* 112949af nop  */
  /* nop */
L_112949b0:;
  /* 112949b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112949b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112949b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112949b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112949bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112949be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112949c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112949c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112949c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112949ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112949cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112949d0 jb 0x11294930 */
  if (C.cf) goto L_11294930;
  /* 112949d6 std  */
  C.df=1;
  /* 112949d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112949d9 cld  */
  C.df=0;
  /* 112949da jmp dword ptr [edx*4 + 0x11294a50] */
  switch (EDX) {
    case 0: goto L_11294a60;
    case 1: goto L_11294a68;
    case 2: goto L_11294a78;
    case 3: goto L_11294a8c;
    default: x86_unimpl("switch@0x112949da out of table"); return;
  }
  /* 112949e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 112949e4 add al, 0x4a */
  { uint32_t _a=(AL),_b=(0x4au),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112949e6 sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112949e8 or al, 0x4a */
  { uint32_t _r=(AL)|(0x4au); AL = (_r); fl_logic(_r,8); }
  /* 112949ea sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112949ec adc al, 0x4a */
  { uint32_t _a=(AL),_b=(0x4au),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 112949ee sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112949f0 sbb al, 0x4a */
  { uint32_t _a=(AL),_b=(0x4au),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112949f2 sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112949f4 and al, 0x4a */
  { uint32_t _r=(AL)&(0x4au); AL = (_r); fl_logic(_r,8); }
  /* 112949f6 sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112949f8 sub al, 0x4a */
  { uint32_t _a=(AL),_b=(0x4au),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112949fa sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112949fc xor al, 0x4a */
  { uint32_t _r=(AL)^(0x4au); AL = (_r); fl_logic(_r,8); }
  /* 112949fe sub dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11294a04 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11294a08 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11294a0c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11294a10 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11294a14 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11294a18 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11294a1c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11294a20 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11294a24 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11294a28 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11294a2c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11294a30 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11294a34 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11294a38 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11294a3c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11294a43 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11294a45 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11294a47:;
  /* 11294a47 jmp dword ptr [edx*4 + 0x11294a50] */
  switch (EDX) {
    case 0: goto L_11294a60;
    case 1: goto L_11294a68;
    case 2: goto L_11294a78;
    case 3: goto L_11294a8c;
    default: x86_unimpl("switch@0x11294a47 out of table"); return;
  }
  /* 11294a4e mov edi, edi */
  EDI = (EDI);
L_11294a60:;
  /* 11294a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11294a63 pop esi */
  ESI = (pop32());
  /* 11294a64 pop edi */
  EDI = (pop32());
  /* 11294a65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11294a66 ret  */
  ESPCHK(0x11294770u, _esp0);
  ESP += 4; return;
  /* 11294a67 nop  */
  /* nop */
L_11294a68:;
  /* 11294a68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11294a6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11294a6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11294a71 pop esi */
  ESI = (pop32());
  /* 11294a72 pop edi */
  EDI = (pop32());
  /* 11294a73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11294a74 ret  */
  ESPCHK(0x11294770u, _esp0);
  ESP += 4; return;
  /* 11294a75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11294a78:;
  /* 11294a78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11294a7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11294a7e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11294a81 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11294a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11294a87 pop esi */
  ESI = (pop32());
  /* 11294a88 pop edi */
  EDI = (pop32());
  /* 11294a89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11294a8a ret  */
  ESPCHK(0x11294770u, _esp0);
  ESP += 4; return;
  /* 11294a8b nop  */
  /* nop */
L_11294a8c:;
  /* 11294a8c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11294a8f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11294a92 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11294a95 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11294a98 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11294a9b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11294a9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11294aa1 pop esi */
  ESI = (pop32());
  /* 11294aa2 pop edi */
  EDI = (pop32());
  /* 11294aa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11294aa4 ret  */
  ESPCHK(0x11294770u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11294aa8 (32 bytes, 18 insns) */
void f_11294aa8(void) {
  FTRACE(0x11294aa8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294aa8 push ebp */
  push32((uint32_t)(EBP));
  /* 11294aa9 mov ebp, esp */
  EBP = (ESP);
  /* 11294aab push ebx */
  push32((uint32_t)(EBX));
  /* 11294aac push esi */
  push32((uint32_t)(ESI));
  /* 11294aad push edi */
  push32((uint32_t)(EDI));
  /* 11294aae push ebp */
  push32((uint32_t)(EBP));
  /* 11294aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 11294ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11294ab3 push 0x11294ac0 */
  push32((uint32_t)(0x11294ac0u));
  /* 11294ab8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11294abb call 0x11294cb0 */
  push32(0x11294ac0u); f_11294cb0();
  /* 11294ac0 pop ebp */
  EBP = (pop32());
  /* 11294ac1 pop edi */
  EDI = (pop32());
  /* 11294ac2 pop esi */
  ESI = (pop32());
  /* 11294ac3 pop ebx */
  EBX = (pop32());
  /* 11294ac4 mov esp, ebp */
  ESP = (EBP);
  /* 11294ac6 pop ebp */
  EBP = (pop32());
  /* 11294ac7 ret  */
  ESPCHK(0x11294aa8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11294aea (104 bytes, 33 insns) */
void f_11294aea(void) {
  FTRACE(0x11294aeau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294aea push ebx */
  push32((uint32_t)(EBX));
  /* 11294aeb push esi */
  push32((uint32_t)(ESI));
  /* 11294aec push edi */
  push32((uint32_t)(EDI));
  /* 11294aed mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11294af1 push eax */
  push32((uint32_t)(EAX));
  /* 11294af2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11294af4 push 0x11294ac8 */
  push32((uint32_t)(0x11294ac8u));
  /* 11294af9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11294b00 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11294b07:;
  /* 11294b07 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11294b0b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11294b0e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11294b11 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294b14 je 0x11294b44 */
  if (C.zf) goto L_11294b44;
  /* 11294b16 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294b1a je 0x11294b44 */
  if (C.zf) goto L_11294b44;
  /* 11294b1c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11294b1f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11294b22 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11294b26 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11294b29 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294b2e jne 0x11294b42 */
  if (!C.zf) goto L_11294b42;
  /* 11294b30 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11294b35 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11294b39 call 0x11294b7e */
  push32(0x11294b3eu); f_11294b7e();
  /* 11294b3e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11294b42u);
L_11294b42:;
  /* 11294b42 jmp 0x11294b07 */
  goto L_11294b07;
L_11294b44:;
  /* 11294b44 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11294b4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11294b4e pop edi */
  EDI = (pop32());
  /* 11294b4f pop esi */
  ESI = (pop32());
  /* 11294b50 pop ebx */
  EBX = (pop32());
  /* 11294b51 ret  */
  ESPCHK(0x11294aeau, _esp0);
  ESP += 4; return;
}

/* FUN_10004b7e @ 0x11294b7e (24 bytes, 10 insns) */
void f_11294b7e(void) {
  FTRACE(0x11294b7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294b7e push ebx */
  push32((uint32_t)(EBX));
  /* 11294b7f push ecx */
  push32((uint32_t)(ECX));
  /* 11294b80 mov ebx, 0x11296780 */
  EBX = (0x11296780u);
  /* 11294b85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11294b88 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11294b8b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11294b8e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11294b91 pop ecx */
  ECX = (pop32());
  /* 11294b92 pop ebx */
  EBX = (pop32());
  /* 11294b93 ret 4 */
  ESPCHK(0x11294b7eu, _esp0);
  ESP += 8; return;
}

/* FUN_10004c5d @ 0x11294c5d (27 bytes, 11 insns) */
void f_11294c5d(void) {
  FTRACE(0x11294c5du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294c5d push ebp */
  push32((uint32_t)(EBP));
  /* 11294c5e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11294c62 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11294c64 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11294c67 push eax */
  push32((uint32_t)(EAX));
  /* 11294c68 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11294c6b push eax */
  push32((uint32_t)(EAX));
  /* 11294c6c call 0x11294aea */
  push32(0x11294c71u); f_11294aea();
  /* 11294c71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11294c74 pop ebp */
  EBP = (pop32());
  /* 11294c75 ret 4 */
  ESPCHK(0x11294c5du, _esp0);
  ESP += 8; return;
}

/* FUN_10004c80 @ 0x11294c80 (47 bytes, 17 insns) */
void f_11294c80(void) {
  FTRACE(0x11294c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294c80 push ecx */
  push32((uint32_t)(ECX));
  /* 11294c81 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294c86 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11294c8a jb 0x11294ca0 */
  if (C.cf) goto L_11294ca0;
L_11294c8c:;
  /* 11294c8c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11294c92 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11294c97 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11294c99 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11294c9e jae 0x11294c8c */
  if (!C.cf) goto L_11294c8c;
L_11294ca0:;
  /* 11294ca0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11294ca2 mov eax, esp */
  EAX = (ESP);
  /* 11294ca4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11294ca6 mov esp, ecx */
  ESP = (ECX);
  /* 11294ca8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11294caa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11294cad push eax */
  push32((uint32_t)(EAX));
  /* 11294cae ret  */
  ESPCHK(0x11294c80u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11294cb0 (6 bytes, 1 insns) */
void f_11294cb0(void) {
  FTRACE(0x11294cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11294cb0 jmp dword ptr [0x11295008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11295008)))); return;
}

