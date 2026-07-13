#include "recomp.h"

/* OnInit @ 0x10931000 (1213 bytes, 313 insns) */
void f_10931000(void) {
  FTRACE(0x10931000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10931000 push ebx */
  push32((uint32_t)(EBX));
  /* 10931001 push esi */
  push32((uint32_t)(ESI));
  /* 10931002 mov esi, dword ptr [0x1093614c] */
  ESI = (r32((uint32_t)(0x1093614c)));
  /* 10931008 push edi */
  push32((uint32_t)(EDI));
  /* 10931009 push 0x10937400 */
  push32((uint32_t)(0x10937400u));
  /* 1093100e push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931013 call esi */
  call_ind((uint32_t)(ESI), 0x10931015u);
  /* 10931015 push 0x109373f0 */
  push32((uint32_t)(0x109373f0u));
  /* 1093101a push 0x10937ca0 */
  push32((uint32_t)(0x10937ca0u));
  /* 1093101f call esi */
  call_ind((uint32_t)(ESI), 0x10931021u);
  /* 10931021 push 0x109373e8 */
  push32((uint32_t)(0x109373e8u));
  /* 10931026 push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 1093102b call esi */
  call_ind((uint32_t)(ESI), 0x1093102du);
  /* 1093102d push 0x109373e0 */
  push32((uint32_t)(0x109373e0u));
  /* 10931032 push 0x10937c48 */
  push32((uint32_t)(0x10937c48u));
  /* 10931037 call esi */
  call_ind((uint32_t)(ESI), 0x10931039u);
  /* 10931039 push 0x109373d8 */
  push32((uint32_t)(0x109373d8u));
  /* 1093103e push 0x10937c40 */
  push32((uint32_t)(0x10937c40u));
  /* 10931043 call esi */
  call_ind((uint32_t)(ESI), 0x10931045u);
  /* 10931045 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 1093104a push 0x109379f8 */
  push32((uint32_t)(0x109379f8u));
  /* 1093104f call esi */
  call_ind((uint32_t)(ESI), 0x10931051u);
  /* 10931051 push 0x109373c4 */
  push32((uint32_t)(0x109373c4u));
  /* 10931056 push 0x10937be8 */
  push32((uint32_t)(0x10937be8u));
  /* 1093105b call esi */
  call_ind((uint32_t)(ESI), 0x1093105du);
  /* 1093105d push 0x109373b8 */
  push32((uint32_t)(0x109373b8u));
  /* 10931062 push 0x10937be0 */
  push32((uint32_t)(0x10937be0u));
  /* 10931067 call esi */
  call_ind((uint32_t)(ESI), 0x10931069u);
  /* 10931069 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093106c push 0x109373ac */
  push32((uint32_t)(0x109373acu));
  /* 10931071 push 0x10937bd8 */
  push32((uint32_t)(0x10937bd8u));
  /* 10931076 call esi */
  call_ind((uint32_t)(ESI), 0x10931078u);
  /* 10931078 push 0x1093739c */
  push32((uint32_t)(0x1093739cu));
  /* 1093107d push 0x10937c18 */
  push32((uint32_t)(0x10937c18u));
  /* 10931082 call esi */
  call_ind((uint32_t)(ESI), 0x10931084u);
  /* 10931084 push 0x1093738c */
  push32((uint32_t)(0x1093738cu));
  /* 10931089 push 0x10937c10 */
  push32((uint32_t)(0x10937c10u));
  /* 1093108e call esi */
  call_ind((uint32_t)(ESI), 0x10931090u);
  /* 10931090 push 0x1093737c */
  push32((uint32_t)(0x1093737cu));
  /* 10931095 push 0x109379d0 */
  push32((uint32_t)(0x109379d0u));
  /* 1093109a call esi */
  call_ind((uint32_t)(ESI), 0x1093109cu);
  /* 1093109c push 0x1093736c */
  push32((uint32_t)(0x1093736cu));
  /* 109310a1 push 0x10937c70 */
  push32((uint32_t)(0x10937c70u));
  /* 109310a6 call esi */
  call_ind((uint32_t)(ESI), 0x109310a8u);
  /* 109310a8 push 0x1093735c */
  push32((uint32_t)(0x1093735cu));
  /* 109310ad push 0x109379e0 */
  push32((uint32_t)(0x109379e0u));
  /* 109310b2 call esi */
  call_ind((uint32_t)(ESI), 0x109310b4u);
  /* 109310b4 push 0x1093734c */
  push32((uint32_t)(0x1093734cu));
  /* 109310b9 push 0x10937b38 */
  push32((uint32_t)(0x10937b38u));
  /* 109310be call esi */
  call_ind((uint32_t)(ESI), 0x109310c0u);
  /* 109310c0 push 0x10937340 */
  push32((uint32_t)(0x10937340u));
  /* 109310c5 push 0x10937bb0 */
  push32((uint32_t)(0x10937bb0u));
  /* 109310ca call esi */
  call_ind((uint32_t)(ESI), 0x109310ccu);
  /* 109310cc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109310cf push 0x10937334 */
  push32((uint32_t)(0x10937334u));
  /* 109310d4 push 0x10937b10 */
  push32((uint32_t)(0x10937b10u));
  /* 109310d9 call esi */
  call_ind((uint32_t)(ESI), 0x109310dbu);
  /* 109310db push 0x10937328 */
  push32((uint32_t)(0x10937328u));
  /* 109310e0 push 0x10937c68 */
  push32((uint32_t)(0x10937c68u));
  /* 109310e5 call esi */
  call_ind((uint32_t)(ESI), 0x109310e7u);
  /* 109310e7 push 0x1093731c */
  push32((uint32_t)(0x1093731cu));
  /* 109310ec push 0x10937ac8 */
  push32((uint32_t)(0x10937ac8u));
  /* 109310f1 call esi */
  call_ind((uint32_t)(ESI), 0x109310f3u);
  /* 109310f3 push 0x10937310 */
  push32((uint32_t)(0x10937310u));
  /* 109310f8 push 0x10937a48 */
  push32((uint32_t)(0x10937a48u));
  /* 109310fd call esi */
  call_ind((uint32_t)(ESI), 0x109310ffu);
  /* 109310ff push 0x10937304 */
  push32((uint32_t)(0x10937304u));
  /* 10931104 push 0x10937c80 */
  push32((uint32_t)(0x10937c80u));
  /* 10931109 call esi */
  call_ind((uint32_t)(ESI), 0x1093110bu);
  /* 1093110b push 0x109372f8 */
  push32((uint32_t)(0x109372f8u));
  /* 10931110 push 0x10937a10 */
  push32((uint32_t)(0x10937a10u));
  /* 10931115 call esi */
  call_ind((uint32_t)(ESI), 0x10931117u);
  /* 10931117 push 0x109372ec */
  push32((uint32_t)(0x109372ecu));
  /* 1093111c push 0x10937a08 */
  push32((uint32_t)(0x10937a08u));
  /* 10931121 call esi */
  call_ind((uint32_t)(ESI), 0x10931123u);
  /* 10931123 push 0x109372e0 */
  push32((uint32_t)(0x109372e0u));
  /* 10931128 push 0x10937a20 */
  push32((uint32_t)(0x10937a20u));
  /* 1093112d call esi */
  call_ind((uint32_t)(ESI), 0x1093112fu);
  /* 1093112f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931132 push 0x109372d4 */
  push32((uint32_t)(0x109372d4u));
  /* 10931137 push 0x10937a18 */
  push32((uint32_t)(0x10937a18u));
  /* 1093113c call esi */
  call_ind((uint32_t)(ESI), 0x1093113eu);
  /* 1093113e push 0x109372c8 */
  push32((uint32_t)(0x109372c8u));
  /* 10931143 push 0x10937ca8 */
  push32((uint32_t)(0x10937ca8u));
  /* 10931148 call esi */
  call_ind((uint32_t)(ESI), 0x1093114au);
  /* 1093114a push 0x109372b8 */
  push32((uint32_t)(0x109372b8u));
  /* 1093114f push 0x10937c90 */
  push32((uint32_t)(0x10937c90u));
  /* 10931154 call esi */
  call_ind((uint32_t)(ESI), 0x10931156u);
  /* 10931156 push 0x109372b0 */
  push32((uint32_t)(0x109372b0u));
  /* 1093115b push 0x10937b20 */
  push32((uint32_t)(0x10937b20u));
  /* 10931160 call esi */
  call_ind((uint32_t)(ESI), 0x10931162u);
  /* 10931162 push 0x109372a8 */
  push32((uint32_t)(0x109372a8u));
  /* 10931167 push 0x10937ad0 */
  push32((uint32_t)(0x10937ad0u));
  /* 1093116c call esi */
  call_ind((uint32_t)(ESI), 0x1093116eu);
  /* 1093116e push 0x109372a0 */
  push32((uint32_t)(0x109372a0u));
  /* 10931173 push 0x10937b80 */
  push32((uint32_t)(0x10937b80u));
  /* 10931178 call esi */
  call_ind((uint32_t)(ESI), 0x1093117au);
  /* 1093117a push 0x10937294 */
  push32((uint32_t)(0x10937294u));
  /* 1093117f push 0x109379d8 */
  push32((uint32_t)(0x109379d8u));
  /* 10931184 call esi */
  call_ind((uint32_t)(ESI), 0x10931186u);
  /* 10931186 push 0x1093728c */
  push32((uint32_t)(0x1093728cu));
  /* 1093118b push 0x10937bc0 */
  push32((uint32_t)(0x10937bc0u));
  /* 10931190 call esi */
  call_ind((uint32_t)(ESI), 0x10931192u);
  /* 10931192 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931195 push 0x10937284 */
  push32((uint32_t)(0x10937284u));
  /* 1093119a push 0x10937b58 */
  push32((uint32_t)(0x10937b58u));
  /* 1093119f call esi */
  call_ind((uint32_t)(ESI), 0x109311a1u);
  /* 109311a1 push 0x10937278 */
  push32((uint32_t)(0x10937278u));
  /* 109311a6 push 0x10937a60 */
  push32((uint32_t)(0x10937a60u));
  /* 109311ab call esi */
  call_ind((uint32_t)(ESI), 0x109311adu);
  /* 109311ad push 0x10937274 */
  push32((uint32_t)(0x10937274u));
  /* 109311b2 push 0x10937bd0 */
  push32((uint32_t)(0x10937bd0u));
  /* 109311b7 call esi */
  call_ind((uint32_t)(ESI), 0x109311b9u);
  /* 109311b9 push 0x1093726c */
  push32((uint32_t)(0x1093726cu));
  /* 109311be push 0x10937c38 */
  push32((uint32_t)(0x10937c38u));
  /* 109311c3 call esi */
  call_ind((uint32_t)(ESI), 0x109311c5u);
  /* 109311c5 push 0x10937264 */
  push32((uint32_t)(0x10937264u));
  /* 109311ca push 0x10937a28 */
  push32((uint32_t)(0x10937a28u));
  /* 109311cf call esi */
  call_ind((uint32_t)(ESI), 0x109311d1u);
  /* 109311d1 push 0x1093725c */
  push32((uint32_t)(0x1093725cu));
  /* 109311d6 push 0x10937a38 */
  push32((uint32_t)(0x10937a38u));
  /* 109311db call esi */
  call_ind((uint32_t)(ESI), 0x109311ddu);
  /* 109311dd push 0x10937254 */
  push32((uint32_t)(0x10937254u));
  /* 109311e2 push 0x10937b70 */
  push32((uint32_t)(0x10937b70u));
  /* 109311e7 call esi */
  call_ind((uint32_t)(ESI), 0x109311e9u);
  /* 109311e9 push 0x10937244 */
  push32((uint32_t)(0x10937244u));
  /* 109311ee push 0x10937b48 */
  push32((uint32_t)(0x10937b48u));
  /* 109311f3 call esi */
  call_ind((uint32_t)(ESI), 0x109311f5u);
  /* 109311f5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109311f8 push 0x1093723c */
  push32((uint32_t)(0x1093723cu));
  /* 109311fd push 0x10937b00 */
  push32((uint32_t)(0x10937b00u));
  /* 10931202 call esi */
  call_ind((uint32_t)(ESI), 0x10931204u);
  /* 10931204 push 0x10937234 */
  push32((uint32_t)(0x10937234u));
  /* 10931209 push 0x10937c58 */
  push32((uint32_t)(0x10937c58u));
  /* 1093120e call esi */
  call_ind((uint32_t)(ESI), 0x10931210u);
  /* 10931210 push 0x1093722c */
  push32((uint32_t)(0x1093722cu));
  /* 10931215 push 0x10937c60 */
  push32((uint32_t)(0x10937c60u));
  /* 1093121a call esi */
  call_ind((uint32_t)(ESI), 0x1093121cu);
  /* 1093121c push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 10931221 push 0x10937af8 */
  push32((uint32_t)(0x10937af8u));
  /* 10931226 call esi */
  call_ind((uint32_t)(ESI), 0x10931228u);
  /* 10931228 push 0x1093721c */
  push32((uint32_t)(0x1093721cu));
  /* 1093122d push 0x10937b28 */
  push32((uint32_t)(0x10937b28u));
  /* 10931232 call esi */
  call_ind((uint32_t)(ESI), 0x10931234u);
  /* 10931234 push 0x10937214 */
  push32((uint32_t)(0x10937214u));
  /* 10931239 push 0x10937bb8 */
  push32((uint32_t)(0x10937bb8u));
  /* 1093123e call esi */
  call_ind((uint32_t)(ESI), 0x10931240u);
  /* 10931240 push 0x10937208 */
  push32((uint32_t)(0x10937208u));
  /* 10931245 push 0x10937a50 */
  push32((uint32_t)(0x10937a50u));
  /* 1093124a call esi */
  call_ind((uint32_t)(ESI), 0x1093124cu);
  /* 1093124c push 0x10937200 */
  push32((uint32_t)(0x10937200u));
  /* 10931251 push 0x10937b40 */
  push32((uint32_t)(0x10937b40u));
  /* 10931256 call esi */
  call_ind((uint32_t)(ESI), 0x10931258u);
  /* 10931258 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093125b push 0x109371f8 */
  push32((uint32_t)(0x109371f8u));
  /* 10931260 push 0x10937a30 */
  push32((uint32_t)(0x10937a30u));
  /* 10931265 call esi */
  call_ind((uint32_t)(ESI), 0x10931267u);
  /* 10931267 push 0x109371f0 */
  push32((uint32_t)(0x109371f0u));
  /* 1093126c push 0x10937c88 */
  push32((uint32_t)(0x10937c88u));
  /* 10931271 call esi */
  call_ind((uint32_t)(ESI), 0x10931273u);
  /* 10931273 push 0x109371ec */
  push32((uint32_t)(0x109371ecu));
  /* 10931278 push 0x10937b90 */
  push32((uint32_t)(0x10937b90u));
  /* 1093127d call esi */
  call_ind((uint32_t)(ESI), 0x1093127fu);
  /* 1093127f push 0x109371e8 */
  push32((uint32_t)(0x109371e8u));
  /* 10931284 push 0x10937b98 */
  push32((uint32_t)(0x10937b98u));
  /* 10931289 call esi */
  call_ind((uint32_t)(ESI), 0x1093128bu);
  /* 1093128b mov esi, dword ptr [0x10936150] */
  ESI = (r32((uint32_t)(0x10936150)));
  /* 10931291 push 0x109371e4 */
  push32((uint32_t)(0x109371e4u));
  /* 10931296 push 0x10937b18 */
  push32((uint32_t)(0x10937b18u));
  /* 1093129b call esi */
  call_ind((uint32_t)(ESI), 0x1093129du);
  /* 1093129d push 0x109371dc */
  push32((uint32_t)(0x109371dcu));
  /* 109312a2 push 0x10937a00 */
  push32((uint32_t)(0x10937a00u));
  /* 109312a7 call esi */
  call_ind((uint32_t)(ESI), 0x109312a9u);
  /* 109312a9 push 0x109371d4 */
  push32((uint32_t)(0x109371d4u));
  /* 109312ae push 0x10937b68 */
  push32((uint32_t)(0x10937b68u));
  /* 109312b3 call esi */
  call_ind((uint32_t)(ESI), 0x109312b5u);
  /* 109312b5 push 0x109371c8 */
  push32((uint32_t)(0x109371c8u));
  /* 109312ba push 0x10937c30 */
  push32((uint32_t)(0x10937c30u));
  /* 109312bf call esi */
  call_ind((uint32_t)(ESI), 0x109312c1u);
  /* 109312c1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109312c4 push 0x109371b8 */
  push32((uint32_t)(0x109371b8u));
  /* 109312c9 push 0x10937c08 */
  push32((uint32_t)(0x10937c08u));
  /* 109312ce call esi */
  call_ind((uint32_t)(ESI), 0x109312d0u);
  /* 109312d0 push 0x109371ac */
  push32((uint32_t)(0x109371acu));
  /* 109312d5 push 0x10937a68 */
  push32((uint32_t)(0x10937a68u));
  /* 109312da call esi */
  call_ind((uint32_t)(ESI), 0x109312dcu);
  /* 109312dc push 0x109371a0 */
  push32((uint32_t)(0x109371a0u));
  /* 109312e1 push 0x10937ba8 */
  push32((uint32_t)(0x10937ba8u));
  /* 109312e6 call esi */
  call_ind((uint32_t)(ESI), 0x109312e8u);
  /* 109312e8 push 0x10937194 */
  push32((uint32_t)(0x10937194u));
  /* 109312ed push 0x10937b08 */
  push32((uint32_t)(0x10937b08u));
  /* 109312f2 call esi */
  call_ind((uint32_t)(ESI), 0x109312f4u);
  /* 109312f4 push 0x10937188 */
  push32((uint32_t)(0x10937188u));
  /* 109312f9 push 0x10937bf0 */
  push32((uint32_t)(0x10937bf0u));
  /* 109312fe call esi */
  call_ind((uint32_t)(ESI), 0x10931300u);
  /* 10931300 push 0x1093717c */
  push32((uint32_t)(0x1093717cu));
  /* 10931305 push 0x10937a98 */
  push32((uint32_t)(0x10937a98u));
  /* 1093130a call esi */
  call_ind((uint32_t)(ESI), 0x1093130cu);
  /* 1093130c push 0x10937170 */
  push32((uint32_t)(0x10937170u));
  /* 10931311 push 0x10937aa0 */
  push32((uint32_t)(0x10937aa0u));
  /* 10931316 call esi */
  call_ind((uint32_t)(ESI), 0x10931318u);
  /* 10931318 push 0x10937164 */
  push32((uint32_t)(0x10937164u));
  /* 1093131d push 0x10937a88 */
  push32((uint32_t)(0x10937a88u));
  /* 10931322 call esi */
  call_ind((uint32_t)(ESI), 0x10931324u);
  /* 10931324 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931327 push 0x10937158 */
  push32((uint32_t)(0x10937158u));
  /* 1093132c push 0x10937a90 */
  push32((uint32_t)(0x10937a90u));
  /* 10931331 call esi */
  call_ind((uint32_t)(ESI), 0x10931333u);
  /* 10931333 push 0x10937150 */
  push32((uint32_t)(0x10937150u));
  /* 10931338 push 0x10937c00 */
  push32((uint32_t)(0x10937c00u));
  /* 1093133d call esi */
  call_ind((uint32_t)(ESI), 0x1093133fu);
  /* 1093133f push 0x10937140 */
  push32((uint32_t)(0x10937140u));
  /* 10931344 push 0x10937ae8 */
  push32((uint32_t)(0x10937ae8u));
  /* 10931349 call esi */
  call_ind((uint32_t)(ESI), 0x1093134bu);
  /* 1093134b push 0x10937130 */
  push32((uint32_t)(0x10937130u));
  /* 10931350 push 0x10937ad8 */
  push32((uint32_t)(0x10937ad8u));
  /* 10931355 call esi */
  call_ind((uint32_t)(ESI), 0x10931357u);
  /* 10931357 push 0x10937124 */
  push32((uint32_t)(0x10937124u));
  /* 1093135c push 0x10937a58 */
  push32((uint32_t)(0x10937a58u));
  /* 10931361 call esi */
  call_ind((uint32_t)(ESI), 0x10931363u);
  /* 10931363 push 0x10937118 */
  push32((uint32_t)(0x10937118u));
  /* 10931368 push 0x10937b30 */
  push32((uint32_t)(0x10937b30u));
  /* 1093136d call esi */
  call_ind((uint32_t)(ESI), 0x1093136fu);
  /* 1093136f push 0x1093710c */
  push32((uint32_t)(0x1093710cu));
  /* 10931374 push 0x109379e8 */
  push32((uint32_t)(0x109379e8u));
  /* 10931379 call esi */
  call_ind((uint32_t)(ESI), 0x1093137bu);
  /* 1093137b push 0x109370fc */
  push32((uint32_t)(0x109370fcu));
  /* 10931380 push 0x10937b88 */
  push32((uint32_t)(0x10937b88u));
  /* 10931385 call esi */
  call_ind((uint32_t)(ESI), 0x10931387u);
  /* 10931387 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093138a push 0x109370ec */
  push32((uint32_t)(0x109370ecu));
  /* 1093138f push 0x10937c78 */
  push32((uint32_t)(0x10937c78u));
  /* 10931394 call esi */
  call_ind((uint32_t)(ESI), 0x10931396u);
  /* 10931396 push 0x109370e4 */
  push32((uint32_t)(0x109370e4u));
  /* 1093139b push 0x10937c28 */
  push32((uint32_t)(0x10937c28u));
  /* 109313a0 call esi */
  call_ind((uint32_t)(ESI), 0x109313a2u);
  /* 109313a2 push 0x109370d4 */
  push32((uint32_t)(0x109370d4u));
  /* 109313a7 push 0x10937bc8 */
  push32((uint32_t)(0x10937bc8u));
  /* 109313ac call esi */
  call_ind((uint32_t)(ESI), 0x109313aeu);
  /* 109313ae push 0x109370cc */
  push32((uint32_t)(0x109370ccu));
  /* 109313b3 push 0x10937bf8 */
  push32((uint32_t)(0x10937bf8u));
  /* 109313b8 call esi */
  call_ind((uint32_t)(ESI), 0x109313bau);
  /* 109313ba push 0x109370c0 */
  push32((uint32_t)(0x109370c0u));
  /* 109313bf push 0x10937ae0 */
  push32((uint32_t)(0x10937ae0u));
  /* 109313c4 call esi */
  call_ind((uint32_t)(ESI), 0x109313c6u);
  /* 109313c6 push 0x109370b8 */
  push32((uint32_t)(0x109370b8u));
  /* 109313cb push 0x10937a80 */
  push32((uint32_t)(0x10937a80u));
  /* 109313d0 call esi */
  call_ind((uint32_t)(ESI), 0x109313d2u);
  /* 109313d2 push 0x109370b4 */
  push32((uint32_t)(0x109370b4u));
  /* 109313d7 push 0x10937c98 */
  push32((uint32_t)(0x10937c98u));
  /* 109313dc call esi */
  call_ind((uint32_t)(ESI), 0x109313deu);
  /* 109313de push 0x109370ac */
  push32((uint32_t)(0x109370acu));
  /* 109313e3 push 0x10937ac0 */
  push32((uint32_t)(0x10937ac0u));
  /* 109313e8 call esi */
  call_ind((uint32_t)(ESI), 0x109313eau);
  /* 109313ea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109313ed push 0x109370a4 */
  push32((uint32_t)(0x109370a4u));
  /* 109313f2 push 0x10937ba0 */
  push32((uint32_t)(0x10937ba0u));
  /* 109313f7 call esi */
  call_ind((uint32_t)(ESI), 0x109313f9u);
  /* 109313f9 push 0x1093709c */
  push32((uint32_t)(0x1093709cu));
  /* 109313fe push 0x10937ab0 */
  push32((uint32_t)(0x10937ab0u));
  /* 10931403 call esi */
  call_ind((uint32_t)(ESI), 0x10931405u);
  /* 10931405 push 0x10937094 */
  push32((uint32_t)(0x10937094u));
  /* 1093140a push 0x10937c50 */
  push32((uint32_t)(0x10937c50u));
  /* 1093140f call esi */
  call_ind((uint32_t)(ESI), 0x10931411u);
  /* 10931411 push 0x10937084 */
  push32((uint32_t)(0x10937084u));
  /* 10931416 push 0x10937b50 */
  push32((uint32_t)(0x10937b50u));
  /* 1093141b call esi */
  call_ind((uint32_t)(ESI), 0x1093141du);
  /* 1093141d push 0x1093707c */
  push32((uint32_t)(0x1093707cu));
  /* 10931422 push 0x10937b78 */
  push32((uint32_t)(0x10937b78u));
  /* 10931427 call esi */
  call_ind((uint32_t)(ESI), 0x10931429u);
  /* 10931429 push 0x10937074 */
  push32((uint32_t)(0x10937074u));
  /* 1093142e push 0x10937af0 */
  push32((uint32_t)(0x10937af0u));
  /* 10931433 call esi */
  call_ind((uint32_t)(ESI), 0x10931435u);
  /* 10931435 mov esi, dword ptr [0x10936148] */
  ESI = (r32((uint32_t)(0x10936148)));
  /* 1093143b push 0x10937064 */
  push32((uint32_t)(0x10937064u));
  /* 10931440 push 0x10937ab8 */
  push32((uint32_t)(0x10937ab8u));
  /* 10931445 call esi */
  call_ind((uint32_t)(ESI), 0x10931447u);
  /* 10931447 mov edi, dword ptr [0x10936158] */
  EDI = (r32((uint32_t)(0x10936158)));
  /* 1093144d push 0x10937058 */
  push32((uint32_t)(0x10937058u));
  /* 10931452 push 0x109379f0 */
  push32((uint32_t)(0x109379f0u));
  /* 10931457 call edi */
  call_ind((uint32_t)(EDI), 0x10931459u);
  /* 10931459 mov ebx, dword ptr [0x1093615c] */
  EBX = (r32((uint32_t)(0x1093615c)));
  /* 1093145f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931462 push 8 */
  push32((uint32_t)(0x8u));
  /* 10931464 push 0x10937aa8 */
  push32((uint32_t)(0x10937aa8u));
  /* 10931469 call ebx */
  call_ind((uint32_t)(EBX), 0x1093146bu);
  /* 1093146b push 0x10937064 */
  push32((uint32_t)(0x10937064u));
  /* 10931470 push 0x10937a40 */
  push32((uint32_t)(0x10937a40u));
  /* 10931475 call esi */
  call_ind((uint32_t)(ESI), 0x10931477u);
  /* 10931477 push 0x10937058 */
  push32((uint32_t)(0x10937058u));
  /* 1093147c push 0x10937c20 */
  push32((uint32_t)(0x10937c20u));
  /* 10931481 call edi */
  call_ind((uint32_t)(EDI), 0x10931483u);
  /* 10931483 push 8 */
  push32((uint32_t)(0x8u));
  /* 10931485 push 0x10937a70 */
  push32((uint32_t)(0x10937a70u));
  /* 1093148a call ebx */
  call_ind((uint32_t)(EBX), 0x1093148cu);
  /* 1093148c mov esi, dword ptr [0x10936154] */
  ESI = (r32((uint32_t)(0x10936154)));
  /* 10931492 push 0x1093704c */
  push32((uint32_t)(0x1093704cu));
  /* 10931497 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931499 call esi */
  call_ind((uint32_t)(ESI), 0x1093149bu);
  /* 1093149b push 0x10937040 */
  push32((uint32_t)(0x10937040u));
  /* 109314a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 109314a2 call esi */
  call_ind((uint32_t)(ESI), 0x109314a4u);
  /* 109314a4 push 0x10937038 */
  push32((uint32_t)(0x10937038u));
  /* 109314a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 109314ab call esi */
  call_ind((uint32_t)(ESI), 0x109314adu);
  /* 109314ad push 0x10937030 */
  push32((uint32_t)(0x10937030u));
  /* 109314b2 push 5 */
  push32((uint32_t)(0x5u));
  /* 109314b4 call esi */
  call_ind((uint32_t)(ESI), 0x109314b6u);
  /* 109314b6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109314b9 pop edi */
  EDI = (pop32());
  /* 109314ba pop esi */
  ESI = (pop32());
  /* 109314bb pop ebx */
  EBX = (pop32());
  /* 109314bc ret  */
  ESPCHK(0x10931000u, _esp0);
  ESP += 4; return;
}

/* FUN_100014c0 @ 0x109314c0 (20 bytes, 6 insns) */
void f_109314c0(void) {
  FTRACE(0x109314c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109314c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 109314c4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 109314c5 jne 0x109314cc */
  if (!C.zf) goto L_109314cc;
  /* 109314c7 call 0x10931000 */
  push32(0x109314ccu); f_10931000();
L_109314cc:;
  /* 109314cc mov eax, 1 */
  EAX = (0x1u);
  /* 109314d1 ret 0xc */
  ESPCHK(0x109314c0u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x109314e0 (6259 bytes, 1926 insns) */
void f_109314e0(void) {
  FTRACE(0x109314e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109314e0 push ebx */
  push32((uint32_t)(EBX));
  /* 109314e1 push ebp */
  push32((uint32_t)(EBP));
  /* 109314e2 push esi */
  push32((uint32_t)(ESI));
  /* 109314e3 push edi */
  push32((uint32_t)(EDI));
  /* 109314e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109314e6 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x109314ecu);
  /* 109314ec mov ebp, dword ptr [0x109360b0] */
  EBP = (r32((uint32_t)(0x109360b0)));
  /* 109314f2 mov ebx, dword ptr [0x109360bc] */
  EBX = (r32((uint32_t)(0x109360bc)));
  /* 109314f8 mov esi, dword ptr [0x109360c0] */
  ESI = (r32((uint32_t)(0x109360c0)));
  /* 109314fe mov edi, dword ptr [0x109360b8] */
  EDI = (r32((uint32_t)(0x109360b8)));
  /* 10931504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931507 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931509 je 0x10931676 */
  if (C.zf) goto L_10931676;
  /* 1093150f push 0 */
  push32((uint32_t)(0x0u));
  /* 10931511 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931513 call ebp */
  call_ind((uint32_t)(EBP), 0x10931515u);
  /* 10931515 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931517 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10931519 call ebp */
  call_ind((uint32_t)(EBP), 0x1093151bu);
  /* 1093151b push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10931520 push 3 */
  push32((uint32_t)(0x3u));
  /* 10931522 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931524 call ebx */
  call_ind((uint32_t)(EBX), 0x10931526u);
  /* 10931526 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 1093152b push 1 */
  push32((uint32_t)(0x1u));
  /* 1093152d push 1 */
  push32((uint32_t)(0x1u));
  /* 1093152f call ebx */
  call_ind((uint32_t)(EBX), 0x10931531u);
  /* 10931531 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931533 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931535 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931537 call ebx */
  call_ind((uint32_t)(EBX), 0x10931539u);
  /* 10931539 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093153b push 2 */
  push32((uint32_t)(0x2u));
  /* 1093153d push 1 */
  push32((uint32_t)(0x1u));
  /* 1093153f call ebx */
  call_ind((uint32_t)(EBX), 0x10931541u);
  /* 10931541 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931544 push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 10931549 push 5 */
  push32((uint32_t)(0x5u));
  /* 1093154b push 1 */
  push32((uint32_t)(0x1u));
  /* 1093154d call ebx */
  call_ind((uint32_t)(EBX), 0x1093154fu);
  /* 1093154f push 0x493e0 */
  push32((uint32_t)(0x493e0u));
  /* 10931554 push 4 */
  push32((uint32_t)(0x4u));
  /* 10931556 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931558 call ebx */
  call_ind((uint32_t)(EBX), 0x1093155au);
  /* 1093155a push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1093155f push 3 */
  push32((uint32_t)(0x3u));
  /* 10931561 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931563 call ebx */
  call_ind((uint32_t)(EBX), 0x10931565u);
  /* 10931565 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1093156a push 1 */
  push32((uint32_t)(0x1u));
  /* 1093156c push 2 */
  push32((uint32_t)(0x2u));
  /* 1093156e call ebx */
  call_ind((uint32_t)(EBX), 0x10931570u);
  /* 10931570 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931572 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931574 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931576 call ebx */
  call_ind((uint32_t)(EBX), 0x10931578u);
  /* 10931578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093157a push 2 */
  push32((uint32_t)(0x2u));
  /* 1093157c push 2 */
  push32((uint32_t)(0x2u));
  /* 1093157e call ebx */
  call_ind((uint32_t)(EBX), 0x10931580u);
  /* 10931580 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931583 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10931588 push 5 */
  push32((uint32_t)(0x5u));
  /* 1093158a push 2 */
  push32((uint32_t)(0x2u));
  /* 1093158c call ebx */
  call_ind((uint32_t)(EBX), 0x1093158eu);
  /* 1093158e push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 10931593 push 4 */
  push32((uint32_t)(0x4u));
  /* 10931595 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931597 call ebx */
  call_ind((uint32_t)(EBX), 0x10931599u);
  /* 10931599 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1093159e push 3 */
  push32((uint32_t)(0x3u));
  /* 109315a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 109315a2 call ebx */
  call_ind((uint32_t)(EBX), 0x109315a4u);
  /* 109315a4 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 109315a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 109315ab push 5 */
  push32((uint32_t)(0x5u));
  /* 109315ad call ebx */
  call_ind((uint32_t)(EBX), 0x109315afu);
  /* 109315af push 0 */
  push32((uint32_t)(0x0u));
  /* 109315b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109315b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 109315b5 call ebx */
  call_ind((uint32_t)(EBX), 0x109315b7u);
  /* 109315b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109315b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109315bb push 5 */
  push32((uint32_t)(0x5u));
  /* 109315bd call ebx */
  call_ind((uint32_t)(EBX), 0x109315bfu);
  /* 109315bf add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109315c2 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 109315c7 push 5 */
  push32((uint32_t)(0x5u));
  /* 109315c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 109315cb call ebx */
  call_ind((uint32_t)(EBX), 0x109315cdu);
  /* 109315cd push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 109315d2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109315d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 109315d6 call ebx */
  call_ind((uint32_t)(EBX), 0x109315d8u);
  /* 109315d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109315da push 0x10937b10 */
  push32((uint32_t)(0x10937b10u));
  /* 109315df call esi */
  call_ind((uint32_t)(ESI), 0x109315e1u);
  /* 109315e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 109315e3 call dword ptr [0x109360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360c8))), 0x109315e9u);
  /* 109315e9 push 0x10937a48 */
  push32((uint32_t)(0x10937a48u));
  /* 109315ee call dword ptr [0x109360cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360cc))), 0x109315f4u);
  /* 109315f4 push 0x10937ac8 */
  push32((uint32_t)(0x10937ac8u));
  /* 109315f9 call dword ptr [0x109360c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360c4))), 0x109315ffu);
  /* 109315ff push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10931601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931603 call dword ptr [0x109360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d4))), 0x10931609u);
  /* 10931609 push 2 */
  push32((uint32_t)(0x2u));
  /* 1093160b push 1 */
  push32((uint32_t)(0x1u));
  /* 1093160d call dword ptr [0x109360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d4))), 0x10931613u);
  /* 10931613 push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10931615 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931617 call dword ptr [0x109360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d4))), 0x1093161du);
  /* 1093161d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931620 push 0x10937694 */
  push32((uint32_t)(0x10937694u));
  /* 10931625 call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x1093162bu);
  /* 1093162b push 0x1093768c */
  push32((uint32_t)(0x1093768cu));
  /* 10931630 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 10931635 call edi */
  call_ind((uint32_t)(EDI), 0x10931637u);
  /* 10931637 push 0x10937684 */
  push32((uint32_t)(0x10937684u));
  /* 1093163c push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 10931641 call edi */
  call_ind((uint32_t)(EDI), 0x10931643u);
  /* 10931643 push 0x1093767c */
  push32((uint32_t)(0x1093767cu));
  /* 10931648 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 1093164d call edi */
  call_ind((uint32_t)(EDI), 0x1093164fu);
  /* 1093164f push 0x10937674 */
  push32((uint32_t)(0x10937674u));
  /* 10931654 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 10931659 call edi */
  call_ind((uint32_t)(EDI), 0x1093165bu);
  /* 1093165b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1093165d call dword ptr [0x109360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d0))), 0x10931663u);
  /* 10931663 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10931665 call dword ptr [0x109360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d0))), 0x1093166bu);
  /* 1093166b push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1093166d call dword ptr [0x109360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d0))), 0x10931673u);
  /* 10931673 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931676:;
  /* 10931676 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10931678 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x1093167eu);
  /* 1093167e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931681 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931683 je 0x109317ad */
  if (C.zf) goto L_109317ad;
  /* 10931689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093168b call dword ptr [0x109360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e0))), 0x10931691u);
  /* 10931691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931694 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931696 jne 0x109317ad */
  if (!C.zf) goto L_109317ad;
  /* 1093169c push eax */
  push32((uint32_t)(EAX));
  /* 1093169d push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1093169f call ebp */
  call_ind((uint32_t)(EBP), 0x109316a1u);
  /* 109316a1 push 0x1093765c */
  push32((uint32_t)(0x1093765cu));
  /* 109316a6 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109316ab call edi */
  call_ind((uint32_t)(EDI), 0x109316adu);
  /* 109316ad push 0x10937644 */
  push32((uint32_t)(0x10937644u));
  /* 109316b2 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109316b7 call edi */
  call_ind((uint32_t)(EDI), 0x109316b9u);
  /* 109316b9 push 0x1093762c */
  push32((uint32_t)(0x1093762cu));
  /* 109316be push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109316c3 call edi */
  call_ind((uint32_t)(EDI), 0x109316c5u);
  /* 109316c5 push 0x10937614 */
  push32((uint32_t)(0x10937614u));
  /* 109316ca push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109316cf call edi */
  call_ind((uint32_t)(EDI), 0x109316d1u);
  /* 109316d1 push 0x109375fc */
  push32((uint32_t)(0x109375fcu));
  /* 109316d6 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109316db call edi */
  call_ind((uint32_t)(EDI), 0x109316ddu);
  /* 109316dd push 0x109375e4 */
  push32((uint32_t)(0x109375e4u));
  /* 109316e2 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109316e7 call edi */
  call_ind((uint32_t)(EDI), 0x109316e9u);
  /* 109316e9 push 0x109375cc */
  push32((uint32_t)(0x109375ccu));
  /* 109316ee push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109316f3 call edi */
  call_ind((uint32_t)(EDI), 0x109316f5u);
  /* 109316f5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109316f8 push 0x109375b4 */
  push32((uint32_t)(0x109375b4u));
  /* 109316fd push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 10931702 call edi */
  call_ind((uint32_t)(EDI), 0x10931704u);
  /* 10931704 push 0x1093759c */
  push32((uint32_t)(0x1093759cu));
  /* 10931709 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 1093170e call edi */
  call_ind((uint32_t)(EDI), 0x10931710u);
  /* 10931710 push 0x10937594 */
  push32((uint32_t)(0x10937594u));
  /* 10931715 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 1093171a call edi */
  call_ind((uint32_t)(EDI), 0x1093171cu);
  /* 1093171c push 0x1093758c */
  push32((uint32_t)(0x1093758cu));
  /* 10931721 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 10931726 call edi */
  call_ind((uint32_t)(EDI), 0x10931728u);
  /* 10931728 push 0x10937584 */
  push32((uint32_t)(0x10937584u));
  /* 1093172d push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 10931732 call edi */
  call_ind((uint32_t)(EDI), 0x10931734u);
  /* 10931734 push 0x1093757c */
  push32((uint32_t)(0x1093757cu));
  /* 10931739 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 1093173e call edi */
  call_ind((uint32_t)(EDI), 0x10931740u);
  /* 10931740 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931742 push 0x10937a50 */
  push32((uint32_t)(0x10937a50u));
  /* 10931747 call esi */
  call_ind((uint32_t)(ESI), 0x10931749u);
  /* 10931749 push 1 */
  push32((uint32_t)(0x1u));
  /* 1093174b call dword ptr [0x109360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e4))), 0x10931751u);
  /* 10931751 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931753 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10931755 call ebp */
  call_ind((uint32_t)(EBP), 0x10931757u);
  /* 10931757 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093175a push 0 */
  push32((uint32_t)(0x0u));
  /* 1093175c push 0x10937af8 */
  push32((uint32_t)(0x10937af8u));
  /* 10931761 call esi */
  call_ind((uint32_t)(ESI), 0x10931763u);
  /* 10931763 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931765 call dword ptr [0x109360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e4))), 0x1093176bu);
  /* 1093176b push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10931770 push 3 */
  push32((uint32_t)(0x3u));
  /* 10931772 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931774 call ebx */
  call_ind((uint32_t)(EBX), 0x10931776u);
  /* 10931776 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1093177b push 1 */
  push32((uint32_t)(0x1u));
  /* 1093177d push 0 */
  push32((uint32_t)(0x0u));
  /* 1093177f call ebx */
  call_ind((uint32_t)(EBX), 0x10931781u);
  /* 10931781 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931783 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931785 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931787 call ebx */
  call_ind((uint32_t)(EBX), 0x10931789u);
  /* 10931789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093178b push 2 */
  push32((uint32_t)(0x2u));
  /* 1093178d push 0 */
  push32((uint32_t)(0x0u));
  /* 1093178f call ebx */
  call_ind((uint32_t)(EBX), 0x10931791u);
  /* 10931791 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10931796 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931798 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093179a call ebx */
  call_ind((uint32_t)(EBX), 0x1093179cu);
  /* 1093179c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093179f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 109317a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 109317a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109317a8 call ebx */
  call_ind((uint32_t)(EBX), 0x109317aau);
  /* 109317aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109317ad:;
  /* 109317ad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 109317af call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x109317b5u);
  /* 109317b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109317b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109317ba je 0x10931896 */
  if (C.zf) goto L_10931896;
  /* 109317c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109317c2 call dword ptr [0x109360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e0))), 0x109317c8u);
  /* 109317c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109317cb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109317ce jne 0x10931896 */
  if (!C.zf) goto L_10931896;
  /* 109317d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109317d6 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 109317d8 call ebp */
  call_ind((uint32_t)(EBP), 0x109317dau);
  /* 109317da push 0x1093765c */
  push32((uint32_t)(0x1093765cu));
  /* 109317df push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109317e4 call edi */
  call_ind((uint32_t)(EDI), 0x109317e6u);
  /* 109317e6 push 0x10937644 */
  push32((uint32_t)(0x10937644u));
  /* 109317eb push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109317f0 call edi */
  call_ind((uint32_t)(EDI), 0x109317f2u);
  /* 109317f2 push 0x109375e4 */
  push32((uint32_t)(0x109375e4u));
  /* 109317f7 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109317fc call edi */
  call_ind((uint32_t)(EDI), 0x109317feu);
  /* 109317fe push 0x109375cc */
  push32((uint32_t)(0x109375ccu));
  /* 10931803 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 10931808 call edi */
  call_ind((uint32_t)(EDI), 0x1093180au);
  /* 1093180a push 0x10937594 */
  push32((uint32_t)(0x10937594u));
  /* 1093180f push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 10931814 call edi */
  call_ind((uint32_t)(EDI), 0x10931816u);
  /* 10931816 push 0x1093758c */
  push32((uint32_t)(0x1093758cu));
  /* 1093181b push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 10931820 call edi */
  call_ind((uint32_t)(EDI), 0x10931822u);
  /* 10931822 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931824 push 0x10937a50 */
  push32((uint32_t)(0x10937a50u));
  /* 10931829 call esi */
  call_ind((uint32_t)(ESI), 0x1093182bu);
  /* 1093182b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093182e push 1 */
  push32((uint32_t)(0x1u));
  /* 10931830 call dword ptr [0x109360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e4))), 0x10931836u);
  /* 10931836 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931838 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 1093183a call ebp */
  call_ind((uint32_t)(EBP), 0x1093183cu);
  /* 1093183c push 0x10937574 */
  push32((uint32_t)(0x10937574u));
  /* 10931841 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 10931846 call edi */
  call_ind((uint32_t)(EDI), 0x10931848u);
  /* 10931848 push 0x1093756c */
  push32((uint32_t)(0x1093756cu));
  /* 1093184d push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 10931852 call edi */
  call_ind((uint32_t)(EDI), 0x10931854u);
  /* 10931854 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10931859 push 3 */
  push32((uint32_t)(0x3u));
  /* 1093185b push 0 */
  push32((uint32_t)(0x0u));
  /* 1093185d call ebx */
  call_ind((uint32_t)(EBX), 0x1093185fu);
  /* 1093185f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10931864 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931866 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931868 call ebx */
  call_ind((uint32_t)(EBX), 0x1093186au);
  /* 1093186a push 0 */
  push32((uint32_t)(0x0u));
  /* 1093186c push 0 */
  push32((uint32_t)(0x0u));
  /* 1093186e push 0 */
  push32((uint32_t)(0x0u));
  /* 10931870 call ebx */
  call_ind((uint32_t)(EBX), 0x10931872u);
  /* 10931872 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931875 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931877 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093187b call ebx */
  call_ind((uint32_t)(EBX), 0x1093187du);
  /* 1093187d push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 10931882 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931884 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931886 call ebx */
  call_ind((uint32_t)(EBX), 0x10931888u);
  /* 10931888 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 1093188d push 4 */
  push32((uint32_t)(0x4u));
  /* 1093188f push 0 */
  push32((uint32_t)(0x0u));
  /* 10931891 call ebx */
  call_ind((uint32_t)(EBX), 0x10931893u);
  /* 10931893 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931896:;
  /* 10931896 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10931898 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x1093189eu);
  /* 1093189e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109318a1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109318a3 je 0x10931941 */
  if (C.zf) goto L_10931941;
  /* 109318a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109318ab call dword ptr [0x109360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e0))), 0x109318b1u);
  /* 109318b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109318b4 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109318b7 jne 0x10931941 */
  if (!C.zf) goto L_10931941;
  /* 109318bd push 0 */
  push32((uint32_t)(0x0u));
  /* 109318bf push 0x2d */
  push32((uint32_t)(0x2du));
  /* 109318c1 call ebp */
  call_ind((uint32_t)(EBP), 0x109318c3u);
  /* 109318c3 push 0x1093765c */
  push32((uint32_t)(0x1093765cu));
  /* 109318c8 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109318cd call edi */
  call_ind((uint32_t)(EDI), 0x109318cfu);
  /* 109318cf push 0x109375e4 */
  push32((uint32_t)(0x109375e4u));
  /* 109318d4 push 0x109373d0 */
  push32((uint32_t)(0x109373d0u));
  /* 109318d9 call edi */
  call_ind((uint32_t)(EDI), 0x109318dbu);
  /* 109318db push 0x10937574 */
  push32((uint32_t)(0x10937574u));
  /* 109318e0 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109318e5 call edi */
  call_ind((uint32_t)(EDI), 0x109318e7u);
  /* 109318e7 push 0x10937564 */
  push32((uint32_t)(0x10937564u));
  /* 109318ec push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109318f1 call edi */
  call_ind((uint32_t)(EDI), 0x109318f3u);
  /* 109318f3 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 109318f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 109318fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109318fc call ebx */
  call_ind((uint32_t)(EBX), 0x109318feu);
  /* 109318fe push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10931903 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931907 call ebx */
  call_ind((uint32_t)(EBX), 0x10931909u);
  /* 10931909 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093190c push 0 */
  push32((uint32_t)(0x0u));
  /* 1093190e push 0 */
  push32((uint32_t)(0x0u));
  /* 10931910 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931912 call ebx */
  call_ind((uint32_t)(EBX), 0x10931914u);
  /* 10931914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931916 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931918 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093191a call ebx */
  call_ind((uint32_t)(EBX), 0x1093191cu);
  /* 1093191c push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10931921 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931923 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931925 call ebx */
  call_ind((uint32_t)(EBX), 0x10931927u);
  /* 10931927 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1093192c push 4 */
  push32((uint32_t)(0x4u));
  /* 1093192e push 0 */
  push32((uint32_t)(0x0u));
  /* 10931930 call ebx */
  call_ind((uint32_t)(EBX), 0x10931932u);
  /* 10931932 push 0x1093755c */
  push32((uint32_t)(0x1093755cu));
  /* 10931937 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 1093193c call edi */
  call_ind((uint32_t)(EDI), 0x1093193eu);
  /* 1093193e add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931941:;
  /* 10931941 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10931943 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931949u);
  /* 10931949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093194c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093194e je 0x10931a43 */
  if (C.zf) goto L_10931a43;
  /* 10931954 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931956 call dword ptr [0x109360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e0))), 0x1093195cu);
  /* 1093195c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093195f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10931962 jne 0x10931a43 */
  if (!C.zf) goto L_10931a43;
  /* 10931968 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093196a push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1093196c call ebp */
  call_ind((uint32_t)(EBP), 0x1093196eu);
  /* 1093196e push 0x10937574 */
  push32((uint32_t)(0x10937574u));
  /* 10931973 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 10931978 call edi */
  call_ind((uint32_t)(EDI), 0x1093197au);
  /* 1093197a push 0x1093756c */
  push32((uint32_t)(0x1093756cu));
  /* 1093197f push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 10931984 call edi */
  call_ind((uint32_t)(EDI), 0x10931986u);
  /* 10931986 push 0x10937564 */
  push32((uint32_t)(0x10937564u));
  /* 1093198b push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 10931990 call edi */
  call_ind((uint32_t)(EDI), 0x10931992u);
  /* 10931992 push 0x10937554 */
  push32((uint32_t)(0x10937554u));
  /* 10931997 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 1093199c call edi */
  call_ind((uint32_t)(EDI), 0x1093199eu);
  /* 1093199e push 0x1093755c */
  push32((uint32_t)(0x1093755cu));
  /* 109319a3 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109319a8 call edi */
  call_ind((uint32_t)(EDI), 0x109319aau);
  /* 109319aa push 0x1093754c */
  push32((uint32_t)(0x1093754cu));
  /* 109319af push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109319b4 call edi */
  call_ind((uint32_t)(EDI), 0x109319b6u);
  /* 109319b6 push 0x10937530 */
  push32((uint32_t)(0x10937530u));
  /* 109319bb push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109319c0 call edi */
  call_ind((uint32_t)(EDI), 0x109319c2u);
  /* 109319c2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109319c5 push 0x10937510 */
  push32((uint32_t)(0x10937510u));
  /* 109319ca push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109319cf call edi */
  call_ind((uint32_t)(EDI), 0x109319d1u);
  /* 109319d1 push 0x109374f0 */
  push32((uint32_t)(0x109374f0u));
  /* 109319d6 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109319db call edi */
  call_ind((uint32_t)(EDI), 0x109319ddu);
  /* 109319dd push 0x109374d4 */
  push32((uint32_t)(0x109374d4u));
  /* 109319e2 push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109319e7 call edi */
  call_ind((uint32_t)(EDI), 0x109319e9u);
  /* 109319e9 push 0x109374b4 */
  push32((uint32_t)(0x109374b4u));
  /* 109319ee push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109319f3 call edi */
  call_ind((uint32_t)(EDI), 0x109319f5u);
  /* 109319f5 push 0x10937494 */
  push32((uint32_t)(0x10937494u));
  /* 109319fa push 0x10937224 */
  push32((uint32_t)(0x10937224u));
  /* 109319ff call edi */
  call_ind((uint32_t)(EDI), 0x10931a01u);
  /* 10931a01 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10931a06 push 3 */
  push32((uint32_t)(0x3u));
  /* 10931a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a0a call ebx */
  call_ind((uint32_t)(EBX), 0x10931a0cu);
  /* 10931a0c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10931a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a15 call ebx */
  call_ind((uint32_t)(EBX), 0x10931a17u);
  /* 10931a17 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a20 call ebx */
  call_ind((uint32_t)(EBX), 0x10931a22u);
  /* 10931a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a24 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a28 call ebx */
  call_ind((uint32_t)(EBX), 0x10931a2au);
  /* 10931a2a push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10931a2f push 5 */
  push32((uint32_t)(0x5u));
  /* 10931a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a33 call ebx */
  call_ind((uint32_t)(EBX), 0x10931a35u);
  /* 10931a35 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10931a3a push 4 */
  push32((uint32_t)(0x4u));
  /* 10931a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a3e call ebx */
  call_ind((uint32_t)(EBX), 0x10931a40u);
  /* 10931a40 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931a43:;
  /* 10931a43 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931a45 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931a4bu);
  /* 10931a4b mov edi, dword ptr [0x109360dc] */
  EDI = (r32((uint32_t)(0x109360dc)));
  /* 10931a51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931a54 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931a56 je 0x10931a6f */
  if (C.zf) goto L_10931a6f;
  /* 10931a58 push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931a5d push 0x10937b18 */
  push32((uint32_t)(0x10937b18u));
  /* 10931a62 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931a68u);
  /* 10931a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931a6d jg 0x10931a87 */
  if ((!C.zf&&C.sf==C.of)) goto L_10931a87;
L_10931a6f:;
  /* 10931a6f push 0x109379f8 */
  push32((uint32_t)(0x109379f8u));
  /* 10931a74 push 0x10937b18 */
  push32((uint32_t)(0x10937b18u));
  /* 10931a79 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931a7fu);
  /* 10931a7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931a82 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10931a85 jle 0x10931ac1 */
  if ((C.zf||C.sf!=C.of)) goto L_10931ac1;
L_10931a87:;
  /* 10931a87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931a8b call ebp */
  call_ind((uint32_t)(EBP), 0x10931a8du);
  /* 10931a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a8f push 0x10937c18 */
  push32((uint32_t)(0x10937c18u));
  /* 10931a94 call esi */
  call_ind((uint32_t)(ESI), 0x10931a96u);
  /* 10931a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931a98 push 0xbe */
  push32((uint32_t)(0xbeu));
  /* 10931a9d push 0x10937b68 */
  push32((uint32_t)(0x10937b68u));
  /* 10931aa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931aa4 call edi */
  call_ind((uint32_t)(EDI), 0x10931aa6u);
  /* 10931aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931aa8 push 0x10937be8 */
  push32((uint32_t)(0x10937be8u));
  /* 10931aad call esi */
  call_ind((uint32_t)(ESI), 0x10931aafu);
  /* 10931aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ab1 push 0x10937b18 */
  push32((uint32_t)(0x10937b18u));
  /* 10931ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931ab8 call dword ptr [0x109360f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f0))), 0x10931abeu);
  /* 10931abe add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931ac1:;
  /* 10931ac1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10931ac3 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931ac9u);
  /* 10931ac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931acc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931ace je 0x10931b73 */
  if (C.zf) goto L_10931b73;
  /* 10931ad4 push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931ad9 push 0x10937a00 */
  push32((uint32_t)(0x10937a00u));
  /* 10931ade call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931ae4u);
  /* 10931ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931ae9 jg 0x10931b03 */
  if ((!C.zf&&C.sf==C.of)) goto L_10931b03;
  /* 10931aeb push 0x109379f8 */
  push32((uint32_t)(0x109379f8u));
  /* 10931af0 push 0x10937a00 */
  push32((uint32_t)(0x10937a00u));
  /* 10931af5 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931afbu);
  /* 10931afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931afe cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10931b01 jle 0x10931b73 */
  if ((C.zf||C.sf!=C.of)) goto L_10931b73;
L_10931b03:;
  /* 10931b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931b05 push 3 */
  push32((uint32_t)(0x3u));
  /* 10931b07 call ebp */
  call_ind((uint32_t)(EBP), 0x10931b09u);
  /* 10931b09 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 10931b0e push 1 */
  push32((uint32_t)(0x1u));
  /* 10931b10 call dword ptr [0x109360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e8))), 0x10931b16u);
  /* 10931b16 push 0x1093748c */
  push32((uint32_t)(0x1093748cu));
  /* 10931b1b call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x10931b21u);
  /* 10931b21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931b23 push 0x10937be8 */
  push32((uint32_t)(0x10937be8u));
  /* 10931b28 call esi */
  call_ind((uint32_t)(ESI), 0x10931b2au);
  /* 10931b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10931b2c push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10931b31 push 0x10937b18 */
  push32((uint32_t)(0x10937b18u));
  /* 10931b36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931b38 call edi */
  call_ind((uint32_t)(EDI), 0x10931b3au);
  /* 10931b3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10931b3c push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10931b3e push 0x10937a00 */
  push32((uint32_t)(0x10937a00u));
  /* 10931b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931b45 call edi */
  call_ind((uint32_t)(EDI), 0x10931b47u);
  /* 10931b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931b49 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10931b4b push 0x10937c30 */
  push32((uint32_t)(0x10937c30u));
  /* 10931b50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931b52 call edi */
  call_ind((uint32_t)(EDI), 0x10931b54u);
  /* 10931b54 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931b59 push 0x10937c18 */
  push32((uint32_t)(0x10937c18u));
  /* 10931b5e call esi */
  call_ind((uint32_t)(ESI), 0x10931b60u);
  /* 10931b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931b62 push 0xbe */
  push32((uint32_t)(0xbeu));
  /* 10931b67 push 0x10937a00 */
  push32((uint32_t)(0x10937a00u));
  /* 10931b6c push 1 */
  push32((uint32_t)(0x1u));
  /* 10931b6e call edi */
  call_ind((uint32_t)(EDI), 0x10931b70u);
  /* 10931b70 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931b73:;
  /* 10931b73 push 4 */
  push32((uint32_t)(0x4u));
  /* 10931b75 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931b7bu);
  /* 10931b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931b7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931b80 je 0x10931bac */
  if (C.zf) goto L_10931bac;
  /* 10931b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931b84 call dword ptr [0x109360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f8))), 0x10931b8au);
  /* 10931b8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931b8d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931b8f je 0x10931bac */
  if (C.zf) goto L_10931bac;
  /* 10931b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931b93 push 0x10937b38 */
  push32((uint32_t)(0x10937b38u));
  /* 10931b98 call esi */
  call_ind((uint32_t)(ESI), 0x10931b9au);
  /* 10931b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10931b9c push 0x10937c30 */
  push32((uint32_t)(0x10937c30u));
  /* 10931ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931ba3 call dword ptr [0x109360f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f0))), 0x10931ba9u);
  /* 10931ba9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931bac:;
  /* 10931bac push 5 */
  push32((uint32_t)(0x5u));
  /* 10931bae call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931bb4u);
  /* 10931bb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931bb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931bb9 je 0x10931c2b */
  if (C.zf) goto L_10931c2b;
  /* 10931bbb push 0x109379f8 */
  push32((uint32_t)(0x109379f8u));
  /* 10931bc0 push 0x10937a68 */
  push32((uint32_t)(0x10937a68u));
  /* 10931bc5 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931bcbu);
  /* 10931bcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931bce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931bd0 jg 0x10931be9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10931be9;
  /* 10931bd2 push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931bd7 push 0x10937a68 */
  push32((uint32_t)(0x10937a68u));
  /* 10931bdc call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931be2u);
  /* 10931be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931be5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931be7 jle 0x10931c2b */
  if ((C.zf||C.sf!=C.of)) goto L_10931c2b;
L_10931be9:;
  /* 10931be9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931beb push 0x10937ca0 */
  push32((uint32_t)(0x10937ca0u));
  /* 10931bf0 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10931bf6u);
  /* 10931bf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931bfb jne 0x10931c2b */
  if (!C.zf) goto L_10931c2b;
  /* 10931bfd push eax */
  push32((uint32_t)(EAX));
  /* 10931bfe push 5 */
  push32((uint32_t)(0x5u));
  /* 10931c00 call ebp */
  call_ind((uint32_t)(EBP), 0x10931c02u);
  /* 10931c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931c04 push 0x10937bb0 */
  push32((uint32_t)(0x10937bb0u));
  /* 10931c09 call esi */
  call_ind((uint32_t)(ESI), 0x10931c0bu);
  /* 10931c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10931c0d call dword ptr [0x109360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360c8))), 0x10931c13u);
  /* 10931c13 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10931c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931c17 call dword ptr [0x109360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d4))), 0x10931c1du);
  /* 10931c1d push 0x10937484 */
  push32((uint32_t)(0x10937484u));
  /* 10931c22 call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x10931c28u);
  /* 10931c28 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931c2b:;
  /* 10931c2b push 6 */
  push32((uint32_t)(0x6u));
  /* 10931c2d call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931c33u);
  /* 10931c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931c36 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931c38 je 0x10931c8c */
  if (C.zf) goto L_10931c8c;
  /* 10931c3a push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931c3f push 0x10937ba8 */
  push32((uint32_t)(0x10937ba8u));
  /* 10931c44 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931c4au);
  /* 10931c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931c4f jle 0x10931c8c */
  if ((C.zf||C.sf!=C.of)) goto L_10931c8c;
  /* 10931c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931c53 push 6 */
  push32((uint32_t)(0x6u));
  /* 10931c55 call ebp */
  call_ind((uint32_t)(EBP), 0x10931c57u);
  /* 10931c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931c59 push 0x10937b10 */
  push32((uint32_t)(0x10937b10u));
  /* 10931c5e call esi */
  call_ind((uint32_t)(ESI), 0x10931c60u);
  /* 10931c60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10931c62 call dword ptr [0x109360f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f4))), 0x10931c68u);
  /* 10931c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931c6a push 0x10937c68 */
  push32((uint32_t)(0x10937c68u));
  /* 10931c6f call esi */
  call_ind((uint32_t)(ESI), 0x10931c71u);
  /* 10931c71 push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931c78 call dword ptr [0x10936104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936104))), 0x10931c7eu);
  /* 10931c7e push 0x1093747c */
  push32((uint32_t)(0x1093747cu));
  /* 10931c83 call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x10931c89u);
  /* 10931c89 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931c8c:;
  /* 10931c8c push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10931c8e call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931c94u);
  /* 10931c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931c97 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931c99 je 0x10931cd2 */
  if (C.zf) goto L_10931cd2;
  /* 10931c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10931c9d push 0x10937c30 */
  push32((uint32_t)(0x10937c30u));
  /* 10931ca2 call dword ptr [0x10936108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936108))), 0x10931ca8u);
  /* 10931ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931cab cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10931cae jle 0x10931cd2 */
  if ((C.zf||C.sf!=C.of)) goto L_10931cd2;
  /* 10931cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931cb2 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10931cb4 call ebp */
  call_ind((uint32_t)(EBP), 0x10931cb6u);
  /* 10931cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931cb8 push 0x10937a38 */
  push32((uint32_t)(0x10937a38u));
  /* 10931cbd call esi */
  call_ind((uint32_t)(ESI), 0x10931cbfu);
  /* 10931cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10931cc1 push 0xaf */
  push32((uint32_t)(0xafu));
  /* 10931cc6 push 0x10937c30 */
  push32((uint32_t)(0x10937c30u));
  /* 10931ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 10931ccd call edi */
  call_ind((uint32_t)(EDI), 0x10931ccfu);
  /* 10931ccf add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931cd2:;
  /* 10931cd2 push 7 */
  push32((uint32_t)(0x7u));
  /* 10931cd4 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931cdau);
  /* 10931cda mov edi, dword ptr [0x10936100] */
  EDI = (r32((uint32_t)(0x10936100)));
  /* 10931ce0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931ce3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931ce5 je 0x10931dc5 */
  if (C.zf) goto L_10931dc5;
  /* 10931ceb push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931cf0 push 0x10937bf0 */
  push32((uint32_t)(0x10937bf0u));
  /* 10931cf5 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931cfbu);
  /* 10931cfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931d00 jle 0x10931dc5 */
  if ((C.zf||C.sf!=C.of)) goto L_10931dc5;
  /* 10931d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d08 push 7 */
  push32((uint32_t)(0x7u));
  /* 10931d0a call ebp */
  call_ind((uint32_t)(EBP), 0x10931d0cu);
  /* 10931d0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d0e push 0x10937a10 */
  push32((uint32_t)(0x10937a10u));
  /* 10931d13 call esi */
  call_ind((uint32_t)(ESI), 0x10931d15u);
  /* 10931d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d17 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931d19 call edi */
  call_ind((uint32_t)(EDI), 0x10931d1bu);
  /* 10931d1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d1d push 0x10937a10 */
  push32((uint32_t)(0x10937a10u));
  /* 10931d22 call esi */
  call_ind((uint32_t)(ESI), 0x10931d24u);
  /* 10931d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d26 push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 10931d2b push 0x10937a98 */
  push32((uint32_t)(0x10937a98u));
  /* 10931d30 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931d32 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931d38u);
  /* 10931d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d3a push 0x10937a08 */
  push32((uint32_t)(0x10937a08u));
  /* 10931d3f call esi */
  call_ind((uint32_t)(ESI), 0x10931d41u);
  /* 10931d41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d43 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931d45 call edi */
  call_ind((uint32_t)(EDI), 0x10931d47u);
  /* 10931d47 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d4c push 0x10937a08 */
  push32((uint32_t)(0x10937a08u));
  /* 10931d51 call esi */
  call_ind((uint32_t)(ESI), 0x10931d53u);
  /* 10931d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d55 push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 10931d5a push 0x10937aa0 */
  push32((uint32_t)(0x10937aa0u));
  /* 10931d5f push 5 */
  push32((uint32_t)(0x5u));
  /* 10931d61 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931d67u);
  /* 10931d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d69 push 0x10937a20 */
  push32((uint32_t)(0x10937a20u));
  /* 10931d6e call esi */
  call_ind((uint32_t)(ESI), 0x10931d70u);
  /* 10931d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d72 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931d74 call edi */
  call_ind((uint32_t)(EDI), 0x10931d76u);
  /* 10931d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d78 push 0x10937a20 */
  push32((uint32_t)(0x10937a20u));
  /* 10931d7d call esi */
  call_ind((uint32_t)(ESI), 0x10931d7fu);
  /* 10931d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d81 push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 10931d86 push 0x10937a88 */
  push32((uint32_t)(0x10937a88u));
  /* 10931d8b push 5 */
  push32((uint32_t)(0x5u));
  /* 10931d8d call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931d93u);
  /* 10931d93 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931d98 push 0x10937a18 */
  push32((uint32_t)(0x10937a18u));
  /* 10931d9d call esi */
  call_ind((uint32_t)(ESI), 0x10931d9fu);
  /* 10931d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10931da1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931da3 call edi */
  call_ind((uint32_t)(EDI), 0x10931da5u);
  /* 10931da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931da7 push 0x10937a18 */
  push32((uint32_t)(0x10937a18u));
  /* 10931dac call esi */
  call_ind((uint32_t)(ESI), 0x10931daeu);
  /* 10931dae push 0 */
  push32((uint32_t)(0x0u));
  /* 10931db0 push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 10931db5 push 0x10937a90 */
  push32((uint32_t)(0x10937a90u));
  /* 10931dba push 5 */
  push32((uint32_t)(0x5u));
  /* 10931dbc call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931dc2u);
  /* 10931dc2 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931dc5:;
  /* 10931dc5 push 8 */
  push32((uint32_t)(0x8u));
  /* 10931dc7 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931dcdu);
  /* 10931dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931dd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931dd2 je 0x10931efb */
  if (C.zf) goto L_10931efb;
  /* 10931dd8 push 7 */
  push32((uint32_t)(0x7u));
  /* 10931dda call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931de0u);
  /* 10931de0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931de3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931de5 jne 0x10931efb */
  if (!C.zf) goto L_10931efb;
  /* 10931deb push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ded push 8 */
  push32((uint32_t)(0x8u));
  /* 10931def call ebp */
  call_ind((uint32_t)(EBP), 0x10931df1u);
  /* 10931df1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10931df3 push 0x10937b30 */
  push32((uint32_t)(0x10937b30u));
  /* 10931df8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931dfa push 0x10937ab8 */
  push32((uint32_t)(0x10937ab8u));
  /* 10931dff push 0x109379f0 */
  push32((uint32_t)(0x109379f0u));
  /* 10931e04 push 0x10937aa8 */
  push32((uint32_t)(0x10937aa8u));
  /* 10931e09 call dword ptr [0x10936114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936114))), 0x10931e0fu);
  /* 10931e0f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10931e11 push 0x10937a58 */
  push32((uint32_t)(0x10937a58u));
  /* 10931e16 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931e18 push 0x10937a40 */
  push32((uint32_t)(0x10937a40u));
  /* 10931e1d push 0x10937c20 */
  push32((uint32_t)(0x10937c20u));
  /* 10931e22 push 0x10937a70 */
  push32((uint32_t)(0x10937a70u));
  /* 10931e27 call dword ptr [0x10936114] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936114))), 0x10931e2du);
  /* 10931e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e2f push 0x10937aa8 */
  push32((uint32_t)(0x10937aa8u));
  /* 10931e34 call esi */
  call_ind((uint32_t)(ESI), 0x10931e36u);
  /* 10931e36 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e3b push 5 */
  push32((uint32_t)(0x5u));
  /* 10931e3d call edi */
  call_ind((uint32_t)(EDI), 0x10931e3fu);
  /* 10931e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e41 push 0x10937aa8 */
  push32((uint32_t)(0x10937aa8u));
  /* 10931e46 call esi */
  call_ind((uint32_t)(ESI), 0x10931e48u);
  /* 10931e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e4a push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10931e4c push 0x10937ae8 */
  push32((uint32_t)(0x10937ae8u));
  /* 10931e51 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931e53 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931e59u);
  /* 10931e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e5b push 0x10937a70 */
  push32((uint32_t)(0x10937a70u));
  /* 10931e60 call esi */
  call_ind((uint32_t)(ESI), 0x10931e62u);
  /* 10931e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e64 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931e66 call edi */
  call_ind((uint32_t)(EDI), 0x10931e68u);
  /* 10931e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e6a push 0x10937a70 */
  push32((uint32_t)(0x10937a70u));
  /* 10931e6f call esi */
  call_ind((uint32_t)(ESI), 0x10931e71u);
  /* 10931e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e73 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10931e75 push 0x10937ad8 */
  push32((uint32_t)(0x10937ad8u));
  /* 10931e7a push 5 */
  push32((uint32_t)(0x5u));
  /* 10931e7c call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931e82u);
  /* 10931e82 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e87 push 0x10937ca8 */
  push32((uint32_t)(0x10937ca8u));
  /* 10931e8c call esi */
  call_ind((uint32_t)(ESI), 0x10931e8eu);
  /* 10931e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10931e90 push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10931e95 push 0x109379e8 */
  push32((uint32_t)(0x109379e8u));
  /* 10931e9a push 5 */
  push32((uint32_t)(0x5u));
  /* 10931e9c call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931ea2u);
  /* 10931ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ea4 push 0x10937c80 */
  push32((uint32_t)(0x10937c80u));
  /* 10931ea9 call esi */
  call_ind((uint32_t)(ESI), 0x10931eabu);
  /* 10931eab push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ead push 0 */
  push32((uint32_t)(0x0u));
  /* 10931eaf push 0x10937bf0 */
  push32((uint32_t)(0x10937bf0u));
  /* 10931eb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931eb6 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931ebcu);
  /* 10931ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ebe push 0x10937c90 */
  push32((uint32_t)(0x10937c90u));
  /* 10931ec3 call esi */
  call_ind((uint32_t)(ESI), 0x10931ec5u);
  /* 10931ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ec7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931ec9 call edi */
  call_ind((uint32_t)(EDI), 0x10931ecbu);
  /* 10931ecb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931ece push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ed0 push 0x10937c90 */
  push32((uint32_t)(0x10937c90u));
  /* 10931ed5 call esi */
  call_ind((uint32_t)(ESI), 0x10931ed7u);
  /* 10931ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ed9 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10931ede push 0x10937b88 */
  push32((uint32_t)(0x10937b88u));
  /* 10931ee3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10931ee5 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10931eebu);
  /* 10931eeb push 0x226 */
  push32((uint32_t)(0x226u));
  /* 10931ef0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10931ef2 call dword ptr [0x109360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e8))), 0x10931ef8u);
  /* 10931ef8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931efb:;
  /* 10931efb push 0xa */
  push32((uint32_t)(0xau));
  /* 10931efd call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931f03u);
  /* 10931f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931f06 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931f08 je 0x10931f93 */
  if (C.zf) goto L_10931f93;
  /* 10931f0e push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931f13 push 0x10937c00 */
  push32((uint32_t)(0x10937c00u));
  /* 10931f18 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931f1eu);
  /* 10931f1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931f21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931f23 jg 0x10931f3d */
  if ((!C.zf&&C.sf==C.of)) goto L_10931f3d;
  /* 10931f25 push 0x109379f8 */
  push32((uint32_t)(0x109379f8u));
  /* 10931f2a push 0x10937c00 */
  push32((uint32_t)(0x10937c00u));
  /* 10931f2f call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931f35u);
  /* 10931f35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931f38 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10931f3b jle 0x10931f93 */
  if ((C.zf||C.sf!=C.of)) goto L_10931f93;
L_10931f3d:;
  /* 10931f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10931f3f push 0xa */
  push32((uint32_t)(0xau));
  /* 10931f41 call ebp */
  call_ind((uint32_t)(EBP), 0x10931f43u);
  /* 10931f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931f45 push 0x10937c10 */
  push32((uint32_t)(0x10937c10u));
  /* 10931f4a call esi */
  call_ind((uint32_t)(ESI), 0x10931f4cu);
  /* 10931f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10931f4e push 0xc3 */
  push32((uint32_t)(0xc3u));
  /* 10931f53 push 0x10937b08 */
  push32((uint32_t)(0x10937b08u));
  /* 10931f58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931f5a call dword ptr [0x109360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360dc))), 0x10931f60u);
  /* 10931f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931f62 push 0x10937a28 */
  push32((uint32_t)(0x10937a28u));
  /* 10931f67 call esi */
  call_ind((uint32_t)(ESI), 0x10931f69u);
  /* 10931f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931f6b push 0x10937b08 */
  push32((uint32_t)(0x10937b08u));
  /* 10931f70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931f72 call dword ptr [0x109360f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f0))), 0x10931f78u);
  /* 10931f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931f7a push 0x10937bd8 */
  push32((uint32_t)(0x10937bd8u));
  /* 10931f7f call esi */
  call_ind((uint32_t)(ESI), 0x10931f81u);
  /* 10931f81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931f83 push 0x10937b08 */
  push32((uint32_t)(0x10937b08u));
  /* 10931f88 push 1 */
  push32((uint32_t)(0x1u));
  /* 10931f8a call dword ptr [0x109360f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f0))), 0x10931f90u);
  /* 10931f90 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10931f93:;
  /* 10931f93 push 9 */
  push32((uint32_t)(0x9u));
  /* 10931f95 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10931f9bu);
  /* 10931f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931f9e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10931fa0 je 0x1093205e */
  if (C.zf) goto L_1093205e;
  /* 10931fa6 push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10931fab push 0x10937a68 */
  push32((uint32_t)(0x10937a68u));
  /* 10931fb0 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10931fb6u);
  /* 10931fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10931fbb jle 0x1093205e */
  if ((C.zf||C.sf!=C.of)) goto L_1093205e;
  /* 10931fc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931fc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10931fc5 call ebp */
  call_ind((uint32_t)(EBP), 0x10931fc7u);
  /* 10931fc7 push 0x1093746c */
  push32((uint32_t)(0x1093746cu));
  /* 10931fcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10931fce push 0x10937464 */
  push32((uint32_t)(0x10937464u));
  /* 10931fd3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10931fd5 call dword ptr [0x1093610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093610c))), 0x10931fdbu);
  /* 10931fdb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10931fde sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10931fe1 je 0x10932036 */
  if (C.zf) goto L_10932036;
  /* 10931fe3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10931fe4 jne 0x10932043 */
  if (!C.zf) goto L_10932043;
  /* 10931fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931fe8 push 0x10937bb0 */
  push32((uint32_t)(0x10937bb0u));
  /* 10931fed call esi */
  call_ind((uint32_t)(ESI), 0x10931fefu);
  /* 10931fef push 2 */
  push32((uint32_t)(0x2u));
  /* 10931ff1 call dword ptr [0x109360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360c8))), 0x10931ff7u);
  /* 10931ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10931ff9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10931ffb call ebp */
  call_ind((uint32_t)(EBP), 0x10931ffdu);
  /* 10931ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 10931fff push 0x10937c68 */
  push32((uint32_t)(0x10937c68u));
  /* 10932004 call esi */
  call_ind((uint32_t)(ESI), 0x10932006u);
  /* 10932006 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932008 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1093200a push 0x10937c28 */
  push32((uint32_t)(0x10937c28u));
  /* 1093200f push 1 */
  push32((uint32_t)(0x1u));
  /* 10932011 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10932017u);
  /* 10932017 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932019 push 0x10937ca0 */
  push32((uint32_t)(0x10937ca0u));
  /* 1093201e call esi */
  call_ind((uint32_t)(ESI), 0x10932020u);
  /* 10932020 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932022 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10932024 push 0x10937c78 */
  push32((uint32_t)(0x10937c78u));
  /* 10932029 push 2 */
  push32((uint32_t)(0x2u));
  /* 1093202b call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10932031u);
  /* 10932031 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932034 jmp 0x10932043 */
  goto L_10932043;
L_10932036:;
  /* 10932036 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10932038 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093203a call dword ptr [0x109360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d4))), 0x10932040u);
  /* 10932040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932043:;
  /* 10932043 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932045 push 0x10937a30 */
  push32((uint32_t)(0x10937a30u));
  /* 1093204a call esi */
  call_ind((uint32_t)(ESI), 0x1093204cu);
  /* 1093204c push 0 */
  push32((uint32_t)(0x0u));
  /* 1093204e push 0x10937b78 */
  push32((uint32_t)(0x10937b78u));
  /* 10932053 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932055 call dword ptr [0x109360f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f0))), 0x1093205bu);
  /* 1093205b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1093205e:;
  /* 1093205e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10932060 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932066u);
  /* 10932066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932069 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093206b je 0x109320c1 */
  if (C.zf) goto L_109320c1;
  /* 1093206d push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10932072 push 0x10937bc8 */
  push32((uint32_t)(0x10937bc8u));
  /* 10932077 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x1093207du);
  /* 1093207d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932082 jg 0x1093209b */
  if ((!C.zf&&C.sf==C.of)) goto L_1093209b;
  /* 10932084 push 0x109379f8 */
  push32((uint32_t)(0x109379f8u));
  /* 10932089 push 0x10937bc8 */
  push32((uint32_t)(0x10937bc8u));
  /* 1093208e call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932094u);
  /* 10932094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932099 jle 0x109320c1 */
  if ((C.zf||C.sf!=C.of)) goto L_109320c1;
L_1093209b:;
  /* 1093209b push 0 */
  push32((uint32_t)(0x0u));
  /* 1093209d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1093209f call ebp */
  call_ind((uint32_t)(EBP), 0x109320a1u);
  /* 109320a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109320a3 push 0x109379e0 */
  push32((uint32_t)(0x109379e0u));
  /* 109320a8 call esi */
  call_ind((uint32_t)(ESI), 0x109320aau);
  /* 109320aa push 0 */
  push32((uint32_t)(0x0u));
  /* 109320ac push 0x80 */
  push32((uint32_t)(0x80u));
  /* 109320b1 push 0x10937bc8 */
  push32((uint32_t)(0x10937bc8u));
  /* 109320b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 109320b8 call dword ptr [0x109360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360dc))), 0x109320beu);
  /* 109320be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109320c1:;
  /* 109320c1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109320c3 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x109320c9u);
  /* 109320c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109320cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109320ce je 0x109320fd */
  if (C.zf) goto L_109320fd;
  /* 109320d0 push 3 */
  push32((uint32_t)(0x3u));
  /* 109320d2 call dword ptr [0x109360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f8))), 0x109320d8u);
  /* 109320d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109320db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109320dd je 0x109320fd */
  if (C.zf) goto L_109320fd;
  /* 109320df push 0 */
  push32((uint32_t)(0x0u));
  /* 109320e1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 109320e3 call ebp */
  call_ind((uint32_t)(EBP), 0x109320e5u);
  /* 109320e5 push 0x10937b88 */
  push32((uint32_t)(0x10937b88u));
  /* 109320ea call dword ptr [0x1093611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093611c))), 0x109320f0u);
  /* 109320f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 109320f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109320f4 call dword ptr [0x109360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e8))), 0x109320fau);
  /* 109320fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109320fd:;
  /* 109320fd push 0xe */
  push32((uint32_t)(0xeu));
  /* 109320ff call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932105u);
  /* 10932105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932108 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093210a je 0x1093230c */
  if (C.zf) goto L_1093230c;
  /* 10932110 push 4 */
  push32((uint32_t)(0x4u));
  /* 10932112 call dword ptr [0x109360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f8))), 0x10932118u);
  /* 10932118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093211b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093211d je 0x1093230c */
  if (C.zf) goto L_1093230c;
  /* 10932123 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932125 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10932127 call ebp */
  call_ind((uint32_t)(EBP), 0x10932129u);
  /* 10932129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093212b push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 10932130 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932136u);
  /* 10932136 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093213b jle 0x10932263 */
  if ((C.zf||C.sf!=C.of)) goto L_10932263;
  /* 10932141 push 0x1093745c */
  push32((uint32_t)(0x1093745cu));
  /* 10932146 call dword ptr [0x10936120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936120))), 0x1093214cu);
  /* 1093214c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093214f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932151 je 0x10932263 */
  if (C.zf) goto L_10932263;
  /* 10932157 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10932159 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093215b call dword ptr [0x109360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d4))), 0x10932161u);
  /* 10932161 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932163 push 0x10937c80 */
  push32((uint32_t)(0x10937c80u));
  /* 10932168 call esi */
  call_ind((uint32_t)(ESI), 0x1093216au);
  /* 1093216a mov edi, dword ptr [0x109360dc] */
  EDI = (r32((uint32_t)(0x109360dc)));
  /* 10932170 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932172 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 10932177 push 0x10937b08 */
  push32((uint32_t)(0x10937b08u));
  /* 1093217c push 5 */
  push32((uint32_t)(0x5u));
  /* 1093217e call edi */
  call_ind((uint32_t)(EDI), 0x10932180u);
  /* 10932180 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10932182 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932188u);
  /* 10932188 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093218b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093218d je 0x109321ea */
  if (C.zf) goto L_109321ea;
  /* 1093218f push 0 */
  push32((uint32_t)(0x0u));
  /* 10932191 push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 10932196 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x1093219cu);
  /* 1093219c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093219f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109321a2 jne 0x109321ea */
  if (!C.zf) goto L_109321ea;
  /* 109321a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109321a6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 109321a8 call ebp */
  call_ind((uint32_t)(EBP), 0x109321aau);
  /* 109321aa push 0 */
  push32((uint32_t)(0x0u));
  /* 109321ac push 0x10937c48 */
  push32((uint32_t)(0x10937c48u));
  /* 109321b1 call esi */
  call_ind((uint32_t)(ESI), 0x109321b3u);
  /* 109321b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 109321b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109321b7 call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x109321bdu);
  /* 109321bd push 0 */
  push32((uint32_t)(0x0u));
  /* 109321bf push 0x50 */
  push32((uint32_t)(0x50u));
  /* 109321c1 push 0x109379e8 */
  push32((uint32_t)(0x109379e8u));
  /* 109321c6 push 5 */
  push32((uint32_t)(0x5u));
  /* 109321c8 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x109321ceu);
  /* 109321ce push 0 */
  push32((uint32_t)(0x0u));
  /* 109321d0 push 0x10937c40 */
  push32((uint32_t)(0x10937c40u));
  /* 109321d5 call esi */
  call_ind((uint32_t)(ESI), 0x109321d7u);
  /* 109321d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 109321d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109321db call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x109321e1u);
  /* 109321e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109321e3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109321e5 call ebp */
  call_ind((uint32_t)(EBP), 0x109321e7u);
  /* 109321e7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109321ea:;
  /* 109321ea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 109321ec call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x109321f2u);
  /* 109321f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109321f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109321f7 je 0x10932234 */
  if (C.zf) goto L_10932234;
  /* 109321f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109321fb push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 10932200 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932206u);
  /* 10932206 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932209 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093220c jne 0x10932234 */
  if (!C.zf) goto L_10932234;
  /* 1093220e push 0 */
  push32((uint32_t)(0x0u));
  /* 10932210 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10932212 call ebp */
  call_ind((uint32_t)(EBP), 0x10932214u);
  /* 10932214 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932216 push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 1093221b call esi */
  call_ind((uint32_t)(ESI), 0x1093221du);
  /* 1093221d push 5 */
  push32((uint32_t)(0x5u));
  /* 1093221f push 0 */
  push32((uint32_t)(0x0u));
  /* 10932221 call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x10932227u);
  /* 10932227 push 5 */
  push32((uint32_t)(0x5u));
  /* 10932229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093222b call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x10932231u);
  /* 10932231 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932234:;
  /* 10932234 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932236 push 0x10937c40 */
  push32((uint32_t)(0x10937c40u));
  /* 1093223b call esi */
  call_ind((uint32_t)(ESI), 0x1093223du);
  /* 1093223d push 0 */
  push32((uint32_t)(0x0u));
  /* 1093223f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10932241 push 0x109379e8 */
  push32((uint32_t)(0x109379e8u));
  /* 10932246 push 5 */
  push32((uint32_t)(0x5u));
  /* 10932248 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x1093224eu);
  /* 1093224e push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10932253 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932255 call dword ptr [0x109360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e8))), 0x1093225bu);
  /* 1093225b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093225e jmp 0x10932312 */
  goto L_10932312;
L_10932263:;
  /* 10932263 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932265 push 0x10937a10 */
  push32((uint32_t)(0x10937a10u));
  /* 1093226a call esi */
  call_ind((uint32_t)(ESI), 0x1093226cu);
  /* 1093226c push 1 */
  push32((uint32_t)(0x1u));
  /* 1093226e push 5 */
  push32((uint32_t)(0x5u));
  /* 10932270 call edi */
  call_ind((uint32_t)(EDI), 0x10932272u);
  /* 10932272 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932274 push 0x10937a08 */
  push32((uint32_t)(0x10937a08u));
  /* 10932279 call esi */
  call_ind((uint32_t)(ESI), 0x1093227bu);
  /* 1093227b push 1 */
  push32((uint32_t)(0x1u));
  /* 1093227d push 5 */
  push32((uint32_t)(0x5u));
  /* 1093227f call edi */
  call_ind((uint32_t)(EDI), 0x10932281u);
  /* 10932281 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932283 push 0x10937a20 */
  push32((uint32_t)(0x10937a20u));
  /* 10932288 call esi */
  call_ind((uint32_t)(ESI), 0x1093228au);
  /* 1093228a push 1 */
  push32((uint32_t)(0x1u));
  /* 1093228c push 5 */
  push32((uint32_t)(0x5u));
  /* 1093228e call edi */
  call_ind((uint32_t)(EDI), 0x10932290u);
  /* 10932290 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932292 push 0x10937a18 */
  push32((uint32_t)(0x10937a18u));
  /* 10932297 call esi */
  call_ind((uint32_t)(ESI), 0x10932299u);
  /* 10932299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093229b push 5 */
  push32((uint32_t)(0x5u));
  /* 1093229d call edi */
  call_ind((uint32_t)(EDI), 0x1093229fu);
  /* 1093229f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109322a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 109322a4 push 0x10937aa8 */
  push32((uint32_t)(0x10937aa8u));
  /* 109322a9 call esi */
  call_ind((uint32_t)(ESI), 0x109322abu);
  /* 109322ab push 1 */
  push32((uint32_t)(0x1u));
  /* 109322ad push 5 */
  push32((uint32_t)(0x5u));
  /* 109322af call edi */
  call_ind((uint32_t)(EDI), 0x109322b1u);
  /* 109322b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109322b3 push 0x10937a70 */
  push32((uint32_t)(0x10937a70u));
  /* 109322b8 call esi */
  call_ind((uint32_t)(ESI), 0x109322bau);
  /* 109322ba push 0 */
  push32((uint32_t)(0x0u));
  /* 109322bc push 5 */
  push32((uint32_t)(0x5u));
  /* 109322be call edi */
  call_ind((uint32_t)(EDI), 0x109322c0u);
  /* 109322c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109322c2 push 0x10937ca8 */
  push32((uint32_t)(0x10937ca8u));
  /* 109322c7 call esi */
  call_ind((uint32_t)(ESI), 0x109322c9u);
  /* 109322c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109322cb push 0x87 */
  push32((uint32_t)(0x87u));
  /* 109322d0 push 0x10937bf0 */
  push32((uint32_t)(0x10937bf0u));
  /* 109322d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 109322d7 call dword ptr [0x109360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360dc))), 0x109322ddu);
  /* 109322dd push 0 */
  push32((uint32_t)(0x0u));
  /* 109322df push 0x10937c80 */
  push32((uint32_t)(0x10937c80u));
  /* 109322e4 call esi */
  call_ind((uint32_t)(ESI), 0x109322e6u);
  /* 109322e6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109322e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109322eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109322ed push 0x10937bf0 */
  push32((uint32_t)(0x10937bf0u));
  /* 109322f2 push 5 */
  push32((uint32_t)(0x5u));
  /* 109322f4 call dword ptr [0x109360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360dc))), 0x109322fau);
  /* 109322fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109322fc push 0x10937c90 */
  push32((uint32_t)(0x10937c90u));
  /* 10932301 call esi */
  call_ind((uint32_t)(ESI), 0x10932303u);
  /* 10932303 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932305 push 5 */
  push32((uint32_t)(0x5u));
  /* 10932307 call edi */
  call_ind((uint32_t)(EDI), 0x10932309u);
  /* 10932309 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1093230c:;
  /* 1093230c mov edi, dword ptr [0x109360dc] */
  EDI = (r32((uint32_t)(0x109360dc)));
L_10932312:;
  /* 10932312 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10932314 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x1093231au);
  /* 1093231a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093231d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093231f je 0x10932344 */
  if (C.zf) goto L_10932344;
  /* 10932321 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932323 call dword ptr [0x109360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f8))), 0x10932329u);
  /* 10932329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093232c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093232e je 0x10932344 */
  if (C.zf) goto L_10932344;
  /* 10932330 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932332 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10932334 call ebp */
  call_ind((uint32_t)(EBP), 0x10932336u);
  /* 10932336 push 0x10937454 */
  push32((uint32_t)(0x10937454u));
  /* 1093233b call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x10932341u);
  /* 10932341 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932344:;
  /* 10932344 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10932346 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x1093234cu);
  /* 1093234c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093234f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932351 je 0x1093236e */
  if (C.zf) goto L_1093236e;
  /* 10932353 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932355 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10932357 call ebp */
  call_ind((uint32_t)(EBP), 0x10932359u);
  /* 10932359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093235b push 0x10937c08 */
  push32((uint32_t)(0x10937c08u));
  /* 10932360 push 0x10937c70 */
  push32((uint32_t)(0x10937c70u));
  /* 10932365 call dword ptr [0x10936128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936128))), 0x1093236bu);
  /* 1093236b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1093236e:;
  /* 1093236e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10932370 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932376u);
  /* 10932376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932379 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093237b je 0x109324b7 */
  if (C.zf) goto L_109324b7;
  /* 10932381 push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10932386 push 0x10937c98 */
  push32((uint32_t)(0x10937c98u));
  /* 1093238b call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932391u);
  /* 10932391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932396 jg 0x109323b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_109323b4;
  /* 10932398 push 0x109379f8 */
  push32((uint32_t)(0x109379f8u));
  /* 1093239d push 0x10937c98 */
  push32((uint32_t)(0x10937c98u));
  /* 109323a2 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x109323a8u);
  /* 109323a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109323ab cmp eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109323ae jle 0x109324b7 */
  if ((C.zf||C.sf!=C.of)) goto L_109324b7;
L_109323b4:;
  /* 109323b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109323b6 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 109323b8 call ebp */
  call_ind((uint32_t)(EBP), 0x109323bau);
  /* 109323ba push 0x1093744c */
  push32((uint32_t)(0x1093744cu));
  /* 109323bf call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x109323c5u);
  /* 109323c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109323c7 push 0x10937bd0 */
  push32((uint32_t)(0x10937bd0u));
  /* 109323cc call esi */
  call_ind((uint32_t)(ESI), 0x109323ceu);
  /* 109323ce push 4 */
  push32((uint32_t)(0x4u));
  /* 109323d0 call dword ptr [0x109360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360c8))), 0x109323d6u);
  /* 109323d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109323d8 push 0x10937bd0 */
  push32((uint32_t)(0x10937bd0u));
  /* 109323dd push 4 */
  push32((uint32_t)(0x4u));
  /* 109323df call dword ptr [0x1093612c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093612c))), 0x109323e5u);
  /* 109323e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109323e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 109323e9 call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x109323efu);
  /* 109323ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109323f1 push 0x109379d0 */
  push32((uint32_t)(0x109379d0u));
  /* 109323f6 call esi */
  call_ind((uint32_t)(ESI), 0x109323f8u);
  /* 109323f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 109323fa push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109323fc push 0x10937c98 */
  push32((uint32_t)(0x10937c98u));
  /* 10932401 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932403 call edi */
  call_ind((uint32_t)(EDI), 0x10932405u);
  /* 10932405 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093240a push 0x10937af8 */
  push32((uint32_t)(0x10937af8u));
  /* 1093240f call esi */
  call_ind((uint32_t)(ESI), 0x10932411u);
  /* 10932411 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932413 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10932415 push 0x10937c98 */
  push32((uint32_t)(0x10937c98u));
  /* 1093241a push 1 */
  push32((uint32_t)(0x1u));
  /* 1093241c call edi */
  call_ind((uint32_t)(EDI), 0x1093241eu);
  /* 1093241e push 0 */
  push32((uint32_t)(0x0u));
  /* 10932420 push 0x10937b48 */
  push32((uint32_t)(0x10937b48u));
  /* 10932425 call esi */
  call_ind((uint32_t)(ESI), 0x10932427u);
  /* 10932427 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932429 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1093242b push 0x10937c98 */
  push32((uint32_t)(0x10937c98u));
  /* 10932430 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932432 call edi */
  call_ind((uint32_t)(EDI), 0x10932434u);
  /* 10932434 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932436 push 0x10937c68 */
  push32((uint32_t)(0x10937c68u));
  /* 1093243b call esi */
  call_ind((uint32_t)(ESI), 0x1093243du);
  /* 1093243d push 0 */
  push32((uint32_t)(0x0u));
  /* 1093243f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10932441 push 0x10937c98 */
  push32((uint32_t)(0x10937c98u));
  /* 10932446 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932448 call edi */
  call_ind((uint32_t)(EDI), 0x1093244au);
  /* 1093244a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093244d push 1 */
  push32((uint32_t)(0x1u));
  /* 1093244f push 0xf */
  push32((uint32_t)(0xfu));
  /* 10932451 call ebp */
  call_ind((uint32_t)(EBP), 0x10932453u);
  /* 10932453 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10932455 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x1093245bu);
  /* 1093245b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093245e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932460 je 0x109324b7 */
  if (C.zf) goto L_109324b7;
  /* 10932462 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932464 call dword ptr [0x109360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e0))), 0x1093246au);
  /* 1093246a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093246d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932470 je 0x10932482 */
  if (C.zf) goto L_10932482;
  /* 10932472 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932474 call dword ptr [0x109360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e0))), 0x1093247au);
  /* 1093247a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093247d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932480 jne 0x109324b7 */
  if (!C.zf) goto L_109324b7;
L_10932482:;
  /* 10932482 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932484 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10932486 call ebp */
  call_ind((uint32_t)(EBP), 0x10932488u);
  /* 10932488 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093248a push 0x10937b90 */
  push32((uint32_t)(0x10937b90u));
  /* 1093248f call esi */
  call_ind((uint32_t)(ESI), 0x10932491u);
  /* 10932491 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932493 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932495 push 0x10937ac0 */
  push32((uint32_t)(0x10937ac0u));
  /* 1093249a push 1 */
  push32((uint32_t)(0x1u));
  /* 1093249c call edi */
  call_ind((uint32_t)(EDI), 0x1093249eu);
  /* 1093249e push 0 */
  push32((uint32_t)(0x0u));
  /* 109324a0 push 0x10937b98 */
  push32((uint32_t)(0x10937b98u));
  /* 109324a5 call esi */
  call_ind((uint32_t)(ESI), 0x109324a7u);
  /* 109324a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109324a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109324ab push 0x10937ac0 */
  push32((uint32_t)(0x10937ac0u));
  /* 109324b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 109324b2 call edi */
  call_ind((uint32_t)(EDI), 0x109324b4u);
  /* 109324b4 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109324b7:;
  /* 109324b7 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 109324b9 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x109324bfu);
  /* 109324bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109324c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109324c4 je 0x10932513 */
  if (C.zf) goto L_10932513;
  /* 109324c6 push 0x10937b90 */
  push32((uint32_t)(0x10937b90u));
  /* 109324cb push 0x10937ac0 */
  push32((uint32_t)(0x10937ac0u));
  /* 109324d0 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x109324d6u);
  /* 109324d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109324d9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109324dc jle 0x10932513 */
  if ((C.zf||C.sf!=C.of)) goto L_10932513;
  /* 109324de push 4 */
  push32((uint32_t)(0x4u));
  /* 109324e0 push 0x10937c58 */
  push32((uint32_t)(0x10937c58u));
  /* 109324e5 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x109324ebu);
  /* 109324eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109324ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109324f0 jle 0x10932513 */
  if ((C.zf||C.sf!=C.of)) goto L_10932513;
  /* 109324f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109324f4 call dword ptr [0x10936124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936124))), 0x109324fau);
  /* 109324fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109324fc push 0x10937b90 */
  push32((uint32_t)(0x10937b90u));
  /* 10932501 call esi */
  call_ind((uint32_t)(ESI), 0x10932503u);
  /* 10932503 push 0x10937c58 */
  push32((uint32_t)(0x10937c58u));
  /* 10932508 push 1 */
  push32((uint32_t)(0x1u));
  /* 1093250a call dword ptr [0x10936104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936104))), 0x10932510u);
  /* 10932510 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932513:;
  /* 10932513 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10932515 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x1093251bu);
  /* 1093251b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093251e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932520 je 0x1093256f */
  if (C.zf) goto L_1093256f;
  /* 10932522 push 0x10937b98 */
  push32((uint32_t)(0x10937b98u));
  /* 10932527 push 0x10937ac0 */
  push32((uint32_t)(0x10937ac0u));
  /* 1093252c call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932532u);
  /* 10932532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932535 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932538 jle 0x1093256f */
  if ((C.zf||C.sf!=C.of)) goto L_1093256f;
  /* 1093253a push 4 */
  push32((uint32_t)(0x4u));
  /* 1093253c push 0x10937c60 */
  push32((uint32_t)(0x10937c60u));
  /* 10932541 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932547u);
  /* 10932547 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093254a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093254c jle 0x1093256f */
  if ((C.zf||C.sf!=C.of)) goto L_1093256f;
  /* 1093254e push 1 */
  push32((uint32_t)(0x1u));
  /* 10932550 call dword ptr [0x10936124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936124))), 0x10932556u);
  /* 10932556 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932558 push 0x10937b98 */
  push32((uint32_t)(0x10937b98u));
  /* 1093255d call esi */
  call_ind((uint32_t)(ESI), 0x1093255fu);
  /* 1093255f push 0x10937c60 */
  push32((uint32_t)(0x10937c60u));
  /* 10932564 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932566 call dword ptr [0x10936104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936104))), 0x1093256cu);
  /* 1093256c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1093256f:;
  /* 1093256f push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10932571 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932577u);
  /* 10932577 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093257a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093257c je 0x109325a2 */
  if (C.zf) goto L_109325a2;
  /* 1093257e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10932580 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932586u);
  /* 10932586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932589 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093258b jne 0x109325a2 */
  if (!C.zf) goto L_109325a2;
  /* 1093258d push 4 */
  push32((uint32_t)(0x4u));
  /* 1093258f push 0x10937ac0 */
  push32((uint32_t)(0x10937ac0u));
  /* 10932594 push 0x10937b00 */
  push32((uint32_t)(0x10937b00u));
  /* 10932599 call dword ptr [0x10936134] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936134))), 0x1093259fu);
  /* 1093259f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109325a2:;
  /* 109325a2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 109325a4 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x109325aau);
  /* 109325aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109325ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109325af je 0x10932637 */
  if (C.zf) goto L_10932637;
  /* 109325b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 109325b7 push 0x109379d0 */
  push32((uint32_t)(0x109379d0u));
  /* 109325bc call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x109325c2u);
  /* 109325c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109325c5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109325c8 jge 0x10932637 */
  if ((C.sf==C.of)) goto L_10932637;
  /* 109325ca push 1 */
  push32((uint32_t)(0x1u));
  /* 109325cc push 0x10937af8 */
  push32((uint32_t)(0x10937af8u));
  /* 109325d1 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x109325d7u);
  /* 109325d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109325da cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109325dd jge 0x10932637 */
  if ((C.sf==C.of)) goto L_10932637;
  /* 109325df push 1 */
  push32((uint32_t)(0x1u));
  /* 109325e1 push 0x10937b48 */
  push32((uint32_t)(0x10937b48u));
  /* 109325e6 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x109325ecu);
  /* 109325ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109325ef cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109325f2 jge 0x10932637 */
  if ((C.sf==C.of)) goto L_10932637;
  /* 109325f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 109325f6 push 0x10937c68 */
  push32((uint32_t)(0x10937c68u));
  /* 109325fb call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932601u);
  /* 10932601 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932604 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932607 jge 0x10932637 */
  if ((C.sf==C.of)) goto L_10932637;
  /* 10932609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093260b push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1093260d call ebp */
  call_ind((uint32_t)(EBP), 0x1093260fu);
  /* 1093260f push 0x10937444 */
  push32((uint32_t)(0x10937444u));
  /* 10932614 call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x1093261au);
  /* 1093261a push 1 */
  push32((uint32_t)(0x1u));
  /* 1093261c push 6 */
  push32((uint32_t)(0x6u));
  /* 1093261e push 0x10937b50 */
  push32((uint32_t)(0x10937b50u));
  /* 10932623 call dword ptr [0x10936138] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936138))), 0x10932629u);
  /* 10932629 push 0x10937b50 */
  push32((uint32_t)(0x10937b50u));
  /* 1093262e call dword ptr [0x1093611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093611c))), 0x10932634u);
  /* 10932634 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932637:;
  /* 10932637 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10932639 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x1093263fu);
  /* 1093263f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932642 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932644 je 0x109326b1 */
  if (C.zf) goto L_109326b1;
  /* 10932646 push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 1093264b push 0x10937a80 */
  push32((uint32_t)(0x10937a80u));
  /* 10932650 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932656u);
  /* 10932656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932659 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093265c jl 0x109326b1 */
  if ((C.sf!=C.of)) goto L_109326b1;
  /* 1093265e push 0 */
  push32((uint32_t)(0x0u));
  /* 10932660 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10932662 call ebp */
  call_ind((uint32_t)(EBP), 0x10932664u);
  /* 10932664 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932666 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10932668 call ebp */
  call_ind((uint32_t)(EBP), 0x1093266au);
  /* 1093266a push 0 */
  push32((uint32_t)(0x0u));
  /* 1093266c push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 10932671 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932673 call dword ptr [0x1093612c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093612c))), 0x10932679u);
  /* 10932679 push 4 */
  push32((uint32_t)(0x4u));
  /* 1093267b push 0 */
  push32((uint32_t)(0x0u));
  /* 1093267d call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x10932683u);
  /* 10932683 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932685 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10932687 push 0x10937a80 */
  push32((uint32_t)(0x10937a80u));
  /* 1093268c push 4 */
  push32((uint32_t)(0x4u));
  /* 1093268e call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10932694u);
  /* 10932694 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10932699 push 5 */
  push32((uint32_t)(0x5u));
  /* 1093269b call dword ptr [0x109360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e8))), 0x109326a1u);
  /* 109326a1 push 0x9c4 */
  push32((uint32_t)(0x9c4u));
  /* 109326a6 push 7 */
  push32((uint32_t)(0x7u));
  /* 109326a8 call dword ptr [0x109360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e8))), 0x109326aeu);
  /* 109326ae add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109326b1:;
  /* 109326b1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 109326b3 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x109326b9u);
  /* 109326b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109326bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109326be je 0x1093274e */
  if (C.zf) goto L_1093274e;
  /* 109326c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 109326c6 call dword ptr [0x109360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f8))), 0x109326ccu);
  /* 109326cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109326cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109326d1 je 0x1093274e */
  if (C.zf) goto L_1093274e;
  /* 109326d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109326d5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 109326d7 call ebp */
  call_ind((uint32_t)(EBP), 0x109326d9u);
  /* 109326d9 push 0x1093743c */
  push32((uint32_t)(0x1093743cu));
  /* 109326de call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x109326e4u);
  /* 109326e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109326e6 push 0x109379d8 */
  push32((uint32_t)(0x109379d8u));
  /* 109326eb push 4 */
  push32((uint32_t)(0x4u));
  /* 109326ed call dword ptr [0x1093612c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093612c))), 0x109326f3u);
  /* 109326f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 109326f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 109326f7 call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x109326fdu);
  /* 109326fd push 0 */
  push32((uint32_t)(0x0u));
  /* 109326ff push 0x10937b80 */
  push32((uint32_t)(0x10937b80u));
  /* 10932704 push 4 */
  push32((uint32_t)(0x4u));
  /* 10932706 call dword ptr [0x1093612c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093612c))), 0x1093270cu);
  /* 1093270c push 0 */
  push32((uint32_t)(0x0u));
  /* 1093270e push 4 */
  push32((uint32_t)(0x4u));
  /* 10932710 call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x10932716u);
  /* 10932716 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932718 push 0x10937bc0 */
  push32((uint32_t)(0x10937bc0u));
  /* 1093271d push 4 */
  push32((uint32_t)(0x4u));
  /* 1093271f call dword ptr [0x1093612c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093612c))), 0x10932725u);
  /* 10932725 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932728 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093272a push 4 */
  push32((uint32_t)(0x4u));
  /* 1093272c call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x10932732u);
  /* 10932732 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932734 push 0x10937c38 */
  push32((uint32_t)(0x10937c38u));
  /* 10932739 push 4 */
  push32((uint32_t)(0x4u));
  /* 1093273b call dword ptr [0x1093612c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093612c))), 0x10932741u);
  /* 10932741 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932743 push 4 */
  push32((uint32_t)(0x4u));
  /* 10932745 call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x1093274bu);
  /* 1093274b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1093274e:;
  /* 1093274e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10932750 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932756u);
  /* 10932756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932759 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093275b je 0x109327ae */
  if (C.zf) goto L_109327ae;
  /* 1093275d push 7 */
  push32((uint32_t)(0x7u));
  /* 1093275f call dword ptr [0x109360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f8))), 0x10932765u);
  /* 10932765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932768 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093276a je 0x109327ae */
  if (C.zf) goto L_109327ae;
  /* 1093276c push 0 */
  push32((uint32_t)(0x0u));
  /* 1093276e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10932770 call ebp */
  call_ind((uint32_t)(EBP), 0x10932772u);
  /* 10932772 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932774 push 0x10937b70 */
  push32((uint32_t)(0x10937b70u));
  /* 10932779 call esi */
  call_ind((uint32_t)(ESI), 0x1093277bu);
  /* 1093277b push 0 */
  push32((uint32_t)(0x0u));
  /* 1093277d push 4 */
  push32((uint32_t)(0x4u));
  /* 1093277f call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x10932785u);
  /* 10932785 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932787 push 0x10937b20 */
  push32((uint32_t)(0x10937b20u));
  /* 1093278c call esi */
  call_ind((uint32_t)(ESI), 0x1093278eu);
  /* 1093278e push 0 */
  push32((uint32_t)(0x0u));
  /* 10932790 push 4 */
  push32((uint32_t)(0x4u));
  /* 10932792 call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x10932798u);
  /* 10932798 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093279a push 0x10937ad0 */
  push32((uint32_t)(0x10937ad0u));
  /* 1093279f call esi */
  call_ind((uint32_t)(ESI), 0x109327a1u);
  /* 109327a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109327a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 109327a5 call dword ptr [0x10936118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936118))), 0x109327abu);
  /* 109327ab add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_109327ae:;
  /* 109327ae push 0x15 */
  push32((uint32_t)(0x15u));
  /* 109327b0 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x109327b6u);
  /* 109327b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109327b9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109327bb je 0x10932873 */
  if (C.zf) goto L_10932873;
  /* 109327c1 push 7 */
  push32((uint32_t)(0x7u));
  /* 109327c3 call dword ptr [0x109360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360f8))), 0x109327c9u);
  /* 109327c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109327cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 109327ce je 0x10932873 */
  if (C.zf) goto L_10932873;
  /* 109327d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109327d6 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 109327d8 call ebp */
  call_ind((uint32_t)(EBP), 0x109327dau);
  /* 109327da push 0x10937434 */
  push32((uint32_t)(0x10937434u));
  /* 109327df call dword ptr [0x109360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d8))), 0x109327e5u);
  /* 109327e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109327e7 call dword ptr [0x109360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e0))), 0x109327edu);
  /* 109327ed mov edi, 6 */
  EDI = (0x6u);
  /* 109327f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 109327f4 push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 109327f9 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109327fb call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932801u);
  /* 10932801 imul edi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10932804 lea edi, [edi + edi*4] */
  EDI = ((uint32_t)(EDI + EDI*4));
  /* 10932807 lea eax, [edi + edi*4] */
  EAX = ((uint32_t)(EDI + EDI*4));
  /* 1093280a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1093280d shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 10932810 push eax */
  push32((uint32_t)(EAX));
  /* 10932811 push 5 */
  push32((uint32_t)(0x5u));
  /* 10932813 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932815 call dword ptr [0x10936130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936130))), 0x1093281bu);
  /* 1093281b push 0 */
  push32((uint32_t)(0x0u));
  /* 1093281d call dword ptr [0x109360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360e0))), 0x10932823u);
  /* 10932823 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10932826 mov edi, 0x157c */
  EDI = (0x157cu);
  /* 1093282b push 4 */
  push32((uint32_t)(0x4u));
  /* 1093282d push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 10932832 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10932835 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10932838 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 1093283b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093283d call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932843u);
  /* 10932843 imul edi, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10932846 push edi */
  push32((uint32_t)(EDI));
  /* 10932847 push 4 */
  push32((uint32_t)(0x4u));
  /* 10932849 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093284b call dword ptr [0x10936130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936130))), 0x10932851u);
  /* 10932851 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10932853 call dword ptr [0x109360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360d0))), 0x10932859u);
  /* 10932859 mov edi, dword ptr [0x10936140] */
  EDI = (r32((uint32_t)(0x10936140)));
  /* 1093285f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932862 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10932864 call edi */
  call_ind((uint32_t)(EDI), 0x10932866u);
  /* 10932866 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10932868 call edi */
  call_ind((uint32_t)(EDI), 0x1093286au);
  /* 1093286a mov edi, dword ptr [0x109360dc] */
  EDI = (r32((uint32_t)(0x109360dc)));
  /* 10932870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932873:;
  /* 10932873 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10932875 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x1093287bu);
  /* 1093287b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093287e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932880 je 0x1093293e */
  if (C.zf) goto L_1093293e;
  /* 10932886 push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 1093288b push 0x10937ab0 */
  push32((uint32_t)(0x10937ab0u));
  /* 10932890 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932896u);
  /* 10932896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093289b jle 0x1093293e */
  if ((C.zf||C.sf!=C.of)) goto L_1093293e;
  /* 109328a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109328a3 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 109328a5 call ebp */
  call_ind((uint32_t)(EBP), 0x109328a7u);
  /* 109328a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 109328a9 push 0x10937c90 */
  push32((uint32_t)(0x10937c90u));
  /* 109328ae call esi */
  call_ind((uint32_t)(ESI), 0x109328b0u);
  /* 109328b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 109328b2 push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 109328b7 push 0x109379e8 */
  push32((uint32_t)(0x109379e8u));
  /* 109328bc push 5 */
  push32((uint32_t)(0x5u));
  /* 109328be call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x109328c4u);
  /* 109328c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 109328c6 push 0x10937a10 */
  push32((uint32_t)(0x10937a10u));
  /* 109328cb call esi */
  call_ind((uint32_t)(ESI), 0x109328cdu);
  /* 109328cd push 0 */
  push32((uint32_t)(0x0u));
  /* 109328cf push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 109328d4 push 0x10937a98 */
  push32((uint32_t)(0x10937a98u));
  /* 109328d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 109328db call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x109328e1u);
  /* 109328e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109328e3 push 0x10937a08 */
  push32((uint32_t)(0x10937a08u));
  /* 109328e8 call esi */
  call_ind((uint32_t)(ESI), 0x109328eau);
  /* 109328ea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109328ed push 0 */
  push32((uint32_t)(0x0u));
  /* 109328ef push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 109328f4 push 0x10937aa0 */
  push32((uint32_t)(0x10937aa0u));
  /* 109328f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 109328fb call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10932901u);
  /* 10932901 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932903 push 0x10937a20 */
  push32((uint32_t)(0x10937a20u));
  /* 10932908 call esi */
  call_ind((uint32_t)(ESI), 0x1093290au);
  /* 1093290a push 0 */
  push32((uint32_t)(0x0u));
  /* 1093290c push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 10932911 push 0x10937a88 */
  push32((uint32_t)(0x10937a88u));
  /* 10932916 push 5 */
  push32((uint32_t)(0x5u));
  /* 10932918 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x1093291eu);
  /* 1093291e push 0 */
  push32((uint32_t)(0x0u));
  /* 10932920 push 0x10937a18 */
  push32((uint32_t)(0x10937a18u));
  /* 10932925 call esi */
  call_ind((uint32_t)(ESI), 0x10932927u);
  /* 10932927 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932929 push 0x9b */
  push32((uint32_t)(0x9bu));
  /* 1093292e push 0x10937a90 */
  push32((uint32_t)(0x10937a90u));
  /* 10932933 push 5 */
  push32((uint32_t)(0x5u));
  /* 10932935 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x1093293bu);
  /* 1093293b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1093293e:;
  /* 1093293e push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10932940 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932946u);
  /* 10932946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932949 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1093294b je 0x10932a5e */
  if (C.zf) goto L_10932a5e;
  /* 10932951 push 4 */
  push32((uint32_t)(0x4u));
  /* 10932953 push 0x10937c60 */
  push32((uint32_t)(0x10937c60u));
  /* 10932958 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x1093295eu);
  /* 1093295e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932963 je 0x1093297d */
  if (C.zf) goto L_1093297d;
  /* 10932965 push 4 */
  push32((uint32_t)(0x4u));
  /* 10932967 push 0x10937c58 */
  push32((uint32_t)(0x10937c58u));
  /* 1093296c call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932972u);
  /* 10932972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932977 jne 0x10932a5e */
  if (!C.zf) goto L_10932a5e;
L_1093297d:;
  /* 1093297d push 0 */
  push32((uint32_t)(0x0u));
  /* 1093297f push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10932981 call ebp */
  call_ind((uint32_t)(EBP), 0x10932983u);
  /* 10932983 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932985 push 0x109379e0 */
  push32((uint32_t)(0x109379e0u));
  /* 1093298a call esi */
  call_ind((uint32_t)(ESI), 0x1093298cu);
  /* 1093298c push 0 */
  push32((uint32_t)(0x0u));
  /* 1093298e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10932990 push 0x10937af0 */
  push32((uint32_t)(0x10937af0u));
  /* 10932995 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932997 call edi */
  call_ind((uint32_t)(EDI), 0x10932999u);
  /* 10932999 push 2 */
  push32((uint32_t)(0x2u));
  /* 1093299b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1093299d push 0x10937a80 */
  push32((uint32_t)(0x10937a80u));
  /* 109329a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 109329a4 call edi */
  call_ind((uint32_t)(EDI), 0x109329a6u);
  /* 109329a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 109329a8 push 0x109379d0 */
  push32((uint32_t)(0x109379d0u));
  /* 109329ad call esi */
  call_ind((uint32_t)(ESI), 0x109329afu);
  /* 109329af push 0 */
  push32((uint32_t)(0x0u));
  /* 109329b1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109329b3 push 0x10937af0 */
  push32((uint32_t)(0x10937af0u));
  /* 109329b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109329ba call edi */
  call_ind((uint32_t)(EDI), 0x109329bcu);
  /* 109329bc add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109329bf push 2 */
  push32((uint32_t)(0x2u));
  /* 109329c1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109329c3 push 0x10937a80 */
  push32((uint32_t)(0x10937a80u));
  /* 109329c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 109329ca call edi */
  call_ind((uint32_t)(EDI), 0x109329ccu);
  /* 109329cc push 0 */
  push32((uint32_t)(0x0u));
  /* 109329ce push 0x10937af8 */
  push32((uint32_t)(0x10937af8u));
  /* 109329d3 call esi */
  call_ind((uint32_t)(ESI), 0x109329d5u);
  /* 109329d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 109329d7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109329d9 push 0x10937af0 */
  push32((uint32_t)(0x10937af0u));
  /* 109329de push 1 */
  push32((uint32_t)(0x1u));
  /* 109329e0 call edi */
  call_ind((uint32_t)(EDI), 0x109329e2u);
  /* 109329e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 109329e4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109329e6 push 0x10937a80 */
  push32((uint32_t)(0x10937a80u));
  /* 109329eb push 1 */
  push32((uint32_t)(0x1u));
  /* 109329ed call edi */
  call_ind((uint32_t)(EDI), 0x109329efu);
  /* 109329ef push 0 */
  push32((uint32_t)(0x0u));
  /* 109329f1 push 0x10937b48 */
  push32((uint32_t)(0x10937b48u));
  /* 109329f6 call esi */
  call_ind((uint32_t)(ESI), 0x109329f8u);
  /* 109329f8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109329fb push 2 */
  push32((uint32_t)(0x2u));
  /* 109329fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 109329ff push 0x10937af0 */
  push32((uint32_t)(0x10937af0u));
  /* 10932a04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932a06 call edi */
  call_ind((uint32_t)(EDI), 0x10932a08u);
  /* 10932a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932a0a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10932a0c push 0x10937a80 */
  push32((uint32_t)(0x10937a80u));
  /* 10932a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932a13 call edi */
  call_ind((uint32_t)(EDI), 0x10932a15u);
  /* 10932a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932a17 push 0x10937c68 */
  push32((uint32_t)(0x10937c68u));
  /* 10932a1c call esi */
  call_ind((uint32_t)(ESI), 0x10932a1eu);
  /* 10932a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10932a20 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10932a22 push 0x10937af0 */
  push32((uint32_t)(0x10937af0u));
  /* 10932a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932a29 call edi */
  call_ind((uint32_t)(EDI), 0x10932a2bu);
  /* 10932a2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10932a2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10932a2f push 0x10937a80 */
  push32((uint32_t)(0x10937a80u));
  /* 10932a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932a36 call edi */
  call_ind((uint32_t)(EDI), 0x10932a38u);
  /* 10932a38 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10932a3d push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10932a3f call ebp */
  call_ind((uint32_t)(EBP), 0x10932a41u);
  /* 10932a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932a43 push 0x10937b00 */
  push32((uint32_t)(0x10937b00u));
  /* 10932a48 call esi */
  call_ind((uint32_t)(ESI), 0x10932a4au);
  /* 10932a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10932a4c push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10932a4e push 0x10937ba0 */
  push32((uint32_t)(0x10937ba0u));
  /* 10932a53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932a55 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10932a5bu);
  /* 10932a5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932a5e:;
  /* 10932a5e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10932a60 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932a66u);
  /* 10932a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932a69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932a6b je 0x10932ab0 */
  if (C.zf) goto L_10932ab0;
  /* 10932a6d push 0x10937b20 */
  push32((uint32_t)(0x10937b20u));
  /* 10932a72 push 0x10937bf8 */
  push32((uint32_t)(0x10937bf8u));
  /* 10932a77 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932a7du);
  /* 10932a7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932a82 jg 0x10932a9b */
  if ((!C.zf&&C.sf==C.of)) goto L_10932a9b;
  /* 10932a84 push 0x10937ad0 */
  push32((uint32_t)(0x10937ad0u));
  /* 10932a89 push 0x10937bf8 */
  push32((uint32_t)(0x10937bf8u));
  /* 10932a8e call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932a94u);
  /* 10932a94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932a97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932a99 jle 0x10932ab0 */
  if ((C.zf||C.sf!=C.of)) goto L_10932ab0;
L_10932a9b:;
  /* 10932a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10932a9d push 0x10937bf8 */
  push32((uint32_t)(0x10937bf8u));
  /* 10932aa2 push 0x10937b58 */
  push32((uint32_t)(0x10937b58u));
  /* 10932aa7 call dword ptr [0x10936128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936128))), 0x10932aadu);
  /* 10932aad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932ab0:;
  /* 10932ab0 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10932ab2 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932ab8u);
  /* 10932ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932abb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932abd je 0x10932b02 */
  if (C.zf) goto L_10932b02;
  /* 10932abf push 0x10937b20 */
  push32((uint32_t)(0x10937b20u));
  /* 10932ac4 push 0x10937ae0 */
  push32((uint32_t)(0x10937ae0u));
  /* 10932ac9 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932acfu);
  /* 10932acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932ad4 jg 0x10932aed */
  if ((!C.zf&&C.sf==C.of)) goto L_10932aed;
  /* 10932ad6 push 0x10937ad0 */
  push32((uint32_t)(0x10937ad0u));
  /* 10932adb push 0x10937ae0 */
  push32((uint32_t)(0x10937ae0u));
  /* 10932ae0 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932ae6u);
  /* 10932ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932aeb jle 0x10932b02 */
  if ((C.zf||C.sf!=C.of)) goto L_10932b02;
L_10932aed:;
  /* 10932aed push 0 */
  push32((uint32_t)(0x0u));
  /* 10932aef push 0x10937ae0 */
  push32((uint32_t)(0x10937ae0u));
  /* 10932af4 push 0x10937a60 */
  push32((uint32_t)(0x10937a60u));
  /* 10932af9 call dword ptr [0x10936128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936128))), 0x10932affu);
  /* 10932aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932b02:;
  /* 10932b02 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10932b04 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932b0au);
  /* 10932b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932b0d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932b0f je 0x10932b3e */
  if (C.zf) goto L_10932b3e;
  /* 10932b11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932b13 push 0x10937b28 */
  push32((uint32_t)(0x10937b28u));
  /* 10932b18 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932b1eu);
  /* 10932b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932b23 jle 0x10932b3e */
  if ((C.zf||C.sf!=C.of)) goto L_10932b3e;
  /* 10932b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932b27 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10932b29 call ebp */
  call_ind((uint32_t)(EBP), 0x10932b2bu);
  /* 10932b2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10932b2d push 4 */
  push32((uint32_t)(0x4u));
  /* 10932b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10932b31 call ebx */
  call_ind((uint32_t)(EBX), 0x10932b33u);
  /* 10932b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932b35 push 5 */
  push32((uint32_t)(0x5u));
  /* 10932b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932b39 call ebx */
  call_ind((uint32_t)(EBX), 0x10932b3bu);
  /* 10932b3b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932b3e:;
  /* 10932b3e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10932b40 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932b46u);
  /* 10932b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932b49 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932b4b je 0x10932ba8 */
  if (C.zf) goto L_10932ba8;
  /* 10932b4d push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10932b52 push 0x10937c00 */
  push32((uint32_t)(0x10937c00u));
  /* 10932b57 call dword ptr [0x109360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360ec))), 0x10932b5du);
  /* 10932b5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932b62 jle 0x10932ba8 */
  if ((C.zf||C.sf!=C.of)) goto L_10932ba8;
  /* 10932b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932b66 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10932b68 call ebp */
  call_ind((uint32_t)(EBP), 0x10932b6au);
  /* 10932b6a push 0x10937c00 */
  push32((uint32_t)(0x10937c00u));
  /* 10932b6f call dword ptr [0x1093611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093611c))), 0x10932b75u);
  /* 10932b75 mov ebx, dword ptr [0x109360d8] */
  EBX = (r32((uint32_t)(0x109360d8)));
  /* 10932b7b push 0x1093742c */
  push32((uint32_t)(0x1093742cu));
  /* 10932b80 call ebx */
  call_ind((uint32_t)(EBX), 0x10932b82u);
  /* 10932b82 push 0x10937424 */
  push32((uint32_t)(0x10937424u));
  /* 10932b87 call ebx */
  call_ind((uint32_t)(EBX), 0x10932b89u);
  /* 10932b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932b8b push 0x10937bb8 */
  push32((uint32_t)(0x10937bb8u));
  /* 10932b90 call esi */
  call_ind((uint32_t)(ESI), 0x10932b92u);
  /* 10932b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932b94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10932b96 push 0x10937c50 */
  push32((uint32_t)(0x10937c50u));
  /* 10932b9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10932b9d call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10932ba3u);
  /* 10932ba3 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932ba6 jmp 0x10932bae */
  goto L_10932bae;
L_10932ba8:;
  /* 10932ba8 mov ebx, dword ptr [0x109360d8] */
  EBX = (r32((uint32_t)(0x109360d8)));
L_10932bae:;
  /* 10932bae push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10932bb0 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932bb6u);
  /* 10932bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932bb9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932bbb je 0x10932c11 */
  if (C.zf) goto L_10932c11;
  /* 10932bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10932bbf push 0x10937a28 */
  push32((uint32_t)(0x10937a28u));
  /* 10932bc4 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932bcau);
  /* 10932bca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932bcf jne 0x10932c11 */
  if (!C.zf) goto L_10932c11;
  /* 10932bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932bd3 push 0x10937bd8 */
  push32((uint32_t)(0x10937bd8u));
  /* 10932bd8 call dword ptr [0x109360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360fc))), 0x10932bdeu);
  /* 10932bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932be3 jne 0x10932c11 */
  if (!C.zf) goto L_10932c11;
  /* 10932be5 push eax */
  push32((uint32_t)(EAX));
  /* 10932be6 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10932be8 call ebp */
  call_ind((uint32_t)(EBP), 0x10932beau);
  /* 10932bea push 0 */
  push32((uint32_t)(0x0u));
  /* 10932bec push 0x10937bb8 */
  push32((uint32_t)(0x10937bb8u));
  /* 10932bf1 call esi */
  call_ind((uint32_t)(ESI), 0x10932bf3u);
  /* 10932bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932bf5 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10932bfa push 0x10937b88 */
  push32((uint32_t)(0x10937b88u));
  /* 10932bff push 2 */
  push32((uint32_t)(0x2u));
  /* 10932c01 call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10932c07u);
  /* 10932c07 push 0x1093741c */
  push32((uint32_t)(0x1093741cu));
  /* 10932c0c call ebx */
  call_ind((uint32_t)(EBX), 0x10932c0eu);
  /* 10932c0e add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932c11:;
  /* 10932c11 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10932c13 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932c19u);
  /* 10932c19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932c1c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932c1e je 0x10932c57 */
  if (C.zf) goto L_10932c57;
  /* 10932c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932c22 push 0x10937bf0 */
  push32((uint32_t)(0x10937bf0u));
  /* 10932c27 call dword ptr [0x10936108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936108))), 0x10932c2du);
  /* 10932c2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932c30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932c32 jle 0x10932c57 */
  if ((C.zf||C.sf!=C.of)) goto L_10932c57;
  /* 10932c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932c36 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10932c38 call ebp */
  call_ind((uint32_t)(EBP), 0x10932c3au);
  /* 10932c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10932c3c push 0x10937bb8 */
  push32((uint32_t)(0x10937bb8u));
  /* 10932c41 call esi */
  call_ind((uint32_t)(ESI), 0x10932c43u);
  /* 10932c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932c45 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10932c47 push 0x10937b88 */
  push32((uint32_t)(0x10937b88u));
  /* 10932c4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10932c4e call dword ptr [0x10936110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936110))), 0x10932c54u);
  /* 10932c54 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932c57:;
  /* 10932c57 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10932c59 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932c5fu);
  /* 10932c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932c62 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932c64 je 0x10932c9d */
  if (C.zf) goto L_10932c9d;
  /* 10932c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932c68 push 0x10937b50 */
  push32((uint32_t)(0x10937b50u));
  /* 10932c6d call dword ptr [0x10936108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936108))), 0x10932c73u);
  /* 10932c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932c76 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932c79 jle 0x10932c9d */
  if ((C.zf||C.sf!=C.of)) goto L_10932c9d;
  /* 10932c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10932c7d push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10932c7f call ebp */
  call_ind((uint32_t)(EBP), 0x10932c81u);
  /* 10932c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932c83 push 0x10937a50 */
  push32((uint32_t)(0x10937a50u));
  /* 10932c88 call esi */
  call_ind((uint32_t)(ESI), 0x10932c8au);
  /* 10932c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10932c8c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10932c91 push 0x10937b50 */
  push32((uint32_t)(0x10937b50u));
  /* 10932c96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932c98 call edi */
  call_ind((uint32_t)(EDI), 0x10932c9au);
  /* 10932c9a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10932c9d:;
  /* 10932c9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10932c9f call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932ca5u);
  /* 10932ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932ca8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932caa je 0x10932ce9 */
  if (C.zf) goto L_10932ce9;
  /* 10932cac mov edi, dword ptr [0x109360fc] */
  EDI = (r32((uint32_t)(0x109360fc)));
  /* 10932cb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932cb4 push 0x10937b40 */
  push32((uint32_t)(0x10937b40u));
  /* 10932cb9 call edi */
  call_ind((uint32_t)(EDI), 0x10932cbbu);
  /* 10932cbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932cbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932cc0 jne 0x10932cef */
  if (!C.zf) goto L_10932cef;
  /* 10932cc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932cc4 push 0x10937c88 */
  push32((uint32_t)(0x10937c88u));
  /* 10932cc9 call edi */
  call_ind((uint32_t)(EDI), 0x10932ccbu);
  /* 10932ccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932cce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932cd0 jne 0x10932cef */
  if (!C.zf) goto L_10932cef;
  /* 10932cd2 push eax */
  push32((uint32_t)(EAX));
  /* 10932cd3 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10932cd5 call ebp */
  call_ind((uint32_t)(EBP), 0x10932cd7u);
  /* 10932cd7 push 0x10937414 */
  push32((uint32_t)(0x10937414u));
  /* 10932cdc call ebx */
  call_ind((uint32_t)(EBX), 0x10932cdeu);
  /* 10932cde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932ce1 call dword ptr [0x10936144] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936144))), 0x10932ce7u);
  /* 10932ce7 jmp 0x10932cef */
  goto L_10932cef;
L_10932ce9:;
  /* 10932ce9 mov edi, dword ptr [0x109360fc] */
  EDI = (r32((uint32_t)(0x109360fc)));
L_10932cef:;
  /* 10932cef push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10932cf1 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932cf7u);
  /* 10932cf7 mov esi, dword ptr [0x1093613c] */
  ESI = (r32((uint32_t)(0x1093613c)));
  /* 10932cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932d02 je 0x10932d25 */
  if (C.zf) goto L_10932d25;
  /* 10932d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932d06 push 0x10937b60 */
  push32((uint32_t)(0x10937b60u));
  /* 10932d0b call edi */
  call_ind((uint32_t)(EDI), 0x10932d0du);
  /* 10932d0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932d12 jne 0x10932d25 */
  if (!C.zf) goto L_10932d25;
  /* 10932d14 push eax */
  push32((uint32_t)(EAX));
  /* 10932d15 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10932d17 call ebp */
  call_ind((uint32_t)(EBP), 0x10932d19u);
  /* 10932d19 push 0x1093740c */
  push32((uint32_t)(0x1093740cu));
  /* 10932d1e call ebx */
  call_ind((uint32_t)(EBX), 0x10932d20u);
  /* 10932d20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932d23 call esi */
  call_ind((uint32_t)(ESI), 0x10932d25u);
L_10932d25:;
  /* 10932d25 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10932d27 call dword ptr [0x109360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360b4))), 0x10932d2du);
  /* 10932d2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932d30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10932d32 je 0x10932d4e */
  if (C.zf) goto L_10932d4e;
  /* 10932d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932d36 push 0x10937a78 */
  push32((uint32_t)(0x10937a78u));
  /* 10932d3b call edi */
  call_ind((uint32_t)(EDI), 0x10932d3du);
  /* 10932d3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932d40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932d42 jne 0x10932d4e */
  if (!C.zf) goto L_10932d4e;
  /* 10932d44 push eax */
  push32((uint32_t)(EAX));
  /* 10932d45 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10932d47 call ebp */
  call_ind((uint32_t)(EBP), 0x10932d49u);
  /* 10932d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932d4c call esi */
  call_ind((uint32_t)(ESI), 0x10932d4eu);
L_10932d4e:;
  /* 10932d4e pop edi */
  EDI = (pop32());
  /* 10932d4f pop esi */
  ESI = (pop32());
  /* 10932d50 pop ebp */
  EBP = (pop32());
  /* 10932d51 pop ebx */
  EBX = (pop32());
  /* 10932d52 ret  */
  ESPCHK(0x109314e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d60 @ 0x10932d60 (217 bytes, 57 insns) */
void f_10932d60(void) {
  FTRACE(0x10932d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10932d60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10932d64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932d67 jne 0x10932df5 */
  if (!C.zf) goto L_10932df5;
  /* 10932d6d call dword ptr [0x10936098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936098))), 0x10932d73u);
  /* 10932d73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932d75 mov dword ptr [0x10937ccc], eax */
  w32((uint32_t)(0x10937ccc), (EAX));
  /* 10932d7a call 0x10933794 */
  push32(0x10932d7fu); f_10933794();
  /* 10932d7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932d81 pop ecx */
  ECX = (pop32());
  /* 10932d82 je 0x10932dc0 */
  if (C.zf) goto L_10932dc0;
  /* 10932d84 mov eax, dword ptr [0x10937ccc] */
  EAX = (r32((uint32_t)(0x10937ccc)));
  /* 10932d89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10932d8b mov cl, byte ptr [0x10937ccd] */
  CL = (r8((uint32_t)(0x10937ccd)));
  /* 10932d91 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10932d96 shr dword ptr [0x10937ccc], 0x10 */
  w32((uint32_t)(0x10937ccc), (sh_shr((uint32_t)(r32((uint32_t)(0x10937ccc))), (0x10u)&0x1f, 32)));
  /* 10932d9d mov dword ptr [0x10937cd4], eax */
  w32((uint32_t)(0x10937cd4), (EAX));
  /* 10932da2 mov dword ptr [0x10937cd8], ecx */
  w32((uint32_t)(0x10937cd8), (ECX));
  /* 10932da8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10932dab add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10932dad mov dword ptr [0x10937cd0], eax */
  w32((uint32_t)(0x10937cd0), (EAX));
  /* 10932db2 call 0x10933027 */
  push32(0x10932db7u); f_10933027();
  /* 10932db7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932db9 jne 0x10932dc4 */
  if (!C.zf) goto L_10932dc4;
  /* 10932dbb call 0x109337d0 */
  push32(0x10932dc0u); f_109337d0();
L_10932dc0:;
  /* 10932dc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10932dc2 jmp 0x10932e36 */
  goto L_10932e36;
L_10932dc4:;
  /* 10932dc4 call dword ptr [0x10936094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936094))), 0x10932dcau);
  /* 10932dca mov dword ptr [0x10938238], eax */
  w32((uint32_t)(0x10938238), (EAX));
  /* 10932dcf call 0x10933662 */
  push32(0x10932dd4u); f_10933662();
  /* 10932dd4 mov dword ptr [0x10937cb8], eax */
  w32((uint32_t)(0x10937cb8), (EAX));
  /* 10932dd9 call 0x1093314c */
  push32(0x10932ddeu); f_1093314c();
  /* 10932dde call 0x10933415 */
  push32(0x10932de3u); f_10933415();
  /* 10932de3 call 0x1093335c */
  push32(0x10932de8u); f_1093335c();
  /* 10932de8 call 0x10932f09 */
  push32(0x10932dedu); f_10932f09();
  /* 10932ded inc dword ptr [0x10937cb4] */
  { uint32_t _r=(r32((uint32_t)(0x10937cb4)))+1; w32((uint32_t)(0x10937cb4), (_r)); fl_inc(_r,32); }
  /* 10932df3 jmp 0x10932e33 */
  goto L_10932e33;
L_10932df5:;
  /* 10932df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10932df7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932df9 jne 0x10932e27 */
  if (!C.zf) goto L_10932e27;
  /* 10932dfb cmp dword ptr [0x10937cb4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10937cb4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932e01 jle 0x10932dc0 */
  if ((C.zf||C.sf!=C.of)) goto L_10932dc0;
  /* 10932e03 dec dword ptr [0x10937cb4] */
  { uint32_t _r=(r32((uint32_t)(0x10937cb4)))-1; w32((uint32_t)(0x10937cb4), (_r)); fl_dec(_r,32); }
  /* 10932e09 cmp dword ptr [0x10937d04], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10937d04))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932e0f jne 0x10932e16 */
  if (!C.zf) goto L_10932e16;
  /* 10932e11 call 0x10932f47 */
  push32(0x10932e16u); f_10932f47();
L_10932e16:;
  /* 10932e16 call 0x10933308 */
  push32(0x10932e1bu); f_10933308();
  /* 10932e1b call 0x1093307b */
  push32(0x10932e20u); f_1093307b();
  /* 10932e20 call 0x109337d0 */
  push32(0x10932e25u); f_109337d0();
  /* 10932e25 jmp 0x10932e33 */
  goto L_10932e33;
L_10932e27:;
  /* 10932e27 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932e2a jne 0x10932e33 */
  if (!C.zf) goto L_10932e33;
  /* 10932e2c push ecx */
  push32((uint32_t)(ECX));
  /* 10932e2d call 0x109330ac */
  push32(0x10932e32u); f_109330ac();
  /* 10932e32 pop ecx */
  ECX = (pop32());
L_10932e33:;
  /* 10932e33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932e35 pop eax */
  EAX = (pop32());
L_10932e36:;
  /* 10932e36 ret 0xc */
  ESPCHK(0x10932d60u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10932e39 (157 bytes, 73 insns) */
void f_10932e39(void) {
  FTRACE(0x10932e39u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10932e39 push ebp */
  push32((uint32_t)(EBP));
  /* 10932e3a mov ebp, esp */
  EBP = (ESP);
  /* 10932e3c push ebx */
  push32((uint32_t)(EBX));
  /* 10932e3d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10932e40 push esi */
  push32((uint32_t)(ESI));
  /* 10932e41 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10932e44 push edi */
  push32((uint32_t)(EDI));
  /* 10932e45 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10932e48 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10932e4a jne 0x10932e55 */
  if (!C.zf) goto L_10932e55;
  /* 10932e4c cmp dword ptr [0x10937cb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10937cb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932e53 jmp 0x10932e7b */
  goto L_10932e7b;
L_10932e55:;
  /* 10932e55 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932e58 je 0x10932e5f */
  if (C.zf) goto L_10932e5f;
  /* 10932e5a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932e5d jne 0x10932e81 */
  if (!C.zf) goto L_10932e81;
L_10932e5f:;
  /* 10932e5f mov eax, dword ptr [0x1093823c] */
  EAX = (r32((uint32_t)(0x1093823c)));
  /* 10932e64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932e66 je 0x10932e71 */
  if (C.zf) goto L_10932e71;
  /* 10932e68 push edi */
  push32((uint32_t)(EDI));
  /* 10932e69 push esi */
  push32((uint32_t)(ESI));
  /* 10932e6a push ebx */
  push32((uint32_t)(EBX));
  /* 10932e6b call eax */
  call_ind((uint32_t)(EAX), 0x10932e6du);
  /* 10932e6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932e6f je 0x10932e7d */
  if (C.zf) goto L_10932e7d;
L_10932e71:;
  /* 10932e71 push edi */
  push32((uint32_t)(EDI));
  /* 10932e72 push esi */
  push32((uint32_t)(ESI));
  /* 10932e73 push ebx */
  push32((uint32_t)(EBX));
  /* 10932e74 call 0x10932d60 */
  push32(0x10932e79u); f_10932d60();
  /* 10932e79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10932e7b:;
  /* 10932e7b jne 0x10932e81 */
  if (!C.zf) goto L_10932e81;
L_10932e7d:;
  /* 10932e7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10932e7f jmp 0x10932ecf */
  goto L_10932ecf;
L_10932e81:;
  /* 10932e81 push edi */
  push32((uint32_t)(EDI));
  /* 10932e82 push esi */
  push32((uint32_t)(ESI));
  /* 10932e83 push ebx */
  push32((uint32_t)(EBX));
  /* 10932e84 call 0x109314c0 */
  push32(0x10932e89u); f_109314c0();
  /* 10932e89 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932e8c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10932e8f jne 0x10932e9d */
  if (!C.zf) goto L_10932e9d;
  /* 10932e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932e93 jne 0x10932ecc */
  if (!C.zf) goto L_10932ecc;
  /* 10932e95 push edi */
  push32((uint32_t)(EDI));
  /* 10932e96 push eax */
  push32((uint32_t)(EAX));
  /* 10932e97 push ebx */
  push32((uint32_t)(EBX));
  /* 10932e98 call 0x10932d60 */
  push32(0x10932e9du); f_10932d60();
L_10932e9d:;
  /* 10932e9d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10932e9f je 0x10932ea6 */
  if (C.zf) goto L_10932ea6;
  /* 10932ea1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932ea4 jne 0x10932ecc */
  if (!C.zf) goto L_10932ecc;
L_10932ea6:;
  /* 10932ea6 push edi */
  push32((uint32_t)(EDI));
  /* 10932ea7 push esi */
  push32((uint32_t)(ESI));
  /* 10932ea8 push ebx */
  push32((uint32_t)(EBX));
  /* 10932ea9 call 0x10932d60 */
  push32(0x10932eaeu); f_10932d60();
  /* 10932eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932eb0 jne 0x10932eb5 */
  if (!C.zf) goto L_10932eb5;
  /* 10932eb2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10932eb5:;
  /* 10932eb5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932eb9 je 0x10932ecc */
  if (C.zf) goto L_10932ecc;
  /* 10932ebb mov eax, dword ptr [0x1093823c] */
  EAX = (r32((uint32_t)(0x1093823c)));
  /* 10932ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932ec2 je 0x10932ecc */
  if (C.zf) goto L_10932ecc;
  /* 10932ec4 push edi */
  push32((uint32_t)(EDI));
  /* 10932ec5 push esi */
  push32((uint32_t)(ESI));
  /* 10932ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 10932ec7 call eax */
  call_ind((uint32_t)(EAX), 0x10932ec9u);
  /* 10932ec9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10932ecc:;
  /* 10932ecc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10932ecf:;
  /* 10932ecf pop edi */
  EDI = (pop32());
  /* 10932ed0 pop esi */
  ESI = (pop32());
  /* 10932ed1 pop ebx */
  EBX = (pop32());
  /* 10932ed2 pop ebp */
  EBP = (pop32());
  /* 10932ed3 ret 0xc */
  ESPCHK(0x10932e39u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10932ed6 (48 bytes, 15 insns) */
void f_10932ed6(void) {
  FTRACE(0x10932ed6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10932ed6 mov eax, dword ptr [0x10937cc0] */
  EAX = (r32((uint32_t)(0x10937cc0)));
  /* 10932edb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932ede je 0x10932eed */
  if (C.zf) goto L_10932eed;
  /* 10932ee0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932ee2 jne 0x10932ef2 */
  if (!C.zf) goto L_10932ef2;
  /* 10932ee4 cmp dword ptr [0x10937cc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10937cc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932eeb jne 0x10932ef2 */
  if (!C.zf) goto L_10932ef2;
L_10932eed:;
  /* 10932eed call 0x10933845 */
  push32(0x10932ef2u); f_10933845();
L_10932ef2:;
  /* 10932ef2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10932ef6 call 0x1093387e */
  push32(0x10932efbu); f_1093387e();
  /* 10932efb push 0xff */
  push32((uint32_t)(0xffu));
  /* 10932f00 call dword ptr [0x1093769c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093769c))), 0x10932f06u);
  /* 10932f06 pop ecx */
  ECX = (pop32());
  /* 10932f07 pop ecx */
  ECX = (pop32());
  /* 10932f08 ret  */
  ESPCHK(0x10932ed6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f09 @ 0x10932f09 (45 bytes, 12 insns) */
void f_10932f09(void) {
  FTRACE(0x10932f09u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10932f09 mov eax, dword ptr [0x10938234] */
  EAX = (r32((uint32_t)(0x10938234)));
  /* 10932f0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932f10 je 0x10932f14 */
  if (C.zf) goto L_10932f14;
  /* 10932f12 call eax */
  call_ind((uint32_t)(EAX), 0x10932f14u);
L_10932f14:;
  /* 10932f14 push 0x10937010 */
  push32((uint32_t)(0x10937010u));
  /* 10932f19 push 0x10937008 */
  push32((uint32_t)(0x10937008u));
  /* 10932f1e call 0x1093300d */
  push32(0x10932f23u); f_1093300d();
  /* 10932f23 push 0x10937004 */
  push32((uint32_t)(0x10937004u));
  /* 10932f28 push 0x10937000 */
  push32((uint32_t)(0x10937000u));
  /* 10932f2d call 0x1093300d */
  push32(0x10932f32u); f_1093300d();
  /* 10932f32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932f35 ret  */
  ESPCHK(0x10932f09u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10932f36 (17 bytes, 6 insns) */
void f_10932f36(void) {
  FTRACE(0x10932f36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10932f36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932f38 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932f3a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10932f3e call 0x10932f56 */
  push32(0x10932f43u); f_10932f56();
  /* 10932f43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932f46 ret  */
  ESPCHK(0x10932f36u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f47 @ 0x10932f47 (15 bytes, 6 insns) */
void f_10932f47(void) {
  FTRACE(0x10932f47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10932f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10932f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10932f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10932f4d call 0x10932f56 */
  push32(0x10932f52u); f_10932f56();
  /* 10932f52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10932f55 ret  */
  ESPCHK(0x10932f47u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f56 @ 0x10932f56 (163 bytes, 53 insns) */
void f_10932f56(void) {
  FTRACE(0x10932f56u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10932f56 push edi */
  push32((uint32_t)(EDI));
  /* 10932f57 call 0x10932ffb */
  push32(0x10932f5cu); f_10932ffb();
  /* 10932f5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10932f5e pop edi */
  EDI = (pop32());
  /* 10932f5f cmp dword ptr [0x10937d08], edi */
  { uint32_t _a=(r32((uint32_t)(0x10937d08))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932f65 jne 0x10932f78 */
  if (!C.zf) goto L_10932f78;
  /* 10932f67 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10932f6b call dword ptr [0x109360a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360a4))), 0x10932f71u);
  /* 10932f71 push eax */
  push32((uint32_t)(EAX));
  /* 10932f72 call dword ptr [0x10936004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936004))), 0x10932f78u);
L_10932f78:;
  /* 10932f78 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932f7d push ebx */
  push32((uint32_t)(EBX));
  /* 10932f7e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10932f82 mov dword ptr [0x10937d04], edi */
  w32((uint32_t)(0x10937d04), (EDI));
  /* 10932f88 mov byte ptr [0x10937d00], bl */
  w8((uint32_t)(0x10937d00), (BL));
  /* 10932f8e jne 0x10932fcc */
  if (!C.zf) goto L_10932fcc;
  /* 10932f90 mov eax, dword ptr [0x10938230] */
  EAX = (r32((uint32_t)(0x10938230)));
  /* 10932f95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932f97 je 0x10932fbb */
  if (C.zf) goto L_10932fbb;
  /* 10932f99 mov ecx, dword ptr [0x1093822c] */
  ECX = (r32((uint32_t)(0x1093822c)));
  /* 10932f9f push esi */
  push32((uint32_t)(ESI));
  /* 10932fa0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10932fa3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932fa5 jb 0x10932fba */
  if (C.cf) goto L_10932fba;
L_10932fa7:;
  /* 10932fa7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10932fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10932fab je 0x10932faf */
  if (C.zf) goto L_10932faf;
  /* 10932fad call eax */
  call_ind((uint32_t)(EAX), 0x10932fafu);
L_10932faf:;
  /* 10932faf sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10932fb2 cmp esi, dword ptr [0x10938230] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10938230))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10932fb8 jae 0x10932fa7 */
  if (!C.cf) goto L_10932fa7;
L_10932fba:;
  /* 10932fba pop esi */
  ESI = (pop32());
L_10932fbb:;
  /* 10932fbb push 0x10937018 */
  push32((uint32_t)(0x10937018u));
  /* 10932fc0 push 0x10937014 */
  push32((uint32_t)(0x10937014u));
  /* 10932fc5 call 0x1093300d */
  push32(0x10932fcau); f_1093300d();
  /* 10932fca pop ecx */
  ECX = (pop32());
  /* 10932fcb pop ecx */
  ECX = (pop32());
L_10932fcc:;
  /* 10932fcc push 0x10937020 */
  push32((uint32_t)(0x10937020u));
  /* 10932fd1 push 0x1093701c */
  push32((uint32_t)(0x1093701cu));
  /* 10932fd6 call 0x1093300d */
  push32(0x10932fdbu); f_1093300d();
  /* 10932fdb pop ecx */
  ECX = (pop32());
  /* 10932fdc pop ecx */
  ECX = (pop32());
  /* 10932fdd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10932fdf pop ebx */
  EBX = (pop32());
  /* 10932fe0 je 0x10932fe9 */
  if (C.zf) goto L_10932fe9;
  /* 10932fe2 call 0x10933004 */
  push32(0x10932fe7u); f_10933004();
  /* 10932fe7 pop edi */
  EDI = (pop32());
  /* 10932fe8 ret  */
  ESPCHK(0x10932f56u, _esp0);
  ESP += 4; return;
L_10932fe9:;
  /* 10932fe9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10932fed mov dword ptr [0x10937d08], edi */
  w32((uint32_t)(0x10937d08), (EDI));
  /* 10932ff3 call dword ptr [0x10936000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936000))), 0x10932ff9u);
  /* 10932ff9 pop edi */
  EDI = (pop32());
  /* 10932ffa ret  */
  ESPCHK(0x10932f56u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ffb @ 0x10932ffb (9 bytes, 4 insns) */
void f_10932ffb(void) {
  FTRACE(0x10932ffbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10932ffb push 0xd */
  push32((uint32_t)(0xdu));
  /* 10932ffd call 0x10933a66 */
  push32(0x10933002u); f_10933a66();
  /* 10933002 pop ecx */
  ECX = (pop32());
  /* 10933003 ret  */
  ESPCHK(0x10932ffbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003004 @ 0x10933004 (9 bytes, 4 insns) */
void f_10933004(void) {
  FTRACE(0x10933004u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933004 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10933006 call 0x10933ac7 */
  push32(0x1093300bu); f_10933ac7();
  /* 1093300b pop ecx */
  ECX = (pop32());
  /* 1093300c ret  */
  ESPCHK(0x10933004u, _esp0);
  ESP += 4; return;
}

/* FUN_1000300d @ 0x1093300d (26 bytes, 12 insns) */
void f_1093300d(void) {
  FTRACE(0x1093300du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1093300d push esi */
  push32((uint32_t)(ESI));
  /* 1093300e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10933012:;
  /* 10933012 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933016 jae 0x10933025 */
  if (!C.cf) goto L_10933025;
  /* 10933018 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1093301a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093301c je 0x10933020 */
  if (C.zf) goto L_10933020;
  /* 1093301e call eax */
  call_ind((uint32_t)(EAX), 0x10933020u);
L_10933020:;
  /* 10933020 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10933023 jmp 0x10933012 */
  goto L_10933012;
L_10933025:;
  /* 10933025 pop esi */
  ESI = (pop32());
  /* 10933026 ret  */
  ESPCHK(0x1093300du, _esp0);
  ESP += 4; return;
}

/* FUN_10003027 @ 0x10933027 (84 bytes, 32 insns) */
void f_10933027(void) {
  FTRACE(0x10933027u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933027 push esi */
  push32((uint32_t)(ESI));
  /* 10933028 call 0x109339d1 */
  push32(0x1093302du); f_109339d1();
  /* 1093302d call dword ptr [0x109360a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360a8))), 0x10933033u);
  /* 10933033 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933036 mov dword ptr [0x109376a0], eax */
  w32((uint32_t)(0x109376a0), (EAX));
  /* 1093303b je 0x10933077 */
  if (C.zf) goto L_10933077;
  /* 1093303d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1093303f push 1 */
  push32((uint32_t)(0x1u));
  /* 10933041 call 0x10933adc */
  push32(0x10933046u); f_10933adc();
  /* 10933046 mov esi, eax */
  ESI = (EAX);
  /* 10933048 pop ecx */
  ECX = (pop32());
  /* 10933049 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1093304b pop ecx */
  ECX = (pop32());
  /* 1093304c je 0x10933077 */
  if (C.zf) goto L_10933077;
  /* 1093304e push esi */
  push32((uint32_t)(ESI));
  /* 1093304f push dword ptr [0x109376a0] */
  push32((uint32_t)(r32((uint32_t)(0x109376a0))));
  /* 10933055 call dword ptr [0x1093609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093609c))), 0x1093305bu);
  /* 1093305b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093305d je 0x10933077 */
  if (C.zf) goto L_10933077;
  /* 1093305f push esi */
  push32((uint32_t)(ESI));
  /* 10933060 call 0x10933099 */
  push32(0x10933065u); f_10933099();
  /* 10933065 pop ecx */
  ECX = (pop32());
  /* 10933066 call dword ptr [0x109360a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x109360a0))), 0x1093306cu);
  /* 1093306c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10933070 push 1 */
  push32((uint32_t)(0x1u));
  /* 10933072 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10933074 pop eax */
  EAX = (pop32());
  /* 10933075 pop esi */
  ESI = (pop32());
  /* 10933076 ret  */
  ESPCHK(0x10933027u, _esp0);
  ESP += 4; return;
L_10933077:;
  /* 10933077 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933079 pop esi */
  ESI = (pop32());
  /* 1093307a ret  */
  ESPCHK(0x10933027u, _esp0);
  ESP += 4; return;
}

/* FUN_1000307b @ 0x1093307b (30 bytes, 8 insns) */
void f_1093307b(void) {
  FTRACE(0x1093307bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1093307b call 0x109339fa */
  push32(0x10933080u); f_109339fa();
  /* 10933080 mov eax, dword ptr [0x109376a0] */
  EAX = (r32((uint32_t)(0x109376a0)));
  /* 10933085 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933088 je 0x10933098 */
  if (C.zf) goto L_10933098;
  /* 1093308a push eax */
  push32((uint32_t)(EAX));
  /* 1093308b call dword ptr [0x1093608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093608c))), 0x10933091u);
  /* 10933091 or dword ptr [0x109376a0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x109376a0)))|(0xffffffffu); w32((uint32_t)(0x109376a0), (_r)); fl_logic(_r,32); }
L_10933098:;
  /* 10933098 ret  */
  ESPCHK(0x1093307bu, _esp0);
  ESP += 4; return;
}

/* FUN_10003099 @ 0x10933099 (19 bytes, 4 insns) */
void f_10933099(void) {
  FTRACE(0x10933099u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933099 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1093309d mov dword ptr [eax + 0x50], 0x10937820 */
  w32((uint32_t)(EAX + 0x50), (0x10937820u));
  /* 109330a4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 109330ab ret  */
  ESPCHK(0x10933099u, _esp0);
  ESP += 4; return;
}

/* FUN_100030ac @ 0x109330ac (160 bytes, 62 insns) */
void f_109330ac(void) {
  FTRACE(0x109330acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109330ac mov eax, dword ptr [0x109376a0] */
  EAX = (r32((uint32_t)(0x109376a0)));
  /* 109330b1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109330b4 je 0x1093314b */
  if (C.zf) goto L_1093314b;
  /* 109330ba push esi */
  push32((uint32_t)(ESI));
  /* 109330bb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 109330bf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109330c1 jne 0x109330d0 */
  if (!C.zf) goto L_109330d0;
  /* 109330c3 push eax */
  push32((uint32_t)(EAX));
  /* 109330c4 call dword ptr [0x10936090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936090))), 0x109330cau);
  /* 109330ca mov esi, eax */
  ESI = (EAX);
  /* 109330cc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109330ce je 0x1093313c */
  if (C.zf) goto L_1093313c;
L_109330d0:;
  /* 109330d0 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 109330d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109330d5 je 0x109330de */
  if (C.zf) goto L_109330de;
  /* 109330d7 push eax */
  push32((uint32_t)(EAX));
  /* 109330d8 call 0x10933b69 */
  push32(0x109330ddu); f_10933b69();
  /* 109330dd pop ecx */
  ECX = (pop32());
L_109330de:;
  /* 109330de mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 109330e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109330e3 je 0x109330ec */
  if (C.zf) goto L_109330ec;
  /* 109330e5 push eax */
  push32((uint32_t)(EAX));
  /* 109330e6 call 0x10933b69 */
  push32(0x109330ebu); f_10933b69();
  /* 109330eb pop ecx */
  ECX = (pop32());
L_109330ec:;
  /* 109330ec mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 109330ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109330f1 je 0x109330fa */
  if (C.zf) goto L_109330fa;
  /* 109330f3 push eax */
  push32((uint32_t)(EAX));
  /* 109330f4 call 0x10933b69 */
  push32(0x109330f9u); f_10933b69();
  /* 109330f9 pop ecx */
  ECX = (pop32());
L_109330fa:;
  /* 109330fa mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 109330fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109330ff je 0x10933108 */
  if (C.zf) goto L_10933108;
  /* 10933101 push eax */
  push32((uint32_t)(EAX));
  /* 10933102 call 0x10933b69 */
  push32(0x10933107u); f_10933b69();
  /* 10933107 pop ecx */
  ECX = (pop32());
L_10933108:;
  /* 10933108 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 1093310b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093310d je 0x10933116 */
  if (C.zf) goto L_10933116;
  /* 1093310f push eax */
  push32((uint32_t)(EAX));
  /* 10933110 call 0x10933b69 */
  push32(0x10933115u); f_10933b69();
  /* 10933115 pop ecx */
  ECX = (pop32());
L_10933116:;
  /* 10933116 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10933119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093311b je 0x10933124 */
  if (C.zf) goto L_10933124;
  /* 1093311d push eax */
  push32((uint32_t)(EAX));
  /* 1093311e call 0x10933b69 */
  push32(0x10933123u); f_10933b69();
  /* 10933123 pop ecx */
  ECX = (pop32());
L_10933124:;
  /* 10933124 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10933127 cmp eax, 0x10937820 */
  { uint32_t _a=(EAX),_b=(0x10937820u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093312c je 0x10933135 */
  if (C.zf) goto L_10933135;
  /* 1093312e push eax */
  push32((uint32_t)(EAX));
  /* 1093312f call 0x10933b69 */
  push32(0x10933134u); f_10933b69();
  /* 10933134 pop ecx */
  ECX = (pop32());
L_10933135:;
  /* 10933135 push esi */
  push32((uint32_t)(ESI));
  /* 10933136 call 0x10933b69 */
  push32(0x1093313bu); f_10933b69();
  /* 1093313b pop ecx */
  ECX = (pop32());
L_1093313c:;
  /* 1093313c push 0 */
  push32((uint32_t)(0x0u));
  /* 1093313e push dword ptr [0x109376a0] */
  push32((uint32_t)(r32((uint32_t)(0x109376a0))));
  /* 10933144 call dword ptr [0x1093609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093609c))), 0x1093314au);
  /* 1093314a pop esi */
  ESI = (pop32());
L_1093314b:;
  /* 1093314b ret  */
  ESPCHK(0x109330acu, _esp0);
  ESP += 4; return;
}

/* FUN_1000314c @ 0x1093314c (444 bytes, 150 insns) */
void f_1093314c(void) {
  FTRACE(0x1093314cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1093314c push ebp */
  push32((uint32_t)(EBP));
  /* 1093314d mov ebp, esp */
  EBP = (ESP);
  /* 1093314f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933152 push ebx */
  push32((uint32_t)(EBX));
  /* 10933153 push esi */
  push32((uint32_t)(ESI));
  /* 10933154 push edi */
  push32((uint32_t)(EDI));
  /* 10933155 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1093315a call 0x10933bb1 */
  push32(0x1093315fu); f_10933bb1();
  /* 1093315f mov esi, eax */
  ESI = (EAX);
  /* 10933161 pop ecx */
  ECX = (pop32());
  /* 10933162 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933164 jne 0x1093316e */
  if (!C.zf) goto L_1093316e;
  /* 10933166 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10933168 call 0x10932ed6 */
  push32(0x1093316du); f_10932ed6();
  /* 1093316d pop ecx */
  ECX = (pop32());
L_1093316e:;
  /* 1093316e mov dword ptr [0x10938120], esi */
  w32((uint32_t)(0x10938120), (ESI));
  /* 10933174 mov dword ptr [0x10938220], 0x20 */
  w32((uint32_t)(0x10938220), (0x20u));
  /* 1093317e lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10933184:;
  /* 10933184 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933186 jae 0x109331a6 */
  if (!C.cf) goto L_109331a6;
  /* 10933188 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1093318c or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1093318f and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10933193 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10933197 mov eax, dword ptr [0x10938120] */
  EAX = (r32((uint32_t)(0x10938120)));
  /* 1093319c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1093319f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109331a4 jmp 0x10933184 */
  goto L_10933184;
L_109331a6:;
  /* 109331a6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 109331a9 push eax */
  push32((uint32_t)(EAX));
  /* 109331aa call dword ptr [0x10936084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936084))), 0x109331b0u);
  /* 109331b0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 109331b5 je 0x1093328c */
  if (C.zf) goto L_1093328c;
  /* 109331bb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 109331be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109331c0 je 0x1093328c */
  if (C.zf) goto L_1093328c;
  /* 109331c6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 109331c8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 109331cb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 109331ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 109331d1 mov eax, 0x800 */
  EAX = (0x800u);
  /* 109331d6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109331d8 jl 0x109331dc */
  if ((C.sf!=C.of)) goto L_109331dc;
  /* 109331da mov edi, eax */
  EDI = (EAX);
L_109331dc:;
  /* 109331dc cmp dword ptr [0x10938220], edi */
  { uint32_t _a=(r32((uint32_t)(0x10938220))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109331e2 jge 0x1093323a */
  if ((C.sf==C.of)) goto L_1093323a;
  /* 109331e4 mov esi, 0x10938124 */
  ESI = (0x10938124u);
L_109331e9:;
  /* 109331e9 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 109331ee call 0x10933bb1 */
  push32(0x109331f3u); f_10933bb1();
  /* 109331f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109331f5 pop ecx */
  ECX = (pop32());
  /* 109331f6 je 0x10933234 */
  if (C.zf) goto L_10933234;
  /* 109331f8 add dword ptr [0x10938220], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10938220))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10938220), (_r)); fl_add(_a,_b,_r,32); }
  /* 109331ff mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10933201 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10933207:;
  /* 10933207 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933209 jae 0x10933227 */
  if (!C.cf) goto L_10933227;
  /* 1093320b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1093320f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10933212 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10933216 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1093321a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1093321c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093321f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933225 jmp 0x10933207 */
  goto L_10933207;
L_10933227:;
  /* 10933227 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1093322a cmp dword ptr [0x10938220], edi */
  { uint32_t _a=(r32((uint32_t)(0x10938220))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933230 jl 0x109331e9 */
  if ((C.sf!=C.of)) goto L_109331e9;
  /* 10933232 jmp 0x1093323a */
  goto L_1093323a;
L_10933234:;
  /* 10933234 mov edi, dword ptr [0x10938220] */
  EDI = (r32((uint32_t)(0x10938220)));
L_1093323a:;
  /* 1093323a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1093323c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1093323e jle 0x1093328c */
  if ((C.zf||C.sf!=C.of)) goto L_1093328c;
L_10933240:;
  /* 10933240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10933243 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10933245 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933248 je 0x10933282 */
  if (C.zf) goto L_10933282;
  /* 1093324a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 1093324c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1093324e je 0x10933282 */
  if (C.zf) goto L_10933282;
  /* 10933250 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10933252 jne 0x1093325f */
  if (!C.zf) goto L_1093325f;
  /* 10933254 push ecx */
  push32((uint32_t)(ECX));
  /* 10933255 call dword ptr [0x1093607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093607c))), 0x1093325bu);
  /* 1093325b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093325d je 0x10933282 */
  if (C.zf) goto L_10933282;
L_1093325f:;
  /* 1093325f mov ecx, esi */
  ECX = (ESI);
  /* 10933261 mov eax, esi */
  EAX = (ESI);
  /* 10933263 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10933266 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10933269 mov ecx, dword ptr [ecx*4 + 0x10938120] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10938120)));
  /* 10933270 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10933273 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10933276 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10933279 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1093327b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1093327d mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 1093327f mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10933282:;
  /* 10933282 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10933286 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10933287 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10933288 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093328a jl 0x10933240 */
  if ((C.sf!=C.of)) goto L_10933240;
L_1093328c:;
  /* 1093328c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1093328e:;
  /* 1093328e mov ecx, dword ptr [0x10938120] */
  ECX = (r32((uint32_t)(0x10938120)));
  /* 10933294 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10933297 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093329b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1093329e jne 0x109332ed */
  if (!C.zf) goto L_109332ed;
  /* 109332a0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 109332a2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 109332a6 jne 0x109332ad */
  if (!C.zf) goto L_109332ad;
  /* 109332a8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 109332aa pop eax */
  EAX = (pop32());
  /* 109332ab jmp 0x109332b7 */
  goto L_109332b7;
L_109332ad:;
  /* 109332ad mov eax, ebx */
  EAX = (EBX);
  /* 109332af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 109332b0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 109332b2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109332b4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_109332b7:;
  /* 109332b7 push eax */
  push32((uint32_t)(EAX));
  /* 109332b8 call dword ptr [0x10936080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936080))), 0x109332beu);
  /* 109332be mov edi, eax */
  EDI = (EAX);
  /* 109332c0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109332c3 je 0x109332dc */
  if (C.zf) goto L_109332dc;
  /* 109332c5 push edi */
  push32((uint32_t)(EDI));
  /* 109332c6 call dword ptr [0x1093607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093607c))), 0x109332ccu);
  /* 109332cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109332ce je 0x109332dc */
  if (C.zf) goto L_109332dc;
  /* 109332d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 109332d5 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 109332d7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109332da jne 0x109332e2 */
  if (!C.zf) goto L_109332e2;
L_109332dc:;
  /* 109332dc or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 109332e0 jmp 0x109332f1 */
  goto L_109332f1;
L_109332e2:;
  /* 109332e2 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109332e5 jne 0x109332f1 */
  if (!C.zf) goto L_109332f1;
  /* 109332e7 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 109332eb jmp 0x109332f1 */
  goto L_109332f1;
L_109332ed:;
  /* 109332ed or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_109332f1:;
  /* 109332f1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 109332f2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109332f5 jl 0x1093328e */
  if ((C.sf!=C.of)) goto L_1093328e;
  /* 109332f7 push dword ptr [0x10938220] */
  push32((uint32_t)(r32((uint32_t)(0x10938220))));
  /* 109332fd call dword ptr [0x10936088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936088))), 0x10933303u);
  /* 10933303 pop edi */
  EDI = (pop32());
  /* 10933304 pop esi */
  ESI = (pop32());
  /* 10933305 pop ebx */
  EBX = (pop32());
  /* 10933306 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10933307 ret  */
  ESPCHK(0x1093314cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003308 @ 0x10933308 (84 bytes, 33 insns) */
void f_10933308(void) {
  FTRACE(0x10933308u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933308 push ebx */
  push32((uint32_t)(EBX));
  /* 10933309 push esi */
  push32((uint32_t)(ESI));
  /* 1093330a push edi */
  push32((uint32_t)(EDI));
  /* 1093330b mov esi, 0x10938120 */
  ESI = (0x10938120u);
L_10933310:;
  /* 10933310 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10933312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10933314 je 0x1093334d */
  if (C.zf) goto L_1093334d;
  /* 10933316 mov edi, eax */
  EDI = (EAX);
  /* 10933318 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093331d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093331f jae 0x10933342 */
  if (!C.cf) goto L_10933342;
  /* 10933321 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10933324:;
  /* 10933324 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933328 je 0x10933331 */
  if (C.zf) goto L_10933331;
  /* 1093332a push ebx */
  push32((uint32_t)(EBX));
  /* 1093332b call dword ptr [0x10936074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936074))), 0x10933331u);
L_10933331:;
  /* 10933331 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10933333 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10933336 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093333b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093333e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933340 jb 0x10933324 */
  if (C.cf) goto L_10933324;
L_10933342:;
  /* 10933342 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10933344 call 0x10933b69 */
  push32(0x10933349u); f_10933b69();
  /* 10933349 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1093334c pop ecx */
  ECX = (pop32());
L_1093334d:;
  /* 1093334d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10933350 cmp esi, 0x10938220 */
  { uint32_t _a=(ESI),_b=(0x10938220u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933356 jl 0x10933310 */
  if ((C.sf!=C.of)) goto L_10933310;
  /* 10933358 pop edi */
  EDI = (pop32());
  /* 10933359 pop esi */
  ESI = (pop32());
  /* 1093335a pop ebx */
  EBX = (pop32());
  /* 1093335b ret  */
  ESPCHK(0x10933308u, _esp0);
  ESP += 4; return;
}

/* FUN_1000335c @ 0x1093335c (185 bytes, 71 insns) */
void f_1093335c(void) {
  FTRACE(0x1093335cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1093335c push ebx */
  push32((uint32_t)(EBX));
  /* 1093335d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1093335f cmp dword ptr [0x10938228], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10938228))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933365 push esi */
  push32((uint32_t)(ESI));
  /* 10933366 push edi */
  push32((uint32_t)(EDI));
  /* 10933367 jne 0x1093336e */
  if (!C.zf) goto L_1093336e;
  /* 10933369 call 0x10934183 */
  push32(0x1093336eu); f_10934183();
L_1093336e:;
  /* 1093336e mov esi, dword ptr [0x10937cb8] */
  ESI = (r32((uint32_t)(0x10937cb8)));
  /* 10933374 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10933376:;
  /* 10933376 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10933378 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093337a je 0x1093338e */
  if (C.zf) goto L_1093338e;
  /* 1093337c cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093337e je 0x10933381 */
  if (C.zf) goto L_10933381;
  /* 10933380 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10933381:;
  /* 10933381 push esi */
  push32((uint32_t)(ESI));
  /* 10933382 call 0x10933d30 */
  push32(0x10933387u); f_10933d30();
  /* 10933387 pop ecx */
  ECX = (pop32());
  /* 10933388 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 1093338c jmp 0x10933376 */
  goto L_10933376;
L_1093338e:;
  /* 1093338e lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10933395 push eax */
  push32((uint32_t)(EAX));
  /* 10933396 call 0x10933bb1 */
  push32(0x1093339bu); f_10933bb1();
  /* 1093339b mov esi, eax */
  ESI = (EAX);
  /* 1093339d pop ecx */
  ECX = (pop32());
  /* 1093339e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109333a0 mov dword ptr [0x10937ce8], esi */
  w32((uint32_t)(0x10937ce8), (ESI));
  /* 109333a6 jne 0x109333b0 */
  if (!C.zf) goto L_109333b0;
  /* 109333a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 109333aa call 0x10932ed6 */
  push32(0x109333afu); f_10932ed6();
  /* 109333af pop ecx */
  ECX = (pop32());
L_109333b0:;
  /* 109333b0 mov edi, dword ptr [0x10937cb8] */
  EDI = (r32((uint32_t)(0x10937cb8)));
  /* 109333b6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109333b8 je 0x109333f3 */
  if (C.zf) goto L_109333f3;
  /* 109333ba push ebp */
  push32((uint32_t)(EBP));
L_109333bb:;
  /* 109333bb push edi */
  push32((uint32_t)(EDI));
  /* 109333bc call 0x10933d30 */
  push32(0x109333c1u); f_10933d30();
  /* 109333c1 mov ebp, eax */
  EBP = (EAX);
  /* 109333c3 pop ecx */
  ECX = (pop32());
  /* 109333c4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 109333c5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109333c8 je 0x109333ec */
  if (C.zf) goto L_109333ec;
  /* 109333ca push ebp */
  push32((uint32_t)(EBP));
  /* 109333cb call 0x10933bb1 */
  push32(0x109333d0u); f_10933bb1();
  /* 109333d0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109333d2 pop ecx */
  ECX = (pop32());
  /* 109333d3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 109333d5 jne 0x109333df */
  if (!C.zf) goto L_109333df;
  /* 109333d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 109333d9 call 0x10932ed6 */
  push32(0x109333deu); f_10932ed6();
  /* 109333de pop ecx */
  ECX = (pop32());
L_109333df:;
  /* 109333df push edi */
  push32((uint32_t)(EDI));
  /* 109333e0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 109333e2 call 0x10933c40 */
  push32(0x109333e7u); f_10933c40();
  /* 109333e7 pop ecx */
  ECX = (pop32());
  /* 109333e8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109333eb pop ecx */
  ECX = (pop32());
L_109333ec:;
  /* 109333ec add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109333ee cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109333f0 jne 0x109333bb */
  if (!C.zf) goto L_109333bb;
  /* 109333f2 pop ebp */
  EBP = (pop32());
L_109333f3:;
  /* 109333f3 push dword ptr [0x10937cb8] */
  push32((uint32_t)(r32((uint32_t)(0x10937cb8))));
  /* 109333f9 call 0x10933b69 */
  push32(0x109333feu); f_10933b69();
  /* 109333fe pop ecx */
  ECX = (pop32());
  /* 109333ff mov dword ptr [0x10937cb8], ebx */
  w32((uint32_t)(0x10937cb8), (EBX));
  /* 10933405 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10933407 pop edi */
  EDI = (pop32());
  /* 10933408 pop esi */
  ESI = (pop32());
  /* 10933409 mov dword ptr [0x10938224], 1 */
  w32((uint32_t)(0x10938224), (0x1u));
  /* 10933413 pop ebx */
  EBX = (pop32());
  /* 10933414 ret  */
  ESPCHK(0x1093335cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003415 @ 0x10933415 (153 bytes, 62 insns) */
void f_10933415(void) {
  FTRACE(0x10933415u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933415 push ebp */
  push32((uint32_t)(EBP));
  /* 10933416 mov ebp, esp */
  EBP = (ESP);
  /* 10933418 push ecx */
  push32((uint32_t)(ECX));
  /* 10933419 push ecx */
  push32((uint32_t)(ECX));
  /* 1093341a push ebx */
  push32((uint32_t)(EBX));
  /* 1093341b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1093341d cmp dword ptr [0x10938228], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10938228))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933423 push esi */
  push32((uint32_t)(ESI));
  /* 10933424 push edi */
  push32((uint32_t)(EDI));
  /* 10933425 jne 0x1093342c */
  if (!C.zf) goto L_1093342c;
  /* 10933427 call 0x10934183 */
  push32(0x1093342cu); f_10934183();
L_1093342c:;
  /* 1093342c mov esi, 0x10937d0c */
  ESI = (0x10937d0cu);
  /* 10933431 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10933436 push esi */
  push32((uint32_t)(ESI));
  /* 10933437 push ebx */
  push32((uint32_t)(EBX));
  /* 10933438 call dword ptr [0x10936070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936070))), 0x1093343eu);
  /* 1093343e mov eax, dword ptr [0x10938238] */
  EAX = (r32((uint32_t)(0x10938238)));
  /* 10933443 mov dword ptr [0x10937cf8], esi */
  w32((uint32_t)(0x10937cf8), (ESI));
  /* 10933449 mov edi, esi */
  EDI = (ESI);
  /* 1093344b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093344d je 0x10933451 */
  if (C.zf) goto L_10933451;
  /* 1093344f mov edi, eax */
  EDI = (EAX);
L_10933451:;
  /* 10933451 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10933454 push eax */
  push32((uint32_t)(EAX));
  /* 10933455 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10933458 push eax */
  push32((uint32_t)(EAX));
  /* 10933459 push ebx */
  push32((uint32_t)(EBX));
  /* 1093345a push ebx */
  push32((uint32_t)(EBX));
  /* 1093345b push edi */
  push32((uint32_t)(EDI));
  /* 1093345c call 0x109334ae */
  push32(0x10933461u); f_109334ae();
  /* 10933461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10933464 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10933467 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1093346a push eax */
  push32((uint32_t)(EAX));
  /* 1093346b call 0x10933bb1 */
  push32(0x10933470u); f_10933bb1();
  /* 10933470 mov esi, eax */
  ESI = (EAX);
  /* 10933472 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10933475 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933477 jne 0x10933481 */
  if (!C.zf) goto L_10933481;
  /* 10933479 push 8 */
  push32((uint32_t)(0x8u));
  /* 1093347b call 0x10932ed6 */
  push32(0x10933480u); f_10932ed6();
  /* 10933480 pop ecx */
  ECX = (pop32());
L_10933481:;
  /* 10933481 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10933484 push eax */
  push32((uint32_t)(EAX));
  /* 10933485 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10933488 push eax */
  push32((uint32_t)(EAX));
  /* 10933489 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1093348c lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 1093348f push eax */
  push32((uint32_t)(EAX));
  /* 10933490 push esi */
  push32((uint32_t)(ESI));
  /* 10933491 push edi */
  push32((uint32_t)(EDI));
  /* 10933492 call 0x109334ae */
  push32(0x10933497u); f_109334ae();
  /* 10933497 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1093349a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093349d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1093349e mov dword ptr [0x10937ce0], esi */
  w32((uint32_t)(0x10937ce0), (ESI));
  /* 109334a4 pop edi */
  EDI = (pop32());
  /* 109334a5 pop esi */
  ESI = (pop32());
  /* 109334a6 mov dword ptr [0x10937cdc], eax */
  w32((uint32_t)(0x10937cdc), (EAX));
  /* 109334ab pop ebx */
  EBX = (pop32());
  /* 109334ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109334ad ret  */
  ESPCHK(0x10933415u, _esp0);
  ESP += 4; return;
}

/* FUN_100034ae @ 0x109334ae (436 bytes, 187 insns) */
void f_109334ae(void) {
  FTRACE(0x109334aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109334ae push ebp */
  push32((uint32_t)(EBP));
  /* 109334af mov ebp, esp */
  EBP = (ESP);
  /* 109334b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 109334b4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 109334b7 push ebx */
  push32((uint32_t)(EBX));
  /* 109334b8 push esi */
  push32((uint32_t)(ESI));
  /* 109334b9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 109334bc mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 109334bf push edi */
  push32((uint32_t)(EDI));
  /* 109334c0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 109334c3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 109334c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109334cc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 109334ce je 0x109334d8 */
  if (C.zf) goto L_109334d8;
  /* 109334d0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 109334d2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 109334d5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_109334d8:;
  /* 109334d8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109334db jne 0x10933521 */
  if (!C.zf) goto L_10933521;
L_109334dd:;
  /* 109334dd mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 109334e0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109334e1 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109334e4 je 0x1093350f */
  if (C.zf) goto L_1093350f;
  /* 109334e6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109334e8 je 0x1093350f */
  if (C.zf) goto L_1093350f;
  /* 109334ea movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 109334ed test byte ptr [edx + 0x10938001], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10938001)))&(0x4u); fl_logic(_r,8); }
  /* 109334f4 je 0x10933502 */
  if (C.zf) goto L_10933502;
  /* 109334f6 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109334f8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109334fa je 0x10933502 */
  if (C.zf) goto L_10933502;
  /* 109334fc mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109334fe mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10933500 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10933501 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10933502:;
  /* 10933502 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10933504 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933506 je 0x109334dd */
  if (C.zf) goto L_109334dd;
  /* 10933508 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1093350a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1093350c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1093350d jmp 0x109334dd */
  goto L_109334dd;
L_1093350f:;
  /* 1093350f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10933511 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933513 je 0x10933519 */
  if (C.zf) goto L_10933519;
  /* 10933515 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10933518 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10933519:;
  /* 10933519 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093351c jne 0x10933564 */
  if (!C.zf) goto L_10933564;
  /* 1093351e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093351f jmp 0x10933564 */
  goto L_10933564;
L_10933521:;
  /* 10933521 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10933523 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933525 je 0x1093352c */
  if (C.zf) goto L_1093352c;
  /* 10933527 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10933529 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1093352b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1093352c:;
  /* 1093352c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1093352e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093352f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10933532 test byte ptr [ebx + 0x10938001], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10938001)))&(0x4u); fl_logic(_r,8); }
  /* 10933539 je 0x10933547 */
  if (C.zf) goto L_10933547;
  /* 1093353b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1093353d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1093353f je 0x10933546 */
  if (C.zf) goto L_10933546;
  /* 10933541 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10933543 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10933545 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10933546:;
  /* 10933546 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10933547:;
  /* 10933547 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093354a je 0x10933555 */
  if (C.zf) goto L_10933555;
  /* 1093354c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1093354e je 0x10933559 */
  if (C.zf) goto L_10933559;
  /* 10933550 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933553 jne 0x10933521 */
  if (!C.zf) goto L_10933521;
L_10933555:;
  /* 10933555 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10933557 jne 0x1093355c */
  if (!C.zf) goto L_1093355c;
L_10933559:;
  /* 10933559 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1093355a jmp 0x10933564 */
  goto L_10933564;
L_1093355c:;
  /* 1093355c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1093355e je 0x10933564 */
  if (C.zf) goto L_10933564;
  /* 10933560 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10933564:;
  /* 10933564 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10933568:;
  /* 10933568 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093356b je 0x10933651 */
  if (C.zf) goto L_10933651;
L_10933571:;
  /* 10933571 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10933573 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933576 je 0x1093357d */
  if (C.zf) goto L_1093357d;
  /* 10933578 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093357b jne 0x10933580 */
  if (!C.zf) goto L_10933580;
L_1093357d:;
  /* 1093357d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093357e jmp 0x10933571 */
  goto L_10933571;
L_10933580:;
  /* 10933580 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933583 je 0x10933651 */
  if (C.zf) goto L_10933651;
  /* 10933589 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1093358b je 0x10933595 */
  if (C.zf) goto L_10933595;
  /* 1093358d mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 1093358f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10933592 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10933595:;
  /* 10933595 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10933598 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1093359a:;
  /* 1093359a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 109335a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_109335a3:;
  /* 109335a3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109335a6 jne 0x109335ac */
  if (!C.zf) goto L_109335ac;
  /* 109335a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109335a9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 109335aa jmp 0x109335a3 */
  goto L_109335a3;
L_109335ac:;
  /* 109335ac cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109335af jne 0x109335dd */
  if (!C.zf) goto L_109335dd;
  /* 109335b1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 109335b4 jne 0x109335db */
  if (!C.zf) goto L_109335db;
  /* 109335b6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 109335b8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109335bb je 0x109335ca */
  if (C.zf) goto L_109335ca;
  /* 109335bd cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109335c1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 109335c4 jne 0x109335ca */
  if (!C.zf) goto L_109335ca;
  /* 109335c6 mov eax, edx */
  EAX = (EDX);
  /* 109335c8 jmp 0x109335cd */
  goto L_109335cd;
L_109335ca:;
  /* 109335ca mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_109335cd:;
  /* 109335cd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 109335d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 109335d2 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109335d5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 109335d8 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_109335db:;
  /* 109335db shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_109335dd:;
  /* 109335dd mov edx, ebx */
  EDX = (EBX);
  /* 109335df dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109335e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 109335e2 je 0x109335f2 */
  if (C.zf) goto L_109335f2;
  /* 109335e4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_109335e5:;
  /* 109335e5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 109335e7 je 0x109335ed */
  if (C.zf) goto L_109335ed;
  /* 109335e9 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 109335ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_109335ed:;
  /* 109335ed inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 109335ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 109335f0 jne 0x109335e5 */
  if (!C.zf) goto L_109335e5;
L_109335f2:;
  /* 109335f2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 109335f4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 109335f6 je 0x10933642 */
  if (C.zf) goto L_10933642;
  /* 109335f8 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109335fc jne 0x10933608 */
  if (!C.zf) goto L_10933608;
  /* 109335fe cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933601 je 0x10933642 */
  if (C.zf) goto L_10933642;
  /* 10933603 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933606 je 0x10933642 */
  if (C.zf) goto L_10933642;
L_10933608:;
  /* 10933608 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093360c je 0x1093363c */
  if (C.zf) goto L_1093363c;
  /* 1093360e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933610 je 0x1093362b */
  if (C.zf) goto L_1093362b;
  /* 10933612 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10933615 test byte ptr [ebx + 0x10938001], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10938001)))&(0x4u); fl_logic(_r,8); }
  /* 1093361c je 0x10933624 */
  if (C.zf) goto L_10933624;
  /* 1093361e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10933620 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10933621 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10933622 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10933624:;
  /* 10933624 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10933626 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10933628 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10933629 jmp 0x1093363a */
  goto L_1093363a;
L_1093362b:;
  /* 1093362b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1093362e test byte ptr [edx + 0x10938001], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10938001)))&(0x4u); fl_logic(_r,8); }
  /* 10933635 je 0x1093363a */
  if (C.zf) goto L_1093363a;
  /* 10933637 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10933638 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1093363a:;
  /* 1093363a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1093363c:;
  /* 1093363c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093363d jmp 0x1093359a */
  goto L_1093359a;
L_10933642:;
  /* 10933642 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933644 je 0x1093364a */
  if (C.zf) goto L_1093364a;
  /* 10933646 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10933649 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1093364a:;
  /* 1093364a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1093364c jmp 0x10933568 */
  goto L_10933568;
L_10933651:;
  /* 10933651 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10933653 je 0x10933658 */
  if (C.zf) goto L_10933658;
  /* 10933655 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10933658:;
  /* 10933658 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1093365b pop edi */
  EDI = (pop32());
  /* 1093365c pop esi */
  ESI = (pop32());
  /* 1093365d pop ebx */
  EBX = (pop32());
  /* 1093365e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10933660 pop ebp */
  EBP = (pop32());
  /* 10933661 ret  */
  ESPCHK(0x109334aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003662 @ 0x10933662 (306 bytes, 132 insns) */
void f_10933662(void) {
  FTRACE(0x10933662u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933662 push ecx */
  push32((uint32_t)(ECX));
  /* 10933663 push ecx */
  push32((uint32_t)(ECX));
  /* 10933664 mov eax, dword ptr [0x10937e10] */
  EAX = (r32((uint32_t)(0x10937e10)));
  /* 10933669 push ebx */
  push32((uint32_t)(EBX));
  /* 1093366a push ebp */
  push32((uint32_t)(EBP));
  /* 1093366b mov ebp, dword ptr [0x1093605c] */
  EBP = (r32((uint32_t)(0x1093605c)));
  /* 10933671 push esi */
  push32((uint32_t)(ESI));
  /* 10933672 push edi */
  push32((uint32_t)(EDI));
  /* 10933673 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10933675 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10933677 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10933679 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093367b jne 0x109336b0 */
  if (!C.zf) goto L_109336b0;
  /* 1093367d call ebp */
  call_ind((uint32_t)(EBP), 0x1093367fu);
  /* 1093367f mov esi, eax */
  ESI = (EAX);
  /* 10933681 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933683 je 0x10933691 */
  if (C.zf) goto L_10933691;
  /* 10933685 mov dword ptr [0x10937e10], 1 */
  w32((uint32_t)(0x10937e10), (0x1u));
  /* 1093368f jmp 0x109336b9 */
  goto L_109336b9;
L_10933691:;
  /* 10933691 call dword ptr [0x1093606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093606c))), 0x10933697u);
  /* 10933697 mov edi, eax */
  EDI = (EAX);
  /* 10933699 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093369b je 0x1093378b */
  if (C.zf) goto L_1093378b;
  /* 109336a1 mov dword ptr [0x10937e10], 2 */
  w32((uint32_t)(0x10937e10), (0x2u));
  /* 109336ab jmp 0x1093373f */
  goto L_1093373f;
L_109336b0:;
  /* 109336b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109336b3 jne 0x1093373a */
  if (!C.zf) goto L_1093373a;
L_109336b9:;
  /* 109336b9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109336bb jne 0x109336c9 */
  if (!C.zf) goto L_109336c9;
  /* 109336bd call ebp */
  call_ind((uint32_t)(EBP), 0x109336bfu);
  /* 109336bf mov esi, eax */
  ESI = (EAX);
  /* 109336c1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109336c3 je 0x1093378b */
  if (C.zf) goto L_1093378b;
L_109336c9:;
  /* 109336c9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 109336cc mov eax, esi */
  EAX = (ESI);
  /* 109336ce je 0x109336de */
  if (C.zf) goto L_109336de;
L_109336d0:;
  /* 109336d0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109336d1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109336d2 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 109336d5 jne 0x109336d0 */
  if (!C.zf) goto L_109336d0;
  /* 109336d7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109336d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109336d9 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 109336dc jne 0x109336d0 */
  if (!C.zf) goto L_109336d0;
L_109336de:;
  /* 109336de sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109336e0 mov edi, dword ptr [0x10936064] */
  EDI = (r32((uint32_t)(0x10936064)));
  /* 109336e6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 109336e8 push ebx */
  push32((uint32_t)(EBX));
  /* 109336e9 push ebx */
  push32((uint32_t)(EBX));
  /* 109336ea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 109336eb push ebx */
  push32((uint32_t)(EBX));
  /* 109336ec push ebx */
  push32((uint32_t)(EBX));
  /* 109336ed push eax */
  push32((uint32_t)(EAX));
  /* 109336ee push esi */
  push32((uint32_t)(ESI));
  /* 109336ef push ebx */
  push32((uint32_t)(EBX));
  /* 109336f0 push ebx */
  push32((uint32_t)(EBX));
  /* 109336f1 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 109336f5 call edi */
  call_ind((uint32_t)(EDI), 0x109336f7u);
  /* 109336f7 mov ebp, eax */
  EBP = (EAX);
  /* 109336f9 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109336fb je 0x1093372f */
  if (C.zf) goto L_1093372f;
  /* 109336fd push ebp */
  push32((uint32_t)(EBP));
  /* 109336fe call 0x10933bb1 */
  push32(0x10933703u); f_10933bb1();
  /* 10933703 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933705 pop ecx */
  ECX = (pop32());
  /* 10933706 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1093370a je 0x1093372f */
  if (C.zf) goto L_1093372f;
  /* 1093370c push ebx */
  push32((uint32_t)(EBX));
  /* 1093370d push ebx */
  push32((uint32_t)(EBX));
  /* 1093370e push ebp */
  push32((uint32_t)(EBP));
  /* 1093370f push eax */
  push32((uint32_t)(EAX));
  /* 10933710 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10933714 push esi */
  push32((uint32_t)(ESI));
  /* 10933715 push ebx */
  push32((uint32_t)(EBX));
  /* 10933716 push ebx */
  push32((uint32_t)(EBX));
  /* 10933717 call edi */
  call_ind((uint32_t)(EDI), 0x10933719u);
  /* 10933719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093371b jne 0x1093372b */
  if (!C.zf) goto L_1093372b;
  /* 1093371d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10933721 call 0x10933b69 */
  push32(0x10933726u); f_10933b69();
  /* 10933726 pop ecx */
  ECX = (pop32());
  /* 10933727 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1093372b:;
  /* 1093372b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1093372f:;
  /* 1093372f push esi */
  push32((uint32_t)(ESI));
  /* 10933730 call dword ptr [0x10936068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936068))), 0x10933736u);
  /* 10933736 mov eax, ebx */
  EAX = (EBX);
  /* 10933738 jmp 0x1093378d */
  goto L_1093378d;
L_1093373a:;
  /* 1093373a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093373d jne 0x1093378b */
  if (!C.zf) goto L_1093378b;
L_1093373f:;
  /* 1093373f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933741 jne 0x1093374f */
  if (!C.zf) goto L_1093374f;
  /* 10933743 call dword ptr [0x1093606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093606c))), 0x10933749u);
  /* 10933749 mov edi, eax */
  EDI = (EAX);
  /* 1093374b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093374d je 0x1093378b */
  if (C.zf) goto L_1093378b;
L_1093374f:;
  /* 1093374f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933751 mov eax, edi */
  EAX = (EDI);
  /* 10933753 je 0x1093375f */
  if (C.zf) goto L_1093375f;
L_10933755:;
  /* 10933755 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10933756 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933758 jne 0x10933755 */
  if (!C.zf) goto L_10933755;
  /* 1093375a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093375b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093375d jne 0x10933755 */
  if (!C.zf) goto L_10933755;
L_1093375f:;
  /* 1093375f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933761 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10933762 mov ebp, eax */
  EBP = (EAX);
  /* 10933764 push ebp */
  push32((uint32_t)(EBP));
  /* 10933765 call 0x10933bb1 */
  push32(0x1093376au); f_10933bb1();
  /* 1093376a mov esi, eax */
  ESI = (EAX);
  /* 1093376c pop ecx */
  ECX = (pop32());
  /* 1093376d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093376f jne 0x10933775 */
  if (!C.zf) goto L_10933775;
  /* 10933771 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10933773 jmp 0x10933780 */
  goto L_10933780;
L_10933775:;
  /* 10933775 push ebp */
  push32((uint32_t)(EBP));
  /* 10933776 push edi */
  push32((uint32_t)(EDI));
  /* 10933777 push esi */
  push32((uint32_t)(ESI));
  /* 10933778 call 0x109341a0 */
  push32(0x1093377du); f_109341a0();
  /* 1093377d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10933780:;
  /* 10933780 push edi */
  push32((uint32_t)(EDI));
  /* 10933781 call dword ptr [0x10936078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936078))), 0x10933787u);
  /* 10933787 mov eax, esi */
  EAX = (ESI);
  /* 10933789 jmp 0x1093378d */
  goto L_1093378d;
L_1093378b:;
  /* 1093378b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1093378d:;
  /* 1093378d pop edi */
  EDI = (pop32());
  /* 1093378e pop esi */
  ESI = (pop32());
  /* 1093378f pop ebp */
  EBP = (pop32());
  /* 10933790 pop ebx */
  EBX = (pop32());
  /* 10933791 pop ecx */
  ECX = (pop32());
  /* 10933792 pop ecx */
  ECX = (pop32());
  /* 10933793 ret  */
  ESPCHK(0x10933662u, _esp0);
  ESP += 4; return;
}

/* FUN_10003794 @ 0x10933794 (60 bytes, 20 insns) */
void f_10933794(void) {
  FTRACE(0x10933794u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933796 push 0 */
  push32((uint32_t)(0x0u));
  /* 10933798 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093379c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 109337a1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 109337a4 push eax */
  push32((uint32_t)(EAX));
  /* 109337a5 call dword ptr [0x10936060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936060))), 0x109337abu);
  /* 109337ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109337ad mov dword ptr [0x10938108], eax */
  w32((uint32_t)(0x10938108), (EAX));
  /* 109337b2 je 0x109337c9 */
  if (C.zf) goto L_109337c9;
  /* 109337b4 call 0x109344d5 */
  push32(0x109337b9u); f_109344d5();
  /* 109337b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109337bb jne 0x109337cc */
  if (!C.zf) goto L_109337cc;
  /* 109337bd push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 109337c3 call dword ptr [0x10936058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936058))), 0x109337c9u);
L_109337c9:;
  /* 109337c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109337cb ret  */
  ESPCHK(0x10933794u, _esp0);
  ESP += 4; return;
L_109337cc:;
  /* 109337cc push 1 */
  push32((uint32_t)(0x1u));
  /* 109337ce pop eax */
  EAX = (pop32());
  /* 109337cf ret  */
  ESPCHK(0x10933794u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x109337d0 (117 bytes, 38 insns) */
void f_109337d0(void) {
  FTRACE(0x109337d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109337d0 push ebx */
  push32((uint32_t)(EBX));
  /* 109337d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109337d3 cmp dword ptr [0x10937ec8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10937ec8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109337d9 push ebp */
  push32((uint32_t)(EBP));
  /* 109337da mov ebp, dword ptr [0x1093604c] */
  EBP = (r32((uint32_t)(0x1093604c)));
  /* 109337e0 jle 0x10933826 */
  if ((C.zf||C.sf!=C.of)) goto L_10933826;
  /* 109337e2 mov eax, dword ptr [0x10937ecc] */
  EAX = (r32((uint32_t)(0x10937ecc)));
  /* 109337e7 push esi */
  push32((uint32_t)(ESI));
  /* 109337e8 push edi */
  push32((uint32_t)(EDI));
  /* 109337e9 mov edi, dword ptr [0x10936050] */
  EDI = (r32((uint32_t)(0x10936050)));
  /* 109337ef lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_109337f2:;
  /* 109337f2 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 109337f7 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 109337fc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 109337fe call edi */
  call_ind((uint32_t)(EDI), 0x10933800u);
  /* 10933800 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10933805 push 0 */
  push32((uint32_t)(0x0u));
  /* 10933807 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10933809 call edi */
  call_ind((uint32_t)(EDI), 0x1093380bu);
  /* 1093380b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1093380e push 0 */
  push32((uint32_t)(0x0u));
  /* 10933810 push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10933816 call ebp */
  call_ind((uint32_t)(EBP), 0x10933818u);
  /* 10933818 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1093381b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1093381c cmp ebx, dword ptr [0x10937ec8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10937ec8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933822 jl 0x109337f2 */
  if ((C.sf!=C.of)) goto L_109337f2;
  /* 10933824 pop edi */
  EDI = (pop32());
  /* 10933825 pop esi */
  ESI = (pop32());
L_10933826:;
  /* 10933826 push dword ptr [0x10937ecc] */
  push32((uint32_t)(r32((uint32_t)(0x10937ecc))));
  /* 1093382c push 0 */
  push32((uint32_t)(0x0u));
  /* 1093382e push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10933834 call ebp */
  call_ind((uint32_t)(EBP), 0x10933836u);
  /* 10933836 push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 1093383c call dword ptr [0x10936058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936058))), 0x10933842u);
  /* 10933842 pop ebp */
  EBP = (pop32());
  /* 10933843 pop ebx */
  EBX = (pop32());
  /* 10933844 ret  */
  ESPCHK(0x109337d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003845 @ 0x10933845 (57 bytes, 18 insns) */
void f_10933845(void) {
  FTRACE(0x10933845u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933845 mov eax, dword ptr [0x10937cc0] */
  EAX = (r32((uint32_t)(0x10937cc0)));
  /* 1093384a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093384d je 0x1093385c */
  if (C.zf) goto L_1093385c;
  /* 1093384f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10933851 jne 0x1093387d */
  if (!C.zf) goto L_1093387d;
  /* 10933853 cmp dword ptr [0x10937cc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10937cc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093385a jne 0x1093387d */
  if (!C.zf) goto L_1093387d;
L_1093385c:;
  /* 1093385c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10933861 call 0x1093387e */
  push32(0x10933866u); f_1093387e();
  /* 10933866 mov eax, dword ptr [0x10937e14] */
  EAX = (r32((uint32_t)(0x10937e14)));
  /* 1093386b pop ecx */
  ECX = (pop32());
  /* 1093386c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1093386e je 0x10933872 */
  if (C.zf) goto L_10933872;
  /* 10933870 call eax */
  call_ind((uint32_t)(EAX), 0x10933872u);
L_10933872:;
  /* 10933872 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10933877 call 0x1093387e */
  push32(0x1093387cu); f_1093387e();
  /* 1093387c pop ecx */
  ECX = (pop32());
L_1093387d:;
  /* 1093387d ret  */
  ESPCHK(0x10933845u, _esp0);
  ESP += 4; return;
}

/* FUN_1000387e @ 0x1093387e (339 bytes, 100 insns) */
void f_1093387e(void) {
  FTRACE(0x1093387eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1093387e push ebp */
  push32((uint32_t)(EBP));
  /* 1093387f mov ebp, esp */
  EBP = (ESP);
  /* 10933881 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1093388a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1093388c mov eax, 0x109376d0 */
  EAX = (0x109376d0u);
L_10933891:;
  /* 10933891 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933893 je 0x109338a0 */
  if (C.zf) goto L_109338a0;
  /* 10933895 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933898 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10933899 cmp eax, 0x10937760 */
  { uint32_t _a=(EAX),_b=(0x10937760u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093389e jl 0x10933891 */
  if ((C.sf!=C.of)) goto L_10933891;
L_109338a0:;
  /* 109338a0 push esi */
  push32((uint32_t)(ESI));
  /* 109338a1 mov esi, ecx */
  ESI = (ECX);
  /* 109338a3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 109338a6 cmp edx, dword ptr [esi + 0x109376d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x109376d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109338ac jne 0x109339ce */
  if (!C.zf) goto L_109339ce;
  /* 109338b2 mov eax, dword ptr [0x10937cc0] */
  EAX = (r32((uint32_t)(0x10937cc0)));
  /* 109338b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109338ba je 0x109339a8 */
  if (C.zf) goto L_109339a8;
  /* 109338c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109338c2 jne 0x109338d1 */
  if (!C.zf) goto L_109338d1;
  /* 109338c4 cmp dword ptr [0x10937cc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10937cc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109338cb je 0x109339a8 */
  if (C.zf) goto L_109339a8;
L_109338d1:;
  /* 109338d1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109338d7 je 0x109339ce */
  if (C.zf) goto L_109339ce;
  /* 109338dd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 109338e3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 109338e8 push eax */
  push32((uint32_t)(EAX));
  /* 109338e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 109338eb call dword ptr [0x10936070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936070))), 0x109338f1u);
  /* 109338f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109338f3 jne 0x10933908 */
  if (!C.zf) goto L_10933908;
  /* 109338f5 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 109338fb push 0x10936440 */
  push32((uint32_t)(0x10936440u));
  /* 10933900 push eax */
  push32((uint32_t)(EAX));
  /* 10933901 call 0x10933c40 */
  push32(0x10933906u); f_10933c40();
  /* 10933906 pop ecx */
  ECX = (pop32());
  /* 10933907 pop ecx */
  ECX = (pop32());
L_10933908:;
  /* 10933908 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1093390e push edi */
  push32((uint32_t)(EDI));
  /* 1093390f push eax */
  push32((uint32_t)(EAX));
  /* 10933910 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10933916 call 0x10933d30 */
  push32(0x1093391bu); f_10933d30();
  /* 1093391b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093391c pop ecx */
  ECX = (pop32());
  /* 1093391d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933920 jbe 0x1093394b */
  if ((C.cf||C.zf)) goto L_1093394b;
  /* 10933922 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10933928 push eax */
  push32((uint32_t)(EAX));
  /* 10933929 call 0x10933d30 */
  push32(0x1093392eu); f_10933d30();
  /* 1093392e mov edi, eax */
  EDI = (EAX);
  /* 10933930 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10933936 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933939 push 3 */
  push32((uint32_t)(0x3u));
  /* 1093393b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1093393d push 0x1093643c */
  push32((uint32_t)(0x1093643cu));
  /* 10933942 push edi */
  push32((uint32_t)(EDI));
  /* 10933943 call 0x10934db0 */
  push32(0x10933948u); f_10934db0();
  /* 10933948 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1093394b:;
  /* 1093394b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10933951 push 0x10936420 */
  push32((uint32_t)(0x10936420u));
  /* 10933956 push eax */
  push32((uint32_t)(EAX));
  /* 10933957 call 0x10933c40 */
  push32(0x1093395cu); f_10933c40();
  /* 1093395c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10933962 push edi */
  push32((uint32_t)(EDI));
  /* 10933963 push eax */
  push32((uint32_t)(EAX));
  /* 10933964 call 0x10933c50 */
  push32(0x10933969u); f_10933c50();
  /* 10933969 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 1093396f push 0x1093641c */
  push32((uint32_t)(0x1093641cu));
  /* 10933974 push eax */
  push32((uint32_t)(EAX));
  /* 10933975 call 0x10933c50 */
  push32(0x1093397au); f_10933c50();
  /* 1093397a push dword ptr [esi + 0x109376d4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x109376d4))));
  /* 10933980 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10933986 push eax */
  push32((uint32_t)(EAX));
  /* 10933987 call 0x10933c50 */
  push32(0x1093398cu); f_10933c50();
  /* 1093398c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10933991 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10933997 push 0x109363f4 */
  push32((uint32_t)(0x109363f4u));
  /* 1093399c push eax */
  push32((uint32_t)(EAX));
  /* 1093399d call 0x10934d1e */
  push32(0x109339a2u); f_10934d1e();
  /* 109339a2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109339a5 pop edi */
  EDI = (pop32());
  /* 109339a6 jmp 0x109339ce */
  goto L_109339ce;
L_109339a8:;
  /* 109339a8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 109339ab lea esi, [esi + 0x109376d4] */
  ESI = ((uint32_t)(ESI + 0x109376d4));
  /* 109339b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109339b3 push eax */
  push32((uint32_t)(EAX));
  /* 109339b4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 109339b6 call 0x10933d30 */
  push32(0x109339bbu); f_10933d30();
  /* 109339bb pop ecx */
  ECX = (pop32());
  /* 109339bc push eax */
  push32((uint32_t)(EAX));
  /* 109339bd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 109339bf push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 109339c1 call dword ptr [0x10936080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936080))), 0x109339c7u);
  /* 109339c7 push eax */
  push32((uint32_t)(EAX));
  /* 109339c8 call dword ptr [0x10936054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936054))), 0x109339ceu);
L_109339ce:;
  /* 109339ce pop esi */
  ESI = (pop32());
  /* 109339cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109339d0 ret  */
  ESPCHK(0x1093387eu, _esp0);
  ESP += 4; return;
}

/* FUN_100039d1 @ 0x109339d1 (41 bytes, 12 insns) */
void f_109339d1(void) {
  FTRACE(0x109339d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109339d1 push esi */
  push32((uint32_t)(ESI));
  /* 109339d2 mov esi, dword ptr [0x10936044] */
  ESI = (r32((uint32_t)(0x10936044)));
  /* 109339d8 push dword ptr [0x109377a4] */
  push32((uint32_t)(r32((uint32_t)(0x109377a4))));
  /* 109339de call esi */
  call_ind((uint32_t)(ESI), 0x109339e0u);
  /* 109339e0 push dword ptr [0x10937794] */
  push32((uint32_t)(r32((uint32_t)(0x10937794))));
  /* 109339e6 call esi */
  call_ind((uint32_t)(ESI), 0x109339e8u);
  /* 109339e8 push dword ptr [0x10937784] */
  push32((uint32_t)(r32((uint32_t)(0x10937784))));
  /* 109339ee call esi */
  call_ind((uint32_t)(ESI), 0x109339f0u);
  /* 109339f0 push dword ptr [0x10937764] */
  push32((uint32_t)(r32((uint32_t)(0x10937764))));
  /* 109339f6 call esi */
  call_ind((uint32_t)(ESI), 0x109339f8u);
  /* 109339f8 pop esi */
  ESI = (pop32());
  /* 109339f9 ret  */
  ESPCHK(0x109339d1u, _esp0);
  ESP += 4; return;
}

/* FUN_100039fa @ 0x109339fa (108 bytes, 34 insns) */
void f_109339fa(void) {
  FTRACE(0x109339fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109339fa push esi */
  push32((uint32_t)(ESI));
  /* 109339fb push edi */
  push32((uint32_t)(EDI));
  /* 109339fc mov edi, dword ptr [0x10936074] */
  EDI = (r32((uint32_t)(0x10936074)));
  /* 10933a02 mov esi, 0x10937760 */
  ESI = (0x10937760u);
L_10933a07:;
  /* 10933a07 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10933a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10933a0b je 0x10933a38 */
  if (C.zf) goto L_10933a38;
  /* 10933a0d cmp esi, 0x109377a4 */
  { uint32_t _a=(ESI),_b=(0x109377a4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933a13 je 0x10933a38 */
  if (C.zf) goto L_10933a38;
  /* 10933a15 cmp esi, 0x10937794 */
  { uint32_t _a=(ESI),_b=(0x10937794u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933a1b je 0x10933a38 */
  if (C.zf) goto L_10933a38;
  /* 10933a1d cmp esi, 0x10937784 */
  { uint32_t _a=(ESI),_b=(0x10937784u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933a23 je 0x10933a38 */
  if (C.zf) goto L_10933a38;
  /* 10933a25 cmp esi, 0x10937764 */
  { uint32_t _a=(ESI),_b=(0x10937764u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933a2b je 0x10933a38 */
  if (C.zf) goto L_10933a38;
  /* 10933a2d push eax */
  push32((uint32_t)(EAX));
  /* 10933a2e call edi */
  call_ind((uint32_t)(EDI), 0x10933a30u);
  /* 10933a30 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10933a32 call 0x10933b69 */
  push32(0x10933a37u); f_10933b69();
  /* 10933a37 pop ecx */
  ECX = (pop32());
L_10933a38:;
  /* 10933a38 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10933a3b cmp esi, 0x10937820 */
  { uint32_t _a=(ESI),_b=(0x10937820u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933a41 jl 0x10933a07 */
  if ((C.sf!=C.of)) goto L_10933a07;
  /* 10933a43 push dword ptr [0x10937784] */
  push32((uint32_t)(r32((uint32_t)(0x10937784))));
  /* 10933a49 call edi */
  call_ind((uint32_t)(EDI), 0x10933a4bu);
  /* 10933a4b push dword ptr [0x10937794] */
  push32((uint32_t)(r32((uint32_t)(0x10937794))));
  /* 10933a51 call edi */
  call_ind((uint32_t)(EDI), 0x10933a53u);
  /* 10933a53 push dword ptr [0x109377a4] */
  push32((uint32_t)(r32((uint32_t)(0x109377a4))));
  /* 10933a59 call edi */
  call_ind((uint32_t)(EDI), 0x10933a5bu);
  /* 10933a5b push dword ptr [0x10937764] */
  push32((uint32_t)(r32((uint32_t)(0x10937764))));
  /* 10933a61 call edi */
  call_ind((uint32_t)(EDI), 0x10933a63u);
  /* 10933a63 pop edi */
  EDI = (pop32());
  /* 10933a64 pop esi */
  ESI = (pop32());
  /* 10933a65 ret  */
  ESPCHK(0x109339fau, _esp0);
  ESP += 4; return;
}

/* FUN_10003a66 @ 0x10933a66 (97 bytes, 37 insns) */
void f_10933a66(void) {
  FTRACE(0x10933a66u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933a66 push ebp */
  push32((uint32_t)(EBP));
  /* 10933a67 mov ebp, esp */
  EBP = (ESP);
  /* 10933a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10933a6c push esi */
  push32((uint32_t)(ESI));
  /* 10933a6d cmp dword ptr [eax*4 + 0x10937760], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10937760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933a75 lea esi, [eax*4 + 0x10937760] */
  ESI = ((uint32_t)(EAX*4 + 0x10937760));
  /* 10933a7c jne 0x10933abc */
  if (!C.zf) goto L_10933abc;
  /* 10933a7e push edi */
  push32((uint32_t)(EDI));
  /* 10933a7f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10933a81 call 0x10933bb1 */
  push32(0x10933a86u); f_10933bb1();
  /* 10933a86 mov edi, eax */
  EDI = (EAX);
  /* 10933a88 pop ecx */
  ECX = (pop32());
  /* 10933a89 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10933a8b jne 0x10933a95 */
  if (!C.zf) goto L_10933a95;
  /* 10933a8d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10933a8f call 0x10932ed6 */
  push32(0x10933a94u); f_10932ed6();
  /* 10933a94 pop ecx */
  ECX = (pop32());
L_10933a95:;
  /* 10933a95 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10933a97 call 0x10933a66 */
  push32(0x10933a9cu); f_10933a66();
  /* 10933a9c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933a9f pop ecx */
  ECX = (pop32());
  /* 10933aa0 push edi */
  push32((uint32_t)(EDI));
  /* 10933aa1 jne 0x10933aad */
  if (!C.zf) goto L_10933aad;
  /* 10933aa3 call dword ptr [0x10936044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936044))), 0x10933aa9u);
  /* 10933aa9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10933aab jmp 0x10933ab3 */
  goto L_10933ab3;
L_10933aad:;
  /* 10933aad call 0x10933b69 */
  push32(0x10933ab2u); f_10933b69();
  /* 10933ab2 pop ecx */
  ECX = (pop32());
L_10933ab3:;
  /* 10933ab3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10933ab5 call 0x10933ac7 */
  push32(0x10933abau); f_10933ac7();
  /* 10933aba pop ecx */
  ECX = (pop32());
  /* 10933abb pop edi */
  EDI = (pop32());
L_10933abc:;
  /* 10933abc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10933abe call dword ptr [0x10936040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936040))), 0x10933ac4u);
  /* 10933ac4 pop esi */
  ESI = (pop32());
  /* 10933ac5 pop ebp */
  EBP = (pop32());
  /* 10933ac6 ret  */
  ESPCHK(0x10933a66u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac7 @ 0x10933ac7 (21 bytes, 7 insns) */
void f_10933ac7(void) {
  FTRACE(0x10933ac7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933ac7 push ebp */
  push32((uint32_t)(EBP));
  /* 10933ac8 mov ebp, esp */
  EBP = (ESP);
  /* 10933aca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10933acd push dword ptr [eax*4 + 0x10937760] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10937760))));
  /* 10933ad4 call dword ptr [0x10936048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936048))), 0x10933adau);
  /* 10933ada pop ebp */
  EBP = (pop32());
  /* 10933adb ret  */
  ESPCHK(0x10933ac7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003adc @ 0x10933adc (141 bytes, 56 insns) */
void f_10933adc(void) {
  FTRACE(0x10933adcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933adc push ebx */
  push32((uint32_t)(EBX));
  /* 10933add push esi */
  push32((uint32_t)(ESI));
  /* 10933ade mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10933ae2 push edi */
  push32((uint32_t)(EDI));
  /* 10933ae3 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10933ae8 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933aeb mov ebx, esi */
  EBX = (ESI);
  /* 10933aed ja 0x10933afc */
  if ((!C.cf&&!C.zf)) goto L_10933afc;
  /* 10933aef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933af1 jne 0x10933af6 */
  if (!C.zf) goto L_10933af6;
  /* 10933af3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10933af5 pop esi */
  ESI = (pop32());
L_10933af6:;
  /* 10933af6 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10933af9 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10933afc:;
  /* 10933afc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10933afe cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933b01 ja 0x10933b3d */
  if ((!C.cf&&!C.zf)) goto L_10933b3d;
  /* 10933b03 cmp ebx, dword ptr [0x109379b0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x109379b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933b09 ja 0x10933b28 */
  if ((!C.cf&&!C.zf)) goto L_10933b28;
  /* 10933b0b push 9 */
  push32((uint32_t)(0x9u));
  /* 10933b0d call 0x10933a66 */
  push32(0x10933b12u); f_10933a66();
  /* 10933b12 push ebx */
  push32((uint32_t)(EBX));
  /* 10933b13 call 0x10934869 */
  push32(0x10933b18u); f_10934869();
  /* 10933b18 push 9 */
  push32((uint32_t)(0x9u));
  /* 10933b1a mov edi, eax */
  EDI = (EAX);
  /* 10933b1c call 0x10933ac7 */
  push32(0x10933b21u); f_10933ac7();
  /* 10933b21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10933b24 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10933b26 jne 0x10933b53 */
  if (!C.zf) goto L_10933b53;
L_10933b28:;
  /* 10933b28 push esi */
  push32((uint32_t)(ESI));
  /* 10933b29 push 8 */
  push32((uint32_t)(0x8u));
  /* 10933b2b push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10933b31 call dword ptr [0x1093603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093603c))), 0x10933b37u);
  /* 10933b37 mov edi, eax */
  EDI = (EAX);
  /* 10933b39 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10933b3b jne 0x10933b5f */
  if (!C.zf) goto L_10933b5f;
L_10933b3d:;
  /* 10933b3d cmp dword ptr [0x10937e8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10937e8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933b44 je 0x10933b5f */
  if (C.zf) goto L_10933b5f;
  /* 10933b46 push esi */
  push32((uint32_t)(ESI));
  /* 10933b47 call 0x10934f08 */
  push32(0x10933b4cu); f_10934f08();
  /* 10933b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10933b4e pop ecx */
  ECX = (pop32());
  /* 10933b4f je 0x10933b65 */
  if (C.zf) goto L_10933b65;
  /* 10933b51 jmp 0x10933afc */
  goto L_10933afc;
L_10933b53:;
  /* 10933b53 push ebx */
  push32((uint32_t)(EBX));
  /* 10933b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10933b56 push edi */
  push32((uint32_t)(EDI));
  /* 10933b57 call 0x10934eb0 */
  push32(0x10933b5cu); f_10934eb0();
  /* 10933b5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10933b5f:;
  /* 10933b5f mov eax, edi */
  EAX = (EDI);
L_10933b61:;
  /* 10933b61 pop edi */
  EDI = (pop32());
  /* 10933b62 pop esi */
  ESI = (pop32());
  /* 10933b63 pop ebx */
  EBX = (pop32());
  /* 10933b64 ret  */
  ESPCHK(0x10933adcu, _esp0);
  ESP += 4; return;
L_10933b65:;
  /* 10933b65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933b67 jmp 0x10933b61 */
  goto L_10933b61;
}

/* FUN_10003b69 @ 0x10933b69 (72 bytes, 29 insns) */
void f_10933b69(void) {
  FTRACE(0x10933b69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933b69 push esi */
  push32((uint32_t)(ESI));
  /* 10933b6a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10933b6e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933b70 je 0x10933baf */
  if (C.zf) goto L_10933baf;
  /* 10933b72 push 9 */
  push32((uint32_t)(0x9u));
  /* 10933b74 call 0x10933a66 */
  push32(0x10933b79u); f_10933a66();
  /* 10933b79 push esi */
  push32((uint32_t)(ESI));
  /* 10933b7a call 0x10934513 */
  push32(0x10933b7fu); f_10934513();
  /* 10933b7f pop ecx */
  ECX = (pop32());
  /* 10933b80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10933b82 pop ecx */
  ECX = (pop32());
  /* 10933b83 je 0x10933b98 */
  if (C.zf) goto L_10933b98;
  /* 10933b85 push esi */
  push32((uint32_t)(ESI));
  /* 10933b86 push eax */
  push32((uint32_t)(EAX));
  /* 10933b87 call 0x1093453e */
  push32(0x10933b8cu); f_1093453e();
  /* 10933b8c push 9 */
  push32((uint32_t)(0x9u));
  /* 10933b8e call 0x10933ac7 */
  push32(0x10933b93u); f_10933ac7();
  /* 10933b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10933b96 pop esi */
  ESI = (pop32());
  /* 10933b97 ret  */
  ESPCHK(0x10933b69u, _esp0);
  ESP += 4; return;
L_10933b98:;
  /* 10933b98 push 9 */
  push32((uint32_t)(0x9u));
  /* 10933b9a call 0x10933ac7 */
  push32(0x10933b9fu); f_10933ac7();
  /* 10933b9f pop ecx */
  ECX = (pop32());
  /* 10933ba0 push esi */
  push32((uint32_t)(ESI));
  /* 10933ba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10933ba3 push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10933ba9 call dword ptr [0x1093604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093604c))), 0x10933bafu);
L_10933baf:;
  /* 10933baf pop esi */
  ESI = (pop32());
  /* 10933bb0 ret  */
  ESPCHK(0x10933b69u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10933bb1 (18 bytes, 6 insns) */
void f_10933bb1(void) {
  FTRACE(0x10933bb1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933bb1 push dword ptr [0x10937e8c] */
  push32((uint32_t)(r32((uint32_t)(0x10937e8c))));
  /* 10933bb7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10933bbb call 0x10933bc3 */
  push32(0x10933bc0u); f_10933bc3();
  /* 10933bc0 pop ecx */
  ECX = (pop32());
  /* 10933bc1 pop ecx */
  ECX = (pop32());
  /* 10933bc2 ret  */
  ESPCHK(0x10933bb1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10933bc3 (44 bytes, 16 insns) */
void f_10933bc3(void) {
  FTRACE(0x10933bc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933bc3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933bc8 ja 0x10933bec */
  if ((!C.cf&&!C.zf)) goto L_10933bec;
L_10933bca:;
  /* 10933bca push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10933bce call 0x10933bef */
  push32(0x10933bd3u); f_10933bef();
  /* 10933bd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10933bd5 pop ecx */
  ECX = (pop32());
  /* 10933bd6 jne 0x10933bee */
  if (!C.zf) goto L_10933bee;
  /* 10933bd8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933bdc je 0x10933bee */
  if (C.zf) goto L_10933bee;
  /* 10933bde push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10933be2 call 0x10934f08 */
  push32(0x10933be7u); f_10934f08();
  /* 10933be7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10933be9 pop ecx */
  ECX = (pop32());
  /* 10933bea jne 0x10933bca */
  if (!C.zf) goto L_10933bca;
L_10933bec:;
  /* 10933bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10933bee:;
  /* 10933bee ret  */
  ESPCHK(0x10933bc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bef @ 0x10933bef (78 bytes, 30 insns) */
void f_10933bef(void) {
  FTRACE(0x10933befu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933bef push esi */
  push32((uint32_t)(ESI));
  /* 10933bf0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10933bf4 cmp esi, dword ptr [0x109379b0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x109379b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933bfa push edi */
  push32((uint32_t)(EDI));
  /* 10933bfb ja 0x10933c1e */
  if ((!C.cf&&!C.zf)) goto L_10933c1e;
  /* 10933bfd push 9 */
  push32((uint32_t)(0x9u));
  /* 10933bff call 0x10933a66 */
  push32(0x10933c04u); f_10933a66();
  /* 10933c04 push esi */
  push32((uint32_t)(ESI));
  /* 10933c05 call 0x10934869 */
  push32(0x10933c0au); f_10934869();
  /* 10933c0a push 9 */
  push32((uint32_t)(0x9u));
  /* 10933c0c mov edi, eax */
  EDI = (EAX);
  /* 10933c0e call 0x10933ac7 */
  push32(0x10933c13u); f_10933ac7();
  /* 10933c13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10933c16 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10933c18 je 0x10933c1e */
  if (C.zf) goto L_10933c1e;
  /* 10933c1a mov eax, edi */
  EAX = (EDI);
  /* 10933c1c jmp 0x10933c3a */
  goto L_10933c3a;
L_10933c1e:;
  /* 10933c1e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10933c20 jne 0x10933c25 */
  if (!C.zf) goto L_10933c25;
  /* 10933c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 10933c24 pop esi */
  ESI = (pop32());
L_10933c25:;
  /* 10933c25 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10933c28 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10933c2b push esi */
  push32((uint32_t)(ESI));
  /* 10933c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10933c2e push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10933c34 call dword ptr [0x1093603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093603c))), 0x10933c3au);
L_10933c3a:;
  /* 10933c3a pop edi */
  EDI = (pop32());
  /* 10933c3b pop esi */
  ESI = (pop32());
  /* 10933c3c ret  */
  ESPCHK(0x10933befu, _esp0);
  ESP += 4; return;
}

/* FUN_10003c40 @ 0x10933c40 (7 bytes, 3 insns) */
void f_10933c40(void) {
  FTRACE(0x10933c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933c40 push edi */
  push32((uint32_t)(EDI));
  /* 10933c41 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10933c45 jmp 0x10933cb1 */
  jmp_ind(0x10933cb1u); return;
}

/* FUN_10003c50 @ 0x10933c50 (224 bytes, 84 insns) */
void f_10933c50(void) {
  FTRACE(0x10933c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933c50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10933c54 push edi */
  push32((uint32_t)(EDI));
  /* 10933c55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10933c5b je 0x10933c6c */
  if (C.zf) goto L_10933c6c;
L_10933c5d:;
  /* 10933c5d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10933c5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10933c60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10933c62 je 0x10933c9f */
  if (C.zf) goto L_10933c9f;
  /* 10933c64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10933c6a jne 0x10933c5d */
  if (!C.zf) goto L_10933c5d;
L_10933c6c:;
  /* 10933c6c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10933c6e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10933c73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933c75 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10933c78 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10933c7a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933c7d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10933c82 je 0x10933c6c */
  if (C.zf) goto L_10933c6c;
  /* 10933c84 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10933c87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10933c89 je 0x10933cae */
  if (C.zf) goto L_10933cae;
  /* 10933c8b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10933c8d je 0x10933ca9 */
  if (C.zf) goto L_10933ca9;
  /* 10933c8f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10933c94 je 0x10933ca4 */
  if (C.zf) goto L_10933ca4;
  /* 10933c96 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10933c9b je 0x10933c9f */
  if (C.zf) goto L_10933c9f;
  /* 10933c9d jmp 0x10933c6c */
  goto L_10933c6c;
L_10933c9f:;
  /* 10933c9f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10933ca2 jmp 0x10933cb1 */
  goto L_10933cb1;
L_10933ca4:;
  /* 10933ca4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10933ca7 jmp 0x10933cb1 */
  goto L_10933cb1;
L_10933ca9:;
  /* 10933ca9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10933cac jmp 0x10933cb1 */
  goto L_10933cb1;
L_10933cae:;
  /* 10933cae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10933cb1:;
  /* 10933cb1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10933cb5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10933cbb je 0x10933cd6 */
  if (C.zf) goto L_10933cd6;
L_10933cbd:;
  /* 10933cbd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10933cbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10933cc0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10933cc2 je 0x10933d28 */
  if (C.zf) goto L_10933d28;
  /* 10933cc4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10933cc6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10933cc7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10933ccd jne 0x10933cbd */
  if (!C.zf) goto L_10933cbd;
  /* 10933ccf jmp 0x10933cd6 */
  goto L_10933cd6;
L_10933cd1:;
  /* 10933cd1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10933cd3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10933cd6:;
  /* 10933cd6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10933cdb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10933cdd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933cdf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10933ce2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10933ce4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10933ce6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933ce9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10933cee je 0x10933cd1 */
  if (C.zf) goto L_10933cd1;
  /* 10933cf0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10933cf2 je 0x10933d28 */
  if (C.zf) goto L_10933d28;
  /* 10933cf4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10933cf6 je 0x10933d1f */
  if (C.zf) goto L_10933d1f;
  /* 10933cf8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10933cfe je 0x10933d12 */
  if (C.zf) goto L_10933d12;
  /* 10933d00 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10933d06 je 0x10933d0a */
  if (C.zf) goto L_10933d0a;
  /* 10933d08 jmp 0x10933cd1 */
  goto L_10933cd1;
L_10933d0a:;
  /* 10933d0a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10933d0c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10933d10 pop edi */
  EDI = (pop32());
  /* 10933d11 ret  */
  ESPCHK(0x10933c50u, _esp0);
  ESP += 4; return;
L_10933d12:;
  /* 10933d12 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10933d15 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10933d19 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10933d1d pop edi */
  EDI = (pop32());
  /* 10933d1e ret  */
  ESPCHK(0x10933c50u, _esp0);
  ESP += 4; return;
L_10933d1f:;
  /* 10933d1f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10933d22 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10933d26 pop edi */
  EDI = (pop32());
  /* 10933d27 ret  */
  ESPCHK(0x10933c50u, _esp0);
  ESP += 4; return;
L_10933d28:;
  /* 10933d28 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10933d2a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10933d2e pop edi */
  EDI = (pop32());
  /* 10933d2f ret  */
  ESPCHK(0x10933c50u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10933d30 (123 bytes, 44 insns) */
void f_10933d30(void) {
  FTRACE(0x10933d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933d30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10933d34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10933d3a je 0x10933d50 */
  if (C.zf) goto L_10933d50;
L_10933d3c:;
  /* 10933d3c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10933d3e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10933d3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10933d41 je 0x10933d83 */
  if (C.zf) goto L_10933d83;
  /* 10933d43 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10933d49 jne 0x10933d3c */
  if (!C.zf) goto L_10933d3c;
  /* 10933d4b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10933d50:;
  /* 10933d50 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10933d52 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10933d57 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933d59 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10933d5c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10933d5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933d61 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10933d66 je 0x10933d50 */
  if (C.zf) goto L_10933d50;
  /* 10933d68 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10933d6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10933d6d je 0x10933da1 */
  if (C.zf) goto L_10933da1;
  /* 10933d6f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10933d71 je 0x10933d97 */
  if (C.zf) goto L_10933d97;
  /* 10933d73 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10933d78 je 0x10933d8d */
  if (C.zf) goto L_10933d8d;
  /* 10933d7a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10933d7f je 0x10933d83 */
  if (C.zf) goto L_10933d83;
  /* 10933d81 jmp 0x10933d50 */
  goto L_10933d50;
L_10933d83:;
  /* 10933d83 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10933d86 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10933d8a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933d8c ret  */
  ESPCHK(0x10933d30u, _esp0);
  ESP += 4; return;
L_10933d8d:;
  /* 10933d8d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10933d90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10933d94 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933d96 ret  */
  ESPCHK(0x10933d30u, _esp0);
  ESP += 4; return;
L_10933d97:;
  /* 10933d97 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10933d9a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10933d9e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933da0 ret  */
  ESPCHK(0x10933d30u, _esp0);
  ESP += 4; return;
L_10933da1:;
  /* 10933da1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10933da4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10933da8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933daa ret  */
  ESPCHK(0x10933d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dab @ 0x10933dab (429 bytes, 143 insns) */
void f_10933dab(void) {
  FTRACE(0x10933dabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933dab push ebp */
  push32((uint32_t)(EBP));
  /* 10933dac mov ebp, esp */
  EBP = (ESP);
  /* 10933dae sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933db1 push ebx */
  push32((uint32_t)(EBX));
  /* 10933db2 push esi */
  push32((uint32_t)(ESI));
  /* 10933db3 push edi */
  push32((uint32_t)(EDI));
  /* 10933db4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10933db6 call 0x10933a66 */
  push32(0x10933dbbu); f_10933a66();
  /* 10933dbb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10933dbe call 0x10933f58 */
  push32(0x10933dc3u); f_10933f58();
  /* 10933dc3 mov ebx, eax */
  EBX = (EAX);
  /* 10933dc5 pop ecx */
  ECX = (pop32());
  /* 10933dc6 cmp ebx, dword ptr [0x10937ed0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10937ed0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933dcc pop ecx */
  ECX = (pop32());
  /* 10933dcd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10933dd0 jne 0x10933dd9 */
  if (!C.zf) goto L_10933dd9;
L_10933dd2:;
  /* 10933dd2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10933dd4 jmp 0x10933f49 */
  goto L_10933f49;
L_10933dd9:;
  /* 10933dd9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10933ddb je 0x10933f37 */
  if (C.zf) goto L_10933f37;
  /* 10933de1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10933de3 mov eax, 0x109378b8 */
  EAX = (0x109378b8u);
L_10933de8:;
  /* 10933de8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933dea je 0x10933e60 */
  if (C.zf) goto L_10933e60;
  /* 10933dec add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933def inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10933df0 cmp eax, 0x109379a8 */
  { uint32_t _a=(EAX),_b=(0x109379a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933df5 jl 0x10933de8 */
  if ((C.sf!=C.of)) goto L_10933de8;
  /* 10933df7 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10933dfa push eax */
  push32((uint32_t)(EAX));
  /* 10933dfb push ebx */
  push32((uint32_t)(EBX));
  /* 10933dfc call dword ptr [0x10936034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936034))), 0x10933e02u);
  /* 10933e02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10933e04 pop esi */
  ESI = (pop32());
  /* 10933e05 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933e07 jne 0x10933f2e */
  if (!C.zf) goto L_10933f2e;
  /* 10933e0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10933e0f and dword ptr [0x10938104], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10938104)))&(0x0u); w32((uint32_t)(0x10938104), (_r)); fl_logic(_r,32); }
  /* 10933e16 pop ecx */
  ECX = (pop32());
  /* 10933e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933e19 mov edi, 0x10938000 */
  EDI = (0x10938000u);
  /* 10933e1e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933e21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10933e23 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10933e24 mov dword ptr [0x10937ed0], ebx */
  w32((uint32_t)(0x10937ed0), (EBX));
  /* 10933e2a jbe 0x10933f1b */
  if ((C.cf||C.zf)) goto L_10933f1b;
  /* 10933e30 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933e34 je 0x10933ef6 */
  if (C.zf) goto L_10933ef6;
  /* 10933e3a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10933e3d:;
  /* 10933e3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10933e3f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10933e41 je 0x10933ef6 */
  if (C.zf) goto L_10933ef6;
  /* 10933e47 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10933e4b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10933e4e:;
  /* 10933e4e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933e50 ja 0x10933eea */
  if ((!C.cf&&!C.zf)) goto L_10933eea;
  /* 10933e56 or byte ptr [eax + 0x10938001], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10938001)))|(0x4u); w8((uint32_t)(EAX + 0x10938001), (_r)); fl_logic(_r,8); }
  /* 10933e5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10933e5e jmp 0x10933e4e */
  goto L_10933e4e;
L_10933e60:;
  /* 10933e60 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10933e64 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10933e66 pop ecx */
  ECX = (pop32());
  /* 10933e67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933e69 mov edi, 0x10938000 */
  EDI = (0x10938000u);
  /* 10933e6e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10933e71 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10933e73 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10933e76 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10933e77 lea ebx, [esi + 0x109378c8] */
  EBX = ((uint32_t)(ESI + 0x109378c8));
L_10933e7d:;
  /* 10933e7d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933e80 mov ecx, ebx */
  ECX = (EBX);
  /* 10933e82 je 0x10933eb0 */
  if (C.zf) goto L_10933eb0;
L_10933e84:;
  /* 10933e84 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10933e87 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10933e89 je 0x10933eb0 */
  if (C.zf) goto L_10933eb0;
  /* 10933e8b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10933e8e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10933e91 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933e93 ja 0x10933ea9 */
  if ((!C.cf&&!C.zf)) goto L_10933ea9;
  /* 10933e95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10933e98 mov dl, byte ptr [edx + 0x109378b0] */
  DL = (r8((uint32_t)(EDX + 0x109378b0)));
L_10933e9e:;
  /* 10933e9e or byte ptr [eax + 0x10938001], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10938001)))|(DL); w8((uint32_t)(EAX + 0x10938001), (_r)); fl_logic(_r,8); }
  /* 10933ea4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10933ea5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933ea7 jbe 0x10933e9e */
  if ((C.cf||C.zf)) goto L_10933e9e;
L_10933ea9:;
  /* 10933ea9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10933eaa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10933eab cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933eae jne 0x10933e84 */
  if (!C.zf) goto L_10933e84;
L_10933eb0:;
  /* 10933eb0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10933eb3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10933eb6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933eba jb 0x10933e7d */
  if (C.cf) goto L_10933e7d;
  /* 10933ebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10933ebf mov dword ptr [0x10937eec], 1 */
  w32((uint32_t)(0x10937eec), (0x1u));
  /* 10933ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10933eca mov dword ptr [0x10937ed0], eax */
  w32((uint32_t)(0x10937ed0), (EAX));
  /* 10933ecf call 0x10933fa2 */
  push32(0x10933ed4u); f_10933fa2();
  /* 10933ed4 lea esi, [esi + 0x109378bc] */
  ESI = ((uint32_t)(ESI + 0x109378bc));
  /* 10933eda mov edi, 0x10937ee0 */
  EDI = (0x10937ee0u);
  /* 10933edf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10933ee0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10933ee1 pop ecx */
  ECX = (pop32());
  /* 10933ee2 mov dword ptr [0x10938104], eax */
  w32((uint32_t)(0x10938104), (EAX));
  /* 10933ee7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10933ee8 jmp 0x10933f3c */
  goto L_10933f3c;
L_10933eea:;
  /* 10933eea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10933eeb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10933eec cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10933ef0 jne 0x10933e3d */
  if (!C.zf) goto L_10933e3d;
L_10933ef6:;
  /* 10933ef6 mov eax, esi */
  EAX = (ESI);
L_10933ef8:;
  /* 10933ef8 or byte ptr [eax + 0x10938001], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10938001)))|(0x8u); w8((uint32_t)(EAX + 0x10938001), (_r)); fl_logic(_r,8); }
  /* 10933eff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10933f00 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933f05 jb 0x10933ef8 */
  if (C.cf) goto L_10933ef8;
  /* 10933f07 push ebx */
  push32((uint32_t)(EBX));
  /* 10933f08 call 0x10933fa2 */
  push32(0x10933f0du); f_10933fa2();
  /* 10933f0d pop ecx */
  ECX = (pop32());
  /* 10933f0e mov dword ptr [0x10938104], eax */
  w32((uint32_t)(0x10938104), (EAX));
  /* 10933f13 mov dword ptr [0x10937eec], esi */
  w32((uint32_t)(0x10937eec), (ESI));
  /* 10933f19 jmp 0x10933f22 */
  goto L_10933f22;
L_10933f1b:;
  /* 10933f1b and dword ptr [0x10937eec], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10937eec)))&(0x0u); w32((uint32_t)(0x10937eec), (_r)); fl_logic(_r,32); }
L_10933f22:;
  /* 10933f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933f24 mov edi, 0x10937ee0 */
  EDI = (0x10937ee0u);
  /* 10933f29 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10933f2a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10933f2b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10933f2c jmp 0x10933f3c */
  goto L_10933f3c;
L_10933f2e:;
  /* 10933f2e cmp dword ptr [0x10937e78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10937e78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933f35 je 0x10933f46 */
  if (C.zf) goto L_10933f46;
L_10933f37:;
  /* 10933f37 call 0x10933fd5 */
  push32(0x10933f3cu); f_10933fd5();
L_10933f3c:;
  /* 10933f3c call 0x10933ffe */
  push32(0x10933f41u); f_10933ffe();
  /* 10933f41 jmp 0x10933dd2 */
  goto L_10933dd2;
L_10933f46:;
  /* 10933f46 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10933f49:;
  /* 10933f49 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10933f4b call 0x10933ac7 */
  push32(0x10933f50u); f_10933ac7();
  /* 10933f50 pop ecx */
  ECX = (pop32());
  /* 10933f51 mov eax, esi */
  EAX = (ESI);
  /* 10933f53 pop edi */
  EDI = (pop32());
  /* 10933f54 pop esi */
  ESI = (pop32());
  /* 10933f55 pop ebx */
  EBX = (pop32());
  /* 10933f56 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10933f57 ret  */
  ESPCHK(0x10933dabu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f58 @ 0x10933f58 (74 bytes, 15 insns) */
void f_10933f58(void) {
  FTRACE(0x10933f58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933f58 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10933f5c and dword ptr [0x10937e78], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10937e78)))&(0x0u); w32((uint32_t)(0x10937e78), (_r)); fl_logic(_r,32); }
  /* 10933f63 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933f66 jne 0x10933f78 */
  if (!C.zf) goto L_10933f78;
  /* 10933f68 mov dword ptr [0x10937e78], 1 */
  w32((uint32_t)(0x10937e78), (0x1u));
  /* 10933f72 jmp dword ptr [0x10936038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10936038)))); return;
L_10933f78:;
  /* 10933f78 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933f7b jne 0x10933f8d */
  if (!C.zf) goto L_10933f8d;
  /* 10933f7d mov dword ptr [0x10937e78], 1 */
  w32((uint32_t)(0x10937e78), (0x1u));
  /* 10933f87 jmp dword ptr [0x10936030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10936030)))); return;
L_10933f8d:;
  /* 10933f8d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10933f90 jne 0x10933fa1 */
  if (!C.zf) goto L_10933fa1;
  /* 10933f92 mov eax, dword ptr [0x10937ea8] */
  EAX = (r32((uint32_t)(0x10937ea8)));
  /* 10933f97 mov dword ptr [0x10937e78], 1 */
  w32((uint32_t)(0x10937e78), (0x1u));
L_10933fa1:;
  /* 10933fa1 ret  */
  ESPCHK(0x10933f58u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa2 @ 0x10933fa2 (51 bytes, 19 insns) */
void f_10933fa2(void) {
  FTRACE(0x10933fa2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933fa2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10933fa6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933fab je 0x10933fcf */
  if (C.zf) goto L_10933fcf;
  /* 10933fad sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933fb0 je 0x10933fc9 */
  if (C.zf) goto L_10933fc9;
  /* 10933fb2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10933fb5 je 0x10933fc3 */
  if (C.zf) goto L_10933fc3;
  /* 10933fb7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10933fb8 je 0x10933fbd */
  if (C.zf) goto L_10933fbd;
  /* 10933fba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933fbc ret  */
  ESPCHK(0x10933fa2u, _esp0);
  ESP += 4; return;
L_10933fbd:;
  /* 10933fbd mov eax, 0x404 */
  EAX = (0x404u);
  /* 10933fc2 ret  */
  ESPCHK(0x10933fa2u, _esp0);
  ESP += 4; return;
L_10933fc3:;
  /* 10933fc3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10933fc8 ret  */
  ESPCHK(0x10933fa2u, _esp0);
  ESP += 4; return;
L_10933fc9:;
  /* 10933fc9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10933fce ret  */
  ESPCHK(0x10933fa2u, _esp0);
  ESP += 4; return;
L_10933fcf:;
  /* 10933fcf mov eax, 0x411 */
  EAX = (0x411u);
  /* 10933fd4 ret  */
  ESPCHK(0x10933fa2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd5 @ 0x10933fd5 (41 bytes, 17 insns) */
void f_10933fd5(void) {
  FTRACE(0x10933fd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933fd5 push edi */
  push32((uint32_t)(EDI));
  /* 10933fd6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10933fd8 pop ecx */
  ECX = (pop32());
  /* 10933fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933fdb mov edi, 0x10938000 */
  EDI = (0x10938000u);
  /* 10933fe0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10933fe2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10933fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10933fe5 mov edi, 0x10937ee0 */
  EDI = (0x10937ee0u);
  /* 10933fea mov dword ptr [0x10937ed0], eax */
  w32((uint32_t)(0x10937ed0), (EAX));
  /* 10933fef mov dword ptr [0x10937eec], eax */
  w32((uint32_t)(0x10937eec), (EAX));
  /* 10933ff4 mov dword ptr [0x10938104], eax */
  w32((uint32_t)(0x10938104), (EAX));
  /* 10933ff9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10933ffa stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10933ffb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10933ffc pop edi */
  EDI = (pop32());
  /* 10933ffd ret  */
  ESPCHK(0x10933fd5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ffe @ 0x10933ffe (389 bytes, 124 insns) */
void f_10933ffe(void) {
  FTRACE(0x10933ffeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10933ffe push ebp */
  push32((uint32_t)(EBP));
  /* 10933fff mov ebp, esp */
  EBP = (ESP);
  /* 10934001 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10934007 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1093400a push esi */
  push32((uint32_t)(ESI));
  /* 1093400b push eax */
  push32((uint32_t)(EAX));
  /* 1093400c push dword ptr [0x10937ed0] */
  push32((uint32_t)(r32((uint32_t)(0x10937ed0))));
  /* 10934012 call dword ptr [0x10936034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936034))), 0x10934018u);
  /* 10934018 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093401b jne 0x10934137 */
  if (!C.zf) goto L_10934137;
  /* 10934021 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10934023 mov esi, 0x100 */
  ESI = (0x100u);
L_10934028:;
  /* 10934028 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1093402f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10934030 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934032 jb 0x10934028 */
  if (C.cf) goto L_10934028;
  /* 10934034 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10934037 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1093403e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10934040 je 0x10934079 */
  if (C.zf) goto L_10934079;
  /* 10934042 push ebx */
  push32((uint32_t)(EBX));
  /* 10934043 push edi */
  push32((uint32_t)(EDI));
  /* 10934044 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10934047:;
  /* 10934047 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1093404a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1093404d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093404f ja 0x1093406e */
  if ((!C.cf&&!C.zf)) goto L_1093406e;
  /* 10934051 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10934053 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1093405a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1093405b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10934060 mov ebx, ecx */
  EBX = (ECX);
  /* 10934062 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10934065 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10934067 mov ecx, ebx */
  ECX = (EBX);
  /* 10934069 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1093406c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1093406e:;
  /* 1093406e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1093406f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10934070 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10934073 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10934075 jne 0x10934047 */
  if (!C.zf) goto L_10934047;
  /* 10934077 pop edi */
  EDI = (pop32());
  /* 10934078 pop ebx */
  EBX = (pop32());
L_10934079:;
  /* 10934079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1093407b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10934081 push dword ptr [0x10938104] */
  push32((uint32_t)(r32((uint32_t)(0x10938104))));
  /* 10934087 push dword ptr [0x10937ed0] */
  push32((uint32_t)(r32((uint32_t)(0x10937ed0))));
  /* 1093408d push eax */
  push32((uint32_t)(EAX));
  /* 1093408e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10934094 push esi */
  push32((uint32_t)(ESI));
  /* 10934095 push eax */
  push32((uint32_t)(EAX));
  /* 10934096 push 1 */
  push32((uint32_t)(0x1u));
  /* 10934098 call 0x10935172 */
  push32(0x1093409du); f_10935172();
  /* 1093409d push 0 */
  push32((uint32_t)(0x0u));
  /* 1093409f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 109340a5 push dword ptr [0x10937ed0] */
  push32((uint32_t)(r32((uint32_t)(0x10937ed0))));
  /* 109340ab push esi */
  push32((uint32_t)(ESI));
  /* 109340ac push eax */
  push32((uint32_t)(EAX));
  /* 109340ad lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 109340b3 push esi */
  push32((uint32_t)(ESI));
  /* 109340b4 push eax */
  push32((uint32_t)(EAX));
  /* 109340b5 push esi */
  push32((uint32_t)(ESI));
  /* 109340b6 push dword ptr [0x10938104] */
  push32((uint32_t)(r32((uint32_t)(0x10938104))));
  /* 109340bc call 0x10934f23 */
  push32(0x109340c1u); f_10934f23();
  /* 109340c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 109340c3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 109340c9 push dword ptr [0x10937ed0] */
  push32((uint32_t)(r32((uint32_t)(0x10937ed0))));
  /* 109340cf push esi */
  push32((uint32_t)(ESI));
  /* 109340d0 push eax */
  push32((uint32_t)(EAX));
  /* 109340d1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 109340d7 push esi */
  push32((uint32_t)(ESI));
  /* 109340d8 push eax */
  push32((uint32_t)(EAX));
  /* 109340d9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 109340de push dword ptr [0x10938104] */
  push32((uint32_t)(r32((uint32_t)(0x10938104))));
  /* 109340e4 call 0x10934f23 */
  push32(0x109340e9u); f_10934f23();
  /* 109340e9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109340ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 109340ee lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_109340f4:;
  /* 109340f4 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 109340f7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 109340fa je 0x10934112 */
  if (C.zf) goto L_10934112;
  /* 109340fc or byte ptr [eax + 0x10938001], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10938001)))|(0x10u); w8((uint32_t)(EAX + 0x10938001), (_r)); fl_logic(_r,8); }
  /* 10934103 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1093410a:;
  /* 1093410a mov byte ptr [eax + 0x10937f00], dl */
  w8((uint32_t)(EAX + 0x10937f00), (DL));
  /* 10934110 jmp 0x1093412e */
  goto L_1093412e;
L_10934112:;
  /* 10934112 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10934115 je 0x10934127 */
  if (C.zf) goto L_10934127;
  /* 10934117 or byte ptr [eax + 0x10938001], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10938001)))|(0x20u); w8((uint32_t)(EAX + 0x10938001), (_r)); fl_logic(_r,8); }
  /* 1093411e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10934125 jmp 0x1093410a */
  goto L_1093410a;
L_10934127:;
  /* 10934127 and byte ptr [eax + 0x10937f00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10937f00)))&(0x0u); w8((uint32_t)(EAX + 0x10937f00), (_r)); fl_logic(_r,8); }
L_1093412e:;
  /* 1093412e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093412f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10934130 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10934131 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934133 jb 0x109340f4 */
  if (C.cf) goto L_109340f4;
  /* 10934135 jmp 0x10934180 */
  goto L_10934180;
L_10934137:;
  /* 10934137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10934139 mov esi, 0x100 */
  ESI = (0x100u);
L_1093413e:;
  /* 1093413e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934141 jb 0x1093415c */
  if (C.cf) goto L_1093415c;
  /* 10934143 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934146 ja 0x1093415c */
  if ((!C.cf&&!C.zf)) goto L_1093415c;
  /* 10934148 or byte ptr [eax + 0x10938001], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10938001)))|(0x10u); w8((uint32_t)(EAX + 0x10938001), (_r)); fl_logic(_r,8); }
  /* 1093414f mov cl, al */
  CL = (AL);
  /* 10934151 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10934154:;
  /* 10934154 mov byte ptr [eax + 0x10937f00], cl */
  w8((uint32_t)(EAX + 0x10937f00), (CL));
  /* 1093415a jmp 0x1093417b */
  goto L_1093417b;
L_1093415c:;
  /* 1093415c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093415f jb 0x10934174 */
  if (C.cf) goto L_10934174;
  /* 10934161 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934164 ja 0x10934174 */
  if ((!C.cf&&!C.zf)) goto L_10934174;
  /* 10934166 or byte ptr [eax + 0x10938001], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10938001)))|(0x20u); w8((uint32_t)(EAX + 0x10938001), (_r)); fl_logic(_r,8); }
  /* 1093416d mov cl, al */
  CL = (AL);
  /* 1093416f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10934172 jmp 0x10934154 */
  goto L_10934154;
L_10934174:;
  /* 10934174 and byte ptr [eax + 0x10937f00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10937f00)))&(0x0u); w8((uint32_t)(EAX + 0x10937f00), (_r)); fl_logic(_r,8); }
L_1093417b:;
  /* 1093417b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093417c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093417e jb 0x1093413e */
  if (C.cf) goto L_1093413e;
L_10934180:;
  /* 10934180 pop esi */
  ESI = (pop32());
  /* 10934181 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10934182 ret  */
  ESPCHK(0x10933ffeu, _esp0);
  ESP += 4; return;
}

/* FUN_10004183 @ 0x10934183 (28 bytes, 7 insns) */
void f_10934183(void) {
  FTRACE(0x10934183u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934183 cmp dword ptr [0x10938228], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10938228))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093418a jne 0x1093419e */
  if (!C.zf) goto L_1093419e;
  /* 1093418c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1093418e call 0x10933dab */
  push32(0x10934193u); f_10933dab();
  /* 10934193 pop ecx */
  ECX = (pop32());
  /* 10934194 mov dword ptr [0x10938228], 1 */
  w32((uint32_t)(0x10938228), (0x1u));
L_1093419e:;
  /* 1093419e ret  */
  ESPCHK(0x10934183u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x109341a0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_109341a0(void) {
  FTRACE(0x109341a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109341a0 push ebp */
  push32((uint32_t)(EBP));
  /* 109341a1 mov ebp, esp */
  EBP = (ESP);
  /* 109341a3 push edi */
  push32((uint32_t)(EDI));
  /* 109341a4 push esi */
  push32((uint32_t)(ESI));
  /* 109341a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109341a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109341ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109341ae mov eax, ecx */
  EAX = (ECX);
  /* 109341b0 mov edx, ecx */
  EDX = (ECX);
  /* 109341b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109341b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109341b6 jbe 0x109341c0 */
  if ((C.cf||C.zf)) goto L_109341c0;
  /* 109341b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109341ba jb 0x10934338 */
  if (C.cf) goto L_10934338;
L_109341c0:;
  /* 109341c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109341c6 jne 0x109341dc */
  if (!C.zf) goto L_109341dc;
  /* 109341c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109341cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109341ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109341d1 jb 0x109341fc */
  if (C.cf) goto L_109341fc;
  /* 109341d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109341d5 jmp dword ptr [edx*4 + 0x109342e8] */
  switch (EDX) {
    case 0: goto L_109342f8;
    case 1: goto L_10934300;
    case 2: goto L_1093430c;
    case 3: goto L_10934320;
    default: x86_unimpl("switch@0x109341d5 out of table"); return;
  }
L_109341dc:;
  /* 109341dc mov eax, edi */
  EAX = (EDI);
  /* 109341de mov edx, 3 */
  EDX = (0x3u);
  /* 109341e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109341e6 jb 0x109341f4 */
  if (C.cf) goto L_109341f4;
  /* 109341e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 109341eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109341ed jmp dword ptr [eax*4 + 0x10934200] */
  switch (EAX) {
    case 1: goto L_10934210;
    case 2: goto L_1093423c;
    case 3: goto L_10934260;
    default: x86_unimpl("switch@0x109341ed out of table"); return;
  }
L_109341f4:;
  /* 109341f4 jmp dword ptr [ecx*4 + 0x109342f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x109342f8)))); return;
  /* 109341fb nop  */
  /* nop */
L_109341fc:;
  /* 109341fc jmp dword ptr [ecx*4 + 0x1093427c] */
  switch (ECX) {
    case 0: goto L_109342df;
    case 1: goto L_109342cc;
    case 2: goto L_109342c4;
    case 3: goto L_109342bc;
    case 4: goto L_109342b4;
    case 5: goto L_109342ac;
    case 6: goto L_109342a4;
    case 7: goto L_1093429c;
    default: x86_unimpl("switch@0x109341fc out of table"); return;
  }
  /* 10934203 nop  */
  /* nop */
L_10934210:;
  /* 10934210 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10934212 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10934214 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934216 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10934219 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1093421c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1093421f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10934222 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10934225 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10934228 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1093422b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093422e jb 0x109341fc */
  if (C.cf) goto L_109341fc;
  /* 10934230 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10934232 jmp dword ptr [edx*4 + 0x109342e8] */
  switch (EDX) {
    case 0: goto L_109342f8;
    case 1: goto L_10934300;
    case 2: goto L_1093430c;
    case 3: goto L_10934320;
    default: x86_unimpl("switch@0x10934232 out of table"); return;
  }
  /* 10934239 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1093423c:;
  /* 1093423c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1093423e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10934240 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934242 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10934245 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10934248 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1093424b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1093424e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10934251 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934254 jb 0x109341fc */
  if (C.cf) goto L_109341fc;
  /* 10934256 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10934258 jmp dword ptr [edx*4 + 0x109342e8] */
  switch (EDX) {
    case 0: goto L_109342f8;
    case 1: goto L_10934300;
    case 2: goto L_1093430c;
    case 3: goto L_10934320;
    default: x86_unimpl("switch@0x10934258 out of table"); return;
  }
  /* 1093425f nop  */
  /* nop */
L_10934260:;
  /* 10934260 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10934262 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10934264 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934266 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10934267 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1093426a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1093426b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093426e jb 0x109341fc */
  if (C.cf) goto L_109341fc;
  /* 10934270 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10934272 jmp dword ptr [edx*4 + 0x109342e8] */
  switch (EDX) {
    case 0: goto L_109342f8;
    case 1: goto L_10934300;
    case 2: goto L_1093430c;
    case 3: goto L_10934320;
    default: x86_unimpl("switch@0x10934272 out of table"); return;
  }
  /* 10934279 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1093429c:;
  /* 1093429c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 109342a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_109342a4:;
  /* 109342a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 109342a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_109342ac:;
  /* 109342ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 109342b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_109342b4:;
  /* 109342b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 109342b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_109342bc:;
  /* 109342bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 109342c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_109342c4:;
  /* 109342c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 109342c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_109342cc:;
  /* 109342cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 109342d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 109342d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109342db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109342dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109342df:;
  /* 109342df jmp dword ptr [edx*4 + 0x109342e8] */
  switch (EDX) {
    case 0: goto L_109342f8;
    case 1: goto L_10934300;
    case 2: goto L_1093430c;
    case 3: goto L_10934320;
    default: x86_unimpl("switch@0x109342df out of table"); return;
  }
  /* 109342e6 mov edi, edi */
  EDI = (EDI);
L_109342f8:;
  /* 109342f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109342fb pop esi */
  ESI = (pop32());
  /* 109342fc pop edi */
  EDI = (pop32());
  /* 109342fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109342fe ret  */
  ESPCHK(0x109341a0u, _esp0);
  ESP += 4; return;
  /* 109342ff nop  */
  /* nop */
L_10934300:;
  /* 10934300 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10934302 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934307 pop esi */
  ESI = (pop32());
  /* 10934308 pop edi */
  EDI = (pop32());
  /* 10934309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1093430a ret  */
  ESPCHK(0x109341a0u, _esp0);
  ESP += 4; return;
  /* 1093430b nop  */
  /* nop */
L_1093430c:;
  /* 1093430c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1093430e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934310 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10934313 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10934316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934319 pop esi */
  ESI = (pop32());
  /* 1093431a pop edi */
  EDI = (pop32());
  /* 1093431b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1093431c ret  */
  ESPCHK(0x109341a0u, _esp0);
  ESP += 4; return;
  /* 1093431d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10934320:;
  /* 10934320 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10934322 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934324 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10934327 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1093432a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1093432d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10934330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934333 pop esi */
  ESI = (pop32());
  /* 10934334 pop edi */
  EDI = (pop32());
  /* 10934335 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10934336 ret  */
  ESPCHK(0x109341a0u, _esp0);
  ESP += 4; return;
  /* 10934337 nop  */
  /* nop */
L_10934338:;
  /* 10934338 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1093433c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10934340 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10934346 jne 0x1093436c */
  if (!C.zf) goto L_1093436c;
  /* 10934348 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1093434b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1093434e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934351 jb 0x10934360 */
  if (C.cf) goto L_10934360;
  /* 10934353 std  */
  C.df=1;
  /* 10934354 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10934356 cld  */
  C.df=0;
  /* 10934357 jmp dword ptr [edx*4 + 0x10934480] */
  switch (EDX) {
    case 0: goto L_10934490;
    case 1: goto L_10934498;
    case 2: goto L_109344a8;
    case 3: goto L_109344bc;
    default: x86_unimpl("switch@0x10934357 out of table"); return;
  }
  /* 1093435e mov edi, edi */
  EDI = (EDI);
L_10934360:;
  /* 10934360 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10934362 jmp dword ptr [ecx*4 + 0x10934430] */
  switch (ECX) {
    case 0: goto L_10934477;
    default: x86_unimpl("switch@0x10934362 out of table"); return;
  }
  /* 10934369 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1093436c:;
  /* 1093436c mov eax, edi */
  EAX = (EDI);
  /* 1093436e mov edx, 3 */
  EDX = (0x3u);
  /* 10934373 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934376 jb 0x10934384 */
  if (C.cf) goto L_10934384;
  /* 10934378 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1093437b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093437d jmp dword ptr [eax*4 + 0x10934388] */
  switch (EAX) {
    case 1: goto L_10934398;
    case 2: goto L_109343b8;
    case 3: goto L_109343e0;
    default: x86_unimpl("switch@0x1093437d out of table"); return;
  }
L_10934384:;
  /* 10934384 jmp dword ptr [ecx*4 + 0x10934480] */
  switch (ECX) {
    case 0: goto L_10934490;
    case 1: goto L_10934498;
    case 2: goto L_109344a8;
    case 3: goto L_109344bc;
    default: x86_unimpl("switch@0x10934384 out of table"); return;
  }
  /* 1093438b nop  */
  /* nop */
L_10934398:;
  /* 10934398 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1093439b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1093439d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109343a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 109343a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109343a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109343a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109343a8 jb 0x10934360 */
  if (C.cf) goto L_10934360;
  /* 109343aa std  */
  C.df=1;
  /* 109343ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109343ad cld  */
  C.df=0;
  /* 109343ae jmp dword ptr [edx*4 + 0x10934480] */
  switch (EDX) {
    case 0: goto L_10934490;
    case 1: goto L_10934498;
    case 2: goto L_109344a8;
    case 3: goto L_109344bc;
    default: x86_unimpl("switch@0x109343ae out of table"); return;
  }
  /* 109343b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109343b8:;
  /* 109343b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109343bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109343bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109343c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109343c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109343c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109343c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109343cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109343cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109343d2 jb 0x10934360 */
  if (C.cf) goto L_10934360;
  /* 109343d4 std  */
  C.df=1;
  /* 109343d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109343d7 cld  */
  C.df=0;
  /* 109343d8 jmp dword ptr [edx*4 + 0x10934480] */
  switch (EDX) {
    case 0: goto L_10934490;
    case 1: goto L_10934498;
    case 2: goto L_109344a8;
    case 3: goto L_109344bc;
    default: x86_unimpl("switch@0x109343d8 out of table"); return;
  }
  /* 109343df nop  */
  /* nop */
L_109343e0:;
  /* 109343e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109343e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109343e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109343e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109343eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109343ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109343f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109343f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109343f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109343fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109343fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934400 jb 0x10934360 */
  if (C.cf) goto L_10934360;
  /* 10934406 std  */
  C.df=1;
  /* 10934407 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10934409 cld  */
  C.df=0;
  /* 1093440a jmp dword ptr [edx*4 + 0x10934480] */
  switch (EDX) {
    case 0: goto L_10934490;
    case 1: goto L_10934498;
    case 2: goto L_109344a8;
    case 3: goto L_109344bc;
    default: x86_unimpl("switch@0x1093440a out of table"); return;
  }
  /* 10934411 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10934414 xor al, 0x44 */
  { uint32_t _r=(AL)^(0x44u); AL = (_r); fl_logic(_r,8); }
  /* 10934416 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 10934417 adc byte ptr [esp + eax*2], bh */
  { uint32_t _a=(r8((uint32_t)(ESP + EAX*2))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EAX*2), (_r)); fl_add(_a,_b,_r,8); }
  /* 1093441a xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 1093441b adc byte ptr [esp + eax*2 - 0x6d], al */
  { uint32_t _a=(r8((uint32_t)(ESP + EAX*2 + -0x6d))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EAX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 1093441f adc byte ptr [esp + eax*2 - 0x6d], cl */
  { uint32_t _a=(r8((uint32_t)(ESP + EAX*2 + -0x6d))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EAX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 10934423 adc byte ptr [esp + eax*2 - 0x6d], dl */
  { uint32_t _a=(r8((uint32_t)(ESP + EAX*2 + -0x6d))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EAX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 10934427 adc byte ptr [esp + eax*2 - 0x6d], bl */
  { uint32_t _a=(r8((uint32_t)(ESP + EAX*2 + -0x6d))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EAX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 1093442b adc byte ptr [esp + eax*2 - 0x6d], ah */
  { uint32_t _a=(r8((uint32_t)(ESP + EAX*2 + -0x6d))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EAX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 10934434 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10934438 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1093443c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10934440 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10934444 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10934448 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1093444c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10934450 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10934454 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10934458 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1093445c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10934460 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10934464 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10934468 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1093446c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10934473 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10934475 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10934477:;
  /* 10934477 jmp dword ptr [edx*4 + 0x10934480] */
  switch (EDX) {
    case 0: goto L_10934490;
    case 1: goto L_10934498;
    case 2: goto L_109344a8;
    case 3: goto L_109344bc;
    default: x86_unimpl("switch@0x10934477 out of table"); return;
  }
  /* 1093447e mov edi, edi */
  EDI = (EDI);
L_10934490:;
  /* 10934490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934493 pop esi */
  ESI = (pop32());
  /* 10934494 pop edi */
  EDI = (pop32());
  /* 10934495 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10934496 ret  */
  ESPCHK(0x109341a0u, _esp0);
  ESP += 4; return;
  /* 10934497 nop  */
  /* nop */
L_10934498:;
  /* 10934498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1093449b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1093449e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109344a1 pop esi */
  ESI = (pop32());
  /* 109344a2 pop edi */
  EDI = (pop32());
  /* 109344a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109344a4 ret  */
  ESPCHK(0x109341a0u, _esp0);
  ESP += 4; return;
  /* 109344a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109344a8:;
  /* 109344a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109344ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109344ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109344b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109344b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109344b7 pop esi */
  ESI = (pop32());
  /* 109344b8 pop edi */
  EDI = (pop32());
  /* 109344b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109344ba ret  */
  ESPCHK(0x109341a0u, _esp0);
  ESP += 4; return;
  /* 109344bb nop  */
  /* nop */
L_109344bc:;
  /* 109344bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109344bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109344c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109344c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109344c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109344cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109344ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109344d1 pop esi */
  ESI = (pop32());
  /* 109344d2 pop edi */
  EDI = (pop32());
  /* 109344d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109344d4 ret  */
  ESPCHK(0x109341a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d5 @ 0x109344d5 (62 bytes, 15 insns) */
void f_109344d5(void) {
  FTRACE(0x109344d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109344d5 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 109344da push 0 */
  push32((uint32_t)(0x0u));
  /* 109344dc push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 109344e2 call dword ptr [0x1093603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093603c))), 0x109344e8u);
  /* 109344e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109344ea mov dword ptr [0x10937ecc], eax */
  w32((uint32_t)(0x10937ecc), (EAX));
  /* 109344ef jne 0x109344f2 */
  if (!C.zf) goto L_109344f2;
  /* 109344f1 ret  */
  ESPCHK(0x109344d5u, _esp0);
  ESP += 4; return;
L_109344f2:;
  /* 109344f2 and dword ptr [0x10937ec4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10937ec4)))&(0x0u); w32((uint32_t)(0x10937ec4), (_r)); fl_logic(_r,32); }
  /* 109344f9 and dword ptr [0x10937ec8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10937ec8)))&(0x0u); w32((uint32_t)(0x10937ec8), (_r)); fl_logic(_r,32); }
  /* 10934500 push 1 */
  push32((uint32_t)(0x1u));
  /* 10934502 mov dword ptr [0x10937ec0], eax */
  w32((uint32_t)(0x10937ec0), (EAX));
  /* 10934507 mov dword ptr [0x10937eb8], 0x10 */
  w32((uint32_t)(0x10937eb8), (0x10u));
  /* 10934511 pop eax */
  EAX = (pop32());
  /* 10934512 ret  */
  ESPCHK(0x109344d5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004513 @ 0x10934513 (43 bytes, 14 insns) */
void f_10934513(void) {
  FTRACE(0x10934513u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934513 mov eax, dword ptr [0x10937ec8] */
  EAX = (r32((uint32_t)(0x10937ec8)));
  /* 10934518 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1093451b mov eax, dword ptr [0x10937ecc] */
  EAX = (r32((uint32_t)(0x10937ecc)));
  /* 10934520 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10934523:;
  /* 10934523 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934525 jae 0x1093453b */
  if (!C.cf) goto L_1093453b;
  /* 10934527 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1093452b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093452e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934534 jb 0x1093453d */
  if (C.cf) goto L_1093453d;
  /* 10934536 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934539 jmp 0x10934523 */
  goto L_10934523;
L_1093453b:;
  /* 1093453b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1093453d:;
  /* 1093453d ret  */
  ESPCHK(0x10934513u, _esp0);
  ESP += 4; return;
}

/* FUN_1000453e @ 0x1093453e (811 bytes, 264 insns) */
void f_1093453e(void) {
  FTRACE(0x1093453eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1093453e push ebp */
  push32((uint32_t)(EBP));
  /* 1093453f mov ebp, esp */
  EBP = (ESP);
  /* 10934541 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10934544 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10934547 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1093454a push ebx */
  push32((uint32_t)(EBX));
  /* 1093454b push esi */
  push32((uint32_t)(ESI));
  /* 1093454c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1093454f mov esi, edx */
  ESI = (EDX);
  /* 10934551 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10934554 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10934557 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093455a push edi */
  push32((uint32_t)(EDI));
  /* 1093455b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 1093455e mov ecx, esi */
  ECX = (ESI);
  /* 10934560 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10934563 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10934569 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1093456a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1093456d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10934574 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10934577 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1093457a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 1093457d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10934580 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10934583 jne 0x10934604 */
  if (!C.zf) goto L_10934604;
  /* 10934585 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10934588 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1093458a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1093458b pop edi */
  EDI = (pop32());
  /* 1093458c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1093458f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934591 jbe 0x10934596 */
  if ((C.cf||C.zf)) goto L_10934596;
  /* 10934593 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10934596:;
  /* 10934596 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1093459a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093459e jne 0x109345e8 */
  if (!C.zf) goto L_109345e8;
  /* 109345a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109345a3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109345a6 jae 0x109345c4 */
  if (!C.cf) goto L_109345c4;
  /* 109345a8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 109345ad shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 109345af lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 109345b3 not edi */
  EDI = (~(EDI));
  /* 109345b5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 109345b9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 109345bb jne 0x109345e8 */
  if (!C.zf) goto L_109345e8;
  /* 109345bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109345c0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 109345c2 jmp 0x109345e8 */
  goto L_109345e8;
L_109345c4:;
  /* 109345c4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109345c7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 109345cc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 109345ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 109345d1 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 109345d5 not edi */
  EDI = (~(EDI));
  /* 109345d7 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 109345de dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 109345e0 jne 0x109345e8 */
  if (!C.zf) goto L_109345e8;
  /* 109345e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109345e5 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_109345e8:;
  /* 109345e8 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 109345ec mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 109345f0 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 109345f3 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 109345f7 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 109345fb add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109345fe mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10934601 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10934604:;
  /* 10934604 mov edi, ebx */
  EDI = (EBX);
  /* 10934606 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10934609 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1093460a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093460d jbe 0x10934612 */
  if ((C.cf||C.zf)) goto L_10934612;
  /* 1093460f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10934611 pop edi */
  EDI = (pop32());
L_10934612:;
  /* 10934612 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934615 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10934618 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1093461b jne 0x109346c1 */
  if (!C.zf) goto L_109346c1;
  /* 10934621 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10934624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934627 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1093462a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1093462c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1093462f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10934630 pop edx */
  EDX = (pop32());
  /* 10934631 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934633 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10934636 jbe 0x1093463d */
  if ((C.cf||C.zf)) goto L_1093463d;
  /* 10934638 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1093463b mov ecx, edx */
  ECX = (EDX);
L_1093463d:;
  /* 1093463d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934640 mov edi, ebx */
  EDI = (EBX);
  /* 10934642 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10934645 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10934648 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10934649 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093464b jbe 0x1093464f */
  if ((C.cf||C.zf)) goto L_1093464f;
  /* 1093464d mov edi, edx */
  EDI = (EDX);
L_1093464f:;
  /* 1093464f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934651 je 0x109346be */
  if (C.zf) goto L_109346be;
  /* 10934653 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10934656 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10934659 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093465c jne 0x109346a6 */
  if (!C.zf) goto L_109346a6;
  /* 1093465e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10934661 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934664 jae 0x10934682 */
  if (!C.cf) goto L_10934682;
  /* 10934666 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1093466b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1093466d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10934671 not edx */
  EDX = (~(EDX));
  /* 10934673 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10934677 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10934679 jne 0x109346a6 */
  if (!C.zf) goto L_109346a6;
  /* 1093467b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1093467e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10934680 jmp 0x109346a6 */
  goto L_109346a6;
L_10934682:;
  /* 10934682 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934685 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1093468a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1093468c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1093468f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10934693 not edx */
  EDX = (~(EDX));
  /* 10934695 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1093469c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1093469e jne 0x109346a6 */
  if (!C.zf) goto L_109346a6;
  /* 109346a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109346a3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_109346a6:;
  /* 109346a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109346a9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 109346ac mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 109346af mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 109346b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 109346b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 109346b8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 109346bb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_109346be:;
  /* 109346be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_109346c1:;
  /* 109346c1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109346c5 jne 0x109346d0 */
  if (!C.zf) goto L_109346d0;
  /* 109346c7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109346ca je 0x10934759 */
  if (C.zf) goto L_10934759;
L_109346d0:;
  /* 109346d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109346d3 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 109346d6 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 109346d9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 109346dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109346df lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 109346e2 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 109346e5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 109346e8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 109346eb mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 109346ee mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 109346f1 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109346f4 jne 0x10934759 */
  if (!C.zf) goto L_10934759;
  /* 109346f6 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 109346fa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109346fd mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10934700 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10934702 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10934706 jae 0x1093472d */
  if (!C.cf) goto L_1093472d;
  /* 10934708 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093470c jne 0x1093471c */
  if (!C.zf) goto L_1093471c;
  /* 1093470e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10934713 mov ecx, edi */
  ECX = (EDI);
  /* 10934715 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10934717 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1093471a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1093471c:;
  /* 1093471c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10934721 mov ecx, edi */
  ECX = (EDI);
  /* 10934723 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10934725 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10934729 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1093472b jmp 0x10934756 */
  goto L_10934756;
L_1093472d:;
  /* 1093472d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10934731 jne 0x10934743 */
  if (!C.zf) goto L_10934743;
  /* 10934733 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10934736 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1093473b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1093473d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934740 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10934743:;
  /* 10934743 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10934746 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1093474b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1093474d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10934754 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10934756:;
  /* 10934756 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10934759:;
  /* 10934759 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1093475c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1093475e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10934762 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10934764 jne 0x10934864 */
  if (!C.zf) goto L_10934864;
  /* 1093476a mov eax, dword ptr [0x10937ec4] */
  EAX = (r32((uint32_t)(0x10937ec4)));
  /* 1093476f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934771 je 0x10934856 */
  if (C.zf) goto L_10934856;
  /* 10934777 mov ecx, dword ptr [0x10937ebc] */
  ECX = (r32((uint32_t)(0x10937ebc)));
  /* 1093477d mov edi, dword ptr [0x10936050] */
  EDI = (r32((uint32_t)(0x10936050)));
  /* 10934783 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10934786 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934789 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1093478e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10934793 push ebx */
  push32((uint32_t)(EBX));
  /* 10934794 push ecx */
  push32((uint32_t)(ECX));
  /* 10934795 call edi */
  call_ind((uint32_t)(EDI), 0x10934797u);
  /* 10934797 mov ecx, dword ptr [0x10937ebc] */
  ECX = (r32((uint32_t)(0x10937ebc)));
  /* 1093479d mov eax, dword ptr [0x10937ec4] */
  EAX = (r32((uint32_t)(0x10937ec4)));
  /* 109347a2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 109347a7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 109347a9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 109347ac mov eax, dword ptr [0x10937ec4] */
  EAX = (r32((uint32_t)(0x10937ec4)));
  /* 109347b1 mov ecx, dword ptr [0x10937ebc] */
  ECX = (r32((uint32_t)(0x10937ebc)));
  /* 109347b7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 109347ba and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 109347c2 mov eax, dword ptr [0x10937ec4] */
  EAX = (r32((uint32_t)(0x10937ec4)));
  /* 109347c7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 109347ca dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 109347cd mov eax, dword ptr [0x10937ec4] */
  EAX = (r32((uint32_t)(0x10937ec4)));
  /* 109347d2 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 109347d5 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 109347d9 jne 0x109347e4 */
  if (!C.zf) goto L_109347e4;
  /* 109347db and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 109347df mov eax, dword ptr [0x10937ec4] */
  EAX = (r32((uint32_t)(0x10937ec4)));
L_109347e4:;
  /* 109347e4 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109347e8 jne 0x10934856 */
  if (!C.zf) goto L_10934856;
  /* 109347ea push ebx */
  push32((uint32_t)(EBX));
  /* 109347eb push 0 */
  push32((uint32_t)(0x0u));
  /* 109347ed push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 109347f0 call edi */
  call_ind((uint32_t)(EDI), 0x109347f2u);
  /* 109347f2 mov eax, dword ptr [0x10937ec4] */
  EAX = (r32((uint32_t)(0x10937ec4)));
  /* 109347f7 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 109347fa push 0 */
  push32((uint32_t)(0x0u));
  /* 109347fc push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10934802 call dword ptr [0x1093604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093604c))), 0x10934808u);
  /* 10934808 mov eax, dword ptr [0x10937ec8] */
  EAX = (r32((uint32_t)(0x10937ec8)));
  /* 1093480d mov edx, dword ptr [0x10937ecc] */
  EDX = (r32((uint32_t)(0x10937ecc)));
  /* 10934813 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10934816 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10934819 mov ecx, eax */
  ECX = (EAX);
  /* 1093481b mov eax, dword ptr [0x10937ec4] */
  EAX = (r32((uint32_t)(0x10937ec4)));
  /* 10934820 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10934822 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10934826 push ecx */
  push32((uint32_t)(ECX));
  /* 10934827 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1093482a push ecx */
  push32((uint32_t)(ECX));
  /* 1093482b push eax */
  push32((uint32_t)(EAX));
  /* 1093482c call 0x109352c0 */
  push32(0x10934831u); f_109352c0();
  /* 10934831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934834 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10934837 dec dword ptr [0x10937ec8] */
  { uint32_t _r=(r32((uint32_t)(0x10937ec8)))-1; w32((uint32_t)(0x10937ec8), (_r)); fl_dec(_r,32); }
  /* 1093483d cmp eax, dword ptr [0x10937ec4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10937ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934843 jbe 0x10934848 */
  if ((C.cf||C.zf)) goto L_10934848;
  /* 10934845 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10934848:;
  /* 10934848 mov ecx, dword ptr [0x10937ecc] */
  ECX = (r32((uint32_t)(0x10937ecc)));
  /* 1093484e mov dword ptr [0x10937ec0], ecx */
  w32((uint32_t)(0x10937ec0), (ECX));
  /* 10934854 jmp 0x10934859 */
  goto L_10934859;
L_10934856:;
  /* 10934856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10934859:;
  /* 10934859 mov dword ptr [0x10937ec4], eax */
  w32((uint32_t)(0x10937ec4), (EAX));
  /* 1093485e mov dword ptr [0x10937ebc], esi */
  w32((uint32_t)(0x10937ebc), (ESI));
L_10934864:;
  /* 10934864 pop edi */
  EDI = (pop32());
  /* 10934865 pop esi */
  ESI = (pop32());
  /* 10934866 pop ebx */
  EBX = (pop32());
  /* 10934867 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10934868 ret  */
  ESPCHK(0x1093453eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004869 @ 0x10934869 (777 bytes, 275 insns) */
void f_10934869(void) {
  FTRACE(0x10934869u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934869 push ebp */
  push32((uint32_t)(EBP));
  /* 1093486a mov ebp, esp */
  EBP = (ESP);
  /* 1093486c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093486f mov eax, dword ptr [0x10937ec8] */
  EAX = (r32((uint32_t)(0x10937ec8)));
  /* 10934874 mov edx, dword ptr [0x10937ecc] */
  EDX = (r32((uint32_t)(0x10937ecc)));
  /* 1093487a push ebx */
  push32((uint32_t)(EBX));
  /* 1093487b push esi */
  push32((uint32_t)(ESI));
  /* 1093487c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1093487f push edi */
  push32((uint32_t)(EDI));
  /* 10934880 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10934883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934886 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10934889 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1093488c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1093488f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10934892 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10934895 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10934896 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934899 jge 0x109348a9 */
  if ((C.sf==C.of)) goto L_109348a9;
  /* 1093489b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1093489e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 109348a0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 109348a4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 109348a7 jmp 0x109348b9 */
  goto L_109348b9;
L_109348a9:;
  /* 109348a9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109348ac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 109348af xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 109348b1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 109348b3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 109348b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_109348b9:;
  /* 109348b9 mov eax, dword ptr [0x10937ec0] */
  EAX = (r32((uint32_t)(0x10937ec0)));
  /* 109348be mov ebx, eax */
  EBX = (EAX);
  /* 109348c0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109348c2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 109348c5 jae 0x109348e0 */
  if (!C.cf) goto L_109348e0;
L_109348c7:;
  /* 109348c7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 109348ca mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 109348cc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 109348cf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 109348d1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 109348d3 jne 0x109348e0 */
  if (!C.zf) goto L_109348e0;
  /* 109348d5 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109348d8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109348db mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 109348de jb 0x109348c7 */
  if (C.cf) goto L_109348c7;
L_109348e0:;
  /* 109348e0 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109348e3 jne 0x1093495e */
  if (!C.zf) goto L_1093495e;
  /* 109348e5 mov ebx, edx */
  EBX = (EDX);
L_109348e7:;
  /* 109348e7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109348e9 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 109348ec jae 0x10934903 */
  if (!C.cf) goto L_10934903;
  /* 109348ee mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 109348f1 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 109348f3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 109348f6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 109348f8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 109348fa jne 0x10934901 */
  if (!C.zf) goto L_10934901;
  /* 109348fc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 109348ff jmp 0x109348e7 */
  goto L_109348e7;
L_10934901:;
  /* 10934901 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10934903:;
  /* 10934903 jne 0x1093495e */
  if (!C.zf) goto L_1093495e;
L_10934905:;
  /* 10934905 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934908 jae 0x1093491b */
  if (!C.cf) goto L_1093491b;
  /* 1093490a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093490e jne 0x10934918 */
  if (!C.zf) goto L_10934918;
  /* 10934910 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934913 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10934916 jmp 0x10934905 */
  goto L_10934905;
L_10934918:;
  /* 10934918 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1093491b:;
  /* 1093491b jne 0x10934943 */
  if (!C.zf) goto L_10934943;
  /* 1093491d mov ebx, edx */
  EBX = (EDX);
L_1093491f:;
  /* 1093491f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934921 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10934924 jae 0x10934933 */
  if (!C.cf) goto L_10934933;
  /* 10934926 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093492a jne 0x10934931 */
  if (!C.zf) goto L_10934931;
  /* 1093492c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093492f jmp 0x1093491f */
  goto L_1093491f;
L_10934931:;
  /* 10934931 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10934933:;
  /* 10934933 jne 0x10934943 */
  if (!C.zf) goto L_10934943;
  /* 10934935 call 0x10934b72 */
  push32(0x1093493au); f_10934b72();
  /* 1093493a mov ebx, eax */
  EBX = (EAX);
  /* 1093493c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1093493e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10934941 je 0x10934957 */
  if (C.zf) goto L_10934957;
L_10934943:;
  /* 10934943 push ebx */
  push32((uint32_t)(EBX));
  /* 10934944 call 0x10934c23 */
  push32(0x10934949u); f_10934c23();
  /* 10934949 pop ecx */
  ECX = (pop32());
  /* 1093494a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1093494d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1093494f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10934952 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934955 jne 0x1093495e */
  if (!C.zf) goto L_1093495e;
L_10934957:;
  /* 10934957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10934959 jmp 0x10934b6d */
  goto L_10934b6d;
L_1093495e:;
  /* 1093495e mov dword ptr [0x10937ec0], ebx */
  w32((uint32_t)(0x10937ec0), (EBX));
  /* 10934964 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10934967 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10934969 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093496c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1093496f je 0x10934985 */
  if (C.zf) goto L_10934985;
  /* 10934971 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10934978 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1093497c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1093497f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10934981 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10934983 jne 0x109349bc */
  if (!C.zf) goto L_109349bc;
L_10934985:;
  /* 10934985 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1093498b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1093498e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10934991 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10934994 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10934998 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1093499b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1093499d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 109349a0 jne 0x109349b9 */
  if (!C.zf) goto L_109349b9;
L_109349a2:;
  /* 109349a2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 109349a8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 109349ab and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 109349ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 109349b1 mov edi, esi */
  EDI = (ESI);
  /* 109349b3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 109349b5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 109349b7 je 0x109349a2 */
  if (C.zf) goto L_109349a2;
L_109349b9:;
  /* 109349b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_109349bc:;
  /* 109349bc mov ecx, edx */
  ECX = (EDX);
  /* 109349be xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 109349c0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 109349c6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 109349cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 109349d0 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 109349d4 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 109349d6 jne 0x109349e5 */
  if (!C.zf) goto L_109349e5;
  /* 109349d8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 109349df push 0x20 */
  push32((uint32_t)(0x20u));
  /* 109349e1 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 109349e4 pop edi */
  EDI = (pop32());
L_109349e5:;
  /* 109349e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 109349e7 jl 0x109349ee */
  if ((C.sf!=C.of)) goto L_109349ee;
  /* 109349e9 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 109349eb inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 109349ec jmp 0x109349e5 */
  goto L_109349e5;
L_109349ee:;
  /* 109349ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 109349f1 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 109349f5 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 109349f7 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109349fa mov esi, ecx */
  ESI = (ECX);
  /* 109349fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 109349ff sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10934a02 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10934a03 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934a06 jle 0x10934a0b */
  if ((C.zf||C.sf!=C.of)) goto L_10934a0b;
  /* 10934a08 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10934a0a pop esi */
  ESI = (pop32());
L_10934a0b:;
  /* 10934a0b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934a0d je 0x10934b20 */
  if (C.zf) goto L_10934b20;
  /* 10934a13 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10934a16 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934a19 jne 0x10934a7c */
  if (!C.zf) goto L_10934a7c;
  /* 10934a1b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934a1e jge 0x10934a4b */
  if ((C.sf==C.of)) goto L_10934a4b;
  /* 10934a20 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10934a25 mov ecx, edi */
  ECX = (EDI);
  /* 10934a27 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10934a29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934a2c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10934a30 not ebx */
  EBX = (~(EBX));
  /* 10934a32 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10934a35 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10934a39 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10934a3d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10934a3f jne 0x10934a79 */
  if (!C.zf) goto L_10934a79;
  /* 10934a41 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934a44 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10934a47 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10934a49 jmp 0x10934a7c */
  goto L_10934a7c;
L_10934a4b:;
  /* 10934a4b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10934a4e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10934a53 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10934a55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934a58 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10934a5c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10934a63 not ebx */
  EBX = (~(EBX));
  /* 10934a65 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10934a67 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10934a69 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10934a6c jne 0x10934a79 */
  if (!C.zf) goto L_10934a79;
  /* 10934a6e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934a71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10934a74 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10934a77 jmp 0x10934a7c */
  goto L_10934a7c;
L_10934a79:;
  /* 10934a79 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10934a7c:;
  /* 10934a7c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10934a7f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10934a82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934a86 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10934a89 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10934a8c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10934a8f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10934a92 je 0x10934b2c */
  if (C.zf) goto L_10934b2c;
  /* 10934a98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10934a9b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10934a9f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10934aa2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10934aa5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10934aa8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10934aab mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10934aae mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10934ab1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10934ab4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934ab7 jne 0x10934b1d */
  if (!C.zf) goto L_10934b1d;
  /* 10934ab9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10934abd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934ac0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10934ac3 jge 0x10934aee */
  if ((C.sf==C.of)) goto L_10934aee;
  /* 10934ac5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10934ac7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10934acb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10934acf jne 0x10934adc */
  if (!C.zf) goto L_10934adc;
  /* 10934ad1 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10934ad6 mov ecx, esi */
  ECX = (ESI);
  /* 10934ad8 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10934ada or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10934adc:;
  /* 10934adc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10934ae1 mov ecx, esi */
  ECX = (ESI);
  /* 10934ae3 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10934ae5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934ae8 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10934aec jmp 0x10934b1d */
  goto L_10934b1d;
L_10934aee:;
  /* 10934aee inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10934af0 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10934af4 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10934af8 jne 0x10934b07 */
  if (!C.zf) goto L_10934b07;
  /* 10934afa lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10934afd mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10934b02 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10934b04 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10934b07:;
  /* 10934b07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934b0a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10934b11 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10934b14 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10934b19 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10934b1b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10934b1d:;
  /* 10934b1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10934b20:;
  /* 10934b20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10934b22 je 0x10934b2f */
  if (C.zf) goto L_10934b2f;
  /* 10934b24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10934b26 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10934b2a jmp 0x10934b2f */
  goto L_10934b2f;
L_10934b2c:;
  /* 10934b2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10934b2f:;
  /* 10934b2f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10934b32 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934b34 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10934b37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10934b39 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10934b3d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10934b40 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10934b42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10934b44 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10934b47 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10934b49 jne 0x10934b65 */
  if (!C.zf) goto L_10934b65;
  /* 10934b4b cmp ebx, dword ptr [0x10937ec4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10937ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934b51 jne 0x10934b65 */
  if (!C.zf) goto L_10934b65;
  /* 10934b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934b56 cmp ecx, dword ptr [0x10937ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10937ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934b5c jne 0x10934b65 */
  if (!C.zf) goto L_10934b65;
  /* 10934b5e and dword ptr [0x10937ec4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10937ec4)))&(0x0u); w32((uint32_t)(0x10937ec4), (_r)); fl_logic(_r,32); }
L_10934b65:;
  /* 10934b65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934b68 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10934b6a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10934b6d:;
  /* 10934b6d pop edi */
  EDI = (pop32());
  /* 10934b6e pop esi */
  ESI = (pop32());
  /* 10934b6f pop ebx */
  EBX = (pop32());
  /* 10934b70 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10934b71 ret  */
  ESPCHK(0x10934869u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b72 @ 0x10934b72 (177 bytes, 53 insns) */
void f_10934b72(void) {
  FTRACE(0x10934b72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934b72 mov eax, dword ptr [0x10937ec8] */
  EAX = (r32((uint32_t)(0x10937ec8)));
  /* 10934b77 mov ecx, dword ptr [0x10937eb8] */
  ECX = (r32((uint32_t)(0x10937eb8)));
  /* 10934b7d push esi */
  push32((uint32_t)(ESI));
  /* 10934b7e push edi */
  push32((uint32_t)(EDI));
  /* 10934b7f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10934b81 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934b83 jne 0x10934bb5 */
  if (!C.zf) goto L_10934bb5;
  /* 10934b85 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10934b89 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10934b8c push eax */
  push32((uint32_t)(EAX));
  /* 10934b8d push dword ptr [0x10937ecc] */
  push32((uint32_t)(r32((uint32_t)(0x10937ecc))));
  /* 10934b93 push edi */
  push32((uint32_t)(EDI));
  /* 10934b94 push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10934b9a call dword ptr [0x10936028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936028))), 0x10934ba0u);
  /* 10934ba0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934ba2 je 0x10934c05 */
  if (C.zf) goto L_10934c05;
  /* 10934ba4 add dword ptr [0x10937eb8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10937eb8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10937eb8), (_r)); fl_add(_a,_b,_r,32); }
  /* 10934bab mov dword ptr [0x10937ecc], eax */
  w32((uint32_t)(0x10937ecc), (EAX));
  /* 10934bb0 mov eax, dword ptr [0x10937ec8] */
  EAX = (r32((uint32_t)(0x10937ec8)));
L_10934bb5:;
  /* 10934bb5 mov ecx, dword ptr [0x10937ecc] */
  ECX = (r32((uint32_t)(0x10937ecc)));
  /* 10934bbb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10934bc0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10934bc2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10934bc5 push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10934bcb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10934bce call dword ptr [0x1093603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093603c))), 0x10934bd4u);
  /* 10934bd4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934bd6 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10934bd9 je 0x10934c05 */
  if (C.zf) goto L_10934c05;
  /* 10934bdb push 4 */
  push32((uint32_t)(0x4u));
  /* 10934bdd push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10934be2 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10934be7 push edi */
  push32((uint32_t)(EDI));
  /* 10934be8 call dword ptr [0x1093602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093602c))), 0x10934beeu);
  /* 10934bee cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934bf0 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10934bf3 jne 0x10934c09 */
  if (!C.zf) goto L_10934c09;
  /* 10934bf5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10934bf8 push edi */
  push32((uint32_t)(EDI));
  /* 10934bf9 push dword ptr [0x10938108] */
  push32((uint32_t)(r32((uint32_t)(0x10938108))));
  /* 10934bff call dword ptr [0x1093604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093604c))), 0x10934c05u);
L_10934c05:;
  /* 10934c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10934c07 jmp 0x10934c20 */
  goto L_10934c20;
L_10934c09:;
  /* 10934c09 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10934c0d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10934c0f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10934c12 inc dword ptr [0x10937ec8] */
  { uint32_t _r=(r32((uint32_t)(0x10937ec8)))+1; w32((uint32_t)(0x10937ec8), (_r)); fl_inc(_r,32); }
  /* 10934c18 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10934c1b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10934c1e mov eax, esi */
  EAX = (ESI);
L_10934c20:;
  /* 10934c20 pop edi */
  EDI = (pop32());
  /* 10934c21 pop esi */
  ESI = (pop32());
  /* 10934c22 ret  */
  ESPCHK(0x10934b72u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c23 @ 0x10934c23 (251 bytes, 85 insns) */
void f_10934c23(void) {
  FTRACE(0x10934c23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934c23 push ebp */
  push32((uint32_t)(EBP));
  /* 10934c24 mov ebp, esp */
  EBP = (ESP);
  /* 10934c26 push ecx */
  push32((uint32_t)(ECX));
  /* 10934c27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934c2a push ebx */
  push32((uint32_t)(EBX));
  /* 10934c2b push esi */
  push32((uint32_t)(ESI));
  /* 10934c2c push edi */
  push32((uint32_t)(EDI));
  /* 10934c2d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10934c30 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10934c33 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10934c35:;
  /* 10934c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934c37 jl 0x10934c3e */
  if ((C.sf!=C.of)) goto L_10934c3e;
  /* 10934c39 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10934c3b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10934c3c jmp 0x10934c35 */
  goto L_10934c35;
L_10934c3e:;
  /* 10934c3e mov eax, ebx */
  EAX = (EBX);
  /* 10934c40 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10934c42 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10934c48 pop edx */
  EDX = (pop32());
  /* 10934c49 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10934c50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10934c53:;
  /* 10934c53 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10934c56 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10934c59 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934c5c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10934c5d jne 0x10934c53 */
  if (!C.zf) goto L_10934c53;
  /* 10934c5f mov edi, ebx */
  EDI = (EBX);
  /* 10934c61 push 4 */
  push32((uint32_t)(0x4u));
  /* 10934c63 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10934c66 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10934c69 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10934c6e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10934c73 push edi */
  push32((uint32_t)(EDI));
  /* 10934c74 call dword ptr [0x1093602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093602c))), 0x10934c7au);
  /* 10934c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934c7c jne 0x10934c86 */
  if (!C.zf) goto L_10934c86;
  /* 10934c7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10934c81 jmp 0x10934d19 */
  goto L_10934d19;
L_10934c86:;
  /* 10934c86 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10934c8c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934c8e ja 0x10934ccc */
  if ((!C.cf&&!C.zf)) goto L_10934ccc;
  /* 10934c90 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10934c93:;
  /* 10934c93 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10934c97 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10934c9e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10934ca4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10934cab mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10934cad lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10934cb3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10934cb6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10934cc0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934cc5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10934cc8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934cca jbe 0x10934c93 */
  if ((C.cf||C.zf)) goto L_10934c93;
L_10934ccc:;
  /* 10934ccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10934ccf lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10934cd2 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934cd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10934cd9 pop edi */
  EDI = (pop32());
  /* 10934cda mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10934cdd mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10934ce0 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10934ce3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10934ce6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10934ce9 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10934cee mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10934cf5 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10934cf8 mov cl, al */
  CL = (AL);
  /* 10934cfa inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10934cfc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10934cfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10934d01 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10934d04 jne 0x10934d09 */
  if (!C.zf) goto L_10934d09;
  /* 10934d06 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10934d09:;
  /* 10934d09 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10934d0e mov ecx, ebx */
  ECX = (EBX);
  /* 10934d10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10934d12 not edx */
  EDX = (~(EDX));
  /* 10934d14 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10934d17 mov eax, ebx */
  EAX = (EBX);
L_10934d19:;
  /* 10934d19 pop edi */
  EDI = (pop32());
  /* 10934d1a pop esi */
  ESI = (pop32());
  /* 10934d1b pop ebx */
  EBX = (pop32());
  /* 10934d1c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10934d1d ret  */
  ESPCHK(0x10934c23u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d1e @ 0x10934d1e (137 bytes, 50 insns) */
void f_10934d1e(void) {
  FTRACE(0x10934d1eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934d1e push ebx */
  push32((uint32_t)(EBX));
  /* 10934d1f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10934d21 cmp dword ptr [0x10937e7c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10937e7c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934d27 push esi */
  push32((uint32_t)(ESI));
  /* 10934d28 push edi */
  push32((uint32_t)(EDI));
  /* 10934d29 jne 0x10934d6d */
  if (!C.zf) goto L_10934d6d;
  /* 10934d2b push 0x10936488 */
  push32((uint32_t)(0x10936488u));
  /* 10934d30 call dword ptr [0x1093601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093601c))), 0x10934d36u);
  /* 10934d36 mov edi, eax */
  EDI = (EAX);
  /* 10934d38 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934d3a je 0x10934da3 */
  if (C.zf) goto L_10934da3;
  /* 10934d3c mov esi, dword ptr [0x10936020] */
  ESI = (r32((uint32_t)(0x10936020)));
  /* 10934d42 push 0x1093647c */
  push32((uint32_t)(0x1093647cu));
  /* 10934d47 push edi */
  push32((uint32_t)(EDI));
  /* 10934d48 call esi */
  call_ind((uint32_t)(ESI), 0x10934d4au);
  /* 10934d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934d4c mov dword ptr [0x10937e7c], eax */
  w32((uint32_t)(0x10937e7c), (EAX));
  /* 10934d51 je 0x10934da3 */
  if (C.zf) goto L_10934da3;
  /* 10934d53 push 0x1093646c */
  push32((uint32_t)(0x1093646cu));
  /* 10934d58 push edi */
  push32((uint32_t)(EDI));
  /* 10934d59 call esi */
  call_ind((uint32_t)(ESI), 0x10934d5bu);
  /* 10934d5b push 0x10936458 */
  push32((uint32_t)(0x10936458u));
  /* 10934d60 push edi */
  push32((uint32_t)(EDI));
  /* 10934d61 mov dword ptr [0x10937e80], eax */
  w32((uint32_t)(0x10937e80), (EAX));
  /* 10934d66 call esi */
  call_ind((uint32_t)(ESI), 0x10934d68u);
  /* 10934d68 mov dword ptr [0x10937e84], eax */
  w32((uint32_t)(0x10937e84), (EAX));
L_10934d6d:;
  /* 10934d6d mov eax, dword ptr [0x10937e80] */
  EAX = (r32((uint32_t)(0x10937e80)));
  /* 10934d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934d74 je 0x10934d8c */
  if (C.zf) goto L_10934d8c;
  /* 10934d76 call eax */
  call_ind((uint32_t)(EAX), 0x10934d78u);
  /* 10934d78 mov ebx, eax */
  EBX = (EAX);
  /* 10934d7a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10934d7c je 0x10934d8c */
  if (C.zf) goto L_10934d8c;
  /* 10934d7e mov eax, dword ptr [0x10937e84] */
  EAX = (r32((uint32_t)(0x10937e84)));
  /* 10934d83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934d85 je 0x10934d8c */
  if (C.zf) goto L_10934d8c;
  /* 10934d87 push ebx */
  push32((uint32_t)(EBX));
  /* 10934d88 call eax */
  call_ind((uint32_t)(EAX), 0x10934d8au);
  /* 10934d8a mov ebx, eax */
  EBX = (EAX);
L_10934d8c:;
  /* 10934d8c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10934d90 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10934d94 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10934d98 push ebx */
  push32((uint32_t)(EBX));
  /* 10934d99 call dword ptr [0x10937e7c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10937e7c))), 0x10934d9fu);
L_10934d9f:;
  /* 10934d9f pop edi */
  EDI = (pop32());
  /* 10934da0 pop esi */
  ESI = (pop32());
  /* 10934da1 pop ebx */
  EBX = (pop32());
  /* 10934da2 ret  */
  ESPCHK(0x10934d1eu, _esp0);
  ESP += 4; return;
L_10934da3:;
  /* 10934da3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10934da5 jmp 0x10934d9f */
  goto L_10934d9f;
}

/* _strncpy @ 0x10934db0 (254 bytes, 109 insns) */
void f_10934db0(void) {
  FTRACE(0x10934db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934db0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10934db4 push edi */
  push32((uint32_t)(EDI));
  /* 10934db5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10934db7 je 0x10934e33 */
  if (C.zf) goto L_10934e33;
  /* 10934db9 push esi */
  push32((uint32_t)(ESI));
  /* 10934dba push ebx */
  push32((uint32_t)(EBX));
  /* 10934dbb mov ebx, ecx */
  EBX = (ECX);
  /* 10934dbd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10934dc1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10934dc7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10934dcb jne 0x10934dd4 */
  if (!C.zf) goto L_10934dd4;
  /* 10934dcd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10934dd0 jne 0x10934e41 */
  if (!C.zf) goto L_10934e41;
  /* 10934dd2 jmp 0x10934df5 */
  goto L_10934df5;
L_10934dd4:;
  /* 10934dd4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10934dd6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10934dd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934dd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10934dda dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10934ddb je 0x10934e02 */
  if (C.zf) goto L_10934e02;
  /* 10934ddd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10934ddf je 0x10934e0a */
  if (C.zf) goto L_10934e0a;
  /* 10934de1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10934de7 jne 0x10934dd4 */
  if (!C.zf) goto L_10934dd4;
  /* 10934de9 mov ebx, ecx */
  EBX = (ECX);
  /* 10934deb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10934dee jne 0x10934e41 */
  if (!C.zf) goto L_10934e41;
L_10934df0:;
  /* 10934df0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10934df3 je 0x10934e02 */
  if (C.zf) goto L_10934e02;
L_10934df5:;
  /* 10934df5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10934df7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10934df8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934dfa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10934dfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10934dfd je 0x10934e2e */
  if (C.zf) goto L_10934e2e;
  /* 10934dff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10934e00 jne 0x10934df5 */
  if (!C.zf) goto L_10934df5;
L_10934e02:;
  /* 10934e02 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10934e06 pop ebx */
  EBX = (pop32());
  /* 10934e07 pop esi */
  ESI = (pop32());
  /* 10934e08 pop edi */
  EDI = (pop32());
  /* 10934e09 ret  */
  ESPCHK(0x10934db0u, _esp0);
  ESP += 4; return;
L_10934e0a:;
  /* 10934e0a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10934e10 je 0x10934e24 */
  if (C.zf) goto L_10934e24;
L_10934e12:;
  /* 10934e12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934e14 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10934e15 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10934e16 je 0x10934ea6 */
  if (C.zf) goto L_10934ea6;
  /* 10934e1c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10934e22 jne 0x10934e12 */
  if (!C.zf) goto L_10934e12;
L_10934e24:;
  /* 10934e24 mov ebx, ecx */
  EBX = (ECX);
  /* 10934e26 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10934e29 jne 0x10934e97 */
  if (!C.zf) goto L_10934e97;
L_10934e2b:;
  /* 10934e2b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934e2d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10934e2e:;
  /* 10934e2e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10934e2f jne 0x10934e2b */
  if (!C.zf) goto L_10934e2b;
  /* 10934e31 pop ebx */
  EBX = (pop32());
  /* 10934e32 pop esi */
  ESI = (pop32());
L_10934e33:;
  /* 10934e33 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10934e37 pop edi */
  EDI = (pop32());
  /* 10934e38 ret  */
  ESPCHK(0x10934db0u, _esp0);
  ESP += 4; return;
L_10934e39:;
  /* 10934e39 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10934e3b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10934e3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10934e3f je 0x10934df0 */
  if (C.zf) goto L_10934df0;
L_10934e41:;
  /* 10934e41 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10934e46 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10934e48 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934e4a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10934e4d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10934e4f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10934e51 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10934e54 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10934e59 je 0x10934e39 */
  if (C.zf) goto L_10934e39;
  /* 10934e5b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10934e5d je 0x10934e8b */
  if (C.zf) goto L_10934e8b;
  /* 10934e5f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10934e61 je 0x10934e81 */
  if (C.zf) goto L_10934e81;
  /* 10934e63 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10934e69 je 0x10934e77 */
  if (C.zf) goto L_10934e77;
  /* 10934e6b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10934e71 jne 0x10934e39 */
  if (!C.zf) goto L_10934e39;
  /* 10934e73 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10934e75 jmp 0x10934e8f */
  goto L_10934e8f;
L_10934e77:;
  /* 10934e77 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10934e7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10934e7f jmp 0x10934e8f */
  goto L_10934e8f;
L_10934e81:;
  /* 10934e81 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10934e87 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10934e89 jmp 0x10934e8f */
  goto L_10934e8f;
L_10934e8b:;
  /* 10934e8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10934e8d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10934e8f:;
  /* 10934e8f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10934e92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10934e94 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10934e95 je 0x10934ea1 */
  if (C.zf) goto L_10934ea1;
L_10934e97:;
  /* 10934e97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10934e99:;
  /* 10934e99 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10934e9b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10934e9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10934e9f jne 0x10934e99 */
  if (!C.zf) goto L_10934e99;
L_10934ea1:;
  /* 10934ea1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10934ea4 jne 0x10934e2b */
  if (!C.zf) goto L_10934e2b;
L_10934ea6:;
  /* 10934ea6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10934eaa pop ebx */
  EBX = (pop32());
  /* 10934eab pop esi */
  ESI = (pop32());
  /* 10934eac pop edi */
  EDI = (pop32());
  /* 10934ead ret  */
  ESPCHK(0x10934db0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10934eb0 (88 bytes, 40 insns) */
void f_10934eb0(void) {
  FTRACE(0x10934eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934eb0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10934eb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10934eb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10934eba je 0x10934f03 */
  if (C.zf) goto L_10934f03;
  /* 10934ebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10934ebe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10934ec2 push edi */
  push32((uint32_t)(EDI));
  /* 10934ec3 mov edi, ecx */
  EDI = (ECX);
  /* 10934ec5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934ec8 jb 0x10934ef7 */
  if (C.cf) goto L_10934ef7;
  /* 10934eca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10934ecc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10934ecf je 0x10934ed9 */
  if (C.zf) goto L_10934ed9;
  /* 10934ed1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10934ed3:;
  /* 10934ed3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934ed5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10934ed6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10934ed7 jne 0x10934ed3 */
  if (!C.zf) goto L_10934ed3;
L_10934ed9:;
  /* 10934ed9 mov ecx, eax */
  ECX = (EAX);
  /* 10934edb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10934ede add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934ee0 mov ecx, eax */
  ECX = (EAX);
  /* 10934ee2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10934ee5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10934ee7 mov ecx, edx */
  ECX = (EDX);
  /* 10934ee9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10934eec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10934eef je 0x10934ef7 */
  if (C.zf) goto L_10934ef7;
  /* 10934ef1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10934ef3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10934ef5 je 0x10934efd */
  if (C.zf) goto L_10934efd;
L_10934ef7:;
  /* 10934ef7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10934ef9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10934efa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10934efb jne 0x10934ef7 */
  if (!C.zf) goto L_10934ef7;
L_10934efd:;
  /* 10934efd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10934f01 pop edi */
  EDI = (pop32());
  /* 10934f02 ret  */
  ESPCHK(0x10934eb0u, _esp0);
  ESP += 4; return;
L_10934f03:;
  /* 10934f03 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10934f07 ret  */
  ESPCHK(0x10934eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f08 @ 0x10934f08 (27 bytes, 13 insns) */
void f_10934f08(void) {
  FTRACE(0x10934f08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934f08 mov eax, dword ptr [0x10937e88] */
  EAX = (r32((uint32_t)(0x10937e88)));
  /* 10934f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934f0f je 0x10934f20 */
  if (C.zf) goto L_10934f20;
  /* 10934f11 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10934f15 call eax */
  call_ind((uint32_t)(EAX), 0x10934f17u);
  /* 10934f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934f19 pop ecx */
  ECX = (pop32());
  /* 10934f1a je 0x10934f20 */
  if (C.zf) goto L_10934f20;
  /* 10934f1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10934f1e pop eax */
  EAX = (pop32());
  /* 10934f1f ret  */
  ESPCHK(0x10934f08u, _esp0);
  ESP += 4; return;
L_10934f20:;
  /* 10934f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10934f22 ret  */
  ESPCHK(0x10934f08u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f23 @ 0x10934f23 (511 bytes, 193 insns) */
void f_10934f23(void) {
  FTRACE(0x10934f23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10934f23 push ebp */
  push32((uint32_t)(EBP));
  /* 10934f24 mov ebp, esp */
  EBP = (ESP);
  /* 10934f26 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10934f28 push 0x109364a0 */
  push32((uint32_t)(0x109364a0u));
  /* 10934f2d push 0x109356f0 */
  push32((uint32_t)(0x109356f0u));
  /* 10934f32 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10934f38 push eax */
  push32((uint32_t)(EAX));
  /* 10934f39 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10934f40 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10934f43 push ebx */
  push32((uint32_t)(EBX));
  /* 10934f44 push esi */
  push32((uint32_t)(ESI));
  /* 10934f45 push edi */
  push32((uint32_t)(EDI));
  /* 10934f46 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10934f49 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10934f4b cmp dword ptr [0x10937eb0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10937eb0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934f51 jne 0x10934f99 */
  if (!C.zf) goto L_10934f99;
  /* 10934f53 push edi */
  push32((uint32_t)(EDI));
  /* 10934f54 push edi */
  push32((uint32_t)(EDI));
  /* 10934f55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10934f57 pop ebx */
  EBX = (pop32());
  /* 10934f58 push ebx */
  push32((uint32_t)(EBX));
  /* 10934f59 push 0x10936498 */
  push32((uint32_t)(0x10936498u));
  /* 10934f5e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10934f63 push esi */
  push32((uint32_t)(ESI));
  /* 10934f64 push edi */
  push32((uint32_t)(EDI));
  /* 10934f65 call dword ptr [0x10936010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936010))), 0x10934f6bu);
  /* 10934f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934f6d je 0x10934f77 */
  if (C.zf) goto L_10934f77;
  /* 10934f6f mov dword ptr [0x10937eb0], ebx */
  w32((uint32_t)(0x10937eb0), (EBX));
  /* 10934f75 jmp 0x10934f99 */
  goto L_10934f99;
L_10934f77:;
  /* 10934f77 push edi */
  push32((uint32_t)(EDI));
  /* 10934f78 push edi */
  push32((uint32_t)(EDI));
  /* 10934f79 push ebx */
  push32((uint32_t)(EBX));
  /* 10934f7a push 0x10936494 */
  push32((uint32_t)(0x10936494u));
  /* 10934f7f push esi */
  push32((uint32_t)(ESI));
  /* 10934f80 push edi */
  push32((uint32_t)(EDI));
  /* 10934f81 call dword ptr [0x10936014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936014))), 0x10934f87u);
  /* 10934f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10934f89 je 0x109350b1 */
  if (C.zf) goto L_109350b1;
  /* 10934f8f mov dword ptr [0x10937eb0], 2 */
  w32((uint32_t)(0x10937eb0), (0x2u));
L_10934f99:;
  /* 10934f99 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934f9c jle 0x10934fae */
  if ((C.zf||C.sf!=C.of)) goto L_10934fae;
  /* 10934f9e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10934fa1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10934fa4 call 0x10935147 */
  push32(0x10934fa9u); f_10935147();
  /* 10934fa9 pop ecx */
  ECX = (pop32());
  /* 10934faa pop ecx */
  ECX = (pop32());
  /* 10934fab mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10934fae:;
  /* 10934fae mov eax, dword ptr [0x10937eb0] */
  EAX = (r32((uint32_t)(0x10937eb0)));
  /* 10934fb3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934fb6 jne 0x10934fd5 */
  if (!C.zf) goto L_10934fd5;
  /* 10934fb8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10934fbb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10934fbe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10934fc1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10934fc4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10934fc7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10934fca call dword ptr [0x10936014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936014))), 0x10934fd0u);
  /* 10934fd0 jmp 0x109350b3 */
  goto L_109350b3;
L_10934fd5:;
  /* 10934fd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934fd8 jne 0x109350b1 */
  if (!C.zf) goto L_109350b1;
  /* 10934fde cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10934fe1 jne 0x10934feb */
  if (!C.zf) goto L_10934feb;
  /* 10934fe3 mov eax, dword ptr [0x10937ea8] */
  EAX = (r32((uint32_t)(0x10937ea8)));
  /* 10934fe8 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10934feb:;
  /* 10934feb push edi */
  push32((uint32_t)(EDI));
  /* 10934fec push edi */
  push32((uint32_t)(EDI));
  /* 10934fed push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10934ff0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10934ff3 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10934ff6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10934ff8 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10934ffa and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10934ffd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10934ffe push eax */
  push32((uint32_t)(EAX));
  /* 10934fff push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10935002 call dword ptr [0x10936024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936024))), 0x10935008u);
  /* 10935008 mov ebx, eax */
  EBX = (EAX);
  /* 1093500a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1093500d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093500f je 0x109350b1 */
  if (C.zf) goto L_109350b1;
  /* 10935015 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10935018 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1093501b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093501e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10935020 call 0x109357d0 */
  push32(0x10935025u); f_109357d0();
  /* 10935025 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10935028 mov eax, esp */
  EAX = (ESP);
  /* 1093502a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1093502d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10935031 jmp 0x10935046 */
  goto L_10935046;
  /* 10935033 push 1 */
  push32((uint32_t)(0x1u));
  /* 10935035 pop eax */
  EAX = (pop32());
  /* 10935036 ret  */
  ESPCHK(0x10934f23u, _esp0);
  ESP += 4; return;
  /* 10935037 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1093503a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1093503c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1093503f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10935043 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10935046:;
  /* 10935046 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935049 je 0x109350b1 */
  if (C.zf) goto L_109350b1;
  /* 1093504b push ebx */
  push32((uint32_t)(EBX));
  /* 1093504c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1093504f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10935052 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10935055 push 1 */
  push32((uint32_t)(0x1u));
  /* 10935057 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1093505a call dword ptr [0x10936024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936024))), 0x10935060u);
  /* 10935060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10935062 je 0x109350b1 */
  if (C.zf) goto L_109350b1;
  /* 10935064 push edi */
  push32((uint32_t)(EDI));
  /* 10935065 push edi */
  push32((uint32_t)(EDI));
  /* 10935066 push ebx */
  push32((uint32_t)(EBX));
  /* 10935067 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1093506a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1093506d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10935070 call dword ptr [0x10936010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936010))), 0x10935076u);
  /* 10935076 mov esi, eax */
  ESI = (EAX);
  /* 10935078 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1093507b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093507d je 0x109350b1 */
  if (C.zf) goto L_109350b1;
  /* 1093507f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10935083 je 0x109350c5 */
  if (C.zf) goto L_109350c5;
  /* 10935085 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935088 je 0x10935140 */
  if (C.zf) goto L_10935140;
  /* 1093508e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935091 jg 0x109350b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_109350b1;
  /* 10935093 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10935096 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10935099 push ebx */
  push32((uint32_t)(EBX));
  /* 1093509a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1093509d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 109350a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 109350a3 call dword ptr [0x10936010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936010))), 0x109350a9u);
  /* 109350a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109350ab jne 0x10935140 */
  if (!C.zf) goto L_10935140;
L_109350b1:;
  /* 109350b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109350b3:;
  /* 109350b3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 109350b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109350b9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109350c0 pop edi */
  EDI = (pop32());
  /* 109350c1 pop esi */
  ESI = (pop32());
  /* 109350c2 pop ebx */
  EBX = (pop32());
  /* 109350c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109350c4 ret  */
  ESPCHK(0x10934f23u, _esp0);
  ESP += 4; return;
L_109350c5:;
  /* 109350c5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 109350cc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 109350cf add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109350d2 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 109350d4 call 0x109357d0 */
  push32(0x109350d9u); f_109357d0();
  /* 109350d9 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 109350dc mov ebx, esp */
  EBX = (ESP);
  /* 109350de mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 109350e1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109350e5 jmp 0x109350f9 */
  goto L_109350f9;
  /* 109350e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109350e9 pop eax */
  EAX = (pop32());
  /* 109350ea ret  */
  ESPCHK(0x10934f23u, _esp0);
  ESP += 4; return;
  /* 109350eb mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 109350ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 109350f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 109350f2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 109350f6 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_109350f9:;
  /* 109350f9 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109350fb je 0x109350b1 */
  if (C.zf) goto L_109350b1;
  /* 109350fd push esi */
  push32((uint32_t)(ESI));
  /* 109350fe push ebx */
  push32((uint32_t)(EBX));
  /* 109350ff push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10935102 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10935105 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10935108 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1093510b call dword ptr [0x10936010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936010))), 0x10935111u);
  /* 10935111 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10935113 je 0x109350b1 */
  if (C.zf) goto L_109350b1;
  /* 10935115 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935118 push edi */
  push32((uint32_t)(EDI));
  /* 10935119 push edi */
  push32((uint32_t)(EDI));
  /* 1093511a jne 0x10935120 */
  if (!C.zf) goto L_10935120;
  /* 1093511c push edi */
  push32((uint32_t)(EDI));
  /* 1093511d push edi */
  push32((uint32_t)(EDI));
  /* 1093511e jmp 0x10935126 */
  goto L_10935126;
L_10935120:;
  /* 10935120 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10935123 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10935126:;
  /* 10935126 push esi */
  push32((uint32_t)(ESI));
  /* 10935127 push ebx */
  push32((uint32_t)(EBX));
  /* 10935128 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1093512d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10935130 call dword ptr [0x10936064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936064))), 0x10935136u);
  /* 10935136 mov esi, eax */
  ESI = (EAX);
  /* 10935138 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093513a je 0x109350b1 */
  if (C.zf) goto L_109350b1;
L_10935140:;
  /* 10935140 mov eax, esi */
  EAX = (ESI);
  /* 10935142 jmp 0x109350b3 */
  goto L_109350b3;
}

/* FUN_10005147 @ 0x10935147 (43 bytes, 20 insns) */
void f_10935147(void) {
  FTRACE(0x10935147u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10935147 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1093514b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1093514f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10935151 push esi */
  push32((uint32_t)(ESI));
  /* 10935152 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10935155 je 0x10935164 */
  if (C.zf) goto L_10935164;
L_10935157:;
  /* 10935157 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1093515a je 0x10935164 */
  if (C.zf) goto L_10935164;
  /* 1093515c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1093515d mov esi, ecx */
  ESI = (ECX);
  /* 1093515f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10935160 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10935162 jne 0x10935157 */
  if (!C.zf) goto L_10935157;
L_10935164:;
  /* 10935164 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10935167 pop esi */
  ESI = (pop32());
  /* 10935168 jne 0x1093516f */
  if (!C.zf) goto L_1093516f;
  /* 1093516a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093516e ret  */
  ESPCHK(0x10935147u, _esp0);
  ESP += 4; return;
L_1093516f:;
  /* 1093516f mov eax, edx */
  EAX = (EDX);
  /* 10935171 ret  */
  ESPCHK(0x10935147u, _esp0);
  ESP += 4; return;
}

/* FUN_10005172 @ 0x10935172 (318 bytes, 123 insns) */
void f_10935172(void) {
  FTRACE(0x10935172u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10935172 push ebp */
  push32((uint32_t)(EBP));
  /* 10935173 mov ebp, esp */
  EBP = (ESP);
  /* 10935175 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10935177 push 0x109364b8 */
  push32((uint32_t)(0x109364b8u));
  /* 1093517c push 0x109356f0 */
  push32((uint32_t)(0x109356f0u));
  /* 10935181 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10935187 push eax */
  push32((uint32_t)(EAX));
  /* 10935188 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1093518f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10935192 push ebx */
  push32((uint32_t)(EBX));
  /* 10935193 push esi */
  push32((uint32_t)(ESI));
  /* 10935194 push edi */
  push32((uint32_t)(EDI));
  /* 10935195 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10935198 mov eax, dword ptr [0x10937eb4] */
  EAX = (r32((uint32_t)(0x10937eb4)));
  /* 1093519d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1093519f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109351a1 jne 0x109351e1 */
  if (!C.zf) goto L_109351e1;
  /* 109351a3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 109351a6 push eax */
  push32((uint32_t)(EAX));
  /* 109351a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 109351a9 pop esi */
  ESI = (pop32());
  /* 109351aa push esi */
  push32((uint32_t)(ESI));
  /* 109351ab push 0x10936498 */
  push32((uint32_t)(0x10936498u));
  /* 109351b0 push esi */
  push32((uint32_t)(ESI));
  /* 109351b1 call dword ptr [0x1093600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093600c))), 0x109351b7u);
  /* 109351b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109351b9 je 0x109351bf */
  if (C.zf) goto L_109351bf;
  /* 109351bb mov eax, esi */
  EAX = (ESI);
  /* 109351bd jmp 0x109351dc */
  goto L_109351dc;
L_109351bf:;
  /* 109351bf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 109351c2 push eax */
  push32((uint32_t)(EAX));
  /* 109351c3 push esi */
  push32((uint32_t)(ESI));
  /* 109351c4 push 0x10936494 */
  push32((uint32_t)(0x10936494u));
  /* 109351c9 push esi */
  push32((uint32_t)(ESI));
  /* 109351ca push ebx */
  push32((uint32_t)(EBX));
  /* 109351cb call dword ptr [0x10936018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936018))), 0x109351d1u);
  /* 109351d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 109351d3 je 0x109352a7 */
  if (C.zf) goto L_109352a7;
  /* 109351d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 109351db pop eax */
  EAX = (pop32());
L_109351dc:;
  /* 109351dc mov dword ptr [0x10937eb4], eax */
  w32((uint32_t)(0x10937eb4), (EAX));
L_109351e1:;
  /* 109351e1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109351e4 jne 0x1093520a */
  if (!C.zf) goto L_1093520a;
  /* 109351e6 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 109351e9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109351eb jne 0x109351f2 */
  if (!C.zf) goto L_109351f2;
  /* 109351ed mov eax, dword ptr [0x10937e98] */
  EAX = (r32((uint32_t)(0x10937e98)));
L_109351f2:;
  /* 109351f2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 109351f5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 109351f8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 109351fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 109351fe push eax */
  push32((uint32_t)(EAX));
  /* 109351ff call dword ptr [0x10936018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936018))), 0x10935205u);
  /* 10935205 jmp 0x109352a9 */
  goto L_109352a9;
L_1093520a:;
  /* 1093520a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093520d jne 0x109352a7 */
  if (!C.zf) goto L_109352a7;
  /* 10935213 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935216 jne 0x10935220 */
  if (!C.zf) goto L_10935220;
  /* 10935218 mov eax, dword ptr [0x10937ea8] */
  EAX = (r32((uint32_t)(0x10937ea8)));
  /* 1093521d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10935220:;
  /* 10935220 push ebx */
  push32((uint32_t)(EBX));
  /* 10935221 push ebx */
  push32((uint32_t)(EBX));
  /* 10935222 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10935225 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10935228 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1093522b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1093522d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093522f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10935232 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10935233 push eax */
  push32((uint32_t)(EAX));
  /* 10935234 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10935237 call dword ptr [0x10936024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936024))), 0x1093523du);
  /* 1093523d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10935240 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935242 je 0x109352a7 */
  if (C.zf) goto L_109352a7;
  /* 10935244 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10935247 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1093524a mov eax, edi */
  EAX = (EDI);
  /* 1093524c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093524f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10935251 call 0x109357d0 */
  push32(0x10935256u); f_109357d0();
  /* 10935256 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10935259 mov esi, esp */
  ESI = (ESP);
  /* 1093525b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1093525e push edi */
  push32((uint32_t)(EDI));
  /* 1093525f push ebx */
  push32((uint32_t)(EBX));
  /* 10935260 push esi */
  push32((uint32_t)(ESI));
  /* 10935261 call 0x10934eb0 */
  push32(0x10935266u); f_10934eb0();
  /* 10935266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10935269 jmp 0x10935276 */
  goto L_10935276;
  /* 1093526b push 1 */
  push32((uint32_t)(0x1u));
  /* 1093526d pop eax */
  EAX = (pop32());
  /* 1093526e ret  */
  ESPCHK(0x10935172u, _esp0);
  ESP += 4; return;
  /* 1093526f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10935272 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10935274 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10935276:;
  /* 10935276 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1093527a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093527c je 0x109352a7 */
  if (C.zf) goto L_109352a7;
  /* 1093527e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10935281 push esi */
  push32((uint32_t)(ESI));
  /* 10935282 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10935285 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10935288 push 1 */
  push32((uint32_t)(0x1u));
  /* 1093528a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1093528d call dword ptr [0x10936024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10936024))), 0x10935293u);
  /* 10935293 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935295 je 0x109352a7 */
  if (C.zf) goto L_109352a7;
  /* 10935297 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1093529a push eax */
  push32((uint32_t)(EAX));
  /* 1093529b push esi */
  push32((uint32_t)(ESI));
  /* 1093529c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1093529f call dword ptr [0x1093600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1093600c))), 0x109352a5u);
  /* 109352a5 jmp 0x109352a9 */
  goto L_109352a9;
L_109352a7:;
  /* 109352a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_109352a9:;
  /* 109352a9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 109352ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 109352af mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 109352b6 pop edi */
  EDI = (pop32());
  /* 109352b7 pop esi */
  ESI = (pop32());
  /* 109352b8 pop ebx */
  EBX = (pop32());
  /* 109352b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109352ba ret  */
  ESPCHK(0x10935172u, _esp0);
  ESP += 4; return;
}

/* FUN_100052c0 @ 0x109352c0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_109352c0(void) {
  FTRACE(0x109352c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109352c0 push ebp */
  push32((uint32_t)(EBP));
  /* 109352c1 mov ebp, esp */
  EBP = (ESP);
  /* 109352c3 push edi */
  push32((uint32_t)(EDI));
  /* 109352c4 push esi */
  push32((uint32_t)(ESI));
  /* 109352c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 109352c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 109352cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 109352ce mov eax, ecx */
  EAX = (ECX);
  /* 109352d0 mov edx, ecx */
  EDX = (ECX);
  /* 109352d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 109352d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109352d6 jbe 0x109352e0 */
  if ((C.cf||C.zf)) goto L_109352e0;
  /* 109352d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109352da jb 0x10935458 */
  if (C.cf) goto L_10935458;
L_109352e0:;
  /* 109352e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 109352e6 jne 0x109352fc */
  if (!C.zf) goto L_109352fc;
  /* 109352e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109352eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 109352ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109352f1 jb 0x1093531c */
  if (C.cf) goto L_1093531c;
  /* 109352f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109352f5 jmp dword ptr [edx*4 + 0x10935408] */
  switch (EDX) {
    case 0: goto L_10935418;
    case 1: goto L_10935420;
    case 2: goto L_1093542c;
    case 3: goto L_10935440;
    default: x86_unimpl("switch@0x109352f5 out of table"); return;
  }
L_109352fc:;
  /* 109352fc mov eax, edi */
  EAX = (EDI);
  /* 109352fe mov edx, 3 */
  EDX = (0x3u);
  /* 10935303 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10935306 jb 0x10935314 */
  if (C.cf) goto L_10935314;
  /* 10935308 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1093530b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1093530d jmp dword ptr [eax*4 + 0x10935320] */
  switch (EAX) {
    case 1: goto L_10935330;
    case 2: goto L_1093535c;
    case 3: goto L_10935380;
    default: x86_unimpl("switch@0x1093530d out of table"); return;
  }
L_10935314:;
  /* 10935314 jmp dword ptr [ecx*4 + 0x10935418] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10935418)))); return;
  /* 1093531b nop  */
  /* nop */
L_1093531c:;
  /* 1093531c jmp dword ptr [ecx*4 + 0x1093539c] */
  switch (ECX) {
    case 0: goto L_109353ff;
    case 1: goto L_109353ec;
    case 2: goto L_109353e4;
    case 3: goto L_109353dc;
    case 4: goto L_109353d4;
    case 5: goto L_109353cc;
    case 6: goto L_109353c4;
    case 7: goto L_109353bc;
    default: x86_unimpl("switch@0x1093531c out of table"); return;
  }
  /* 10935323 nop  */
  /* nop */
L_10935330:;
  /* 10935330 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10935332 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10935334 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10935336 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10935339 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1093533c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1093533f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10935342 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10935345 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10935348 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1093534b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093534e jb 0x1093531c */
  if (C.cf) goto L_1093531c;
  /* 10935350 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10935352 jmp dword ptr [edx*4 + 0x10935408] */
  switch (EDX) {
    case 0: goto L_10935418;
    case 1: goto L_10935420;
    case 2: goto L_1093542c;
    case 3: goto L_10935440;
    default: x86_unimpl("switch@0x10935352 out of table"); return;
  }
  /* 10935359 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1093535c:;
  /* 1093535c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1093535e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10935360 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10935362 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10935365 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10935368 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1093536b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1093536e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10935371 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935374 jb 0x1093531c */
  if (C.cf) goto L_1093531c;
  /* 10935376 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10935378 jmp dword ptr [edx*4 + 0x10935408] */
  switch (EDX) {
    case 0: goto L_10935418;
    case 1: goto L_10935420;
    case 2: goto L_1093542c;
    case 3: goto L_10935440;
    default: x86_unimpl("switch@0x10935378 out of table"); return;
  }
  /* 1093537f nop  */
  /* nop */
L_10935380:;
  /* 10935380 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10935382 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10935384 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10935386 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10935387 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1093538a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1093538b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093538e jb 0x1093531c */
  if (C.cf) goto L_1093531c;
  /* 10935390 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10935392 jmp dword ptr [edx*4 + 0x10935408] */
  switch (EDX) {
    case 0: goto L_10935418;
    case 1: goto L_10935420;
    case 2: goto L_1093542c;
    case 3: goto L_10935440;
    default: x86_unimpl("switch@0x10935392 out of table"); return;
  }
  /* 10935399 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109353bc:;
  /* 109353bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 109353c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_109353c4:;
  /* 109353c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 109353c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_109353cc:;
  /* 109353cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 109353d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_109353d4:;
  /* 109353d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 109353d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_109353dc:;
  /* 109353dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 109353e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_109353e4:;
  /* 109353e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 109353e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_109353ec:;
  /* 109353ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 109353f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 109353f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 109353fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 109353fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_109353ff:;
  /* 109353ff jmp dword ptr [edx*4 + 0x10935408] */
  switch (EDX) {
    case 0: goto L_10935418;
    case 1: goto L_10935420;
    case 2: goto L_1093542c;
    case 3: goto L_10935440;
    default: x86_unimpl("switch@0x109353ff out of table"); return;
  }
  /* 10935406 mov edi, edi */
  EDI = (EDI);
L_10935418:;
  /* 10935418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1093541b pop esi */
  ESI = (pop32());
  /* 1093541c pop edi */
  EDI = (pop32());
  /* 1093541d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1093541e ret  */
  ESPCHK(0x109352c0u, _esp0);
  ESP += 4; return;
  /* 1093541f nop  */
  /* nop */
L_10935420:;
  /* 10935420 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10935422 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10935424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10935427 pop esi */
  ESI = (pop32());
  /* 10935428 pop edi */
  EDI = (pop32());
  /* 10935429 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1093542a ret  */
  ESPCHK(0x109352c0u, _esp0);
  ESP += 4; return;
  /* 1093542b nop  */
  /* nop */
L_1093542c:;
  /* 1093542c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1093542e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10935430 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10935433 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10935436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10935439 pop esi */
  ESI = (pop32());
  /* 1093543a pop edi */
  EDI = (pop32());
  /* 1093543b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1093543c ret  */
  ESPCHK(0x109352c0u, _esp0);
  ESP += 4; return;
  /* 1093543d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10935440:;
  /* 10935440 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10935442 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10935444 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10935447 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1093544a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1093544d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10935450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10935453 pop esi */
  ESI = (pop32());
  /* 10935454 pop edi */
  EDI = (pop32());
  /* 10935455 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10935456 ret  */
  ESPCHK(0x109352c0u, _esp0);
  ESP += 4; return;
  /* 10935457 nop  */
  /* nop */
L_10935458:;
  /* 10935458 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1093545c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10935460 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10935466 jne 0x1093548c */
  if (!C.zf) goto L_1093548c;
  /* 10935468 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1093546b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1093546e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935471 jb 0x10935480 */
  if (C.cf) goto L_10935480;
  /* 10935473 std  */
  C.df=1;
  /* 10935474 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10935476 cld  */
  C.df=0;
  /* 10935477 jmp dword ptr [edx*4 + 0x109355a0] */
  switch (EDX) {
    case 0: goto L_109355b0;
    case 1: goto L_109355b8;
    case 2: goto L_109355c8;
    case 3: goto L_109355dc;
    default: x86_unimpl("switch@0x10935477 out of table"); return;
  }
  /* 1093547e mov edi, edi */
  EDI = (EDI);
L_10935480:;
  /* 10935480 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10935482 jmp dword ptr [ecx*4 + 0x10935550] */
  switch (ECX) {
    case 0: goto L_10935597;
    default: x86_unimpl("switch@0x10935482 out of table"); return;
  }
  /* 10935489 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1093548c:;
  /* 1093548c mov eax, edi */
  EAX = (EDI);
  /* 1093548e mov edx, 3 */
  EDX = (0x3u);
  /* 10935493 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935496 jb 0x109354a4 */
  if (C.cf) goto L_109354a4;
  /* 10935498 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1093549b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093549d jmp dword ptr [eax*4 + 0x109354a8] */
  switch (EAX) {
    case 1: goto L_109354b8;
    case 2: goto L_109354d8;
    case 3: goto L_10935500;
    default: x86_unimpl("switch@0x1093549d out of table"); return;
  }
L_109354a4:;
  /* 109354a4 jmp dword ptr [ecx*4 + 0x109355a0] */
  switch (ECX) {
    case 0: goto L_109355b0;
    case 1: goto L_109355b8;
    case 2: goto L_109355c8;
    case 3: goto L_109355dc;
    default: x86_unimpl("switch@0x109354a4 out of table"); return;
  }
  /* 109354ab nop  */
  /* nop */
L_109354b8:;
  /* 109354b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109354bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109354bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109354c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 109354c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109354c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 109354c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109354c8 jb 0x10935480 */
  if (C.cf) goto L_10935480;
  /* 109354ca std  */
  C.df=1;
  /* 109354cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109354cd cld  */
  C.df=0;
  /* 109354ce jmp dword ptr [edx*4 + 0x109355a0] */
  switch (EDX) {
    case 0: goto L_109355b0;
    case 1: goto L_109355b8;
    case 2: goto L_109355c8;
    case 3: goto L_109355dc;
    default: x86_unimpl("switch@0x109354ce out of table"); return;
  }
  /* 109354d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109354d8:;
  /* 109354d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109354db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 109354dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109354e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109354e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 109354e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109354e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109354ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 109354ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109354f2 jb 0x10935480 */
  if (C.cf) goto L_10935480;
  /* 109354f4 std  */
  C.df=1;
  /* 109354f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 109354f7 cld  */
  C.df=0;
  /* 109354f8 jmp dword ptr [edx*4 + 0x109355a0] */
  switch (EDX) {
    case 0: goto L_109355b0;
    case 1: goto L_109355b8;
    case 2: goto L_109355c8;
    case 3: goto L_109355dc;
    default: x86_unimpl("switch@0x109354f8 out of table"); return;
  }
  /* 109354ff nop  */
  /* nop */
L_10935500:;
  /* 10935500 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10935503 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10935505 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10935508 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1093550b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1093550e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10935511 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10935514 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10935517 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093551a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1093551d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935520 jb 0x10935480 */
  if (C.cf) goto L_10935480;
  /* 10935526 std  */
  C.df=1;
  /* 10935527 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10935529 cld  */
  C.df=0;
  /* 1093552a jmp dword ptr [edx*4 + 0x109355a0] */
  switch (EDX) {
    case 0: goto L_109355b0;
    case 1: goto L_109355b8;
    case 2: goto L_109355c8;
    case 3: goto L_109355dc;
    default: x86_unimpl("switch@0x1093552a out of table"); return;
  }
  /* 10935531 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10935534 push esp */
  push32((uint32_t)(ESP));
  /* 10935535 push ebp */
  push32((uint32_t)(EBP));
  /* 10935536 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 10935537 adc byte ptr [ebp + edx*2 - 0x6d], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + EDX*2 + -0x6d))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EDX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 1093553b adc byte ptr [ebp + edx*2 - 0x6d], ah */
  { uint32_t _a=(r8((uint32_t)(EBP + EDX*2 + -0x6d))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EDX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 1093553f adc byte ptr [ebp + edx*2 - 0x6d], ch */
  { uint32_t _a=(r8((uint32_t)(EBP + EDX*2 + -0x6d))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EDX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 10935543 adc byte ptr [ebp + edx*2 - 0x6d], dh */
  { uint32_t _a=(r8((uint32_t)(EBP + EDX*2 + -0x6d))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EDX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 10935547 adc byte ptr [ebp + edx*2 - 0x6d], bh */
  { uint32_t _a=(r8((uint32_t)(EBP + EDX*2 + -0x6d))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EDX*2 + -0x6d), (_r)); fl_add(_a,_b,_r,8); }
  /* 1093554c test byte ptr [ebp - 0x6d], dl */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x6d)))&(DL); fl_logic(_r,8); }
  /* 10935554 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10935558 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1093555c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10935560 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10935564 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10935568 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1093556c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10935570 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10935574 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10935578 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1093557c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10935580 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10935584 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10935588 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1093558c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10935593 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10935595 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10935597:;
  /* 10935597 jmp dword ptr [edx*4 + 0x109355a0] */
  switch (EDX) {
    case 0: goto L_109355b0;
    case 1: goto L_109355b8;
    case 2: goto L_109355c8;
    case 3: goto L_109355dc;
    default: x86_unimpl("switch@0x10935597 out of table"); return;
  }
  /* 1093559e mov edi, edi */
  EDI = (EDI);
L_109355b0:;
  /* 109355b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109355b3 pop esi */
  ESI = (pop32());
  /* 109355b4 pop edi */
  EDI = (pop32());
  /* 109355b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109355b6 ret  */
  ESPCHK(0x109352c0u, _esp0);
  ESP += 4; return;
  /* 109355b7 nop  */
  /* nop */
L_109355b8:;
  /* 109355b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109355bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109355be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109355c1 pop esi */
  ESI = (pop32());
  /* 109355c2 pop edi */
  EDI = (pop32());
  /* 109355c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109355c4 ret  */
  ESPCHK(0x109352c0u, _esp0);
  ESP += 4; return;
  /* 109355c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_109355c8:;
  /* 109355c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109355cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109355ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109355d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109355d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109355d7 pop esi */
  ESI = (pop32());
  /* 109355d8 pop edi */
  EDI = (pop32());
  /* 109355d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109355da ret  */
  ESPCHK(0x109352c0u, _esp0);
  ESP += 4; return;
  /* 109355db nop  */
  /* nop */
L_109355dc:;
  /* 109355dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 109355df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 109355e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 109355e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 109355e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 109355eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 109355ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 109355f1 pop esi */
  ESI = (pop32());
  /* 109355f2 pop edi */
  EDI = (pop32());
  /* 109355f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 109355f4 ret  */
  ESPCHK(0x109352c0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x109355f8 (32 bytes, 18 insns) */
void f_109355f8(void) {
  FTRACE(0x109355f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109355f8 push ebp */
  push32((uint32_t)(EBP));
  /* 109355f9 mov ebp, esp */
  EBP = (ESP);
  /* 109355fb push ebx */
  push32((uint32_t)(EBX));
  /* 109355fc push esi */
  push32((uint32_t)(ESI));
  /* 109355fd push edi */
  push32((uint32_t)(EDI));
  /* 109355fe push ebp */
  push32((uint32_t)(EBP));
  /* 109355ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10935601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10935603 push 0x10935610 */
  push32((uint32_t)(0x10935610u));
  /* 10935608 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1093560b call 0x10935800 */
  push32(0x10935610u); f_10935800();
  /* 10935610 pop ebp */
  EBP = (pop32());
  /* 10935611 pop edi */
  EDI = (pop32());
  /* 10935612 pop esi */
  ESI = (pop32());
  /* 10935613 pop ebx */
  EBX = (pop32());
  /* 10935614 mov esp, ebp */
  ESP = (EBP);
  /* 10935616 pop ebp */
  EBP = (pop32());
  /* 10935617 ret  */
  ESPCHK(0x109355f8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1093563a (104 bytes, 33 insns) */
void f_1093563a(void) {
  FTRACE(0x1093563au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1093563a push ebx */
  push32((uint32_t)(EBX));
  /* 1093563b push esi */
  push32((uint32_t)(ESI));
  /* 1093563c push edi */
  push32((uint32_t)(EDI));
  /* 1093563d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10935641 push eax */
  push32((uint32_t)(EAX));
  /* 10935642 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10935644 push 0x10935618 */
  push32((uint32_t)(0x10935618u));
  /* 10935649 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10935650 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10935657:;
  /* 10935657 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1093565b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1093565e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10935661 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10935664 je 0x10935694 */
  if (C.zf) goto L_10935694;
  /* 10935666 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093566a je 0x10935694 */
  if (C.zf) goto L_10935694;
  /* 1093566c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1093566f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10935672 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10935676 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10935679 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1093567e jne 0x10935692 */
  if (!C.zf) goto L_10935692;
  /* 10935680 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10935685 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10935689 call 0x109356ce */
  push32(0x1093568eu); f_109356ce();
  /* 1093568e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10935692u);
L_10935692:;
  /* 10935692 jmp 0x10935657 */
  goto L_10935657;
L_10935694:;
  /* 10935694 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1093569b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1093569e pop edi */
  EDI = (pop32());
  /* 1093569f pop esi */
  ESI = (pop32());
  /* 109356a0 pop ebx */
  EBX = (pop32());
  /* 109356a1 ret  */
  ESPCHK(0x1093563au, _esp0);
  ESP += 4; return;
}

/* FUN_100056ce @ 0x109356ce (24 bytes, 10 insns) */
void f_109356ce(void) {
  FTRACE(0x109356ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109356ce push ebx */
  push32((uint32_t)(EBX));
  /* 109356cf push ecx */
  push32((uint32_t)(ECX));
  /* 109356d0 mov ebx, 0x109379c0 */
  EBX = (0x109379c0u);
  /* 109356d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 109356d8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 109356db mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 109356de mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 109356e1 pop ecx */
  ECX = (pop32());
  /* 109356e2 pop ebx */
  EBX = (pop32());
  /* 109356e3 ret 4 */
  ESPCHK(0x109356ceu, _esp0);
  ESP += 8; return;
}

/* FUN_100057ad @ 0x109357ad (27 bytes, 11 insns) */
void f_109357ad(void) {
  FTRACE(0x109357adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109357ad push ebp */
  push32((uint32_t)(EBP));
  /* 109357ae mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 109357b2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 109357b4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 109357b7 push eax */
  push32((uint32_t)(EAX));
  /* 109357b8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 109357bb push eax */
  push32((uint32_t)(EAX));
  /* 109357bc call 0x1093563a */
  push32(0x109357c1u); f_1093563a();
  /* 109357c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 109357c4 pop ebp */
  EBP = (pop32());
  /* 109357c5 ret 4 */
  ESPCHK(0x109357adu, _esp0);
  ESP += 8; return;
}

/* FUN_100057d0 @ 0x109357d0 (47 bytes, 17 insns) */
void f_109357d0(void) {
  FTRACE(0x109357d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 109357d0 push ecx */
  push32((uint32_t)(ECX));
  /* 109357d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109357d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 109357da jb 0x109357f0 */
  if (C.cf) goto L_109357f0;
L_109357dc:;
  /* 109357dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109357e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109357e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 109357e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 109357ee jae 0x109357dc */
  if (!C.cf) goto L_109357dc;
L_109357f0:;
  /* 109357f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 109357f2 mov eax, esp */
  EAX = (ESP);
  /* 109357f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 109357f6 mov esp, ecx */
  ESP = (ECX);
  /* 109357f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 109357fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 109357fd push eax */
  push32((uint32_t)(EAX));
  /* 109357fe ret  */
  ESPCHK(0x109357d0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10935800 (6 bytes, 1 insns) */
void f_10935800(void) {
  FTRACE(0x10935800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10935800 jmp dword ptr [0x10936008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10936008)))); return;
}

